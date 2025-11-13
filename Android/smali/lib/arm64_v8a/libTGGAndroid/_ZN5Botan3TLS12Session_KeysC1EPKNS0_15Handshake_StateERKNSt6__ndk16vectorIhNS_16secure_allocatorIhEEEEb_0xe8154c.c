// 函数: _ZN5Botan3TLS12Session_KeysC1EPKNS0_15Handshake_StateERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEb
// 地址: 0xe8154c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x70) = 0
*(arg1 + 0x30) = zx.o(0)
*(arg1 + 0x60) = zx.o(0)
*(arg1 + 0x40) = zx.o(0)
*(arg1 + 0x50) = zx.o(0)
*(arg1 + 0x10) = zx.o(0)
*(arg1 + 0x20) = zx.o(0)
*arg1 = zx.o(0)
int64_t* var_f0 = arg3
size_t x8_2 = *(arg2 + 0x58)
size_t x27 = *(arg2 + 0x60)
int64_t x0_1 = Botan::TLS::Ciphersuite::nonce_bytes_from_handshake()
int64_t* i_2 = *(arg2 + 0x108) + 0x50
int64_t* i = *i_2
int32_t x20

if (i == 0)
    x20 = 0
else
    int64_t* i_1 = i_2
    
    do
        int32_t x11_1 = i[4].d
        
        if (x11_1 s>= 0x17)
            i_1 = i
        
        i = i[zx.q(x11_1 s< 0x17 ? 1 : 0)]
    while (i != 0)
    
    if (i_1 == i_2 || i_1[4].d s> 0x17)
        x20 = 0
    else
        int64_t x0_2 = i_1[5]
        
        if (x0_2 == 0)
            x20 = 0
        else
            x20 = __dynamic_cast(x0_2, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Extended_Master_Secret, 0) != 0 ? 1 : 0

uint64_t x0_5 = Botan::TLS::Handshake_State::protocol_specific_prf()
void* var_b0
int64_t var_a0
void* var_78
int32_t entry_x3

if ((entry_x3 & 1) == 0)
    int64_t var_90_1
    __builtin_memset(&var_90_1, 0, 0x30)
    uint64_t var_90_2
    void* var_70
    int64_t var_88_1
    void* var_68
    
    if (x20 == 0)
        uint64_t x0_17 = operator new(0xd)
        var_88_1 = x0_17 + 0xd
        int64_t var_80_2 = x0_17 + 0xd
        var_90_2 = x0_17
        __builtin_strncpy(x0_17, "master secret", 0xd)
        void* x21_2 = *(arg2 + 0x100)
        int64_t x9_3 = *(x21_2 + 0x28)
        int64_t x8_14 = *(x21_2 + 0x30)
        uint64_t x20_3 = x8_14 - x9_3
        void* x1_6
        
        if (x8_14 == x9_3)
            x1_6 = nullptr
        else
            x1_6 = operator new(x20_3)
            var_78 = x1_6
            var_70 = x1_6
            var_68 = x1_6 + x20_3
        
        *(x21_2 + 0x30)
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
            &var_78, x1_6, *(x21_2 + 0x28))
        void* x26_2 = *(arg2 + 0x108)
        void* x20_4 = var_78
        void* x22_2 = var_70
        size_t x21_3 = x22_2 - x20_4
        uint64_t x23_2 = *(x26_2 + 0x30) - *(x26_2 + 0x28) + x21_3
        
        if (var_68 - x20_4 u< x23_2)
            void* x0_22 = operator new(x23_2)
            x22_2 = x0_22 + x21_3
            
            if (x21_3 s>= 1)
                memcpy(x0_22, x20_4, x21_3)
            
            var_78 = x0_22
            var_70 = x22_2
            void* var_68_2 = x0_22 + x23_2
            
            if (x20_4 != 0)
                operator delete(x20_4)
                x22_2 = var_70
        
        *(x26_2 + 0x30)
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
            &var_78, x22_2, *(x26_2 + 0x28))
    else
        uint64_t x0_7 = operator new(0x16)
        var_88_1 = x0_7 + 0x16
        int64_t var_80_1 = x0_7 + 0x16
        var_90_2 = x0_7
        __builtin_strncpy(x0_7, "extended master secret", 0x16)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x20_1 = zx.q(*(arg2 + 0x20))
        Botan::TLS::kdf_algo_to_string(zx.q(*(arg2 + 0x40)))
        Botan::TLS::Handshake_Hash::final(arg2 + 0xe8, x20_1)
        void* x21_1 = var_78
        void* x22_1 = var_70
        void* x20_2 = var_b0
        size_t x24_1 = x22_1 - x21_1
        int64_t var_a8
        uint64_t fp_1 = var_a8 - x20_2 + x24_1
        
        if (var_68 - x21_1 u< fp_1)
            void* x0_11 = operator new(fp_1)
            x22_1 = x0_11 + x24_1
            
            if (x24_1 s>= 1)
                memcpy(x0_11, x21_1, x24_1)
            
            var_78 = x0_11
            var_70 = x22_1
            void* var_68_1 = x0_11 + fp_1
            
            if (x21_1 != 0)
                operator delete(x21_1)
                x22_1 = var_70
                x20_2 = var_b0
        
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
            &var_78, x22_1, x20_2)
        
        if (var_b0 != 0)
            void* var_a8_1 = var_b0
            Botan::deallocate_memory(var_b0, var_a0 - var_b0, 1)
        
        char var_c8
        void* var_b8
        
        if ((zx.d(var_c8) & 1) != 0)
            operator delete(var_b8)
    uint64_t x4_1 = var_78
    uint64_t x2_7 = *var_f0
    Botan::KDF::derive_key(x0_5, 0x30, x2_7, var_f0[1] - x2_7, x4_1, var_70 - x4_1, var_90_2)
    void* x0_27 = *arg1
    
    if (x0_27 != 0)
        int64_t x8_21 = *(arg1 + 0x10)
        *(arg1 + 8) = x0_27
        Botan::deallocate_memory(x0_27, x8_21 - x0_27, 1)
        __builtin_memset(arg1, 0, 0x18)
    
    *arg1 = var_b0.o
    *(arg1 + 0x10) = var_a0
    
    if (var_90_2 != 0)
        operator delete(var_90_2)
    
    void* x0_29 = var_78
    
    if (x0_29 != 0)
        void* var_70_1 = x0_29
        operator delete(x0_29)
else if (arg1 != var_f0)
    var_f0[1]
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(arg1, *var_f0)

int64_t var_90_3
__builtin_memset(&var_90_3, 0, 0x30)
uint64_t x0_30 = operator new(0xd)
int64_t var_80_3 = x0_30 + 0xd
__builtin_strncpy(x0_30, "key expansion", 0xd)
void* x21_4 = *(arg2 + 0x108)
int64_t x9_6 = *(x21_4 + 0x28)
int64_t x8_24 = *(x21_4 + 0x30)
uint64_t x20_5 = x8_24 - x9_6
void* var_70_2
void* var_68_3
void* x1_10

if (x8_24 == x9_6)
    x1_10 = nullptr
else
    x1_10 = operator new(x20_5)
    var_78 = x1_10
    var_70_2 = x1_10
    var_68_3 = x1_10 + x20_5

*(x21_4 + 0x30)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    &var_78, x1_10, *(x21_4 + 0x28))
void* x26_3 = *(arg2 + 0x100)
void* x20_6 = var_78
void* x22_3 = var_70_2
size_t x21_5 = x22_3 - x20_6
uint64_t x23_4 = *(x26_3 + 0x30) - *(x26_3 + 0x28) + x21_5

if (var_68_3 - x20_6 u< x23_4)
    void* x0_35 = operator new(x23_4)
    x22_3 = x0_35 + x21_5
    
    if (x21_5 s>= 1)
        memcpy(x0_35, x20_6, x21_5)
    
    var_78 = x0_35
    var_70_2 = x22_3
    void* var_68_4 = x0_35 + x23_4
    
    if (x20_6 != 0)
        operator delete(x20_6)
        x22_3 = var_70_2

*(x26_3 + 0x30)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    &var_78, x22_3, *(x26_3 + 0x28))
void* x4_2 = var_78
int64_t x26_4 = x27 + x8_2
uint64_t x2_11 = *arg1
Botan::KDF::derive_key(x0_5, (x26_4 + x0_1) << 1, x2_11, *(arg1 + 8) - x2_11, x4_2, 
    var_70_2 - x4_2, x0_30)
int64_t x8_31 = *(arg1 + 0x18)
int64_t x9_10 = *(arg1 + 0x20) - x8_31

if (x26_4 u> x9_10)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x18)
else if (x26_4 u< x9_10)
    *(arg1 + 0x20) = x8_31 + x26_4

int64_t x8_33 = *(arg1 + 0x30)
int64_t x9_12 = *(arg1 + 0x38) - x8_33

if (x26_4 u> x9_12)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x30)
else if (x26_4 u< x9_12)
    *(arg1 + 0x38) = x8_33 + x26_4

int64_t x0_42 = *(arg1 + 0x18)

if (x27 != 0)
    if (var_b0 == 0 || x0_42 == 0)
        goto label_e81d58
    
    memmove(x0_42, var_b0, x27)
    int64_t x0_43 = *(arg1 + 0x30)
    
    if (x0_43 == 0)
        goto label_e81d80
    
    memmove(x0_43, var_b0 + x27, x27)
    x0_42 = *(arg1 + 0x18)

if (x8_2 == 0)
    goto label_e81ac8

if (var_b0 == 0 || x0_42 == 0)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    void* x20_7 = var_b0 + (x27 << 1)
    memmove(x0_42 + x27, x20_7, x8_2)
    int64_t x8_40 = *(arg1 + 0x30)
    
    if (x8_40 == 0)
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    else
        memmove(x8_40 + x27, x20_7 + x8_2, x8_2)
    label_e81ac8:
        void* x23_6 = *(arg1 + 0x48)
        int64_t x0_48 = *(arg1 + 0x50)
        size_t x20_8 = x0_48 - x23_6
        size_t x22_4 = x0_1 - x20_8
        
        if (x0_1 u<= x20_8)
            if (x0_1 u< x20_8)
                *(arg1 + 0x50) = x23_6 + x0_1
            
            goto label_e81b98
        
        int64_t x8_41 = *(arg1 + 0x58)
        
        if (x8_41 - x0_48 u>= x22_4)
            if (x22_4 != 0)
                memset(x0_48, 0, x22_4)
                x0_48 += x22_4
            
            *(arg1 + 0x50) = x0_48
        label_e81b98:
            void* x23_7 = *(arg1 + 0x60)
            int64_t x0_55 = *(arg1 + 0x68)
            size_t x20_10 = x0_55 - x23_7
            size_t x22_5 = x0_1 - x20_10
            void* x0_54
            
            if (x0_1 u<= x20_10)
                if (x0_1 u< x20_10)
                    *(arg1 + 0x68) = x23_7 + x0_1
                
                if (x0_1 == 0)
                    x0_54 = var_b0
                    
                    if (x0_54 == 0)
                        goto label_e81cc4
                    
                label_e81cb0:
                    void* var_a8_2 = x0_54
                    Botan::deallocate_memory(x0_54, var_a0 - x0_54, 1)
                label_e81cc4:
                    
                    if (x0_30 != 0)
                        operator delete(x0_30)
                    
                    void* x0_62 = var_78
                    
                    if (x0_62 != 0)
                        void* var_70_3 = x0_62
                        operator delete(x0_62)
                    
                    return (*(*x0_5 + 8))()
            else
                int64_t x8_44 = *(arg1 + 0x70)
                
                if (x8_44 - x0_55 u>= x22_5)
                    if (x22_5 != 0)
                        memset(x0_55, 0, x22_5)
                        x0_55 += x22_5
                    
                    *(arg1 + 0x68) = x0_55
                    goto label_e81c74
                
                if ((x0_1 & 0xffffffff80000000) != 0)
                    sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                    noreturn
                
                void* x8_45 = x8_44 - x23_7
                int64_t x10_6 = x8_45 << 1
                int64_t x10_7
                
                x10_7 = x10_6 u< x0_1 ? x0_1 : x10_6
                
                int64_t x24_6
                
                x24_6 = x8_45 u< 0x3fffffffffffffff ? x10_7 : 0x7fffffffffffffff
                
                int64_t x21_8
                
                if (x24_6 == 0)
                    x21_8 = 0
                else
                    x21_8 = operator new(x24_6)
                
                memset(x21_8 + x20_10, 0, x22_5)
                
                if (x20_10 s>= 1)
                    memcpy(x21_8, x23_7, x20_10)
                
                *(arg1 + 0x60) = x21_8
                *(arg1 + 0x68) = x21_8 + x0_1
                *(arg1 + 0x70) = x21_8 + x24_6
                
                if (x23_7 != 0)
                    operator delete(x23_7)
            
        label_e81c74:
            
            if (var_b0 != 0)
                void* x19_1 = var_b0 + (x26_4 << 1)
                memmove(*(arg1 + 0x48), x19_1, x0_1)
                memmove(*(arg1 + 0x60), x19_1 + x0_1, x0_1)
                x0_54 = var_b0
                
                if (x0_54 == 0)
                    goto label_e81cc4
                
                goto label_e81cb0
            
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        label_e81d58:
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        label_e81d80:
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        else if ((x0_1 & 0xffffffff80000000) == 0)
            void* x8_42 = x8_41 - x23_6
            int64_t x10_4 = x8_42 << 1
            int64_t x10_5
            
            x10_5 = x10_4 u< x0_1 ? x0_1 : x10_4
            
            int64_t x24_4
            
            x24_4 = x8_42 u< 0x3fffffffffffffff ? x10_5 : 0x7fffffffffffffff
            
            int64_t x21_7
            
            if (x24_4 == 0)
                x21_7 = 0
            else
                x21_7 = operator new(x24_4)
            
            memset(x21_7 + x20_8, 0, x22_4)
            
            if (x20_8 s>= 1)
                memcpy(x21_7, x23_6, x20_8)
            
            *(arg1 + 0x48) = x21_7
            *(arg1 + 0x50) = x21_7 + x0_1
            *(arg1 + 0x58) = x21_7 + x24_4
            
            if (x23_6 != 0)
                operator delete(x23_6)
            
            goto label_e81b98

std::__ndk1::__vector_base_common<true>::__throw_length_error()
sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
