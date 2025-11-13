// 函数: _ZN5Botan7CBC_MAC12key_scheduleEPKhm
// 地址: 0xcf17fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1 = (*(**(arg1 + 0x10) + 0x30))()
int64_t x9 = *(arg1 + 0x18)
int64_t x10_1 = *(arg1 + 0x20) - x9

if (x0_1 u> x10_1)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x18])
else if (x0_1 u< x10_1)
    *(arg1 + 0x20) = x9 + x0_1

return Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x10), arg2) __tailcall
