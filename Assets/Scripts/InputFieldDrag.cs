using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;


public class InputFieldDrag : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerEnterHandler, IPointerExitHandler
{
    public Texture2D cursorTexture; // インスペクタから設定するカーソル画像
    public Texture2D cursorTexture2; // インスペクタから設定するカーソル画像
    public Vector2 hotSpot = Vector2.zero; // カーソルの「アクティブな点」の位置
    public Vector2 hotSpot2 = Vector2.zero; // カーソルの「アクティブな点」の位置

    private InputField inputField;
    private float initialValue;
    private Vector2 initialPosition;
    public bool isDrag;
    public bool startkun;
    void Start()
    {
        if (startkun)
            Cursor.SetCursor(cursorTexture2, Vector2.zero, CursorMode.ForceSoftware);
        inputField = transform.parent.GetComponent<InputField>();
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        // ドラッグ終了時の処理
        // ここでは、初期位置と終了位置の差分などを計算できます。
        isDrag = false;
        Cursor.SetCursor(cursorTexture2, hotSpot2, CursorMode.ForceSoftware);


    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        // ドラッグ開始時の値と位置を記録
        initialValue = float.Parse(inputField.text);
        initialPosition = eventData.position;
        isDrag = true;
    }

    public void OnDrag(PointerEventData eventData)
    {
        // ドラッグ中に値を増減

        float delta = eventData.position.x - initialPosition.x;
        float newValue = initialValue + delta * 0.1f; // 0.1は感度、調整が必要
        inputField.text = newValue.ToString();
    }



    public void OnPointerEnter(PointerEventData eventData)
    {
        // マウスカーソルが領域に入った時にカーソルを変更

        Cursor.SetCursor(cursorTexture, hotSpot, CursorMode.ForceSoftware);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        // マウスカーソルが領域から出た時にデフォルトのカーソルに戻す
        if (!isDrag)
            Cursor.SetCursor(cursorTexture2, hotSpot2, CursorMode.ForceSoftware);
    }
}
