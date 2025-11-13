// 函数: _ZN20SoLoudSoundInterface27SoundInterfaceDisposeForAppEv
// 地址: 0x106c2e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 8)

if (result != 0)
    SoLoud::Soloud::deinit()
    result = *(entry_x0 + 8)
    
    if (result != 0)
        SoLoud::Soloud::~Soloud()
        result = XPooledFree(*(entry_x0 + 8), 0x21e58)
        *(entry_x0 + 8) = 0

*(entry_x0 + 0x10) = 0
return result
