// 函数: _ZN6SoLoud6Soloud15setDelaySamplesEjj
// 地址: 0x106eedc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg1
uint32_t var_28 = arg2
int32_t var_24 = 0
SoLoud::Soloud::lockAudioMutex_internal()
uint32_t* x0_1 = SoLoud::Soloud::voiceGroupHandleToArray_internal(x20.d)
uint32_t* x8

x8 = x0_1 == 0 ? &var_28 : x0_1

if (*x8 != 0)
    void* x21_1 = &x8[1]
    int32_t i
    
    do
        int32_t x0_3 = SoLoud::Soloud::getVoiceFromHandle_internal(x20.d)
        int32_t entry_x2
        
        if (x0_3 != 0xffffffff)
            *(*(x20 + (sx.q(x0_3) << 3) + 0x98) + 0x1e0) = entry_x2
        i = *x21_1
        x21_1 += 4
    while (i != 0)

return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
