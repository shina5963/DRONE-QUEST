Shader "Custom/AlwaysOnTop"
{
    Properties
    {
        _Color ("Main Color", Color) = (1,1,1,1) // インスペクターで変更できる色
    }
    
    SubShader
    {
        Tags { "Queue" = "Transparent" }
        
        Pass
        {
            ZTest Always
            
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            
            #include "UnityCG.cginc"
            
            // 色プロパティ
            fixed4 _Color;
            
            struct appdata
            {
                float4 vertex : POSITION;
            };
            
            struct v2f
            {
                float4 vertex : SV_POSITION;
            };
            
            v2f vert(appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                return o;
            }
            
            half4 frag(v2f i) : SV_Target
            {
                return _Color;  // インスペクターで設定した色
            }
            ENDCG
        }
    }
}
