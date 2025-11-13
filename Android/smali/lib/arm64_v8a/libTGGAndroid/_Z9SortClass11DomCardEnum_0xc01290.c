// 函数: _Z9SortClass11DomCardEnum
// 地址: 0xc01290
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = (arg1 + 0x180000) s% 0x3e5
int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_1) << 3))
int32_t i = arg1
void* x8_3

if (x9_4 != 0)
    while (*x9_4 != i || x9_4[1] != 0x18)
        x9_4 = *(x9_4 + 0x10)
        
        if (x9_4 == 0)
            goto label_c012e8
    
    x8_3 = *(x9_4 + 8)
else
label_c012e8:
    int32_t var_34
    int64_t x0_1 = DomCardExp(zx.q(i), &var_34)
    int64_t var_40
    
    if (DomExpGet(x0_1, &var_40) != 0)
        int64_t x8_2 = var_40
        int32_t x11_1 = var_34
        
        while (true)
            int64_t x11_2 = sx.q(x11_1)
            
            if (*(x8_2 + muls.dp.d(x11_1, 0x780) + 4) s<= 0x18
                    && *(x8_2 + x11_2 * 0x780 + 8) s> 0x17)
                break
            
            int32_t x12_6 = *(x8_2 + x11_2 * 0x780 + 0xc)
            
            if (x12_6 == 0)
                *(x8_2 + x11_2 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                break
            
            x11_1 = x12_6 + neg.d(x0_1.d << 8)
            var_34 = x11_1
    
    int32_t* x0_3 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_1) << 3
    int64_t x9_6 = *(&data_1838a20 + x8_5)
    *x0_3 = i
    x0_3[1] = 0x18
    *(&data_1838a20 + x8_5) = x0_3
    *(x0_3 + 0x10) = x9_6
    int64_t x0_5 = DomCardExp(zx.q(i), &var_34)
    int64_t x22_2 = sx.q(var_34)
    
    if (DomExpGet(x0_5, &var_40) == 0)
        x8_3 = *EXP_BASE_DEFS
    else
        int64_t x8_6 = var_40
        int32_t x11_3 = var_34
        
        while (true)
            int64_t x11_4 = sx.q(x11_3)
            
            if (*(x8_6 + muls.dp.d(x11_3, 0x780) + 4) s<= 0x18
                    && *(x8_6 + x11_4 * 0x780 + 8) s> 0x17)
                x8_3 = x8_6 + x11_4 * 0x780
                break
            
            int32_t x12_12 = *(x8_6 + x11_4 * 0x780 + 0xc)
            
            if (x12_12 == 0)
                *(x8_6 + x11_4 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                x8_3 = var_40 + x22_2 * 0x780
                break
            
            x11_3 = x12_12 + neg.d(x0_5.d << 8)
            var_34 = x11_3
    
    *(x0_3 + 8) = x8_3

int64_t x9_8 = *(x8_3 + 0xc8)

if ((0x2000000000008 & not.q(x9_8)) == 0)
    return 0

if ((0x2000000000002 & not.q(x9_8)) == 0)
    return 8

if ((x9_8.d & 0x200000) != 0)
    return 9

if ((x9_8.d & 0x4000) != 0)
    return 0xa

if ((x9_8.d & 8) != 0)
    return 1

if ((x9_8.d & 0x10) != 0)
    return 2

if ((x9_8.d & 0x8000) != 0)
    return 7

if (i - 0xc34 u<= 0x12 && (1 << (i - 0xc34) & 0x60001) != 0)
    return 4

if ((x9_8 & 0x9407f000400) != 0)
    return 3

if ((zx.d(*(x8_3 + 0xc6)) & 8) != 0)
    return 6

return 5
