// 函数: _ZN6SoLoud6Soloud12setLoopPointEjd
// 地址: 0x106ec24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
int32_t entry_x1
int32_t var_28 = entry_x1
int32_t var_24 = 0
SoLoud::Soloud::lockAudioMutex_internal()
int32_t* x0_1 = SoLoud::Soloud::voiceGroupHandleToArray_internal(x19.d)
int32_t* x8

x8 = x0_1 == 0 ? &var_28 : x0_1

if (*x8 != 0)
    void* x20_1 = &x8[1]
    int32_t i
    
    do
        int32_t x0_3 = SoLoud::Soloud::getVoiceFromHandle_internal(x19.d)
        
        if (x0_3 != 0xffffffff)
            *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x1e8) = arg2
        
        i = *x20_1
        x20_1 += 4
    while (i != 0)

return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
