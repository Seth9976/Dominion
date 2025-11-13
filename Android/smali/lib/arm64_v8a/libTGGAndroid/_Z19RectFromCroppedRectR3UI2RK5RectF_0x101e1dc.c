// 函数: _Z19RectFromCroppedRectR3UI2RK5RectF
// 地址: 0x101e1dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
float v0
result, v0 = GameGetTimeSimulation()
float v1 = v0 - *(arg1 + 0x674)
float v3
float v2

if (v1 < *(arg1 + 0x664) + *(arg1 + 0x660) || *(arg1 + 0x654) s> 1)
    result, v0, v1, v2, v3 =
        PropEval<RectF>(arg1 + 0x558, arg1 + 0x5dc, arg1 + 0x660, v0 - *(arg1 + 0x670), v1, v1)
else
    *(arg1 + 0x5dc)
    v1 = *(arg1 + 0x5e0)
    *(arg1 + 0x5e4)
    v3 = *(arg1 + 0x5e8)
*(arg2 + 8)
v3 * *(arg2 + 4) - v1 * *(arg2 + 0xc)
*arg2
return result
