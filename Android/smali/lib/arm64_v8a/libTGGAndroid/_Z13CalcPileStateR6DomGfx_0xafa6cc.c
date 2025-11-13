// 函数: _Z13CalcPileStateR6DomGfx
// 地址: 0xafa6cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x13 = zx.q(*(gDomClient + 0x205e8))
int32_t x8 = *(arg1 + 0x5c)
void* i_1
int64_t x13_1
void* i

if (x13.d != 0)
    i_1 = *(gDomClient + 0x205e0)
    x13_1 = i_1 + x13 * 0x21d8
    i = i_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= x13_1)
            goto label_afa7a0

int32_t x4

if (x13.d == 0 || i == 0xffffffff)
label_afa7a0:
    x4 = 0
else
    x4 = 0
    
    do
        if (*(i + 0x2c) == 0 && *(i + 0xa0) == *(arg1 + 0x58) && *(i + 0xa4) == x8
                && *(i + 0xc8) == *(arg1 + 0x60))
            x4 += 1
        
        if (i == 0)
            i = i_1
        else
            i += 0x21d8
        
        if (i u>= x13_1)
            break
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x13_1)
                goto label_afa7c4
    while (i != 0xffffffff)

label_afa7c4:
return CalcPileState(zx.q(x8), zx.q(*(arg1 + 0x30)), zx.q(*(gDomClient + 0x2074c)), 
    zx.q(*(gDomClient + 0x20758)), x4) __tailcall
