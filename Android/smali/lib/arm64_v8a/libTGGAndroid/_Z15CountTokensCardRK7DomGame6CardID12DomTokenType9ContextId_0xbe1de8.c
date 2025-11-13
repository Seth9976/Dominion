// 函数: _Z15CountTokensCardRK7DomGame6CardID12DomTokenType9ContextId
// 地址: 0xbe1de8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x24
uint64_t var_30 = entry_x24
uint64_t entry_x23
uint64_t var_28 = entry_x23
uint64_t entry_x19
uint64_t var_8 = entry_x19
uint64_t x9 = zx.q(*(arg1 + 0x19ac))
int32_t x8

if (x9.d s< 1)
    x8 = 0
else
    int64_t i_4
    
    if (x9.d u>= 3)
        i_4 = x9 & 0xfffffffe
        int32_t x8_1 = 0
        int32_t x11_1 = 0
        void* __offset(DomGame, 0x15f88) x12_1 = arg1 + 0x15f88
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x14_5 = *(x12_1 - 0x18)
            int32_t entry_x15
            
            if (x14_5 == 0x474)
                entry_x15 = *(x12_1 - 0x14)
            
            int32_t x16_3 = *(x12_1 + 8)
            int32_t entry_x17
            
            if (x16_3 == 0x474)
                entry_x17 = *(x12_1 + 0xc)
            
            int32_t x5_4 = entry_x15 == arg2 ? 1 : 0
            int32_t x4_4 = x5_4 & (x14_5 == 0x474 ? 1 : 0)
            
            if (x4_4 == 1)
                x5_4 = *(x12_1 - 0x20)
            
            int32_t x6_3 = (entry_x17 == arg2 ? 1 : 0) & (x16_3 == 0x474 ? 1 : 0)
            
            if (x6_3 != 0)
                entry_x19 = zx.q(*x12_1)
            
            int32_t x7_5 = (x5_4 == arg3 ? 1 : 0) & x4_4
            
            if (x7_5 == 1)
                entry_x23 = *(x12_1 - 8)
            
            int32_t x21_2 = (entry_x19.d == arg3 ? 1 : 0) & x6_3
            
            if (x21_2 != 0)
                entry_x24 = *(x12_1 + 0x18)
            
            int32_t x20_2 = entry_x23 != arg4 ? 1 : 0
            int32_t x22_1 = entry_x24 == arg4 ? 1 : 0
            
            if (((x20_2 | (x7_5 ^ 1)) & 1) == 0)
                x20_2 = *(x12_1 - 0xc)
            
            if ((x22_1 & x21_2) != 0)
                x22_1 = *(x12_1 + 0x14)
            
            entry_x24 = zx.q(entry_x24 != arg4 ? 1 : 0)
            entry_x23 = zx.q(entry_x23 != arg4 ? 1 : 0)
            bool cond:4_1 = entry_x19.d != arg3
            entry_x19 = zx.q(x21_2) & zx.q(entry_x24.d)
            entry_x15 = ((x14_5 == 0x474 ? 1 : 0) & (entry_x15 != arg2 ? 1 : 0))
                | (x4_4 & (x5_4 != arg3 ? 1 : 0)) | (x7_5 & entry_x23.d)
            entry_x17 = ((x16_3 == 0x474 ? 1 : 0) & (entry_x17 != arg2 ? 1 : 0))
                | (x6_3 & (cond:4_1 ? 1 : 0)) | entry_x19.d
            int32_t x14_3
            
            if ((entry_x15 | (x14_5 != 0x474 ? 1 : 0)) != 0)
                x14_3 = 0
            else
                x14_3 = x20_2
            
            x8_1 += x14_3
            int32_t x14_4
            
            if ((entry_x17 | (x16_3 != 0x474 ? 1 : 0)) != 0)
                x14_4 = 0
            else
                x14_4 = x22_1
            
            i = i_3
            i_3 -= 2
            x11_1 += x14_4
            x12_1 += 0x40
        while (i != 2)
        x8 = x11_1 + x8_1
        
        if (i_4 != x9)
            goto label_be1fbc
    else
        i_4 = 0
        x8 = 0
    label_be1fbc:
        int64_t i_2 = x9 - i_4
        void* x10_2 = arg1 + (i_4 << 5) + 0x15f74
        int64_t i_1
        
        do
            if (*(x10_2 - 4) == 0x474 && *x10_2 == arg2 && *(x10_2 - 0xc) == arg3
                    && *(x10_2 + 0xc) == arg4)
                x8 += *(x10_2 + 8)
            
            i_1 = i_2
            i_2 -= 1
            x10_2 += 0x20
        while (i_1 != 1)

return zx.q(x8)
