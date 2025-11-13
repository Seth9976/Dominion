// 函数: _ZNKSt6__ndk112ctype_bynameIwE5do_isEmw
// 地址: 0x10cfa00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

wint_t entry_wc
int32_t x20

if ((arg2 & 1) != 0)
    x20 = iswspace_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0
    
    if ((arg2 & 2) != 0)
        x20 |= iswprint_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0
else
    x20 = 0
    
    if ((arg2 & 2) != 0)
        x20 |= iswprint_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0

if ((arg2 & 4) == 0)
    if ((arg2 & 8) != 0)
        goto label_10cfae0
    
    goto label_10cfa68

x20 |= iswcntrl_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0

if ((arg2 & 8) != 0)
label_10cfae0:
    x20 |= iswupper_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0
    
    if ((arg2 & 0x10) == 0)
        goto label_10cfa6c
    
    goto label_10cfafc

label_10cfa68:

if ((arg2 & 0x10) == 0)
label_10cfa6c:
    
    if ((arg2 & 0x20) != 0)
        goto label_10cfb18
    
    goto label_10cfa70

label_10cfafc:
x20 |= iswlower_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0

if ((arg2 & 0x20) != 0)
label_10cfb18:
    x20 |= iswalpha_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0
    
    if ((arg2 & 0x40) == 0)
        goto label_10cfa74
    
    goto label_10cfb34

label_10cfa70:

if ((arg2 & 0x40) == 0)
label_10cfa74:
    
    if ((arg2 & 0x80) != 0)
        goto label_10cfb50
    
    goto label_10cfa78

label_10cfb34:
x20 |= iswdigit_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0

if ((arg2 & 0x80) != 0)
label_10cfb50:
    x20 |= iswpunct_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0
    
    if ((arg2 & 0x100) == 0)
        goto label_10cfa7c
    
    goto label_10cfb6c

label_10cfa78:

if ((arg2 & 0x100) != 0)
label_10cfb6c:
    x20 |= iswxdigit_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0
    
    if ((arg2 & 0x200) != 0)
        x20 |= iswblank_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0
else
label_10cfa7c:
    
    if ((arg2 & 0x200) != 0)
        x20 |= iswblank_l(entry_wc, *(arg1 + 0x10)) != 0 ? 1 : 0

return zx.q(x20)
