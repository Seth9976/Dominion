// 函数: _Z24FlanimGetTransformAtTimeP9DefFlanimiP15FlanimFrameTimeP18DefFlanimTransform
// 地址: 0xf66850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(*(arg3 + 8) != 0f))
    return FlanimGetTransformAtFrame(arg1, arg2, *arg3, arg4) __tailcall

int128_t var_88
FlanimGetTransformAtFrame(arg1, arg2, *arg3, &var_88)
int128_t var_e0
int64_t result
int128_t v0_2
int128_t v1_1
int128_t v2_1
result, v0_2, v1_1, v2_1 = FlanimGetTransformAtFrame(arg1, arg2, *(arg3 + 4), &var_e0)
int64_t var_98
int64_t var_40
int64_t x8_3

if (var_40 == 0 || var_98 == 0)
label_f66904:
    *arg4 = var_88
    int128_t var_78
    *(arg4 + 0x10) = var_78
    int64_t var_38
    x8_3 = var_38
    int128_t var_58
    v1_1 = var_58
    int128_t var_48
    v0_2 = var_48
    int128_t var_68
    v2_1 = var_68
else
    result, v0_2, v1_1, v2_1 = FlanimHasUnlerpableChange(&var_88, &var_e0)
    v0_2.d = *(arg3 + 8)
    
    if ((result.d & 1) == 0)
        return FlanimLerpTransform(arg4, &var_88, &var_e0, v0_2.d)
    
    v1_1.d = fconvert.s(0.5f)
    
    if (not(v0_2.d f>= v1_1.d))
        goto label_f66904
    
    *arg4 = var_e0
    int128_t var_d0
    *(arg4 + 0x10) = var_d0
    int64_t var_90
    x8_3 = var_90
    int128_t var_b0
    v1_1 = var_b0
    int128_t var_a0
    v0_2 = var_a0
    int128_t var_c0
    v2_1 = var_c0

*(arg4 + 0x50) = x8_3
*(arg4 + 0x30) = v1_1
*(arg4 + 0x40) = v0_2
*(arg4 + 0x20) = v2_1
return result
