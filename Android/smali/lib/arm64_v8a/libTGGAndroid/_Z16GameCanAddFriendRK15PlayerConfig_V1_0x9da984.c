// 函数: _Z16GameCanAddFriendRK15PlayerConfig_V1
// 地址: 0x9da984
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x14)

if (x8 s> 0x3e7)
    if (x8 - 0x3e8 u>= 2)
        pthread_kill(pthread_self(), 6)
        return GameCanBlock(XNoReturn()) __tailcall
else if (x8 - 2 u>= 2 && x8 != 0)
    if (x8 != 1)
        pthread_kill(pthread_self(), 6)
        return GameCanBlock(XNoReturn()) __tailcall
    
    if (*(GetActiveProfile() + 0x42ac) != *(arg1 + 0x18))
        int32_t x19_1 = *(arg1 + 0x18)
        
        if (*(GetClient() + 0x5028) s>= 1)
            int64_t x20_2 = 0
            int64_t x21_1 = 0
            int64_t x8_4
            
            do
                if (*(GetClient() + x20_2 + 0x2c) == x19_1 && *(GetClient() + x20_2 + 0x3c) == 1)
                    return 0
                
                x21_1 += 1
                x8_4 = sx.q(*(GetClient() + 0x5028))
                x20_2 += 0x20
            while (x21_1 s< x8_4)
        
        return 1

return 0
