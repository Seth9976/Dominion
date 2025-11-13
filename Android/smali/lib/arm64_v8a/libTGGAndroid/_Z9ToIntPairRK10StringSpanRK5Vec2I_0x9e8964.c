// 函数: _Z9ToIntPairRK10StringSpanRK5Vec2I
// 地址: 0x9e8964
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *arg1

if (x20 != 0)
    int64_t x21_1 = *(arg1 + 8)
    STokenize::STokenizeIter::ParseStr(x20)
    char* nptr_1
    char* nptr = nptr_1
    int64_t var_68
    char* nptr_4
    int64_t var_58
    int64_t x10_2
    
    x10_2 = nptr_4 == 0 ? var_68 : var_58
    
    char* nptr_2
    
    nptr_2 = nptr_4 == 0 ? nptr : nptr_4
    
    char* x10_3 = &nptr_2[x10_2]
    int64_t x9_2 = x20 + x21_1
    int32_t x11_1 = x9_2.d - x10_3.d
    char* x20_1
    void* x21_2
    
    if (x11_1 s< 1)
    label_9e8a08:
        x20_1 = nullptr
        x21_2 = nullptr
        
        if (var_68 != 0)
        label_9e8a20:
            
            if (nptr != 0)
                uint64_t x26_1 = 0
                uint64_t result
                uint64_t x25_1
                
                while (true)
                    if (zx.d(*nptr) - 0x30 u> 9)
                        x25_1 = zx.q(x26_1.d)
                    label_9e8aec:
                        
                        if (x25_1.d != 2)
                            break
                    else
                        x25_1 = x26_1 + 1
                        *(&result + (x26_1 << 2)) = atoi(nptr)
                        
                        if (x25_1 != 2)
                            if (x20_1 != 0)
                                STokenize::STokenizeIter::ParseStr(x20_1)
                                nptr = nptr_1
                                int64_t x10_5
                                
                                x10_5 = nptr_4 == 0 ? var_68 : var_58
                                
                                char* nptr_3
                                
                                nptr_3 = nptr_4 == 0 ? nptr : nptr_4
                                
                                char* x10_6 = &nptr_3[x10_5]
                                int64_t x9_4 = x20_1 + x21_2
                                int32_t x11_3 = x9_4.d - x10_6.d
                                
                                if (x11_3 s< 1)
                                label_9e8ac4:
                                    x20_1 = nullptr
                                    x21_2 = nullptr
                                    
                                    if (var_68 != 0)
                                    label_9e8adc:
                                        x26_1 = x25_1
                                        
                                        if (nptr != 0)
                                            continue
                                else
                                    uint64_t x11_4 = zx.q(x11_3)
                                    x20_1 = x10_6
                                    
                                    while (true)
                                        uint64_t x12_1 = zx.q(*x10_6)
                                        
                                        if (x12_1 u> 0x3f)
                                            break
                                        
                                        if ((1 << x12_1 & 0x400130100002601) == 0)
                                            break
                                        
                                        x20_1 = &x20_1[1]
                                        uint64_t temp1_1 = x11_4
                                        x11_4 -= 1
                                        x10_6 = &x10_6[1]
                                        
                                        if (temp1_1 == 1)
                                            goto label_9e8ac4
                                    
                                    x21_2 = x9_4 - x20_1
                                    
                                    if (var_68 != 0)
                                        goto label_9e8adc
                            
                            goto label_9e8aec
                    
                    return result
                
                if (x25_1.d == 1)
                    int32_t x0_3 = result.d
                    return zx.q(x0_3) | zx.q(x0_3) << 0x20
    else
        uint64_t x11_2 = zx.q(x11_1)
        x20_1 = x10_3
        
        while (true)
            uint64_t x13_1 = zx.q(*x10_3)
            
            if (x13_1 u> 0x3f)
                break
            
            if ((1 << x13_1 & 0x400130100002601) == 0)
                break
            
            x20_1 = &x20_1[1]
            uint64_t temp0_1 = x11_2
            x11_2 -= 1
            x10_3 = &x10_3[1]
            
            if (temp0_1 == 1)
                goto label_9e8a08
        
        x21_2 = x9_2 - x20_1
        
        if (var_68 != 0)
            goto label_9e8a20

return *arg2
