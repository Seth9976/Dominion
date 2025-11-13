// 函数: _Z16UITransformPointRK11UITransformRK4Vec2
// 地址: 0x105135c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.d = *(arg1 + 0xc)
int64_t v1 = *arg2
int128_t v2
v2.q = *arg1
v0.d = vmax_f32(v0.d, 0f)
v0.d = v1.d f* v0.d
v0:4.d = v1:4.d f* v0.d
v1.d = vadd_f32(v0, v2):4.d
