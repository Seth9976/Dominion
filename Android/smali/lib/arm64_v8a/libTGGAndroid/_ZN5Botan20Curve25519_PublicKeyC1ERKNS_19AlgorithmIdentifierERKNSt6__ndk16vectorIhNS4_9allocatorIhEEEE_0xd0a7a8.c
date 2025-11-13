// 函数: _ZN5Botan20Curve25519_PublicKeyC1ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xd0a7a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::Curve25519_PublicKey + 0x88
*(arg1 + 8) = 0
uint8_t** entry_x2
int64_t x8_1
int64_t x9

if (arg1 + 8 == entry_x2)
    x8_1 = 0
    x9 = 0
else
    entry_x2[1]
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(arg1 + 8, 
        *entry_x2)
    x8_1 = *(arg1 + 8)
    x9 = *(arg1 + 0x10)

uint64_t result = x9 - x8_1
sub_d0a5c4(result)
return result
