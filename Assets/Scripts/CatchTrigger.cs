using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CatchTrigger : MonoBehaviour
{
   

    public GameObject DroneObj;



    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == DroneObj)
        {
            if (Drone.canDrone)
            {
                Drone.UFOCatchObject = gameObject;
                print(Drone.UFOCatchObject);
            }

        }
    }


    void OnTriggerExit(Collider other)
    {

        if (other.gameObject == DroneObj)
        {
            if (Drone.canDrone)
            {
                Drone.UFOCatchObject = null;
            }

        }
    }
}
