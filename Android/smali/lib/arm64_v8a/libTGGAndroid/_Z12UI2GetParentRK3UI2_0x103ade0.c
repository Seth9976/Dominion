// 函数: _Z12UI2GetParentRK3UI2
// 地址: 0x103ade0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*(gUI2 + 8))

if (x11.d != 0)
    void* result = *gUI2
    int64_t x11_1 = result + x11 * 0x19a8
    
    while (true)
        if (zx.d(*(result + 0x19a2)) == 0)
            result += 0x19a8
            
            if (result u>= x11_1)
                break
        else
            int32_t x12_2 = *(result + 0x1970)
            
            if (x12_2 != 0)
                uint64_t x13_1 = 0
                bool cond:0_1
                
                do
                    if (*(result + (x13_1 << 0x20 s>> 0x1e) + 0x1870) == *(arg1 + 0x19a0))
                        if (*(result + 0x1688) == 0)
                            return nullptr
                        
                        return result
                    
                    cond:0_1 = x12_2 != x13_1.d + 1
                    x13_1 = zx.q(x13_1.d + 1)
                while (cond:0_1)
            
            result += 0x19a8
            
            if (x11_1 u<= result)
                break

return 0
