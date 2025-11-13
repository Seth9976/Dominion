// 函数: stbtt_MakeGlyphBitmapSubpixelPrefilter
// 地址: 0x1008840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = stbtt_MakeGlyphBitmapSubpixel(arg1, arg2, zx.q(arg3 - arg6 + 1), 
    zx.q(arg4 - arg7 + 1), arg5, zx.q(arg10))

if (arg6 s< 2)
    if (arg7 s>= 2)
        goto label_1008928
    
    goto label_1008894

result = sub_1008f28(arg2, arg3, arg4, arg5, arg6)
float* x8_2
float v0
float v1

if (arg7 s< 2)
label_1008894:
    x8_2 = arg9
    v0 = 0f
    v1 = 0f
    
    if (arg6 != 0)
        v1 = float.s(arg6)
        v1 = float.s(1 - arg6) / (v1 + v1)
else
label_1008928:
    result = sub_10091ec(arg2, arg3, arg4, arg5, arg7)
    x8_2 = arg9
    v0 = 0f
    v1 = 0f
    
    if (arg6 != 0)
        v1 = float.s(arg6)
        v1 = float.s(1 - arg6) / (v1 + v1)

*arg8 = v1

if (arg7 != 0)
    v0 = float.s(arg7)
    v0 = float.s(1 - arg7) / (v0 + v0)

*x8_2 = v0
return result
