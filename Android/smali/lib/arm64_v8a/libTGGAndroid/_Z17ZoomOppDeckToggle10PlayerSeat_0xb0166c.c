// 函数: _Z17ZoomOppDeckToggle10PlayerSeat
// 地址: 0xb0166c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gDomClient + 0x38)
uint64_t x1

if (x8 == 0xffffffff)
    x1 = 0
else
    x1 = zx.q(x8)

int32_t x0 = PlayerSeatToWho(arg1, x1)
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
uint64_t x1_1 = zx.q(x0)
void* x0_1
void* x8_2
int64_t x9_1

if (x9.d != 0)
    x8_2 = *(gDomClient + 0x205e0)
    x9_1 = x8_2 + x9 * 0x21d8
    x0_1 = x8_2
    
    while (zx.d(*(x0_1 + 0x21d2)) == 0)
        x0_1 += 0x21d8
        
        if (x0_1 u>= x9_1)
            goto label_b01750

if (x9.d == 0 || x0_1 == 0xffffffff)
label_b01750:
    x0_1 = DomCreatePile_Other(0x3eb, x1_1, 0, 0)
else
    while (true)
        if (*(x0_1 + 0x2c) == 3 && *(x0_1 + 0x58) == x1_1.d && *(x0_1 + 0x5c) == 0x3eb
                && *(x0_1 + 0x60) == 0)
            if (x0_1 != 0)
                break
            
            goto label_b01750
        
        if (x0_1 == 0)
            x0_1 = x8_2
        else
            x0_1 += 0x21d8
        
        if (x0_1 u>= x9_1)
            goto label_b01750
        
        while (zx.d(*(x0_1 + 0x21d2)) == 0)
            x0_1 += 0x21d8
            
            if (x0_1 u>= x9_1)
                goto label_b01750
        
        if (x0_1 == 0xffffffff)
            goto label_b01750

if (*(gDomClient + 0x1f8e4) != *(x0_1 + 0x21d0))
    return DomExpandPile(x0_1, false) __tailcall

return DomMinimizePile(x0_1) __tailcall
