// 函数: _Z17PoseSetFromLookAtRK4Vec3S1_S1_
// 地址: 0xfa0fe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg2
float v0 = fconvert.s(1f)
int32_t* entry_x8
entry_x8[6] = *(arg2 + 8)
*(entry_x8 + 0x10) = x9
float v1 = *arg1 - *arg2
float v2 = *(arg1 + 4) - *(arg2 + 4)
float v3 = *(arg1 + 8) - *(arg2 + 8)
float v4 = v0 / sqrt(v1 * v1 + v2 * v2 + v3 * v3)
v1 = v1 * v4
v2 = v2 * v4
v3 = v3 * v4
float var_30 = v1
float var_2c = v2
float var_28 = v3
float v5 = *(arg3 + 4)
v4 = *(arg3 + 8)
float v6 = *arg3
float v16 = v3 * v6
v6 = v2 * v6
v3 = v4 * v2 - v3 * v5
v2 = v16 - v4 * v1
v1 = v5 * v1 - v6
v4 = sqrt(v1 * v1 + v3 * v3 + v2 * v2)

if (v4 >= float.s(0x3727c5ac))
    v4 = v0 / (v4 + float.s(0x3727c5ac))
    v3 = v3 * v4
    v2 = v2 * v4
    v4 = v1 * v4
    v5 = v0 / sqrt(v4 * v4 + v3 * v3 + v2 * v2)
    v0 = v3 * v5
    v1 = v2 * v5
    v2 = v4 * v5
else
    v0 = *V0
    v1 = *(V0 + 4)
    v2 = *(V0 + 8)

float var_20 = v0
float var_1c = v1
float var_18 = v2
int64_t result
int32_t v0_1
int32_t v1_1
int32_t v2_1
int32_t v3_1
result, v0_1, v1_1, v2_1, v3_1 = QuatFromBasisChange(VFWD, VRIGHT, &var_30, &var_20)
*entry_x8 = v0_1
entry_x8[1] = v1_1
entry_x8[2] = v2_1
entry_x8[3] = v3_1
return result
