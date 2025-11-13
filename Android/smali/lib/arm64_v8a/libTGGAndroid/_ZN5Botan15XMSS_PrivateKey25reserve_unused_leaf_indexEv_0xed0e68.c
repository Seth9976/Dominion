// 函数: _ZN5Botan15XMSS_PrivateKey25reserve_unused_leaf_indexEv
// 地址: 0xed0e68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x8_1 = *(entry_x0 + 0x18) - *(entry_x0 + 0x10)

if (x8_1 != *(entry_x0 + 0x1d8) || *(entry_x0 + 0x168) - *(entry_x0 + 0x160) != x8_1)
    Botan::assertion_failure(
        "m_wots_priv_key.private_seed().size() == XMSS_PublicKey::m_xmss_params.element_size() && m_prf."
    "size() == XMSS_PublicKey::m_xmss_params.element_size()", 
        "Trying to retrieve index for partially initialized key", "recover_global_leaf_index", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1896d)
else
    Botan::XMSS_Index_Registry::get(*(entry_x0 + 0x178), entry_x0 + 0x10)
    int128_t var_40
    int64_t x8_2 = var_40.q
    int64_t result
    int32_t i
    
    do
        result = __ldaxr(x8_2)
        i = __stlxr(result + 1, x8_2)
    while (i != 0)
    int64_t* x21_1 = var_40:8.q
    
    if (x21_1 != 0)
        int64_t x9_4
        int32_t i_1
        
        do
            x9_4 = __ldaxr(&x21_1[1])
            i_1 = __stlxr(x9_4 - 1, &x21_1[1])
        while (i_1 != 0)
        
        if (x9_4 == 0)
            (*(*x21_1 + 0x10))(x21_1)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    if (result u>> *(entry_x0 + 0x1e0) == 0)
        return result

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0
x0_5, v0 = operator new(0x30)
(*"natures exhaused")[0].o
int64_t var_30 = x0_5
v0 = data_71a900
__builtin_strncpy(x0_5, "XMSS private key, one time signatures exhaused", 0x2f)
int128_t var_40_1 = v0
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
