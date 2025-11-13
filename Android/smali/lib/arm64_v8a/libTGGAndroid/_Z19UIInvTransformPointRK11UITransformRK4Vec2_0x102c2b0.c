// 函数: _Z19UIInvTransformPointRK11UITransformRK4Vec2
// 地址: 0x102c2b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *arg2
int128_t v1
v1.q = *arg1
int32_t v2 = *(arg1 + 0xc)
double v0_1 = vsub_f32(v0, v1)
v1.d = fconvert.s(1f) f/ v2
v0_1.d = v0_1.d f* v1.d
v0_1:4.d = v0_1:4.d f* v1.d
v1.d = v0_1:4.d
