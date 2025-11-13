// 函数: _Z11PoseComposeRK4PoseS1_
// 地址: 0xfa1210
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg2
float v1 = *(arg2 + 4)
float v3 = *(arg2 + 8)
float v2 = *(arg2 + 0xc)
float v6 = *(arg1 + 0x18)
float v4 = *(arg1 + 0x10)
float v5 = *(arg1 + 0x14)
float v18 = v0 * v0
float v17 = v2 * v2
float v20 = v0 * v1
float v21 = v2 * v3
float v22 = v2 * v1
float v23 = v0 * v3
float v24 = v1 * v3
float v25 = v2 * v0
float v26 = v20 - v21
v20 = v20 + v21
v21 = v17 + v18
v17 = v17 - v18
v18 = v22 + v23
v22 = v23 - v22
v23 = v24 - v25
v24 = v25 + v24
v25 = v6 + v6
v18 = v18 * v25
v23 = v23 * v25
v25 = v4 + v4
v20 = v25 * v20
v22 = v25 * v22
v25 = v5 + v5
float v19 = v1 * v1
v22 = v22 + v24 * v25
v24 = v3 * v3
v6 = *(arg2 + 0x18) + (v17 - v19 + v24) * v6 + v22
v4 = *(arg2 + 0x10) + v4 * (v21 - v19 - v24) + v26 * v25 + v18
float* entry_x8
entry_x8[5] = *(arg2 + 0x14) + v20 + v5 * (v17 + v19 - v24) + v23
entry_x8[6] = v6
entry_x8[4] = v4
float v7 = *(arg1 + 8)
v4 = *(arg1 + 0xc)
v5 = *arg1
v6 = *(arg1 + 4)
*entry_x8 = v0 * v4 + v2 * v5 + v1 * v7 - v3 * v6
entry_x8[1] = v3 * v5 + v1 * v4 + v2 * v6 - v0 * v7
entry_x8[2] = v0 * v6 + v3 * v4 + v2 * v7 - v1 * v5
entry_x8[3] = v2 * v4 - v0 * v5 - v1 * v6 - v3 * v7
