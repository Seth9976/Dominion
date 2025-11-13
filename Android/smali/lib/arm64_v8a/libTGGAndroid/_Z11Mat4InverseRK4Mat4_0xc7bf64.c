// 函数: _Z11Mat4InverseRK4Mat4
// 地址: 0xc7bf64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v6 = *(arg1 + 0x18)
float v7 = *(arg1 + 0x1c)
int128_t v0
v0.d = *(arg1 + 0x28)
int128_t v2
v2.d = *(arg1 + 0x2c)
float v16 = *(arg1 + 0x14)
float v17 = *(arg1 + 4)
float v20 = *(arg1 + 0x24)
int128_t v1
v1.d = *(arg1 + 0x38)
int128_t v3
v3.d = *(arg1 + 0x3c)
float v18 = *(arg1 + 8)
float v19 = *(arg1 + 0xc)
float v22 = *(arg1 + 0x34)
float v24 = v16 f* v0.d
float v25 = v16 f* v2.d
float v26 = v6 f* v2.d
float v27 = v20 * v6
float v28 = v20 * v7
float v29 = v0.d f* v7
float v30 = v0.d f* v17
float v31 = v2.d f* v17
int64_t v8
v8.d = v2.d f* v18
int64_t v9
v9.d = v20 * v18
int64_t v10
v10.d = v20 * v19
int64_t v11
v11.d = v0.d f* v19
int64_t v12
v12.d = v6 * v17
v17 = v7 * v17
v7 = v7 * v18
v18 = v16 * v18
v16 = v16 * v19
v6 = v6 * v19
v19 = v24 f* v3.d
v24 = v1.d f* v25
v25 = v22 * v26
v26 = v27 f* v3.d
v27 = v1.d f* v28
v28 = v22 * v29
v29 = v3.d f* v30
v30 = v1.d f* v31
v31 = v22 f* v8.d
v8.d = v3.d f* v9.d
v9.d = v1.d f* v10.d
v10.d = v22 f* v11.d
v11.d = v3.d f* v12.d
v3.d = v3.d f* v18
v12.d = v2.d f* v12.d
v2.d = v2.d f* v18
v18 = v1.d f* v17
v1.d = v1.d f* v16
v17 = v0.d f* v17
v0.d = v0.d f* v16
v3.d = v22 * v7 + v11.d f- v18 f- v3.d
v2.d = v20 * v7 + v12.d f- v17 f- v2.d
v1.d = v1.d f+ v3.d
v0.d = v0.d f+ v2.d
v2.d = v27 + v25 + v19 - v24 - v26 - v28
v3.d = v9.d f+ v31 + v29 - v30 f- v8.d f- v10.d
v1.d = v1.d f- v22 * v6
v2.d = *arg1 f* v2.d
v3.d = *(arg1 + 0x10) f* v3.d
v0.d = v0.d f- v20 * v6
v1.d = *(arg1 + 0x20) f* v1.d
v2.d = v2.d f- v3.d
v0.d = *(arg1 + 0x30) f* v0.d
v1.d = v1.d f+ v2.d
v2.d = fabs(v1.d f- v0.d)
v3.d = float.s(0x3727c5ac)
int128_t* entry_x8

if (not(v2.d f>= v3.d))
    v0 = *(M4I + 0x30)
    v3 = *M4I
    v2 = *(M4I + 0x10)
    entry_x8[2] = *(M4I + 0x20)
    entry_x8[3] = v0
    *entry_x8 = v3
    entry_x8[1] = v2
    return 

v8.d = v1.d f- v0.d
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
arg1, v0_1, v1_1, v2_1, v3_1 = Mat4Adjoint(arg1)
float v4_1 = fconvert.s(1f) f/ v8.d
int128_t var_80
v0_1.d = var_80.d f* v4_1
v0_1:4.d = v0_1:4.d f* v4_1
v0_1:8.d = v0_1:8.d f* v4_1
v0_1:0xc.d = v0_1:0xc.d f* v4_1
int128_t var_70
v1_1.d = var_70.d f* v4_1
v1_1:4.d = v1_1:4.d f* v4_1
v1_1:8.d = v1_1:8.d f* v4_1
v1_1:0xc.d = v1_1:0xc.d f* v4_1
int128_t var_60
v2_1.d = var_60.d f* v4_1
v2_1:4.d = v2_1:4.d f* v4_1
v2_1:8.d = v2_1:8.d f* v4_1
v2_1:0xc.d = v2_1:0xc.d f* v4_1
int128_t var_50
v3_1.d = var_50.d f* v4_1
v3_1:4.d = v3_1:4.d f* v4_1
v3_1:8.d = v3_1:8.d f* v4_1
v3_1:0xc.d = v3_1:0xc.d f* v4_1
*entry_x8 = v0_1
entry_x8[1] = v1_1
entry_x8[2] = v2_1
entry_x8[3] = v3_1
