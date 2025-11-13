// 函数: _Z19IsEstateInheritanceR6DomGfx
// 地址: 0xb0c588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x2c)
int32_t x8_3

if (x8 == 3)
    while (true)
        x8_3 = *(arg1 + 0x30)
        
        if (x8_3 == 0x70d)
            return 0
        
        if (x8_3 == 0x718)
            return 0
        
        int32_t x11_1 = *(arg1 + 0x70)
        
        if (x11_1 == 0)
            break
        
        arg1 = *(gDomClient + 0x205e0) + zx.q(x11_1.w) * 0x21d8
        x8 = *(arg1 + 0x2c)
        
        if (x8 != 3)
            goto label_b0c5e0
    
    goto label_b0c61c

label_b0c5e0:

if (x8 == 5)
    x8_3 = *(arg1 + 0x204)
label_b0c61c:
    
    if (x8_3 == 0x101)
    label_b0c634:
        
        if ((HasActiveGame() & 1) != 0)
            return IsInheirtanceActive(gDomClient + 0x20728) __tailcall
else if (x8 != 1)
    if (x8 != 0)
        pthread_kill(pthread_self(), 6)
        DomCardDef* x0_7
        XString* x1_3
        x0_7, x1_3 = XNoReturn()
        return HasHeirloom(x0_7, x1_3) __tailcall
    
    if (CardWhat(gDomClient + 0x20728, zx.q(*(arg1 + 0x98))) == 0x101)
        goto label_b0c634
else if (*(arg1 + 0x170) == 0x101)
    goto label_b0c634

return 0
