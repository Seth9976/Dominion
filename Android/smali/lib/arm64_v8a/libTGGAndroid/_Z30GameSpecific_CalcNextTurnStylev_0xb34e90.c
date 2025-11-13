// 函数: _Z30GameSpecific_CalcNextTurnStylev
// 地址: 0xb34e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(gDomClient + 0x22114)

if (*(gDomClient + 0x2079c) != *(gDomClient + 0x220fc))
    *(gDomClient + 0x34) = x9
    return 2

if (*(gDomClient + 0x34) == x9)
    return 1

*(gDomClient + 0x34) = x9
return 0
