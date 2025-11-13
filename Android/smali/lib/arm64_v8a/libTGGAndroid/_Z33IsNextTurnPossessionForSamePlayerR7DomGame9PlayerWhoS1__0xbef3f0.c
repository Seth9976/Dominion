// 函数: _Z33IsNextTurnPossessionForSamePlayerR7DomGame9PlayerWhoS1_
// 地址: 0xbef3f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x19c0))
int32_t x10
int32_t x12

if (x8.d s< 1)
    x12 = 0
    x10 = 0
else
    int64_t i_4
    
    if (x8.d != 1)
        i_4 = x8 & 0xfffffffe
        int32_t x10_1 = 0
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        int32_t x13_1 = 0
        void* __offset(DomGame, 0x3c314) x14_1 = arg1 + 0x3c314
        int64_t i_3 = i_4
        int64_t i
        
        do
            int32_t x16_5 = *(x14_1 - 0xc0)
            int32_t x3_3
            int32_t entry_x4
            int32_t entry_x17
            
            if (x16_5 == 0)
                entry_x17 = *(x14_1 - 0xbc)
                x3_3 = *(x14_1 - 8)
                
                if (x3_3 == 0)
                    entry_x4 = *(x14_1 - 4)
            else
                x3_3 = *(x14_1 - 8)
                
                if (x3_3 == 0)
                    entry_x4 = *(x14_1 - 4)
            
            int32_t x6_1 = x3_3 == 0 ? 1 : 0
            int32_t entry_x5
            
            if (entry_x17 == arg2 && x16_5 == 0)
                entry_x5 = *(x14_1 - 0xb8)
            
            if (((entry_x4 == arg2 ? 1 : 0) & x6_1) != 0)
                x6_1 = *x14_1
            
            int32_t x3_1 = x3_3 == 0 ? 1 : 0
            int32_t x16_1 = x16_5 == 0 ? 1 : 0
            int32_t x7_2 = x16_1 & (entry_x5 != arg3 ? 1 : 0)
            int32_t x17_2 = (x16_1 & (entry_x17 != arg2 ? 1 : 0)) ^ 1
            int32_t x16_2 = x16_1 & (entry_x5 == arg3 ? 1 : 0)
            entry_x4 = (x3_1 & (entry_x4 != arg2 ? 1 : 0)) ^ 1
            entry_x5 = x3_1 & (x6_1 != arg3 ? 1 : 0)
            entry_x17 = entry_x5 & entry_x4
            x10_1 |= x16_2 & x17_2
            i = i_3
            i_3 -= 2
            x12_1 |= x7_2 & x17_2
            x13_1 |= entry_x17
            x11_1 |= x3_1 & (x6_1 == arg3 ? 1 : 0) & entry_x4
            x14_1 += 0x170
        while (i != 2)
        x12 = x13_1 | x12_1
        x10 = x11_1 | x10_1
        
        if (i_4 != x8)
            goto label_bef554
    else
        i_4 = 0
        x10 = 0
        x12 = 0
    label_bef554:
        int32_t* x11_3 = arg1 + i_4 * 0xb8 + 0x3c25c
        int64_t i_2 = x8 - i_4
        int64_t i_1
        
        do
            if (x11_3[-2] == 0 && x11_3[-1] == arg2)
                int32_t x9_3 = *x11_3
                x12 |= x9_3 != arg3 ? 1 : 0
                x10 |= x9_3 == arg3 ? 1 : 0
            
            i_1 = i_2
            i_2 -= 1
            x11_3 = &x11_3[0x2e]
        while (i_1 != 1)

return zx.q(x10) & zx.q(not.d(x12)) & 1
