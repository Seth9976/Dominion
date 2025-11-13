// 函数: _ZN6SoLoud6Soloud15stopAudioSourceERNS_11AudioSourceE
// 地址: 0x106e278
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1

if (*(entry_x1 + 0x18) == 0)
    return 

SoLoud::Soloud::lockAudioMutex_internal()
int32_t x8_1 = *(arg1 + 0x34)

if (x8_1 s>= 1)
    int64_t i = 0
    
    do
        void* x9_2 = *(arg1 + (i << 3) + 0x98)
        
        if (x9_2 != 0 && *(x9_2 + 0x17c) == *(entry_x1 + 0x18))
            SoLoud::Soloud::stopVoice_internal(arg1.d)
            x8_1 = *(arg1 + 0x34)
        
        i += 1
    while (i s< sx.q(x8_1))

return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
