// 函数: _ZNKSt6__ndk112ctype_bynameIwE10do_scan_isEmPKwS3_
// 地址: 0x10cfd14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wchar_t const* x19 = arg3
wchar_t* entry_x3

if (arg3 != entry_x3)
    int32_t x21_1 = arg2.d
    
    while (true)
        wchar_t const wc = *x19
        
        if ((x21_1 & 1) != 0 && iswspace_l(wc, *(arg1 + 0x10)) != 0)
            break
        
        if ((x21_1 & 2) != 0 && iswprint_l(wc, *(arg1 + 0x10)) != 0)
            break
        
        if ((x21_1 & 4) != 0 && iswcntrl_l(wc, *(arg1 + 0x10)) != 0)
            break
        
        if ((x21_1 & 8) != 0 && iswupper_l(wc, *(arg1 + 0x10)) != 0)
            break
        
        if ((x21_1 & 0x10) != 0 && iswlower_l(wc, *(arg1 + 0x10)) != 0)
            break
        
        if ((x21_1 & 0x20) != 0 && iswalpha_l(wc, *(arg1 + 0x10)) != 0)
            break
        
        if ((x21_1 & 0x40) != 0 && iswdigit_l(wc, *(arg1 + 0x10)) != 0)
            break
        
        if ((x21_1 & 0x80) != 0 && iswpunct_l(wc, *(arg1 + 0x10)) != 0)
            break
        
        if ((x21_1 & 0x100) != 0 && iswxdigit_l(wc, *(arg1 + 0x10)) != 0)
            break
        
        if ((x21_1 & 0x200) != 0 && iswblank_l(wc, *(arg1 + 0x10)) != 0)
            break
        
        x19 = &x19[1]
        
        if (entry_x3 == x19)
            return entry_x3

return x19
