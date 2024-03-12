using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.InputSystem;
using UnityEditor;
using System.IO;
using UnityEngine.SceneManagement;
//[CustomEditor(typeof(Counter))]
public class DroneBefore : MonoBehaviour
{

    float CT = 1.0f;//推力係数
    float CQ = 1.0f;//トルク係数
    public float[] ω = new float[4];//プロペラの速度，Angular Velocity
    public GameObject[] Propeller = new GameObject[4];//プロペラオブジェクト，プロペラアニメ用，実際の動作には関係なし
    public GameObject[] RotateUI = new GameObject[4];//プロペラオブジェクト，プロペラアニメ用，実際の動作には関係なし
    public float propellerRotate = 1;//プロペラ回転率，プロペラアニメ用，実際の動作には関係なし
    public Vector3 eulerRef; //目標値，今回は0,0,0
    public GameObject Goal;
    // PIDの係数


    public float KpH = 1f;
    public float Kp = 1f, Ki = 0.1f, Kd = 0.01f;

    private Rigidbody rb;//unityで使用

    public bool test;//Hover，PIDを使わない時用フラグ
    public bool guide;//Hover，PIDを使わない時用フラグ

    //座標リセット用
    private Vector3 initialPosition;
    private Quaternion initialRotation;
    private Vector3 initialVelocity;
    private Vector3 initialAngularVelocity;

    public bool isHover;//初期浮上
    //public bool isHeightPID;//PID制御
    public bool isBalancePID;//PID制御
    public bool isGuide1;//１次誘導
    public bool isGuide2;//２次誘導
    public bool isProportional;//プロポ，キー操作可能か
    public bool PWMMode;

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
    bool[][] isInputFieldPushed = new bool[100][];

    void Start()//unity実行開始時に呼ばれる
    {
        rb = GetComponent<Rigidbody>();
        // 初期状態の保存
        initialPosition = transform.position;
        initialRotation = transform.rotation;
        initialVelocity = rb.velocity;
        initialAngularVelocity = rb.angularVelocity;

        UISet();
        //最初ドローンを浮かせる処理
        if (!PWMMode)
        {
            if (!test)
                StartCoroutine(Control());//ホバー，StartCoroutine(Hover())のように関数を呼ばないとunityではsleep処理のようなものができない


            for (int i = 0; i < Buttons.Length; i++)
            {
                string name = Buttons[i].name;
                int index = i;
                Buttons[index].transform.GetComponent<Button>().onClick.AddListener(() => OnButtonClick(Buttons[index].gameObject.name));

            }
            isButtonPushed[0] = true;//restartを青色にしたい
            for (int i = 0; i < Toggles.Length; i++)
            {
                string name = Toggles[i].name;
                int index = i;
                Toggles[index].transform.GetComponent<Toggle>().onValueChanged.AddListener((isOn) => OnToggleValueChanged(Toggles[index].gameObject.name, isOn));

            }
        }


    }
    void UISet()
    {
        for (int i = 0; i < isInputFieldPushed.Length; i++)
        {
            isInputFieldPushed[i] = new bool[3];
        }

        for (int i = 0; i < InputFields.Length; i++)
        {
            string name = InputFields[i].name;
            if (name == "Pwm Duty")
            {
                /* for (int j = 0; j < 3; j++)
                 {
                     int index = j;
                     int childIndex = j; // クロージャのためのローカル変数

                     InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                                        {
                                            isInputFieldPushed[index][childIndex] = true;
                                            PwmDuty[index] = float.Parse(value);
                                            motor(index, PwmDuty[index]);
                                        });
                     InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });
                 }*/

            }

            if (name == "Position")
            {

                for (int j = 0; j < 3; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数

                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {
                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)//InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().textでonValueChangedが反応してしまうのを防ぐ
                        {
                            isInputFieldPushed[index][childIndex] = true;
                            Vector3 newPosition = transform.position;
                            newPosition[childIndex] = float.Parse(value);
                            transform.position = newPosition;
                            print("1");
                        }
                    });

                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; print("1.1"); });
                }

            }
            if (name == "Attitude Angle")
            {
                //  Vector3 Rot = new Vector3(Mathf.DeltaAngle(0, -transform.eulerAngles.z), Mathf.DeltaAngle(0, transform.eulerAngles.y), Mathf.DeltaAngle(0, -transform.eulerAngles.x));
                for (int j = 0; j < 3; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {
                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                        {
                            isInputFieldPushed[index][childIndex] = true;
                            Vector3 V = new Vector3(Mathf.DeltaAngle(0, -transform.eulerAngles.z), Mathf.DeltaAngle(0, transform.eulerAngles.y), Mathf.DeltaAngle(0, -transform.eulerAngles.x));
                            V[childIndex] = float.Parse(value);
                            transform.eulerAngles = V;
                        }

                    });


                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });
                }
            }
            if (name == "Target Angle")
            {
                for (int j = 0; j < 3; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {
                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                        {
                            isInputFieldPushed[index][childIndex] = true;
                            Vector3 V = eulerRef;
                            V[childIndex] = float.Parse(value);
                            eulerRef = V;
                        }

                    });


                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });
                }
            }

            if (name == "Kp")
            {
                for (int j = 0; j < 1; j++)
                {

                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {

                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                        {
                            isInputFieldPushed[index][childIndex] = true;
                            Kp = float.Parse(value);
                        }

                    });


                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });
                }
            }
            if (name == "Target Altitude")
            {
                for (int j = 0; j < 1; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {

                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                        {
                            isInputFieldPushed[index][childIndex] = true;
                            targetHeight = float.Parse(value);
                        }

                    });


                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });
                }
            }
            if (name == "KpH")
            {
                for (int j = 0; j < 1; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {

                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                        {
                            isInputFieldPushed[index][childIndex] = true;
                            KpH = float.Parse(value);
                        }

                    });


                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });
                }
            }
            if (name == "Goal Position")
            {
                for (int j = 0; j < 3; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    if (index != 1)
                    {
                        InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                        {

                            if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                            {
                                isInputFieldPushed[index][childIndex] = true;
                                Vector3 V = Goal.transform.position;
                                V[childIndex] = float.Parse(value);
                                Goal.transform.position = V;
                            }

                        });



                        InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });
                    }
                }

            }
            if (name == "Guide Speed")
            {


                for (int j = 0; j < 1; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {

                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                        {
                            isInputFieldPushed[index][childIndex] = true;
                            guideSpeed = float.Parse(value);
                        }

                    });


                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });
                }


            }
            if (name == "KpGuide")
            {
                for (int j = 0; j < 1; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {

                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                        {
                            isInputFieldPushed[index][childIndex] = true;
                            KpGuide = float.Parse(value);
                        }

                    });


                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });
                }


            }
            if (name == "Proportional Speed")
            {
                for (int j = 0; j < 1; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {


                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                        {
                            isInputFieldPushed[index][childIndex] = true;
                            PropoSpeed = float.Parse(value);
                        }

                    });


                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });

                }



            }
            if (name == "Wind Angle")
            {

                for (int j = 0; j < 3; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {

                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                        {
                            isInputFieldPushed[index][childIndex] = true;

                            Vector3 V = wind.XYZ;
                            V[childIndex] = float.Parse(value);
                            wind.XYZ = V;

                        }
                    });


                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });

                }

            }
            if (name == "Wind Power")
            {

                for (int j = 0; j < 1; j++)
                {
                    int index = i; // クロージャのためのローカル変数
                    int childIndex = j; // クロージャのためのローカル変数
                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onValueChanged.AddListener(value =>
                    {

                        if (InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().isFocused)
                        {
                            isInputFieldPushed[index][childIndex] = true;
                            wind.windStrength = float.Parse(value);
                        }
                    });


                    InputFields[index].transform.GetChild(childIndex).GetComponent<InputField>().onEndEdit.AddListener(value => { isInputFieldPushed[index][childIndex] = false; });

                }



            }
        }


    }
    void FixedUpdate()//unityから固定された時間間隔で呼び出される0.02秒くらい
    {
        Real();//unityの機能であるRigidbodyを使用し，現実の挙動を再現する
        if (!PWMMode)
        {
            RotatePropeller();//プロペラ回転アニメ用
            GUIDrone();//画面右下GUI表示用
        }

    }

    private IEnumerator Control()
    {

        if (isHover)
            StartCoroutine(Hover());
        for (; ; )
        {

            cycle++;

            if (isBalancePID)
                BalancePID();//姿勢制御PID開始

            // 加速度
            if (isProportional)
                Proportional();

            if (guide)
                Guide();


            yield return new WaitForSeconds(0.00625f);//Raspiの処理速度に合わせる

        }

    }

    public void motor(int i, float pwmDuty)//プロペラの速度を変える
    {
        //unityで重さ=1，propellerSpeeds=1.566029fで重力と釣り合ったので，現実と同じようにpwmDuty=50で釣り合うようにした
        //print(i + "," + pwmDuty + "," + ω[i]);
        //最初ドローンを浮かせる処理
        if (!PWMMode)
        {
            if (i == 0 || i == 3)
                ω[i] = -1.566029f * (CustomRound(pwmDuty) / 50);
            if (i == 1 || i == 2)
                ω[i] = 1.566029f * (CustomRound(pwmDuty) / 50);
        }
        else
        {
            if (i == 0 || i == 3)
                ω[i] = -1.566029f * (Mathf.Round(Mathf.Clamp(pwmDuty, 42, 84)) / 50);
            if (i == 1 || i == 2)
                ω[i] = 1.566029f * (Mathf.Round(Mathf.Clamp(pwmDuty, 42, 84)) / 50);
        }
    }
    public float guideSpeed = 1f;
    public bool guideSet;
    bool guideGo;
    int guideWait = 0;
    float guideAngle;
    public float guideGoalDistance = 0.5f;
    Vector3 directionToGoal;
    float goWait;
    float KpGuide = 1f;
    float sign = 1;
    void Guide()
    {
        // 自身とゴールの方向ベクトルを計算

        if (!guideSet)
        {
            // directionToGoal = Goal.transform.position - transform.position;
            // directionToGoal.y = 0; // y成分を0にして水平方向のみを考慮
            //                        // 自身の前方ベクトルとゴールの方向ベクトルの間の角度を計算
            // guideAngle = Vector3.Angle(transform.forward, directionToGoal);
            // guideAngle = guideAngle + transform.eulerAngles.y;
            // // 角度の符号を調整（ゴールが左か右かを判断）
            // float sign = (Vector3.Cross(transform.forward, directionToGoal).y < 0) ? -1.0f : 1.0f;
            // guideAngle *= sign;
            // // DeltaAngleを使用して-180から180の範囲に角度を調整
            // guideAngle = Mathf.DeltaAngle(0, guideAngle);
            // Debug.Log(Goal.transform.position + "," + transform.position + "guideAngle:" + guideAngle);
            // guideSet = true;


            directionToGoal = Goal.transform.position - transform.position;
            directionToGoal.y = 0; // y成分を0にして水平方向のみを考慮
                                   // 自身の前方ベクトルとゴールの方向ベクトルの間の角度を計算
            guideAngle = Vector3.Angle(transform.forward, directionToGoal);
            guideAngle = guideAngle + Mathf.DeltaAngle(0, transform.eulerAngles.y);
            // 角度の符号を調整（ゴールが左か右かを判断）
            // print("Vector3.Cross" + Vector3.Cross(transform.forward, directionToGoal).y);
            //sign = (Vector3.Cross(new Vector3(1, 0, 0), directionToGoal).y > 0) ? -1.0f : 1.0f;
            //sign = (sign * Vector3.Cross(transform.forward, directionToGoal).y < 0) ? -1.0f : 1.0f;
            //sign=1f;
            //if()
            // directionToGoalとtransform.forwardとの角度を求める
            float angle = Mathf.Atan2(directionToGoal.x, directionToGoal.z) * Mathf.Rad2Deg;

            // -180〜180の範囲に正規化
            angle = (angle + 360f) % 360f;
            if (angle > 180f)
            {
                angle -= 360f;
            }
            print("agnle" + angle);
            sign = (angle < 0) ? -1.0f : 1.0f;
            guideAngle = Mathf.Abs(Mathf.DeltaAngle(0, guideAngle));
            guideAngle *= sign;
            // DeltaAngleを使用して-180から180の範囲に角度を調整

            // Debug.Log(Goal.transform.position + "," + transform.position + "guideAngle:" + guideAngle);

            // eulerRef.y = guideAngle;
            eulerRef.y = guideAngle;
            print("y=" + eulerRef.y);
            KpGuide = Mathf.Abs(KpGuide);
            guideSet = true;
            //print(Mathf.Abs(Mathf.Abs(guideAngle) - Mathf.Abs(Mathf.DeltaAngle(0, transform.eulerAngles.y))));
            /*       if (Mathf.Abs(Mathf.Abs(eulerRef.y) - Mathf.Abs(Mathf.DeltaAngle(0, transform.eulerAngles.y))) < 2f)
               {
                   print("euler=" + Mathf.Abs(Mathf.Abs(eulerRef.y) - Mathf.Abs(Mathf.DeltaAngle(0, transform.eulerAngles.y))));
                   guideWait++;
                   //  print(guideWait);
                   if (guideWait > 100)
                   {
                       guideSet = true;
                       guideGo = true;
                       guideWait = 0;
                   }
               }
               else
                   guideWait = 0;
                   */
        }
        if (!guideGo && guideSet)
        {

            //print(Mathf.Abs(Mathf.Abs(guideAngle) - Mathf.Abs(Mathf.DeltaAngle(0, transform.eulerAngles.y))));
            if (Mathf.Abs(Mathf.Abs(guideAngle) - Mathf.Abs(Mathf.DeltaAngle(0, transform.eulerAngles.y))) < 1f)
            {
                guideWait++;
                //  print(guideWait);
                if (guideWait > 100)
                {
                    guideGo = true;
                    guideWait = 0;
                }
            }
            else
                guideWait = 0;

        }
        else
        {


            // 自身と監視対象の位置の差を計算
            Vector3 difference = Goal.transform.position - transform.position;
            difference.y = 0;
            // 差の各成分を二乗
            float sqDist = difference.x * difference.x + difference.z * difference.z;
            // 平方根を取ることで距離を計算
            float distance = Mathf.Sqrt(sqDist);
            // 距離が閾値以内であれば、条件を満たす
            //ないせき
            float dotProduct = directionToGoal.x * difference.x + directionToGoal.y * difference.y + directionToGoal.z * difference.z;

            // ドット積がほぼ-1であれば、ベクトルは逆方向
            if (dotProduct < 0)
            {
                KpGuide = -KpGuide;
            }

            if (distance <= guideGoalDistance)
            {
                //Debug.Log("Entered within " + guideGoalDistance + " meters of the target object!");
                // ここで何らかの処理を行うことができます
                // eulerRef.x = 0 * guideSpeed;
                eulerRef.x = -distance * KpGuide * guideSpeed;
            }
            else
                eulerRef.x = -1 * KpGuide * guideSpeed;
            goWait++;
            if (goWait > 1000)
            {

                eulerRef = new Vector3(0, eulerRef.y, 0);//ちょっと姿勢を安定させる時間を設ける
                if (goWait > 1500)
                {
                    goWait = 0;
                    guideGo = false;
                    guideSet = false;
                }
            }
        }
        /*  if (Mathf.Abs(angle) < 1)
          {
              eulerRef.y = 0;
              eulerRef.x = -1 * guideSpeed;

          }
          else
          {
              eulerRef.y = angle;
              eulerRef.x = 0;
          }
          /* if (Mathf.Abs(angle) > 90)
               eulerRef.x = 1 * guideSpeed;
           else
               eulerRef.y = angle;*/

        // 角度を表示

    }
    float[] PwmDuty = new float[4];
    //OneShot42やつ
    int MIN_THROTTLE = 49;
    int HOVER_THROTTLE = 50;
    private IEnumerator Hover()//離陸して1mくらい浮上させて重力と釣り合わせる
    {
        for (int i = 0; i < PwmDuty.Length; i++)
        {
            PwmDuty[i] = MIN_THROTTLE;
            motor(i, PwmDuty[i]);
        }
        for (; ; )
        {
            if (PwmDuty[0] == HOVER_THROTTLE + 1)//PwmDuty=51で辞める
                break;
            for (int i = 0; i < PwmDuty.Length; i++)
            {
                PwmDuty[i]++;
                motor(i, PwmDuty[i]);
            }

            yield return new WaitForSeconds(0.5f);
        }
        yield return new WaitForSeconds(0.001f);//PwmDuty=51でちょっと浮上してもらいすぐ50に戻す
        for (int i = 0; i < PwmDuty.Length; i++)
        {
            PwmDuty[i] = HOVER_THROTTLE;
            motor(i, PwmDuty[i]);
        }
        yield return new WaitForSeconds(1f);//１秒待つ

    }

    float CustomRound(float value)
    {
        //float fractionalPart = value - Mathf.Floor(value);
        /*
            // 小数部分が0.8以上なら、次の整数に切り上げ
            if (fractionalPart >= 0.9f)
            {
                return Mathf.Ceil(value);
            }
            // 小数部分が0.2以下なら、その整数に切り上げ
            else if (fractionalPart <= 0.1f)
            {
                return Mathf.Floor(value) + 1;
            }
            // 上記のいずれでもない場合、値は切り捨て
            else
            {
                return Mathf.Floor(value);
            }*/
        if (value > 50)
            return Mathf.Floor(Mathf.Clamp(value, 42, 84)) + 1;
        else
            return Mathf.Floor(Mathf.Clamp(value, 42, 84));

    }

    //public int speed=1;
    public int rate = 1;
    public int constant = 10;
    public int constant2 = 10;
    public float KpAx = 1f;
    public float KpAy = 1f;
    public float targetAx = 1f;
    public float targetAy = 1f;

    Vector3 A;
    Vector3 lastV;
    int time;
    int time2;
    public float PropoSpeed = 1f;
    bool resetX = true;
    bool resetZ = true;
    void Proportional()
    {
        Vector2 dpad;
        Vector2 L;
        Vector2 R;
        if (Gamepad.current != null)
        {
            //print(Gamepad.current);
            dpad = Gamepad.current.dpad.ReadValue();


            L = Gamepad.current.leftStick.ReadValue();
            R = Gamepad.current.rightStick.ReadValue();

            if (resetX)
            {

                if (R.y < 0.1 && R.y > -0.1 && !Gamepad.current.buttonNorth.isPressed && !Gamepad.current.buttonSouth.isPressed)
                {
                    eulerRef.x = 0;
                    resetX = false;
                }
            }
            if (resetZ)
            {

                if (R.x < 0.1 && R.x > -0.1 && !Gamepad.current.buttonEast.isPressed && !Gamepad.current.buttonWest.isPressed)
                {
                    eulerRef.z = 0;
                    resetZ = false;
                }
            }
        }
        if (resetX)
        {
            if (!Input.GetKey(KeyCode.UpArrow) && !Input.GetKey(KeyCode.DownArrow))
            {
                eulerRef.x = 0;
                resetX = false;
            }

        }
        if (resetZ)
        {
            if (!Input.GetKey(KeyCode.LeftArrow) && !Input.GetKey(KeyCode.RightArrow))
            {
                eulerRef.z = 0;
                resetZ = false;
            }

        }

        // 左スティックの入力を取得 

        if (Input.GetKey(KeyCode.W))
        {
            if (targetHeight < 15)
                targetHeight += 0.01f;

        }

        if (Input.GetKey(KeyCode.S))
        {
            if (targetHeight > 0)
                targetHeight -= 0.01f;
        }


        if (Input.GetKey(KeyCode.A))
            eulerRef.y -= 0.25f;



        if (Input.GetKey(KeyCode.D))
            eulerRef.y += 0.25f;


        if (Input.GetKey(KeyCode.UpArrow))
        {
            eulerRef.x = -1 * PropoSpeed;
            if (!resetX)
                resetX = true;
        }

        if (Input.GetKey(KeyCode.DownArrow))
        {
            eulerRef.x = 1 * PropoSpeed;
            if (!resetX)
                resetX = true;

        }

        if (Input.GetKey(KeyCode.LeftArrow))
        {
            eulerRef.z = -1 * PropoSpeed;
            if (!resetZ)
                resetZ = true;
        }

        if (Input.GetKey(KeyCode.RightArrow))
        {
            eulerRef.z = 1 * PropoSpeed;
            if (!resetZ)
                resetZ = true;

        }

        if (Gamepad.current != null)
        {
            dpad = Gamepad.current.dpad.ReadValue();


            L = Gamepad.current.leftStick.ReadValue();
            R = Gamepad.current.rightStick.ReadValue();
            if (L.y > 0.1 || dpad == Vector2.up)
            {
                if (targetHeight < 15)
                    targetHeight += 0.005f;
            }


            if (L.y < -0.1 || dpad == Vector2.down)
            {
                if (targetHeight > 0)
                    targetHeight -= 0.005f;
            }
            if (L.x < -0.1 || dpad == Vector2.left)
                eulerRef.y -= 0.25f;



            if (L.x > 0.1 || dpad == Vector2.right)
                eulerRef.y += 0.25f;



            if (R.y > 0.1)
            {
                eulerRef.x = -1 * PropoSpeed;
                if (!resetX)
                    resetX = true;
            }


            if (R.y < -0.1)
            {
                eulerRef.x = 1 * PropoSpeed;
                if (!resetX)
                    resetX = true;
            }
            if (R.x > 0.1)
            {
                eulerRef.z = 1 * PropoSpeed;
                if (!resetZ)
                    resetZ = true;
            }


            if (R.x < -0.1)
            {
                eulerRef.z = -1 * PropoSpeed;
                if (!resetZ)
                    resetZ = true;
            }

            if (Gamepad.current.buttonNorth.isPressed)
            {
                // Aボタンが押されたかチェック
                eulerRef.x = -1 * PropoSpeed;
                if (!resetX)
                    resetX = true;
            }
            if (Gamepad.current.buttonSouth.isPressed)
            {
                // Aボタンが押されたかチェック
                eulerRef.x = 1 * PropoSpeed;
                if (!resetX)
                    resetX = true;
            }

            if (Gamepad.current.buttonEast.isPressed)
            {
                // Aボタンが押されたかチェック
                eulerRef.z = 1 * PropoSpeed;
                if (!resetZ)
                    resetZ = true;
            }
            if (Gamepad.current.buttonWest.isPressed)
            {
                // Aボタンが押されたかチェック
                eulerRef.z = -1 * PropoSpeed;
                if (!resetZ)
                    resetZ = true;
            }

        }
    }

    Vector3 P;

    int ANGLE_CONTROL_MIN = 1;
    int ANGLE_CONTROL_MAX = 2;
    Vector3 PID_ctrl;
    Vector3 error;
    private Vector3 I;


    float tiltX;
    float tiltZ;
    int cycle = 0;
    public bool front;
    public float targetHeight;// 例: 目標高度
                              //private IEnumerator PID()//PID制御を再現する


    void BalancePID()//PID制御を再現する
    {


        float errorRoll = Mathf.DeltaAngle(-transform.eulerAngles.z, eulerRef.z);
        float errorYaw = Mathf.DeltaAngle(transform.eulerAngles.y, eulerRef.y);
        float errorPitch = Mathf.DeltaAngle(-transform.eulerAngles.x, eulerRef.x);
        error = new Vector3(errorRoll, errorPitch, errorYaw);

        P = Kp * error;
        I += error * Time.deltaTime * Ki;
        Vector3 D = (error - I) / Time.deltaTime * Kd;
        PID_ctrl = P + I + D;


        /* 
                以下のようになっている．要素番号とオイラー角の対応に注意
                z = roll;
                x = pitch;
                y = yaw;

                yamacode↓
                euler_now[0] = roll;
                euler_now[1] = pitch;
                euler_now[2] = yaw;
         */

        //高度PID（Pのみ）  
        float errorH = targetHeight - transform.position.y; // 目標高度-現在の高度
        // スロットル
        float δT = KpH * errorH + HOVER_THROTTLE * 4;
        //ロール舵
        float δa = PID_ctrl.x;
        //ピッチ舵
        float δe = PID_ctrl.y;
        //ヨー舵
        float δr = PID_ctrl.z;
        //ミキシング
        // FR
        PwmDuty[1] = (δT - δa + δe + δr) / 4f;
        // FL
        PwmDuty[0] = (δT + δa + δe - δr) / 4f;
        // RR
        PwmDuty[3] = (δT - δa - δe - δr) / 4f;
        // RL
        PwmDuty[2] = (δT + δa - δe + δr) / 4f;

        for (int i = 0; i < PwmDuty.Length; i++)
        {
            motor(i, PwmDuty[i]);
        }


    }

    /**********************************************************************/
    void Real() //unityの機能であるRigidbodyを使用し，現実の挙動を再現する
    {
        //推力を計算
        float T = 0; //推力
        for (int i = 0; i < ω.Length; i++)
        {
            T += CT * ω[i] * ω[i];//T=CT*ω^2
        }
        rb.AddForce(transform.up * T);//上方向に力を加える

        float ΔeFR = Mathf.Abs(ω[1]);
        float ΔeFL = Mathf.Abs(ω[0]);
        float ΔeRR = Mathf.Abs(ω[3]);
        float ΔeRL = Mathf.Abs(ω[2]);

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
        rb.AddTorque(Q_world);//トルクを加える

    }
    void RotatePropeller()
    {
        for (int i = 0; i < Propeller.Length; i++)
        {
            Propeller[i].transform.Rotate(Vector3.up * ω[i] * Time.deltaTime * propellerRotate);
        }

    }

    public Text DroneGUI;
    Vector3 lastAngularVelocity = Vector3.zero;
    Vector3 lastVelocity = Vector3.zero;


    public InputField inputField; // InputFieldコンポーネントへの参照
    public GameObject[] InputFields = new GameObject[4];//プロペラオブジェクト，プロペラアニメ用，実際の動作には関係なし
    public GameObject[] Buttons = new GameObject[3];//プロペラオブジェクト，プロペラアニメ用，実際の動作には関係なし
    public GameObject[] Toggles = new GameObject[3];//プロペラオブジェクト，プロペラアニメ用，実際の動作には関係なし
    public bool[] isButtonPushed = new bool[3];//プロペラオブジェクト，プロペラアニメ用，実際の動作には関係なし
                                               //プロペラオブジェクト，プロペラアニメ用，実際の動作には関係なし
    public bool[] isToggleOn = new bool[3];//プロペラオブジェクト，プロペラアニメ用，実際の動作には関係なし
    public Color buttonPushedColor; // 変更する色
    public Color buttonColor; // 変更する色
    public Wind wind;
    //public GameObject Goal;
    void GUIDrone()//GUI表示用
    {
        // �ʒu�Ɖ�]�𕶎���Ƃ��Ď擾
        Vector3 position = transform.position;
        Vector3 goalPosition = Goal.transform.position;
        string rotation = transform.eulerAngles.ToString();

        // Rigidbody rb = GetComponent<Rigidbody>();
        // 速度
        Vector3 velocity = rb.velocity;
        // 加速度
        Vector3 acceleration = (rb.velocity - lastVelocity) / Time.deltaTime;
        lastVelocity = rb.velocity;
        // 角速度
        Vector3 angularVelocity = rb.angularVelocity;
        // 角加速度
        Vector3 angularAcceleration = (rb.angularVelocity - lastAngularVelocity) / Time.deltaTime;
        lastAngularVelocity = rb.angularVelocity;

        Vector3 Rot = new Vector3(Mathf.DeltaAngle(0, -transform.eulerAngles.z), Mathf.DeltaAngle(0, transform.eulerAngles.y), Mathf.DeltaAngle(0, -transform.eulerAngles.x));

        DroneGUI.text =
            //"PwmDuty: " + "(" + PwmDuty[0] + "," + PwmDuty[1] + ",\n" + PwmDuty[2] + "," + PwmDuty[3] + ")"
            " D : " + "(" + CustomRound(PwmDuty[0]) + "," + CustomRound(PwmDuty[1]) + "," + CustomRound(PwmDuty[2]) + "," + CustomRound(PwmDuty[3]) + ")"
        + "\n P : " + PID_ctrl
        + "\n T : " + eulerRef
        + "\n h : " + " " + targetHeight.ToString("F2")
        //+ "\nProSpeed: " + "(" + ω[0] + "," + ω[1] + ",\n" + ω[2] + "," + ω[3] + ")"
        + "\n e : " + error
        + "\n  r : " + position
        + "\n F : " + Rot
        + "\n v : " + velocity
        + "\n a : " + acceleration
        + "\nW : " + angularVelocity
        + "\n A : " + angularAcceleration
        ;

        for (int i = 0; i < RotateUI.Length; i++)
        {
            RotateUI[i].transform.GetChild(0).GetComponent<Text>().text = CustomRound(PwmDuty[i]).ToString();
        }

        for (int i = 0; i < RotateUI.Length; i++)
        {
            float value = Mathf.Clamp(CustomRound(PwmDuty[i]), 47, 53);
            // 42から84の範囲を0から1の範囲にマップ
            float t = (value - 47) / (53 - 47);

            // 赤から緑への色を計算
            Color color = Color.Lerp(Color.blue, Color.red, t);
            // α値を0.5に設定
            color.a = 0.8f;
            RotateUI[i].GetComponent<Image>().color = color;
        }



        for (int i = 0; i < InputFields.Length; i++)
        {
            string name = InputFields[i].name;
            if (name == "Pwm Duty")
            {
                for (int j = 0; j < 4; j++)
                {
                    int index = j;
                    if (!InputFields[i].transform.GetChild(index).GetComponent<InputField>().isFocused)
                        InputFields[i].transform.GetChild(j).GetComponent<InputField>().text = CustomRound(PwmDuty[j]).ToString();


                }
                //+ "," + CustomRound(PwmDuty[1]) + "," + CustomRound(PwmDuty[2]) + "," + CustomRound(PwmDuty[3]) + ")"
            }

            if (name == "Position")
            {

                if (!InputFields[i].transform.GetChild(0).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = transform.position.x.ToString("F2");
                if (!InputFields[i].transform.GetChild(1).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = transform.position.y.ToString("F2");
                if (!InputFields[i].transform.GetChild(2).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = transform.position.z.ToString("F2");
            }

            if (name == "Attitude Angle")
            {

                if (!InputFields[i].transform.GetChild(0).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = Rot.x.ToString("F2");
                if (!InputFields[i].transform.GetChild(1).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = Rot.y.ToString("F2");
                if (!InputFields[i].transform.GetChild(2).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = Rot.z.ToString("F2");



            }
            if (name == "Velocity")
            {
                InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = velocity.x.ToString("F2");
                InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = velocity.y.ToString("F2");
                InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = velocity.z.ToString("F2");
            }
            if (name == "Acceleration")
            {
                InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = acceleration.x.ToString("F2");
                InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = acceleration.y.ToString("F2");
                InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = acceleration.z.ToString("F2");
            }
            if (name == "Angular Velocity")
            {
                InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = angularVelocity.x.ToString("F2");
                InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = angularVelocity.y.ToString("F2");
                InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = angularVelocity.z.ToString("F2");
            }
            if (name == "Angular Acceleration")
            {
                InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = angularAcceleration.x.ToString("F2");
                InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = angularAcceleration.y.ToString("F2");
                InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = angularAcceleration.z.ToString("F2");
            }

            if (name == "PID")
            {
                //for (int j = 0; j < 3; j++)
                InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = PID_ctrl.x.ToString("F2");
                InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = PID_ctrl.y.ToString("F2");
                InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = PID_ctrl.z.ToString("F2");
                //+ "," + CustomRound(PwmDuty[1]) + "," + CustomRound(PwmDuty[2]) + "," + CustomRound(PwmDuty[3]) + ")"
            }
            if (name == "Target Angle")
            {
                if (!InputFields[i].transform.GetChild(0).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = eulerRef.x.ToString("F2");
                if (!InputFields[i].transform.GetChild(1).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = eulerRef.y.ToString("F2");
                if (!InputFields[i].transform.GetChild(2).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = eulerRef.z.ToString("F2");
            }
            if (name == "Kp")
            {

                if (!InputFields[i].transform.GetChild(0).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = Kp.ToString("F2");

            }
            if (name == "Target Altitude")
            {
                if (!InputFields[i].transform.GetChild(0).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = targetHeight.ToString("F2");
                //+ "," + CustomRound(PwmDuty[1]) + "," + CustomRound(PwmDuty[2]) + "," + CustomRound(PwmDuty[3]) + ")"
            }
            if (name == "KpH")
            {
                for (int j = 0; j < 1; j++)
                {
                    if (!InputFields[i].transform.GetChild(j).GetComponent<InputField>().isFocused)
                        InputFields[i].transform.GetChild(j).GetComponent<InputField>().text = KpH.ToString("F2");

                }//KpGuide
            }
            if (name == "Error")
            {
                InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = error.x.ToString("F2");
                InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = error.y.ToString("F2");
                InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = error.z.ToString("F2");
            }

            if (name == "Goal Position")
            {
                if (!InputFields[i].transform.GetChild(0).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = goalPosition.x.ToString("F2");
                // if (!InputFields[i].transform.GetChild(1).GetComponent<InputField>().isFocused)
                //     InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = goalPosition.y.ToString("F2");
                if (!InputFields[i].transform.GetChild(2).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = goalPosition.z.ToString("F2");
            }
            if (name == "Guide Speed")
            {

                if (!InputFields[i].transform.GetChild(0).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = guideSpeed.ToString("F2");


            }
            if (name == "KpGuide")
            {
                for (int j = 0; j < 1; j++)
                {


                    if (!InputFields[i].transform.GetChild(j).GetComponent<InputField>().isFocused)
                        InputFields[i].transform.GetChild(j).GetComponent<InputField>().text = KpGuide.ToString("F2");

                }//KpGuide
            }
            if (name == "Proportional Speed")
            {

                if (!InputFields[i].transform.GetChild(0).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = PropoSpeed.ToString("F2");


            }

            if (name == "Wind Angle")
            {

                if (!InputFields[i].transform.GetChild(0).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = wind.XYZ.x.ToString("F2");
                if (!InputFields[i].transform.GetChild(1).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(1).GetComponent<InputField>().text = wind.XYZ.y.ToString("F2");
                if (!InputFields[i].transform.GetChild(2).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(2).GetComponent<InputField>().text = wind.XYZ.z.ToString("F2");
            }
            if (name == "Wind Power")
            {


                if (!InputFields[i].transform.GetChild(0).GetComponent<InputField>().isFocused)
                    InputFields[i].transform.GetChild(0).GetComponent<InputField>().text = wind.windStrength.ToString("F2");

            }
        }

        //string inputValue = InputFields[i].GetComponent<InputField>().text; // 入力値の取得
    }

    /*
            for (int i = 0; i < Toggles.Length; i++)
            {
                string name = Toggles[i].name;
                if (name == "PID Control")
                {
                    for (int j = 0; j < 4; j++)
                        InputFields[i].transform.GetChild(j).GetComponent<InputField>().text = CustomRound(PwmDuty[j]).ToString();
                    //+ "," + CustomRound(PwmDuty[1]) + "," + CustomRound(PwmDuty[2]) + "," + CustomRound(PwmDuty[3]) + ")"
                }



                //string inputValue = InputFields[i].GetComponent<InputField>().text; // 入力値の取得
            }*/





    private void OnButtonClick(string name)
    {
        for (int i = 0; i < Buttons.Length; i++)
        {
            if (Buttons[i].name == name)
            {
                if (name == "Restart")
                {
                    if (!isButtonPushed[i])
                    {
                        Buttons[i].transform.GetComponent<Image>().color = buttonPushedColor;
                        Time.timeScale = 1; // 時間の流れを停止する
                    }
                    else
                    {
                        Buttons[i].transform.GetComponent<Image>().color = buttonColor;

                        Time.timeScale = 0; // 時間の流れを停止する
                        Reset();
                    }
                    isButtonPushed[i] = !isButtonPushed[i]; // 状態を反転

                }



                if (name == "Pause")
                {

                    if (!isButtonPushed[i])
                    {
                        Buttons[i].transform.GetComponent<Image>().color = buttonPushedColor;
                        Time.timeScale = 0; // 時間の流れを停止する
                    }
                    else
                    {
                        Buttons[i].transform.GetComponent<Image>().color = buttonColor;
                        if (isButtonPushed[i - 1])
                            Time.timeScale = 1; // 時間の流れを停止する
                    }
                    isButtonPushed[i] = !isButtonPushed[i]; // 状態を反転
                }
                if (name == "Frame")
                {
                    if (!isButtonPushed[i])
                    {
                        isButtonPushed[i] = !isButtonPushed[i];

                        Buttons[i].transform.GetComponent<Image>().color = buttonPushedColor;
                        Buttons[i - 1].transform.GetComponent<Image>().color = buttonPushedColor;
                        isButtonPushed[i - 1] = true;
                        Time.timeScale = 1; // 一時的に時間の流れを通常速度に戻す
                        StartCoroutine(StepFrame()); // コルーチンを使用して1フレームだけ進める
                        Buttons[i].transform.GetComponent<Image>().color = buttonColor;
                    }
                    isButtonPushed[i] = !isButtonPushed[i]; // 状態を反転
                }
            }

        }
    }
    private IEnumerator StepFrame()
    {
        //yield return null; // 1フレーム待つ
        //yield return new ; // 1フレーム待つ
        yield return new WaitForSeconds(0.0625f);// Raspiの処理速度に合わせる
        Time.timeScale = 0; // 時間の流れを再び停止する
    }

    private void OnToggleValueChanged(string name, bool isOn)
    {
        for (int i = 0; i < Toggles.Length; i++)
        {
            if (Toggles[i].name == name)
            {
                if (name == "PID Control")
                {
                    isBalancePID = isOn;
                }
                if (name == "Guide")
                {
                    guide = isOn;
                }
                if (name == "Proportional")
                {
                    isProportional = isOn;
                }
                if (name == "Test")
                {
                    test = isOn;
                }
                if (name == "Wind")
                {
                    wind.isWind = isOn;

                }
                if (name == "CSV Export")
                {
                    wind.isWind = isOn;

                }
                if (name == "CSV Import")
                {
                    SceneManager.LoadScene("CSVImport");

                }
            }
        }
    }








}








