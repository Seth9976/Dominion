// 函数: stbtt_GetPackedQuad
// 地址: 0x100a638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = fconvert.s(1f)
float v1 = v2 / float.s(arg2)
float result = v2 / float.s(arg3)
int64_t x8 = sx.q(arg4)

if (arg8 == 0)
    *arg7 = *arg5 + *(arg1 + muls.dp.d(arg4, 0x1c) + 8)
    void* x9_2 = arg1 + x8 * 0x1c
    arg7[1] = *arg6 + *(x9_2 + 0xc)
    arg7[4] = *arg5 + *(x9_2 + 0x14)
    v2 = *arg6 + *(x9_2 + 0x18)
else
    void* x10_1 = arg1 + x8 * 0x1c
    uint32_t temp0_1
    v2 = float.s(temp0_1)
    float v3 = float.s(sx.d(vcvtms_s32_f32(*arg6 + *(x10_1 + 0xc) + fconvert.s(0.5f))))
    *arg7 = v2
    arg7[1] = v3
    arg7[4] = *(x10_1 + 0x14) + v2 - *(arg1 + muls.dp.d(arg4, 0x1c) + 8)
    v2 = *(x10_1 + 0x18) + v3 - *(x10_1 + 0xc)

arg7[5] = v2
int16_t* x8_1 = arg1 + x8 * 0x1c
v2.w = *x8_1
arg7[2] = v1 * float.s(v2)
v2.w = x8_1[1]
arg7[3] = result * float.s(v2)
v2.w = x8_1[2]
arg7[6] = v1 * float.s(v2)
v1.w = x8_1[3]
arg7[7] = result * float.s(v1)
result = *(x8_1 + 0x10) + *arg5
*arg5 = result
return result
