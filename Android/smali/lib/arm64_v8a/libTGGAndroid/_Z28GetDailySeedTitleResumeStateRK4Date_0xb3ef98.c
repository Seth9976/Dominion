// 函数: _Z28GetDailySeedTitleResumeStateRK4Date
// 地址: 0xb3ef98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 == 0)
    return 0

int64_t result = GetDailyImage(arg1)

if (result.d == 0)
    return result

if (result.d != 1)
    return 3

if (*arg1 != 0)
    void* x0 = GetClient()
    
    for (Date* i = *(*(x0 + 0x75d8) + ((((0xffff00ff & zx.q(*arg1 << 0x10))
            | zx.q(zx.d((*(arg1 + 4)).b) << 8) | zx.q(*(arg1 + 8))) & zx.q(*(x0 + 0x75e0))) << 3)); 
            i != 0; i = *(i + 0x28))
        if ((operator!=(arg1, i) & 1) == 0)
            int32_t x0_5 = GetDailyGameIndex(zx.q(*(i + 0x10)))
            
            if (x0_5 != 0)
                void* x0_6 = GetClient()
                
                if (*(x0_6 + 0x63d8) != 1 || *(x0_6 + 0x63dc) != x0_5)
                    *(x0_6 + 0x63d8) = 1
                    *(x0_6 + 0x63dc) = x0_5
                    LocalGameLoadSetup(x0_6 + 0x63d8, x0_6 + 0x63e0)
                
                if (*(x0_6 + 0x6404) != 2)
                    return 2
            
            break

return 1
