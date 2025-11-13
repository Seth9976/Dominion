// 函数: _Z16AddRequiredCardsR9RandomPCG14DomGameVersionRK14DomSetupConfigP11DomCardEnumRiP13LandscapeDataS7_S6_S7_S6_S7_PK17KingdomSetupFlagsib
// 地址: 0xbf47cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg13 s< 1)
    return 

uint32_t x23_1 = zx.d(arg14)
KingdomSetupFlags const* x24_1 = arg12
DomSetupConfig const& x21_1 = arg3
int32_t x25_1 = arg2
RandomPCG& x26_1 = arg1
int64_t i = 0
uint32_t var_d54_1 = x23_1
KingdomSetupFlags const* var_d60_1 = x24_1

do
    int32_t x8_3 = *arg5
    
    if (x8_3 == 0xa)
        break
    
    int32_t x27_1 = *(x24_1 + (i << 2))
    
    if ((*(x21_1 + 0x16f4) & x27_1) != 0 || (x23_1 & 1) != 0)
        int32_t x28_1
        
        if (x8_3 s< 1)
            x28_1 = 0
            
            if (*arg7 s>= 1)
            label_bf48fc:
                LandscapeData* x20_1 = arg6
                int64_t j = 0
                
                do
                    if ((CardMeetsFlag(zx.q(x25_1), zx.q(*x20_1), zx.q(x27_1)).d & 1) != 0)
                        goto label_bf4868
                    
                    j += 1
                    x20_1 += 0x3c
                while (j s< sx.q(*arg7))
        else
            int64_t j_1 = 0
            
            do
                arg1 = CardMeetsFlag(zx.q(x25_1), zx.q(*(arg4 + (j_1 << 2))), zx.q(x27_1))
                x28_1 = arg1.d
                
                if ((arg1.d & 1) != 0)
                    break
                
                j_1 += 1
            while (j_1 s< sx.q(*arg5))
            
            if (*arg7 s>= 1)
                goto label_bf48fc
        
        if ((x28_1 & 1) == 0)
            DomCardEnum* var_80
            void* j_2 = &var_80
            var_80 = arg8
            int32_t& var_78_1 = arg9
            DomCardEnum* var_70_1 = arg10
            int32_t& var_68_1 = arg11
            int64_t __saved_fp
            
            do
                int32_t* x20_2 = *j_2
                int32_t* x24_2 = *(j_2 + 8)
                int32_t x22_1 = 0
                int32_t x19_1 = 0
                int32_t var_d00[0x320]
                int32_t x8_28
                
                while (true)
                    int32_t x1_2 = *x24_2
                    
                    if (x1_2 == 0)
                        x8_28 = 0
                        break
                    
                    int64_t x9_4 = zx.q(RandomInt(x26_1, x1_2)) << 0x20 s>> 0x1e
                    int32_t fp_1 = *(x20_2 + x9_4)
                    int64_t x8_19 = sx.q(*x24_2) - 1
                    *x24_2 = x8_19.d
                    *(x20_2 + x9_4) = x20_2[x8_19]
                    int32_t x0_5 = CardMeetsFlag(zx.q(x25_1), zx.q(fp_1), zx.q(x27_1))
                    
                    if ((x0_5 & 1) == 0)
                        var_d00[sx.q(x22_1)] = fp_1
                        x22_1 += 1
                    else
                        int32_t x8_23 = (fp_1 + (arg2 << 0x10)) s% 0x3e5
                        int32_t* x9_9 = *(&data_1838a20 + (sx.q(x8_23) << 3))
                        void* x0_9
                        
                        if (x9_9 != 0)
                            while (*x9_9 != fp_1 || x9_9[1] != x25_1)
                                x9_9 = *(x9_9 + 0x10)
                                
                                if (x9_9 == 0)
                                    goto label_bf4a0c
                            
                            x0_9 = *(x9_9 + 8)
                        else
                        label_bf4a0c:
                            DomDefGetSlow(zx.q(fp_1), zx.q(x25_1))
                            int32_t* x0_7 = malloc(0x18)
                            int64_t x8_24 = sx.q(x8_23) << 3
                            int64_t x9_10 = *(&data_1838a20 + x8_24)
                            *x0_7 = fp_1
                            x0_7[1] = x25_1
                            *(&data_1838a20 + x8_24) = x0_7
                            *(x0_7 + 0x10) = x9_10
                            x0_9 = DomDefGetSlow(zx.q(fp_1), zx.q(x25_1))
                            *(x0_7 + 8) = x0_9
                        
                        if ((*(x0_9 + 0xc8) & 0x9407f000400) == 0)
                            x19_1 = 1
                            int64_t x8_27 = sx.q(*arg5)
                            *arg5 = x8_27.d + 1
                            *(arg4 + (x8_27 << 2)) = fp_1
                        else
                            int64_t x8_26 = sx.q(*arg7)
                            int32_t* x0_10 = arg6 + x8_26 * 0x3c
                            *arg7 = x8_26.d + 1
                            *x0_10 = fp_1
                            ClearReferenceCards(&x0_10[1])
                            x19_1 = 1
                    
                    if ((x0_5 & 1) != 0)
                        x8_28 = *x24_2
                        break
                
                memcpy(&x20_2[sx.q(x8_28)], &var_d00, zx.q(x22_1) << 0x20 s>> 0x1e)
                *x24_2 += x22_1
                
                if ((x19_1 & 1) != 0)
                    break
                
                j_2 += 0x10
            while (j_2 != &__saved_fp)
            
            x21_1 = arg3
            x23_1 = var_d54_1
            x24_1 = var_d60_1
    
label_bf4868:
    i += 1
while (i != zx.q(arg13))
