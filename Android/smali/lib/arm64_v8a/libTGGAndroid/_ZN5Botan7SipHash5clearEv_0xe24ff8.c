// 函数: _ZN5Botan7SipHash5clearEv
// 地址: 0xe24ff8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 0x20)
int64_t x8 = *(entry_x0 + 0x28)

if (x8 != x0)
    memset(x0, 0, x8 - x0)
    x0 = *(entry_x0 + 0x20)

*(entry_x0 + 0x28) = x0
int64_t result = std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::shrink_to_fit()
__builtin_memset(entry_x0 + 0x38, 0, 0x11)
return result
