// 函数: _ZNKSt6__ndk112ctype_bynameIwE11do_scan_notEmPKwS3_
// 地址: 0x10cfe44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wchar_t const* x19 = arg3
wchar_t* entry_x3

if (arg3 != entry_x3)
    int32_t x21_1 = arg2.d
    
    while (true)
        wchar_t const wc = *x19
        int32_t x0_1
        
        if ((x21_1 & 1) != 0)
            x0_1 = iswspace_l(wc, *(arg1 + 0x10))
        
        if ((x21_1 & 1) == 0 || x0_1 == 0)
            int32_t x0_3
            
            if ((x21_1 & 2) != 0)
                x0_3 = iswprint_l(wc, *(arg1 + 0x10))
            
            if ((x21_1 & 2) == 0 || x0_3 == 0)
                int32_t x0_5
                
                if ((x21_1 & 4) != 0)
                    x0_5 = iswcntrl_l(wc, *(arg1 + 0x10))
                
                if ((x21_1 & 4) == 0 || x0_5 == 0)
                    int32_t x0_7
                    
                    if ((x21_1 & 8) != 0)
                        x0_7 = iswupper_l(wc, *(arg1 + 0x10))
                    
                    if ((x21_1 & 8) == 0 || x0_7 == 0)
                        int32_t x0_9
                        
                        if ((x21_1 & 0x10) != 0)
                            x0_9 = iswlower_l(wc, *(arg1 + 0x10))
                        
                        if ((x21_1 & 0x10) == 0 || x0_9 == 0)
                            int32_t x0_11
                            
                            if ((x21_1 & 0x20) != 0)
                                x0_11 = iswalpha_l(wc, *(arg1 + 0x10))
                            
                            if ((x21_1 & 0x20) == 0 || x0_11 == 0)
                                int32_t x0_13
                                
                                if ((x21_1 & 0x40) != 0)
                                    x0_13 = iswdigit_l(wc, *(arg1 + 0x10))
                                
                                if ((x21_1 & 0x40) == 0 || x0_13 == 0)
                                    int32_t x0_15
                                    
                                    if ((x21_1 & 0x80) != 0)
                                        x0_15 = iswpunct_l(wc, *(arg1 + 0x10))
                                    
                                    if ((x21_1 & 0x80) == 0 || x0_15 == 0)
                                        int32_t x0_17
                                        
                                        if ((x21_1 & 0x100) != 0)
                                            x0_17 = iswxdigit_l(wc, *(arg1 + 0x10))
                                        
                                        if ((x21_1 & 0x100) == 0 || x0_17 == 0)
                                            if ((x21_1 & 0x200) == 0)
                                                break
                                            
                                            if (iswblank_l(wc, *(arg1 + 0x10)) == 0)
                                                break
        
        x19 = &x19[1]
        
        if (entry_x3 == x19)
            return entry_x3

return x19
