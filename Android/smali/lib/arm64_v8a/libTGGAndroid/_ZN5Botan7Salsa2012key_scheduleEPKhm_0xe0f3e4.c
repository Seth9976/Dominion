// 函数: _ZN5Botan7Salsa2012key_scheduleEPKhm
// 地址: 0xe0f3e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = *(arg1 + 8)
int64_t entry_x2
uint64_t x11 = entry_x2 u>> 2
int64_t x10 = *(arg1 + 0x10)
int64_t x9_1 = (x10 - x0) s>> 2

if (x11 u> x9_1)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
    x0 = *(arg1 + 8)
    x10 = *(arg1 + 0x10)
else if (x11 u< x9_1)
    x10 = x0 + (x11 << 2)
    *(arg1 + 0x10) = x10

if (x10 != x0)
    memcpy(x0, arg2, x10 - x0)

int64_t x8_2 = *(arg1 + 0x20)
int64_t x10_1 = *(arg1 + 0x28) - x8_2

if (x10_1 s>> 2 u<= 0xf)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[0x20])
else if (x10_1 != 0x40)
    *(arg1 + 0x28) = x8_2 + 0x40

int64_t x8_4 = *(arg1 + 0x38)
int64_t x9_6 = *(arg1 + 0x40) - x8_4

if (x9_6 u<= 0x3f)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x38])
else if (x9_6 != 0x40)
    *(arg1 + 0x40) = x8_4 + 0x40

if (*(arg1 + 0x20) == *(arg1 + 0x28))
    uint8_t* x0_9
    uint64_t x1_5
    x0_9, x1_5 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::Salsa20::set_iv(x0_9, x1_5) __tailcall

Botan::Salsa20::initialize_state()
*(*(arg1 + 0x20) + 0x18) = 0
*(*(arg1 + 0x20) + 0x1c) = 0
*(*(arg1 + 0x20) + 0x20) = 0
*(*(arg1 + 0x20) + 0x24) = 0
int64_t result = Botan::Salsa20::salsa_core(*(arg1 + 0x38), *(arg1 + 0x20), 0x14)
void* x8_11 = *(arg1 + 0x20)
*(x8_11 + 0x20) += 1
void* x8_12 = *(arg1 + 0x20)
int32_t x10_2 = *(x8_12 + 0x24)
int32_t x9_11

if (*(x8_12 + 0x20) == 0)
    x9_11 = x10_2 + 1
else
    x9_11 = x10_2

*(x8_12 + 0x24) = x9_11
*(arg1 + 0x50) = 0
return result
