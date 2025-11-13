// 函数: _ZN6SoLoud6Soloud13update3dAudioEv
// 地址: 0x1079408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SoLoud::Soloud::lockAudioMutex_internal()
uint32_t* entry_x0
uint64_t x8 = zx.q(entry_x0[0xd])
int32_t var_1050[0x400]
int32_t i_2

if (x8.d s< 1)
    i_2 = 0
else
    int64_t x9_1 = 0
    i_2 = 0
    void* x11_1 = &entry_x0[0xbab]
    
    do
        void* x13_1 = *(entry_x0 + 0x98 + (x9_1 << 3))
        
        if (x13_1 != 0)
            int32_t x13_2 = *(x13_1 + 0x10)
            
            if ((x13_2 & 8) != 0)
                var_1050[zx.q(i_2)] = x9_1.d
                i_2 += 1
                *x11_1 = x13_2
        
        x9_1 += 1
        x11_1 += 0x78
    while (x8 != x9_1)

SoLoud::Soloud::unlockAudioMutex_internal()
SoLoud::Soloud::update3dVoices_internal(entry_x0, &var_1050)
SoLoud::Soloud::lockAudioMutex_internal()

if (i_2 s>= 1)
    uint64_t i_1 = zx.q(i_2)
    int32_t (* x22_1)[0x400] = &var_1050
    uint64_t i
    
    do
        uint64_t x20 = zx.q(*x22_1)
        void* x25_1 = *(entry_x0 + (x20 << 3) + 0x98)
        
        if (x25_1 != 0)
            SoLoud::Soloud::updateVoiceRelativePlaySpeed_internal(entry_x0.d)
            SoLoud::Soloud::updateVoiceVolume_internal(entry_x0.d)
            void* x8_3 = entry_x0 + x20 * 0x78
            *(x25_1 + 0x18) = *(x8_3 + 0x2e8c)
            *(x25_1 + 0x1c) = *(x8_3 + 0x2e90)
            *(x25_1 + 0x20) = *(x8_3 + 0x2e94)
            *(x25_1 + 0x24) = *(x8_3 + 0x2e98)
            *(x25_1 + 0x28) = *(x8_3 + 0x2e9c)
            *(x25_1 + 0x2c) = *(x8_3 + 0x2ea0)
            *(x25_1 + 0x30) = *(x8_3 + 0x2ea4)
            int32_t x8_4 = *(x25_1 + 0x10)
            bool cond:2_1 = *(x25_1 + 0x3c) >= float.s(0x3a83126f)
            *(x25_1 + 0x34) = *(x8_3 + 0x2ea8)
            
            if (cond:2_1)
                *(x25_1 + 0x10) = x8_4 & 0xffffffdf
            else
                *(x25_1 + 0x10) = x8_4 | 0x20
                
                if ((x8_4 & 0x40) != 0)
                    SoLoud::Soloud::stopVoice_internal(entry_x0.d)
        
        i = i_1
        i_1 -= 1
        x22_1 = &(*x22_1)[1]
    while (i != 1)

entry_x0[0x8794].b = 1
return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
