// 函数: _ZN6SoLoud6Soloud23trimVoiceGroup_internalEj
// 地址: 0x107894c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u< 0xfffff000)
    return 

int64_t* x20_1 = arg1 + 0x20e40
int32_t x21_1 = entry_x1 & 0xfff

if (x21_1 u>= x20_1[1].d)
    return 

SoLoud::Soloud::lockAudioMutex_internal()
int64_t x22_1 = *(*x20_1 + (zx.q(x21_1) << 3))
SoLoud::Soloud::unlockAudioMutex_internal()

if (x22_1 == 0)
    return 

uint64_t x21_2 = zx.q(x21_1)
SoLoud::Soloud::lockAudioMutex_internal()
int32_t* x8_4 = *(*x20_1 + (x21_2 << 3))

if (x8_4[1] != 0 && *x8_4 u>= 2)
    int64_t x22_2 = 0
    uint64_t x23_1 = 1
    int32_t i
    
    do
        SoLoud::Soloud::unlockAudioMutex_internal()
        
        while (true)
            *(*(*x20_1 + (x21_2 << 3)) + (x23_1 << 2))
            
            if ((SoLoud::Soloud::isValidVoiceHandle(arg1.d) & 1) != 0)
                break
            
            SoLoud::Soloud::lockAudioMutex_internal()
            int64_t x10_1 = x22_2
            int32_t* x8_6 = *(*x20_1 + (x21_2 << 3))
            uint64_t x9_2
            
            while (true)
                x9_2 = zx.q(*x8_6 - 1)
                
                if (x10_1 + 1 u>= x9_2)
                    break
                
                void* x8_12 = &x8_6[x10_1]
                *(x8_12 + 4) = *(x8_12 + 8)
                x10_1 += 1
                x8_6 = *(*x20_1 + (x21_2 << 3))
                
                if (x8_6[x10_1 + 1] == 0)
                    x9_2 = zx.q(*x8_6 - 1)
                    break
            
            x8_6[zx.q(x9_2.d)] = 0
            int32_t x24_1 = *(*(*x20_1 + (x21_2 << 3)) + (x23_1 << 2))
            SoLoud::Soloud::unlockAudioMutex_internal()
            
            if (x24_1 == 0)
                return 
        
        SoLoud::Soloud::lockAudioMutex_internal()
        int32_t* x8_15 = *(*x20_1 + (x21_2 << 3))
        
        if (x23_1.d + 1 u>= *x8_15)
            break
        
        i = x8_15[zx.q(x23_1.d + 1)]
        x23_1 = zx.q(x23_1.d + 1)
        x22_2 += 1
    while (i != 0)

return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall
