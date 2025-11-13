// 函数: _ZN6SoLoud6Soloud17isVoiceGroupEmptyEj
// 地址: 0x1078ac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1
int32_t x20_2

if (entry_x1 u< 0xfffff000)
    x20_2 = 1
else
    int32_t x22_1 = entry_x1 & 0xfff
    
    if (x22_1 u>= *(arg1 + 0x20e48))
        x20_2 = 1
    else
        SoLoud::Soloud::lockAudioMutex_internal()
        int64_t x23_1 = *(*(arg1 + 0x20e40) + (zx.q(x22_1) << 3))
        SoLoud::Soloud::unlockAudioMutex_internal()
        
        if (x23_1 == 0)
            x20_2 = 1
        else
            SoLoud::Soloud::trimVoiceGroup_internal(arg1.d)
            SoLoud::Soloud::lockAudioMutex_internal()
            x20_2 = *(*(*(arg1 + 0x20e40) + (zx.q(x22_1) << 3)) + 4) == 0 ? 1 : 0
            SoLoud::Soloud::unlockAudioMutex_internal()

return zx.q(x20_2)
