// 函数: sub_cb79bc
// 地址: 0xcb79bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
char var_104
char var_f0
char var_b0
void* var_a0

if ((**arg1)(arg1, &var_104, 1) == 0)
    void** x0_33 = __cxa_allocate_exception(0x20)
    __builtin_strncpy(&var_f0, ",Length field not found", 0x18)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "BER: ", &var_f0)
    *x0_33 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_33[1])
    *x0_33 = _vtable_for_Botan::Decoding_Error + 0x10
    
    if ((zx.d(var_b0) & 1) != 0)
        operator delete(var_a0)
    
    *x0_33 = _vtable_for_Botan::BER_Decoding_Error + 0x10
    __cxa_throw(x0_33, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
    noreturn

*arg2 = 1
uint64_t x8_3 = zx.q(var_104)
uint64_t result

if ((x8_3.d & 0x80) != 0)
    int64_t x8_4 = x8_3 & 0x7f
    *arg2 = x8_4 + 1
    int120_t var_ef
    
    if (x8_4.d u>= 5)
        void** x0_38 = __cxa_allocate_exception(0x20)
        int64_t x0_39
        int128_t v0
        x0_39, v0 = operator new(0x20)
        var_ef:0xf.q = x0_39
        var_f0.o = data_71aa40
        __builtin_strncpy(x0_39, "Length field is too large", 0x1a)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "BER: ", &var_f0)
        *x0_38 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_38[1])
        *x0_38 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_b0) & 1) != 0)
            operator delete(var_a0)
        
        *x0_38 = _vtable_for_Botan::BER_Decoding_Error + 0x10
        __cxa_throw(x0_38, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    if (x8_4.d != 0)
        int64_t i = 0
        uint64_t result_1 = 0
        
        do
            if (result_1 u>> 0x38 != 0)
                void** x0_28 = __cxa_allocate_exception(0x20)
                __builtin_strncpy(&var_f0, "*Field length overflow", 0x17)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "BER: ", &var_f0)
                *x0_28 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_28[1])
                *x0_28 = _vtable_for_Botan::Decoding_Error + 0x10
                
                if ((zx.d(var_b0) & 1) != 0)
                    operator delete(var_a0)
                
                *x0_28 = _vtable_for_Botan::BER_Decoding_Error + 0x10
                __cxa_throw(x0_28, _typeinfo_for_Botan::BER_Decoding_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            if ((**arg1)(arg1, &var_104, 1) == 0)
                void** x0_23 = __cxa_allocate_exception(0x20)
                __builtin_strncpy(&var_f0, ",Corrupted length field", 0x18)
                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                    "BER: ", &var_f0)
                *x0_23 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_23[1])
                *x0_23 = _vtable_for_Botan::Decoding_Error + 0x10
                
                if ((zx.d(var_b0) & 1) != 0)
                    operator delete(var_a0)
                
                *x0_23 = _vtable_for_Botan::BER_Decoding_Error + 0x10
                __cxa_throw(x0_23, _typeinfo_for_Botan::BER_Decoding_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            i += 1
            result = zx.q(var_104) | (0xffffffffffffff & result_1) << 8
            result_1 = result
        while (i != *arg2 - 1)
        
        goto label_cb7c98
    
    if (arg3 == 0)
        void** x0_44 = __cxa_allocate_exception(0x20)
        int64_t x0_45
        int128_t v0_1
        x0_45, v0_1 = operator new(0x50)
        var_ef:0xf.q = x0_45
        var_f0.o = data_71c530
        __builtin_strncpy(x0_45, 
            "Nested EOC markers too deep, rejecting to avoid stack exhaustion", 0x41)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "BER: ", &var_f0)
        *x0_44 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_44[1])
        *x0_44 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_b0) & 1) != 0)
            operator delete(var_a0)
        
        *x0_44 = _vtable_for_Botan::BER_Decoding_Error + 0x10
        __cxa_throw(x0_44, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    void* x0_3 = Botan::allocate_memory(0x400, 1)
    memset(x0_3, 0, 0x400)
    void* x9_2 = nullptr
    int64_t x8_10 = 0
    void* var_c8
    __builtin_memset(&var_c8, 0, 0x18)
    int64_t var_c0
    
    while (true)
        int64_t x0_5 = (*(*arg1 + 0x10))(arg1, x0_3, 0x400, x8_10 - x9_2)
        
        if (x0_5 == 0)
            break
        
        var_b0.q = x0_3
        int64_t var_a8_1 = x0_5
        Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&var_c8, &var_b0)
        x9_2 = var_c8
        x8_10 = var_c0
    
    void* x22_1 = var_c8
    uint64_t x23_1 = var_c0 - x22_1
    var_f0.q = _vtable_for_Botan::DataSource_Memory + 0x10
    __builtin_memset(&var_ef:7, 0, 0x18)
    int64_t var_d8_1
    
    if (var_c0 == x22_1)
    label_cb7b5c:
        void* var_c0_1 = x22_1
        result = 0
        int64_t var_d0_1 = 0
        int32_t var_f8
        int32_t x27_1
        
        do
            int32_t var_f4
            uint64_t x0_11 = sub_cb76f0(&var_f0, &var_f4, &var_f8)
            x27_1 = var_f4
            
            if (x27_1 == 0xff00)
                break
            
            uint64_t var_100 = 0
            uint64_t i_2 = sub_cb79bc(&var_f0, &var_100, arg3 - 1)
            uint64_t i_1 = i_2
            __builtin_memset(&var_b0, 0, 0x40)
            
            while (i_1 != 0)
                uint64_t i_3
                
                i_3 = i_1 u< 0x40 ? i_1 : 0x40
                
                int64_t x0_14 = (*var_f0.q)(&var_f0, &var_b0, i_3)
                i_1 -= x0_14
                
                if (x0_14 == 0)
                    break
            
            result = Botan::checked_add(
                Botan::checked_add(
                    Botan::checked_add(result, i_2, 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x310d), 
                    x0_11, "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x310e), 
                var_100, "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x310f)
        while ((var_f8 | x27_1) != 0)
        void* x0_19 = var_ef:7.q
        var_f0.q = _vtable_for_Botan::DataSource_Memory + 0x10
        
        if (x0_19 != 0)
            var_ef:0xf.q = x0_19
            Botan::deallocate_memory(x0_19, var_d8_1 - x0_19, 1)
        
        void* x0_20 = var_c8
        
        if (x0_20 != 0)
            void* var_c0_2 = x0_20
            int64_t var_b8
            Botan::deallocate_memory(x0_20, var_b8 - x0_20, 1)
        
        if (x0_3 != 0)
            Botan::deallocate_memory(x0_3, 0x400, 1)
        
        goto label_cb7c98
    
    if ((x23_1 & 0xffffffff80000000) == 0)
        int64_t x0_8 = Botan::allocate_memory(x23_1, 1)
        x22_1 = var_c8
        int64_t x21_2 = x0_8
        var_ef:7.q = x0_8
        var_ef:0xf.q = x0_8
        size_t x23_2 = var_c0 - x22_1
        var_d8_1 = x0_8 + x23_1
        
        if (x23_2 s>= 1)
            memcpy(x21_2, x22_1, x23_2)
            x21_2 += x23_2
        
        var_ef:0xf.q = x21_2
        goto label_cb7b5c
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    result = zx.q(x8_3.d)
label_cb7c98:
    
    if (*(x25 + 0x28) == x8)
        return result
__stack_chk_fail()
noreturn
