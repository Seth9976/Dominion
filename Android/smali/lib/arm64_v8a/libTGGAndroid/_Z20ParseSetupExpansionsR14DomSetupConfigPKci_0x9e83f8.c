// 函数: _Z20ParseSetupExpansionsR14DomSetupConfigPKci
// 地址: 0x9e83f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t result = strlen(arg2)

if (arg2 != 0)
    size_t result_1 = result
    int128_t v0_1
    int128_t v1_1
    result, v0_1, v1_1 = STokenize::STokenizeIter::ParseStr(arg2)
    int128_t var_80
    v1_1 = var_80
    int128_t var_70
    int128_t var_a0 = var_70
    char* s1_10 = var_a0.q
    int64_t x10_1 = var_a0:8.q
    char* s1_1 = v1_1.q
    int64_t x8_2
    
    if (s1_10 == 0)
        x8_2 = v1_1:8.q
    else
        x8_2 = x10_1
    
    char* s1_12 = s1_10
    char* s1_6
    
    s1_6 = s1_10 == 0 ? s1_1 : s1_10
    
    char* x9_1 = &s1_6[x8_2]
    void* x8_3 = &arg2[result_1]
    int64_t var_e0_1 = x10_1
    int32_t x10_2 = x8_3.d - x9_1.d
    void* x10_3
    char* x24_1
    
    if (x10_2 s< 1)
        x10_3 = nullptr
        x24_1 = nullptr
        int64_t var_90_2 = 0
        int64_t var_88_2 = 0
        
        if (s1_1 != 0)
        label_9e84f8:
            int32_t x19_1 = 0
            int32_t x8_5
            
            x8_5 = arg3 s<= 0xb ? 3 : 1
            
            while (true)
                int64_t i = 0
                char* s1_3 = s1_1
                void* x8_7 = &s1_12[var_e0_1]
                
                do
                    char* s2 = *(i * 0x28 + &data_1124880)
                    int32_t x23_1 = x19_1
                    int64_t n = sx.q(strlen(s2))
                    result = strncasecmp(s1_1, s2, n)
                    
                    if (result.d != 0)
                        x19_1 = x23_1
                    else
                        int32_t x8_10 = *(&data_1124868 + i * 0x28)
                        x19_1 = x23_1 + 1
                        int64_t x20_1 = sx.q(x23_1)
                        *(arg1 + (sx.q(x23_1) << 4) + 0x9c8) = x8_10
                        
                        if (i != 0x11)
                            uint64_t x8_13 = zx.q(x8_10 - 2)
                            
                            if (x8_13.d u> 0x10)
                                pthread_kill(pthread_self(), 6)
                                StringSpan* x0_20
                                Vec2I* x1_6
                                x0_20, x1_6 = XNoReturn()
                                return ToIntPair(x0_20, x1_6) __tailcall
                            
                            int32_t x8_14 = 1
                            
                            switch (x8_13)
                                case 2
                                    x8_14 = x8_5
                                case 3, 7, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10
                                    x8_14 = 0
                                case 4
                                    x8_14 = arg3 s<= 0xd ? 0 : 1
                                case 5, 6
                                    x8_14 = arg3 s> 0xe ? 1 : 0
                                case 8
                                    x8_14 = arg3 s<= 0x14 ? 0 : 1
                            
                            void* s1 = &s1_1[n]
                            void* x23_2 = arg1 + (x20_1 << 4)
                            *(x23_2 + 0x9cc) = x8_14
                            
                            if (strncasecmp(s1, "1E", 2) == 0)
                                *(x23_2 + 0x9cc) = (&data_11236b8)[1].d
                            else if (strncasecmp(s1, "2E", 2) == 0)
                                *(x23_2 + 0x9cc) = (&data_11236c8)[1].d
                            else if (strncasecmp(s1, "12E", 3) == 0)
                                *(x23_2 + 0x9cc) = (&data_11236d8)[1].d
                            
                            var_80.q = 0xa00000000
                            result = ToIntPair(&var_a0, &var_80)
                            *(arg1 + (x20_1 << 4) + 0x9d0) = result
                        else
                            void* x20_2 = arg1 + (x20_1 << 4)
                            *(x20_2 + 0x9cc) = 0
                            
                            if (s1_12 != 0)
                                result = STokenize::STokenizeIter::ParseStr(s1_12)
                                size_t n_1 = var_80:8.q
                                char* s1_8 = var_70.q
                                char* s1_2 = var_80.q
                                size_t n_2
                                
                                if (s1_8 == 0)
                                    n_2 = n_1
                                else
                                    n_2 = var_70:8.q
                                
                                char* s1_4
                                
                                s1_4 = s1_8 == 0 ? s1_2 : s1_8
                                
                                void* x8_12 = &s1_4[n_2]
                                int32_t x9_6 = x8_7.d - x8_12.d
                                void* x22_1
                                void* x27_1
                                
                                if (x9_6 s< 1)
                                label_9e8640:
                                    x27_1 = nullptr
                                    x22_1 = nullptr
                                    
                                    if (s1_2 != 0)
                                    label_9e8754:
                                        
                                        while (true)
                                            result = strncasecmp(s1_2, "Black Market", n_1)
                                            
                                            if (result.d == 0)
                                                *(x20_2 + 0x9cc) |= 1
                                            else
                                                result = strncasecmp(s1_2, "Promo Pack 1", n_1)
                                                
                                                if (result.d == 0)
                                                    *(x20_2 + 0x9cc) |= 2
                                                else
                                                    result = strncasecmp(s1_2, "Promo Pack 2", n_1)
                                                    
                                                    if (result.d == 0)
                                                        *(x20_2 + 0x9cc) |= 4
                                                    else
                                                        result = strncasecmp(s1_2, 
                                                            "Promo Marchland", n_1)
                                                        
                                                        if (result.d == 0)
                                                            *(x20_2 + 0x9cc) |= 8
                                            
                                            if (x27_1 == 0)
                                                break
                                            
                                            result = STokenize::STokenizeIter::ParseStr(x27_1)
                                            n_1 = var_80:8.q
                                            char* s1_9 = var_70.q
                                            s1_2 = var_80.q
                                            size_t n_3
                                            
                                            if (s1_9 == 0)
                                                n_3 = n_1
                                            else
                                                n_3 = var_70:8.q
                                            
                                            char* s1_5
                                            
                                            s1_5 = s1_9 == 0 ? s1_2 : s1_9
                                            
                                            void* x8_22 = &s1_5[n_3]
                                            int64_t x9_13 = x27_1 + x22_1 - x8_22
                                            
                                            if (x9_13.d s< 1)
                                            label_9e8738:
                                                x27_1 = nullptr
                                                x22_1 = nullptr
                                                
                                                if (s1_2 == 0)
                                                    break
                                            else
                                                int32_t x10_8 = 0
                                                int64_t x11_1 = x9_13 & 0xffffffff
                                                void* x12_5 = x8_22
                                                
                                                while (true)
                                                    uint64_t x13_1 = zx.q(*x12_5)
                                                    
                                                    if (x13_1 u> 0x3f)
                                                        break
                                                    
                                                    if ((1 << x13_1 & 0x400130100002601) == 0)
                                                        break
                                                    
                                                    x10_8 += 1
                                                    int64_t temp3_1 = x11_1
                                                    x11_1 -= 1
                                                    x12_5 += 1
                                                    
                                                    if (temp3_1 == 1)
                                                        goto label_9e8738
                                                
                                                uint64_t x10_9 = zx.q(x10_8)
                                                x27_1 = x8_22 + x10_9
                                                x22_1 = x9_13 - x10_9
                                                
                                                if (s1_2 == 0)
                                                    break
                                else
                                    uint64_t x9_7 = zx.q(x9_6)
                                    x27_1 = x8_12
                                    
                                    while (true)
                                        uint64_t x10_4 = zx.q(*x8_12)
                                        
                                        if (x10_4 u> 0x3f)
                                            break
                                        
                                        if ((1 << x10_4 & 0x400130100002601) == 0)
                                            break
                                        
                                        x27_1 += 1
                                        uint64_t temp1_1 = x9_7
                                        x9_7 -= 1
                                        x8_12 += 1
                                        
                                        if (temp1_1 == 1)
                                            goto label_9e8640
                                    
                                    x22_1 = x8_7 - x27_1
                                    
                                    if (s1_2 != 0)
                                        goto label_9e8754
                            
                            s1_1 = s1_3
                            *(x20_2 + 0x9d0) = 0xa00000000
                    
                    i += 1
                while (i != 0x12)
                
                if (x24_1 == 0)
                    break
                
                int128_t v0_2
                int128_t v1_2
                result, v0_2, v1_2 = STokenize::STokenizeIter::ParseStr(x24_1)
                v1_2 = var_80
                var_a0 = var_70
                char* s1_11 = var_a0.q
                int64_t x10_10 = var_a0:8.q
                s1_1 = v1_2.q
                int64_t x8_27
                
                if (s1_11 == 0)
                    x8_27 = v1_2:8.q
                else
                    x8_27 = x10_10
                
                s1_12 = s1_11
                char* s1_7
                
                s1_7 = s1_11 == 0 ? s1_1 : s1_11
                
                char* x9_14 = &s1_7[x8_27]
                void* x8_28 = x24_1 + x10_3
                var_e0_1 = x10_10
                int32_t x10_11 = x8_28.d - x9_14.d
                
                if (x10_11 s< 1)
                    x10_3 = nullptr
                label_9e8538:
                    x24_1 = nullptr
                    int64_t var_90_5 = 0
                    void* var_88_5 = x10_3
                    
                    if (s1_1 == 0)
                        break
                else
                    x10_3 = zx.q(x10_11)
                    x24_1 = x9_14
                    
                    while (true)
                        uint64_t x11_2 = zx.q(*x9_14)
                        
                        if (x11_2 u> 0x3f)
                            break
                        
                        if ((1 << x11_2 & 0x400130100002601) == 0)
                            break
                        
                        x24_1 = &x24_1[1]
                        void* temp2_1 = x10_3
                        x10_3 -= 1
                        x9_14 = &x9_14[1]
                        
                        if (temp2_1 == 1)
                            goto label_9e8538
                    
                    x10_3 = x8_28 - x24_1
                    char* var_90_4 = x24_1
                    void* var_88_4 = x10_3
                    
                    if (s1_1 == 0)
                        break
    else
        x10_3 = zx.q(x10_2)
        x24_1 = x9_1
        
        while (true)
            uint64_t x12_1 = zx.q(*x9_1)
            
            if (x12_1 u> 0x3f || (1 << x12_1 & 0x400130100002601) == 0)
                x10_3 = x8_3 - x24_1
                char* var_90_3 = x24_1
                void* var_88_3 = x10_3
                
                if (s1_1 == 0)
                    goto label_9e8950
                
                goto label_9e84f8
            
            x24_1 = &x24_1[1]
            void* temp0_1 = x10_3
            x10_3 -= 1
            x9_1 = &x9_1[1]
            
            if (temp0_1 == 1)
                break
            
            continue
        
        x24_1 = nullptr
        int64_t var_90_1 = 0
        void* var_88_1 = x10_3
        
        if (s1_1 != 0)
            goto label_9e84f8

label_9e8950:
return result
