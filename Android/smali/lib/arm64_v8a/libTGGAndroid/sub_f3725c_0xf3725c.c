// 函数: sub_f3725c
// 地址: 0xf3725c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg1 + 8)
**(arg1 + 0x10)
int64_t x0_1 = Botan::BigInt::bits()
int64_t x8_3

if ((x0_1 & 7) == 0)
    x8_3 = 0
else
    x8_3 = 8 - (x0_1 & 7)

**x19 = (x8_3 + x0_1) u>> 3
return 0
