// 函数: _Z9FindOrAddR7CardIDsPK11BuyableCardii
// 地址: 0xbe8f60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

int32_t x22_1 = arg4 & 0x20000
int64_t x21_1 = 0
int32_t x23_1

x23_1 = x22_1 == 0 ? 0x10000 : 0x40000

uint64_t x24_1 = zx.q(arg3)

while (true)
    void* x9_1 = arg2 + (x21_1 << 3)
    uint64_t x8_1 = zx.q(*(arg1 + 0xc80))
    int32_t x10_1 = *x9_1
    int32_t x9_2
    
    if ((zx.d(*(x9_1 + 4)) & 1) == 0)
        x9_2 = x22_1
    else
        x9_2 = x23_1
    
    CardIDs& x11_2 = arg1
    
    if (x8_1.d s< 1)
    label_be8fa4:
        operator+=(arg1, zx.q(x10_1) | zx.q(x9_2))
        x21_1 += 1
        
        if (x21_1 == x24_1)
            break
    else
        int32_t x12_1
        
        while (true)
            x12_1 = *x11_2
            
            if ((x12_1 & 0xffff0000) == x10_1)
                break
            
            uint64_t temp0_1 = x8_1
            x8_1 -= 1
            x11_2 += 4
            
            if (temp0_1 == 1)
                goto label_be8fa4
        
        *x11_2 = x12_1 | x9_2
        x21_1 += 1
        
        if (x21_1 == x24_1)
            break
