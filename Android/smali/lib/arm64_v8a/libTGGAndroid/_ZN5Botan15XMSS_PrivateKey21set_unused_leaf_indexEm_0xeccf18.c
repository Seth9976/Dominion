// 函数: _ZN5Botan15XMSS_PrivateKey21set_unused_leaf_indexEm
// 地址: 0xeccf18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1

if (entry_x1 u>> *(arg1 + 0x1e0) == 0)
    int64_t x8_3 = *(arg1 + 0x18) - *(arg1 + 0x10)
    
    if (x8_3 == *(arg1 + 0x1d8) && *(arg1 + 0x168) - *(arg1 + 0x160) == x8_3)
        int64_t result = Botan::XMSS_Index_Registry::get(*(arg1 + 0x178), arg1 + 0x10)
        int128_t var_40
        int64_t* x21 = var_40.q
        int64_t* x20 = var_40:8.q
        
        if (x20 != 0)
            int64_t x9_5
            int32_t i
            
            do
                x9_5 = __ldaxr(&x20[1])
                i = __stlxr(x9_5 - 1, &x20[1])
            while (i != 0)
            
            if (x9_5 == 0)
                (*(*x20 + 0x10))(x20)
                result = std::__ndk1::__shared_weak_count::__release_weak()
        
        while (true)
            int64_t i_1 = *x21
            
            if (i_1 u> entry_x1)
                break
            
            while (__ldaxr(x21) == i_1)
                if (__stlxr(entry_x1, x21) == 0)
                    return result
            
            __clrex()
        
        return result
    
    Botan::assertion_failure(
        "m_wots_priv_key.private_seed().size() == XMSS_PublicKey::m_xmss_params.element_size() && m_prf."
    "size() == XMSS_PublicKey::m_xmss_params.element_size()", 
        "Trying to retrieve index for partially initialized key", "recover_global_leaf_index", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1896d)

void** x0_3 = __cxa_allocate_exception(0x20)
int64_t x0_4
int128_t v0
x0_4, v0 = operator new(0x30)
(*"ex out of bounds")[0].o
int64_t var_30 = x0_4
v0 = data_71cbb0
__builtin_strncpy(x0_4, "XMSS private key leaf index out of bounds", 0x2a)
int128_t var_40_1 = v0
*x0_3 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_3[1])
*x0_3 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_3, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
