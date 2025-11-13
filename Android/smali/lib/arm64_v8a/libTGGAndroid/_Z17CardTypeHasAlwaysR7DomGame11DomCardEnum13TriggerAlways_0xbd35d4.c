// 函数: _Z17CardTypeHasAlwaysR7DomGame11DomCardEnum13TriggerAlways
// 地址: 0xbd35d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x21 << 0x10)) s% 0x3e5
int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x20 = arg2
void* x8_6

if (x9 != 0)
    while (*x9 != x20 || x9[1] != x21)
        x9 = *(x9 + 0x10)
        
        if (x9 == 0)
            goto label_bd3634
    
    x8_6 = *(x9 + 8)
else
label_bd3634:
    DomDefGetSlow(zx.q(x20), zx.q(x21))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_1 = *(&data_1838a20 + x8_5)
    *x0_1 = x20
    x0_1[1] = x21
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_1
    void* x0_3 = DomDefGetSlow(zx.q(x20), zx.q(x21))
    x8_6 = x0_3
    *(x0_1 + 8) = x0_3

uint64_t result = 0
int32_t* x8_7 = x8_6 + 0xec

while (true)
    int32_t x9_2 = x8_7[-3]
    
    if (x9_2 != 6)
        if (x9_2 == 0)
            return 0xffffffff
    else if (x8_7[-2] == 3 && *x8_7 == arg3)
        return result
    
    result = zx.q(result.d + 1)
    x8_7 = &x8_7[0x30]
