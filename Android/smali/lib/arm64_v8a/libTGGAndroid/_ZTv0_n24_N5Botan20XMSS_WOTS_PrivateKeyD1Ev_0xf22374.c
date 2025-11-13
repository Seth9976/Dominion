// 函数: _ZTv0_n24_N5Botan20XMSS_WOTS_PrivateKeyD1Ev
// 地址: 0xf22374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_2 = arg1 + *(*arg1 - 0x18)
*(x8_2 + 0x20) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
void* x0 = *(x8_2 + 8)
*x8_2 = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x9_1 = *(x8_2 + 0x18)
    *(x8_2 + 0x10) = x0
    Botan::deallocate_memory(x0, x9_1 - x0, 1)

return Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey() __tailcall
