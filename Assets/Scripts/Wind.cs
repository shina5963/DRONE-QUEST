using UnityEngine;

public class Wind : MonoBehaviour
{

    public Vector3 XYZ = new Vector3(1f, 0f, 0f);
    public float windStrength = 10f;
    public GameObject Drone;
    public ParticleSystem windEffect; // パーティクルシステムへの参照
    public float RateOverTimeRate = 1f; // 新しいrateOverTimeの値
    public float VelocityModuleRate = 1f; // 新しいrateOverTimeの値
    public bool isWind;
    Rigidbody rb;
    ParticleSystem.EmissionModule emissionModule;
    ParticleSystem.VelocityOverLifetimeModule VelocityModule;
    Vector3 xyz;
    void Start()
    {
        rb = Drone.GetComponent<Rigidbody>();
        emissionModule = windEffect.emission;
        VelocityModule = windEffect.velocityOverLifetime;

        xyz= new Vector3(XYZ.z, XYZ.y, XYZ.x);
    }
    void FixedUpdate()
    {
       // transform.position = Drone.transform.position;
        if (isTrigger)
        {
          
            rb.AddForce(xyz.normalized * windStrength);

        
        }
     

    }
    private bool isTrigger = false;

    // トリガーに他のオブジェクトが入ったとき
    void OnTriggerEnter(Collider other)
    {
     
        if (other.gameObject==Drone)
        {
            isTrigger = true;
        }
      

    }

    // トリガーから他のオブジェクトが出たとき
    void OnTriggerExit(Collider other)
    {
        if (other.gameObject == Drone)
        {
            isTrigger = false;
        }
    }

}

/*
using UnityEngine;

public class Wind : MonoBehaviour
{

    public Vector3 XYZ = new Vector3(1f, 0f, 0f);
    public float windStrength = 10f;
    public GameObject Drone;
    public ParticleSystem windEffect; // パーティクルシステムへの参照
    public float RateOverTimeRate = 1f; // 新しいrateOverTimeの値
    public float VelocityModuleRate = 1f; // 新しいrateOverTimeの値
    public bool isWind;
    Rigidbody rb;
    ParticleSystem.EmissionModule emissionModule;
    ParticleSystem.VelocityOverLifetimeModule VelocityModule;
    void Start()
    {
        rb = Drone.GetComponent<Rigidbody>();
        emissionModule = windEffect.emission;
        VelocityModule = windEffect.velocityOverLifetime;
    }
    void FixedUpdate()
    {
        // transform.position = Drone.transform.position;
        if (isWind)
        {
            Vector3 xyz = new Vector3(XYZ.z, XYZ.y, XYZ.x);
            rb.AddForce(xyz.normalized * windStrength);

            // オブジェクトの回転を設定
            transform.rotation = Quaternion.LookRotation(xyz);

            // 放出モジュールへの参照を取得


            // rateOverTimeを新しい値に設定
            emissionModule.rateOverTime = (xyz.normalized * windStrength).magnitude * RateOverTimeRate;
            if (windStrength > 0)
                VelocityModule.speedModifier = (xyz.normalized * windStrength).magnitude * VelocityModuleRate;
            else
                VelocityModule.speedModifier = -(xyz.normalized * windStrength).magnitude * VelocityModuleRate;
        }
        else
        {
            emissionModule.rateOverTime = 0;

        }

    }

}
*/