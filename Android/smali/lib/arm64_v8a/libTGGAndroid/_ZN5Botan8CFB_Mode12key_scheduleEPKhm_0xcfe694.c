// 函数: _ZN5Botan8CFB_Mode12key_scheduleEPKhm
// 地址: 0xcfe694
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::SymmetricAlgorithm::set_key(*(arg1 + 0x40), arg2)
int64_t result = (*(**(arg1 + 0x40) + 0x30))()
int64_t x9 = *(arg1 + 0x20)
int64_t x10_1 = *(arg1 + 0x28) - x9

if (result u> x10_1)
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x20])
        __tailcall

if (result u< x10_1)
    *(arg1 + 0x28) = x9 + result

return result
