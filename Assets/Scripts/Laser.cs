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
        // Ray�̒�`
        if (!stop)
        {
            Ray ray = new Ray(transform.position, transform.forward);


            RaycastHit hit;
            int layerMask = ~(1 << 13);  // 8�Ԗڂ̃��C���[�����O����

            // Ray�̔���
            if (Physics.Raycast(ray, out hit, rayLength, layerMask))
            {
                // Ray�������Ƀq�b�g�����ꍇ
                //  Debug.Log("Hit: " + hit.collider.gameObject.name);

                // LineRenderer�Ő���`��
                lineRenderer.SetPosition(0, transform.position);
                lineRenderer.SetPosition(1, hit.point);
                if (hit.collider.gameObject == DroneObj)
                {
                    if (angleLaser)
                    {
                        if (!Parameter.AngleLasers.ContainsKey(ID))  // ID�����łɑ��݂��Ȃ����m�F
                        {
                            Parameter.AngleLasers.Add(ID, gameObject);
                        }
                    }
                    else
                    {
                        if (!Parameter.Lasers.ContainsKey(ID))  // ID�����łɑ��݂��Ȃ����m�F
                        {
                            Parameter.Lasers.Add(ID, gameObject);
                        }
                    }

                }
                else

                {
                    if (angleLaser)
                    {
                        if (Parameter.AngleLasers.ContainsKey(ID))  // ID�����݂��邩�m�F
                        {
                            Parameter.AngleLasers.Remove(ID);
                        }
                    }
                    else
                    {
                        if (Parameter.Lasers.ContainsKey(ID))  // ID�����݂��邩�m�F
                        {
                            Parameter.Lasers.Remove(ID);
                        }
                    }
                }


            }
            else
            {
                // Ray�������q�b�g���Ȃ��ꍇ
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
            if (other.gameObject == DroneObj) // �^�O��"Item"�ł���I�u�W�F�N�g�����ɓK�p
            {
                angle = true;

            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (angleLaser)
        {
            if (other.gameObject == DroneObj) // �^�O��"Item"�ł���I�u�W�F�N�g�����ɓK�p
            {
                angle = false;

            }
        }
    }


}
