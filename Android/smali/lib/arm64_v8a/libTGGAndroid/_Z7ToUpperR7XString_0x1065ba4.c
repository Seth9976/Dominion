// 函数: _Z7ToUpperR7XString
// 地址: 0x1065ba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg1
char* x9

x9 = x8 == 0 ? &data_793a18 : x8

int32_t x11 = sx.d(*x9)

if ((x11 & 0x80000000) != 0)
    int32_t x10_1 = x11 & 0xff
    void* x9_1
    int32_t x10_2
    
    if ((x10_1 & 0xe0) != 0xc0)
        if ((x11 & 0xf0) == 0xe0)
            x9_1 = &x9[2]
            x10_2 = (0xfffff03f & (x10_1 & 0xf) << 0xc) | (0x3f & zx.d(x9[1])) << 6
            goto label_1065c3c
        
        if ((x10_1 & 0xf8) != 0xf0)
            goto label_1065c54
        
        x9_1 = &x9[3]
        x10_2 = (0xfffff03f & ((0xfffc0fff & (x10_1 & 7) << 0x12) | (0x3f & zx.d(x9[1])) << 0xc))
            | (0x3f & zx.d(x9[2])) << 6
    else
        x9_1 = &x9[1]
        x10_2 = (x10_1 & 0x1f) << 6
    
label_1065c3c:
    
    if ((x10_2 | (zx.d(*x9_1) & 0x3f)) s<= 0x100)
        goto label_1065c54
    
    return 

label_1065c54:
int64_t x21_1 = 0

while (true)
    if (x8 != 0)
        uint32_t x9_6 = zx.d(*x8)
        
        if (x9_6 != 0)
            x9_6 = *(x8 - 8)
        
        if (x21_1 s>= sx.q(x9_6))
            break
    else if (x21_1 s>= 0)
        break
    
    char* x9_7
    
    x9_7 = x8 == 0 ? &data_793a18 : x8
    
    uint32_t x9_8 = zx.d(x9_7[x21_1])
    char x22_1
    
    if (x9_8 - 0xe0 u> 0x1d)
        if (x9_8 - 0x61 u< 0x1a)
            x22_1 = x9_8.b ^ 0x20
        else
            x22_1 = x9_8.b
        
        if (*(x8 - 0xc) s>= 2)
            goto label_1065ce8
    else
        x22_1 = x9_8.b - 0x20
        
        if (*(x8 - 0xc) s>= 2)
        label_1065ce8:
            int32_t x1_1
            
            if (zx.d(*x8) == 0)
                x1_1 = 0
            else
                x1_1 = *(x8 - 8)
            
            sub_10648a8(arg1, x1_1, 1)
            char* x8_1 = *arg1
            int64_t x9_5
            
            if (x8_1 == 0 || zx.d(*x8_1) == 0)
                x9_5 = 0
            else
                x9_5 = sx.q(*(x8_1 - 8))
            
            x8_1[x9_5] = 0
            x8 = *arg1
    
    x8[x21_1] = x22_1
    x8 = *arg1
    x21_1 += 1
