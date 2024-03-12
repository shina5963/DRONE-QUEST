using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.VFX;
using UnityEngine.InputSystem;
using UnityEditor;
using System.IO;
using UnityEngine.SceneManagement;
//[CustomEditor(typeof(Counter))]
public class Drone : MonoBehaviour
{

    float CT = 1.0f;//推力係数
    float CQ = 1.0f;//トルク係数
    public float[] ω = new float[4];//プロペラの速度，Angular Velocity
   
    public float propellerRotate = 1;//プロペラ回転率，プロペラアニメ用，実際の動作には関係なし
    public static Vector3 eulerRef; //目標値，今回は0,0,0

    // PIDの係数

    public float KpH = 1f;
    public float Kp = 1f;
    public float Ki = 0.1f;
    public float Kd = 0.01f;

    //座標リセット用
    private Vector3 initialPosition;
    private Quaternion initialRotation;
    private Vector3 initialVelocity;
    private Vector3 initialAngularVelocity;

    public static bool canPID = true;

    public static  bool canDrone = true;
    public static bool canUFO;

    public static  bool canBike;
    public static  bool canSubmarine;

    public static  bool canHuman;

    public static bool isDrone=true;
    public static bool isUFO;
    public static bool isUFOArea;

    public static bool isBike;
    public static bool isSubmarine;

    public static bool isHuman;

    public static bool okBike;
    public static bool okSubmarine;

    public static bool okHuman;
    public static bool isWater;
    public static GameObject UFOCatchObject;



    public void Reset() //座標をリセットする
    {
        // 座標と回転のリセット
        transform.position = initialPosition;
        transform.rotation = initialRotation;
        // Rigidbodyの値のリセット
        rb.velocity = initialVelocity;
        rb.angularVelocity = initialAngularVelocity;
        //Start();
    }

    Gamepad gamepad;
    void Start()//unity実行開始時に呼ばれる
    {
        Declaration();//宣言
        FirstStatus();// 初期状態の保存

        // StartCoroutine(Control());//ホバー，StartCoroutine(Hover())のように関数を呼ばないとunityではsleep処理のようなものができない
        lastPosition = transform.position;


        if (Gamepad.current != null)
        {
            gamepad = Gamepad.current;
        }
        SubmarineEnd();
        foreach (GameObject particle in UFOParticles)
        {
            particle.SetActive(false);
        }
        isDrone = true;
        canDrone = true;
    }
    private Rigidbody rb;//unityで使用
    private Animator anim;
    void OnEnable()
    {

        ResetAnimeBool();
        isDrone = true;
        SetMode();
        eulerRef = Vector3.zero;
    }
    void Declaration()
    {
        rb = GetComponent<Rigidbody>();
        anim = GetComponent<Animator>();


    }
    void FirstStatus()
    {


        initialPosition = transform.position;
        initialRotation = transform.rotation;
        initialVelocity = rb.velocity;
        initialAngularVelocity = rb.angularVelocity;
    }

    void FixedUpdate()//unityから固定された時間間隔で呼び出される0.02秒くらい
    {
      
        GroundCheck();
        GetMoveDirection();
        if ((canPID && canDrone)|| (canPID && canUFO)||( canPID && canSubmarine&&isWater))
        {
            if(!Parameter.isDeath)
            BalancePID();
            Real();//unityの機能であるRigidbodyを使用し，現実の挙動を再現する
        }



      
   

    }
    public float threshold = 10.0f;  // 発動するための最小のドラッグ距離
    public float dragPower = 1.0f;  // 発動するための最小のドラッグ距離
    void Update()
    {
        if (!Parameter.isDeath)
        {
            if (canDrone)
            {
                DroneMove();

            }
            else if (canUFO)
                UFOMove();
            else if (canBike)
                BikeMove();

            else if (canSubmarine)
                SubmarineMove();

            else if (canHuman)
                HumanMove();
            SelectMode();
        }
        
    }

    float[] PwmDuty = new float[4];
    //OneShot42やつ
    int MIN_THROTTLE = 49;
    float HOVER_THROTTLE = 49.5f;

    public float DroneSpeed = 1f;
    bool resetX = true;
    bool resetZ = true;


    Vector3 P;

    Vector3 PID_ctrl;
    Vector3 error;
    private Vector3 I;
    float IH;


    public float targetHeight;// 例: 目標高度
                              //private IEnumerator PID()//PID制御を再現する
    Vector3 previous_error; // 前回のエラーを保存する変数
    float previous_errorH; // 前回のエラーを保存する変数
    void BalancePID()//PID制御を再現する
    {
        float errorRoll = Mathf.DeltaAngle(-transform.eulerAngles.z, eulerRef.z);
        float errorYaw = Mathf.DeltaAngle(transform.eulerAngles.y, eulerRef.y);
        float errorPitch = Mathf.DeltaAngle(-transform.eulerAngles.x, eulerRef.x);
        error = new Vector3(errorRoll, errorPitch, errorYaw);

        P = Kp * error;
        I += error * Time.deltaTime * Ki;
        Vector3 D = (error - previous_error) / Time.deltaTime * Kd;
        PID_ctrl = P + I + D;

        //高度PID（Pのみ）  
        // float errorH = targetHeight - transform.position.y; // 目標高度-現在の高度
        // float PH = KpH * errorH;
        // IH += errorH * Time.deltaTime * Ki;
        // float DH = (errorH - previous_errorH) / Time.deltaTime * Kd;
        // float PID_ctrlH = PH + IH + DH;
        // // スロットル
        // float δT = PID_ctrlH + HOVER_THROTTLE * 4;
        float δT = HOVER_THROTTLE * 4;
        //sif (canSubmarine) δT = HOVER_THROTTLE * 2;
        //ロール舵
        float δa = PID_ctrl.x;
        //ピッチ舵
        float δe = PID_ctrl.y;
        //ヨー舵
        float δr = PID_ctrl.z;
        //ミキシング
        // FR
        PwmDuty[1] = 1.566029f * (δT - δa + δe + δr) / 4f / 50;
        // FL
        PwmDuty[0] = -1.566029f * (δT + δa + δe - δr) / 4f / 50;
        // RR
        PwmDuty[3] = -1.566029f * (δT - δa - δe - δr) / 4f / 50;
        // RL
        PwmDuty[2] = 1.566029f * (δT + δa - δe + δr) / 4f / 50;


        previous_error = error;
        // previous_errorH = errorH;

    }

    public float Force;
    public float Torque;
    public float UFOMaxSpeed;
    void Real() //unityの機能であるRigidbodyを使用し，現実の挙動を再現する
    {
        //推力を計算
        float T = 0; //推力
        for (int i = 0; i < PwmDuty.Length; i++)
        {
            T += CT * PwmDuty[i] * PwmDuty[i];//T=CT*ω^2
        }
        if (canUFO)
        {
            if (rb.velocity.magnitude < UFOMaxSpeed)
                rb.AddForce(transform.up * T * Time.deltaTime * Force);//上方向に力を加える
        }
        else
            rb.AddForce(transform.up * T * Time.deltaTime * Force);//上方向に力を加える

        float ΔeFR = Mathf.Abs(PwmDuty[1]);
        float ΔeFL = Mathf.Abs(PwmDuty[0]);
        float ΔeRR = Mathf.Abs(PwmDuty[3]);
        float ΔeRL = Mathf.Abs(PwmDuty[2]);

        //トルクを計算
        //ロール舵
        float δa = (-ΔeFR + ΔeFL - ΔeRR + ΔeRL) * CQ;
        //ピッチ舵
        float δe = (ΔeFR + ΔeFL - ΔeRR - ΔeRL) * CQ;
        //ヨー舵
        float δr = (ΔeFR - ΔeFL - ΔeRR + ΔeRL) * CQ;
        //トルク
        // Vector3 Q = new Vector3(-δe, δr, -δa);//unityでは座標系が異なるためこうなる
        // トルクの計算（ローカル座標系）
        Vector3 Q_local = new Vector3(-δe, δr, -δa);
        // トルクをゲームオブジェクトの現在の回転に変換（世界座標系）
        Vector3 Q_world = transform.TransformDirection(Q_local);
        //Q = new Vector3(-1, 0, 0);//unityでは座標系が異なるためこうなる
       
            rb.AddTorque(Q_world * Time.deltaTime * Torque);//トルクを加える

    }
   
    public float maxDistance; // レイの最大距離
    LayerMask layerMask; // どのレイヤーを対象とするか
    bool isGround = false; // フラグ
    public Vector3 groundOffset = new Vector3(0, 0, 0);
    public bool canJump;

    void GroundCheck()
    {
        // Rayの開始位置と方向

        Vector3 rayStart = transform.position + groundOffset;
        Vector3 rayDirection = Vector3.down;

        // Rayの可視化（Sceneビューで確認可能）
        Debug.DrawRay(rayStart, rayDirection * maxDistance, Color.red);

        // Raycast
        RaycastHit hit;
        if (Physics.Raycast(rayStart, rayDirection, out hit, maxDistance))
        {
            // 一定距離以下にオブジェクトがあればフラグをオンにする
            //Drone2Car
            canJump = true;
            if (canDrone)
            {

                //anim.SetFloat("groundDistance", hit.distance / maxDistance);
                //Debug.Log("Object detected below within distance: " + hit.distance);
             /*   if (hit.distance / maxDistance < 0.2f)
                {


                    isDrone = false;
                    isCar = true;
                    // レイヤーをオンにする（indexは対象のレイヤーのインデックス）
                    anim.SetLayerWeight(anim.GetLayerIndex("CarDirection"), 1);
                    anim.SetLayerWeight(anim.GetLayerIndex("CarJump"), 1);
                }*/
            }
            if (canBike)
            {
               /* anim.SetFloat("jumpDistance", hit.distance / maxDistance);
                if (hit.distance / maxDistance < 0.2f)
                {

                    isGround = true;

                    canJump = true;



                }*/
            }


            if (hit.distance / maxDistance > 0.2f)
            {
                isGround = false;

            }

        }
        else
        {
            // オブジェクトが一定距離以下にない場合はフラグをオフにする
            anim.SetFloat("groundDistance", 1);

            isGround = false;
            canJump = false;

        }
    }

    private Vector3 lastPosition;
    public static Vector2 direction;


    void GetMoveDirection()
    {
        // 現在位置と前フレームの位置との差分を計算
        Vector3 deltaPosition = transform.position - lastPosition;

        // 自分（GameObject）の前方向を取得
        Vector3 forward = transform.forward;
        Vector3 right = transform.right;

        // 前方向と右方向に対する成分を計算
        float forwardComponent = Vector3.Dot(deltaPosition.normalized, forward);
        float rightComponent = Vector3.Dot(deltaPosition.normalized, right);

        // 方向を(x, y)として設定
        direction = new Vector2(rightComponent, forwardComponent);

        // 現在の位置を保存
        lastPosition = transform.position;

        // 出力（デバッグ用）
        //Debug.Log("Direction: " + direction);
        anim.SetFloat("carX", direction.x);
        anim.SetFloat("carY", direction.y);

        anim.SetFloat("HumanWalkX", direction.y > 0f ? direction.x : -direction.x); 
        anim.SetFloat("HumanWalkY", direction.y);
    }

    public float carSpeed = 10.0f;  // 速度の係数
    public float rotationSpeed = 700.0f;  // 回転速度の係数

    public float HumanJumpPower = 10f;
    public float BikeSpeedMax;
    public float BikeTorque;
    public static bool BikeFallen;
    void BikeMove()
    {

        // コントローラーのアナログスティックの入力を取得
       
        float moveHorizontal = Mathf.Abs(gamepad.leftStick.ReadValue().x) > 0.2f ? gamepad.leftStick.ReadValue().x : 0;
        moveHorizontal += Mathf.Abs(gamepad.rightStick.ReadValue().x) > 0.2f ? gamepad.rightStick.ReadValue().x : 0;

        float moveVertical = Mathf.Abs(gamepad.leftStick.ReadValue().y) > 0.2f ? (gamepad.leftStick.ReadValue().y * (1 - Mathf.Abs(moveHorizontal))) : 0;





        Vector3 rotationInEuler = transform.rotation.eulerAngles;
        float adjustedZ = rotationInEuler.z > 180 ? rotationInEuler.z - 360 : rotationInEuler.z;
        if (Mathf.Abs(adjustedZ) > 60) // Z軸周りに60度以上傾いた
        {
            BikeFallen = true;
            print(Mathf.Abs(rotationInEuler.z));
        }
        else
            BikeFallen = false;
        if (!BikeFallen)
        {
            // オブジェクトの現在の前方向を取得
            Vector3 forward = transform.forward;

            // アナログスティックが前に倒された場合、オブジェクトの進行方向に進む
            Vector3 movement = forward * moveVertical;

            // Rigidbodyに力を加えて動かす
            if (rb.velocity.magnitude < BikeSpeedMax)
                rb.AddForce(movement * carSpeed * Time.deltaTime);




            // アナログスティックの左右の入力に基づいて回転
            // float adjustedRotation = moveVertical >= 0f ? moveHorizontal : -moveHorizontal;
            //float adjustedRotation = moveVertical >= 0f ?  : -moveHorizontal;
            Quaternion deltaRotation = Quaternion.Euler(new Vector3(0, moveHorizontal, 0) * rotationSpeed * Time.deltaTime);
            rb.MoveRotation(rb.rotation * deltaRotation);

            
                //  if(!isGround)
                //   rb.AddTorque(transform.right* Time.deltaTime * BikeTorque* moveVertical);//トルクを加える
                //Jump
            }
        // ジャイロスコープ効果のシミュレーション
        else if ( Mathf.Abs(gamepad.leftStick.ReadValue().magnitude) > 0.2f )
        {
            Vector3 gyroTorque = Vector3.Cross(Vector3.up, rb.velocity) *200000f*Time.deltaTime;
            rb.AddTorque(gyroTorque);
        }
        /* if (gamepad.buttonNorth.wasPressedThisFrame)
         {
             if (canJump)
             {
                 rb.AddForce(carJumpPower * transform.up, ForceMode.Impulse);
                 anim.SetTrigger("isJump");
                 canJump = false;
             }
             else
             {
                 isDrone = true;
                 isCar = false;
                 rb.velocity = new Vector3(rb.velocity.x, 1, rb.velocity.z);
                 anim.SetLayerWeight(anim.GetLayerIndex("CarDirection"), 0);
                 anim.SetLayerWeight(anim.GetLayerIndex("CarJump"), 0);
                 eulerRef.y = transform.eulerAngles.y;
                 anim.SetTrigger("c2d");
                 anim.SetFloat("groundDistance", 1);
             }

         }*/
    }

    public float HumanSpeed;
    public float HumanSpeedMax;
    public float HumanRotationSpeed;
   
    void HumanMove()
    {
        // コントローラーのアナログスティックの入力を取得
        float moveHorizontal = Mathf.Abs(gamepad.rightStick.ReadValue().x) > 0.2f ? gamepad.rightStick.ReadValue().x : 0;
        float moveHorizontal2 = Mathf.Abs(gamepad.leftStick.ReadValue().x )> 0.2f ? gamepad.leftStick.ReadValue().x : 0;


        float moveVertical = Mathf.Abs(gamepad.leftStick.ReadValue().y) > 0.2f ? gamepad.leftStick.ReadValue().y : 0 ;

     

        // アナログスティックが前に倒された場合、オブジェクトの進行方向に進む
        Vector3 movement = transform.forward * moveVertical+transform.right*moveHorizontal2;
        // anim.SetFloat("HumanWalkX", movement.z >= 0f ? movement.x : -movement.x); 
      
        //anim.SetFloat("HumanWalkY", movement.z);
        // Rigidbodyに力を加えて動かす
        if (rb.velocity.magnitude < HumanSpeedMax)
            rb.AddForce(movement * HumanSpeed * Time.deltaTime);




        // アナログスティックの左右の入力に基づいて回転
        // float adjustedRotation =;
        //float adjustedRotation = moveVertical >= 0f ?  : -moveHorizontal;
        Quaternion deltaRotation = Quaternion.Euler(new Vector3(0, moveHorizontal, 0) * HumanRotationSpeed * Time.deltaTime);
        rb.MoveRotation(rb.rotation * deltaRotation);
       
          //  rb.AddTorque(transform.right * Time.deltaTime * BikeTorque * moveVertical);//トルクを加える
                                                                                       //Jump
        if (gamepad.buttonNorth.wasPressedThisFrame)
         {
             if (canJump)
             {
               
                 anim.SetTrigger("HumanJump");
             
             }
             else
             {
                
             
             }

         }
    }
    void HumanJump()
    {
        rb.AddForce(HumanJumpPower * transform.up, ForceMode.Impulse);
        print("a");
    }
   


    public float dronePower = 100f;
    float pressNorth = 0f;
    float pressSouth = 0f;
    public float droneYawControl;

    Vector2 dpad;
    Vector2 L;
    Vector2 R;


    public GameObject[] DroneParticles = new GameObject[4];//プロペラオブジェクト，プロペラアニメ用，実際の動作には関係なし
    //アニメに呼ばせる
    void DroneBegin()
    {
        foreach (GameObject droneParticle in DroneParticles)
        {
            droneParticle.SetActive(true);
        }
       Camera.GetComponent<Camera>().fieldOfView = 90f; // FOVを変更
        DroneImage.SetActive(true);
    }
    void DroneEnd()
    {
        foreach (GameObject droneParticle in DroneParticles)
        {
            droneParticle.SetActive(false);
        }

        DroneImage.SetActive(false);
    }
    void BikeBegin()
    {
        Camera.GetComponent<Camera>().fieldOfView = 60f; // FOVを変更
        BikeImage.SetActive(true);
    }
    void BikeEnd()
    {
        BikeImage.SetActive(false);

    }
    public Vector3 UFOObjLocalPositionOffset;
    public GameObject[] UFOParticles = new GameObject[4];
    public static GameObject UFOReleaseObject;
    void UFOBegin()
    {


        foreach (GameObject particle in UFOParticles)
        {
            particle.SetActive(true);
        }
        if (UFOCatchObject != null)
        {
            Vector3 newPosition = Vector3.MoveTowards(transform.position, UFOCatchObject.transform.position, 1);
            //rb.MovePosition(newPosition.normalized*newPosition.magnitude*0.1f);
            // UFOCatchObject.SetActive(false);
            //UFOCatchObject.transform.parent.GetComponent<Rigidbody>().isKinematic=true;
            Destroy(UFOCatchObject.transform.parent.GetComponent<Rigidbody>());
            UFOCatchObject.transform.parent.gameObject.layer = LayerMask.NameToLayer("UFOObject");
            foreach (Transform child in UFOCatchObject.transform.parent)
            {
                child.gameObject.layer = LayerMask.NameToLayer("UFOObject");
            }
            UFOCatchObject.transform.parent.parent = transform;
            UFOCatchObject.transform.parent.localPosition = UFOObjLocalPositionOffset;

            UFOCatchObject.transform.parent.localRotation = Quaternion.identity;

            anim.SetFloat("UFOCatch", 1);
            UFOReleaseObject = UFOCatchObject;
            UFOCatchObject = null;
            ReleaseUI.SetActive(true);
            CatchUI.SetActive(false);

        }
        DroneImage.SetActive(true);
    }
    void UFOEnd()
    {
        ReleaseUI.SetActive(false);
        foreach (GameObject particle in UFOParticles)
        {
            particle.SetActive(false);
        }

        if (UFOReleaseObject != null)
        {
            // Vector3 newPosition = Vector3.MoveTowards(transform.position, UFOCatchObject.transform.position, 1);
            //rb.MovePosition(newPosition.normalized*newPosition.magnitude*0.1f);
            // UFOCatchObject.SetActive(false);
            //UFOCatchObject.transform.parent.GetComponent<Rigidbody>().isKinematic=true;
           

            UFOReleaseObject.transform.parent.gameObject.layer = LayerMask.NameToLayer("Default");
            foreach (Transform child in UFOReleaseObject.transform.parent)
            {
                child.gameObject.layer = LayerMask.NameToLayer("Default");
            }
          
            Rigidbody ReleaseRb = UFOReleaseObject.transform.parent.gameObject.AddComponent<Rigidbody>();
            ReleaseRb.collisionDetectionMode = CollisionDetectionMode.Continuous;
            ReleaseRb.velocity = rb.velocity;
            //UFOCatchObject.transform.parent.localPosition = UFOObjLocalPositionOffset;

            // UFOCatchObject.transform.parent.localRotation = Quaternion.identity;
            UFOReleaseObject.transform.parent.parent = null;
            // anim.SetFloat("UFOCatch", 1);
            // UFOCatchingObject = UFOCatchObject;
            UFOReleaseObject = null;
            canUFO = false;
            isUFO = false;
            anim.SetBool("isUFO", isUFO);
        }
       
    }

    public GameObject[] SubmarineParticles = new GameObject[4];//プロペラオブジェクト，プロペラアニメ用，実際の動作には関係なし
    void SubmarineBegin()
    {
        foreach (GameObject SubmarineParticle in SubmarineParticles)
        {
            SubmarineParticle.SetActive(true);
            SubmarineParticle.GetComponent<ParticleSystem>().Stop();
        }
        HOVER_THROTTLE = 51f;
        SubmarineImage.SetActive(true);
    }
    void SubmarineEnd()
    {

        foreach (GameObject SubmarineParticle in SubmarineParticles)
        {
            SubmarineParticle.SetActive(false);
        }
        HOVER_THROTTLE = 49.5f;
        SubmarineImage.SetActive(false);
    }

    void HumanBegin()
    {
       HumanImage.SetActive(true);
    }
    void HumanEnd()
    {
        HumanImage.SetActive(false);
    }


    public void SetMode()
    {
        canDrone = isDrone;
        canBike = isBike;
        canUFO =isUFO;
        canSubmarine = isSubmarine;
        canHuman = isHuman;
        isModeChange = false;
        
    }

    public void ResetAnimeBool()
    {
        isDrone = false;
        isUFO = false;
        isBike = false;
        isSubmarine = false;
        isHuman = false;
        isModeChange = true;
    }

    public bool isModeChange=false;
    public GameObject ReleaseUI;
    public GameObject CatchUI;
    public GameObject DroneImage;
    public GameObject BikeImage;
    public GameObject SubmarineImage;
    public GameObject HumanImage;
    public void SelectMode()
    {
        
        dpad = gamepad.dpad.ReadValue();
        if (!isModeChange)
        {
            if (dpad == Vector2.up &&!canDrone && !canUFO)
            {
                ResetAnimeBool();
                isDrone = true;
               
            }
            else if (dpad == Vector2.down &&!canBike&&okBike)
            {

                ResetAnimeBool();
                isBike = true;
             
            }
            else if (dpad == Vector2.left && !canSubmarine&&okSubmarine)
            {
                ResetAnimeBool();
                isSubmarine = true;
             
            }
            else if (dpad == Vector2.right && !canHuman && okHuman)
            {
                ResetAnimeBool();
                isHuman = true;
            
            }
            else if (gamepad.buttonEast.isPressed && canDrone&&isUFOArea)
            {
                ResetAnimeBool();
                isUFO = true;
            }
            else if (gamepad.buttonEast.isPressed && canUFO)
            {
                ResetAnimeBool();
               
                isDrone = true;
            }

            anim.SetBool("isDrone", isDrone);
            anim.SetBool("isBike", isBike);
            anim.SetBool("isSubmarine", isSubmarine);
            anim.SetBool("isHuman", isHuman);
            anim.SetBool("isUFO", isUFO);


        }
    }
    void DroneMove()
    {
       
            L = gamepad.leftStick.ReadValue();
            R = gamepad.rightStick.ReadValue();

            if (resetX)
            {

                if (R.y < 0.1 && R.y > -0.1 && !gamepad.buttonNorth.isPressed && !gamepad.buttonSouth.isPressed)
                {
                    eulerRef.x = 0;
                    resetX = false;
                }
            }
            if (resetZ)
            {

                if (R.x < 0.1 && R.x > -0.1 && !gamepad.buttonEast.isPressed && !gamepad.buttonWest.isPressed)
                {
                    eulerRef.z = 0;
                    resetZ = false;
                }
            }
        
      

           // if ( dpad == Vector2.right)

                            if (L.y > 0.2 )
            {

            
                    eulerRef.x = -L.y * DroneSpeed;
                if (!resetX)
                    resetX = true;
            }


            if (L.y < -0.2 )
            {

                    eulerRef.x = -L.y * DroneSpeed;
                if (!resetX)
                    resetX = true;
            }
            if (L.x < -0.2 )
            {


                    eulerRef.z = L.x * DroneSpeed;
                if (!resetZ)
                    resetZ = true;
            }


            if (L.x > 0.2)
            {

              
                    eulerRef.z = L.x * DroneSpeed;
                if (!resetZ)
                    resetZ = true;
            }


            if (R.y > 0.2)
            {
                // eulerRef.x = -1 * PropoSpeed;
                // if (!resetX)
                //     resetX = true;
            }


            if (R.y < -0.2)
            {
                // eulerRef.x = 1 * PropoSpeed;
                // if (!resetX)
                //     resetX = true;
            }
            if (R.x > 0.2)
            {
                eulerRef.y += R.x *droneYawControl * Time.deltaTime;
            }


            if (R.x < -0.2)
            {
                eulerRef.y -= -R.x *droneYawControl * Time.deltaTime;
            }

            if (gamepad.buttonNorth.isPressed)
            {

                // if (targetHeight < 15)
                //     targetHeight += 0.005f;
                rb.AddForce(transform.up * dronePower * Time.deltaTime);

                if (pressNorth < 1)
                {

                    pressNorth += Time.deltaTime; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", Mathf.Lerp(0f, 1f, pressNorth)); // AnimatorのBendAngleパラメータを設定
                }
            }

            if (gamepad.buttonSouth.isPressed)
            {

                // if (targetHeight > 0)
                //     targetHeight -= 0.005f;
                rb.AddForce(-transform.up * dronePower * Time.deltaTime);
                if (pressNorth > -1)
                {

                    pressNorth -= Time.deltaTime; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", pressNorth); // AnimatorのBendAngleパラメータを設定
                }
            }


            if (!gamepad.buttonSouth.isPressed && !gamepad.buttonNorth.isPressed)
            {
                if (pressNorth > 0.1)
                {

                    pressNorth -= Time.deltaTime * 2; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", pressNorth);
                }
                else if (pressNorth < -0.1)
                {

                    pressNorth += Time.deltaTime * 2; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", pressNorth);
                }
                else
                {
                    if (pressNorth != 0)
                    {
                        pressNorth = 0;
                        anim.SetFloat("droneUp", pressNorth);
                    }
                }
            }




            if (gamepad.buttonEast.isPressed)
            {
                //eulerRef.y += 0.075f;

            }
            if (gamepad.buttonWest.isPressed)
            {

                //  eulerRef.y -= 0.075f;
            }

            float ZR = gamepad.rightTrigger.ReadValue();
            float ZL = gamepad.leftTrigger.ReadValue();
            if (ZR > 0.2f)
            {
                eulerRef.y += ZR * droneYawControl*Time.deltaTime;
            }
            if (ZL > 0.2f)
            {
                eulerRef.y -= ZL * droneYawControl * Time.deltaTime;
            }
          /*  if (Mathf.Abs(eulerRef.x) + Mathf.Abs(eulerRef.z) >= PropoSpeed)
            {
                // 10を超えないようにスケーリング
                float scaleFactor = PropoSpeed / (Mathf.Abs(eulerRef.x) + Mathf.Abs(eulerRef.z));
                eulerRef.x *= scaleFactor;
                eulerRef.z *= scaleFactor;
            }*/


        

    }
  
    public float UFOSpeed=1f;
    public float UFOYawControl=1f;
    public float UFOUpPower=1f;
    void UFOMove()
    {
        
        L = gamepad.leftStick.ReadValue();
        R = gamepad.rightStick.ReadValue();
       
            if (resetX&&R.y < 0.1 && R.y > -0.1 && !gamepad.buttonNorth.isPressed && !gamepad.buttonSouth.isPressed)
            {
                eulerRef.x = 0;
                resetX = false;
            }
       
      
            if (resetZ&&R.x < 0.1 && R.x > -0.1 && !gamepad.buttonEast.isPressed && !gamepad.buttonWest.isPressed)
            {
                eulerRef.z = 0;
                resetZ = false;
            }
        
            if (L.y > 0.2)
            {
                eulerRef.x = -L.y * UFOSpeed;
                if (!resetX)                    resetX = true;
            }
            if (L.y < -0.2)
            {
                eulerRef.x = -L.y * UFOSpeed;
                if (!resetX)                    resetX = true;
            }
            if (L.x < -0.2)
            {
                eulerRef.z = L.x * UFOSpeed;
                if (!resetZ)                    resetZ = true;
            }


            if (L.x > 0.2)
            {
                eulerRef.z = L.x * UFOSpeed;
                if (!resetZ)                    resetZ = true;
            }

            if (R.x > 0.2)
            {
                eulerRef.y += R.x * UFOYawControl * Time.deltaTime;
            }


            if (R.x < -0.2)
            {
                eulerRef.y -= -R.x * UFOYawControl * Time.deltaTime;
            }

            if (gamepad.buttonNorth.isPressed)
            {

                rb.AddForce(transform.up * UFOUpPower * Time.deltaTime);

                if (pressNorth < 1)
                {

                    pressNorth += Time.deltaTime; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", Mathf.Lerp(0f, 1f, pressNorth)); // AnimatorのBendAngleパラメータを設定
                }
            }

            if (gamepad.buttonSouth.isPressed)
            {

          
                rb.AddForce(-transform.up * UFOUpPower * Time.deltaTime);
                if (pressNorth > -1)
                {

                    pressNorth -= Time.deltaTime; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", pressNorth); // AnimatorのBendAngleパラメータを設定
                }
            }


            if (!gamepad.buttonSouth.isPressed && !gamepad.buttonNorth.isPressed)
            {
                if (pressNorth > 0.1)
                {

                    pressNorth -= Time.deltaTime * 2; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", pressNorth);
                }
                else if (pressNorth < -0.1)
                {

                    pressNorth += Time.deltaTime * 2; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", pressNorth);
                }
                else
                {
                    if (pressNorth != 0)
                    {
                        pressNorth = 0;
                        anim.SetFloat("droneUp", pressNorth);
                    }
                }
            }

            float ZR = gamepad.rightTrigger.ReadValue();
            float ZL = gamepad.leftTrigger.ReadValue();
            if (ZR > 0.2f)
            {
                eulerRef.y += ZR * UFOYawControl * Time.deltaTime;
            }
            if (ZL > 0.2f)
            {
                eulerRef.y -= ZL * UFOYawControl * Time.deltaTime;
            }
          

        }

    public float SubmarineSpeed = 1f;
    public float SubmarineYawControl = 1f;
    public float SubmarineUpPower = 1f;
    void SubmarineMove()
    {
        
       // SubmarineCamera();
            L = gamepad.leftStick.ReadValue();
            R = gamepad.rightStick.ReadValue();

            if (resetX && R.y < 0.1 && R.y > -0.1 && !gamepad.buttonNorth.isPressed && !gamepad.buttonSouth.isPressed)
            {
                eulerRef.x = 0;
                resetX = false;
            }


            if (resetZ && R.x < 0.1 && R.x > -0.1 && !gamepad.buttonEast.isPressed && !gamepad.buttonWest.isPressed)
            {
                eulerRef.z = 0;
                resetZ = false;
            }

            if (L.y > 0.2)
            {
                eulerRef.x = -L.y * SubmarineSpeed;
                if (!resetX) resetX = true;
            }
            if (L.y < -0.2)
            {
                eulerRef.x = -L.y * SubmarineSpeed;
                if (!resetX) resetX = true;
            }
            if (L.x < -0.2)
            {
                eulerRef.z = L.x * SubmarineSpeed;
                if (!resetZ) resetZ = true;
            }


            if (L.x > 0.2)
            {
                eulerRef.z = L.x * SubmarineSpeed;
                if (!resetZ) resetZ = true;
            }

            if (R.x > 0.2)
            {
                eulerRef.y += R.x * SubmarineYawControl * Time.deltaTime;
            }


            if (R.x < -0.2)
            {
                eulerRef.y -= -R.x * SubmarineYawControl * Time.deltaTime;
            }

            if (gamepad.buttonNorth.isPressed)
            {

                rb.AddForce(transform.up * SubmarineUpPower * Time.deltaTime);

                if (pressNorth < 1)
                {

                    pressNorth += Time.deltaTime; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", Mathf.Lerp(0f, 1f, pressNorth)); // AnimatorのBendAngleパラメータを設定
                }
            }

            if (gamepad.buttonSouth.isPressed)
            {


                rb.AddForce(-transform.up * SubmarineUpPower * Time.deltaTime);
                if (pressNorth > -1)
                {

                    pressNorth -= Time.deltaTime; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", pressNorth); // AnimatorのBendAngleパラメータを設定
                }
            }


            if (!gamepad.buttonSouth.isPressed && !gamepad.buttonNorth.isPressed)
            {
                if (pressNorth > 0.1)
                {

                    pressNorth -= Time.deltaTime * 2; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", pressNorth);
                }
                else if (pressNorth < -0.1)
                {

                    pressNorth += Time.deltaTime * 2; // ボタンを押し続けている時間を計測
                    anim.SetFloat("droneUp", pressNorth);
                }
                else
                {
                    if (pressNorth != 0)
                    {
                        pressNorth = 0;
                        anim.SetFloat("droneUp", pressNorth);
                    }
                }
            }

            float ZR = gamepad.rightTrigger.ReadValue();
            float ZL = gamepad.leftTrigger.ReadValue();
            if (ZR > 0.2f)
            {
                eulerRef.y += ZR * SubmarineYawControl * Time.deltaTime;
            }
            if (ZL > 0.2f)
            {
                eulerRef.y -= ZL * SubmarineYawControl * Time.deltaTime;
            }
        if (!isWater)
        {
           
            if (SubmarineParticles[0].GetComponent<ParticleSystem>().isPlaying)
                foreach (GameObject SubmarineParticle in SubmarineParticles)
                {
                    SubmarineParticle.GetComponent<ParticleSystem>().Stop();
                }
        }
        else
        {
          
            if (!SubmarineParticles[0].GetComponent<ParticleSystem>().isPlaying)
                foreach (GameObject SubmarineParticle in SubmarineParticles)
                {
                    SubmarineParticle.GetComponent<ParticleSystem>().Play();
                }
        }

    }

    public GameObject Camera;
    public float waterCameraOffset;
    void SubmarineCamera()
    {

        if (Camera.transform.position.y > transform.position.y + waterCameraOffset)
        {
            if (RenderSettings.fog)
                RenderSettings.fog = false;
            if (SubmarineParticles[0].GetComponent<ParticleSystem>().isPlaying)
                foreach (GameObject SubmarineParticle in SubmarineParticles)
            {
                SubmarineParticle.GetComponent<ParticleSystem>().Stop();
            }
        }
        else
        {
            if (!RenderSettings.fog)
                RenderSettings.fog = true;
            if (!SubmarineParticles[0].GetComponent<ParticleSystem>().isPlaying)
                foreach (GameObject SubmarineParticle in SubmarineParticles)
            {
                SubmarineParticle.GetComponent<ParticleSystem>().Play();
            }
        }
    }
void OnCollisionEnter(Collision collision)
{

    if (collision.gameObject.tag == "Death")
    {
        canPID = false;
    }
}



}










