// 函数: _ZN5Botan20Curve25519_PublicKeyC2ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xd0a538
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 8)
__builtin_memset(arg1 + 8, 0, 0x18)
uint8_t** entry_x3
int64_t x8_2
int64_t x9_1

if (arg1 + 8 == entry_x3)
    x8_2 = 0
    x9_1 = 0
else
    entry_x3[1]
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(arg1 + 8, 
        *entry_x3)
    x8_2 = *(arg1 + 8)
    x9_1 = *(arg1 + 0x10)

uint64_t result = x9_1 - x8_2
sub_d0a5c4(result)
return result
