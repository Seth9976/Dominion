// 函数: _Z14NumSupplyPilesv
// 地址: 0xaf8568
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x21e24) == 0)
    return 0xa

if (*(gDomClient + 0x21e34) == 0)
    return 0xb

if (*(gDomClient + 0x21e44) == 0)
    return 0xc

if (*(gDomClient + 0x21e54) == 0)
    return 0xd

if (*(gDomClient + 0x21e64) != 0)
    return 0xf

return 0xe
