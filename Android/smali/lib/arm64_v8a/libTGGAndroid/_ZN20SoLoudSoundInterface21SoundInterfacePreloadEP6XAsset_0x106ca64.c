// 函数: _ZN20SoLoudSoundInterface21SoundInterfacePreloadEP6XAsset
// 地址: 0x106ca64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* entry_x1
SoLoud::Soloud* x0_1 = SoundGetDef(entry_x1)

if (*(x0_1 + 0x28) != 0)
    return x0_1

int64_t x0_2 = SoLoudLoadSound(x0_1, entry_x1)
*(x0_1 + 0x28) = x0_2
return x0_2
