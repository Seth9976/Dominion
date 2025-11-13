// 函数: _Z12RectToCoords5RectFRK4Mat3P12DefVertPosXY
// 地址: 0xfcf5e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float entry_v0
*arg2 = entry_v0
float entry_v1
*(arg2 + 4) = entry_v1
float entry_v2
*(arg2 + 8) = entry_v2
*(arg2 + 0xc) = entry_v1
*(arg2 + 0x10) = entry_v0
float entry_v3
*(arg2 + 0x14) = entry_v3
*(arg2 + 0x18) = entry_v2
*(arg2 + 0x1c) = entry_v3
float v4 = *arg1

if (v4 == fconvert.s(1f))
    return 

float v7 = fconvert.s(0.5f)
float v5 = (entry_v0 + entry_v2) * v7
float v6 = (entry_v1 + entry_v3) * v7
float v20 = entry_v0 - v5
v4 = v4 * v20
float v18 = v20 * *(arg1 + 0xc)
v20 = entry_v1 - v6
v4 = v5 + *(arg1 + 8) + v4 + *(arg1 + 4) * v20
v5 = v6 + *(arg1 + 0x14) + v18 + v20 * *(arg1 + 0x10)
*arg2 = v4
*(arg2 + 4) = v5
v4 = (v4 + entry_v2) * v7
v5 = (v5 + entry_v3) * v7
entry_v1 = entry_v1 - v5
entry_v2 = entry_v2 - v4
v7 = *(arg1 + 4) * entry_v1
entry_v0 = entry_v0 - v4
entry_v1 = v5 + *(arg1 + 0x14) + entry_v2 * *(arg1 + 0xc) + entry_v1 * *(arg1 + 0x10)
*(arg2 + 8) = v4 + *(arg1 + 8) + *arg1 * entry_v2 + v7
*(arg2 + 0xc) = entry_v1
entry_v3 = entry_v3 - v5
entry_v1 = *arg1 * entry_v0
entry_v0 = v5 + *(arg1 + 0x14) + entry_v0 * *(arg1 + 0xc) + entry_v3 * *(arg1 + 0x10)
*(arg2 + 0x10) = v4 + *(arg1 + 8) + entry_v1 + *(arg1 + 4) * entry_v3
*(arg2 + 0x14) = entry_v0
entry_v1 = v5 + *(arg1 + 0x14) + entry_v2 * *(arg1 + 0xc) + entry_v3 * *(arg1 + 0x10)
*(arg2 + 0x18) = v4 + *(arg1 + 8) + *arg1 * entry_v2 + *(arg1 + 4) * entry_v3
*(arg2 + 0x1c) = entry_v1
