// 函数: _Z11GetCardName8Language11DomCardEnum
// 地址: 0xbdef8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_1 = (arg2 + 0x180000) s% 0x3e5
int32_t* x10_4 = *(&data_1838a20 + (sx.q(x9_1) << 3))
int32_t i = arg2
DomCardDef* x0_3

if (x10_4 != 0)
    while (*x10_4 != i || x10_4[1] != 0x18)
        x10_4 = *(x10_4 + 0x10)
        
        if (x10_4 == 0)
            goto label_bdeff0
    
    x0_3 = *(x10_4 + 8)
else
label_bdeff0:
    int32_t var_44
    int64_t x0_1 = DomCardExp(zx.q(i), &var_44)
    int64_t var_50
    
    if (DomExpGet(x0_1, &var_50) != 0)
        int64_t x8_1 = var_50
        int32_t x11_1 = var_44
        
        while (true)
            int64_t x11_2 = sx.q(x11_1)
            
            if (*(x8_1 + muls.dp.d(x11_1, 0x780) + 4) s<= 0x18
                    && *(x8_1 + x11_2 * 0x780 + 8) s> 0x17)
                break
            
            int32_t x12_6 = *(x8_1 + x11_2 * 0x780 + 0xc)
            
            if (x12_6 == 0)
                *(x8_1 + x11_2 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                break
            
            x11_1 = x12_6 + neg.d(x0_1.d << 8)
            var_44 = x11_1
    
    int32_t* x0_4 = malloc(0x18)
    int64_t x8_5 = sx.q(x9_1) << 3
    int64_t x9_3 = *(&data_1838a20 + x8_5)
    *x0_4 = i
    x0_4[1] = 0x18
    *(&data_1838a20 + x8_5) = x0_4
    *(x0_4 + 0x10) = x9_3
    int64_t x0_6 = DomCardExp(zx.q(i), &var_44)
    int64_t x24_2 = sx.q(var_44)
    
    if (DomExpGet(x0_6, &var_50) == 0)
        x0_3 = *EXP_BASE_DEFS
    else
        int64_t x8_6 = var_50
        int32_t x11_3 = var_44
        
        while (true)
            int64_t x11_4 = sx.q(x11_3)
            
            if (*(x8_6 + muls.dp.d(x11_3, 0x780) + 4) s<= 0x18
                    && *(x8_6 + x11_4 * 0x780 + 8) s> 0x17)
                x0_3 = x8_6 + x11_4 * 0x780
                break
            
            int32_t x12_12 = *(x8_6 + x11_4 * 0x780 + 0xc)
            
            if (x12_12 == 0)
                *(x8_6 + x11_4 * 0x780 + 0xc0)
                XTrace("can't find card %d cardcur %d version %d")
                x0_3 = var_50 + x24_2 * 0x780
                break
            
            x11_3 = x12_12 + neg.d(x0_6.d << 8)
            var_44 = x11_3
    
    *(x0_4 + 8) = x0_3

return DomDefName(x0_3, zx.q(arg1), nullptr, false)
