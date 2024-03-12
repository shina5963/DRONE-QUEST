using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Save : MonoBehaviour
{
   
    // Update is called once per frame

    void Update()
    {
       
    }
    public GameObject DroneObj;
  
    public ParticleSystem particle1;
 
    public Vector3 Offset;
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject == DroneObj) // タグが"Item"であるオブジェクトだけに適用
        {
            if (!Parameter.isDeath)
            {
                particle1.Stop();
                Parameter.revivalPosition = transform.position + Offset;
                Parameter.revivalRotation = DroneObj.transform.rotation;
                //Yawの回転を考慮すべし
                //B2DのYawも
                //particle2.Stop();
                //particle3.Stop();

                Parameter.energy = 1000;
            }
        }
    }




}
