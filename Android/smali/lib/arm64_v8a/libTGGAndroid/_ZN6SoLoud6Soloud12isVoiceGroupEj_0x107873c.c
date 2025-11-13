// 函数: _ZN6SoLoud6Soloud12isVoiceGroupEj
// 地址: 0x107873c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u>= 0xfffff000)
    int32_t x21_1 = entry_x1 & 0xfff
    
    if (x21_1 u< *(arg1 + 0x20e48))
        SoLoud::Soloud::lockAudioMutex_internal()
        int32_t x20_2 = *(*(arg1 + 0x20e40) + (zx.q(x21_1) << 3)) != 0 ? 1 : 0
        SoLoud::Soloud::unlockAudioMutex_internal()
        return zx.q(x20_2)

return 0
