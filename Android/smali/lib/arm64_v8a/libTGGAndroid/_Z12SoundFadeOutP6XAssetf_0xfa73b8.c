// 函数: _Z12SoundFadeOutP6XAssetf
// 地址: 0xfa73b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
void* x22 = nullptr

while (true)
    void** x8_1 = *gpSoundGlobals
    void* x9_1
    
    if (x22 == 0)
        x9_1 = *x8_1
        x22 = x9_1
    else
        x9_1 = *x8_1
        x22 += 0x80
    
    void* x8_3 = x9_1 + (zx.q(x8_1[1].d) << 7)
    
    if (x22 u>= x8_3)
        break
    
    while (zx.d(*(x22 + 0x7a)) == 0)
        x22 += 0x80
        
        if (x22 u>= x8_3)
            return 
    
    if (*x22 != x19 && *(x22 + 8) != x19)
        continue
    
    int32_t v0
    arg1, v0 = GameGetTimeUI()
    int32_t v1_1 = *(x22 + 0x4c)
    *(x22 + 0x3c) = v0
    *(x22 + 0x40) = arg2
    *(x22 + 0x48) = 0
    *(x22 + 0x38) = 1
    *(x22 + 0x44) = v1_1
