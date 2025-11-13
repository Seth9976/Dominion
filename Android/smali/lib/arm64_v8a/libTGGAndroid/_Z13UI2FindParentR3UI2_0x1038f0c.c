// 函数: _Z13UI2FindParentR3UI2
// 地址: 0x1038f0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(gUI2 + 8))

if (x10.d != 0)
    void* result = *gUI2
    int64_t x10_1 = result + x10 * 0x19a8
    
    while (true)
        if (zx.d(*(result + 0x19a2)) == 0)
            result += 0x19a8
            
            if (result u>= x10_1)
                break
        else
            int32_t x11_2 = *(result + 0x1970)
            
            if (x11_2 != 0)
                uint64_t x12_1 = 0
                bool cond:0_1
                
                do
                    if (*(result + (x12_1 << 0x20 s>> 0x1e) + 0x1870) == *(arg1 + 0x19a0))
                        return result
                    
                    cond:0_1 = x11_2 != x12_1.d + 1
                    x12_1 = zx.q(x12_1.d + 1)
                while (cond:0_1)
            
            result += 0x19a8
            
            if (x10_1 u<= result)
                break

pthread_kill(pthread_self(), 6)
return XNoReturn()
