// 函数: _Z16NumStandardCardsv
// 地址: 0xaf83fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x21cc4) == 0)
    return 0

if (*(gDomClient + 0x21cd4) == 0)
    return 1

if (*(gDomClient + 0x21ce4) == 0)
    return 2

if (*(gDomClient + 0x21cf4) == 0)
    return 3

if (*(gDomClient + 0x21d04) == 0)
    return 4

if (*(gDomClient + 0x21d14) == 0)
    return 5

if (*(gDomClient + 0x21d24) == 0)
    return 6

if (*(gDomClient + 0x21d34) == 0)
    return 7

if (*(gDomClient + 0x21d44) == 0)
    return 8

if (*(gDomClient + 0x21d54) == 0)
    return 9

if (*(gDomClient + 0x21d64) == 0)
    return 0xa

if (*(gDomClient + 0x21d74) == 0)
    return 0xb

pthread_kill(pthread_self(), 6)
XNoReturn()
return NumSupplyPiles() __tailcall
