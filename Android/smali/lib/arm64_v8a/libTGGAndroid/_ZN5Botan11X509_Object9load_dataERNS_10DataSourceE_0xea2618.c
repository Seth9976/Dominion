// 函数: _ZN5Botan11X509_Object9load_dataERNS_10DataSourceE
// 地址: 0xea2618
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::DataSource* entry_x1
int32_t x0_1 = Botan::ASN1::maybe_BER(entry_x1)
void* var_a0
void* result_3
int32_t x0_3

if ((x0_1 & 1) != 0)
    var_a0.w = 0
    x0_3 = Botan::PEM_Code::matches(entry_x1, &var_a0, 0x1000)
    
    if ((zx.d(var_a0.b) & 1) != 0)
        operator delete(result_3)

void* result
void* var_98

if ((x0_1 & 1) != 0 && (x0_3 & 1) == 0)
    var_a0 = nullptr
    var_98.d = 0xff00
    __builtin_memset(&var_98:4, 0, 0x1c)
    Botan::DataSource* var_78 = entry_x1
    int64_t* var_70 = nullptr
    (*(*arg1 + 8))(arg1, &var_a0)
    int64_t var_70_1 = 0
    
    if (var_70 != 0)
        (*(*var_70 + 0x38))()
    
    result = result_3
    
    if (result != 0)
        void* result_4 = result
        int64_t var_84
        return Botan::deallocate_memory(result, var_84 - result, 1)
else
    int64_t var_b8
    __builtin_memset(&var_b8, 0, 0x18)
    Botan::PEM_Code::decode(entry_x1, &var_b8)
    void* x20_1 = var_a0
    void* x8_2 = var_98
    uint64_t x22_1 = x8_2 - x20_1
    void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_e0 =
        _vtable_for_Botan::DataSource_Memory + 0x10
    void* result_1
    __builtin_memset(&result_1, 0, 0x18)
    int128_t var_100
    void* var_c8_1
    void* var_a8
    
    if (x8_2 != x20_1)
        if ((x22_1 & 0xffffffff80000000) == 0)
            void* result_6 = Botan::allocate_memory(x22_1, 1)
            x20_1 = var_a0
            void* x8_3 = var_98
            void* result_9 = result_6
            result_1 = result_6
            void* result_8 = result_6
            size_t x22_2 = x8_3 - x20_1
            var_c8_1 = result_6 + x22_1
            
            if (x22_2 s>= 1)
                memcpy(result_9, x20_1, x22_2)
                result_9 += x22_2
            
            void* result_10 = result_9
            goto label_ea26f8
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_ea2a90:
        void** x0_24 = __cxa_allocate_exception(0x20)
        (*(*arg1 + 0x20))(arg1)
        void var_138
        int128_t* x0_27
        int128_t v0
        x0_27, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_138, nullptr)
        int64_t var_110 = x0_27[1].q
        int128_t var_120 = *x0_27
        __builtin_memset(x0_27, 0, 0x18)
        int128_t* x0_29
        int128_t v0_1
        x0_29, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_120)
        int64_t var_f0_1 = x0_29[1].q
        var_100 = *x0_29
        __builtin_memset(x0_29, 0, 0x18)
        void* x1_12
        
        if ((zx.d(var_b8.b) & 1) == 0)
            x1_12 = &var_b8 | 1
        else
            x1_12 = var_a8
        
        int128_t* x0_31
        int128_t v0_2
        x0_31, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_100, x1_12)
        int64_t var_90 = x0_31[1].q
        var_a0.o = *x0_31
        __builtin_memset(x0_31, 0, 0x18)
        *x0_24 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_24[1])
        *x0_24 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_24, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
label_ea26f8:
    int64_t var_c0_1 = 0
    
    if (x20_1 != 0)
        var_98 = x20_1
        Botan::deallocate_memory(x20_1, result_3 - x20_1, 1)
    
    (*(*arg1 + 0x20))(arg1)
    uint64_t x9_4 = zx.q(var_b8.b)
    uint64_t x20_2 = zx.q(var_a0.b)
    uint64_t i_2 = x9_4 u>> 1
    uint64_t i_6
    uint64_t i_4
    
    if ((x9_4.d & 1) == 0)
        i_4 = i_2
    else
        i_4 = i_6
    
    uint64_t x10_2
    
    if ((x20_2.d & 1) == 0)
        x10_2 = x20_2 u>> 1
    else
        x10_2 = var_98
    
    int32_t x21_2
    
    if (i_4 != x10_2)
        x21_2 = 1
        
        if ((x20_2.d & 1) != 0)
            operator delete(result_3)
    else
        void* x9_5 = &var_b8 | 1
        void* result_7
        
        if ((x20_2.d & 1) == 0)
            result_7 = &var_a0 | 1
        else
            result_7 = result_3
        
        if ((x9_4.d & 1) == 0)
            if (i_4 == 0)
                goto label_ea2960
            
            uint32_t x10_3
            uint32_t x11_3
            uint64_t i
            
            do
                x10_3 = zx.d(*x9_5)
                x11_3 = zx.d(*result_7)
                
                if (x10_3 != x11_3)
                    break
                
                i = i_2
                i_2 -= 1
                x9_5 += 1
                result_7 += 1
            while (i != 1)
            x21_2 = x10_3 != x11_3 ? 1 : 0
            
            if ((x20_2.d & 1) != 0)
                operator delete(result_3)
        else if (i_4 == 0)
        label_ea2960:
            x21_2 = 0
            
            if ((x20_2.d & 1) != 0)
                operator delete(result_3)
        else
            x21_2 = memcmp() != 0 ? 1 : 0
            
            if ((x20_2.d & 1) != 0)
                operator delete(result_3)
    
    if (x21_2 != 0)
        (*(*arg1 + 0x28))(arg1)
        void* x20_3 = var_a0
        void* x22_3 = var_98
        int32_t x21_3
        
        if (x20_3 == x22_3)
            x21_3 = 0
            
            if (x20_3 != 0)
            label_ea2974:
                void* x8_14 = var_98
                void* x0_19
                
                if (x8_14 == x20_3)
                    x0_19 = x20_3
                else
                    void* x22_4 = x8_14
                    
                    do
                        x22_4 -= 0x18
                        
                        if ((zx.d(*x22_4) & 1) != 0)
                            operator delete(*(x8_14 - 8))
                        
                        x8_14 = x22_4
                    while (x20_3 != x22_4)
                    
                    x0_19 = var_a0
                
                var_98 = x20_3
                operator delete(x0_19)
        else
            x21_3 = 0
            int32_t x28_1
            
            do
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &var_100)
                uint64_t x9_7 = zx.q(var_b8.b)
                uint64_t x27_1 = zx.q(var_100.b)
                uint64_t i_3 = x9_7 u>> 1
                uint64_t i_5
                
                if ((x9_7.d & 1) == 0)
                    i_5 = i_3
                else
                    i_5 = i_6
                
                uint64_t x10_5
                
                if ((x27_1.d & 1) == 0)
                    x10_5 = x27_1 u>> 1
                else
                    x10_5 = var_100:8.q
                
                char* var_f0
                
                if (i_5 != x10_5)
                label_ea28b4:
                    x28_1 = 0
                    
                    if ((x27_1.d & 1) != 0)
                        operator delete(var_f0)
                else
                    char* x1_5
                    
                    if ((x27_1.d & 1) == 0)
                        x1_5 = &var_100 | 1
                    else
                        x1_5 = var_f0
                    
                    if ((x9_7.d & 1) == 0)
                        void* x9_9 = &var_b8 | 1
                        
                        if (i_5 != 0)
                            uint64_t i_1
                            
                            do
                                if (zx.d(*x9_9) != zx.d(*x1_5))
                                    goto label_ea28b4
                                
                                i_1 = i_3
                                i_3 -= 1
                                x9_9 += 1
                                x1_5 = &x1_5[1]
                            while (i_1 != 1)
                    else if (i_5 != 0 && memcmp() != 0)
                        goto label_ea28b4
                    
                    x28_1 = 1
                    x21_3 = 1
                    
                    if ((x27_1.d & 1) != 0)
                        operator delete(var_f0)
                x20_3 += 0x18
            while (((x28_1 | (x20_3 == x22_3 ? 1 : 0)) & 1) == 0)
            x20_3 = var_a0
            
            if (x20_3 != 0)
                goto label_ea2974
        
        if ((x21_3 & 1) == 0)
            goto label_ea2a90
    
    var_a0 = nullptr
    var_98.d = 0xff00
    __builtin_memset(&var_98:4, 0, 0x1c)
    void* __offset(vtable_for_Botan::DataSource_Memory, 0x10)* var_78_1 = &var_e0
    int64_t* var_70_2 = nullptr
    (*(*arg1 + 8))(arg1, &var_a0)
    int64_t var_70_3 = 0
    
    if (var_70_2 != 0)
        (*(*var_70_2 + 0x38))()
    
    if (result_3 != 0)
        void* result_5 = result_3
        int64_t var_84_1
        Botan::deallocate_memory(result_3, var_84_1 - result_3, 1)
    
    result = result_1
    var_e0 = _vtable_for_Botan::DataSource_Memory + 0x10
    
    if (result != 0)
        void* result_2 = result
        result = Botan::deallocate_memory(result, var_c8_1 - result, 1)
    
    if ((zx.d(var_b8.b) & 1) != 0)
        return operator delete(var_a8)
return result
