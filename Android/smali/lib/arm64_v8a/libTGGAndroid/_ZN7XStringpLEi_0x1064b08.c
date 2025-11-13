// 函数: _ZN7XStringpLEi
// 地址: 0x1064b08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = arg1
int32_t entry_x1
char* x8
int32_t x21

if (entry_x1 s>= 0x80)
    if (entry_x1 s< 0x800)
        x21 = 2
        x8 = *result
        
        if (x8 != 0 && zx.d(*x8) != 0)
            goto label_1064b68
        
        goto label_1064bb8
    
    x21 = entry_x1 s>= 0x10000 ? 4 : 3
    
    x8 = *result
    
    if (x8 == 0 || zx.d(*x8) == 0)
        goto label_1064bb8
    
    goto label_1064b68

x21 = 1
x8 = *result
int64_t x8_1
void* x9_3

if (x8 != 0 && zx.d(*x8) != 0)
label_1064b68:
    int32_t x22_1 = *(x8 - 8)
    sub_10648a8(result, x22_1 + x21, 1)
    x8_1 = sx.q(x22_1)
    x9_3 = *result + x8_1
    
    if (entry_x1 u> 0x7f)
        goto label_1064b90
    
    *x9_3 = entry_x1.b
else
label_1064bb8:
    int64_t* x0_2 = XPooledMalloc(x21 + 0x11)
    x0_2[1].d = x21
    *(x0_2 + 0xc) = x21 + 1
    *x0_2 = 0x1fafafafa
    *result = &x0_2[2]
    x8_1 = 0
    x9_3 = &x0_2[2]
    
    if (entry_x1 u> 0x7f)
    label_1064b90:
        
        if (entry_x1 u<= 0x7ff)
            *x9_3 = (entry_x1 u>> 6).b | 0xc0
            *(x9_3 + 1) = 0x80 | (entry_x1 & 0x3f).b
        else if (entry_x1 u>> 0x10 != 0)
            *x9_3 = (entry_x1 u>> 0x12).b | 0xf0
            *(x9_3 + 1) = 0x80 | ((entry_x1 & 0x3f000) u>> 0xc).b
            *(x9_3 + 2) = 0x80 | ((entry_x1 & 0xfc0) u>> 6).b
            *(x9_3 + 3) = 0x80 | (entry_x1 & 0x3f).b
        else
            *x9_3 = (entry_x1 u>> 0xc).b | 0xe0
            *(x9_3 + 1) = 0x80 | ((entry_x1 & 0xfc0) u>> 6).b
            *(x9_3 + 2) = 0x80 | (entry_x1 & 0x3f).b
    else
        *x9_3 = entry_x1.b
(*result)[x8_1 + sx.q(x21)] = 0
return result
