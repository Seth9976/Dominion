// 函数: _Z25GetRecentFriendsNotInGameR9GameSetupP9AccountIDi
// 地址: 0x9b9c00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t result = 0

if (arg3 != 0)
    int32_t x10_1 = *(x0 + 0x5028)
    
    if (x10_1 s>= 1)
        int64_t i = 0
        result = 0
        
        do
            void* x13_1 = x0 + (i << 5)
            
            if (*(x13_1 + 0x3c) - 1 u<= 1)
                uint64_t x14_3 = zx.q(*(arg1 + 0x11ac))
                int32_t j = *(x13_1 + 0x2c)
                int32_t x16_1
                
                if (x14_3.d s>= 1)
                    int64_t x15_1 = 0
                    x16_1 = 1
                    void* __offset(GameSetup, 0x64) x17_1 = arg1 + 0x64
                    
                    while (*(x17_1 - 4) != 1 || *x17_1 != j)
                        x15_1 += 1
                        x16_1 = x15_1 u< x14_3 ? 1 : 0
                        x17_1 += 0x22c
                        
                        if (x14_3 == x15_1)
                            break
                
                if (x14_3.d s< 1 || (x16_1 & 1) == 0)
                    *(arg2 + (sx.q(result.d) << 2)) = j
                    x10_1 = *(x0 + 0x5028)
                    result = zx.q(result.d + 1)
            
            if (result.d == arg3)
                break
            
            i += 1
        while (i s< sx.q(x10_1))

return result
