// 函数: _Z19ParseSetupModifiersR14DomSetupConfigPc
// 地址: 0x9e8bd0
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
    size_t n = v1_1:8.q
    char* s1_3 = var_a0.q
    char* s1 = v1_1.q
    size_t n_1
    
    if (s1_3 == 0)
        n_1 = n
    else
        n_1 = var_a0:8.q
    
    char* s1_1
    
    s1_1 = s1_3 == 0 ? s1 : s1_3
    
    void* x9_2 = &s1_1[n_1]
    void* x8_1 = &arg2[result_1]
    int32_t x10_1 = x8_1.d - x9_2.d
    void* x20_1
    void* x28_1
    
    if (x10_1 s< 1)
    label_9e8c88:
        x28_1 = nullptr
        x20_1 = nullptr
        int64_t var_90_1 = 0
        int64_t var_88_1 = 0
        
        if (s1 != 0)
        label_9e8ce8:
            
            while (true)
                if (strncasecmp(s1, "Landscapes", n) == 0)
                    var_80.q = 0x200000000
                    result = ToIntPair(&var_a0, &var_80)
                    *(arg1 + 0xbc8) = result
                else if (strncasecmp(s1, "Events", n) == 0)
                    var_80.q = 0x200000000
                    result = ToIntPair(&var_a0, &var_80)
                    *(arg1 + 0xbd0) = result
                else if (strncasecmp(s1, "Landmarks", n) == 0)
                    var_80.q = 0x200000000
                    result = ToIntPair(&var_a0, &var_80)
                    *(arg1 + 0xbd8) = result
                else if (strncasecmp(s1, "Projects", n) == 0)
                    var_80.q = 0x200000000
                    result = ToIntPair(&var_a0, &var_80)
                    *(arg1 + 0xbe0) = result
                else if (strncasecmp(s1, "Ways", n) == 0)
                    var_80.q = 0x100000000
                    result = ToIntPair(&var_a0, &var_80)
                    *(arg1 + 0xbe8) = result
                else if (strncasecmp(s1, "Traits", n) == 0)
                    var_80.q = 0x200000000
                    result = ToIntPair(&var_a0, &var_80)
                    *(arg1 + 0xbf0) = result
                else
                    result = strncasecmp(s1, "Ally", n)
                    
                    if (result.d == 0)
                        *(arg1 + 0xbf8) = 1
                    else
                        result = strncasecmp(s1, "Prophecy", n)
                        
                        if (result.d == 0)
                            *(arg1 + 0xbf9) = 1
                        else
                            result = strncasecmp(s1, "Colonies", n)
                            
                            if (result.d == 0)
                                *(arg1 + 0xbfc) = 1
                            else
                                result = strncasecmp(s1, "NoColonies", n)
                                
                                if (result.d == 0)
                                    *(arg1 + 0xbfc) = 2
                                else
                                    result = strncasecmp(s1, "Shelters", n)
                                    
                                    if (result.d == 0)
                                        *(arg1 + 0xc00) = 1
                                    else
                                        result = strncasecmp(s1, "NoShelters", n)
                                        
                                        if (result.d == 0)
                                            *(arg1 + 0xc00) = 2
                                        else
                                            result = strncasecmp(s1, "Attacks", n)
                                            
                                            if (result.d == 0)
                                                *(arg1 + 0x16f4) =
                                                    (*(arg1 + 0x16f4) & 0xfffffffc) | 1
                                            else
                                                result = strncasecmp(s1, "NoAttacks", n)
                                                
                                                if (result.d == 0)
                                                    *(arg1 + 0x16f4) =
                                                        (*(arg1 + 0x16f4) & 0xfffffff8) | 2
                                                else
                                                    result = strncasecmp(s1, "AttackReaction", n)
                                                    
                                                    if (result.d == 0)
                                                        *(arg1 + 0x16f4) =
                                                            (*(arg1 + 0x16f4) & 0xfffffff9) | 4
                                                    else
                                                        result = strncasecmp(s1, "ExtraActions", n)
                                                        
                                                        if (result.d == 0)
                                                            *(arg1 + 0x16f4) |= 8
                                                        else
                                                            result =
                                                                strncasecmp(s1, "ExtraCards", n)
                                                            
                                                            if (result.d == 0)
                                                                *(arg1 + 0x16f4) |= 0x10
                                                            else
                                                                result = strncasecmp(s1, "ExtraBuys", n)
                                                                
                                                                if (result.d == 0)
                                                                    *(arg1 + 0x16f4) |= 0x20
                                                                else
                                                                    result = strncasecmp(s1, "Trashing", n)
                                                                    
                                                                    if (result.d == 0)
                                                                        *(arg1 + 0x16f4) |= 0x40
                
                if (x20_1 == 0)
                    break
                
                int128_t v0_2
                int128_t v1_2
                result, v0_2, v1_2 = STokenize::STokenizeIter::ParseStr(x20_1)
                v1_2 = var_80
                var_a0 = var_70
                n = v1_2:8.q
                char* s1_4 = var_a0.q
                s1 = v1_2.q
                size_t n_2
                
                if (s1_4 == 0)
                    n_2 = n
                else
                    n_2 = var_a0:8.q
                
                char* s1_2
                
                s1_2 = s1_4 == 0 ? s1 : s1_4
                
                void* x9_4 = &s1_2[n_2]
                void* x8_13 = x20_1 + x28_1
                int32_t x10_3 = x8_13.d - x9_4.d
                
                if (x10_3 s< 1)
                label_9e8ccc:
                    x28_1 = nullptr
                    x20_1 = nullptr
                    int64_t var_90_3 = 0
                    int64_t var_88_3 = 0
                    
                    if (s1 == 0)
                        break
                else
                    uint64_t x10_4 = zx.q(x10_3)
                    x20_1 = x9_4
                    
                    while (true)
                        uint64_t x11_1 = zx.q(*x9_4)
                        
                        if (x11_1 u> 0x3f)
                            break
                        
                        if ((1 << x11_1 & 0x400130100002601) == 0)
                            break
                        
                        x20_1 += 1
                        uint64_t temp1_1 = x10_4
                        x10_4 -= 1
                        x9_4 += 1
                        
                        if (temp1_1 == 1)
                            goto label_9e8ccc
                    
                    x28_1 = x8_13 - x20_1
                    void* var_90_4 = x20_1
                    void* var_88_4 = x28_1
                    
                    if (s1 == 0)
                        break
    else
        uint64_t x10_2 = zx.q(x10_1)
        x20_1 = x9_2
        
        while (true)
            uint64_t x12_1 = zx.q(*x9_2)
            
            if (x12_1 u> 0x3f)
                break
            
            if ((1 << x12_1 & 0x400130100002601) == 0)
                break
            
            x20_1 += 1
            uint64_t temp0_1 = x10_2
            x10_2 -= 1
            x9_2 += 1
            
            if (temp0_1 == 1)
                goto label_9e8c88
        
        x28_1 = x8_1 - x20_1
        void* var_90_2 = x20_1
        void* var_88_2 = x28_1
        
        if (s1 != 0)
            goto label_9e8ce8

return result
