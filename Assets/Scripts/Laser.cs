using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Laser : MonoBehaviour
{
    public float rayLength = 100f;
    private LineRenderer lineRenderer;
 public bool angleLaser;
    public GameObject DroneObj;
    int ID;
    void Start()
    {
        lineRenderer = transform.GetComponent<LineRenderer>();
       
        lineRenderer.positionCount = 2;
        ID = GetInstanceID();
    }
    public bool stop;
    void Update()
    {
        // Rayの定義
        if (!stop)
        {
            Ray ray = new Ray(transform.position, transform.forward);


            RaycastHit hit;
            int layerMask = ~(1 << 13);  // 8番目のレイヤーを除外する

            // Rayの発射
            if (Physics.Raycast(ray, out hit, rayLength, layerMask))
            {
                // Rayが何かにヒットした場合
                //  Debug.Log("Hit: " + hit.collider.gameObject.name);

                // LineRendererで線を描画
                lineRenderer.SetPosition(0, transform.position);
                lineRenderer.SetPosition(1, hit.point);
                if (hit.collider.gameObject == DroneObj)
                {
                    if (angleLaser)
                    {
                        if (!Parameter.AngleLasers.ContainsKey(ID))  // IDがすでに存在しないか確認
                        {
                            Parameter.AngleLasers.Add(ID, gameObject);
                        }
                    }
                    else
                    {
                        if (!Parameter.Lasers.ContainsKey(ID))  // IDがすでに存在しないか確認
                        {
                            Parameter.Lasers.Add(ID, gameObject);
                        }
                    }

                }
                else

                {
                    if (angleLaser)
                    {
                        if (Parameter.AngleLasers.ContainsKey(ID))  // IDが存在するか確認
                        {
                            Parameter.AngleLasers.Remove(ID);
                        }
                    }
                    else
                    {
                        if (Parameter.Lasers.ContainsKey(ID))  // IDが存在するか確認
                        {
                            Parameter.Lasers.Remove(ID);
                        }
                    }
                }


            }
            else
            {
                // Rayが何もヒットしない場合
                lineRenderer.SetPosition(0, transform.position);
                lineRenderer.SetPosition(1, transform.position + -transform.up * rayLength);

            }
            if (angleLaser && angle)
            {
                //if (Drone.transform.position.y > transform.position.y)
                if (Drone.canDrone)
                    transform.LookAt(DroneObj.transform.position);
            }
        }
       
    }
    bool angle;
    private void OnTriggerEnter(Collider other)
    {
        if (angleLaser)
        {
            if (other.gameObject == DroneObj) // タグが"Item"であるオブジェクトだけに適用
            {
                angle = true;

            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (angleLaser)
        {
            if (other.gameObject == DroneObj) // タグが"Item"であるオブジェクトだけに適用
            {
                angle = false;

            }
        }
    }


}
