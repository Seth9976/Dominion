// 函数: _Z29FlanimGetShapeTransformAtTimeP9DefFlanimiP15FlanimFrameTimeP20FlanimShapeTransform
// 地址: 0xf63ca8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(*(arg3 + 8) != 0f))
    return FlanimGetShapeTransformAtFrame(arg1, arg2, *arg3, arg4) __tailcall

FlanimShapeTransform var_68
FlanimGetShapeTransformAtFrame(arg1, arg2, *arg3, &var_68)
FlanimShapeTransform var_a0
FlanimGetShapeTransformAtFrame(arg1, arg2, *(arg3 + 4), &var_a0)
int64_t result = FlanimLerpShapeTransform(arg4, &var_68, &var_a0, *(arg3 + 8))
int64_t var_40
*(arg4 + 0x28) = var_40
int32_t var_38
*(arg4 + 0x30) = var_38
return result
