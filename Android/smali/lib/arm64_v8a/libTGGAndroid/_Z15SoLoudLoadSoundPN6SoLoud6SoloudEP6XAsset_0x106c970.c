// 函数: _Z15SoLoudLoadSoundPN6SoLoud6SoloudEP6XAsset
// 地址: 0x106c970
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = SoundGetDef(arg2)
XAsset* result = *(x0_1 + 0x28)

if (result == 0)
    if (*(x0_1 + 0x30) == 0 && *(x0_1 + 0x38) == 0)
        return 0
    
    result = operator new(0xb0)
    SoLoud::AudioSource::AudioSource()
    *(result + 0x98) = arg2
    *(result + 0xa0) = 0
    *(result + 0xa8) = 0
    *result = _vtable_for_TGGAudioSource + 0x10
    SoLoud::Soloud* x0_5 = SoundGetDef(arg2)
    int32_t x8_4 = *(x0_5 + 0x30)
    SoLoud::Soloud* x21_1 = x0_5
    
    if (x8_4 s< 1)
        TGGAudioSource::LoadSoundData(result)
    else
        int64_t i = 0
        
        do
            XAsset* x1 = *(*(x21_1 + 0x20) + (i << 3))
            
            if (x1 != 0)
                x0_5 = SoLoudLoadSound(x0_5, x1)
                x8_4 = *(x21_1 + 0x30)
            
            i += 1
        while (i s< sx.q(x8_4))

return result
