// 函数: _Z15UpdatePileHintsR6DomGfx
// 地址: 0xb17308
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28
int32_t var_24
int64_t x0 = ShowHintValue(arg1, &var_24, &var_28)
int32_t x8 = *(arg1 + 0xd8)

if ((x0.d & 1) != 0)
    if (x8 == 0)
        int32_t i = *(arg1 + 0x74)
        int32_t x20_1
        
        if (i == 0)
            x20_1 = 0
        else
            x20_1 = 0
            
            do
                i = *(*(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8) + 0x213c)
                x20_1 += 1
            while (i != 0)
        
        DomGfx* x0_8 = DomGfxCreate_Hint(arg1, zx.q(var_28), var_24, 0, x20_1)
        int64_t x0_9 = PileAddTokenSlot(x0_8, arg1, x20_1)
        *(arg1 + 0xd8) = *(x0_8 + 0x21d0)
        return x0_9
    
    void* x8_2 = *(gDomClient + 0x205e0) + zx.q(x8.w) * 0x21d8
    *(x8_2 + 0x234) = var_28
    *(x8_2 + 0x238) = var_24
else if (x8 != 0)
    DomGfx* x20 = *(gDomClient + 0x205e0) + zx.q(x8.w) * 0x21d8
    PileRemoveToken(x20, arg1)
    UI2Free(x20 + 0x2148)
    UI2Free(x20 + 0x214c)
    UI2Free(x20 + 0x2150)
    UI2Free(x20 + 0x2154)
    uint64_t x0_6 = zx.q(*(x20 + 0x1f90))
    
    if (x0_6.d != 0)
        x0_6 = SpineDestroy(x0_6.d)
    
    int32_t x10_2 = *(gDomClient + 0x205f0)
    *(gDomClient + 0x205f0) = zx.d(*(x20 + 0x21d0))
    *(x20 + 0x21d0) = x10_2
    *(gDomClient + 0x205f4) -= 1
    *(arg1 + 0xd8) = 0
    return x0_6

return x0
