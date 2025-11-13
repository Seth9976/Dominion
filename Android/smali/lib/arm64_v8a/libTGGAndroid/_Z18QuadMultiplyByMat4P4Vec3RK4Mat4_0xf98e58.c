// 函数: _Z18QuadMultiplyByMat4P4Vec3RK4Mat4
// 地址: 0xf98e58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *arg1
float v3 = *(arg1 + 4)
float v0 = *arg2 * v2
float v1 = *(arg2 + 4) * v3
float v6 = v2 * *(arg2 + 0x10)
float v18 = *(arg1 + 8)
float v19 = *(arg1 + 0xc)
v2 = v2 * *(arg2 + 0x20) + v3 * *(arg2 + 0x24)
v3 = *(arg2 + 0x1c) + v6 + v3 * *(arg2 + 0x14) + v18 * *(arg2 + 0x18)
v2 = *(arg2 + 0x2c) + v2 + v18 * *(arg2 + 0x28)
*arg1 = *(arg2 + 0xc) + v0 + v1 + *(arg2 + 8) * v18
*(arg1 + 4) = v3
*(arg1 + 8) = v2
v1 = *(arg1 + 0x10)
float v20 = *(arg1 + 0x14)
v0 = *arg2 * v19 + *(arg2 + 4) * v1
v2 = *(arg2 + 0x1c) + v19 * *(arg2 + 0x10) + v1 * *(arg2 + 0x14) + v20 * *(arg2 + 0x18)
v1 = *(arg2 + 0x2c) + v19 * *(arg2 + 0x20) + v1 * *(arg2 + 0x24) + v20 * *(arg2 + 0x28)
*(arg1 + 0xc) = *(arg2 + 0xc) + v0 + *(arg2 + 8) * v20
*(arg1 + 0x10) = v2
*(arg1 + 0x14) = v1
v19 = *(arg1 + 0x18)
v20 = *(arg1 + 0x1c)
float v5 = *(arg1 + 0x20)
v6 = *(arg1 + 0x24)
v1 = *(arg2 + 0x1c) + v19 * *(arg2 + 0x10) + v20 * *(arg2 + 0x14) + v5 * *(arg2 + 0x18)
v2 = *(arg2 + 0x2c) + v19 * *(arg2 + 0x20) + v20 * *(arg2 + 0x24) + v5 * *(arg2 + 0x28)
*(arg1 + 0x18) = *(arg2 + 0xc) + *arg2 * v19 + *(arg2 + 4) * v20 + *(arg2 + 8) * v5
*(arg1 + 0x1c) = v1
*(arg1 + 0x20) = v2
float v4 = *(arg1 + 0x28)
float v7 = *(arg1 + 0x2c)
v1 = *(arg2 + 0x1c) + v6 * *(arg2 + 0x10) + v4 * *(arg2 + 0x14) + v7 * *(arg2 + 0x18)
v2 = *(arg2 + 0x2c) + v6 * *(arg2 + 0x20) + v4 * *(arg2 + 0x24) + v7 * *(arg2 + 0x28)
*(arg1 + 0x24) = *(arg2 + 0xc) + *arg2 * v6 + *(arg2 + 4) * v4 + *(arg2 + 8) * v7
*(arg1 + 0x28) = v1
*(arg1 + 0x2c) = v2
