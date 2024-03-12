using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Energy : MonoBehaviour
{
    // Start is called before the first frame update
    Rigidbody rb;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    public float small;
    void Update()
    {
        if (ON) {

        rb.AddForce((transform.position - DroneObj.transform.position) * -magnetStrength*Time.deltaTime);
            transform.localScale = transform.localScale*Time.deltaTime*small;
        }
    }
    public GameObject DroneObj;
    public float magnetStrength = 10f; // �z���񂹂鋭�x
    bool ON;
    public ParticleSystem particle1;
    public ParticleSystem particle2;
    public ParticleSystem particle3;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject==DroneObj) // �^�O��"Item"�ł���I�u�W�F�N�g�����ɓK�p
        {
            ON = true;
            StartCoroutine(DestroyAfterSeconds(2f)); // 5�b��ɔj��
            particle1.Stop();
            particle2.Stop();
            particle3.Stop();
        }
    }

   
    

IEnumerator DestroyAfterSeconds(float seconds)
{
    yield return new WaitForSeconds(seconds); // �w�肵���b���ҋ@
    Parameter.energy += 1000;
    Destroy(gameObject); // ����GameObject��j��
}
}
