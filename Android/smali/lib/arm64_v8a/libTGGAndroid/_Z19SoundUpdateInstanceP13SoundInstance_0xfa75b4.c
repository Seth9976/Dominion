// 函数: _Z19SoundUpdateInstanceP13SoundInstance
// 地址: 0xfa75b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0x72)) == 0 || *(arg1 + 0x38) == 0)
    goto label_fa762c

if (GameGetTimeUI() - *(arg1 + 0x3c) f< *(arg1 + 0x40))
    goto label_fa762c

int32_t x8_2 = *(arg1 + 0x38)
int64_t result

if (x8_2 == 2)
    float v0_1 = *(arg1 + 0x48)
    *(arg1 + 0x38) = 0
    *(arg1 + 0x4c) = v0_1
label_fa762c:
    
    if (*(arg1 + 0x38) != 0)
        float v1_2 = GameGetTimeUI() - *(arg1 + 0x3c)
        float v0_2 = *(arg1 + 0x44)
        v1_2 = v1_2 / *(arg1 + 0x40)
        
        if (not(v1_2 <= 0f))
            float v2_2 = *(arg1 + 0x48)
            
            if (v1_2 >= fconvert.s(1f))
                v0_2 = v2_2
            else
                v0_2 = v0_2 + v1_2 * (v2_2 - v0_2)
        
        *(arg1 + 0x4c) = v0_2
    
    int32_t v0_3 = SoundCalcVolume(arg1)
    
    if (not(*(arg1 + 0x58) f== v0_3))
        *(arg1 + 0x58) = v0_3
        int64_t* x0_2 = *gSoundInterface
        (*(*x0_2 + 0x40))(x0_2, arg1)
    
    int64_t* x0_3 = *gSoundInterface
    (*(*x0_3 + 0x38))(x0_3, arg1)
    int64_t* x0_4 = *gSoundInterface
    result = (*(*x0_4 + 0x30))(x0_4, arg1)
    
    if ((result.d & 1) != 0)
        *(arg1 + 0x72) = 0
        return SoundInstanceFree(arg1) __tailcall
else
    if (x8_2 != 1)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return SoundUpdateAll() __tailcall
    
    int64_t* x0 = *gSoundInterface
    result = (*(*x0 + 0x50))(x0, arg1)
    *(arg1 + 0x72) = 0

return result
