// 函数: _Z13SortAbilitiesPK6DomGfxS1_
// 地址: 0xb49408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(gDomClient + 0x205e0)
DomGfx const* x9 = arg1
int32_t i
int32_t x21_1

for (i = *(x9 + 0x2c); i == 3; i = *(x9 + 0x2c))
    x21_1 = *(x9 + 0x30)
    
    if (x21_1 == 0x70d)
        goto label_b494c0
    
    if (x21_1 == 0x718)
        goto label_b494c0
    
    int32_t x9_1 = *(x9 + 0x70)
    
    if (x9_1 == 0)
        goto label_b494c0
    
    x9 = x8 + zx.q(x9_1.w) * 0x21d8

if (i == 5)
    x21_1 = *(x9 + 0x204)
label_b494c0:
    DomGfx const* x9_3 = arg2
    int32_t x0_4
    int32_t i_1
    
    for (i_1 = *(x9_3 + 0x2c); i_1 == 3; i_1 = *(x9_3 + 0x2c))
        x0_4 = *(x9_3 + 0x30)
        
        if (x0_4 == 0x70d)
            goto label_b49538
        
        if (x0_4 == 0x718)
            goto label_b49538
        
        int32_t x9_4 = *(x9_3 + 0x70)
        
        if (x9_4 == 0)
            goto label_b49538
        
        x9_3 = x8 + zx.q(x9_4.w) * 0x21d8
    
    bool cond:0
    
    if (i_1 == 5)
        x0_4 = *(x9_3 + 0x204)
    label_b49538:
        cond:0 = x21_1 s<= x0_4
        
        if (x21_1 s< x0_4)
            return 1
        
    label_b49560:
        
        if (not(cond:0))
            return 0
        
        operator!=(zx.q(*(arg1 + 0x1f4)), zx.q(*(arg2 + 0x1f4)))
        return zx.q(*(arg1 + 0x1f4) s< *(arg2 + 0x1f4) ? 1 : 0)
    
    if (i_1 == 1)
        int32_t x0_6 = *(x9_3 + 0x170)
        cond:0 = x21_1 s<= x0_6
        
        if (x21_1 s< x0_6)
            return 1
        
        goto label_b49560
    
    if (i_1 == 0)
        int32_t x0_3 = CardWhat(gDomClient + 0x20728, zx.q(*(x9_3 + 0x98)))
        cond:0 = x21_1 s<= x0_3
        
        if (x21_1 s< x0_3)
            return 1
        
        goto label_b49560
else
    if (i == 1)
        x21_1 = *(x9 + 0x170)
        goto label_b494c0
    
    if (i == 0)
        int32_t x0_1 = CardWhat(gDomClient + 0x20728, zx.q(*(x9 + 0x98)))
        x8 = *(gDomClient + 0x205e0)
        x21_1 = x0_1
        goto label_b494c0

pthread_kill(pthread_self(), 6)
DomClient* x0_11
int64_t x1_3
int64_t x2
DomActiveItem* x3
DomAbilityType* x4
int64_t x5
x0_11, x1_3, x2, x3, x4, x5 = XNoReturn()
return DomCreateAbility(x0_11, x1_3, x2, x3, x4, x5) __tailcall
