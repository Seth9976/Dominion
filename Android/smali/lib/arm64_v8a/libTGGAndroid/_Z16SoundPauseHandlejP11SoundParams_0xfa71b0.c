// 函数: _Z16SoundPauseHandlejP11SoundParams
// 地址: 0xfa71b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    __builtin_memset(arg2, 0, 0x40)

if (arg1 == 0)
    return 

int32_t x9_1 = arg1 & 0xffff
int64_t* x8_1 = *gpSoundGlobals

if (x9_1 u>= x8_1[1].d)
    return 

int64_t x21_1 = *x8_1
uint64_t x22_1 = zx.q(x9_1)
int64_t* x20_1 = x21_1 + (x22_1 << 7)

if (x20_1[0xf].d != arg1)
    return 

if (arg2 != 0)
    void* x9_2 = x21_1 + (x22_1 << 7)
    *arg2 = *x20_1
    *(arg2 + 0x18) = *(x9_2 + 8)
    *(arg2 + 0x20) = *(x9_2 + 0x70)
    *(arg2 + 8) = *(x9_2 + 0x50)
    *(arg2 + 0xc) = *(x9_2 + 0x54)
    char x8_6 = *(x9_2 + 0x73)
    *(arg2 + 0x22) = 0
    *(arg2 + 0x21) = x8_6
    int32_t x8_7 = *(V0 + 8)
    int64_t x9_3 = *V0
    *(arg2 + 0x30) = 0x4248000040a00000
    *(arg2 + 0x2c) = x8_7
    *(arg2 + 0x24) = x9_3
    int64_t* x0 = *gSoundInterface
    *(arg2 + 0x10) = (*(*x0 + 0x58))(x0, x20_1, 0x40a00000)

int64_t* x0_2 = *gSoundInterface
(*(*x0_2 + 0x50))(x0_2, x20_1)
*(x21_1 + (x22_1 << 7) + 0x72) = 0
