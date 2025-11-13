// 函数: _ZN5Botan3TLS9Callbacks12tls_dh_agreeERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEES8_S8_RKNS0_6PolicyERNS_21RandomNumberGeneratorE
// 地址: 0xe58810
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 8)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_60 = -1
int32_t var_58 = 1
Botan::BigInt::binary_decode(&result_1, *arg2)
*(arg3 + 8)
void* var_a0
__builtin_memset(&var_a0, 0, 0x18)
int64_t var_88 = -1
int32_t var_80 = 1
Botan::BigInt::binary_decode(&var_a0, *arg3)
uint64_t x1_2 = *arg4
*(arg4 + 8)
void* var_c8
__builtin_memset(&var_c8, 0, 0x18)
int64_t i_10 = -1
int32_t var_a8 = 1
Botan::BigInt::binary_decode(&var_c8, x1_2)
int128_t var_1a0

if (var_a8 != 0)
    int64_t i_7 = i_10
    
    if (i_7 == -1)
        void* x9_1 = var_c8
        int64_t var_c0
        void* x10_1 = var_c0 - x9_1
        
        if (var_c0 == x9_1)
            i_7 = 0
            int64_t var_b0 = 0
        else
            void* x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -ffffffffffffffff
            
            void* x11_2 = x9_1 - var_c0
            void* x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_7 = x10_1 s>> 2
            void* x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_8 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_8 << 2))
                i = i_8
                i_8 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_7 -= x11_3
            while (i != 1)
            int64_t i_11 = i_7
            
            if (i_7 u> 1)
                goto label_e58990
        
    label_e58940:
        
        if (i_7 != 0)
            void* x9_3 = var_c8
            int32_t x10_4 = 0
            int64_t i_1
            
            do
                int32_t x11_4 = *x9_3
                x9_3 += 4
                i_1 = i_7
                i_7 -= 1
                int32_t x11_6 = (((x11_4 ^ 1) - 1) & not.d(x11_4)) s>> 0x1f
                x10_4 =
                    (x10_4 & x11_6) | ((((x11_4 - 1) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
            while (i_1 != 1)
            
            if (x10_4 s>= 1)
                goto label_e58990
    else
        if (i_7 u<= 1)
            goto label_e58940
        
    label_e58990:
        uint32_t var_120 = 1
        Botan::BigInt::add2(&result_1, &var_120, 1, 0)
        int32_t x0_5 = Botan::BigInt::cmp(&var_c8, &var_1a0)
        void* x8_4 = var_1a0.q
        void* var_190
        
        if (x8_4 != 0)
            var_1a0:8.q = x8_4
            Botan::deallocate_memory(x8_4, (var_190 - x8_4) s>> 2, 4)
        
        if ((x0_5 & 0x80000000) != 0)
            Botan::BigInt var_d8
            Botan::DL_Group::DL_Group(&var_d8, &result_1)
            Botan::DL_Group* entry_x5
            
            if ((Botan::DL_Group::verify_group(&var_d8, entry_x5.b) & 1) == 0)
                void** x0_44 = __cxa_allocate_exception(0x28)
                int64_t x0_45
                int128_t v0_3
                x0_45, v0_3 = operator new(0x20)
                int64_t var_190_4 = x0_45
                var_1a0 = data_71bd10
                __builtin_strncpy(x0_45, "DH group validation failed", 0x1b)
                *x0_44 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_44[1])
                x0_44[4].d = 0x47
                *x0_44 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                __cxa_throw(x0_44, _typeinfo_for_Botan::TLS::TLS_Exception, 
                    Botan::Exception::~Exception)
                noreturn
            
            Botan::DH_PublicKey::DH_PublicKey(&var_120, &var_d8)
            (*(*arg5 + 0xe0))(arg5, &var_120 + *(var_120.q - 0x90))
            void* var_1c8
            __builtin_memset(&var_1c8, 0, 0x18)
            int64_t var_1b0 = -1
            int32_t var_1a8 = 1
            Botan::DH_PrivateKey::DH_PrivateKey(&var_1a0, entry_x5, &var_d8)
            void* x0_13 = var_1c8
            void* var_1c0_1
            void* var_1b8
            
            if (x0_13 != 0)
                var_1c0_1 = x0_13
                Botan::deallocate_memory(x0_13, (var_1b8 - x0_13) s>> 2, 4)
            
            var_1c8.b = 6
            var_1c8:1.d = 0x776152
            int16_t var_1f0 = 0
            int64_t* var_1d0
            Botan::PK_Key_Agreement::PK_Key_Agreement(&var_1d0, &var_1a0:8, entry_x5, &var_1c8)
            void* var_1e0
            
            if ((zx.d(var_1f0.b) & 1) != 0)
                operator delete(var_1e0)
            
            if ((zx.d(var_1c8.b) & 1) != 0)
                operator delete(var_1b8)
            
            Botan::DH_PublicKey::public_value()
            int16_t var_238 = 0
            uint64_t var_220
            int64_t var_218
            Botan::PK_Key_Agreement::derive_key(&var_1d0, nullptr, var_220, var_218 - var_220, 
                &var_238 | 1)
            __builtin_memset(&var_1f0, 0, 0x18)
            void* var_208
            int64_t var_200
            uint64_t x21_1 = var_200 - var_208
            int64_t* var_d0
            int64_t var_b8
            int64_t var_90
            int64_t var_68
            void* var_1e0_1
            uint64_t i_12
            uint64_t x3_2
            uint8_t* x20_1
            
            if (var_200 == var_208)
                x20_1 = nullptr
                x3_2 = 0
                i_12 = 0
            label_e58bc8:
                Botan::CT::copy_output(0, x20_1, i_12, x3_2)
                void* x0_21 = var_1f0.q
                
                if (x0_21 != 0)
                    void* var_1e8_3 = x0_21
                    Botan::deallocate_memory(x0_21, var_1e0_1 - x0_21, 1)
                
                if (var_208 != 0)
                    void* var_200_1 = var_208
                    int64_t var_1f8
                    Botan::deallocate_memory(var_208, var_1f8 - var_208, 1)
                
                void* var_228
                
                if ((zx.d(var_238.b) & 1) != 0)
                    operator delete(var_228)
                
                if (var_220 != 0)
                    uint64_t var_218_1 = var_220
                    operator delete(var_220)
                
                Botan::DH_PublicKey::public_value()
                Botan::DL_Group* x20 = var_1c8
                int64_t* entry_x8
                __builtin_memset(entry_x8, 0, 0x18)
                size_t x21_3 = var_1c0_1 - x20
                
                if (var_1c0_1 == x20)
                    goto label_e58c78
                
                if ((x21_3 & 0xffffffff80000000) == 0)
                    int64_t x0_26 = Botan::allocate_memory(x21_3, 1)
                    int64_t x22_2 = x0_26 + x21_3
                    *entry_x8 = x0_26
                    entry_x8[1] = x0_26
                    entry_x8[2] = x22_2
                    memcpy(x0_26, x20, x21_3)
                    entry_x8[1] = x22_2
                label_e58c78:
                    *(entry_x8 + 0x18) = var_1f0.o
                    entry_x8[5] = var_1e0_1
                    
                    if (x20 != 0)
                        Botan::deallocate_memory(x20, var_1b8 - x20, 1)
                    
                    int64_t* x0_28 = var_1d0
                    
                    if (x0_28 != 0)
                        (*(*x0_28 + 0x18))()
                    
                    int64_t (* var_150)() =
                        construction_vtable_for_Botan::DL_Scheme_PrivateKey-in-Botan::DH_PrivateKey
                        + 0xd0
                    var_1a0.q =
                        construction_vtable_for_Botan::DL_Scheme_PrivateKey-in-Botan::DH_PrivateKey
                        + 0x310
                    var_1a0:8.q =
                        construction_vtable_for_Botan::DL_Scheme_PrivateKey-in-Botan::DH_PrivateKey
                        + 0x448
                    int64_t (* var_190_1)() =
                        construction_vtable_for_Botan::DL_Scheme_PrivateKey-in-Botan::DH_PrivateKey
                        + 0x210
                    void* var_148
                    
                    if (var_148 != 0)
                        void* var_140_1 = var_148
                        int64_t var_138
                        Botan::deallocate_memory(var_148, (var_138 - var_148) s>> 2, 4)
                    
                    int64_t (* var_190_2)() =
                        construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PrivateKey
                        + 0x90
                    var_1a0.q =
                        construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PrivateKey
                        + 0x190
                    int64_t* var_158
                    void* var_188
                    void* var_180_1
                    int64_t var_178
                    
                    if (var_158 == 0)
                    label_e58d28:
                        
                        if (var_188 != 0)
                            var_180_1 = var_188
                            Botan::deallocate_memory(var_188, (var_178 - var_188) s>> 2, 4)
                    else
                        int64_t x9_13
                        int32_t i_2
                        
                        do
                            x9_13 = __ldaxr(&var_158[1])
                            i_2 = __stlxr(x9_13 - 1, &var_158[1])
                        while (i_2 != 0)
                        
                        if (x9_13 != 0)
                            goto label_e58d28
                        
                        (*(*var_158 + 0x10))(var_158)
                        std::__ndk1::__shared_weak_count::__release_weak()
                        
                        if (var_188 != 0)
                            var_180_1 = var_188
                            Botan::deallocate_memory(var_188, (var_178 - var_188) s>> 2, 4)
                    var_120.q =
                        construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PublicKey
                        + 0x190
                    int64_t (* var_118)() =
                        construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PublicKey
                        + 0x90
                    int64_t* var_e0
                    void* var_110
                    void* var_108_1
                    int64_t var_100
                    
                    if (var_e0 == 0)
                    label_e58d7c:
                        
                        if (var_110 != 0)
                            var_108_1 = var_110
                            Botan::deallocate_memory(var_110, (var_100 - var_110) s>> 2, 4)
                    else
                        int64_t x9_15
                        int32_t i_3
                        
                        do
                            x9_15 = __ldaxr(&var_e0[1])
                            i_3 = __stlxr(x9_15 - 1, &var_e0[1])
                        while (i_3 != 0)
                        
                        if (x9_15 != 0)
                            goto label_e58d7c
                        
                        (*(*var_e0 + 0x10))(var_e0)
                        std::__ndk1::__shared_weak_count::__release_weak()
                        
                        if (var_110 != 0)
                            var_108_1 = var_110
                            Botan::deallocate_memory(var_110, (var_100 - var_110) s>> 2, 4)
                    void* var_c0_1
                    void* x0_32
                    
                    if (var_d0 == 0)
                    label_e58dbc:
                        x0_32 = var_c8
                        
                        if (x0_32 != 0)
                            var_c0_1 = x0_32
                            Botan::deallocate_memory(x0_32, (var_b8 - x0_32) s>> 2, 4)
                    else
                        int64_t x9_16
                        int32_t i_4
                        
                        do
                            x9_16 = __ldaxr(&var_d0[1])
                            i_4 = __stlxr(x9_16 - 1, &var_d0[1])
                        while (i_4 != 0)
                        
                        if (x9_16 != 0)
                            goto label_e58dbc
                        
                        (*(*var_d0 + 0x10))(var_d0)
                        std::__ndk1::__shared_weak_count::__release_weak()
                        x0_32 = var_c8
                        
                        if (x0_32 != 0)
                            var_c0_1 = x0_32
                            Botan::deallocate_memory(x0_32, (var_b8 - x0_32) s>> 2, 4)
                    void* x0_33 = var_a0
                    
                    if (x0_33 != 0)
                        void* var_98_1 = x0_33
                        Botan::deallocate_memory(x0_33, (var_90 - x0_33) s>> 2, 4)
                    
                    void* result = result_1
                    
                    if (result == 0)
                        return result
                    
                    void* result_2 = result
                    return Botan::deallocate_memory(result, (var_68 - result) s>> 2, 4)
            else
                if ((x21_1 & 0xffffffff80000000) == 0)
                    void* x0_19 = Botan::allocate_memory(x21_1, 1)
                    x20_1 = x0_19
                    var_1f0.q = x0_19
                    void* var_1e8_1 = x0_19
                    size_t x21_2 = var_200 - var_208
                    void* x8_14 = x0_19
                    var_1e0_1 = x0_19 + x21_1
                    
                    if (x21_2 s>= 1)
                        memcpy(x20_1, var_208, x21_2)
                        x8_14 = &x20_1[x21_2]
                    
                    void* var_1e8_2 = x8_14
                    x3_2 = 0
                    i_12 = x8_14 - x20_1
                    
                    if (x8_14 != x20_1)
                        int32_t x8_15 = 0xff
                        uint8_t* x9_10 = x20_1
                        uint64_t i_9 = i_12
                        uint64_t i_5
                        
                        do
                            uint32_t x11_7 = zx.d(*x9_10)
                            x9_10 = &x9_10[1]
                            i_5 = i_9
                            i_9 -= 1
                            x8_15 &= sx.d((x11_7.b - 1) & (not.d(x11_7)).b) s>> 7
                            x3_2 += zx.q(x8_15) & 1
                        while (i_5 != 1)
                    
                    goto label_e58bc8
                
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
            int64_t* x0_49 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            
            if ((zx.d(var_1a0.b) & 1) != 0)
                operator delete(var_190)
            
            if (var_d0 != 0)
                int64_t x9_19
                int32_t i_6
                
                do
                    x9_19 = __ldaxr(&var_d0[1])
                    i_6 = __stlxr(x9_19 - 1, &var_d0[1])
                while (i_6 != 0)
                
                if (x9_19 == 0)
                    (*(*var_d0 + 0x10))(var_d0)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            void* x0_54 = var_c8
            
            if (x0_54 != 0)
                void* var_c0_2 = x0_54
                Botan::deallocate_memory(x0_54, (var_b8 - x0_54) s>> 2, 4)
            
            void* x0_55 = var_a0
            
            if (x0_55 != 0)
                void* var_98_2 = x0_55
                Botan::deallocate_memory(x0_55, (var_90 - x0_55) s>> 2, 4)
            
            void* result_3 = result_1
            
            if (result_3 != 0)
                void* result_4 = result_3
                Botan::deallocate_memory(result_3, (var_68 - result_3) s>> 2, 4)
            
            sub_1101e04(x0_49)
            noreturn

void** x0_40 = __cxa_allocate_exception(0x28)
int64_t x0_41
int128_t v0_2
x0_41, v0_2 = operator new(0x30)
int64_t var_190_3 = x0_41
var_1a0 = data_71c500
__builtin_strncpy(x0_41, "Server sent bad DH key for DHE exchange", 0x28)
*x0_40 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_40[1])
x0_40[4].d = 0x2f
*x0_40 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
__cxa_throw(x0_40, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
noreturn
