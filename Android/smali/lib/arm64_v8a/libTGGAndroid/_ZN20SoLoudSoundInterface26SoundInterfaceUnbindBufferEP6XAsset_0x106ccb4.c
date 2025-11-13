// 函数: _ZN20SoLoudSoundInterface26SoundInterfaceUnbindBufferEP6XAsset
// 地址: 0x106ccb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* entry_x1
void* result = SoundGetDef(entry_x1)
int64_t* x20 = *(result + 0x28)

if (x20 != 0)
    void* result_1 = result
    SoLoud::Soloud::stopAudioSource(*(arg1 + 8))
    result = (*(*x20 + 0x10))(x20)
    *(result_1 + 0x28) = 0

return result
