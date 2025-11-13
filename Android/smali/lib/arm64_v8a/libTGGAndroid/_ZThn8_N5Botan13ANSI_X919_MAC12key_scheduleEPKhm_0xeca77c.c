// 函数: _ZThn8_N5Botan13ANSI_X919_MAC12key_scheduleEPKhm
// 地址: 0xeca77c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x18)
int64_t x9_1 = *(arg1 + 0x20) - x8

if (x9_1 u<= 7)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x18)
else if (x9_1 != 8)
    *(arg1 + 0x20) = x8 + 8

Botan::SymmetricAlgorithm::set_key(*(arg1 + 8), arg2)
uint64_t x1_2

if (arg3 == 0x10)
    x1_2 = arg2 + 8
else
    x1_2 = arg2

return Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x10), x1_2) __tailcall
