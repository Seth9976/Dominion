// 函数: _ZN14TGGAudioSource13LoadSoundDataEP6XAsset
// 地址: 0x106d398
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void* x0_1 = SoundGetDef(*(arg1 + 0x98))
*(arg1 + 0x14) = *(*(x0_1 + 0x38) + 8)
*(arg1 + 0xc) = float.s(**(x0_1 + 0x38))
XAsset* entry_x1
void* result = SoundGetDef(entry_x1)
int32_t* x8_4 = *(result + 0x38)
int32_t x9 = x8_4[1]
int32_t x9_1

if (x9 s< 0)
    x9_1 = x9 + 7
else
    x9_1 = x9

if (not(float.s(x8_4[3] s/ ((x9_1 s>> 3) * x8_4[2])) / float.s(*x8_4) > fconvert.s(4f)))
    void* x8_7 = *(x0_1 + 0x38)
    int32_t x9_4 = *(x8_7 + 4)
    int32_t x9_5
    
    if (x9_4 s< 0)
        x9_5 = x9_4 + 7
    else
        x9_5 = x9_4
    
    int32_t x8_9 = *(x8_7 + 0xc) s/ ((x9_5 s>> 3) * *(x8_7 + 8))
    *(arg1 + 0xa8) = x8_9
    int32_t x9_9 = *(*(x0_1 + 0x38) + 4)
    int32_t x8_10 = *(arg1 + 0x14) * x8_9
    int32_t x24_1
    
    if (x9_9 s< 0)
        x24_1 = x9_9 + 7
    else
        x24_1 = x9_9
    
    int32_t x8_11
    
    x8_11 = x8_10 s> 0x10 ? x8_10 : 0x10
    
    result = XMalloc(x8_11 << 2)
    *(arg1 + 0xa0) = result
    int32_t x8_13 = *(*(x0_1 + 0x38) + 0x10)
    
    if (x8_13 == 2)
        SoundOggReader var_420
        SoundOggReaderOpen(&var_420, entry_x1)
        float** var_428
        int32_t i_2 = SoundOggReadFrameFloat(&var_420, &var_428)
        
        if (i_2 != 0)
            int32_t i_1 = i_2
            int32_t x23_1 = 0
            int32_t i
            
            do
                if (*(arg1 + 0x14) != 0)
                    int64_t j = 0
                    
                    do
                        memcpy(
                            *(arg1 + 0xa0) + (sx.q(x23_1) << 2)
                                + (zx.q(*(arg1 + 0xa8) * j.d) << 2), 
                            var_428[j], zx.q(i_1) << 0x20 s>> 0x1e)
                        j += 1
                    while (j u< zx.q(*(arg1 + 0x14)))
                
                x23_1 += i_1
                i = SoundOggReadFrameFloat(&var_420, &var_428)
                i_1 = i
            while (i != 0)
        
        result = SoundOggReaderClose(&var_420)
    else if (x8_13 == 1)
        if ((zx.d(*guard_variable_for_TGGAudioSource::LoadSoundData(XAsset*)::pBits) & 1) == 0 &&
                __cxa_guard_acquire(
                guard_variable_for_TGGAudioSource::LoadSoundData(XAsset*)::pBits) != 0)
            *TGGAudioSource::LoadSoundData(XAsset*)::pBits = XMalloc(0x5dc00)
            __cxa_guard_release(guard_variable_for_TGGAudioSource::LoadSoundData(XAsset*)::pBits)
        
        void* x8_15 = *(x0_1 + 0x38)
        float v1_1
        result, v1_1 = AssetCatalogLoadHWBuffer(entry_x1, 
            *TGGAudioSource::LoadSoundData(XAsset*)::pBits, 0, *(x8_15 + 0xc), *(x8_15 + 0x18))
        int32_t x13_1 = *(arg1 + 0xa8)
        
        if (x13_1 s>= 1)
            uint64_t x12_1 = zx.q(*(arg1 + 0x14))
            int32_t x10_4 = x24_1 s>> 3
            int64_t x8_16 = 0
            int32_t x9_10 = 0
            float v0_2 = fconvert.s(-1f)
            
            do
                if (x12_1.d != 0)
                    v1_1.b = *(*TGGAudioSource::LoadSoundData(XAsset*)::pBits + zx.q(x9_10 * x10_4))
                    *(*(arg1 + 0xa0) + (zx.q(x9_10) << 2)) = float.s(v1_1) + v0_2
                    x12_1 = zx.q(*(arg1 + 0x14))
                    
                    if (x12_1.d u>= 2)
                        int64_t x13_3 = 1
                        
                        do
                            v1_1.b = *(*TGGAudioSource::LoadSoundData(XAsset*)::pBits
                                + zx.q(x8_16.d + x13_3.d))
                            *(*(arg1 + 0xa0) + (zx.q(x9_10 + *(arg1 + 0xa8) * x13_3.d) << 2)) =
                                float.s(v1_1) + v0_2
                            x12_1 = zx.q(*(arg1 + 0x14))
                            x13_3 += 1
                        while (x13_3 u< x12_1)
                    
                    x13_1 = *(arg1 + 0xa8)
                
                x9_10 += 1
                x8_16 += zx.q(x10_4)
            while (x9_10 s< x13_1)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
