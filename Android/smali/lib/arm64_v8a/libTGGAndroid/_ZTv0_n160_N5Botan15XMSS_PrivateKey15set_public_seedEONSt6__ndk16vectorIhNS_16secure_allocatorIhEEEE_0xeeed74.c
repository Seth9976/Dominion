// 函数: _ZTv0_n160_N5Botan15XMSS_PrivateKey15set_public_seedEONSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xeeed74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1 + *(*arg1 - 0xa0)
void* x0 = *(x20 + 0x288)

if (x0 != 0)
    int64_t x8_2 = *(x20 + 0x298)
    *(x20 + 0x290) = x0
    Botan::deallocate_memory(x0, x8_2 - x0, 1)
    __builtin_memset(x20 + 0x288, 0, 0x18)

*(x20 + 0x288) = *arg2
*(x20 + 0x290) = arg2[1]
*(x20 + 0x298) = arg2[2]
__builtin_memset(arg2, 0, 0x18)
*(x20 + 0x290)
return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
    x20 + 0x100, *(x20 + 0x288)) __tailcall
