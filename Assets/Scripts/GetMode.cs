using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetMode : MonoBehaviour
{
  

  
    void Start()
    {
      
    }

  
    void Update()
    {
        if (small) {
            transform.localScale -= transform.localScale * Time.deltaTime*10;
            if (transform.localScale.magnitude < 1)
                Destroy(gameObject);
        }
    }
    public GameObject DroneObj;
    bool small;
    public  bool Bike;
    public  bool Submarine;

    public  bool Human;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == DroneObj) // タグが"Item"であるオブジェクトだけに適用
        {
            if (Bike) {
                Drone.okBike = true;
                DroneObj.GetComponent<Drone>().ResetAnimeBool();
                Drone.isBike = true;
                DroneObj.GetComponent<Drone>().SelectMode();
                DroneObj.GetComponent<Drone>().SetMode();
            
              small = true;
            }
            if (Submarine)
            {
                Drone.okSubmarine = true;
                DroneObj.GetComponent<Drone>().ResetAnimeBool();
                Drone.isSubmarine = true;
                DroneObj.GetComponent<Drone>().SelectMode();
                DroneObj.GetComponent<Drone>().SetMode();
           
                small = true;
            }
            // if(Submaine)
            // if(Human)
        }
    }




}
