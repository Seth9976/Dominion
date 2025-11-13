// 函数: _ZN6SoLoud6Soloud16countAudioSourceERNS_11AudioSourceE
// 地址: 0x106e34c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1

if (*(entry_x1 + 0x18) == 0)
    return 0

int32_t x16
int32_t x17
x16, x17 = SoLoud::Soloud::lockAudioMutex_internal()
uint64_t x9 = zx.q(*(arg1 + 0x34))
int32_t x20_1

if (x9.d s< 1)
    x20_1 = 0
else
    int32_t x8_1 = *(entry_x1 + 0x18)
    int64_t i_4
    
    if (x9.d != 1)
        i_4 = x9 & 0xfffffffe
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        void* __offset(SoLoud::AudioSource, 0xa0) x13_1 = arg1 + 0xa0
        int64_t i_3 = i_4
        int64_t i
        
        do
            void* x15_4 = *(x13_1 - 8)
            
            if (x15_4 != 0)
                x16 = *(x15_4 + 0x17c)
            
            void* x0_2 = *x13_1
            
            if (x0_2 != 0)
                x17 = *(x0_2 + 0x17c)
            
            x16 = x16 == x8_1 ? 1 : 0
            x17 = x17 == x8_1 ? 1 : 0
            x11_1 += x16 & (x15_4 != 0 ? 1 : 0)
            i = i_3
            i_3 -= 2
            x12_1 += x17 & (x0_2 != 0 ? 1 : 0)
            x13_1 += 0x10
        while (i != 2)
        x20_1 = x12_1 + x11_1
        
        if (i_4 != x9)
            goto label_106e440
    else
        i_4 = 0
        x20_1 = 0
    label_106e440:
        void* x11_3 = arg1 + (i_4 << 3) + 0x98
        int64_t i_2 = x9 - i_4
        int64_t i_1
        
        do
            void* x10_1 = *x11_3
            
            if (x10_1 != 0 && *(x10_1 + 0x17c) == x8_1)
                x20_1 += 1
            
            i_1 = i_2
            i_2 -= 1
            x11_3 += 8
        while (i_1 != 1)

SoLoud::Soloud::unlockAudioMutex_internal()
return zx.q(x20_1)
