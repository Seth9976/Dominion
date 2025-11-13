// 函数: _Z21FrustumContainsSphereRK13FrustumPlanesRK6Sphere
// 地址: 0xfa51bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *(arg2 + 8)
float v2 = *(arg2 + 0xc)
float v0 = *arg2
float v3 = *(arg2 + 4)

if (not(*(arg1 + 0xc) + *arg1 * v3 + *(arg1 + 4) * v1 + *(arg1 + 8) * v2 - v0 < 0f) && not(
        *(arg1 + 0x1c) + *(arg1 + 0x10) * v3 + *(arg1 + 0x14) * v1 + *(arg1 + 0x18) * v2 - v0 < 0f) && not(
        *(arg1 + 0x2c) + *(arg1 + 0x20) * v3 + *(arg1 + 0x24) * v1 + *(arg1 + 0x28) * v2 - v0 < 0f) && not(
        *(arg1 + 0x3c) + *(arg1 + 0x30) * v3 + *(arg1 + 0x34) * v1 + *(arg1 + 0x38) * v2 - v0 < 0f) && not(
        *(arg1 + 0x4c) + *(arg1 + 0x40) * v3 + *(arg1 + 0x44) * v1 + *(arg1 + 0x48) * v2 - v0 < 0f)
        && *(arg1 + 0x5c) + *(arg1 + 0x50) * v3 + *(arg1 + 0x54) * v1 + *(arg1 + 0x58) * v2 - v0
        >= 0f)
    return 1

return 0
