// 函数: sub_ef5f0c
// 地址: 0xef5f0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10)
int64_t x0_1 = Botan::BigInt::bits()
int64_t x8_2

if ((x0_1 & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (x0_1 & 7)

return (x8_2 + x0_1) u>> 3
