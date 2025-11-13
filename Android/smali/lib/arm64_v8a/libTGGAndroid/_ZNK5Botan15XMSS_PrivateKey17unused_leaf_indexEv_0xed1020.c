// 函数: _ZNK5Botan15XMSS_PrivateKey17unused_leaf_indexEv
// 地址: 0xed1020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x8_1 = *(entry_x0 + 0x18) - *(entry_x0 + 0x10)

if (x8_1 != *(entry_x0 + 0x1d8) || *(entry_x0 + 0x168) - *(entry_x0 + 0x160) != x8_1)
    Botan::assertion_failure(
        "m_wots_priv_key.private_seed().size() == XMSS_PublicKey::m_xmss_params.element_size() && m_prf."
    "size() == XMSS_PublicKey::m_xmss_params.element_size()", 
        "Trying to retrieve index for partially initialized key", "recover_global_leaf_index", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1896d)
    return Botan::XMSS_PublicKey::raw_public_key() __tailcall

Botan::XMSS_Index_Registry::get(*(entry_x0 + 0x178), entry_x0 + 0x10)
int64_t* var_30
int64_t result = *var_30
int64_t* var_28

if (var_28 != 0)
    int64_t x9_4
    int32_t i
    
    do
        x9_4 = __ldaxr(&var_28[1])
        i = __stlxr(x9_4 - 1, &var_28[1])
    while (i != 0)
    
    if (x9_4 == 0)
        (*(*var_28 + 0x10))(var_28)
        std::__ndk1::__shared_weak_count::__release_weak()

return result
