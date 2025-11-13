// 函数: _Z16BBoxIsNormalizedRK4BBox
// 地址: 0xfa4124
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(*arg1 f<= *(arg1 + 0xc)))
    return 0

if (*(arg1 + 4) f<= *(arg1 + 0x10))
    return zx.q(*(arg1 + 8) f<= *(arg1 + 0x14) ? 1 : 0)

return 0
