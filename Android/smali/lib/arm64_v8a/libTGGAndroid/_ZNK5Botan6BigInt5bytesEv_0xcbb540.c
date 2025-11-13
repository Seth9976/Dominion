// 函数: _ZNK5Botan6BigInt5bytesEv
// 地址: 0xcbb540
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Botan::BigInt::bits()
int64_t x8_2

if ((x0 & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (x0 & 7)

return (x8_2 + x0) u>> 3
