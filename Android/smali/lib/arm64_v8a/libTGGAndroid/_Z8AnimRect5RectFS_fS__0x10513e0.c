// 函数: _Z8AnimRect5RectFS_fS_
// 地址: 0x10513e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t arg_8
float128 v16
v16.d = arg_8
int32_t arg_c
v16:4.d = arg_c
int32_t entry_v5
float128 v18
v18:4.d = entry_v5
int128_t v6
int32_t entry_v7
v6:4.d = entry_v7
int32_t arg_10
v16:8.d = arg_10
int32_t entry_v1
arg3 = entry_v1
int128_t v2
int32_t entry_v3
v2:4.d = entry_v3
float128 entry_v4
v18:8.d = entry_v4.d
entry_v4:4.d = entry_v5
int32_t arg_14
v16:0xc.d = arg_14
int128_t v1 = vsub_f32(v6, v2)
float128 v3 = vsub_f32(v6, entry_v4)
int32_t arg_0
v1.d = v1.d f* arg_0
v1:4.d = v1:4.d f* arg_0
int128_t v4
v4.d = vsub_f32(entry_v4, arg3).d f* arg_0
v4:4.d = v4:4.d f* arg_0
v18:0xc.d = entry_v5
int128_t v1_1 = vadd_f32(v2, v1)
float128 v0 = vadd_f32(arg3, v4)
v3:8.q = v3.q
float128 v1_2
v1_2:8.q = vsub_f32(v1_1, v0).q
v0:8.q = v0.q
float128 v0_1 = vaddq_f32(v0, vmulq_f32(v1_2, vdivq_f32(vsubq_f32(v16, v18), v3), 0))
float128 v1_3
v1_3.d = v0_1:4.d
float128 v2_2
v2_2.d = v0_1:8.d
v3.d = v0_1:0xc.d
