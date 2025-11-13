// 函数: _ZN5Botan14XMSS_PublicKey15set_public_seedEONSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xee82bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *(arg1 + 0x108)

if (result != 0)
    int64_t x8_1 = *(arg1 + 0x118)
    *(arg1 + 0x110) = result
    result = Botan::deallocate_memory(result, x8_1 - result, 1)
    __builtin_memset(arg1 + 0x108, 0, 0x18)

int64_t* entry_x1
*(arg1 + 0x108) = *entry_x1
*(arg1 + 0x110) = entry_x1[1]
*(arg1 + 0x118) = entry_x1[2]
__builtin_memset(entry_x1, 0, 0x18)
return result
