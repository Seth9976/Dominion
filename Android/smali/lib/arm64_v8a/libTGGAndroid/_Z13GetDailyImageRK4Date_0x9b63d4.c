// 函数: _Z13GetDailyImageRK4Date
// 地址: 0x9b63d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()

for (Date* i = *(*(x0 + 0x75d8) + ((((0xffff00ff & zx.q(*arg1 << 0x10))
        | zx.q(zx.d((*(arg1 + 4)).b) << 8) | zx.q(*(arg1 + 8))) & zx.q(*(x0 + 0x75e0))) << 3)); i != 0; 
        i = *(i + 0x28))
    if ((operator!=(arg1, i) & 1) == 0)
        uint64_t x19_1 = zx.q(*(i + 0x10))
        
        if (x19_1.d == 0)
            break
        
        void* x0_3 = GetActiveProfile()
        
        for (int32_t* j = *(*(x0_3 + 0x7740)
                + ((zx.q(*(x0_3 + 0x7748)) & (zx.q(x19_1.d s>> 4) | x19_1)) << 3)); j != 0; 
                j = *(j + 0x20))
            if (x19_1.d == *j)
                int32_t x9_3 = j[2]
                
                if (x9_3 == 1)
                    return 0xf
                
                if (x9_3 == 4)
                    return 6
                
                if (x9_3 == 3)
                    return 0xb
                
                int32_t x10_3 = j[3]
                int32_t x11_1 = j[4]
                int32_t x9_4
                
                x9_4 = x10_3 s> x11_1 ? x10_3 : x11_1
                
                if (x9_4 u< 2)
                    int32_t x8_7 = j[5]
                    
                    if (x8_7 u< 2)
                        return 2
                    
                    if (x8_7 - 2 u< 9 && (0x125 u>> (x8_7 - 2) & 1) != 0)
                        return zx.q(*(&data_7a7838 + (sx.q(x8_7 - 2) << 2)))
                else if (x10_3 s>= x11_1)
                    if (x9_4 - 2 u< 9 && (0x125 u>> (x9_4 - 2) & 1) != 0)
                        return zx.q(*(&data_7a77f0 + (sx.q(x9_4 - 2) << 2)))
                else if (x9_4 - 2 u< 9 && (0x125 u>> (x9_4 - 2) & 1) != 0)
                    return zx.q(*(&data_7a7814 + (sx.q(x9_4 - 2) << 2)))
                
                pthread_kill(pthread_self(), 6)
                return GetActiveGameDate(XNoReturn()) __tailcall
        
        return 1

return 0
