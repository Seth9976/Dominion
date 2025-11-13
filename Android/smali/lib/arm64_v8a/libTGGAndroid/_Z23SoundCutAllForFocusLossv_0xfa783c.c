// 函数: _Z23SoundCutAllForFocusLossv
// 地址: 0xfa783c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gAppInterface

if (x8 == 0)
    return 

if (zx.d(*(x8 + 0x3e)) != 0)
    *(*gpSoundGlobals + 0x30) = 0

void* x19 = nullptr

while (true)
    int64_t* x8_3 = *gpSoundGlobals
    void* x9_1
    
    if (x19 == 0)
        x9_1 = *x8_3
        x19 = x9_1
    else
        x9_1 = *x8_3
        x19 += 0x80
    
    void* x8_5 = x9_1 + (zx.q(x8_3[1].d) << 7)
    
    if (x19 u>= x8_5)
        break
    
    while (zx.d(*(x19 + 0x7a)) == 0)
        x19 += 0x80
        
        if (x19 u>= x8_5)
            goto label_fa78d8
    
    SoundUpdateInstance(x19)

label_fa78d8:
jump(*(**gSoundInterface + 0x80))
