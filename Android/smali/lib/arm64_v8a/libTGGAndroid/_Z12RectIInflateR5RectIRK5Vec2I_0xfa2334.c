// 函数: _Z12RectIInflateR5RectIRK5Vec2I
// 地址: 0xfa2334
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
RectI& x9 = arg1

if (*arg1 s<= x8)
    x9 = arg1 + 8

if (*arg1 s> x8 || *x9 s< x8)
    *x9 = x8

void* __offset(RectI, 0x4) x9_3 = arg1 + 4
int32_t x8_1 = *(arg2 + 4)

if (*x9_3 s> x8_1)
    *x9_3 = x8_1
else if (*(arg1 + 0xc) s< x8_1)
    *(arg1 + 0xc) = x8_1
