// 函数: _Z19Mat4PlaneReflectionRK5Plane
// 地址: 0xc95fd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *arg1
float v3 = *(arg1 + 4)
float v4 = *(arg1 + 8)
int128_t v5
v5.d = *(arg1 + 0xc)
float v0 = fconvert.s(-2f)
float v6 = v2 * v0
float v7 = v3 * v0
v0 = v4 * v0
float v16 = v2 * v6
float v17 = v2 * v7
v2 = v2 * v0
float v18 = v6 f* v5.d
float v19 = v6 * v3
float v20 = v3 * v7
v3 = v3 * v0
float v21 = v7 f* v5.d
v6 = v6 * v4
v7 = v7 * v4
v4 = v4 * v0
v0 = v0 f* v5.d
v5 = data_71cfa0
float v1 = fconvert.s(1f)
float* entry_x8
entry_x8[2] = v2
entry_x8[3] = v18
entry_x8[6] = v3
entry_x8[7] = v21
entry_x8[8] = v6
entry_x8[9] = v7
*entry_x8 = v16 + v1
entry_x8[1] = v17
entry_x8[4] = v19
entry_x8[5] = v20 + v1
entry_x8[0xa] = v4 + v1
entry_x8[0xb] = v0
*(entry_x8 + 0x30) = v5
