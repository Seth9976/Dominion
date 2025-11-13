// 函数: _Z17FrustumGetCornersRK7FrustumRK4PoseP4Vec3
// 地址: 0xc9df68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FrustumPerspectiveCorners(arg1, arg3)
int32_t v0
int32_t v1
int32_t v2
v0, v1, v2 = PoseTransform(arg2, arg3)
*arg3 = v0
*(arg3 + 4) = v1
*(arg3 + 8) = v2
int32_t v0_1
int32_t v1_1
int32_t v2_1
v0_1, v1_1, v2_1 = PoseTransform(arg2, arg3 + 0xc)
*(arg3 + 0xc) = v0_1
*(arg3 + 0x10) = v1_1
*(arg3 + 0x14) = v2_1
int32_t v0_2
int32_t v1_2
int32_t v2_2
v0_2, v1_2, v2_2 = PoseTransform(arg2, arg3 + 0x18)
*(arg3 + 0x18) = v0_2
*(arg3 + 0x1c) = v1_2
*(arg3 + 0x20) = v2_2
int32_t v0_3
int32_t v1_3
int32_t v2_3
v0_3, v1_3, v2_3 = PoseTransform(arg2, arg3 + 0x24)
*(arg3 + 0x24) = v0_3
*(arg3 + 0x28) = v1_3
*(arg3 + 0x2c) = v2_3
int32_t v0_4
int32_t v1_4
int32_t v2_4
v0_4, v1_4, v2_4 = PoseTransform(arg2, arg3 + 0x30)
*(arg3 + 0x30) = v0_4
*(arg3 + 0x34) = v1_4
*(arg3 + 0x38) = v2_4
int32_t v0_5
int32_t v1_5
int32_t v2_5
v0_5, v1_5, v2_5 = PoseTransform(arg2, arg3 + 0x3c)
*(arg3 + 0x3c) = v0_5
*(arg3 + 0x40) = v1_5
*(arg3 + 0x44) = v2_5
int32_t v0_6
int32_t v1_6
int32_t v2_6
v0_6, v1_6, v2_6 = PoseTransform(arg2, arg3 + 0x48)
*(arg3 + 0x48) = v0_6
*(arg3 + 0x4c) = v1_6
*(arg3 + 0x50) = v2_6
int64_t result
int32_t v0_7
int32_t v1_7
int32_t v2_7
result, v0_7, v1_7, v2_7 = PoseTransform(arg2, arg3 + 0x54)
*(arg3 + 0x54) = v0_7
*(arg3 + 0x58) = v1_7
*(arg3 + 0x5c) = v2_7
return result
