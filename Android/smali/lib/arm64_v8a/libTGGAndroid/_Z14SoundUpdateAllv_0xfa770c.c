// 函数: _Z14SoundUpdateAllv
// 地址: 0xfa770c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gAppInterface

if (zx.d(*(x8 + 0x3e)) != 0)
    int32_t* x8_4
    float v0_1
    
    if (zx.d(*(x8 + 0x3c)) == 0 || zx.d(*gAlwaysVRMode) == 0)
        if ((AppHasFocus() & 1) == 0)
            if (zx.d(*(*gAppInterface + 0x3c)) == 0)
                goto label_fa77a0
            
            goto label_fa777c
        
        if ((AppHasResume() & 1) != 0 || zx.d(*(*gAppInterface + 0x3c)) != 0)
        label_fa777c:
            x8_4 = *gpSoundGlobals + 0x30
            v0_1 = vminnm_f32(*x8_4 + float.s(0x3d23d70a), fconvert.s(1f))
        else
        label_fa77a0:
            x8_4 = *gpSoundGlobals + 0x30
            v0_1 = vmaxnm_f32(*x8_4 + float.s(0xbd23d70a), 0f)
    else
        int32_t x0_1 = VRHasFocus()
        x8_4 = *gpSoundGlobals + 0x30
        v0_1 = *x8_4
        
        if ((x0_1 & 1) != 0)
            v0_1 = vminnm_f32(v0_1 + float.s(0x3d23d70a), fconvert.s(1f))
        else
            v0_1 = vmaxnm_f32(v0_1 + float.s(0xbd23d70a), 0f)
    
    *x8_4 = v0_1

int64_t* x8_9 = *gpSoundGlobals

while (true)
    void* x9_1 = *x8_9
    void* x19 = x9_1
    
    while (true)
        void* x8_11 = x9_1 + (zx.q(x8_9[1].d) << 7)
        
        if (x19 u>= x8_11)
        label_fa7838:
            jump(*(**gSoundInterface + 0x80))
        
        while (zx.d(*(x19 + 0x7a)) == 0)
            x19 += 0x80
            
            if (x19 u>= x8_11)
                goto label_fa7838
        
        SoundUpdateInstance(x19)
        x8_9 = *gpSoundGlobals
        
        if (x19 == 0)
            break
        
        x9_1 = *x8_9
        x19 += 0x80
