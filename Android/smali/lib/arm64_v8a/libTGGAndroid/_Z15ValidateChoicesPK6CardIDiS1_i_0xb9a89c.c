// 函数: _Z15ValidateChoicesPK6CardIDiS1_i
// 地址: 0xb9a89c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9

if (arg4 s< 1)
    x9 = 0
else
    if (arg2 s< 1)
        return 0
    
    int64_t x8_1 = 0
    uint64_t x11_1 = zx.q(arg2)
    uint64_t x12_1 = zx.q(arg4)
    x9 = 1
    
    do
        int32_t i = *(arg3 + (x8_1 << 2))
        
        if (*arg1 != i)
            int64_t x15_1 = 1
            int64_t x14_1
            
            do
                x14_1 = x15_1
                
                if (x11_1 == x15_1)
                    break
                
                x15_1 = x14_1 + 1
            while (*(arg1 + (x14_1 << 2)) != i)
            
            if (x14_1 u>= x11_1)
                break
        
        x8_1 += 1
        x9 = x8_1 u< x12_1 ? 1 : 0
    while (x8_1 != x12_1)

return zx.q(not.d(x9)) & 1
