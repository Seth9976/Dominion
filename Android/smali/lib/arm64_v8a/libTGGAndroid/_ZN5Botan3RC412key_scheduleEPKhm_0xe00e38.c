// 函数: _ZN5Botan3RC412key_scheduleEPKhm
// 地址: 0xe00e38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x18)
int64_t x9_1 = *(arg1 + 0x20) - x8

if (x9_1 u<= 0xff)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x18])
else if (x9_1 != 0x100)
    *(arg1 + 0x20) = x8 + 0x100

int64_t x8_2 = *(arg1 + 0x30)
int64_t x9_3 = *(arg1 + 0x38) - x8_2

if (x9_3 u<= 0xff)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x30])
else if (x9_3 != 0x100)
    *(arg1 + 0x38) = x8_2 + 0x100

int64_t i = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x48) = 0

do
    (*(arg1 + 0x18))[i] = (i.d).b
    i += 1
while (i != 0x100)

uint64_t x9_5 = 0

for (int64_t i_1 = 0; i_1 != 0x100; )
    char* x10_1 = *(arg1 + 0x18)
    char x12_1 = x10_1[i_1]
    int64_t entry_x2
    x9_5 = zx.q(x9_5.b + *(arg2 + i_1 u% entry_x2) + x12_1)
    x10_1[i_1] = x10_1[x9_5]
    i_1 += 1
    x10_1[x9_5] = x12_1

int64_t x20_1 = 0
int64_t result
int64_t x8_4
int64_t x9_8
int64_t x10_2

do
    result = Botan::RC4::generate()
    x9_8 = *(arg1 + 0x30)
    x8_4 = *(arg1 + 0x38)
    x10_2 = *(arg1 + 8)
    x20_1 = x20_1 + x8_4 - x9_8
while (x20_1 u<= x10_2)

*(arg1 + 0x48) += x10_2 u% (x8_4 - x9_8)
return result
