// 函数: _Z18SoundFadeOutHandlejf
// 地址: 0xfa734c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_20 = v8

if (arg1 == 0)
    return 

int32_t x9_1 = arg1 & 0xffff
int64_t* x8_1 = *gpSoundGlobals

if (x9_1 u>= x8_1[1].d)
    return 

void* x19_1 = *x8_1 + (zx.q(x9_1) << 7)

if (*(x19_1 + 0x78) != arg1)
    return 

int32_t v0
arg1, v0 = GameGetTimeUI()
int32_t v1_1 = *(x19_1 + 0x4c)
*(x19_1 + 0x3c) = v0
*(x19_1 + 0x40) = arg2.q.d
*(x19_1 + 0x48) = 0
*(x19_1 + 0x44) = v1_1
*(x19_1 + 0x38) = 1
