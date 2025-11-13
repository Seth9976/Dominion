// 函数: _Z8Mat4ViewRK4Pose
// 地址: 0xc9e2c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v16
result, v16 = PoseInverse(arg1)
v16 = data_71cfa0
float var_2c
float v17 = var_2c + var_2c
float var_30
float v19 = var_30 + var_30
float v0 = fconvert.s(1f)
float var_24
float v4 = var_24 + var_24
float v20 = var_2c * v17
float v21 = var_2c * v19
float var_28
float v23 = var_28 * v19
float v18 = var_28 * (var_28 + var_28)
float v22 = var_28 * v4
float v1 = var_2c * v4
float v3 = v17 * var_28
float v2 = var_30 * v4
v4 = v0 - v20
v0 = v0 - var_30 * v19
float* entry_x8
entry_x8[2] = v23 + v1
int32_t var_20
entry_x8[3] = var_20
entry_x8[6] = v3 - v2
int32_t var_1c
entry_x8[7] = var_1c
entry_x8[8] = v23 - v1
entry_x8[9] = v3 + v2
*entry_x8 = v4 - v18
entry_x8[1] = v21 - v22
entry_x8[4] = v21 + v22
entry_x8[5] = v0 - v18
entry_x8[0xa] = v0 - v20
int32_t var_18
entry_x8[0xb] = var_18
*(entry_x8 + 0x30) = v16
return result
