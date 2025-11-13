// 函数: _Z20EmitTextureFn_Radial7XString
// 地址: 0xf8103c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::GetString()
return XFormatString("\n\n    const float PI = 3.14159265358979323846264;\n    float2 normUV = (uv - "
"5) * 2.0;\n\tfloat angle   = atan2(normUV.y, normUV.x) / (2.0 * PI);\n    float2 sampleUV = "
"float2(angle, .5);\n\tfloat4 retval = tex2D(%s, sampleUV);\n\treturn retval;\n\n") __tailcall
