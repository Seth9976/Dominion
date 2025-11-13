// 函数: _Z14SoundIsPlayingP6XAsset
// 地址: 0xfa7b78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x10 = nullptr
int64_t* x8 = *gpSoundGlobals
uint64_t x9 = zx.q(x8[1].d)

while (true)
    void* x11_2
    
    if (x10 == 0)
        int64_t* x11_3 = *x8
        x10 = x11_3
        x11_2 = &x11_3[x9 * 0x10]
        
        if (x10 u>= x11_2)
            return 0
    else
        x10 = &x10[0x10]
        x11_2 = *x8 + (x9 << 7)
        
        if (x10 u>= x11_2)
            return 0
    
    while (zx.d(*(x10 + 0x7a)) == 0)
        x10 = &x10[0x10]
        
        if (x10 u>= x11_2)
            return 0
    
    if (zx.d(*(x10 + 0x72)) != 0)
        if (*x10 == arg1)
            break
        
        if (x10[1] == arg1)
            break

return 1
