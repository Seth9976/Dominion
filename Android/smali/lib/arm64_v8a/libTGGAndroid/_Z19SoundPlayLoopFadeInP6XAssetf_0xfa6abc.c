// 函数: _Z19SoundPlayLoopFadeInP6XAssetf
// 地址: 0xfa6abc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_60
SoundInitParams(arg1, &var_60)
char var_40 = 1
int32_t var_54 = 0
int32_t x0_1 = SoundPlayParams(&var_60)
int64_t* x8_1
int32_t x9_1

if (x0_1 != 0)
    x9_1 = x0_1 & 0xffff
    x8_1 = *gpSoundGlobals

void* const x20

if (x0_1 == 0 || x9_1 u>= x8_1[1].d)
    x20 = nullptr
else
    void* x8_3 = *x8_1 + (zx.q(x9_1) << 7)
    
    if (*(x8_3 + 0x78) == x0_1)
        x20 = x8_3
    else
        x20 = nullptr

*(x20 + 0x3c) = GameGetTimeUI()
*(x20 + 0x40) = arg2
*(x20 + 0x4c) = 0
*(x20 + 0x38) = 2
*(x20 + 0x44) = 0x3f80000000000000
*(x20 + 0x54) = 0x3f800000
return zx.q(x0_1)
