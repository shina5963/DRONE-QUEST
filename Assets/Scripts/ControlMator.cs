using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ControlMator : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject Drone;
    private Image image;
    private Rigidbody rb;
    void Start()
    {
        rb = Drone.GetComponent<Rigidbody>();

        image = GetComponent<Image>();
    }

    // Update is called once per frame
    public float Max;
    void Update()
    {
        float V = rb.velocity.magnitude;
        print(V);
        image.fillAmount = V / Max * 0.25f;
    }
}
