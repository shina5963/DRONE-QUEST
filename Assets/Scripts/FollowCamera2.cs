using UnityEngine;
using UnityEngine.InputSystem;
public class FollowCamera2 : MonoBehaviour
{
    public Transform target; // 追跡するターゲット（オブジェクト）
    public float distance = 10.0f; // ターゲットとカメラの距離（半径）
    public float rotationSpeed = 70.0f; // 回転の速度


    // オイラー角度
    private float currentY = 45f;
    void Update()
    {

        // 右スティックによる上下回転
        float Y = Gamepad.current.rightStick.ReadValue().y;
        if (Mathf.Abs(Y) > 0.2)
            currentY -= Y * rotationSpeed * Time.deltaTime;
        // currentYを0-90度の間に制限
        currentY = Mathf.Clamp(currentY, -89f, 89.0f);
    }
    void LateUpdate()
    {
        // ターゲットの位置に対するカメラの位置を計算
        Vector3 direction = new Vector3(0, 0, -distance);
        Quaternion rotation = Quaternion.Euler(currentY, target.eulerAngles.y, 0);
        transform.position = target.position + rotation * direction;

        // カメラをターゲットに向ける
        transform.LookAt(target.position);
    }
}
