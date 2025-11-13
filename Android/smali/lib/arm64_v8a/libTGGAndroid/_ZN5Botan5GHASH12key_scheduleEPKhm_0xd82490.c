// 函数: _ZN5Botan5GHASH12key_scheduleEPKhm
// 地址: 0xd82490
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(&arg1[8], 
    arg2)
void* result = &arg1[0x20]
int64_t x8 = *result
int64_t x9_1 = *(result + 8) - x8

if (x9_1 u<= 0xf)
    result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(result)
else if (x9_1 != 0x10)
    *(arg1 + 0x28) = x8 + 0x10

int64_t x8_2 = *(arg1 + 0x68)
int64_t* x9_2 = *(arg1 + 8)
int64_t x10 = *(arg1 + 0x70)
*(arg1 + 0x98) = 0
*(arg1 + 0xa0) = 0
uint64_t x12 = x9_2[1]
int64_t x10_1 = x10 - x8_2
uint64_t x21 = _byteswap(*x9_2)
uint64_t x22 = _byteswap(x12)

if (x10_1 s>> 3 u<= 0xff)
    result =
        std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::__append(&arg1[0x68])
else if (x10_1 != 0x800)
    *(arg1 + 0x70) = x8_2 + 0x800

for (int64_t i = 0; i != 0x800; )
    int64_t x11_2 = (x22 & 1) * -0x1f00000000000000
    *(*(arg1 + 0x68) + i) = x21
    void* x10_4 = *(arg1 + 0x68) + i
    i += 0x20
    *(x10_4 + 8) = x22
    x22 = (x21 << 0x40 | x22) u>> 1
    x21 = x11_2 ^ x21 u>> 1

for (int64_t i_1 = 0; i_1 != 0x800; )
    int64_t x11_4 = (x22 & 1) * -0x1f00000000000000
    *(*(arg1 + 0x68) + i_1 + 0x10) = x21
    void* x10_8 = *(arg1 + 0x68) + i_1
    i_1 += 0x20
    *(x10_8 + 0x18) = x22
    x22 = (x21 << 0x40 | x22) u>> 1
    x21 = x11_4 ^ x21 u>> 1

return result
