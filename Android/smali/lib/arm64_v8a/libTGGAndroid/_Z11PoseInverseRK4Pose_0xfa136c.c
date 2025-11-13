// 函数: _Z11PoseInverseRK4Pose
// 地址: 0xfa136c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg1
float v1 = *(arg1 + 4)
float v2 = *(arg1 + 8)
float v3 = *(arg1 + 0xc)
float v4 = fconvert.s(-2f)
float v5 = fneg(v0)
float v6 = fneg(v1)
float v7 = fneg(v2)
float v16 = v3 * v3
float v17 = v0 * v0
float* entry_x8
*entry_x8 = v5
entry_x8[1] = v6
entry_x8[2] = v7
entry_x8[3] = v3
float v18 = v1 * v1
float v19 = v2 * v2
float v20 = v0 * v1
v0 = v0 * v2
v1 = v1 * v2
v2 = v16 + v17
v7 = v3 * v7
v6 = v3 * v6
v16 = v16 - v17
v3 = v3 * v5
v5 = *(arg1 + 0x10)
v17 = *(arg1 + 0x14)
float v21 = *(arg1 + 0x18)
float v23 = v6 + v0
float v24 = v1 - v3
v0 = v0 - v6
v1 = v3 + v1
v3 = v16 - v18
v2 = v2 - v18 - v19
v6 = v16 + v18 - v19
v16 = v17 * v4
v18 = v21 * v4
v4 = v5 * v4
entry_x8[4] = v18 * v23 + v16 * (v20 - v7) - v5 * v2
entry_x8[5] = v18 * v24 + v4 * (v20 + v7) - v17 * v6
entry_x8[6] = v4 * v0 + v16 * v1 - v21 * (v3 + v19)
