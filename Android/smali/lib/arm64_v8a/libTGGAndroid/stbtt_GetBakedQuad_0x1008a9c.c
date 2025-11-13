// 函数: stbtt_GetBakedQuad
// 地址: 0x1008a9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v2
v2.d = *arg5
int16_t* x8 = arg1 + muls.dp.d(arg4, 0x14)
int128_t v3
v3.q = *(x8 + 8)
v2:4.d = *arg6
int128_t v4
v4.d = 0x3f000000
v4:4.d = 0x3f000000
uint128_t result
result.d = 0f
int128_t v2_3 = vrndm_f32(vadd_f32(vadd_f32(v2, v3), v4))

if (arg8 == 0)
    result.d = fconvert.s(-0.5f)
else
    result.d = result.d

int128_t v2_4 = vcvt_s32_f32(v2_3)
*arg7 = vadd_f32(vdup_laneq_s32(result, 0), vcvt_f32_s32(v2_4))
int128_t v3_1
v3_1.d = float.s(arg3)
double v1_2
v1_2.d = float.s(v2_4.d + zx.d(x8[2]) - zx.d(*x8))
v1_2.d = result.d f+ v1_2.d
arg7[2].d = v1_2.d
int32_t x11_1 = v2_4:4.d
v2_4.d = fconvert.s(1f)
v1_2.d = float.s(x11_1 + zx.d(x8[3]) - zx.d(x8[1]))
result.d = result.d f+ v1_2.d
*(arg7 + 0x14) = result.d
result.w = *x8
v1_2.d = float.s(arg2)
v1_2.d = v2_4.d f/ v1_2.d
v2_4.d = v2_4.d f/ v3_1.d
result.d = float.s(result.d)
result.d = v1_2.d f* result.d
arg7[1].d = result.d
result.w = x8[1]
result.d = float.s(result.d)
result.d = v2_4.d f* result.d
*(arg7 + 0xc) = result.d
result.w = x8[2]
result.d = float.s(result.d)
result.d = v1_2.d f* result.d
arg7[3].d = result.d
result.w = x8[3]
result.d = float.s(result.d)
result.d = v2_4.d f* result.d
*(arg7 + 0x1c) = result.d
result.d = *(x8 + 0x10)
v1_2.d = *arg5
result.d = result.d f+ v1_2.d
*arg5 = result.d
return result
