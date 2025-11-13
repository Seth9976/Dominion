// 函数: _Z15UpdateCardHintsR6DomGfx
// 地址: 0xb17024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28
int32_t var_24
int32_t x0 = ShowHintValue(arg1, &var_24, &var_28)
int32_t x8 = *(arg1 + 0xd8)

if ((x0 & 1) == 0)
    if (x8 != 0)
        DomGfx* x20_1 = *(gDomClient + 0x205e0) + zx.q(x8.w) * 0x21d8
        PileRemoveToken(x20_1, arg1)
        UI2Free(x20_1 + 0x2148)
        UI2Free(x20_1 + 0x214c)
        UI2Free(x20_1 + 0x2150)
        UI2Free(x20_1 + 0x2154)
        uint32_t x0_6 = *(x20_1 + 0x1f90)
        
        if (x0_6 != 0)
            SpineDestroy(x0_6)
        
        int32_t x10_2 = *(gDomClient + 0x205f0)
        *(gDomClient + 0x205f0) = zx.d(*(x20_1 + 0x21d0))
        *(x20_1 + 0x21d0) = x10_2
        *(gDomClient + 0x205f4) -= 1
        *(arg1 + 0xd8) = 0
else if (x8 == 0)
    DomGfx* x0_8 = DomGfxCreate_Hint(arg1, zx.q(var_28), var_24, 0, 0)
    PileAddTokenSlot(x0_8, arg1, 0)
    *(arg1 + 0xd8) = *(x0_8 + 0x21d0)
else
    void* x8_2 = *(gDomClient + 0x205e0) + zx.q(x8.w) * 0x21d8
    *(x8_2 + 0x234) = var_28
    *(x8_2 + 0x238) = var_24

int32_t var_2c
int32_t x0_10
int32_t x4
x0_10, x4 = IsCardInActiveSet(arg1, &var_2c, false)
DomTokenIcon var_3c

if ((x0_10 & 1) != 0 && var_2c == 1)
    SyncHintReplacments(arg1, &var_3c, 
        AffectedByReplacements(gDomClient + 0x20728, zx.q(*(arg1 + 0xa0)), zx.q(*(arg1 + 0x98)), 
            &var_3c, x4))
else if (*(arg1 + 0xe0) != 0)
    ClearAllHintReplacements(arg1)
uint64_t result = HasOneWay()

if ((result.d & 1) == 0)
label_b17254:
    int32_t x8_14 = *(arg1 + 0xdc)
    
    if (x8_14 != 0)
        DomGfx* x20_4 = *(gDomClient + 0x205e0) + zx.q(x8_14.w) * 0x21d8
        PileRemoveToken(x20_4, arg1)
        UI2Free(x20_4 + 0x2148)
        UI2Free(x20_4 + 0x214c)
        UI2Free(x20_4 + 0x2150)
        UI2Free(x20_4 + 0x2154)
        result = zx.q(*(x20_4 + 0x1f90))
        
        if (result.d != 0)
            result = SpineDestroy(result.d)
        
        int32_t x10_3 = *(gDomClient + 0x205f0)
        *(gDomClient + 0x205f0) = zx.d(*(x20_4 + 0x21d0))
        *(x20_4 + 0x21d0) = x10_3
        *(gDomClient + 0x205f4) -= 1
        *(arg1 + 0xdc) = 0
else
    result = GetActiveProfile()
    
    if ((zx.d(*(result + 0x432c)) & 2) == 0)
        goto label_b17254
    
    result = IsCardInActiveSet(arg1, &var_2c, false)
    
    if ((result.d & 1) == 0 || (var_2c & 0xfffffffd) != 1)
        goto label_b17254
    
    result = CardIs(gDomClient + 0x20728, zx.q(*(arg1 + 0x98)), 4)
    
    if ((result.d & 1) == 0)
        goto label_b17254
    
    if (*(arg1 + 0xdc) == 0)
        DomGfx* x0_18 = DomGfxCreate_Hint(arg1, 0x22, var_24, 0, 0)
        result = PileAddTokenSlot(x0_18, arg1, 0)
        *(arg1 + 0xdc) = *(x0_18 + 0x21d0)

return result
