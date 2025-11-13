// 函数: _Z20SoundPlayMusicFadeInP6XAssetff
// 地址: 0xfa6b70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_60
SoundInitParams(arg1, &var_60)
int16_t var_40 = 0x101
int32_t var_54 = 0
int32_t x0_1 = SoundPlayParams(&var_60)

if (x0_1 != 0)
    int32_t x9_1 = x0_1 & 0xffff
    int64_t* x8_1 = *gpSoundGlobals
    
    if (x9_1 u< x8_1[1].d)
        void* x20_1 = *x8_1 + (zx.q(x9_1) << 7)
        
        if (*(x20_1 + 0x78) == x0_1)
            *(x20_1 + 0x3c) = GameGetTimeUI()
            *(x20_1 + 0x40) = arg2
            *(x20_1 + 0x4c) = 0
            *(x20_1 + 0x38) = 2
            *(x20_1 + 0x44) = 0x3f80000000000000
            *(x20_1 + 0x54) = 0x3f19999a

return zx.q(x0_1)
