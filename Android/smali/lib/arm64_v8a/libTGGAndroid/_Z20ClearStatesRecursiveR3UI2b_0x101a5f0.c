// 函数: _Z20ClearStatesRecursiveR3UI2b
// 地址: 0x101a5f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gNumClears += 1
int64_t x8 = *(arg1 + 0x1660)
int32_t x9_2 = *(arg1 + 0x1770)
*(arg1 + 0x17a0) = 0
int32_t x10 = *(arg1 + 0x1970)
*(arg1 + 0x1770) = 0
*(arg1 + 0x1670) = x8
*(arg1 + 0x1774) = x9_2

if (x10 s>= 1)
    int64_t i = 0
    
    do
        ClearStatesRecursive(*gUI2 + zx.q(*(arg1 + 0x1870 + (i << 2))) * 0x19a8, arg2 & 1)
        i += 1
    while (i s< sx.q(*(arg1 + 0x1970)))

int32_t x8_4 = *(arg1 + 0x1978)

if (x8_4 == 0)
    return 

int64_t x9_4 = *gUI2

if (x9_4 == 0)
    return 

ClearStatesRecursive(x9_4 + zx.q(x8_4.w) * 0x19a8, arg2 & 1)
int32_t x8_6 = *(arg1 + 0x197c)

if (x8_6 == 0)
    return 

int64_t x9_5 = *gUI2

if (x9_5 == 0)
    return 

ClearStatesRecursive(x9_5 + zx.q(x8_6.w) * 0x19a8, arg2 & 1)
int32_t x8_8 = *(arg1 + 0x1980)

if (x8_8 == 0)
    return 

int64_t x9_6 = *gUI2

if (x9_6 == 0)
    return 

ClearStatesRecursive(x9_6 + zx.q(x8_8.w) * 0x19a8, arg2 & 1)
int32_t x8_10 = *(arg1 + 0x1984)

if (x8_10 == 0)
    return 

int64_t x9_7 = *gUI2

if (x9_7 == 0)
    return 

ClearStatesRecursive(x9_7 + zx.q(x8_10.w) * 0x19a8, arg2 & 1)
int32_t x8_12 = *(arg1 + 0x1988)

if (x8_12 == 0)
    return 

int64_t x9_8 = *gUI2

if (x9_8 != 0)
    return ClearStatesRecursive(x9_8 + zx.q(x8_12.w) * 0x19a8, arg2 & 1) __tailcall
