// 函数: _ZN5Botan13GOST_28147_895clearEv
// 地址: 0xd842ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 0x20)
int64_t x8 = *(entry_x0 + 0x28)

if (x8 != x0)
    memset(x0, 0, x8 - x0)
    x0 = *(entry_x0 + 0x20)

*(entry_x0 + 0x28) = x0
return std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::shrink_to_fit() __tailcall
