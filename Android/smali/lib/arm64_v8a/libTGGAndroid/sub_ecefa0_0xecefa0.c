// 函数: sub_ecefa0
// 地址: 0xecefa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = *(arg1 + 0x10)
*(arg1 + 0x28) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
*(arg1 + 8) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0

if (x0_1 != 0)
    int64_t x8_1 = *(arg1 + 0x20)
    *(arg1 + 0x18) = x0_1
    Botan::deallocate_memory(x0_1, x8_1 - x0_1, 1)

Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
return sub_eceff8() __tailcall
