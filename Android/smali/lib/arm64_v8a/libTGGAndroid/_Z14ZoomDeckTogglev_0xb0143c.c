// 函数: _Z14ZoomDeckTogglev
// 地址: 0xb0143c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(gDomClient + 0x38)
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
uint64_t x1

if (x10 == 0xffffffff)
    x1 = 0
else
    x1 = zx.q(x10)

void* x0_1
void* x8_1
int64_t x9_1

if (x9.d != 0)
    x8_1 = *(gDomClient + 0x205e0)
    x9_1 = x8_1 + x9 * 0x21d8
    x0_1 = x8_1
    
    while (zx.d(*(x0_1 + 0x21d2)) == 0)
        x0_1 += 0x21d8
        
        if (x0_1 u>= x9_1)
            goto label_b01518

if (x9.d == 0 || x0_1 == 0xffffffff)
label_b01518:
    x0_1 = DomCreatePile_Other(0x3eb, x1, 0, 0)
else
    while (true)
        if (*(x0_1 + 0x2c) == 3 && *(x0_1 + 0x58) == x1.d && *(x0_1 + 0x5c) == 0x3eb
                && *(x0_1 + 0x60) == 0)
            if (x0_1 != 0)
                break
            
            goto label_b01518
        
        if (x0_1 == 0)
            x0_1 = x8_1
        else
            x0_1 += 0x21d8
        
        if (x0_1 u>= x9_1)
            goto label_b01518
        
        while (zx.d(*(x0_1 + 0x21d2)) == 0)
            x0_1 += 0x21d8
            
            if (x0_1 u>= x9_1)
                goto label_b01518
        
        if (x0_1 == 0xffffffff)
            goto label_b01518

if (*(gDomClient + 0x1f8e4) != *(x0_1 + 0x21d0))
    return DomExpandPile(x0_1, false) __tailcall

return DomMinimizePile(x0_1) __tailcall
