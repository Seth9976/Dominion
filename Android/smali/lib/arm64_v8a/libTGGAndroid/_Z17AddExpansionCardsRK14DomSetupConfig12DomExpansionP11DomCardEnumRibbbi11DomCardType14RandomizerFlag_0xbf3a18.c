// 函数: _Z17AddExpansionCardsRK14DomSetupConfig12DomExpansionP11DomCardEnumRibbbi11DomCardType14RandomizerFlag
// 地址: 0xbf3a18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg5.d
int32_t* var_68
int64_t result = DomExpGet(zx.q(arg2), &var_68)

if (result.d s>= 1)
    int32_t x25_1 = arg10.d
    int64_t fp_1 = arg9.q
    int32_t* x26_1 = var_68
    int32_t x27_1 = arg6.d ^ 1
    uint64_t x28_1 = zx.q(result.d)
    
    if (fp_1 == 0)
        int64_t x21_2 = 0
        
        while (true)
            int64_t x8_18 = *(x26_1 + x21_2 * 0x780 + 0xc8)
            
            if ((x8_18 & 0x302804720c800) == 0 && ((x25_1 & 2) != 0 || (x8_18 & 0x800) == 0)
                    && ((x25_1 & 1) != 0 || (x8_18 & 0x40) == 0))
                int32_t x8_20 = x26_1[x21_2 * 0x1e0]
                
                if (((x8_20 == 1 ? 1 : 0) & (x20 ^ 1) & 1) == 0
                        && (((x8_20 != 2 ? 1 : 0) | x27_1) & 1) != 0
                        && *(x26_1 + x21_2 * 0x780 + 4) s<= arg8
                        && *(x26_1 + x21_2 * 0x780 + 8) s> arg8)
                    int32_t x24_2 = *(x26_1 + x21_2 * 0x780 + 0xc0)
                    result = IsInConfig(arg1, zx.q(x24_2))
                    
                    if ((result.d & 1) == 0)
                        int64_t x8_28 = 0
                        
                        while (true)
                            int32_t x9_10 = *(arg1 + 0xc04 + x8_28)
                            
                            if (x9_10 != 0)
                                if (x9_10 == x24_2)
                                    break
                                
                                x8_28 += 4
                                
                                if (x8_28 != 0xaf0)
                                    continue
                            
                            int64_t x8_16 = sx.q(*arg4)
                            *arg4 = x8_16.d + 1
                            *(arg3 + (x8_16 << 2)) = x24_2
                            break
            
            x21_2 += 1
            
            if (x21_2 == x28_1)
                break
    else
        int64_t x22_1 = 0
        
        while (true)
            int64_t x8_5 = *(x26_1 + x22_1 * 0x780 + 0xc8)
            
            if ((x8_5 & fp_1) != 0 && ((x25_1 & 2) != 0 || (x8_5 & 0x800) == 0)
                    && ((x25_1 & 1) != 0 || (x8_5 & 0x40) == 0))
                int32_t x8_7 = x26_1[x22_1 * 0x1e0]
                
                if (((x8_7 == 1 ? 1 : 0) & (x20 ^ 1) & 1) == 0
                        && (((x8_7 != 2 ? 1 : 0) | x27_1) & 1) != 0
                        && *(x26_1 + x22_1 * 0x780 + 4) s<= arg8
                        && *(x26_1 + x22_1 * 0x780 + 8) s> arg8)
                    int32_t x24_1 = *(x26_1 + x22_1 * 0x780 + 0xc0)
                    result = IsInConfig(arg1, zx.q(x24_1))
                    
                    if ((result.d & 1) == 0)
                        int64_t x8_15 = 0
                        
                        while (true)
                            int32_t x9_5 = *(arg1 + 0xc04 + x8_15)
                            
                            if (x9_5 != 0)
                                if (x9_5 == x24_1)
                                    break
                                
                                x8_15 += 4
                                
                                if (x8_15 != 0xaf0)
                                    continue
                            
                            int64_t x8_3 = sx.q(*arg4)
                            *arg4 = x8_3.d + 1
                            *(arg3 + (x8_3 << 2)) = x24_1
                            break
            
            x22_1 += 1
            
            if (x22_1 == x28_1)
                break

return result
