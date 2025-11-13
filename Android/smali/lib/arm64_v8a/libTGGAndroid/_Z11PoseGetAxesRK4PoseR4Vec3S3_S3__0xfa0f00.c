// 函数: _Z11PoseGetAxesRK4PoseR4Vec3S3_S3_
// 地址: 0xfa0f00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *arg1
float v0 = *(arg1 + 4)
float v2 = *(arg1 + 8)
float v3 = *(arg1 + 0xc)
float v6 = v0 * v0
float v4 = v0 * v1 - v2 * v3
v0 = v0 * v2 + v1 * v3
*(arg2 + 4) = v6 - v2 * v2 + v3 * v3 - v1 * v1
*(arg2 + 8) = v0 + v0
*arg2 = v4 + v4
v1 = *(arg1 + 8)
v0 = *(arg1 + 0xc)
v3 = *arg1
v2 = *(arg1 + 4)
v4 = v2 * v0 + v1 * v3
float v5 = v2 * v1 - v0 * v3
*arg3 = v4 + v4
*(arg3 + 4) = v5 + v5
*(arg3 + 8) = v0 * v0 + v1 * v1 - v2 * v2 - v3 * v3
v2 = *(arg1 + 8)
v0 = *(arg1 + 0xc)
v1 = *arg1
v3 = *(arg1 + 4)
v6 = v2 * v2
v4 = v0 * v0 + v1 * v1
v5 = v1 * v3
v1 = v1 * v2
v2 = v0 * v2 + v5
v0 = v1 - v0 * v3
*arg4 = v4 - v6 - v3 * v3
*(arg4 + 4) = v2 + v2
*(arg4 + 8) = v0 + v0
