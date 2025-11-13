// 函数: _Z23VRGetCurrentEyeViewRectv
// 地址: 0x1060d48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*(gVR + 0xf0))
float128 v0
float128 v2

if (x9.d != 0x3e8)
    v0 = *(gVR + (x9 << 4) + 0xd0)
else
    v0 = *(gVR + 0xd0)
    v2.d = 0x3f000000
    v2:4.d = 0x3f000000
    v2:8.d = 0x3f000000
    v2:0xc.d = 0x3f000000
    v0 = vaddq_f32(v0, vmulq_f32(vsubq_f32(*(gVR + 0xe0), v0), v2, 0))

uint128_t v0_1 = vrev64q_s32(v0)
uint128_t v3 = vextq_s8(v0_1, v0_1, 8)
v0_1.d = v3:0xc.d
float128 v1
v1.d = v3:8.d
v2.d = v3:4.d
