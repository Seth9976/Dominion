// 函数: _Z16ActiveNumPlayersv
// 地址: 0x9b50f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5068) != 0)
    void* x0_1 = GetClient()
    int32_t x9_1 = *(x0_1 + 0x5068)
    void* x8_3
    uint64_t x9_2
    
    if (x9_1 - 3 u< 2 || x9_1 == 1)
        x8_3 = x0_1 + 0x50a8
        x9_2 = zx.q(*(x8_3 + 0x11b4))
        
        if (x9_2.d s>= 1)
        label_9b5174:
            uint64_t result
            int64_t i_4
            
            if (x9_2.d != 1)
                i_4 = x9_2 & 0xfffffffe
                int32_t x11_1 = 0
                int32_t x12_1 = 0
                int64_t i_3 = i_4
                void* x14_1 = x8_3
                int64_t i
                
                do
                    int32_t x15_1 = *(x14_1 + 0x68)
                    int32_t x16_1 = *(x14_1 + 0x294)
                    x14_1 += 0x458
                    
                    if (x15_1 != 0)
                        x11_1 += 1
                    
                    if (x16_1 != 0)
                        x12_1 += 1
                    
                    i = i_3
                    i_3 -= 2
                while (i != 2)
                result = zx.q(x12_1 + x11_1)
                
                if (i_4 != x9_2)
                    goto label_9b51d0
            else
                i_4 = 0
                result = 0
            label_9b51d0:
                int32_t* x8_5 = x8_3 + i_4 * 0x22c + 0x68
                int64_t i_2 = x9_2 - i_4
                int64_t i_1
                
                do
                    int32_t x10_2 = *x8_5
                    x8_5 = &x8_5[0x8b]
                    
                    if (x10_2 != 0)
                        result = zx.q(result.d + 1)
                    else
                        result = zx.q(result.d)
                    
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            return result
    else
        if (x9_1 != 2)
            pthread_kill(pthread_self(), 6)
            uint64_t x0_5
            int64_t x1
            x0_5, x1 = XNoReturn()
            return PlayerWhoToSeat(x0_5, x1) __tailcall
        
        x8_3 = *(GetClient() + 0x5080) + zx.q(*(x0_1 + 0x506c)) * 0x1338
        x9_2 = zx.q(*(x8_3 + 0x11b4))
        
        if (x9_2.d s>= 1)
            goto label_9b5174

return 0
