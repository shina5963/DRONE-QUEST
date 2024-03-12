using UnityEngine;
using UnityEngine.UI;

public class PositionGraph : MonoBehaviour
{
    public GameObject objectToTrack; // グラフ化するオブジェクト
    public GameObject pointPrefab; // グラフのポイントとして使用するプレハブ
    public Transform pointsParentX; // x成分のポイントを格納する親
    public Transform pointsParentZ; // z成分のポイントを格納する親
    public float scale = 50f; // グラフのスケール

    void Start()
    {
        /*for (int i = 0; i < 10; i++) // 10ポイントを描画する
                {
                    // x成分のポイントを作成
                    GameObject pointX = Instantiate(pointPrefab, pointsParentX);
                    float xPosition = i * 100f; // x軸上の位置
                    float yPositionX = objectToTrack.transform.position.x * scale; // x成分
                    pointX.GetComponent<RectTransform>().anchoredPosition = new Vector2(xPosition, yPositionX);

                    // z成分のポイントを作成
                    GameObject pointZ = Instantiate(pointPrefab, pointsParentZ);
                    float yPositionZ = objectToTrack.transform.position.z * scale; // z成分
                    pointZ.GetComponent<RectTransform>().anchoredPosition = new Vector2(xPosition, yPositionZ);
                }*/
    }
    int i;
    float xPositionBefore;
    float yPositionXBefore;
    void Update()
    {
        // x成分のポイントを作成
        i++;
        GameObject pointX = Instantiate(pointPrefab, pointsParentX);
        //float xPosition = i * 100f; // x軸上の位置
        float xPosition = objectToTrack.transform.position.x * scale; // x成分
        float yPositionX = objectToTrack.transform.position.z * scale; // x成分
                                                                       //if (xPositionBefore != xPosition && yPositionX != yPositionX)
        pointX.GetComponent<RectTransform>().anchoredPosition = new Vector2(xPosition, yPositionX);
        xPositionBefore = xPosition;
        yPositionXBefore = yPositionX;
        //print(new Vector2(xPosition, yPositionX));
        /* // z成分のポイントを作成
         GameObject pointZ = Instantiate(pointPrefab, pointsParentZ);
         float yPositionZ = objectToTrack.transform.position.z * scale; // z成分
         pointZ.GetComponent<RectTransform>().anchoredPosition = new Vector2(xPosition, yPositionZ);*/
    }
}
