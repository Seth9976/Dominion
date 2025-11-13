// 函数: _Z13UTF8SubstringPKcii
// 地址: 0x10663f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg3 + arg2
void** entry_x8
*entry_x8 = &data_793a18

if (x23 s< 1)
    return 

uint32_t i = zx.d(*arg1)
char const* x21_1 = arg1

if (i == 0)
    return 

int32_t x24_1 = 1

do
    uint32_t i_1 = i & 0xff
    
    if ((i & 0x80) != 0)
        if ((i_1 & 0xe0) == 0xc0)
            x21_1[1]
        else if ((i & 0xf0) == 0xe0)
            x21_1[2]
            x21_1[1]
        else if ((i_1 & 0xf8) == 0xf0)
            x21_1[3]
            (0xfffff03f & ((0xfffc0fff & (i_1 & 7) << 0x12) | (0x3f & zx.d(x21_1[1])) << 0xc))
                | (0x3f & zx.d(x21_1[2])) << 6
    
    if (x24_1 - 1 s>= arg2)
        XString::operator+=(entry_x8.d)
        i_1 = zx.d(*x21_1)
        i = i_1
    
    if ((i & 0x80) == 0)
        goto label_10664fc
    
    if ((i_1 & 0xe0) == 0xc0)
        x21_1 = &x21_1[2]
        i = zx.d(*x21_1)
        
        if (x24_1 s>= x23)
            break
    else if ((i_1 & 0xf0) != 0xe0)
        char const* x21_3
        
        if ((i_1 & 0xf8) == 0xf0)
            x21_3 = &x21_1[3]
        else
            x21_3 = x21_1
        
        x21_1 = &x21_3[1]
        i = zx.d(*x21_1)
        
        if (x24_1 s>= x23)
            break
    else
        x21_1 = &x21_1[2]
    label_10664fc:
        x21_1 = &x21_1[1]
        i = zx.d(*x21_1)
        
        if (x24_1 s>= x23)
            break
    
    x24_1 += 1
while (i != 0)
