// 函数: _ZTv0_n24_N5Botan20XMSS_WOTS_PrivateKeyD0Ev
// 地址: 0xf223d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + *(*arg1 - 0x18)
*(x19 + 0x20) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
void* x0 = *(x19 + 8)
*x19 = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x8_3 = *(x19 + 0x18)
    *(x19 + 0x10) = x0
    Botan::deallocate_memory(x0, x8_3 - x0, 1)

Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
return operator delete(x19) __tailcall
