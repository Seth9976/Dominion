// 函数: _Z17CountTokensPlayerRK7DomGame9PlayerWho12DomTokenType
// 地址: 0xbc0da0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x20
uint64_t var_10 = entry_x20
uint64_t x10 = zx.q(*(arg1 + 0x19ac))
int32_t x9

x9 = arg2 == 0xffffffff ? 6 : 0x3f1

int32_t x8

if (x10.d s< 1)
    x8 = 0
else
    int64_t i_4
    
    if (x10.d u>= 3)
        i_4 = x10 & 0xfffffffe
        int32_t x8_1 = 0
        int32_t x12_1 = 0
        void* __offset(DomGame, 0x15f88) x13_1 = arg1 + 0x15f88
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x15_5 = *(x13_1 - 0x18)
            int32_t entry_x16
            
            if (x15_5 == x9)
                entry_x16 = *(x13_1 - 0x1c)
            
            int32_t x17_3 = *(x13_1 + 8)
            int32_t entry_x3
            
            if (x17_3 == x9)
                entry_x3 = *(x13_1 + 4)
            
            int32_t x6_3 = entry_x16 == arg2 ? 1 : 0
            int32_t x4_4 = x6_3 & (x15_5 == x9 ? 1 : 0)
            
            if (x4_4 == 1)
                x6_3 = *(x13_1 - 0x20)
            
            int32_t x5_4 = (entry_x3 == arg2 ? 1 : 0) & (x17_3 == x9 ? 1 : 0)
            
            if (x5_4 != 0)
                entry_x20 = zx.q(*x13_1)
            
            int32_t x7_2 = x6_3 != arg3 ? 1 : 0
            int32_t x19_1 = entry_x20.d == arg3 ? 1 : 0
            
            if (((x7_2 | (x4_4 ^ 1)) & 1) == 0)
                x7_2 = *(x13_1 - 0xc)
            
            if ((x19_1 & x5_4) != 0)
                x19_1 = *(x13_1 + 0x14)
            
            int32_t x3 = x5_4 & (entry_x20.d != arg3 ? 1 : 0)
            entry_x20 = zx.q(x15_5 == x9 ? 1 : 0)
            entry_x16 =
                (entry_x20.d & (entry_x16 != arg2 ? 1 : 0)) | (x4_4 & (x6_3 != arg3 ? 1 : 0))
            entry_x3 = ((x17_3 == x9 ? 1 : 0) & (entry_x3 != arg2 ? 1 : 0)) | x3
            int32_t x15_3
            
            if ((entry_x16 | (x15_5 != x9 ? 1 : 0)) != 0)
                x15_3 = 0
            else
                x15_3 = x7_2
            
            x8_1 += x15_3
            int32_t x15_4
            
            if ((entry_x3 | (x17_3 != x9 ? 1 : 0)) != 0)
                x15_4 = 0
            else
                x15_4 = x19_1
            
            i = i_3
            i_3 -= 2
            x12_1 += x15_4
            x13_1 += 0x40
        while (i != 2)
        x8 = x12_1 + x8_1
        
        if (i_4 != x10)
            goto label_bc0f30
    else
        i_4 = 0
        x8 = 0
    label_bc0f30:
        void* x12_3 = arg1 + (i_4 << 5) + 0x15f68
        int64_t i_2 = x10 - i_4
        int64_t i_1
        
        do
            if (*(x12_3 + 8) == x9 && *(x12_3 + 4) == arg2 && *x12_3 == arg3)
                x8 += *(x12_3 + 0x14)
            
            i_1 = i_2
            i_2 -= 1
            x12_3 += 0x20
        while (i_1 != 1)

return zx.q(x8)
