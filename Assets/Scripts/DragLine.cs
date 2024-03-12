using UnityEngine;

public class DragLine : MonoBehaviour
{

    /*public GameObject DroneObj;
    public LineRenderer uiLineRenderer; // LineRenderer コンポーネント
    public LineRenderer mouseLineRenderer; // LineRenderer コンポーネント
    public Transform droneTransform; // ドローンの Transform
    private Vector3 initialTouchPosition; // タッチの初期位置
    private bool isDragging = false; // ドラッグ中かどうか
    Drone drone;

    void Start()
    {
        drone = DroneObj.GetComponent<Drone>();
        screenCenter = new Vector3(Screen.width / 2, Screen.height / 2, 0);
    }
    void Update()
    {
        HandleDrag();
        Move();
    }


    Vector3 screenCenter;
    Vector3 initial;
    void HandleDrag()
    {
        Vector3 droneToCamera = Camera.main.transform.position - droneTransform.position;
        Plane plane = new Plane(droneToCamera.normalized, droneTransform.position);

        // 画面中央の座標を計算
        Vector3 screenCenter = new Vector3(Screen.width / 2, Screen.height / 2, 0);
        Ray centerRay = Camera.main.ScreenPointToRay(screenCenter);
        float centerDistance;
        Vector3 centerPoint = Vector3.zero;

        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            initial = Input.mousePosition;
            float distance;
            if (plane.Raycast(ray, out distance))
            {

                initialTouchPosition = ray.GetPoint(distance) - droneTransform.position;
                // initialTouchPosition = ray.GetPoint(distance) - centerRay.GetPoint(distance);
                isDragging = true;
            }
        }

        if (Input.GetMouseButtonUp(0))
        {
            isDragging = false;
            uiLineRenderer.positionCount = 0;
            mouseLineRenderer.positionCount = 0;
        }

        if (isDragging)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            float distance;
            if (plane.Raycast(ray, out distance))
            {
                Vector3 currentTouchPosition = ray.GetPoint(distance);
                endPoint = currentTouchPosition - initialTouchPosition;

                uiLineRenderer.positionCount = 2;
                uiLineRenderer.SetPosition(0, droneTransform.position);

                uiLineRenderer.SetPosition(1, endPoint);

            }

            Ray ray1 = Camera.main.ScreenPointToRay(screenCenter);
            Ray ray2 = Camera.main.ScreenPointToRay(Input.mousePosition - initial + screenCenter);
            float distance1, distance2;

            if (plane.Raycast(ray1, out distance1) && plane.Raycast(ray2, out distance2))
            {
                Vector3 worldPosition1 = ray1.GetPoint(distance1);
                Vector3 worldPosition2 = ray2.GetPoint(distance2);

                mouseLineRenderer.positionCount = 2;
                mouseLineRenderer.SetPosition(0, worldPosition1);
                mouseLineRenderer.SetPosition(1, worldPosition2);
            }
        }
    }

    Vector3 endPoint;  // HandleDrag関数で計算された終点（ドローン座標系での）

    void Move()
    {
        if (isDragging) // HandleDrag関数でドラッグ中であるか確認
        {
            //Vector3 dragDirection = (endPoint - droneTransform.position) * drone.dragPower; // 終点から始点に向かう単位ベクトル

            Vector3 dragDirection = (Input.mousePosition - initial) * drone.dragPower; // 終点から始点に向かう単位ベクトル
            // float angle = Mathf.Atan2(-dragDirection.y, -dragDirection.x) * Mathf.Rad2Deg; // ベクトルの角度を計算
            float angle = Mathf.Atan2(-dragDirection.y, -dragDirection.x) * Mathf.Rad2Deg; // ベクトルの角度を計算
            angle = -(angle % 360) + 90;  // まずは0～360度に制限
            if (angle > 180)  // 180度を超える場合
            {
                angle -= 360;  // 360度を引いて、-180～180度の範囲に
            }
            // else if (angle < -180)  // -180度を超える場合
            // {
            //     angle += 360;  // 360度を足して、-180～180度の範囲に
            // }
            print(angle);
            // 角度が45度から135度の間であるか確認
            // if (-90 <= angle && angle <= 90)
            // {
            //     print("euler.y=" + drone.eulerRef.y);
            // print("angle - 90=" + angle);
            if (angle > 1)
            {

                drone.eulerRef.y += 0.01f * angle / 9;


            }
            if (angle < -1)
            {


                drone.eulerRef.y -= 0.01f * (-angle) / 9;

            }
            // }



            // ドラッグ距離が閾値より大きい場合のみ処理を行う
            if (dragDirection.magnitude > drone.threshold)
            {
                float Power = dragDirection.magnitude * drone.DroneSpeed;
                // ４方向に動きを制限
                // if (Mathf.Abs(dragDirection.x) > Mathf.Abs(dragDirection.y))
                // {
                //     // 上下方向
                //     dragDirection.y = 0;
                //     drone.eulerRef.z = dragDirection.x > 0 ? -Power : Power;
                // }
                // else
                // {
                //     // 左右方向
                //     dragDirection.x = 0;
                //     drone.eulerRef.x = dragDirection.y > 0 ? Power : -Power;
                // }
                drone.eulerRef.z = dragDirection.x > 0 ? -Power : Power;
                drone.eulerRef.x = dragDirection.y > 0 ? Power : -Power;


            }
            else
            {
                drone.eulerRef.x = 0;
                drone.eulerRef.z = 0;
            }
        }
        else
        {
            drone.eulerRef.x = 0;
            drone.eulerRef.z = 0;
        }

    }
    */




}
