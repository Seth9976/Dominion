// 函数: _ZN7XString12SetAsciiCharEic
// 地址: 0x1064e78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg1

if (*(x8 - 0xc) s>= 2)
    char** x21_1 = arg1
    int32_t x1
    
    if (zx.d(*x8) == 0)
        x1 = 0
    else
        x1 = *(x8 - 8)
    
    sub_10648a8(x21_1, x1, 1)
    char* x8_1 = *x21_1
    int64_t x9_3
    
    if (x8_1 == 0 || zx.d(*x8_1) == 0)
        x9_3 = 0
    else
        x9_3 = sx.q(*(x8_1 - 8))
    
    x8_1[x9_3] = 0
    x8 = *x21_1

char entry_x2
x8[sx.q(arg2.d)] = entry_x2
