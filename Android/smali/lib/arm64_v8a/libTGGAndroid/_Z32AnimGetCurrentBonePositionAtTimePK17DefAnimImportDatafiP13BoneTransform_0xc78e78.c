// 函数: _Z32AnimGetCurrentBonePositionAtTimePK17DefAnimImportDatafiP13BoneTransform
// 地址: 0xc78e78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 4)
int64_t x21 = *(arg1 + 0x18)
int32_t x23 = *arg1 - 1
float iptr
int64_t result
int128_t v0
int128_t v1_1
int128_t v2
v0, result, v1_1, v2 = modff(&iptr, float.s(x23) * arg2)
v1_1.d = iptr
v2.d = fconvert.s(0.5f)

if (v1_1.d f< 0f)
    v2.d = fconvert.s(-0.5f)
else
    v2.d = v2.d

v1_1.d = v1_1.d f+ v2.d
uint32_t x8_1 = vcvts_s32_f32(v1_1.d)

if ((x8_1 & 0x80000000) != 0)
    x8_1 = 0
    v0.d = 0f
else if (x23 s<= x8_1)
    int128_t* x8_3 = x21 + muls.dp.d(arg3 + x23 * x22, 0x2c)
    v2 = *x8_3
    v1_1 = x8_3[1]
    *(arg4 + 0x1c) = *(x8_3 + 0x1c)
    *arg4 = v2
    *(arg4 + 0x10) = v1_1
    return result

return BoneTransformLerp(arg4, x21 + muls.dp.d(arg3 + x8_1 * x22, 0x2c), 
    x21 + muls.dp.d(arg3 + (x8_1 + 1) * x22, 0x2c), v0.d)
