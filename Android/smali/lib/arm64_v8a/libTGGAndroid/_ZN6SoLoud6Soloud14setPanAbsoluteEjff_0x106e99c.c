// 函数: _ZN6SoLoud6Soloud14setPanAbsoluteEjff
// 地址: 0x106e99c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_30 = v10
int64_t x19 = arg1
int32_t entry_x1
int32_t var_38 = entry_x1
int32_t var_34 = 0
SoLoud::Soloud::lockAudioMutex_internal()
int32_t* x0_1 = SoLoud::Soloud::voiceGroupHandleToArray_internal(x19.d)
int32_t* x8

x8 = x0_1 == 0 ? &var_38 : x0_1

if (*x8 != 0)
    v10.d = (arg2 + arg3) * fconvert.s(0.5f)
    void* x20_1 = &x8[1]
    int32_t i
    
    do
        int32_t x0_3 = SoLoud::Soloud::getVoiceFromHandle_internal(x19.d)
        
        if (x0_3 != 0xffffffff)
            *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x94) = 0
            *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x18) = arg2
            *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x1c) = arg3
            void* x9_4 = *(x19 + (sx.q(x0_3) << 3) + 0x98)
            int32_t x10_1 = *(x9_4 + 0x48)
            
            if (x10_1 != 4)
                if (x10_1 == 6)
                    goto label_106ea70
                
                goto label_106ea48
            
            *(x9_4 + 0x20) = arg2
            *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x24) = arg3
            x9_4 = *(x19 + (sx.q(x0_3) << 3) + 0x98)
            x10_1 = *(x9_4 + 0x48)
            
            if (x10_1 != 6)
            label_106ea48:
                
                if (x10_1 == 8)
                label_106ea9c:
                    *(x9_4 + 0x20) = v10.d
                    *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x24) = v10.d
                    *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x28) = arg2
                    *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x2c) = arg3
                    *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x30) = arg2
                    *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x34) = arg3
            else
            label_106ea70:
                *(x9_4 + 0x20) = v10.d
                *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x24) = v10.d
                *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x28) = arg2
                *(*(x19 + (sx.q(x0_3) << 3) + 0x98) + 0x2c) = arg3
                x9_4 = *(x19 + (sx.q(x0_3) << 3) + 0x98)
                
                if (*(x9_4 + 0x48) == 8)
                    goto label_106ea9c
        
        i = *x20_1
        x20_1 += 4
    while (i != 0)

return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
