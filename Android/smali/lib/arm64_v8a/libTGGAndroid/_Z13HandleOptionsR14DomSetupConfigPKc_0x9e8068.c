// 函数: _Z13HandleOptionsR14DomSetupConfigPKc
// 地址: 0x9e8068
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t result = strlen(arg2)

if (arg2 != 0)
    size_t result_1 = result
    int128_t v0_1
    int128_t v1_1
    result, v0_1, v1_1 = STokenize::STokenizeIter::ParseStr(arg2)
    int128_t var_60
    int128_t var_90 = var_60
    int128_t var_50
    int128_t var_80 = var_50
    void* x9_1 = var_80.q
    void* x8_1 = var_90.q
    void* x10_1
    
    if (x9_1 == 0)
        x10_1 = &var_90 | 8
    else
        x10_1 = &var_80:8
    
    void* x9_2
    
    x9_2 = x9_1 == 0 ? x8_1 : x9_1
    
    void* x10_3 = x9_2 + *x10_1
    void* x9_3 = &arg2[result_1]
    int32_t x11_2 = x9_3.d - x10_3.d
    void* x20_1
    void* x21_1
    
    if (x11_2 s< 1)
    label_9e8124:
        x21_1 = nullptr
        x20_1 = nullptr
        int64_t var_70_1 = 0
        int64_t var_68_1 = 0
        
        if (x8_1 != 0)
        label_9e8168:
            
            while (true)
                result = HandleOption(arg1, &var_90)
                
                if (x20_1 == 0)
                    break
                
                int128_t v0_2
                int128_t v1_2
                result, v0_2, v1_2 = STokenize::STokenizeIter::ParseStr(x20_1)
                var_90 = var_60
                var_80 = var_50
                void* x9_4 = var_80.q
                void* x8_2 = var_90.q
                void* x10_5
                
                if (x9_4 == 0)
                    x10_5 = &var_90 | 8
                else
                    x10_5 = &var_80:8
                
                void* x9_5
                
                x9_5 = x9_4 == 0 ? x8_2 : x9_4
                
                void* x10_7 = x9_5 + *x10_5
                void* x9_6 = x20_1 + x21_1
                int32_t x11_4 = x9_6.d - x10_7.d
                
                if (x11_4 s< 1)
                label_9e8150:
                    x21_1 = nullptr
                    x20_1 = nullptr
                    int64_t var_70_3 = 0
                    int64_t var_68_3 = 0
                    
                    if (x8_2 == 0)
                        break
                else
                    uint64_t x11_5 = zx.q(x11_4)
                    x20_1 = x10_7
                    
                    while (true)
                        uint64_t x12_1 = zx.q(*x10_7)
                        
                        if (x12_1 u> 0x3f)
                            break
                        
                        if ((1 << x12_1 & 0x400130100002601) == 0)
                            break
                        
                        x20_1 += 1
                        uint64_t temp1_1 = x11_5
                        x11_5 -= 1
                        x10_7 += 1
                        
                        if (temp1_1 == 1)
                            goto label_9e8150
                    
                    x21_1 = x9_6 - x20_1
                    void* var_70_4 = x20_1
                    void* var_68_4 = x21_1
                    
                    if (x8_2 == 0)
                        break
    else
        uint64_t x11_3 = zx.q(x11_2)
        x20_1 = x10_3
        
        while (true)
            uint64_t x13_1 = zx.q(*x10_3)
            
            if (x13_1 u> 0x3f)
                break
            
            if ((1 << x13_1 & 0x400130100002601) == 0)
                break
            
            x20_1 += 1
            uint64_t temp0_1 = x11_3
            x11_3 -= 1
            x10_3 += 1
            
            if (temp0_1 == 1)
                goto label_9e8124
        
        x21_1 = x9_3 - x20_1
        void* var_70_2 = x20_1
        void* var_68_2 = x21_1
        
        if (x8_1 != 0)
            goto label_9e8168

return result
