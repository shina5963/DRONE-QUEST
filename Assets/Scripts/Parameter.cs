using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;
public class Parameter : MonoBehaviour
{
    public GameObject DroneObj;
   
    public GameObject SpeedUI;


    public static float energy=1000;
    public float energyDecreaseRate = 10f;
    public static Vector3 revivalPosition;
    public static Quaternion revivalRotation;
   
    public Image BaComponent;  // Imageコンポーネントへの参照
    public Color red;  // 新しい色
    public Color green;  // 新しい色
    public Image nowColor;
    
    Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        // Imageの色を変更
        nowColor = BatteryObjs[0].GetComponent<Image>();
        rb = DroneObj.GetComponent<Rigidbody>();



        speedImage1 = SpeedUI.transform.GetChild(0).GetComponent<Image>();
        speedImage2 = SpeedUI.transform.GetChild(1).GetComponent<Image>();
        //speedImage3 = SpeedUI.transform.GetChild(0).GetComponent<Image>();
       // VelocityStart();
        AltitudeStart();
        Green();

    }
    void OnEnable()
    {
        if (!isDeath)
        {
            revivalPosition = Vector3.zero;
            revivalRotation= Quaternion.identity;
        }
        energy = 1000;
        isDeath = false;
        isDeathFirst = false;
    
        GameOverUI.SetActive(false);
        Image img = GameOverUIBlack.GetComponent<Image>();
        Color tempColor = img.color;
        tempColor.a = 0;
        img.color = tempColor;
        
    }
    public static bool isDeath;
   bool isDeathFirst;
    public static Dictionary<int, GameObject> Lasers = new Dictionary<int, GameObject>();
    public static Dictionary<int, GameObject> AngleLasers = new Dictionary<int, GameObject>();
    public float damageOfLaser;
    public float damageOfAngleLaser;
    public GameObject GameOverUI;
    public GameObject GameOverUIBlack;
    public float gameOverSpeed;
    void Retry()
    {
        DroneObj.transform.position = revivalPosition;
        DroneObj.transform.rotation = revivalRotation;
        Drone.eulerRef.y = DroneObj.transform.eulerAngles.y;
        rb.velocity = Vector3.zero;
        
        OnEnable();
    }
    // Update is called once per frame
    void Update()
    {
        if (energy < 0)
        {
            isDeath = true;
            isDeathFirst = true;

            if (Gamepad.current.startButton.wasPressedThisFrame)
                Retry();
             if (Gamepad.current.selectButton.wasPressedThisFrame)
 SceneManager.LoadScene("Title");


        }
        if (isDeathFirst&& GameOverUIBlack.GetComponent<Image>().color.a<1)
        {
       
            GameOverUI.SetActive(true);
            Image img = GameOverUIBlack.GetComponent<Image>();
            Color tempColor = img.color;
            tempColor.a += Time.deltaTime* gameOverSpeed;
            img.color = tempColor;
          
        }

     

        Battery();
        Altitude();
        Velocity();
       
    }
    public GameObject[] BatteryObjs=new GameObject[0];
   void Red()
    {
        foreach (GameObject battery in BatteryObjs)
        {

           battery.GetComponent<Image>().color = red;
            //print("b");
        }
    }
    void Green()
    {
        foreach (GameObject battery in BatteryObjs)
        {

            battery.GetComponent<Image>().color = green;

        }

    }
    public GameObject BatteryUI;
    float[] batterys = { 0f, 1f/11f, 2f / 11f, 3f / 11f, 4f / 11f, 5f / 11f, 6f / 11f, 7f / 11f, 8f / 11f , 9f / 11f, 10f / 11f, 11f / 11f};
    
    //color mo 
    void Battery ()
    {
        //print(DamageObjs.Count);
        if (Lasers.Count > 0)
        {
            energy -= Time.deltaTime * damageOfLaser * Lasers.Count * Lasers.Count;

            if (nowColor.color == green)
            {
                Red();
            }
           
        }
        if (AngleLasers.Count > 0)
        {
            energy -= Time.deltaTime * damageOfAngleLaser * AngleLasers.Count;

            if (nowColor.color == green)
            {
                Red();
            }

        }
        else if (nowColor.color == red)
            Green();

        if (Drone.isDrone)
            energy -= Time.deltaTime * energyDecreaseRate;

        float target = energy / 1000;
        float closest = batterys[0];

        foreach (float battery in batterys)
        {
            if (Mathf.Abs(target - battery) < Mathf.Abs(target - closest))
            {
                closest = battery;
            }
           
        }

       

        BatteryUI.GetComponent<Image>().fillAmount = closest;

    }

 

    Image altitudeImage; // プールするImageのプレファブ
    public int initialPoolSize = 10; // 最初にプールするオブジェクトの数

    private Queue<Image> altitudeImagePool = new Queue<Image>(); // プールされたImageオブジェクトを保持するためのキュー

    void AltitudeStart()
    {
        altitudeImage = AltitudeUI.GetComponent<Image>();
       // altitudeImagePool.Enqueue(AltitudeUI);
        // 初期化時にオブジェクトをプール
        for (int i = 0; i < initialPoolSize; i++)
        {
            Image img = Instantiate(altitudeImage, AltitudeUI.transform.parent);
            img.color = altitudeImage.color;
            Color color = img.color;

            // アルファ値
            color.a = 1f-((float)i/10f);
            img.color = color;
           // print(img.color);
            // img.gameObject.SetActive(false); // 非アクティブにしてプールに追加
            altitudeImagePool.Enqueue(img);
        }
    }

    public float minHeight = -100f; // 最低高さ
    public float maxHeight = 100f; // 最高高さ



    public GameObject AltitudeUI;
    public float attitudeMoveRange = 0.9f;
    void Altitude()
    {

        float errorRoll = Mathf.DeltaAngle(-DroneObj.transform.eulerAngles.z, 0);
        float errorYaw = Mathf.DeltaAngle(DroneObj.transform.eulerAngles.y, 0);
        float errorPitch = Mathf.DeltaAngle(-DroneObj.transform.eulerAngles.x, 0);
       Vector3 error = new Vector3(errorRoll, errorPitch, errorYaw);
        AltitudeUI.GetComponent<RectTransform>().anchoredPosition = new Vector2(-errorRoll* attitudeMoveRange, errorPitch* attitudeMoveRange);
        Height();
        AltitudeLocus();
    }
    void Height()
    {
        // オブジェクトの高さを取得（Y座標を使用）
        float objectHeight = DroneObj.transform.position.y;

        // 高さを正規化
        float normalizedHeight = Mathf.InverseLerp(minHeight, maxHeight, objectHeight);

        // 紫から水色の範囲（h = 0.5〜0.75）にマッピング
        float hue = Mathf.Lerp(0.25f, 0.75f, normalizedHeight);

        // HSVをRGBに変換
        Color objectColor = Color.HSVToRGB(hue, 1f, 1f);

        // オブジェクトの色を設定
        AltitudeUI.GetComponent<Image>().color = objectColor;
    }


    public float alphaDecrement = 0.01f; // 1フレームで減らすアルファ値
   
    void AltitudeLocus()
    {
      
        foreach (Image img in altitudeImagePool)
        {
            Color color = img.color;

            // アルファ値を減少させる
            color.a -= alphaDecrement;

            // アルファ値が0以下になったら、オブジェクトを破棄
            if (color.a <= 0)
            {
                //ReturnToPool(img);
                img.gameObject.GetComponent<RectTransform>().anchoredPosition = AltitudeUI.GetComponent<RectTransform>().anchoredPosition;
                img.color = AltitudeUI.GetComponent<Image>().color;
            }
            else
            {
                img.color = color;
              //  imageQueue.Enqueue(img); // 編集後のオブジェクトを再度Queueに追加
            }
        }

    }
  



    public float speedUI2 = 10f;
    public float speedUI3 = 20f;
    Image speedImage1;
    Image speedImage2;


    //void VelocityStart()
    void Velocity()
    {

        float v = new Vector2(rb.velocity.x, rb.velocity.z).magnitude;
            // directionから角度を求める
float angle = Mathf.Atan2(Drone.direction.y, Drone.direction.x) * Mathf.Rad2Deg;

        // Unityでは前方向が0度なので、-90度することで上方向を0度とする
        angle -= 90;

        // 角度が負になった場合は360度足して正の値にする
        if (angle < 0)
        {
            angle += 360;
        }
        if (v > speedUI2)
            SpeedUI.transform.GetChild(1).gameObject.SetActive(true);
        else
            SpeedUI.transform.GetChild(1).gameObject.SetActive(false);

        if (v > speedUI3)
            SpeedUI.transform.GetChild(2).gameObject.SetActive(true);
        else
            SpeedUI.transform.GetChild(2).gameObject.SetActive(false);


        SpeedUI.GetComponent<RectTransform>().localRotation = Quaternion.Euler(0, 0,angle);
        Color color1 = speedImage1.color;
        Color color2 = speedImage2.color;
        color1.a = v / speedUI2;
        color2.a = v / speedUI3;
        speedImage1.color = color1;
        speedImage2.color = color2;
    }
}
