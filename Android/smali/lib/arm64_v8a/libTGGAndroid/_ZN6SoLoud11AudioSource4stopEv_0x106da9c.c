// 函数: _ZN6SoLoud11AudioSource4stopEv
// 地址: 0x106da9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
SoLoud::AudioSource* result = *(entry_x0 + 0x70)

if (result == 0)
    return result

return SoLoud::Soloud::stopAudioSource(result) __tailcall
