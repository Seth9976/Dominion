// 函数: _Z12SpineDisposev
// 地址: 0xfab3fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *gSpine

if (result != 0)
    uint64_t x8_1 = zx.q(*(gSpine + 8))
    
    if (x8_1.d != 0)
        int64_t x8_2 = result + x8_1 * 0x28
        void* result_1 = result
        
        while (true)
            int32_t x10_3 = *(result_1 + 0x20)
            
            if (x10_3 u>> 0x10 != 0)
                *(result_1 + 0x20) = *(gSpine + 0x10)
                result_1 += 0x28
                int32_t x10_2 = *(gSpine + 0x14) - 1
                *(gSpine + 0x10) = x10_3 & 0xffff
                *(gSpine + 0x14) = x10_2
                
                if (x8_2 u<= result_1)
                    break
            else
                result_1 += 0x28
                
                if (result_1 u>= x8_2)
                    break
    
    *(gSpine + 8) = 0
    *(gSpine + 0x10) = 0
    result = XFree(result)
    *(gSpine + 0x20) = 0
    *(gSpine + 8) = 0
    *(gSpine + 0x10) = 0
    *gSpine = 0

return result
