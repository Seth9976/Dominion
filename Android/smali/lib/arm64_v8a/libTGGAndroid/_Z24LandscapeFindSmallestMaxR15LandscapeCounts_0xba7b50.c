// 函数: _Z24LandscapeFindSmallestMaxR15LandscapeCounts
// 地址: 0xba7b50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x18)
int32_t x11 = *(arg1 + 0x28)
int32_t x8_1

x8_1 = x8 s< 0x3e8 ? x8 : 0x3e8

int32_t x9 = *(arg1 + 0x38)
int32_t x10

x10 = x8 s>= 0x3e8 ? -1 : 1

int32_t x8_2

x8_2 = x11 s< x8_1 ? x11 : x8_1

int32_t x10_1

x10_1 = x11 s< x8_1 ? 2 : x10

int32_t x11_1 = *(arg1 + 0x48)
int32_t x8_3

x8_3 = x9 s< x8_2 ? x9 : x8_2

int32_t x9_1

x9_1 = x9 s< x8_2 ? 3 : x10_1

int32_t x8_4

x8_4 = x11_1 s< x8_3 ? x11_1 : x8_3

int32_t x9_2

x9_2 = x11_1 s< x8_3 ? 4 : x9_1

uint64_t x8_5

if (*(arg1 + 0x58) s< x8_4)
    x8_5 = 5
else
    x8_5 = zx.q(x9_2)

if (x8_5.d u> 5)
    pthread_kill(pthread_self(), 6)
    return LandscapeFindLargestMin(XNoReturn()) __tailcall

switch (x8_5)
    case 1
        return arg1 + 0x10
    case 2
        return arg1 + 0x20
    case 3
        return arg1 + 0x30
    case 4
        return arg1 + 0x40
    case 5
        return arg1 + 0x50
