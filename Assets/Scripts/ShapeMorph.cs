using UnityEngine;


public class ShapeMorph : MonoBehaviour
{
    private Mesh mesh;
    private Vector3[] originalVertices;
    private Vector3[] targetVertices;

    // 変形の速度
    public float morphSpeed = 1f;
    private float morphTime;

    void Start()
    {
        // この例では、最初にアタッチされているメッシュを取得します。
        mesh = GetComponent<MeshFilter>().mesh;
        originalVertices = mesh.vertices;

        // 平面への変形の目標頂点を作成
        targetVertices = new Vector3[originalVertices.Length];
        for (int i = 0; i < originalVertices.Length; i++)
        {
            targetVertices[i] = new Vector3(originalVertices[i].x, originalVertices[i].y, 0);
        }
    }

    void Update()
    {
        // sin関数を使用して、morphTimeが0から1の間で振動するようにします。
        morphTime = (Mathf.Sin(Time.time * morphSpeed) + 1f) / 2f;

        // 現在の頂点と目標頂点の間でmorphTimeに基づいて補間
        Vector3[] vertices = new Vector3[originalVertices.Length];
        for (int i = 0; i < originalVertices.Length; i++)
        {
            vertices[i] = Vector3.Lerp(originalVertices[i], targetVertices[i], morphTime);
        }

        // メッシュに新しい頂点を適用
        mesh.vertices = vertices;
        mesh.RecalculateBounds();
        mesh.RecalculateNormals();
    }
}
