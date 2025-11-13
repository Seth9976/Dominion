// 函数: _Z7ToLowerR7XString
// 地址: 0x1065a44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = 0

while (true)
    char* x8_1 = *arg1
    
    if (x8_1 != 0)
        uint32_t x9_2 = zx.d(*x8_1)
        
        if (x9_2 != 0)
            x9_2 = *(x8_1 - 8)
        
        if (x20 s>= sx.q(x9_2))
            return 
    else if (x20 s>= 0)
        return 
    
    char* x9_3
    
    x9_3 = x8_1 == 0 ? &data_793a18 : x8_1
    
    uint32_t x9_4 = zx.d(x9_3[x20])
    char x22_1
    
    if (x9_4 - 0x41 u< 0x1a)
        x22_1 = x9_4.b | 0x20
    else
        x22_1 = x9_4.b
    
    if (*(x8_1 - 0xc) s>= 2)
        int32_t x1_1
        
        if (zx.d(*x8_1) == 0)
            x1_1 = 0
        else
            x1_1 = *(x8_1 - 8)
        
        sub_10648a8(arg1, x1_1, 1)
        char* x8_2 = *arg1
        int64_t x9_1
        
        if (x8_2 == 0 || zx.d(*x8_2) == 0)
            x9_1 = 0
        else
            x9_1 = sx.q(*(x8_2 - 8))
        
        x8_2[x9_1] = 0
        x8_1 = *arg1
    
    x8_1[x20] = x22_1
    x20 += 1
