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
    public float magnetStrength = 10f; // 吸い寄せる強度
    bool ON;
    public ParticleSystem particle1;
    public ParticleSystem particle2;
    public ParticleSystem particle3;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject==DroneObj) // タグが"Item"であるオブジェクトだけに適用
        {
            ON = true;
            StartCoroutine(DestroyAfterSeconds(2f)); // 5秒後に破壊
            particle1.Stop();
            particle2.Stop();
            particle3.Stop();
        }
    }

   
    

IEnumerator DestroyAfterSeconds(float seconds)
{
    yield return new WaitForSeconds(seconds); // 指定した秒数待機
    Parameter.energy += 1000;
    Destroy(gameObject); // このGameObjectを破壊
}
}
