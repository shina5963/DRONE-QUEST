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
        if (collision.gameObject == DroneObj) // �^�O��"Item"�ł���I�u�W�F�N�g�����ɓK�p
        {
            if (!Parameter.isDeath)
            {
                particle1.Stop();
                Parameter.revivalPosition = transform.position + Offset;
                Parameter.revivalRotation = DroneObj.transform.rotation;
                //Yaw�̉�]���l�����ׂ�
                //B2D��Yaw��
                //particle2.Stop();
                //particle3.Stop();

                Parameter.energy = 1000;
            }
        }
    }




}
