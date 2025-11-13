// 函数: _ZN16TGGAudioInstanceC2EP14TGGAudioSource
// 地址: 0x106c6d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SoLoud::AudioSourceInstance::AudioSourceInstance()
void* entry_x1
*(arg1 + 0x1f0) = entry_x1
*(arg1 + 0x990) = 0
__builtin_memset(arg1 + 0x998, 0, 0x18)
*arg1 = _vtable_for_TGGAudioInstance + 0x10
memset(arg1 + 0x200, 0, 0x3c8)
memset(arg1 + 0x5c8, 0, 0x3c8)
void* x0_3 = SoundGetDef(*(entry_x1 + 0x98))
int32_t x1 = *(x0_3 + 0x30)
void* result

if (x1 == 0)
    result = SoundGetDef(*(*(arg1 + 0x1f0) + 0x98))
    int32_t* x8_8 = *(result + 0x38)
    int32_t x9_5 = x8_8[1]
    int32_t x9_6
    
    if (x9_5 s< 0)
        x9_6 = x9_5 + 7
    else
        x9_6 = x9_5
    
    if (not(float.s(x8_8[3] s/ ((x9_6 s>> 3) * x8_8[2])) / float.s(*x8_8) <= fconvert.s(4f)))
        result = SoundOggReaderOpen(arg1 + 0x200, *(*(arg1 + 0x1f0) + 0x98))
    label_106c828:
        int32_t x8_12 = *(arg1 + 0x10)
        *(arg1 + 0x990) = 1
        *(arg1 + 0x10) = x8_12 | 0x20000
else
    int32_t x8_1 = *(x0_3 + 0x18)
    
    if (x1 s< 2 || x8_1 != 0)
        if (x8_1 != 1)
            pthread_kill(pthread_self(), 6)
            int64_t* x0_16 = XNoReturn()
            SoLoud::AudioSourceInstance::~AudioSourceInstance()
            sub_1101e04(x0_16)
            noreturn
        
        int32_t* x8_15 = *(SoundGetDef(**(x0_3 + 0x20)) + 0x38)
        int32_t x9_9 = x8_15[1]
        int32_t x9_10
        
        if (x9_9 s< 0)
            x9_10 = x9_9 + 7
        else
            x9_10 = x9_9
        
        int32_t x22_1
        
        if (float.s(x8_15[3] s/ ((x9_10 s>> 3) * x8_15[2])) / float.s(*x8_15) <= fconvert.s(4f))
            x22_1 = 0
        else
            SoundOggReaderOpen(arg1 + 0x200, **(x0_3 + 0x20))
            x22_1 = 1
            *(arg1 + 0x10) |= 0x20000
        
        result = SoundGetDef(*(*(x0_3 + 0x20) + 8))
        int32_t* x8_22 = *(result + 0x38)
        int32_t x9_13 = x8_22[1]
        int32_t x9_14
        
        if (x9_13 s< 0)
            x9_14 = x9_13 + 7
        else
            x9_14 = x9_13
        
        int32_t x8_27
        
        if (float.s(x8_22[3] s/ ((x9_14 s>> 3) * x8_22[2])) / float.s(*x8_22) <= fconvert.s(4f))
            x8_27 = *(arg1 + 0x10)
        else
            result = SoundOggReaderOpen(arg1 + 0x5c8, *(*(x0_3 + 0x20) + 8))
            x22_1 += 1
            x8_27 = *(arg1 + 0x10) | 0x20000
            *(arg1 + 0x10) = x8_27
        
        *(arg1 + 0x990) = x22_1
        *(arg1 + 0x10) = x8_27 | 1
    else
        int32_t x0_5 = RandomInt(gRNG, x1)
        *(arg1 + 0x1f8) = x0_5
        result = SoundGetDef(*(*(x0_3 + 0x20) + (sx.q(x0_5) << 3)))
        int32_t* x8_3 = *(result + 0x38)
        int32_t x9 = x8_3[1]
        int32_t x9_1
        
        if (x9 s< 0)
            x9_1 = x9 + 7
        else
            x9_1 = x9
        
        if (not(float.s(x8_3[3] s/ ((x9_1 s>> 3) * x8_3[2])) / float.s(*x8_3) <= fconvert.s(4f)))
            result =
                SoundOggReaderOpen(arg1 + 0x200, *(*(x0_3 + 0x20) + (sx.q(*(arg1 + 0x1f8)) << 3)))
            goto label_106c828

return result
