// 函数: _Z19SoundCountInstancesP6XAsset
// 地址: 0xfa6638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x11 = nullptr
int64_t* x9 = *gpSoundGlobals
int32_t x8 = 0
uint64_t x10 = zx.q(x9[1].d)

while (true)
    void* x12_2
    
    if (x11 == 0)
        void* x12_3 = *x9
        x11 = x12_3
        x12_2 = x12_3 + (x10 << 7)
        
        if (x11 u>= x12_2)
            break
    else
        x11 += 0x80
        x12_2 = *x9 + (x10 << 7)
        
        if (x11 u>= x12_2)
            break
    
    while (zx.d(*(x11 + 0x7a)) == 0)
        x11 += 0x80
        
        if (x11 u>= x12_2)
            return zx.q(x8)
    
    if (*(x11 + 8) == arg1)
        x8 += zx.d(*(x11 + 0x72))

return zx.q(x8)
