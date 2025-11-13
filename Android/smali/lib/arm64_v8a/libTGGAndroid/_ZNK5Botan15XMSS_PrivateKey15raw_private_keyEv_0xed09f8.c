// 函数: _ZNK5Botan15XMSS_PrivateKey15raw_private_keyEv
// 地址: 0xed09f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::XMSS_PublicKey::raw_public_key()
char* result
char* result_2 = result
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t var_80
uint64_t x22 = var_80 - result_2
void* x8
char* x21_1
char* x24_1

if (var_80 == result_2)
    x24_1 = nullptr
    x21_1 = nullptr
    x8 = nullptr
label_ed0afc:
    void* entry_x0
    uint64_t x23_1 = (*(entry_x0 + 0x1d8) << 2) + 8
    
    if (x8 - x21_1 u< x23_1)
        void* x0_4 = Botan::allocate_memory(x23_1, 1)
        void* x22_1 = *entry_x8
        void* x24_2 = x0_4 + x24_1 - x21_1
        size_t x2_1 = entry_x8[1] - x22_1
        void* x21_2 = x24_2 - x2_1
        
        if (x2_1 s>= 1)
            memcpy(x21_2, x22_1, x2_1)
        
        int64_t x8_3 = entry_x8[2]
        *entry_x8 = x21_2
        entry_x8[1] = x24_2
        entry_x8[2] = x0_4 + x23_1
        
        if (x22_1 != 0)
            Botan::deallocate_memory(x22_1, x8_3 - x22_1, 1)
    
    int64_t x8_4 = 3
    
    while (true)
        int64_t x9_8 = *(entry_x0 + 0x18) - *(entry_x0 + 0x10)
        int64_t fp_1
        
        if (x9_8 == *(entry_x0 + 0x1d8))
            fp_1 = x8_4
        
        if (x9_8 != *(entry_x0 + 0x1d8) || *(entry_x0 + 0x168) - *(entry_x0 + 0x160) != x9_8)
            Botan::assertion_failure(
                "m_wots_priv_key.private_seed().size() == XMSS_PublicKey::m_xmss_params.element_size() "
            "&& m_prf.size() == XMSS_PublicKey::m_xmss_params.element_size()", 
                "Trying to retrieve index for partially initialized key", 
                "recover_global_leaf_index", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1896d)
        else
            Botan::XMSS_Index_Registry::get(*(entry_x0 + 0x178), entry_x0 + 0x10)
            int64_t* var_70
            int64_t x24_3 = *var_70
            int64_t* var_68
            
            if (var_68 != 0)
                int64_t x9_9
                int32_t i
                
                do
                    x9_9 = __ldaxr(&var_68[1])
                    i = __stlxr(x9_9 - 1, &var_68[1])
                while (i != 0)
                
                if (x9_9 == 0)
                    (*(*var_68 + 0x10))(var_68)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            uint8_t* x8_12 = entry_x8[1]
            int64_t x9_10 = entry_x8[2]
            uint8_t x27_1 = (x24_3 u>> fp_1 << 3).b
            
            if (x8_12 u< x9_10)
                *x8_12 = x27_1
                entry_x8[1] = &x8_12[1]
            label_ed0b78:
                x8_4 = fp_1 - 1
                
                if (fp_1 != 0)
                    continue
                
                char* x21_4 = *(entry_x0 + 0x160)
                int64_t x22_3 = *(entry_x0 + 0x168)
                var_70 = entry_x8
                
                if (x21_4 != x22_3)
                    do
                        sub_f4a08c(&var_70, x21_4)
                        x21_4 = &x21_4[1]
                    while (x22_3 != x21_4)
                
                char* x21_5 = *(entry_x0 + 0x10)
                int64_t x20_1 = *(entry_x0 + 0x18)
                var_70 = entry_x8
                
                if (x21_5 != x20_1)
                    do
                        sub_f4a08c(&var_70, x21_5)
                        x21_5 = &x21_5[1]
                    while (x20_1 != x21_5)
                
                if (result == 0)
                    return result
                
                char* result_1 = result
                return operator delete(result)
            else
                void* x23_4 = *entry_x8
                size_t x26_1 = x8_12 - x23_4
                
                if (x26_1 + 1 s>= 0)
                    void* x9_11 = x9_10 - x23_4
                    int64_t x10_6 = x9_11 << 1
                    int64_t x8_14
                    
                    if (x10_6 u< x26_1 + 1)
                        x8_14 = x26_1 + 1
                    else
                        x8_14 = x10_6
                    
                    int64_t x24_4
                    
                    x24_4 = x9_11 u< 0x3fffffffffffffff ? x8_14 : 0x7fffffffffffffff
                    
                    size_t x2_3
                    int64_t x25
                    
                    if (x24_4 == 0)
                        x25 = 0
                        x2_3 = x26_1
                    else
                        int64_t x0_11 = Botan::allocate_memory(x24_4, 1)
                        x23_4 = *entry_x8
                        x25 = x0_11
                        x2_3 = entry_x8[1] - x23_4
                    
                    uint8_t* x28_1 = x25 + x26_1
                    void* x26_2 = x28_1 - x2_3
                    *x28_1 = x27_1
                    
                    if (x2_3 s>= 1)
                        memcpy(x26_2, x23_4, x2_3)
                    
                    int64_t x8_16 = entry_x8[2]
                    *entry_x8 = x26_2
                    entry_x8[1] = &x28_1[1]
                    entry_x8[2] = x25 + x24_4
                    
                    if (x23_4 != 0)
                        Botan::deallocate_memory(x23_4, x8_16 - x23_4, 1)
                    
                    goto label_ed0b78
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        break
else if ((x22 & 0xffffffff80000000) == 0)
    char* x0_2
    int128_t v0_1
    int128_t v1_1
    x0_2, v0_1, v1_1 = Botan::allocate_memory(x22, 1)
    x21_1 = x0_2
    x8 = &x0_2[x22]
    x24_1 = x0_2
    *entry_x8 = x0_2
    entry_x8[1] = x0_2
    entry_x8[2] = x8
    
    if (result_2 != var_80)
        if (x22 u>= 0x20)
            if (x21_1 u< var_80)
                x24_1 = x21_1
            
            if (x21_1 u< var_80 && result_2 u< var_80 + x21_1 - result_2)
                goto label_ed0ae8
            
            int64_t i_3 = x22 & 0xffffffffffffffe0
            void* x10_1 = &result_2[0x10]
            x24_1 = &x21_1[i_3]
            result_2 = &result_2[i_3]
            void* x11_1 = &x21_1[0x10]
            int64_t i_2 = i_3
            int64_t i_1
            
            do
                v0_1 = *(x10_1 - 0x10)
                v1_1 = *x10_1
                x10_1 += 0x20
                i_1 = i_2
                i_2 -= 0x20
                *(x11_1 - 0x10) = v0_1
                *x11_1 = v1_1
                x11_1 += 0x20
            while (i_1 != 0x20)
            
            if (x22 != i_3)
                goto label_ed0ae8
        else
            x24_1 = x21_1
        label_ed0ae8:
            
            do
                char x9_3 = *result_2
                result_2 = &result_2[1]
                *x24_1 = x9_3
                x24_1 = &x24_1[1]
            while (var_80 != result_2)
    
    entry_x8[1] = x24_1
    goto label_ed0afc
sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
