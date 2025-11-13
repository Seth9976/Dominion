// 函数: _Z9ScaleRect5RectFf
// 地址: 0x1029cdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v5
v5.d = 0x3f000000
v5:4.d = 0x3f000000
int32_t entry_v1
arg2 = entry_v1
int128_t v2
int32_t entry_v3
v2:4.d = entry_v3
int128_t v1 = vadd_f32(arg2, v2)
int128_t v0
int32_t entry_v4
v0.d = vsub_f32(v2, arg2).d f* entry_v4
v0:4.d = v0:4.d f* entry_v4
float128 v1_1
v1_1:8.q = vmul_f32(v1, v5, 0).q
float128 v2_1
v2_1:8.q = vmul_f32(v0, v5, 0).q
int64_t v0_1 = vsubq_f32(v1_1, v2_1)
float128 v3 = vaddq_f32(v1_1, v2_1)
v1_1.d = v0_1:4.d
v2_1.d = v3:8.d
v3.d = v3:0xc.d
