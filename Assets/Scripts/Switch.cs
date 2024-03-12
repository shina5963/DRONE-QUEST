using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Switch : MonoBehaviour
{
    public float sinkAmount = 0.1f;  // ���ޗ�
    public float sinkSpeed = 0.05f;  // ���ޑ��x
    private Vector3 originalPosition;
    private Vector3 sunkPosition;
    public GameObject[] Laysers = new GameObject[0];//�v���y���̑��x�CAngular Velocity

    private void Start()
    {
     
    }
    bool ON;
    private void OnCollisionStay(Collision other)
    {
        ON = true;
    }
    private void OnCollisionExit(Collision other)
    {
        ON = false;
    }
    public float targetHeightMin;
    public float targetHeightMax;
    void Update()
    {
        if ( ON )
        {
            if (transform.position.y > targetHeightMin)
            {
                transform.position = new Vector3(transform.position.x, transform.position.y - Time.deltaTime * sinkSpeed, transform.position.z);
                if (transform.position.y < targetHeightMin + 0.05f)
                {
                    //print(Laysers[0].GetComponent<Laser>().stop);
                    if (Laysers[0].GetComponent<LineRenderer>().enabled)
                    {

                        foreach (GameObject Lay in Laysers)
                        {
                           Lay.GetComponent<Laser>().stop = true;
                            Lay.GetComponent<LineRenderer>().enabled = false;
                        }
                    }
                }
                else
                {
                    if (!Laysers[0].GetComponent<LineRenderer>().enabled)
                    {
                        foreach (GameObject Lay in Laysers)
                        {
                            Lay.GetComponent<Laser>().stop = false;
                            Lay.GetComponent<LineRenderer>().enabled = true;
                        }

                    }
                }

                    }
        }
        else
        {
            if (transform.position.y < targetHeightMax)
                transform.position = new Vector3(transform.position.x, transform.position.y + Time.deltaTime * sinkSpeed, transform.position.z);
if (!Laysers[0].GetComponent<LineRenderer>().enabled)
                    {
                        foreach (GameObject Lay in Laysers)
                        {
                            Lay.GetComponent<Laser>().stop = false;
                            Lay.GetComponent<LineRenderer>().enabled = true;
                        }

                    }
        }
    }
 
}
