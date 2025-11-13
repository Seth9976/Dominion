// 函数: _Z15ClearPileArrowsR6DomGfxR11PodIconInfoRK16PodIconInfoEntry
// 地址: 0xba9510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg3 + 4)
int64_t i = sx.q(*arg3)

if (i.d s>= x8)
    return 

DomGfx& x20_1 = arg1

do
    DomGfx* x21_1 = *(arg2 + 0x1008 + (i << 3))
    
    if (*(x21_1 + 0x2c) == 7)
        PileRemoveToken(x21_1, x20_1)
        UI2Free(x21_1 + 0x2148)
        UI2Free(x21_1 + 0x214c)
        UI2Free(x21_1 + 0x2150)
        UI2Free(x21_1 + 0x2154)
        arg1 = zx.q(*(x21_1 + 0x1f90))
        
        if (arg1.d != 0)
            SpineDestroy(arg1.d)
        
        int32_t x9_1 = *(gDomClient + 0x205f0)
        *(gDomClient + 0x205f0) = zx.d(*(x21_1 + 0x21d0))
        *(x21_1 + 0x21d0) = x9_1
        *(gDomClient + 0x205f4) -= 1
        *(arg2 + 0x1008 + (i << 3)) = 0
        x8 = *(arg3 + 4)
    
    i += 1
while (i s< sx.q(x8))
