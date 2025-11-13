// 函数: _Z14PileRemoveCardR6DomGfxS0_bb
// 地址: 0xaedc24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1
int128_t v1
x0_1, v1 = PileRemove(zx.q(*(arg2 + 0x21d0)), zx.q(*(arg1 + 0x21d0)))

if (*(arg1 + 0xa4) != 0)
    int32_t x8_1 = *(arg1 + 0x21d0)
    void* __offset(DomGfx, 0x70) x10_2 = arg2 + 0x70
    int32_t x9_1 = *x10_2
    
    if (x9_1 != 0 && x9_1 != x8_1)
        do
            void* x10_3 = *(gDomClient + 0x205e0) + mulu.dp.d(x9_1 & 0xffff, 0x21d8)
            x9_1 = *(x10_3 + 0x213c)
            x10_2 = x10_3 + 0x213c
            
            if (x9_1 == 0)
                break
        while (x9_1 != x8_1)
    
    *x10_2 = *(arg1 + 0x213c)
    int32_t i = *(arg1 + 0x213c)
    
    while (i != 0)
        void* x11_3 = *(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8)
        v1.q = *(x11_3 + 0xb0)
        i = *(x11_3 + 0x213c)
        *(x11_3 + 0xb0) = (v1 + sx.o(-1)).q
    
    *(arg1 + 0x9c) = 0
    *(arg1 + 0xa4) = 0
    *(arg1 + 0xb0) = 0xffffffff
    *(arg1 + 0x213c) = 0
    int32_t x8_4 = *(arg2 + 0x6c) - 1
    *(arg2 + 0x6c) = x8_4
    
    if ((arg3.d & 1) == 0)
        x0_1 = PileAdjustCards(arg2, arg1, false)
        x8_4 = *(arg2 + 0x6c)
    
    if (x8_4 == 0 && (arg4.d & 1) == 0)
        int32_t x8_5 = *(arg2 + 0x5c)
        
        if (x8_5 == 0x3e9 || x8_5 - 0x44c u<= 0x27)
            PlayerAreaRemove(arg2)
            UI2Free(arg2 + 0x2148)
            UI2Free(arg2 + 0x214c)
            UI2Free(arg2 + 0x2150)
            UI2Free(arg2 + 0x2154)
            uint64_t x0_8 = zx.q(*(arg2 + 0x1f90))
            
            if (x0_8.d != 0)
                x0_8 = SpineDestroy(x0_8.d)
            
            int32_t x10_4 = *(gDomClient + 0x205f0)
            *(gDomClient + 0x205f0) = zx.d(*(arg2 + 0x21d0))
            *(arg2 + 0x21d0) = x10_4
            *(gDomClient + 0x205f4) -= 1
            return x0_8

return x0_1
