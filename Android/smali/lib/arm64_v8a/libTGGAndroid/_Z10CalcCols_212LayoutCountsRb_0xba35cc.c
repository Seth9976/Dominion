// 函数: _Z10CalcCols_212LayoutCountsRb
// 地址: 0xba35cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8_7 = (arg1 u>> 0x20).d
int32_t x9_2

if (x8_7 - 1 u< 2)
    x9_2 = arg2.d + 8
else
    x9_2 = arg2.d

int32_t x8_2

if (x8_7 - 3 u< 2)
    x8_2 = x9_2 + 0x18
else
    x8_2 = x9_2

int32_t x8_3

if (arg1.d == 0xb)
    x8_3 = x8_2 + 4
else
    x8_3 = x8_2

int32_t x8_5

if (x8_3 + 7 s< 0)
    x8_5 = x8_3 + 0xe
else
    x8_5 = x8_3 + 7

char* entry_x2
*entry_x2 = (x8_7 - 1 u< 2 ? 1 : 0).b
return zx.q((x8_5 s>> 3) + 5)
