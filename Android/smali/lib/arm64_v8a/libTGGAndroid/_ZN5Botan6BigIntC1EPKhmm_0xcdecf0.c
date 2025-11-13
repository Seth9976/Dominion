// 函数: _ZN5Botan6BigIntC1EPKhmm
// 地址: 0xcdecf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = -1
int64_t entry_x3
uint64_t x21

if (entry_x3 u< arg3 << 3)
    x21 = (entry_x3 + 7) u>> 3
else
    x21 = arg3

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x20) = 1
int64_t result = Botan::BigInt::binary_decode(arg1, arg2)

if (entry_x3 u>= x21 << 3)
    return result

return Botan::BigInt::operator>>=(arg1)
