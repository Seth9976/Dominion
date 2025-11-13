// 函数: _Z17UIStateDrawButtonRK9UIElementR14UIStateElementRK11UITransform
// 地址: 0x10575d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg2 + 0x2d)) != 0)
    return 

int32_t x8_1 = *arg2
int32_t x22

if (*(arg2 + 0x40) s> x8_1)
    x22 = *(arg2 + 0x44)
    
    if (*(arg2 + 0x178) s> x8_1 && x22 == 0)
        goto label_1057654
    
    goto label_1057658

int32_t x0_1 = CalcButtonDrawState(arg2 + 0x34, arg2 + 0x2c)
x8_1 = *arg2
x22 = x0_1

if (*(arg2 + 0x178) s> x8_1 && x22 == 0)
label_1057654:
    
    if (zx.d(*(arg2 + 0x17c)) != 0 || x22 == 1)
        goto label_1057684
    
    goto label_1057660

label_1057658:
XAsset* x3_1

if (x22 == 1)
label_1057684:
    x22 = 1
    x3_1 = *(arg1 + 0x128)
    
    if (x3_1 == 0)
    label_10576a4:
        
        if (*(arg2 + 0xb0) s<= x8_1)
            x3_1 = *(arg1 + 0x88)
        else
            x3_1 = *(arg2 + 0xb8)
else
label_1057660:
    
    if (x22 == 2)
        x3_1 = *(arg1 + 0x130)
        
        if (x3_1 == 0)
            goto label_10576a4
    else
        if (x22 != 3)
            goto label_10576a4
        
        x3_1 = *(arg1 + 0x138)
        
        if (x3_1 == 0)
            goto label_10576a4

UIStateDrawImage(arg1, arg2, arg3, x3_1, nullptr, nullptr, nullptr)
void* __offset(UIElement, 0xf0) x8_3

if (x22 == 3)
    x8_3 = arg1 + 0x140
else
    x8_3 = arg1 + 0xf0

int32_t x11 = *x8_3
void* __offset(UIElement, 0xf4) x8_4

if (x22 == 3)
    x8_4 = arg1 + 0x144
else
    x8_4 = arg1 + 0xf4

int32_t var_28 = *x8_4
int32_t var_24 = x11
UIStateDrawText(arg1, arg2, arg3, &var_24, &var_28)
