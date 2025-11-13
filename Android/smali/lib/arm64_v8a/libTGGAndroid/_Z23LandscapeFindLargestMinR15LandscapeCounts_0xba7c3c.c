// 函数: _Z23LandscapeFindLargestMinR15LandscapeCounts
// 地址: 0xba7c3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x13 = *(arg1 + 0x40)
int32_t x14 = *(arg1 + 0x30)
int32_t x12 = *(arg1 + 0x20)
int32_t x15 = *(arg1 + 0x10)
int32_t x15_1 = x15 & not.d(x15 s>> 0x1f)
int32_t x16

x16 = x15 s<= 0 ? -1 : 1

int32_t x15_2

x15_2 = x12 s> x15_1 ? x12 : x15_1

int32_t x16_1

x16_1 = x12 s> x15_1 ? 2 : x16

int32_t x14_1

x14_1 = x14 s> x15_2 ? x14 : x15_2

int32_t x16_2

x16_2 = x14 s> x15_2 ? 3 : x16_1

int32_t x13_1

x13_1 = x13 s> x14_1 ? x13 : x14_1

int32_t x14_2

x14_2 = x13 s> x14_1 ? 4 : x16_2

uint64_t x13_2

if (*(arg1 + 0x50) s> x13_1)
    x13_2 = 5
else
    x13_2 = zx.q(x14_2)

if (x13_2.d u> 5)
    pthread_kill(pthread_self(), 6)
    LandscapeCounts* x0_7
    int64_t x1
    int64_t x2
    int32_t x3
    x0_7, x1, x2, x3 = XNoReturn()
    return LandscapeCountSetAmount(x0_7, x1, x2, x3) __tailcall

switch (x13_2)
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
