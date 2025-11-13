// 函数: _Z17MCTS_AdjustPriorsRK7DomGame9PlayerWho11DomCardEnumf
// 地址: 0x9fe07c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *((sx.q(arg2) << 3) + 0x14a7240)
int64_t x9 = sx.q(*(x8_1 + 0xd8))

if (x9.d s< 1)
    return 

void* x8_2 = *(x8_1 + 0xd0)
int64_t x10_1 = 0

if (arg3 == 0)
    float* x11_2 = x8_2 + 0x54
    
    while (true)
        if (x11_2[-0xf] == 0)
            *x11_2 = *x11_2 + arg4
            return 
        
        if (**(x11_2 - 0x44) == 0)
            break
        
        x10_1 += 1
        x11_2 = &x11_2[0x1c]
        
        if (x10_1 s>= x9)
            return 
else
    int32_t* x11_1 = x8_2 + 0x18
    
    while (*x11_1 == 0 || **(x11_1 - 8) != arg3)
        x10_1 += 1
        x11_1 = &x11_1[0x1c]
        
        if (x10_1 s>= x9)
            return 

void* x8_3 = x8_2 + (x10_1 & 0xffffffff) * 0x70
*(x8_3 + 0x54) = *(x8_3 + 0x54) + arg4
