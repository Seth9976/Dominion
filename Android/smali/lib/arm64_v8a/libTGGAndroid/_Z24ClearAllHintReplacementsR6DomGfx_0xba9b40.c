// 函数: _Z24ClearAllHintReplacementsR6DomGfx
// 地址: 0xba9b40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *(arg1 + 0xe0)
DomGfx& x19 = arg1

while (i != 0)
    DomGfx* x20_1 = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
    i = *(x20_1 + 0x244)
    PileRemoveToken(x20_1, x19)
    UI2Free(x20_1 + 0x2148)
    UI2Free(x20_1 + 0x214c)
    UI2Free(x20_1 + 0x2150)
    UI2Free(x20_1 + 0x2154)
    arg1 = zx.q(*(x20_1 + 0x1f90))
    
    if (arg1.d != 0)
        SpineDestroy(arg1.d)
    
    int32_t x9_1 = *(gDomClient + 0x205f0)
    *(gDomClient + 0x205f0) = zx.d(*(x20_1 + 0x21d0))
    *(x20_1 + 0x21d0) = x9_1
    *(gDomClient + 0x205f4) -= 1

*(x19 + 0xe0) = 0
