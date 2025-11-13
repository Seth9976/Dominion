// 函数: _Z10RectToQuadRK4Mat4RK5RectFP4Vec3
// 地址: 0x10032e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v3 = *arg2
float v4 = *(arg2 + 4)
float v2 = 0f
float v6 = *(arg1 + 0x1c) + v3 * *(arg1 + 0x10) + v4 * *(arg1 + 0x14) + *(arg1 + 0x18) * v2
float v7 = *(arg1 + 0x2c) + v3 * *(arg1 + 0x20) + v4 * *(arg1 + 0x24) + *(arg1 + 0x28) * v2
float v0 = *(arg2 + 8)
float v1 = *(arg2 + 0xc)
*arg3 = *(arg1 + 0xc) + v3 * *arg1 + v4 * *(arg1 + 4) + *(arg1 + 8) * v2
*(arg3 + 4) = v6
*(arg3 + 8) = v7
float v5 = v0 * *arg1 + v4 * *(arg1 + 4)
v6 = *(arg1 + 0x1c) + v0 * *(arg1 + 0x10) + v4 * *(arg1 + 0x14) + *(arg1 + 0x18) * v2
v4 = *(arg1 + 0x2c) + v0 * *(arg1 + 0x20) + v4 * *(arg1 + 0x24) + *(arg1 + 0x28) * v2
*(arg3 + 0xc) = *(arg1 + 0xc) + v5 + *(arg1 + 8) * v2
*(arg3 + 0x10) = v6
*(arg3 + 0x14) = v4
v4 = v3 * *arg1
v5 = *(arg1 + 0x1c) + v3 * *(arg1 + 0x10) + v1 * *(arg1 + 0x14) + *(arg1 + 0x18) * v2
v3 = *(arg1 + 0x2c) + v3 * *(arg1 + 0x20) + v1 * *(arg1 + 0x24) + *(arg1 + 0x28) * v2
*(arg3 + 0x18) = *(arg1 + 0xc) + v4 + v1 * *(arg1 + 4) + *(arg1 + 8) * v2
*(arg3 + 0x1c) = v5
*(arg3 + 0x20) = v3
v7 = v0 * *(arg1 + 0x10)
float v16 = v1 * *(arg1 + 0x14)
v3 = v0 * *arg1 + v1 * *(arg1 + 4)
v0 = v0 * *(arg1 + 0x20) + v1 * *(arg1 + 0x24)
v1 = v3 + *(arg1 + 8) * v2
v0 = v0 + *(arg1 + 0x28) * v2
v2 = *(arg1 + 0x1c) + v7 + v16 + *(arg1 + 0x18) * v2
v0 = *(arg1 + 0x2c) + v0
*(arg3 + 0x24) = *(arg1 + 0xc) + v1
*(arg3 + 0x28) = v2
*(arg3 + 0x2c) = v0
