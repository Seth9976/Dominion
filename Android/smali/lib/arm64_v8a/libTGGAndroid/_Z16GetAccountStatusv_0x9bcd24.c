// 函数: _Z16GetAccountStatusv
// 地址: 0x9bcd24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gProfileAccount == 1)
    return 1

if (*(gProfileAccount + 0x18) == 1)
    return 3

GetActiveProfile()

if (zx.d(*XString::operator char const*()) != 0)
    return 6

int32_t x8_4 = *(gProfileAccount + 0x18) - 2

if (x8_4 u< 3)
    return zx.q(*(&data_7a7a84 + (sx.q(x8_4) << 2)))

if (zx.d(*XString::operator char const*()) != 0)
    return 2

if (zx.d(*XString::operator char const*()) == 0)
    return 0

pthread_kill(pthread_self(), 6)
return GameProfileAccountUpdate(XNoReturn()) __tailcall
