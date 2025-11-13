// 函数: _ZN5Botan4XTEA12key_scheduleEPKhm
// 地址: 0xed60cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)
int64_t x10 = *(arg1 + 0x10) - x8

if (x10 s>> 2 u<= 0x3f)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
else if (x10 != 0x100)
    *(arg1 + 0x10) = x8 + 0x100

int32_t* x0_1 = Botan::allocate_memory(4, 4)
int64_t i = 0
int32_t x9_2 = 0
int32_t temp0 = _byteswap(*arg2)
int32_t temp0_1 = _byteswap(*(arg2 + 4))
*x0_1 = temp0
x0_1[1] = temp0_1
int32_t temp0_2 = _byteswap(*(arg2 + 8))
int32_t temp0_3 = _byteswap(*(arg2 + 0xc))
x0_1[2] = temp0_2
x0_1[3] = temp0_3

do
    int32_t x10_9 = x9_2 + x0_1[zx.q(x9_2) & 3]
    x9_2 -= 0x61c88647
    *(*(arg1 + 8) + i) = x10_9
    void* x11_4 = *(arg1 + 8) + i
    i += 8
    *(x11_4 + 4) = x9_2 + x0_1[zx.q(x9_2 u>> 0xb) & 3]
while (i != 0x100)

return Botan::deallocate_memory(x0_1, 4, 4)
