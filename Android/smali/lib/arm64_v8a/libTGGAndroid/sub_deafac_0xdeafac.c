// 函数: sub_deafac
// 地址: 0xdeafac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = arg2
void* result_1

if (arg7 != 0 || arg8 u< 2)
    uint64_t x28_1 = arg7 + arg5
    __builtin_memset(&result_1, 0, 0x18)
    void* var_98
    void* var_88
    void* var_78_1
    void* var_70_1
    void* result_8
    
    if (arg7 != neg.q(arg5))
        if ((x28_1 & 0xffffffff80000000) == 0)
            void* result_3 = Botan::allocate_memory(x28_1, 1)
            void* fp_1 = result_3 + x28_1
            result_8 = result_3
            result_1 = result_3
            var_70_1 = fp_1
            memset(result_3, 0, x28_1)
            var_78_1 = fp_1
            
            if (arg7 != 0)
                goto label_deb048
            
            goto label_deb038
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_deb414:
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    label_deb43c:
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    label_deb444:
        int64_t* x0_26 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x0_27 = var_98
        
        if (x0_27 != 0)
            void* var_90_3 = x0_27
            Botan::deallocate_memory(x0_27, var_88 - x0_27, 1)
        
        void* result_4 = result_1
        
        if (result_4 != 0)
            void* result_7 = result_4
            Botan::deallocate_memory(result_4, var_70_1 - result_4, 1)
        
        sub_1101e04(x0_26)
        noreturn
    
    result_8 = nullptr
    
    if (arg7 == 0)
    label_deb038:
        
        if (arg5 == 0)
            goto label_deb088
    else
    label_deb048:
        
        if (arg6 == 0 || result_8 == 0)
            goto label_deb414
        
        memcpy(result_8, arg6, arg7)
        
        if (arg5 == 0)
            goto label_deb088
    
    if (arg4 == 0 || result_8 == 0)
        goto label_deb43c
    
    memmove(result_8 + arg7, arg4, arg5)
label_deb088:
    uint64_t x0_4 = (**arg1)(arg1)
    __builtin_memset(&var_98, 0, 0x18)
    void* var_90_1
    void* x24_1
    void* x25_1
    
    if (x0_4 != 0)
        if ((x0_4 & 0xffffffff80000000) != 0)
            goto label_deb444
        
        void* x0_6 = Botan::allocate_memory(x0_4, 1)
        x24_1 = x0_6 + x0_4
        x25_1 = x0_6
        var_98 = x0_6
        var_88 = x24_1
        memset(x0_6, 0, x0_4)
        var_90_1 = x24_1
        
        if (arg3 != 0)
            goto label_deb0e0
        
        goto label_deb1f8
    
    x25_1 = nullptr
    x24_1 = nullptr
    
    if (arg3 == 0)
    label_deb1f8:
        
        if (x25_1 != 0)
            void* var_90_2 = x25_1
            Botan::deallocate_memory(x25_1, var_88 - x25_1, 1)
        
        void* result = result_1
        
        if (result == 0)
            return result
        
        void* result_2 = result
        return Botan::deallocate_memory(result, var_70_1 - result, 1)
    
label_deb0e0:
    
    if (x22 != 0)
        int64_t x26_1 = 0
        uint64_t x23_2 = 0
        
        while (true)
            size_t x8_3 = x24_1 - x25_1
            size_t x9_1 = arg3 - x26_1
            size_t x24_2
            
            x24_2 = x9_1 u< x8_3 ? x9_1 : x8_3
            
            void* var_b0_1
            __builtin_memset(&var_b0_1, 0, 0x18)
            void* x25_2
            void* x27_1
            
            if (x23_2 == 0)
                x27_1 = nullptr
                x25_2 = nullptr
            else
                if ((x23_2 & 0xffffffff80000000) != 0)
                    goto label_deb360
                
                void* x0_8 = operator new(x23_2)
                x27_1 = x0_8 + x23_2
                x25_2 = x0_8
                var_b0_1 = x0_8
                void* var_a0_1 = x27_1
                memset(x0_8, 0, x23_2)
                void* var_a8_1 = x27_1
            
            (*(*arg1 + 0x18))(arg1, x25_2, x27_1 - x25_2)
            void* result_5 = result_1
            void* x8_6 = var_78_1
            
            if (result_5 != x8_6)
                void* x9_2 = x8_6 - result_5
                void* x27_2
                
                x27_2 = x9_2 u> arg8 ? x9_2 : arg8
                
                if (x27_2 != 0)
                    while (true)
                        void* x8_7 = x8_6 - result_5
                        void* x25_3
                        
                        x25_3 = x8_7 u< x27_2 ? x8_7 : x27_2
                        
                        (*(*arg1 + 0x18))(arg1)
                        void* temp1_1 = x27_2
                        x27_2 -= x25_3
                        
                        if (temp1_1 == x25_3)
                            break
                        
                        result_5 = result_1
                        x8_6 = var_78_1
            
            (*(*arg1 + 0x20))(arg1, var_98)
            x25_1 = var_98
            
            if (x24_2 != 0)
                if (x25_1 == 0)
                    goto label_deb358
                
                memmove(x22 + x26_1, x25_1, x24_2)
            
            void* x0_13 = var_b0_1
            
            if (x0_13 != 0)
                operator delete(x0_13)
            
            x26_1 += x24_2
            
            if (x26_1 == arg3)
                break
            
            x24_1 = var_90_1
            x23_2 += 1
        
        goto label_deb1f8
    
    while (true)
        void* x8_12 = x24_1 - x25_1
        void* x24_3
        
        x24_3 = x8_12 u> arg3 ? arg3 : x8_12
        
        void* var_b0_2
        __builtin_memset(&var_b0_2, 0, 0x18)
        void* x23_3
        void* x25_4
        
        if (x22 == 0)
            x25_4 = nullptr
            x23_3 = nullptr
        else
            if ((x22 & 0xffffffff80000000) != 0)
                break
            
            void* x0_16 = operator new(x22)
            x25_4 = x0_16 + x22
            x23_3 = x0_16
            var_b0_2 = x0_16
            void* var_a0_2 = x25_4
            memset(x0_16, 0, x22)
            void* var_a8_2 = x25_4
        
        (*(*arg1 + 0x18))(arg1, x23_3, x25_4 - x23_3)
        void* result_6 = result_1
        void* x8_15 = var_78_1
        
        if (result_6 != x8_15)
            void* x9_5 = x8_15 - result_6
            void* x25_5
            
            x25_5 = x9_5 u> arg8 ? x9_5 : arg8
            
            if (x25_5 != 0)
                while (true)
                    void* x8_16 = x8_15 - result_6
                    void* x23_4
                    
                    x23_4 = x8_16 u< x25_5 ? x8_16 : x25_5
                    
                    (*(*arg1 + 0x18))(arg1)
                    void* temp0_1 = x25_5
                    x25_5 -= x23_4
                    
                    if (temp0_1 == x23_4)
                        break
                    
                    result_6 = result_1
                    x8_15 = var_78_1
        
        (*(*arg1 + 0x20))(arg1, var_98)
        
        if (x24_3 != 0)
        label_deb358:
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            break
        
        void* x0_20 = var_b0_2
        
        if (x0_20 != 0)
            operator delete(x0_20)
        
        x25_1 = var_98
        x24_1 = var_90_1
        x22 += 1
    
label_deb360:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

void** x0_21 = __cxa_allocate_exception(0x20)
int64_t x0_22
int128_t v0
x0_22, v0 = operator new(0x30)
(*"in iterated mode")[0].o
int64_t var_70_2 = x0_22
v0 = data_71abd0
__builtin_strncpy(x0_22, "OpenPGP S2K requires a salt in iterated mode", 0x2d)
result_1.o = v0
*x0_21 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_21[1])
*x0_21 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_21, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
