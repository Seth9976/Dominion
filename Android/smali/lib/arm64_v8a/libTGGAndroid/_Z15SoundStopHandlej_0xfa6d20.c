// 函数: _Z15SoundStopHandlej
// 地址: 0xfa6d20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

int32_t x9_1 = arg1 & 0xffff
int64_t* x8_1 = *gpSoundGlobals

if (x9_1 u>= x8_1[1].d)
    return 

void* x19_1 = *x8_1 + (zx.q(x9_1) << 7)

if (*(x19_1 + 0x78) != arg1)
    return 

int64_t* x0 = *gSoundInterface
(*(*x0 + 0x50))(x0, x19_1)
*(x19_1 + 0x72) = 0
