// 函数: _ZN6SoLoud6Soloud4stopEj
// 地址: 0x106e200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
int32_t entry_x1
int32_t var_18 = entry_x1
int32_t var_14 = 0
SoLoud::Soloud::lockAudioMutex_internal()
int32_t* x0_1 = SoLoud::Soloud::voiceGroupHandleToArray_internal(x19.d)
int32_t* x8

x8 = x0_1 == 0 ? &var_18 : x0_1

if (*x8 != 0)
    void* x20_1 = &x8[1]
    int32_t i
    
    do
        if (SoLoud::Soloud::getVoiceFromHandle_internal(x19.d) != 0xffffffff)
            SoLoud::Soloud::stopVoice_internal(x19.d)
        
        i = *x20_1
        x20_1 += 4
    while (i != 0)

return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
