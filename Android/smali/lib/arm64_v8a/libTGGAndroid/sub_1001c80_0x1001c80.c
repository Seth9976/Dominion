// 函数: sub_1001c80
// 地址: 0x1001c80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0xb8)
int64_t x8 = *(arg1 + 0xc0)
void* x20 = arg1
uint32_t x8_6
uint32_t x21

if (x9 u< x8)
    *(x20 + 0xb8) = &x9[1]
    x21 = zx.d(*x9)
    x9 = &x9[1]
    
    if (x9 u>= x8)
    label_1001cf4:
        x8_6 = *(x20 + 0x30)
        
        if (x8_6 != 0)
            arg1 = (*(x20 + 0x10))(*(x20 + 0x28), x20 + 0x38, zx.q(*(x20 + 0x34)))
            void* x9_3
            
            if (arg1.d == 0)
                x8_6 = 0
                *(x20 + 0x30) = 0
                x9_3 = x20 + 0x39
                *(x20 + 0x38) = 0
            else
                x8_6 = zx.d(*(x20 + 0x38))
                x9_3 = &(x20 + 0x38)[sx.q(arg1.d)]
            
            *(x20 + 0xb8) = x20 + 0x39
            *(x20 + 0xc0) = x9_3
    else
        *(x20 + 0xb8) = &x9[1]
        x8_6 = zx.d(*x9)
else if (*(x20 + 0x30) == 0)
    x21 = 0
    
    if (x9 u>= x8)
        goto label_1001cf4
    
    *(x20 + 0xb8) = &x9[1]
    x8_6 = zx.d(*x9)
else
    arg1 = (*(x20 + 0x10))(*(x20 + 0x28), x20 + 0x38, zx.q(*(x20 + 0x34)))
    void* x8_4
    
    if (arg1.d == 0)
        x21 = 0
        *(x20 + 0x30) = 0
        x8_4 = x20 + 0x39
        *(x20 + 0x38) = 0
    else
        x21 = zx.d(*(x20 + 0x38))
        x8_4 = &(x20 + 0x38)[sx.q(arg1.d)]
    
    x9 = x20 + 0x39
    *(x20 + 0xb8) = x9
    *(x20 + 0xc0) = x8_4
    
    if (x9 u>= x8_4)
        goto label_1001cf4
    
    *(x20 + 0xb8) = &x9[1]
    x8_6 = zx.d(*x9)

*arg2 = ((x8_6 u>> 2 & 0x1f) * 0xff u/ 0x1f).b
arg2[1] = ((((0xffff00ff & x21) | (0xff & x8_6) << 8) u>> 5 & 0x1f) * 0xff u/ 0x1f).b
arg2[2] = ((x21 & 0x1f) * 0xff u/ 0x1f).b
