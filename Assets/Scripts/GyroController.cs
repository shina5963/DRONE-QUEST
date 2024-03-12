using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class GyroController : MonoBehaviour
{
    private Gamepad gamepad;

    // void Start()
    // {
    //     gamepad = Gamepad.current;
    // }

    // void Update()
    // {
    //     if (gamepad == null) return;

    //     // Pro Controllerのジャイロスコープデータを取得
    //     // これは一例であり、具体的なコントローラに依存する可能性があります。
    //     var gyro = gamepad.ReadValueAsObject("Gyroscope");
    //     if (gyro is Vector3)
    //     {
    //         Vector3 gyroData = (Vector3)gyro;
    //         // ここでジャイロデータを使用
    //         transform.Rotate(gyroData.x, gyroData.y, gyroData.z);
    //     }
    // }
}
