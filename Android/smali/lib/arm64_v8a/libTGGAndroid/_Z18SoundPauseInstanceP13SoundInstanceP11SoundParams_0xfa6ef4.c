// 函数: _Z18SoundPauseInstanceP13SoundInstanceP11SoundParams
// 地址: 0xfa6ef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    *arg2 = *arg1
    *(arg2 + 0x18) = *(arg1 + 8)
    *(arg2 + 0x20) = *(arg1 + 0x70)
    *(arg2 + 8) = *(arg1 + 0x50)
    *(arg2 + 0xc) = *(arg1 + 0x54)
    char x8_4 = *(arg1 + 0x73)
    *(arg2 + 0x22) = 0
    *(arg2 + 0x21) = x8_4
    int32_t x8_5 = *(V0 + 8)
    int64_t x9_1 = *V0
    *(arg2 + 0x30) = 0x4248000040a00000
    *(arg2 + 0x2c) = x8_5
    *(arg2 + 0x24) = x9_1
    int64_t* x0 = *gSoundInterface
    *(arg2 + 0x10) = (*(*x0 + 0x58))(x0, arg1, 0x40a00000)

int64_t* x0_2 = *gSoundInterface
int64_t result = (*(*x0_2 + 0x50))(x0_2, arg1)
*(arg1 + 0x72) = 0
return result
