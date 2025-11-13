// 函数: _Z20PregameFindLandscape11DomCardEnum
// 地址: 0xbf97a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(gPregameContext + 0x20)

if (*(x8 + 0x28) == arg1)
    return 0

if (*(x8 + 0x64) == arg1)
    return 1

if (*(x8 + 0xa0) == arg1)
    return 2

if (*(x8 + 0xdc) == arg1)
    return 3

pthread_kill(pthread_self(), 6)
DomSetupConfig* x0_5
DomKingdom* x1
x0_5, x1 = XNoReturn()
return RollKingdom_MergeSpecificCards(x0_5, x1) __tailcall
