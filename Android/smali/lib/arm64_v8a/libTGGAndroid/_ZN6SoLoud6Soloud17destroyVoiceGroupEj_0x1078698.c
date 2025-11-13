// 函数: _ZN6SoLoud6Soloud17destroyVoiceGroupEj
// 地址: 0x1078698
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u>= 0xfffff000)
    int32_t x21_1 = entry_x1 & 0xfff
    
    if (x21_1 u< *(arg1 + 0x20e48))
        SoLoud::Soloud::lockAudioMutex_internal()
        int64_t x22_1 = *(*(arg1 + 0x20e40) + (zx.q(x21_1) << 3))
        SoLoud::Soloud::unlockAudioMutex_internal()
        
        if (x22_1 != 0)
            uint64_t x21_2 = zx.q(x21_1)
            SoLoud::Soloud::lockAudioMutex_internal()
            int64_t x8_3 = *(arg1 + 0x20e40)
            void* x0_3 = *(x8_3 + (x21_2 << 3))
            
            if (x0_3 != 0)
                operator delete[](x0_3)
                x8_3 = *(arg1 + 0x20e40)
            
            *(x8_3 + (x21_2 << 3)) = 0
            SoLoud::Soloud::unlockAudioMutex_internal()
            return 0

return 1
