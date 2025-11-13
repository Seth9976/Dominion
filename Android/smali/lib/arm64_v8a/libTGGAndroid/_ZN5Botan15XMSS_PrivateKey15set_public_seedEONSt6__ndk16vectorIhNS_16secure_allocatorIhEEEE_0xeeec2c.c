// 函数: _ZN5Botan15XMSS_PrivateKey15set_public_seedEONSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xeeec2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg1 + 0x288)

if (x0 != 0)
    int64_t x8_1 = *(arg1 + 0x298)
    *(arg1 + 0x290) = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)
    __builtin_memset(arg1 + 0x288, 0, 0x18)

int64_t* entry_x1
*(arg1 + 0x288) = *entry_x1
*(arg1 + 0x290) = entry_x1[1]
*(arg1 + 0x298) = entry_x1[2]
__builtin_memset(entry_x1, 0, 0x18)
*(arg1 + 0x290)
return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
    arg1 + 0x100, *(arg1 + 0x288)) __tailcall
