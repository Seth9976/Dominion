// 函数: _Z14ParseSetupBansiR14DomSetupConfigPc
// 地址: 0x9e8b30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* result = strtok(arg3, ",")

if (result != 0)
    int64_t x22_1 = 0
    
    while (true)
        char* x0_1 = trim(result, 0x20)
        int32_t x0_2
        int32_t x2
        x0_2, x2 = strlen(x0_1)
        result = LookupCardByName(x0_1, x0_2, x2, 2)
        
        if (result.d != 0)
            *(arg2 + (x22_1 << 2) + 0xc04) = result.d
            
            if (x22_1 == 0x2bb)
                break
            
            result = strtok(nullptr, ",")
            x22_1 += 1
            
            if (result == 0)
                break
        else
            result = strtok(nullptr, ",")
            
            if (result == 0)
                break

return result
