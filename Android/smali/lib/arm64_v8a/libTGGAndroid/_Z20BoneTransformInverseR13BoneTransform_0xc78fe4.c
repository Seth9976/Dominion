// 函数: _Z20BoneTransformInverseR13BoneTransform
// 地址: 0xc78fe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *(arg1 + 0x1c)
float v1 = *(arg1 + 0x24)
int128_t v2
v2.q = *V1
float v3 = *(V1 + 8)
double v0_1 = vdiv_f32(v2, v0)
v1 = v3 / v1
float* entry_x8
*(entry_x8 + 0x1c) = v0_1
entry_x8[9] = v1
v3 = *arg1
float v4 = *(arg1 + 4)
float v5 = *(arg1 + 8)
float v6 = *(arg1 + 0xc)
v2.d = fneg(v0_1.d)
v0_1.d = v0_1:4.d
float v7 = fneg(v3)
float v16 = fneg(v4)
float v17 = fneg(v5)
float v18 = v6 * v6
float v19 = v3 * v3
*entry_x8 = v7
entry_x8[1] = v16
entry_x8[2] = v17
entry_x8[3] = v6
float v20 = v4 * v4
float v21 = v5 * v5
float v22 = v3 * v4
v3 = v3 * v5
v4 = v4 * v5
v5 = v18 + v19
v17 = v6 * v17
v16 = v6 * v16
v18 = v18 - v19
v6 = v6 * v7
v7 = *(arg1 + 0x10)
v19 = *(arg1 + 0x14)
float v24 = *(arg1 + 0x18)
float v25 = v16 + v3
float v26 = v4 - v6
v3 = v3 - v16
v4 = v6 + v4
v6 = v18 - v20
v16 = v18 + v20 - v21
v5 = v7 * (v5 - v20 - v21)
v18 = v19 + v19
v7 = v7 + v7
v20 = v24 + v24
v0_1.d = fneg(v0_1.d)
v2.d = (v5 + (v22 - v17) * v18 + v25 * v20) f* v2.d
v0_1.d = (v7 * (v22 + v17) + v19 * v16 + v26 * v20) f* v0_1.d
entry_x8[4] = v2.d
entry_x8[5] = v0_1.d
entry_x8[6] = ((v6 + v21) * v24 + v7 * v3 + v4 * v18) * fneg(v1)
