// 函数: _Z14CalcLayoutDims11AspectRatio12LayoutCounts
// 地址: 0xba3620
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_11 = arg2 u>> 0x20
int32_t entry_x2
int32_t x10_1

if (x8_11.d - 1 u< 2)
    x10_1 = entry_x2 + 8
else
    x10_1 = entry_x2

int32_t x10_2

if (x8_11.d - 3 u< 2)
    x10_2 = x10_1 + 0x18
else
    x10_2 = x10_1

int32_t x10_3

if (arg2.d == 0xb)
    x10_3 = x10_2 + 4
else
    x10_3 = x10_2

if (x8_11 == 0)
    int32_t x11_4
    
    if (x10_3 + 7 s< 0)
        x11_4 = x10_3 + 0xe
    else
        x11_4 = x10_3 + 7
    
    if (x10_3 s< 9)
        return 2 | zx.q((x11_4 s>> 3) + 5) << 0x20

int32_t x8_1 = x8_11.d * 3 + entry_x2
int32_t x8_2

if (arg2.d == 0xb)
    x8_2 = x8_1 + 4
else
    x8_2 = x8_1

int32_t x9_2

x9_2 = arg2.d == 0xb ? 6 : 5

int32_t x8_8

if (x9_2 s< (x8_2 - 5) s/ 0xb + 5)
    x8_8 = x9_2
else
    x8_8 = (x8_2 - 5) s/ 0xb + 5

return 2 | zx.q(x8_8) << 0x20
