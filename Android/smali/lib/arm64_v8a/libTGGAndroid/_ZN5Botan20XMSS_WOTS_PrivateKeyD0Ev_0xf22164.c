// 函数: _ZN5Botan20XMSS_WOTS_PrivateKeyD0Ev
// 地址: 0xf22164
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[1]
entry_x0[4] = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
*entry_x0 = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x8_1 = entry_x0[3]
    entry_x0[2] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
return operator delete(entry_x0) __tailcall
