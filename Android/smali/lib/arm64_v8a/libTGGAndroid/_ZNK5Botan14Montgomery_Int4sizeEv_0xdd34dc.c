// 函数: _ZNK5Botan14Montgomery_Int4sizeEv
// 地址: 0xdd34dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
*entry_x0
int64_t x0_1 = Botan::BigInt::bits()
int64_t x8_2

if ((x0_1 & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (x0_1 & 7)

return (x8_2 + x0_1) u>> 3
