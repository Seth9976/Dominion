// 函数: _Z17IntersectBBoxBBoxRK4BBoxS1_
// 地址: 0xf76270
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(*arg1 f<= *(arg2 + 0xc)))
    return 0

if (not(*(arg1 + 4) f<= *(arg2 + 0x10)))
    return 0

if (not(*(arg1 + 8) f<= *(arg2 + 0x14)))
    return 0

if (not(*(arg1 + 0xc) f>= *arg2))
    return 0

if (*(arg1 + 0x10) f>= *(arg2 + 4))
    return zx.q(*(arg1 + 0x14) f>= *(arg2 + 8) ? 1 : 0)

return 0
