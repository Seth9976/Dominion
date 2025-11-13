// 函数: _Z18Mat3FromTransform2RK10Transform2
// 地址: 0x10024cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *(arg1 + 0xc)
float v0 = *(arg1 + 8)
float* entry_x8
*entry_x8 = *(arg1 + 0x10) * v1
entry_x8[1] = fneg(v0)
entry_x8[2] = *arg1
entry_x8[3] = v0
float v3 = v1 * *(arg1 + 0x14)
v0 = *(arg1 + 4)
*(entry_x8 + 0x18) = 0
entry_x8[8] = 0x3f800000
entry_x8[4] = v3
entry_x8[5] = v0
