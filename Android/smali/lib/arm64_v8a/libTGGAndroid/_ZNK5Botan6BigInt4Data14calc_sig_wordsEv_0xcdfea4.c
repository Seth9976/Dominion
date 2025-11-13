// 函数: _ZNK5Botan6BigInt4Data14calc_sig_wordsEv
// 地址: 0xcdfea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x8_1 = *entry_x0
int64_t x10_2 = entry_x0[1]
int64_t x9 = x10_2 - x8_1

if (x10_2 == x8_1)
    return 0

int64_t x11

x11 = x9 s>= 0 ? x9 : -1

int64_t x10 = x8_1 - x10_2
int64_t x11_1

x11_1 = x11 s< 1 ? x11 : 1

int64_t result = x9 s>> 2
int64_t x9_1

x9_1 = x10 s> x9 ? x10 : x9

int64_t i_1 = x11_1 * (x9_1 u>> 2)
uint64_t x10_1 = 1
int64_t i

do
    int32_t x11_2 = *(x8_1 - 4 + (i_1 << 2))
    i = i_1
    i_1 -= 1
    x10_1 = zx.q(x10_1.d) & zx.q(((x11_2 - 1) & not.d(x11_2)) s>> 0x1f)
    result -= x10_1
while (i != 1)
return result
