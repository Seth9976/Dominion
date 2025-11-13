// 函数: _Z13MayPayoffDebtR7DomGame9PlayerWho15DomChoiceUIType
// 地址: 0xbed7ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(arg1 + 0x19ac))
int32_t x19 = arg2
DomGame& x20 = arg1
int32_t x8

x8 = arg2 == 0xffffffff ? 6 : 0x3f1

int32_t x22

if (x9.d s< 1)
    x22 = 0
else
    int64_t i_4
    
    if (x9.d u>= 3)
        i_4 = x9 & 0xfffffffe
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        void* __offset(DomGame, 0x15f88) x13_1 = x20 + 0x15f88
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x15_5 = *(x13_1 - 0x18)
            int32_t entry_x16
            
            if (x15_5 == x8)
                entry_x16 = *(x13_1 - 0x1c)
            
            int32_t x17_3 = *(x13_1 + 8)
            
            if (x17_3 == x8)
                arg1 = zx.q(*(x13_1 + 4))
            
            int32_t x3_3 = entry_x16 == x19 ? 1 : 0
            int32_t x1_3 = x3_3 & (x15_5 == x8 ? 1 : 0)
            
            if (x1_3 == 1)
                x3_3 = *(x13_1 - 0x20)
            
            int32_t x2_3 = (arg1.d == x19 ? 1 : 0) & (x17_3 == x8 ? 1 : 0)
            int32_t entry_x6
            
            if (x2_3 != 0)
                entry_x6 = *x13_1
            
            int32_t x4_2 = x3_3 != 0xc00 ? 1 : 0
            int32_t x5_1 = entry_x6 == 0xc00 ? 1 : 0
            
            if (((x4_2 | (x1_3 ^ 1)) & 1) == 0)
                x4_2 = *(x13_1 - 0xc)
            
            if ((x5_1 & x2_3) != 0)
                x5_1 = *(x13_1 + 0x14)
            
            int32_t x0 = x2_3 & (entry_x6 != 0xc00 ? 1 : 0)
            entry_x6 = x15_5 == x8 ? 1 : 0
            entry_x16 = (entry_x6 & (entry_x16 != x19 ? 1 : 0)) | (x1_3 & (x3_3 != 0xc00 ? 1 : 0))
            arg1 = (zx.q(x17_3 == x8 ? 1 : 0) & zx.q(arg1.d != x19 ? 1 : 0)) | zx.q(x0)
            int32_t x15_3
            
            if ((entry_x16 | (x15_5 != x8 ? 1 : 0)) != 0)
                x15_3 = 0
            else
                x15_3 = x4_2
            
            x11_1 += x15_3
            int32_t x15_4
            
            if ((arg1.d | (x17_3 != x8 ? 1 : 0)) != 0)
                x15_4 = 0
            else
                x15_4 = x5_1
            
            i = i_3
            i_3 -= 2
            x12_1 += x15_4
            x13_1 += 0x40
        while (i != 2)
        x22 = x12_1 + x11_1
        
        if (i_4 != x9)
            goto label_bed9ec
    else
        i_4 = 0
        x22 = 0
    label_bed9ec:
        void* x11_4 = x20 + (i_4 << 5) + 0x15f68
        int64_t i_2 = x9 - i_4
        int64_t i_1
        
        do
            if (*(x11_4 + 8) == x8 && *(x11_4 + 4) == x19 && *x11_4 == 0xc00)
                x22 += *(x11_4 + 0x14)
            
            i_1 = i_2
            i_2 -= 1
            x11_4 += 0x20
        while (i_1 != 1)

int32_t x23 = *(x20 + muls.dp.d(x19, 0x5a30) + 0x18194)
int64_t result = GetCoffers(x20, zx.q(x19))

if (x22 != 0 && x23 != neg.d(result.d))
    result = ChoosePayoffDebt(x20, zx.q(x19), zx.q(arg3))
    
    if (result.d != 0)
        return PayoffDebt(x20, zx.q(x19), result.d) __tailcall

return result
