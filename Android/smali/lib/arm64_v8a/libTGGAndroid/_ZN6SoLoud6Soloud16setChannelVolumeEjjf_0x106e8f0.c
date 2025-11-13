// 函数: _ZN6SoLoud6Soloud16setChannelVolumeEjjf
// 地址: 0x106e8f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg1
uint32_t var_38 = arg2
int32_t var_34 = 0
SoLoud::Soloud::lockAudioMutex_internal()
uint32_t* x0_1 = SoLoud::Soloud::voiceGroupHandleToArray_internal(x20.d)
uint32_t* x8

x8 = x0_1 == 0 ? &var_38 : x0_1

if (*x8 != 0)
    void* x22_1 = &x8[1]
    int32_t i
    
    do
        int32_t x0_3 = SoLoud::Soloud::getVoiceFromHandle_internal(x20.d)
        
        if (x0_3 != 0xffffffff)
            void* x8_2 = *(x20 + (sx.q(x0_3) << 3) + 0x98)
            int32_t entry_x2
            
            if (*(x8_2 + 0x48) u> entry_x2)
                *(x8_2 + (zx.q(entry_x2) << 2) + 0x18) = arg3
        
        i = *x22_1
        x22_1 += 4
    while (i != 0)

return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
