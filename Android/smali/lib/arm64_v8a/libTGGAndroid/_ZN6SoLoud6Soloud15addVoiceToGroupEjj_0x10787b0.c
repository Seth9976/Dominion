// 函数: _ZN6SoLoud6Soloud15addVoiceToGroupEjj
// 地址: 0x10787b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u>= 0xfffff000)
    int32_t x23_1 = arg2 & 0xfff
    int64_t x19_1 = arg1
    
    if (x23_1 u< *(arg1 + 0x20e48))
        SoLoud::Soloud::lockAudioMutex_internal()
        int64_t x24_1 = *(*(arg1 + 0x20e40) + (zx.q(x23_1) << 3))
        SoLoud::Soloud::unlockAudioMutex_internal()
        
        if (x24_1 != 0)
            if ((SoLoud::Soloud::isValidVoiceHandle(x19_1.d) & 1) != 0)
                uint64_t x23_2 = zx.q(x23_1)
                SoLoud::Soloud::trimVoiceGroup_internal(x19_1.d)
                SoLoud::Soloud::lockAudioMutex_internal()
                int64_t x24_2 = *(arg1 + 0x20e40)
                int32_t* x9_1 = *(x24_2 + (x23_2 << 3))
                uint64_t x8_3 = zx.q(*x9_1)
                int32_t entry_x2
                
                if (x8_3.d u< 2)
                label_107887c:
                    int32_t* x0_7 = operator new[]((1 | zx.q((0x7fffffff & x8_3.d) << 1)) << 2)
                    int32_t x8_5 = **(x24_2 + (x23_2 << 3))
                    uint64_t x8_8
                    
                    if (x8_5 == 0)
                        x8_8 = 0
                    else
                        *x0_7 = x8_5
                        int32_t* x8_6 = *(x24_2 + (x23_2 << 3))
                        
                        if (*x8_6 u>= 2)
                            int64_t i = 1
                            
                            do
                                i += 1
                                x0_7[i] = x8_6[i]
                                x8_6 = *(x24_2 + (x23_2 << 3))
                            while (i u< zx.q(*x8_6))
                        
                        x8_8 = zx.q(*x0_7)
                    
                    x0_7[x8_8] = entry_x2
                    x0_7[zx.q(*x0_7 + 1)] = 0
                    *x0_7 <<= 1
                    void* x0_9 = *(x24_2 + (x23_2 << 3))
                    
                    if (x0_9 != 0)
                        operator delete[](x0_9)
                        x24_2 = *(arg1 + 0x20e40)
                    
                    *(x24_2 + (x23_2 << 3)) = x0_7
                else
                    int64_t x10_1 = 0
                    
                    while (true)
                        int32_t x12_1 = x9_1[1 + x10_1]
                        
                        if (x12_1 == entry_x2)
                            break
                        
                        if (x12_1 == 0)
                            x9_1[x10_1 + 1] = entry_x2
                            *(*(*(arg1 + 0x20e40) + (x23_2 << 3)) + (x10_1 << 2) + 8) = 0
                            break
                        
                        int64_t x12_2 = x10_1 + 2
                        x10_1 += 1
                        
                        if (x12_2 u>= x8_3)
                            goto label_107887c
                SoLoud::Soloud::unlockAudioMutex_internal()
            
            return 0

return 1
