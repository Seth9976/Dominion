// 函数: _Z13DomDefGetSlow11DomCardEnum14DomGameVersion
// 地址: 0xbb6d98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t var_24
int64_t x0 = DomCardExp(arg1, &var_24)
int64_t x22 = sx.q(var_24)
int64_t var_38

if (DomExpGet(x0, &var_38) == 0)
    return *EXP_BASE_DEFS

int64_t x8_1 = var_38
int32_t x10_1 = var_24
int32_t x9_1 = neg.d(x0.d << 8)
int64_t x10_2

if (x19 != 0x18)
    while (true)
        x10_2 = sx.q(x10_1)
        
        if (*(x8_1 + muls.dp.d(x10_1, 0x780) + 4) s<= x19 && *(x8_1 + x10_2 * 0x780 + 8) s> x19)
            return x8_1 + x10_2 * 0x780
        
        int32_t x12_12 = *(x8_1 + x10_2 * 0x780 + 0xc)
        
        if (x12_12 == 0)
            break
        
        x10_1 = x12_12 + x9_1
        var_24 = x10_1
else
    while (true)
        x10_2 = sx.q(x10_1)
        
        if (*(x8_1 + muls.dp.d(x10_1, 0x780) + 4) s<= 0x18 && *(x8_1 + x10_2 * 0x780 + 8) s> 0x17)
            return x8_1 + x10_2 * 0x780
        
        int32_t x12_6 = *(x8_1 + x10_2 * 0x780 + 0xc)
        
        if (x12_6 == 0)
            break
        
        x10_1 = x12_6 + x9_1
        var_24 = x10_1

*(x8_1 + x10_2 * 0x780 + 0xc0)
XTrace("can't find card %d cardcur %d version %d")
return var_38 + x22 * 0x780
