// 函数: _Z23BoneTransformDifferenceR13BoneTransformS0_S0_
// 地址: 0xc79290
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *(arg3 + 0x1c)
float v1 = *(arg3 + 0x24)
int128_t v2
v2.q = *V1
float v3 = *(V1 + 8)
double v0_1 = vdiv_f32(v2, v0)
v1 = v3 / v1
double var_24 = v0_1
float var_1c = v1
v3 = *arg3
float v4 = *(arg3 + 4)
float v5 = *(arg3 + 8)
float v6 = *(arg3 + 0xc)
v2.d = fneg(v0_1.d)
v0_1.d = v0_1:4.d
float v7 = fneg(v3)
float v16 = fneg(v4)
float v17 = fneg(v5)
float v18 = v6 * v6
float v19 = v3 * v3
float var_40 = v7
float var_3c = v16
float var_38 = v17
float var_34 = v6
float v20 = v4 * v4
float v21 = v5 * v5
float v22 = v3 * v4
v3 = v3 * v5
v4 = v4 * v5
v5 = v19 + v18
v17 = v6 * v17
v16 = v6 * v16
v18 = v18 - v19
v6 = v6 * v7
v7 = *(arg3 + 0x10)
v19 = *(arg3 + 0x14)
float v24 = *(arg3 + 0x18)
float v25 = v3 + v16
float v26 = v4 - v6
v3 = v3 - v16
v4 = v4 + v6
v6 = v18 - v20
v16 = v20 + v18 - v21
v5 = (v5 - v20 - v21) * v7
v18 = v19 + v19
v7 = v7 + v7
v20 = v24 + v24
v0_1.d = fneg(v0_1.d)
v2.d = (v5 + (v22 - v17) * v18 + v25 * v20) f* v2.d
v0_1.d = ((v22 + v17) * v7 + v16 * v19 + v26 * v20) f* v0_1.d
int32_t var_30 = v2.d
int32_t var_2c = v0_1.d
float var_28 = ((v21 + v6) * v24 + v3 * v7 + v4 * v18) * fneg(v1)
return BoneTransformCompose(arg1, &var_40, arg2)
