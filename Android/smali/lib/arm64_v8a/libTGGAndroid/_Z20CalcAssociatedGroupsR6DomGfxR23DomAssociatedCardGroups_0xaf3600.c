// 函数: _Z20CalcAssociatedGroupsR6DomGfxR23DomAssociatedCardGroups
// 地址: 0xaf3600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 0x2080) = 0
int32_t var_848[0x204]
DomGame* x0_1 = ZoomAssociatedCards(gDomClient + 0x20728, arg1, &var_848)
int32_t var_38
uint64_t x8 = zx.q(var_38)

if (x8.d s>= 1)
    int32_t x16_1 = *(arg2 + 0x2080)
    int64_t x9_1 = 0
    int32_t* x10_1 = &var_848 | 4
    int32_t (* x14_1)[0x204] = &var_848
    
    do
        int64_t x16_4 = sx.q(x16_1)
        *(arg2 + 0x2084) += 1
        uint64_t x15_7 = zx.q(*(&var_848 + x9_1 * 0x408 + 0x400))
        
        if (x15_7.d s>= 1)
            int64_t i_4
            
            if (x15_7.d != 1)
                i_4 = x15_7 & 0xfffffffe
                x0_1 = arg2 + 0xc + x16_4
                int32_t* x1_1 = x10_1
                int64_t i_2 = i_4
                int64_t i
                
                do
                    int32_t x3_1 = x1_1[-1]
                    int32_t x4_1 = *x1_1
                    i = i_2
                    i_2 -= 2
                    x1_1 = &x1_1[2]
                    *(x0_1 - 4) = x3_1
                    *x0_1 = 0
                    *(x0_1 + 8) = x4_1
                    *(x0_1 + 0xc) = 0
                    x0_1 += 0x18
                while (i != 2)
                
                if (i_4 != x15_7)
                    goto label_af3714
            else
                i_4 = 0
            label_af3714:
                x0_1 = &(*x14_1)[i_4]
                void* x1_3 = arg2 + 0xc + x16_4 + i_4 * 0xc
                int64_t i_3 = x15_7 - i_4
                int64_t i_1
                
                do
                    *x1_3 = 0
                    int32_t x2_1 = *x0_1
                    x0_1 += 4
                    i_1 = i_3
                    i_3 -= 1
                    *(x1_3 - 4) = x2_1
                    x1_3 += 0xc
                while (i_1 != 1)
        
        void* x16_2 = arg2 + x16_4
        *x16_2 = x15_7.d
        int32_t x15_1 = *(&var_848 + x9_1 * 0x408 + 0x404)
        x9_1 += 1
        x10_1 = &x10_1[0x102]
        *(x16_2 + 4) = x15_1
        int64_t x15_2 = sx.q(*(arg2 + 0x2080))
        x14_1 = &(*x14_1)[0x102]
        x16_1 = x15_2.d + *(arg2 + x15_2) * 0xc + 8
        *(arg2 + 0x2080) = x16_1
    while (x9_1 != x8)

return ZoomAssociatedCardPiles(x0_1, arg1, arg2)
