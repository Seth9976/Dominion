// 函数: _Z11InputUpdatev
// 地址: 0xf74938
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gInputGameGlobals

if (zx.d(*(x8 + 0x3c)) == 0)
    return 

float v0 = *gSecondsPerUpdate + *(x8 + 0x40)
*(x8 + 0x40) = v0

if (not(v0 < fconvert.s(0.75f)))
    *(x8 + 0x3c) = 0
