// 函数: _Z9SoundStopP6XAsset
// 地址: 0xfa6e38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = nullptr

while (true)
    int64_t* x8_1 = *gpSoundGlobals
    void* x9_1
    
    if (x20 == 0)
        x9_1 = *x8_1
        x20 = x9_1
    else
        x9_1 = *x8_1
        x20 += 0x80
    
    void* x8_3 = x9_1 + (zx.q(x8_1[1].d) << 7)
    
    if (x20 u>= x8_3)
        break
    
    while (zx.d(*(x20 + 0x7a)) == 0)
        x20 += 0x80
        
        if (x20 u>= x8_3)
            return 
    
    if (*x20 != arg1 && *(x20 + 8) != arg1)
        continue
    
    int64_t* x0 = *gSoundInterface
    (*(*x0 + 0x50))(x0, x20)
    *(x20 + 0x72) = 0
