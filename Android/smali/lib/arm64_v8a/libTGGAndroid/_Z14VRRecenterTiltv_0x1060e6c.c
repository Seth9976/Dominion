// 函数: _Z14VRRecenterTiltv
// 地址: 0x1060e6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *gVR

if (result != 0)
    (*(*result + 0x50))(result, 1)
    *(gVR + 0x190) = *QI
    VRUpdatePose()
    float v4_1 = *(gVR + 0x190)
    float v5_1 = *(gVR + 0x194)
    float v6_1 = *(gVR + 0x198)
    float v7_1 = *(gVR + 0x19c)
    float v16_1 = *(gVR + 0x11c)
    float v17_1 = *(gVR + 0x110)
    float v18_1 = *(gVR + 0x114)
    float v19_1 = *(gVR + 0x118)
    float v0_2 = v7_1 * v16_1 + v4_1 * v17_1 + v5_1 * v18_1 + v6_1 * v19_1
    float v1_1 = v6_1 * v18_1 + v7_1 * v17_1 - v4_1 * v16_1 - v5_1 * v19_1
    float v2_1 = v4_1 * v19_1 + v7_1 * v18_1 - v5_1 * v16_1 - v6_1 * v17_1
    float v3_1 = v5_1 * v17_1 + v7_1 * v19_1 - v6_1 * v16_1 - v4_1 * v18_1
    v17_1 = *VZ
    float v20_1 = *(VZ + 4)
    v6_1 = v2_1 * v2_1
    v7_1 = v3_1 * v3_1
    v19_1 = v0_2 * v0_2
    v4_1 = v2_1 * v1_1 - v0_2 * v3_1
    v5_1 = v2_1 * v3_1
    v2_1 = v0_2 * v2_1
    v0_2 = v0_2 * v1_1
    v3_1 = v1_1 * v3_1
    v18_1 = *(VZ + 8)
    v1_1 = v1_1 * v1_1
    v2_1 = v2_1 + v3_1
    v3_1 = v0_2 + v5_1
    v0_2 = v5_1 - v0_2
    v5_1 = v6_1 - v7_1
    v6_1 = v7_1 - v6_1 - v1_1
    v4_1 = v4_1 + v4_1
    v1_1 = v19_1 + v5_1 - v1_1
    v3_1 = v3_1 + v3_1
    float var_40 = v2_1 + v2_1
    float var_3c_1 = v0_2 + v0_2
    float var_38_1 = v19_1 + v6_1
    v0_2 = v4_1 * v17_1 + v1_1 * v20_1 + v3_1 * v18_1
    float var_2c_1 = v1_1
    float var_28_1 = v3_1
    v2_1 = v4_1 - v17_1 * v0_2
    v1_1 = v1_1 - v20_1 * v0_2
    float var_30 = v4_1
    v0_2 = v3_1 - v18_1 * v0_2
    v3_1 = fconvert.s(1f) / sqrt(v0_2 * v0_2 + v2_1 * v2_1 + v1_1 * v1_1)
    float var_50 = v2_1 * v3_1
    float var_4c_1 = v1_1 * v3_1
    float var_48_1 = v0_2 * v3_1
    float v0_3
    float v1_2
    float v2_2
    int32_t v3_2
    result, v0_3, v1_2, v2_2, v3_2 = QuatFromBasisChange(&var_50, VZ, &var_30, &var_40)
    *(gVR + 0x190) = fneg(v0_3)
    *(gVR + 0x194) = fneg(v1_2)
    *(gVR + 0x198) = fneg(v2_2)
    *(gVR + 0x19c) = v3_2

return result
