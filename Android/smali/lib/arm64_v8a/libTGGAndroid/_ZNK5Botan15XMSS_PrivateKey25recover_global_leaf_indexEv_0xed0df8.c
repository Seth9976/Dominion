// 函数: _ZNK5Botan15XMSS_PrivateKey25recover_global_leaf_indexEv
// 地址: 0xed0df8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x9_1 = *(entry_x0 + 0x18) - *(entry_x0 + 0x10)

if (x9_1 == *(entry_x0 + 0x1d8) && *(entry_x0 + 0x168) - *(entry_x0 + 0x160) == x9_1)
    return Botan::XMSS_Index_Registry::get(*(entry_x0 + 0x178), entry_x0 + 0x10) __tailcall

Botan::assertion_failure(
    "m_wots_priv_key.private_seed().size() == XMSS_PublicKey::m_xmss_params.element_size() && m_prf."
"size() == XMSS_PublicKey::m_xmss_params.element_size()", 
    "Trying to retrieve index for partially initialized key", "recover_global_leaf_index", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1896d)
return Botan::XMSS_PrivateKey::reserve_unused_leaf_index() __tailcall
