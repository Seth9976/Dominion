// 函数: _Z14DomGfxActivateR6DomGfxRK4Vec2bbb
// 地址: 0xb04254
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGfx& x19 = arg1
void* x0
Vec2* x1
x0, x1 = GetClient()
int32_t x20_1

if (*(x0 + 0x5068) != 1)
label_b042fc:
    int32_t var_34 = 0
    int32_t x0_5 = DomGfxActivateInt(x19, x1, false, false, &var_34, arg5 & 1)
    int32_t x21_1 = *(gDomClient + 0x20758)
    x20_1 = x0_5
    uint64_t x1_3
    int32_t i
    
    for (i = *(x19 + 0x2c); i == 3; i = *(x19 + 0x2c))
        x1_3 = zx.q(*(x19 + 0x30))
        
        if (x1_3.d == 0x70d)
            goto label_b043a4
        
        if (x1_3.d == 0x718)
            goto label_b043a4
        
        int32_t x10_1 = *(x19 + 0x70)
        
        if (x10_1 == 0)
            goto label_b043a4
        
        x19 = *(gDomClient + 0x205e0) + zx.q(x10_1.w) * 0x21d8
    
    if (i == 5)
        x1_3 = zx.q(*(x19 + 0x204))
    else if (i == 1)
        x1_3 = zx.q(*(x19 + 0x170))
    else
        if (i != 0)
            pthread_kill(pthread_self(), 6)
            return TutorialGlow(XNoReturn()) __tailcall
        
        x1_3 = zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x98))))
    
label_b043a4:
    DomSoundUI_Select(zx.q(x21_1), x1_3, zx.q(var_34))
else
    int64_t var_28
    int32_t x0_3
    x0_3, x1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_28)
    int64_t x8_1 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_1.d s>= x0_3)
        goto label_b042fc
    
    int64_t x9_1 = var_28
    
    if (x9_1 == 0)
        goto label_b042fc
    
    int32_t x8_3 = *(x9_1 + x8_1 * 0xb0 + 0x18)
    
    if (x8_3 u> 0x17 || (1 << x8_3 & 0x820005) == 0)
        goto label_b042fc
    
    x20_1 = 0

return zx.q(x20_1)
