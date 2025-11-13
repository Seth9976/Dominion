// 函数: sub_c9eb00
// 地址: 0xc9eb00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x9 = zx.d(*arg3)
uint32_t x8 = zx.d(*arg4)

if (arg2 u>= 0x10)
    do
        arg2 -= 0x10
        uint32_t x9_1 = x9 + zx.d(*arg1)
        uint32_t x9_2 = x9_1 + zx.d(arg1[1])
        uint32_t x9_3 = x9_2 + zx.d(arg1[2])
        uint32_t x9_4 = x9_3 + zx.d(arg1[3])
        uint32_t x9_5 = x9_4 + zx.d(arg1[4])
        uint32_t x9_6 = x9_5 + zx.d(arg1[5])
        uint32_t x9_7 = x9_6 + zx.d(arg1[6])
        uint32_t x9_8 = x9_7 + zx.d(arg1[7])
        uint32_t x9_9 = x9_8 + zx.d(arg1[8])
        uint32_t x9_10 = x9_9 + zx.d(arg1[9])
        uint32_t x9_11 = x9_10 + zx.d(arg1[0xa])
        uint32_t x9_12 = x9_11 + zx.d(arg1[0xb])
        uint32_t x9_13 = x9_12 + zx.d(arg1[0xc])
        uint32_t x9_14 = x9_13 + zx.d(arg1[0xd])
        uint32_t x9_15 = x9_14 + zx.d(arg1[0xe])
        uint32_t x10_9 = zx.d(arg1[0xf])
        arg1 = &arg1[0x10]
        x9 = x9_15 + x10_9
        x8 = x9_1 + x8 + x9_2 + x9_3 + x9_4 + x9_5 + x9_6 + x9_7 + x9_8 + x9_9 + x9_10 + x9_11
            + x9_12 + x9_13 + x9_14 + x9_15 + x9
    while (arg2 u> 0xf)

if (arg2 != 0)
    int64_t i
    
    do
        uint32_t x10_10 = zx.d(*arg1)
        arg1 = &arg1[1]
        i = arg2
        arg2 -= 1
        x9 += x10_10
        x8 += x9
    while (i != 1)

*arg3 = x9.w + (x9 u/ 0xfff1).w * 0xf
*arg4 = x8.w + (x8 u/ 0xfff1).w * 0xf
