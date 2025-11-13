// 函数: _ZN6SoLoud6Soloud10setLoopingEjb
// 地址: 0x106ecb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
int32_t var_28 = arg2.d
int32_t var_24 = 0
SoLoud::Soloud::lockAudioMutex_internal()
int32_t* x0_1 = SoLoud::Soloud::voiceGroupHandleToArray_internal(x19.d)
int32_t* x8

x8 = x0_1 == 0 ? &var_28 : x0_1

int32_t entry_x2

if (*x8 != 0)
    if ((entry_x2 & 1) == 0)
        void* x20_2 = &x8[1]
        int32_t i
        
        do
            int32_t x0_5 = SoLoud::Soloud::getVoiceFromHandle_internal(x19.d)
            
            if (x0_5 != 0xffffffff)
                void* x8_4 = *(x19 + (sx.q(x0_5) << 3) + 0x98)
                *(x8_4 + 0x10) &= 0xfffffffe
            
            i = *x20_2
            x20_2 += 4
        while (i != 0)
    else
        void* x20_1 = &x8[1]
        int32_t i_1
        
        do
            int32_t x0_3 = SoLoud::Soloud::getVoiceFromHandle_internal(x19.d)
            
            if (x0_3 != 0xffffffff)
                void* x8_2 = *(x19 + (sx.q(x0_3) << 3) + 0x98)
                *(x8_2 + 0x10) |= 1
            
            i_1 = *x20_1
            x20_1 += 4
        while (i_1 != 0)
return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
