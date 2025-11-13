// 函数: _Z33GameClientFreeServerNotificationsv
// 地址: 0x9b69b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetClient()
uint64_t x11 = zx.q(*(result + 0x78f8))

if (x11.d != 0)
    void* x9_1 = *(result + 0x78f0)
    int64_t x11_1 = x9_1 + x11 * 0xc
    
    do
        x9_1 += 0xc
        int32_t x12_1
        
        while (true)
            x12_1 = *(x9_1 - 4)
            
            if (x12_1 u>> 0x10 != 0)
                break
            
            bool cond:0_1 = x9_1 u< x11_1
            x9_1 += 0xc
            
            if (not(cond:0_1))
                goto label_9b6a28
        
        int32_t x11_2 = *(result + 0x7900)
        *(result + 0x7900) = x12_1 & 0xffff
        *(x9_1 - 4) = x11_2
        uint64_t x12_3 = zx.q(*(result + 0x78f8))
        *(result + 0x7904) -= 1
        x11_1 = *(result + 0x78f0) + x12_3 * 0xc
    while (x11_1 u> x9_1)

label_9b6a28:
*(result + 0x78f8) = 0
*(result + 0x7900) = 0
return result
