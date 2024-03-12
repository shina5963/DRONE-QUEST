using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Water : MonoBehaviour
{
    public float surfaceLevel = 0.0f; // 水面の高さ（水領域の中心からの相対値）
    public float BuoyancyForce = 50.0f; // 最大浮力
    public GameObject DroneObj;
    public GameObject Camera;
    public float fogPower;
    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == DroneObj)
        {
            RenderSettings.fog = true;
            Drone.isWater = true;
        }
    }
        void OnTriggerStay(Collider other)
    {
        // Rigidbodyがアタッチされていないオブジェクトは無視
        Rigidbody rb = other.GetComponent<Rigidbody>();
        if (rb == null)
        {
            return;
        }
       
        if (other.gameObject == DroneObj)
        {
            float distanceToSurface2=0;
            if (transform.position.y> Camera.transform.position.y)
             distanceToSurface2 = transform.position.y - Camera.transform.position.y;
          
            if (!Drone.canSubmarine)
            rb.velocity = rb.velocity.normalized/2f;
            RenderSettings.fogDensity = distanceToSurface2*fogPower;
           // if (isWater)
           //    RenderSettings.fog = true;
           //  else
           //  RenderSettings.fog = false;
            return;
        }

        //  float buoyancyForce = Mathf.Clamp(distanceToSurface, 0, maxBuoyancyForce);
        // 水面とオブジェクトの距離に応じた浮力を計算
        float distanceToSurface = transform.position.y - other.transform.position.y;
        // 浮力を適用
        rb.AddForce(Vector3.up * distanceToSurface * Time.deltaTime* BuoyancyForce);
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject == DroneObj)
        {
            RenderSettings.fog = false;
            Drone.isWater = false;
        }
        }

}
