// 函数: _Z14GetObeliskPileR7DomGame
// 地址: 0xbff1fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xd7c) == 0xc3f)
    return zx.q(*(arg1 + 0xd80))

if (*(arg1 + 0xdb8) == 0xc3f)
    return zx.q(*(arg1 + 0xdbc))

if (*(arg1 + 0xdf4) == 0xc3f)
    return zx.q(*(arg1 + 0xdf8))

if (*(arg1 + 0xe30) != 0xc3f)
    return 0

return zx.q(*(arg1 + 0xe34))
