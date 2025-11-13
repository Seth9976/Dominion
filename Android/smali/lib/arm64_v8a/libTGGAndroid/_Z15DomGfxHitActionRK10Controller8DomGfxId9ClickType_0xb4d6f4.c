// 函数: _Z15DomGfxHitActionRK10Controller8DomGfxId9ClickType
// 地址: 0xb4d6f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    return 

int32_t x8_1 = arg2 & 0xffff

if (x8_1 u>= *(gDomClient + 0x205e8))
    return 

int64_t x21_1 = *(gDomClient + 0x205e0)

if (*(x21_1 + mulu.dp.d(x8_1, 0x21d8) + 0x21d0) != arg2)
    return 

uint64_t x22_1 = zx.q(x8_1)
DomGfx* x19_1 = x21_1 + x22_1 * 0x21d8

if (*(x19_1 + 0x2c) == 2)
    return 

int32_t x20_1 = arg3
Vec2 var_38
ControllerCursorPosition(arg1, &var_38)

if (x20_1 == 1)
    DomGfxInspect(x19_1)
else if (x20_1 == 0)
    int32_t x8_3 = *(x19_1 + 0x2c)
    
    if (x8_3 != 0)
        if (x8_3 != 1 || *(x21_1 + x22_1 * 0x21d8 + 0x174) != 1)
            goto label_b4d7b8
        
        DomGfxInspect(x19_1)
    else if (*(x21_1 + x22_1 * 0x21d8 + 0xa4) == 0x3f1)
        DomGfxInspect(x19_1)
    else
    label_b4d7b8:
        
        if (GetLocalControlScheme() != 1
                || (*(x19_1 + 0x2c) == 1 && *(x21_1 + x22_1 * 0x21d8 + 0x174) == 1))
            DomGfxActivate(x19_1, &var_38, true, false, false)
        else
            DomGfxInspect(x19_1)
