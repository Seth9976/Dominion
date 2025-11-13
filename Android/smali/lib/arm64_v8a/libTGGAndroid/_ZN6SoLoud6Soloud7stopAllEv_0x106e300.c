// 函数: _ZN6SoLoud6Soloud7stopAllEv
// 地址: 0x106e300
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SoLoud::Soloud::lockAudioMutex_internal()
void* entry_x0

if (*(entry_x0 + 0x34) s>= 1)
    int32_t i = 0
    
    do
        SoLoud::Soloud::stopVoice_internal(entry_x0.d)
        i += 1
    while (i s< *(entry_x0 + 0x34))

return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
