// 函数: _ZN5Botan10RTSS_Share5splitEhhPKhtRKNSt6__ndk16vectorIhNS3_9allocatorIhEEEERKNS3_12basic_stringIcNS3_11char_traitsIcEENS5_IcEEEERNS_21RandomNumberGeneratorE
// 地址: 0xe87684
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_80

if (zx.d((not.d(arg2.d)).b) != 0)
    uint32_t x8 = zx.d(arg1)
    
    if (x8 u<= zx.d(arg2) && x8 u>= 2 && zx.d(arg2) u> 1)
        if (*(arg5 + 8) - *arg5 u>= 0x11)
            void** x0_45 = __cxa_allocate_exception(0x20)
            int64_t x0_46
            int128_t v0_1
            x0_46, v0_1 = operator new(0x30)
            (*" identifier size")[0].o
            int64_t var_70_2 = x0_46
            v0_1 = data_71cbb0
            __builtin_strncpy(x0_46, "RTSS_Share::split Invalid identifier size", 0x2a)
            var_80 = v0_1
            *x0_45 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_45[1])
            *x0_45 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_45, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        uint64_t x10_1 = zx.q(*arg6)
        uint64_t x8_4 = *(arg6 + 8)
        int32_t x9_2 = x10_1.d & 1
        uint64_t x10_2 = x10_1 u>> 1
        uint64_t x11_1
        
        x11_1 = x9_2 == 0 ? x10_2 : x8_4
        
        if (x11_1 != 4)
            goto label_e8774c
        
        void* result_1
        void* var_70
        int64_t x20_1
        void* result_8
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg6, 0, -ffffffffffffffff, "None") == 0)
            x20_1 = 0
            result_8 = nullptr
        else
            uint64_t x10_3 = zx.q(*arg6)
            x8_4 = *(arg6 + 8)
            x9_2 = x10_3.d & 1
            x10_2 = x10_3 u>> 1
        label_e8774c:
            uint64_t x11_2
            
            if ((x9_2 & 0xff) == 0)
                x11_2 = x10_2
            else
                x11_2 = x8_4
            
            if (x11_2 != 7)
                goto label_e8778c
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg6, 0, -ffffffffffffffff, "SHA-160") == 0)
                x20_1 = 1
            else
                uint64_t x10_4 = zx.q(*arg6)
                x8_4 = *(arg6 + 8)
                x9_2 = x10_4.d & 1
                x10_2 = x10_4 u>> 1
            label_e8778c:
                uint64_t x11_3
                
                if ((x9_2 & 0xff) == 0)
                    x11_3 = x10_2
                else
                    x11_3 = x8_4
                
                if (x11_3 != 5)
                    goto label_e877cc
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg6, 0, -ffffffffffffffff, "SHA-1") == 0)
                    x20_1 = 1
                else
                    uint64_t x10_5 = zx.q(*arg6)
                    x8_4 = *(arg6 + 8)
                    x9_2 = x10_5.d & 1
                    x10_2 = x10_5 u>> 1
                label_e877cc:
                    uint64_t x11_4
                    
                    if ((x9_2 & 0xff) == 0)
                        x11_4 = x10_2
                    else
                        x11_4 = x8_4
                    
                    if (x11_4 != 4)
                        goto label_e8780c
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg6, 0, -ffffffffffffffff, "SHA1") == 0)
                        x20_1 = 1
                    else
                        uint64_t x10_6 = zx.q(*arg6)
                        x8_4 = *(arg6 + 8)
                        x9_2 = x10_6.d & 1
                        x10_2 = x10_6 u>> 1
                    label_e8780c:
                        uint64_t x8_5
                        
                        if ((x9_2 & 0xff) == 0)
                            x8_5 = x10_2
                        else
                            x8_5 = x8_4
                        
                        int32_t x0_9
                        
                        if (x8_5 == 7)
                            x0_9 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                arg6, 0, -ffffffffffffffff, "SHA-256")
                        
                        if (x8_5 != 7 || x0_9 != 0)
                            void** x0_56 = __cxa_allocate_exception(0x20)
                            int64_t x0_57
                            int128_t v0_3
                            x0_57, v0_3 = operator new(0x30)
                            v0_3 = data_71b7f0
                            int64_t var_70_3 = x0_57
                            __builtin_strncpy(x0_57, "RTSS only supports SHA-1 and SHA-256", 0x25)
                            var_80 = v0_3
                            *x0_56 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_56[1])
                            *x0_56 = _vtable_for_Botan::Invalid_Argument + 0x10
                            __cxa_throw(x0_56, _typeinfo_for_Botan::Invalid_Argument, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        x20_1 = 2
            
            var_80.w = 0
            Botan::HashFunction::create_or_throw(arg6, &var_80)
            uint32_t x8_6 = zx.d(var_80.b)
            result_8 = result_1
            result_1 = nullptr
            
            if ((x8_6 & 1) != 0)
                operator delete(var_70)
        
        uint64_t x27_1 = zx.q(arg4)
        __builtin_memset(&result_1, 0, 0x18)
        void* result_2
        void* result_10
        void* result_6
        void* result_7
        
        if (zx.d(arg4) == 0)
            result_6 = nullptr
            result_7 = nullptr
            
            if (result_8 != 0)
            label_e878e8:
                (*(*result_8 + 0x18))(result_8, arg3, x27_1)
                Botan::Buffered_Computation::final()
                Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
                    &result_1, &var_80)
                void* x0_16 = var_80.q
                
                if (x0_16 != 0)
                    var_80:8.q = x0_16
                    Botan::deallocate_memory(x0_16, var_70 - x0_16, 1)
                
                result_6 = result_1
                result_7 = result_2
        else
            void* result_4 = Botan::allocate_memory(x27_1, 1)
            result_7 = result_4 + x27_1
            result_6 = result_4
            result_1 = result_4
            result_10 = result_7
            memcpy(result_4, arg3, x27_1)
            result_2 = result_7
            
            if (result_8 != 0)
                goto label_e878e8
        
        void* x19_2 = result_7 - result_6
        int128_t var_b0
        
        if (x19_2 u>= 0xfffe)
            void** x0_50 = __cxa_allocate_exception(0x20)
            int64_t x0_51
            int128_t v0_2
            x0_51, v0_2 = operator new(0x40)
            int64_t var_a0_1 = x0_51
            var_b0 = data_71d0c0
            __builtin_strncpy(x0_51, "RTSS_Share::split secret too large for TSS format", 0x32)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Encoding error: ", &var_b0)
            *x0_50 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_50[1])
            *x0_50 = _vtable_for_Botan::Invalid_Argument + 0x10
            
            if ((zx.d(var_80.b) & 1) != 0)
                operator delete(var_70)
            
            *x0_50 = _vtable_for_Botan::Encoding_Error + 0x10
            __cxa_throw(x0_50, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
            noreturn
        
        void* x0_17 = Botan::allocate_memory(0x14, 1)
        __builtin_memset(x0_17, 0, 0x14)
        int64_t x1_5 = *arg5
        int64_t x8_10 = *(arg5 + 8)
        
        if (x8_10 != x1_5)
            if (x1_5 == 0)
                int64_t* x0_61 = Botan::assertion_failure(
                    "n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                std::exception::~exception()
                
                if ((zx.d(var_80.b) & 1) != 0)
                    operator delete(var_70)
                
                void* result_12
                
                if ((zx.d(var_b0.b) & 1) != 0)
                    void* var_a0
                    operator delete(var_a0)
                    result_12 = result_8
                else
                    result_12 = result_8
                
                __cxa_free_exception(x20_1)
                void* result_5 = result_1
                
                if (result_5 != 0)
                    void* result_9 = result_5
                    Botan::deallocate_memory(result_5, result_10 - result_5, 1)
                
                if (result_12 == 0)
                    sub_1101e04(x0_61)
                    noreturn
                
                (*(*result_12 + 0x10))(result_12)
                sub_1101e04(x0_61)
                noreturn
            
            memmove(x0_17, x1_5, x8_10 - x1_5)
        
        *(x0_17 + 0x10) = (x20_1.d).b
        uint64_t i_2 = zx.q(arg2)
        *(x0_17 + 0x11) = arg1
        *(x0_17 + 0x13) = (x19_2.d + 1).b
        *(x0_17 + 0x12) = ((x19_2.d + 1) u>> 8).b
        void** entry_x8
        std::__ndk1::vector<Botan::RTSS_Share, std::__ndk1::allocator<Botan::RTSS_Share> >::vector(
            entry_x8)
        void** x19_3 = entry_x8
        int64_t x21_1 = 0
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            void* x23_2 = *x19_3 + x21_1
            int64_t x27_2 = *x23_2
            
            if (*(x23_2 + 0x10) - x27_2 u< x19_2 + 0x15)
                int64_t x20_2 = *(x23_2 + 8)
                int64_t x0_21 = Botan::allocate_memory(x19_2 + 0x15, 1)
                void* x19_5 = *x23_2
                int64_t x20_3 = x0_21 + x20_2 - x27_2
                size_t x2_3 = *(x23_2 + 8) - x19_5
                int64_t x27_3 = x20_3 - x2_3
                
                if (x2_3 s>= 1)
                    memcpy(x27_3, x19_5, x2_3)
                
                int64_t x8_16 = *(x23_2 + 0x10)
                *x23_2 = x27_3
                *(x23_2 + 8) = x20_3
                *(x23_2 + 0x10) = x0_21 + x19_2 + 0x15
                
                if (x19_5 != 0)
                    Botan::deallocate_memory(x19_5, x8_16 - x19_5, 1)
            
            x19_3 = entry_x8
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
                *x19_3 + x21_1, x0_17)
            i = i_1
            i_1 -= 1
            x21_1 += 0x18
        while (i != 1)
        size_t x21_2 = 0
        
        while (true)
            int64_t* fp_3 = *x19_3
            i_1 += 1
            void* x28_1 = fp_3 + x21_2
            char* x8_20 = *(x28_1 + 8)
            int64_t x9_6 = *(x28_1 + 0x10)
            
            if (x8_20 u< x9_6)
                *x8_20 = (i_1.d).b
                *(x28_1 + 8) = &x8_20[1]
            else
                void* x24_3 = *(fp_3 + x21_2)
                size_t x19_6 = x8_20 - x24_3
                
                if (x19_6 + 1 s< 0)
                label_e87e08:
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    break
                
                void* x9_7 = x9_6 - x24_3
                int64_t x10_7 = x9_7 << 1
                int64_t x8_22
                
                if (x10_7 u< x19_6 + 1)
                    x8_22 = x19_6 + 1
                else
                    x8_22 = x10_7
                
                int64_t x25_3
                
                x25_3 = x9_7 u< 0x3fffffffffffffff ? x8_22 : 0x7fffffffffffffff
                
                size_t x2_5
                int64_t x26_3
                
                if (x25_3 == 0)
                    x26_3 = 0
                    x2_5 = x19_6
                else
                    int64_t x0_26 = Botan::allocate_memory(x25_3, 1)
                    x24_3 = *(fp_3 + x21_2)
                    x26_3 = x0_26
                    x2_5 = *(x28_1 + 8) - x24_3
                
                char* x20_4 = x26_3 + x19_6
                void* x19_7 = x20_4 - x2_5
                *x20_4 = (i_1.d).b
                
                if (x2_5 s>= 1)
                    memcpy(x19_7, x24_3, x2_5)
                
                *(fp_3 + x21_2) = x19_7
                int64_t x8_24 = *(x28_1 + 0x10)
                x19_3 = entry_x8
                *(x28_1 + 8) = &x20_4[1]
                *(x28_1 + 0x10) = x26_3 + x25_3
                
                if (x24_3 != 0)
                    Botan::deallocate_memory(x24_3, x8_24 - x24_3, 1)
            
            x21_2 += 0x18
            
            if (i_2 == i_1)
                void* result = result_2
                void* result_11
                
                if (result == result_1)
                    result_11 = result_8
                else
                    uint64_t i_3 = i_2
                    uint64_t x22_3 = zx.q(zx.d(arg1) - 1)
                    int64_t var_b8_1 = 0
                    uint64_t var_100_1 = x22_3
                    bool cond:8_1
                    
                    do
                        void* x19_8
                        char* x25_4
                        
                        if (x22_3 == 0)
                            x25_4 = nullptr
                            x19_8 = nullptr
                        else
                            char* x0_30 = operator new(x22_3)
                            x25_4 = x0_30
                            x19_8 = &x0_30[x22_3]
                            memset(x0_30, 0, x22_3)
                        
                        void* x26_4 = x19_8 - x25_4
                        (*(*arg7 + 0x10))(arg7, x25_4, x26_4)
                        void** x19_9 = entry_x8
                        int64_t x25_5 = 0
                        void* var_c0_2 = x26_4
                        
                        do
                            uint32_t x22_4 = zx.d(*(result_1 + var_b8_1))
                            int64_t x8_33 = x25_5
                            x25_5 += 1
                            
                            if (x26_4 != 0)
                                char* x9_12 = x25_4
                                void* x10_8 = x26_4
                                char x11_5 = x25_5.b
                                
                                while (true)
                                    uint32_t x12_1 = 0
                                    
                                    if (zx.d(x11_5) != 0)
                                        uint64_t x13_1 = zx.q(*x9_12)
                                        
                                        if (x13_1.d != 0)
                                            x12_1 = zx.d(*(&data_841445 + zx.q((
                                                zx.d(*(&data_841545 + x13_1))
                                                + zx.d(*(&data_841545 + zx.q(x11_5)))) u% 0xff)))
                                    
                                    if (zx.d(x11_5) == 0)
                                        x11_5 = 0
                                        x22_4 ^= x12_1
                                        void* temp1_1 = x10_8
                                        x10_8 -= 1
                                        x9_12 = &x9_12[1]
                                        
                                        if (temp1_1 == 1)
                                            break
                                    else
                                        x11_5 = *(&data_841445 + zx.q((zx.d(*(&data_841545 + x25_5))
                                            + zx.d(*(&data_841545 + zx.q(x11_5)))) u% 0xff))
                                        x22_4 ^= x12_1
                                        void* temp2_1 = x10_8
                                        x10_8 -= 1
                                        x9_12 = &x9_12[1]
                                        
                                        if (temp2_1 == 1)
                                            break
                            
                            int64_t* x26_5 = *x19_9 + x8_33 * 0x18
                            uint8_t* x8_34 = x26_5[1]
                            
                            if (x8_34 != x26_5[2])
                                *x8_34 = x22_4.b
                                x26_5[1] = &x8_34[1]
                            else
                                void* x28_3 = *x26_5
                                x21_2 = x8_34 - x28_3
                                
                                if (x21_2 + 1 s< 0)
                                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                                    goto label_e87e08
                                
                                int64_t x9_15 = x21_2 << 1
                                int64_t x8_36
                                
                                if (x9_15 u< x21_2 + 1)
                                    x8_36 = x21_2 + 1
                                else
                                    x8_36 = x9_15
                                
                                int64_t x0_32
                                
                                x0_32 = x21_2 u< 0x3fffffffffffffff ? x8_36 : 0x7fffffffffffffff
                                
                                int64_t var_d0_1 = x0_32
                                size_t x2_8
                                
                                if (x0_32 == 0)
                                    x2_8 = x21_2
                                else
                                    x0_32 = Botan::allocate_memory(x0_32, 1)
                                    x28_3 = *x26_5
                                    x2_8 = x26_5[1] - x28_3
                                
                                uint8_t* x19_10 = x0_32 + x21_2
                                void* x21_3 = x19_10 - x2_8
                                *x19_10 = x22_4.b
                                
                                if (x2_8 s>= 1)
                                    memcpy(x21_3, x28_3, x2_8)
                                
                                *x26_5 = x21_3
                                x26_5[1] = &x19_10[1]
                                int64_t x8_38 = x26_5[2]
                                i_3 = i_2
                                x19_9 = entry_x8
                                x26_5[2] = x0_32 + var_d0_1
                                
                                if (x28_3 != 0)
                                    Botan::deallocate_memory(x28_3, x8_38 - x28_3, 1)
                            
                            result_11 = result_8
                            x26_4 = var_c0_2
                        while (x25_5 != i_3)
                        
                        x22_3 = var_100_1
                        
                        if (x25_4 != 0)
                            operator delete(x25_4)
                        
                        result = result_1
                        cond:8_1 = var_b8_1 + 1 == result_2 - result
                        var_b8_1 += 1
                    while (not(cond:8_1))
                
                if (x0_17 != 0)
                    Botan::deallocate_memory(x0_17, 0x14, 1)
                    result = result_1
                
                if (result != 0)
                    void* result_3 = result
                    result = Botan::deallocate_memory(result, result_10 - result, 1)
                
                if (result_11 == 0)
                    return result
                
                return (*(*result_11 + 0x10))(result_11)

void** x0_40 = __cxa_allocate_exception(0x20)
int64_t x0_41
int128_t v0
x0_41, v0 = operator new(0x30)
v0 = data_71c510
int64_t var_70_1 = x0_41
__builtin_strncpy(x0_41, "RTSS_Share::split: Invalid N or M", 0x22)
var_80 = v0
*x0_40 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_40[1])
*x0_40 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_40, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
