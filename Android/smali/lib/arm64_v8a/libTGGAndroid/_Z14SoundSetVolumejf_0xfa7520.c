// 函数: _Z14SoundSetVolumejf
// 地址: 0xfa7520
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

int32_t x9_1 = arg1 & 0xffff
int64_t* x8_1 = *gpSoundGlobals

if (x9_1 u>= x8_1[1].d)
    return 

void* x8_3 = *x8_1 + (zx.q(x9_1) << 7)

if (*(x8_3 + 0x78) == arg1)
    *(x8_3 + 0x54) = arg2
