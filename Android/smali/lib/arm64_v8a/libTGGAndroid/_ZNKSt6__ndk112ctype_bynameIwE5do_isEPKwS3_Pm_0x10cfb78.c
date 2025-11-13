// 函数: _ZNKSt6__ndk112ctype_bynameIwE5do_isEPKwS3_Pm
// 地址: 0x10cfb78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wchar_t const* x19 = arg2

if (arg2 == arg3)
    return x19

int64_t* entry_x3
int64_t* x21_1 = entry_x3

do
    uint64_t x23_1 = zx.q(*x19)
    
    if (x23_1.d u<= 0x7f)
        *x21_1 = *(&data_878ac0 + (x23_1 << 3))
    else
        *x21_1 = 0
        
        if (iswspace_l(x23_1.d, *(arg1 + 0x10)) != 0)
            *x21_1 |= 1
        
        if (iswprint_l(x23_1.d, *(arg1 + 0x10)) != 0)
            *x21_1 |= 2
        
        if (iswcntrl_l(x23_1.d, *(arg1 + 0x10)) != 0)
            *x21_1 |= 4
        
        if (iswupper_l(x23_1.d, *(arg1 + 0x10)) != 0)
            *x21_1 |= 8
        
        if (iswlower_l(x23_1.d, *(arg1 + 0x10)) != 0)
            *x21_1 |= 0x10
        
        if (iswalpha_l(x23_1.d, *(arg1 + 0x10)) != 0)
            *x21_1 |= 0x20
        
        if (iswdigit_l(x23_1.d, *(arg1 + 0x10)) != 0)
            *x21_1 |= 0x40
        
        if (iswpunct_l(x23_1.d, *(arg1 + 0x10)) != 0)
            *x21_1 |= 0x80
        
        if (iswxdigit_l(x23_1.d, *(arg1 + 0x10)) != 0)
            *x21_1 |= 0x100
        
        if (iswblank_l(x23_1.d, *(arg1 + 0x10)) != 0)
            *x21_1 |= 0x200
    
    x19 = &x19[1]
    x21_1 = &x21_1[1]
while (arg3 != x19)

return arg3
