// 函数: spCurveTimeline_setCurve
// 地址: 0xfad924
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg4:4.d = arg3.d
int128_t v3
v3:4.d = arg5
arg3.d = 0x3e99999a
arg3:4.d = 0x3e99999a
int128_t v2 = vadd_f32(arg4, arg4)
int128_t v4
v4.d = fconvert.s(3f)
v4:4.d = fconvert.s(3f)
int128_t v5 = vmul_f32(arg4, arg3, 0)
int128_t v0 = vsub_f32(arg4, v3)
int128_t v1 = vsub_f32(v3, v2)
v3.d = 0x3cf5c28f
v3:4.d = 0x3cf5c28f
v2.d = fconvert.s(1f)
v2:4.d = fconvert.s(1f)
int128_t v0_1 = vmul_f32(v0, v4, 0)
int128_t v3_1 = vmul_f32(v1, v3, 0)
v1.d = 0x3bc49ba6
v1:4.d = 0x3bc49ba6
int64_t x9 = *(arg1 + 0x10)
int128_t v0_2 = vadd_f32(v0_1, v2)
v2.d = 0x3e2aaaab
v2:4.d = 0x3e2aaaab
int128_t result = vmul_f32(v0_2, v1, 0)
int32_t x10 = arg2 * 0x13
int128_t v1_1 = vadd_f32(v3_1, v3_1)
int128_t v3_2 = vadd_f32(v5, v3_1)
int128_t v2_1 = vmul_f32(result, v2, 0)
*(x9 + (sx.q(x10) << 2)) = 0x40000000
int128_t v2_2 = vadd_f32(v3_2, v2_1)
int64_t x8_1 = sx.q(x10 + 1)
int128_t v3_3 = v2_2
bool cond:0_1

do
    void* x10_1 = *(arg1 + 0x10)
    int64_t x11_1 = x8_1 << 2
    v1_1 = vadd_f32(result, v1_1)
    v3_3 = vadd_f32(v1_1, v3_3)
    *(x10_1 + x11_1) = v2_2:4.d
    cond:0_1 = x8_1 s< sx.q(x10 + 0x10)
    x8_1 += 2
    *(*(arg1 + 0x10) + x11_1 + 4) = v2_2.d
    v2_2 = vadd_f32(v3_3, v2_2)
while (cond:0_1)
return result
