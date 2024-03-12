using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UFO : MonoBehaviour
{
   

  
    public GameObject DroneObj;
 
   
    public GameObject CatchUI;
    public GameObject ReleaseUI;

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == DroneObj)
        {
            if (Drone.canDrone)
            {
                CatchUI.SetActive(true);
                Drone.isUFOArea = true;
            }
        }
    }
    void OnTriggerStay(Collider other)
    {
        if (other.gameObject == DroneObj)
        {
            if (!Drone.canDrone)
            {
                CatchUI.SetActive(false);
               
                Drone.isUFOArea =false;
            }
            else
            {
                CatchUI.SetActive(true);
                Drone.isUFOArea = true;
     
            }
            if (Drone.canUFO)
            {
                CatchUI.SetActive(false);
                ReleaseUI.SetActive(true);
            }
            else
                ReleaseUI.SetActive(false);

        }
    }


    void OnTriggerExit(Collider other)
    {
        if (other.gameObject == DroneObj)
        {
          
            Drone.isUFOArea = false;

            CatchUI.SetActive(false);
     
        }
    }

}
