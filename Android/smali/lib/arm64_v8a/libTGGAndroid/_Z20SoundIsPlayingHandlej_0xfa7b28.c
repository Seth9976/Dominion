// 函数: _Z20SoundIsPlayingHandlej
// 地址: 0xfa7b28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

int32_t x9_1 = arg1 & 0xffff
int64_t* x8_1 = *gpSoundGlobals
void* x8_3

if (x9_1 u< x8_1[1].d)
    x8_3 = *x8_1 + (zx.q(x9_1) << 7)

if (x9_1 u>= x8_1[1].d || *(x8_3 + 0x78) != arg1)
    return 

*(x8_3 + 0x72)
