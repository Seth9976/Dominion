// 函数: _Z17ParseSetupKingdomiR14DomSetupConfigPKc
// 地址: 0x9e79dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t result = strlen(arg3)

if (arg3 != 0)
    size_t result_1 = result
    int128_t v0_1
    int128_t v1_1
    result, v0_1, v1_1 = STokenize::STokenizeIter::ParseStr(arg3)
    int128_t var_e0
    v1_1 = var_e0
    int128_t var_d0
    int128_t var_80 = var_d0
    size_t n = v1_1:8.q
    char* s1_3 = var_80.q
    char* s1 = v1_1.q
    size_t n_1
    
    if (s1_3 == 0)
        n_1 = n
    else
        n_1 = var_80:8.q
    
    char* s1_1
    
    s1_1 = s1_3 == 0 ? s1 : s1_3
    
    void* x9_2 = &s1_1[n_1]
    void* x8_1 = &arg3[result_1]
    int32_t x10_1 = x8_1.d - x9_2.d
    void* x21_1
    void* x25_1
    
    if (x10_1 s< 1)
    label_9e7a98:
        x25_1 = nullptr
        x21_1 = nullptr
        int64_t var_70_1 = 0
        int64_t var_68_1 = 0
        
        if (s1 != 0)
        label_9e7ac0:
            int32_t x23_1 = 0
            int32_t var_e4_1 = 0
            int128_t* var_f0_1 = &var_80
            
            while (true)
                int32_t x24_1 = x23_1
                result = strncasecmp(s1, "colonies", n)
                
                if (result.d == 0)
                    *(arg2 + 0xbfc) = 1
                    x23_1 = x24_1
                else
                    int32_t x2_2
                    result, x2_2 = strncasecmp(s1, "shelters", n)
                    
                    if (result.d == 0)
                        *(arg2 + 0xc00) = 1
                        x23_1 = x24_1
                    else
                        result = LookupCardByName(s1, n.d, x2_2, 2)
                        
                        if (result.d == 0)
                            x23_1 = x24_1
                        else
                            int32_t x26_1 = result.d
                            result = IsLandscape(result, zx.q(arg1))
                            
                            if (x24_1 s<= 3 && (result.d & 1) != 0)
                                x23_1 = x24_1 + 1
                                *(arg2 + muls.dp.d(x24_1, 0x48) + 0xb0) = zx.o(0)
                                *(arg2 + muls.dp.d(x24_1, 0x48) + 0xa0) = 1
                                *(arg2 + muls.dp.d(x24_1, 0x48) + 0xa4) = x26_1
                                *(arg2 + muls.dp.d(x24_1, 0x48) + 0xa8) = 0
                                __builtin_memset(arg2 + muls.dp.d(x24_1, 0x48) + 0xc0, 0, 0x28)
                                int64_t var_c0
                                
                                if (x26_1 == 0x121c)
                                    __builtin_memset(&var_e0, 0, 0x28)
                                    int64_t var_a0 = 0
                                    int64_t var_98_1 = 0
                                    result =
                                        AddCards(&var_e0, 0xa, arg1, arg2, var_f0_1, 1, &var_a0, 4)
                                    int32_t x8_5 = var_e0.d
                                    
                                    if (x8_5 != 0)
                                        *(arg2 + 0x220) = 1
                                        *(arg2 + 0x224) = x8_5
                                        *(arg2 + 0x228) = 0
                                        int32_t x8_6 = var_e0:4.d
                                        
                                        if (x8_6 != 0)
                                            *(arg2 + 0x230) = 1
                                            *(arg2 + 0x234) = x8_6
                                            *(arg2 + 0x238) = 0
                                            int32_t x8_7 = var_e0:8.d
                                            
                                            if (x8_7 != 0)
                                                *(arg2 + 0x240) = 1
                                                *(arg2 + 0x244) = x8_7
                                                *(arg2 + 0x248) = 0
                                                int32_t x8_8 = var_e0:0xc.d
                                                
                                                if (x8_8 != 0)
                                                    *(arg2 + 0x250) = 1
                                                    *(arg2 + 0x254) = x8_8
                                                    *(arg2 + 0x258) = 0
                                                    int32_t x8_9 = var_d0.d
                                                    
                                                    if (x8_9 != 0)
                                                        *(arg2 + 0x260) = 1
                                                        *(arg2 + 0x264) = x8_9
                                                        *(arg2 + 0x268) = 0
                                                        int32_t x8_10 = var_d0:4.d
                                                        
                                                        if (x8_10 != 0)
                                                            *(arg2 + 0x270) = 1
                                                            *(arg2 + 0x274) = x8_10
                                                            *(arg2 + 0x278) = 0
                                                            int32_t x8_11 = var_d0:8.d
                                                            
                                                            if (x8_11 != 0)
                                                                *(arg2 + 0x280) = 1
                                                                *(arg2 + 0x284) = x8_11
                                                                *(arg2 + 0x288) = 0
                                                                int32_t x8_12 = var_d0:0xc.d
                                                                
                                                                if (x8_12 != 0)
                                                                    *(arg2 + 0x290) = 1
                                                                    *(arg2 + 0x294) = x8_12
                                                                    *(arg2 + 0x298) = 0
                                                                    int32_t x8_13 = var_c0.d
                                                                    
                                                                    if (x8_13 != 0)
                                                                        *(arg2 + 0x2a0) = 1
                                                                        *(arg2 + 0x2a4) = x8_13
                                                                        *(arg2 + 0x2a8) = 0
                                                                        int32_t x8_14 = var_c0:4.d
                                                                        
                                                                        if (x8_14 != 0)
                                                                            *(arg2 + 0x2b0) = 1
                                                                            *(arg2 + 0x2b4) = x8_14
                                                                            *(arg2 + 0x2b8) = 0
                                    
                                    int32_t x8_15 = var_a0.d
                                    
                                    if (x8_15 != 0)
                                        *(arg2 + 0x2d0) = 1
                                        *(arg2 + 0x2d4) = x8_15
                                        *(arg2 + 0x2d8) = 0
                                        int32_t x8_16 = var_a0:4.d
                                        
                                        if (x8_16 != 0)
                                            *(arg2 + 0x2e0) = 1
                                            *(arg2 + 0x2e4) = x8_16
                                            *(arg2 + 0x2e8) = 0
                                            int32_t x8_17 = var_98_1.d
                                            
                                            if (x8_17 != 0)
                                                *(arg2 + 0x2f0) = 1
                                                *(arg2 + 0x2f4) = x8_17
                                                *(arg2 + 0x2f8) = 0
                                                int32_t x8_18 = var_98_1:4.d
                                                
                                                if (x8_18 != 0)
                                                    *(arg2 + 0x300) = 1
                                                    *(arg2 + 0x304) = x8_18
                                                    *(arg2 + 0x308) = 0
                                else if (x26_1 == 0x121a)
                                    result = AddExtraCardData(zx.q(arg1), arg2, 0x121a, var_f0_1)
                                else if (x26_1 != 0xf3a)
                                    __builtin_memset(&var_e0, 0, 0x38)
                                    result =
                                        AddCards(&var_e0, 0xe, arg1, arg2, var_f0_1, 4, nullptr, 0)
                                    int32_t x8_19 = var_e0.d
                                    
                                    if (x8_19 != 0)
                                        *(arg2 + muls.dp.d(x24_1, 0x48) + 0xb0) = x8_19
                                        int32_t x9_5 = var_e0:4.d
                                        
                                        if (x9_5 != 0)
                                            int64_t x8_20 = sx.q(x24_1)
                                            *(arg2 + x8_20 * 0x48 + 0xb4) = x9_5
                                            int32_t x9_6 = var_e0:8.d
                                            
                                            if (x9_6 != 0)
                                                *(arg2 + x8_20 * 0x48 + 0xb8) = x9_6
                                                int32_t x9_7 = var_e0:0xc.d
                                                
                                                if (x9_7 != 0)
                                                    *(arg2 + x8_20 * 0x48 + 0xbc) = x9_7
                                                    int32_t x9_8 = var_d0.d
                                                    
                                                    if (x9_8 != 0)
                                                        *(arg2 + x8_20 * 0x48 + 0xc0) = x9_8
                                                        int32_t x9_9 = var_d0:4.d
                                                        
                                                        if (x9_9 != 0)
                                                            *(arg2 + x8_20 * 0x48 + 0xc4) = x9_9
                                                            int32_t x9_10 = var_d0:8.d
                                                            
                                                            if (x9_10 != 0)
                                                                *(arg2 + x8_20 * 0x48 + 0xc8) = x9_10
                                                                int32_t x9_11 = var_d0:0xc.d
                                                                
                                                                if (x9_11 != 0)
                                                                    *(arg2 + x8_20 * 0x48 + 0xcc) = x9_11
                                                                    int32_t x9_12 = var_c0.d
                                                                    
                                                                    if (x9_12 != 0)
                                                                        *(arg2 + x8_20 * 0x48 + 0xd0) = x9_12
                                                                        int32_t x9_13 = var_c0:4.d
                                                                        
                                                                        if (x9_13 != 0)
                                                                            *(arg2 + x8_20 * 0x48 + 0xd4) = x9_13
                                                                            int32_t var_b8
                                                                            
                                                                            if (var_b8 != 0)
                                                                                *(arg2 + x8_20 * 0x48 + 0xd8) = var_b8
                                                                                int32_t var_b4
                                                                                
                                                                                if (var_b4 != 0)
                                                                                    *(arg2 + x8_20 * 0x48 + 0xdc) = var_b4
                                                                                    int64_t var_b0
                                                                                    int32_t x9_16 = var_b0.d
                                                                                    
                                                                                    if (x9_16 != 0)
                                                                                        *(arg2 + x8_20 * 0x48 + 0xe0) = x9_16
                                                                                        int32_t x9_17 = var_b0:4.d
                                                                                        
                                                                                        if (x9_17 != 0)
                                                                                            *(arg2 + x8_20 * 0x48 + 0xe4) = x9_17
                                else
                                    result = AddExtraCardData(zx.q(arg1), arg2, 0xf3a, var_f0_1)
                            else if (var_e4_1 s> 9)
                                x23_1 = x24_1
                            else
                                void* x8_3 = arg2 + (sx.q(var_e4_1) << 4)
                                *x8_3 = 1
                                *(x8_3 + 4) = x26_1
                                *(x8_3 + 8) = 0
                                result = AddExtraCardData(zx.q(arg1), arg2, zx.q(x26_1), var_f0_1)
                                x23_1 = x24_1
                                var_e4_1 += 1
                
                if (x21_1 == 0)
                    break
                
                int128_t v0_2
                int128_t v1_2
                result, v0_2, v1_2 = STokenize::STokenizeIter::ParseStr(x21_1)
                v1_2 = var_e0
                var_80 = var_d0
                n = v1_2:8.q
                char* s1_4 = var_80.q
                s1 = v1_2.q
                size_t n_2
                
                if (s1_4 == 0)
                    n_2 = n
                else
                    n_2 = var_80:8.q
                
                char* s1_2
                
                s1_2 = s1_4 == 0 ? s1 : s1_4
                
                void* x9_4 = &s1_2[n_2]
                void* x8_4 = x21_1 + x25_1
                int32_t x10_3 = x8_4.d - x9_4.d
                
                if (x10_3 s< 1)
                label_9e7adc:
                    x25_1 = nullptr
                    x21_1 = nullptr
                    int64_t var_70_3 = 0
                    int64_t var_68_3 = 0
                    
                    if (s1 == 0)
                        break
                else
                    uint64_t x10_4 = zx.q(x10_3)
                    x21_1 = x9_4
                    
                    while (true)
                        uint64_t x11_1 = zx.q(*x9_4)
                        
                        if (x11_1 u> 0x3f)
                            break
                        
                        if ((1 << x11_1 & 0x400130100002601) == 0)
                            break
                        
                        x21_1 += 1
                        uint64_t temp1_1 = x10_4
                        x10_4 -= 1
                        x9_4 += 1
                        
                        if (temp1_1 == 1)
                            goto label_9e7adc
                    
                    x25_1 = x8_4 - x21_1
                    void* var_70_4 = x21_1
                    void* var_68_4 = x25_1
                    
                    if (s1 == 0)
                        break
    else
        uint64_t x10_2 = zx.q(x10_1)
        x21_1 = x9_2
        
        while (true)
            uint64_t x12_1 = zx.q(*x9_2)
            
            if (x12_1 u> 0x3f)
                break
            
            if ((1 << x12_1 & 0x400130100002601) == 0)
                break
            
            x21_1 += 1
            uint64_t temp0_1 = x10_2
            x10_2 -= 1
            x9_2 += 1
            
            if (temp0_1 == 1)
                goto label_9e7a98
        
        x25_1 = x8_1 - x21_1
        void* var_70_2 = x21_1
        void* var_68_2 = x25_1
        
        if (s1 != 0)
            goto label_9e7ac0

return result
