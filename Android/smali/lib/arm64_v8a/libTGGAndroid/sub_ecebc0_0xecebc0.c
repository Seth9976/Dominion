// 函数: sub_ecebc0
// 地址: 0xecebc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg2 + 0x10)
*(arg2 + 0x28) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
*(arg2 + 8) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x8_1 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
sub_1101e04(arg1)
noreturn
