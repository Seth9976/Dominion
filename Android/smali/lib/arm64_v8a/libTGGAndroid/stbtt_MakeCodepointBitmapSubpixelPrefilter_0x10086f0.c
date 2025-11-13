// 函数: stbtt_MakeCodepointBitmapSubpixelPrefilter
// 地址: 0x10086f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = stbtt_MakeGlyphBitmapSubpixel(arg1, arg2, zx.q(arg3 - arg6 + 1), 
    zx.q(arg4 - arg7 + 1), zx.q(arg5), zx.q(stbtt_FindGlyphIndex(arg1, zx.q(arg14))), arg9, arg10, 
    arg11, arg12)

if (arg6 s< 2)
    if (arg7 s>= 2)
        goto label_1008828
    
    goto label_1008788

result = sub_1008f28(arg2, arg3, arg4, arg5, arg6)
float* x8_1
float v0_1
float v1_1

if (arg7 s< 2)
label_1008788:
    x8_1 = arg13
    v0_1 = 0f
    v1_1 = 0f
    
    if (arg6 != 0)
        v1_1 = float.s(arg6)
        v1_1 = float.s(1 - arg6) / (v1_1 + v1_1)
else
label_1008828:
    result = sub_10091ec(arg2, arg3, arg4, arg5, arg7)
    x8_1 = arg13
    v0_1 = 0f
    v1_1 = 0f
    
    if (arg6 != 0)
        v1_1 = float.s(arg6)
        v1_1 = float.s(1 - arg6) / (v1_1 + v1_1)

*arg8 = v1_1

if (arg7 != 0)
    v0_1 = float.s(arg7)
    v0_1 = float.s(1 - arg7) / (v0_1 + v0_1)

*x8_1 = v0_1
return result
