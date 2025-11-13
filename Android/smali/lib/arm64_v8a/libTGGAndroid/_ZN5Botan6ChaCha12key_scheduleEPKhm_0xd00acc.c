// 函数: _ZN5Botan6ChaCha12key_scheduleEPKhm
// 地址: 0xd00acc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = *(arg1 + 0x10)
int64_t entry_x2
uint64_t x11 = entry_x2 u>> 2
int64_t x10 = *(arg1 + 0x18)
int64_t x9_1 = (x10 - x0) s>> 2

if (x11 u> x9_1)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[0x10])
    x0 = *(arg1 + 0x10)
    x10 = *(arg1 + 0x18)
else if (x11 u< x9_1)
    x10 = x0 + (x11 << 2)
    *(arg1 + 0x18) = x10

if (x10 != x0)
    memcpy(x0, arg2, x10 - x0)

int64_t x8_2 = *(arg1 + 0x28)
int64_t x10_1 = *(arg1 + 0x30) - x8_2

if (x10_1 s>> 2 u<= 0xf)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[0x28])
else if (x10_1 != 0x40)
    *(arg1 + 0x30) = x8_2 + 0x40

int64_t x8_4 = *(arg1 + 0x40)
int64_t x9_6 = *(arg1 + 0x48) - x8_4

if (x9_6 u<= 0x1ff)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x40])
else if (x9_6 != 0x200)
    *(arg1 + 0x48) = x8_4 + 0x200

if (*(arg1 + 0x28) == *(arg1 + 0x30))
    uint8_t* x0_9
    uint64_t x1_5
    x0_9, x1_5 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::ChaCha::set_iv(x0_9, x1_5) __tailcall

Botan::ChaCha::initialize_state()
*(*(arg1 + 0x28) + 0x38) = 0
*(*(arg1 + 0x28) + 0x3c) = 0
*(arg1 + 8)
int64_t result = Botan::ChaCha::chacha_x8(arg1, *(arg1 + 0x40), *(arg1 + 0x28))
*(arg1 + 0x58) = 0
return result
