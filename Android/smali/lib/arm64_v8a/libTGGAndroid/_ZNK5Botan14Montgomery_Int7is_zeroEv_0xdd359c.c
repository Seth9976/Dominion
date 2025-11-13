// 函数: _ZNK5Botan14Montgomery_Int7is_zeroEv
// 地址: 0xdd359c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x8_1 = *(entry_x0 + 0x28)

if (x8_1 != -1)
    return zx.q(x8_1 == 0 ? 1 : 0)

int64_t x9 = *(entry_x0 + 0x10)
int64_t x11 = *(entry_x0 + 0x18)
int64_t x10 = x11 - x9

if (x11 == x9)
    *(entry_x0 + 0x28) = 0
    return 1

int64_t x12

x12 = x10 s>= 0 ? x10 : -1

int64_t x11_1 = x9 - x11
int64_t x12_1

x12_1 = x12 s< 1 ? x12 : 1

int64_t x8 = x10 s>> 2
int64_t x10_1

x10_1 = x11_1 s> x10 ? x11_1 : x10

int64_t i_1 = x12_1 * (x10_1 u>> 2)
uint64_t x11_2 = 1
int64_t i

do
    int32_t x12_2 = *(x9 - 4 + (i_1 << 2))
    i = i_1
    i_1 -= 1
    x11_2 = zx.q(x11_2.d) & zx.q(((x12_2 - 1) & not.d(x12_2)) s>> 0x1f)
    x8 -= x11_2
while (i != 1)
*(entry_x0 + 0x28) = x8
return zx.q(x8 == 0 ? 1 : 0)
