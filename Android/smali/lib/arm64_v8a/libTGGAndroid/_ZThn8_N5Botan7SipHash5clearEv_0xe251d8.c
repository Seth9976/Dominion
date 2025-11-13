// 函数: _ZThn8_N5Botan7SipHash5clearEv
// 地址: 0xe251d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = *(arg1 + 0x18)
int64_t x8 = *(arg1 + 0x20)

if (x8 != x0)
    memset(x0, 0, x8 - x0)
    x0 = *(arg1 + 0x18)

*(arg1 + 0x20) = x0
int64_t result = std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::shrink_to_fit()
__builtin_memset(arg1 + 0x30, 0, 0x11)
return result
