// 函数: _ZN6SoLoud6Soloud20setInaudibleBehaviorEjbb
// 地址: 0x106eae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
int32_t var_28 = arg2.d
int32_t var_24 = 0
SoLoud::Soloud::lockAudioMutex_internal()
int32_t* x0_1 = SoLoud::Soloud::voiceGroupHandleToArray_internal(x19.d)
int32_t* x8

x8 = x0_1 == 0 ? &var_28 : x0_1

if (*x8 != 0)
    int32_t entry_x3
    
    if ((arg3.d & 1) != 0)
        void* x21_1 = &x8[1]
        int32_t i
        
        do
            int32_t x0_3 = SoLoud::Soloud::getVoiceFromHandle_internal(x19.d)
            
            if (x0_3 != 0xffffffff)
                void* x9_1 = *(x19 + (sx.q(x0_3) << 3) + 0x98)
                *(x9_1 + 0x10) &= 0xffffff3f
                void* x9_2 = *(x19 + (sx.q(x0_3) << 3) + 0x98)
                *(x9_2 + 0x10) |= 0x80
                
                if ((entry_x3 & 1) != 0)
                    void* x8_3 = *(x19 + (sx.q(x0_3) << 3) + 0x98)
                    *(x8_3 + 0x10) |= 0x40
            
            i = *x21_1
            x21_1 += 4
        while (i != 0)
    else if ((entry_x3 & 1) == 0)
        void* x20_2 = &x8[1]
        int32_t i_1
        
        do
            int32_t x0_7 = SoLoud::Soloud::getVoiceFromHandle_internal(x19.d)
            
            if (x0_7 != 0xffffffff)
                void* x8_7 = *(x19 + (sx.q(x0_7) << 3) + 0x98)
                *(x8_7 + 0x10) &= 0xffffff3f
            
            i_1 = *x20_2
            x20_2 += 4
        while (i_1 != 0)
    else
        void* x20_1 = &x8[1]
        int32_t i_2
        
        do
            int32_t x0_5 = SoLoud::Soloud::getVoiceFromHandle_internal(x19.d)
            
            if (x0_5 != 0xffffffff)
                void* x8_4 = x19 + (sx.q(x0_5) << 3)
                void* x9_5 = *(x8_4 + 0x98)
                *(x9_5 + 0x10) &= 0xffffff3f
                void* x8_5 = *(x8_4 + 0x98)
                *(x8_5 + 0x10) |= 0x40
            
            i_2 = *x20_1
            x20_1 += 4
        while (i_2 != 0)

return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
