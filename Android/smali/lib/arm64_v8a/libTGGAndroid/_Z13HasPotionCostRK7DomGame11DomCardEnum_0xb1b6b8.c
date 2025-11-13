// 函数: _Z13HasPotionCostRK7DomGame11DomCardEnum
// 地址: 0xb1b6b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    return 0

return zx.q(*(DomDefGet(zx.q(arg2), zx.q(*(arg1 + 0xd50))) + 0xc6)) & 1
