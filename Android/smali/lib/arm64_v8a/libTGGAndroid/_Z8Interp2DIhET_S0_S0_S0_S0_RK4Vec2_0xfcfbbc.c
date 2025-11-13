// 函数: _Z8Interp2DIhET_S0_S0_S0_S0_RK4Vec2
// 地址: 0xfcfbbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint128_t v1
v1.d = *arg5
uint128_t v2
v2.d = *(arg5 + 4)
float v3 = fconvert.s(1f)
int128_t v4
v4.d = float.s(arg1.d)
float128 v0
v0.d = *V21
v4:2.w = arg2.d
v4:4.w = arg3.d
v4:6.w = arg4.d
v0.d = v0.d f- v1.d
v2.d = *(V21 + 4) f- v2.d
float v5 = v3 f- v0.d
v2:4.d = v3 f- v2.d
float128 v3_1
v3_1:4.d = v5
v3_1:8.d = v0.d
uint128_t v4_1
v4_1.d = zx.d((v4 & true).w)
v4_1:4.d = zx.d(v4_1:2.w)
v4_1:8.d = zx.d(v4_1:4.w)
v4_1:0xc.d = zx.d(v4_1:6.w)
uint128_t v0_1 = vzip1q_s32(v2, v2)
v3_1:0xc.d = v5
float128 v4_2 = vcvtq_f32_u32(v4_1)
float128 v0_4 = vrndmq_f32(vmulq_f32(vmulq_f32(v3_1, v0_1, 0), v4_2, 0))
v1.d = 0x3f000000
v1:4.d = 0x3f000000
v1:8.d = 0x3f000000
v1:0xc.d = 0x3f000000
v3_1.d = 0xbf000000
v3_1:4.d = 0xbf000000
v3_1:8.d = 0xbf000000
v3_1:0xc.d = 0xbf000000
uint128_t v0_6
v0_6.d = vaddvq_u32(vcvtq_s32_f32(vaddq_f32(v0_4, vbslq_s8(vcltzq_f32(v0_4, 0), v3_1, v1))))
return v0_6.b
