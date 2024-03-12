using UnityEngine;

public class LookAtCamera : MonoBehaviour
{
    private Camera mainCamera;

    void Start()
    {
        // シーン内のメインカメラを取得
        mainCamera = Camera.main;
    }

    void Update()
    {
        // 画像のTransformがカメラを直接向くように回転
        transform.LookAt(transform.position + mainCamera.transform.rotation * Vector3.forward,
                        mainCamera.transform.rotation * Vector3.up);
    }
}
