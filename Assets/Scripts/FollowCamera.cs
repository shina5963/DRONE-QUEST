using UnityEngine;
using System.Collections;

public class FollowCamera : MonoBehaviour
{
    public Transform target; // 追従するターゲット
    public Vector3 offset;  // ターゲットからのオフセット距離
    public float smoothSpeed = 0.125f; // カメラの追従速度（スムージング用）
    bool stop;
    void FixedUpdate()
    {
        if(!stop)
        Follow();
        if(!Drone.canPID)
  StartCoroutine(on());
}


    
    void Follow(){

        // ターゲットの上方向（upベクトル）と前方方向（forwardベクトル）を取得
        Vector3 targetUp = target.up;
        Vector3 targetForward = target.forward;

        // ターゲットの背後かつ45度上方にオフセットするためのベクトルを計算
        Vector3 desiredOffset = (-targetForward + targetUp).normalized * offset.z;

        // ターゲットの位置に計算したオフセットを加える
        Vector3 desiredPosition = target.position + desiredOffset;

        // 現在のカメラの位置と目的の位置との間で線形補間（Lerp）を行う
        Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed * Time.deltaTime);

        // カメラの位置を更新
        transform.position = smoothedPosition;

        // カメラがターゲットを向くようにする
        transform.LookAt(target.position);
    }
IEnumerator on(){
      yield return new WaitForSeconds(0.25f);
      smoothSpeed = smoothSpeed/2; // カメラの追従速度（スムージング用）
yield return new WaitForSeconds(0.25f);
smoothSpeed = smoothSpeed/2; // カメラの追従速度（スムージング用）
yield return new WaitForSeconds(0.25f);
smoothSpeed = smoothSpeed/2; // カメラの追従速度（スムージング用）
stop=true;
}

}
