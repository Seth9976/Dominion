// 函数: sub_dcbd24
// 地址: 0xdcbd24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg3 & 7) == 0)
    uint64_t x20_1 = (arg3 - 8) & 0xfffffffffffffff8
    __builtin_memset(arg1, 0, 0x18)
    
    if (x20_1 == 0)
        goto label_dcbd9c
    
    if ((x20_1 & 0xffffffff80000000) != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_dcc238:
        int64_t* x0_18 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        char var_70
        void* var_60
        
        if ((zx.d(var_70) & 1) != 0)
            operator delete(var_60)
        sub_1101e04(x0_18)
        noreturn
    
    int64_t x0_1 = Botan::allocate_memory(x20_1, 1)
    int64_t x25_1 = x0_1 + x20_1
    *arg1 = x0_1
    arg1[2] = x25_1
    memset(x0_1, 0, x20_1)
    arg1[1] = x25_1
label_dcbd9c:
    int64_t* x0_2 = Botan::allocate_memory(0x10, 1)
    x0_2[1] = 0
    *x0_2 = *arg2
    
    if (arg3 == 8)
    label_dcc108:
        *arg5 = _byteswap(*x0_2)
        return Botan::deallocate_memory(x0_2, 0x10, 1)
    
    int64_t x0_3 = *arg1
    
    if (x0_3 == 0)
        goto label_dcc238
    
    uint64_t x25_2 = (arg3 - 8) u>> 3
    memmove(x0_3, &arg2[1], arg3 - 8)
    
    if (x25_2 == 0)
        goto label_dcc108
    
    int64_t x23_3 = x25_2 - 1
    int32_t x24_2 = x25_2.d * 6
    int64_t x26_1 = x23_3
    
    while (true)
        char x10_1 = *(x0_2 + 4)
        char x11_1 = *(x0_2 + 5)
        char x12_1 = *(x0_2 + 6)
        char x13_1 = *(x0_2 + 7)
        int64_t x8_3 = *arg1
        int32_t temp0_1 = _byteswap(x24_2)
        *(x0_2 + 4) = x10_1 ^ temp0_1.b
        *(x0_2 + 5) = x11_1 ^ (temp0_1 u>> 8).b
        *(x0_2 + 6) = x12_1 ^ (temp0_1 u>> 0x10).b
        *(x0_2 + 7) = x13_1 ^ (temp0_1 u>> 0x18).b
        
        if (x8_3 == 0)
        label_dcc15c:
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            break
        
        x0_2[1] = *(x8_3 + (x26_1 << 3))
        (*(*arg4 + 0x50))(arg4, x0_2, x0_2, 1)
        int64_t x8_7 = *arg1
        
        if (x8_7 == 0)
            break
        
        x24_2 -= 1
        *(x8_7 + (x26_1 << 3)) = x0_2[1]
        x26_1 -= 1
        
        if (x26_1 == -1)
            int32_t x24_3 = x25_2.d * 5
            int64_t x26_2 = x23_3
            
            while (true)
                char x10_3 = *(x0_2 + 4)
                char x11_3 = *(x0_2 + 5)
                char x12_3 = *(x0_2 + 6)
                char x13_2 = *(x0_2 + 7)
                int64_t x8_8 = *arg1
                int32_t temp0_2 = _byteswap(x24_3)
                *(x0_2 + 4) = x10_3 ^ temp0_2.b
                *(x0_2 + 5) = x11_3 ^ (temp0_2 u>> 8).b
                *(x0_2 + 6) = x12_3 ^ (temp0_2 u>> 0x10).b
                *(x0_2 + 7) = x13_2 ^ (temp0_2 u>> 0x18).b
                
                if (x8_8 == 0)
                    goto label_dcc15c
                
                x0_2[1] = *(x8_8 + (x26_2 << 3))
                (*(*arg4 + 0x50))(arg4, x0_2, x0_2, 1)
                int64_t x8_12 = *arg1
                
                if (x8_12 == 0)
                    break
                
                x24_3 -= 1
                *(x8_12 + (x26_2 << 3)) = x0_2[1]
                x26_2 -= 1
                
                if (x26_2 == -1)
                    int32_t x24_4 = x25_2.d << 2
                    int64_t x26_3 = x23_3
                    
                    while (true)
                        char x10_5 = *(x0_2 + 4)
                        char x11_5 = *(x0_2 + 5)
                        char x12_5 = *(x0_2 + 6)
                        char x13_3 = *(x0_2 + 7)
                        int64_t x8_13 = *arg1
                        int32_t temp0_3 = _byteswap(x24_4)
                        *(x0_2 + 4) = x10_5 ^ temp0_3.b
                        *(x0_2 + 5) = x11_5 ^ (temp0_3 u>> 8).b
                        *(x0_2 + 6) = x12_5 ^ (temp0_3 u>> 0x10).b
                        *(x0_2 + 7) = x13_3 ^ (temp0_3 u>> 0x18).b
                        
                        if (x8_13 == 0)
                            goto label_dcc15c
                        
                        x0_2[1] = *(x8_13 + (x26_3 << 3))
                        (*(*arg4 + 0x50))(arg4, x0_2, x0_2, 1)
                        int64_t x8_17 = *arg1
                        
                        if (x8_17 == 0)
                            break
                        
                        x24_4 -= 1
                        *(x8_17 + (x26_3 << 3)) = x0_2[1]
                        x26_3 -= 1
                        
                        if (x26_3 == -1)
                            int32_t x24_5 = x25_2.d * 3
                            int64_t x26_4 = x23_3
                            
                            while (true)
                                char x10_7 = *(x0_2 + 4)
                                char x11_7 = *(x0_2 + 5)
                                char x12_7 = *(x0_2 + 6)
                                char x13_4 = *(x0_2 + 7)
                                int64_t x8_18 = *arg1
                                int32_t temp0_4 = _byteswap(x24_5)
                                *(x0_2 + 4) = x10_7 ^ temp0_4.b
                                *(x0_2 + 5) = x11_7 ^ (temp0_4 u>> 8).b
                                *(x0_2 + 6) = x12_7 ^ (temp0_4 u>> 0x10).b
                                *(x0_2 + 7) = x13_4 ^ (temp0_4 u>> 0x18).b
                                
                                if (x8_18 == 0)
                                    goto label_dcc15c
                                
                                x0_2[1] = *(x8_18 + (x26_4 << 3))
                                (*(*arg4 + 0x50))(arg4, x0_2, x0_2, 1)
                                int64_t x8_22 = *arg1
                                
                                if (x8_22 == 0)
                                    break
                                
                                x24_5 -= 1
                                *(x8_22 + (x26_4 << 3)) = x0_2[1]
                                x26_4 -= 1
                                
                                if (x26_4 == -1)
                                    int32_t x24_6 = x25_2.d << 1
                                    int64_t x25_3 = x23_3
                                    
                                    while (true)
                                        char x10_9 = *(x0_2 + 4)
                                        char x11_9 = *(x0_2 + 5)
                                        char x12_9 = *(x0_2 + 6)
                                        char x13_5 = *(x0_2 + 7)
                                        int64_t x8_23 = *arg1
                                        int32_t temp0_5 = _byteswap(x24_6)
                                        *(x0_2 + 4) = x10_9 ^ temp0_5.b
                                        *(x0_2 + 5) = x11_9 ^ (temp0_5 u>> 8).b
                                        *(x0_2 + 6) = x12_9 ^ (temp0_5 u>> 0x10).b
                                        *(x0_2 + 7) = x13_5 ^ (temp0_5 u>> 0x18).b
                                        
                                        if (x8_23 == 0)
                                            goto label_dcc15c
                                        
                                        x0_2[1] = *(x8_23 + (x25_3 << 3))
                                        (*(*arg4 + 0x50))(arg4, x0_2, x0_2, 1)
                                        int64_t x8_27 = *arg1
                                        
                                        if (x8_27 == 0)
                                            break
                                        
                                        x24_6 -= 1
                                        *(x8_27 + (x25_3 << 3)) = x0_2[1]
                                        x25_3 -= 1
                                        
                                        if (x25_3 == -1)
                                            while (true)
                                                char x10_11 = *(x0_2 + 4)
                                                char x11_11 = *(x0_2 + 5)
                                                char x12_11 = *(x0_2 + 6)
                                                char x13_6 = *(x0_2 + 7)
                                                int64_t x8_28 = *arg1
                                                int32_t temp0_6 = _byteswap(x23_3.d + 1)
                                                *(x0_2 + 4) = x10_11 ^ temp0_6.b
                                                *(x0_2 + 5) = x11_11 ^ (temp0_6 u>> 8).b
                                                *(x0_2 + 6) = x12_11 ^ (temp0_6 u>> 0x10).b
                                                *(x0_2 + 7) = x13_6 ^ (temp0_6 u>> 0x18).b
                                                
                                                if (x8_28 == 0)
                                                    goto label_dcc15c
                                                
                                                x0_2[1] = *(x8_28 + (x23_3 << 3))
                                                (*(*arg4 + 0x50))(arg4, x0_2, x0_2, 1)
                                                int64_t x8_32 = *arg1
                                                
                                                if (x8_32 == 0)
                                                    break
                                                
                                                *(x8_32 + (x23_3 << 3)) = x0_2[1]
                                                x23_3 -= 1
                                                
                                                if (x23_3 == -1)
                                                    goto label_dcc108
                                            
                                            break
                                    
                                    break
                            
                            break
                    
                    break
            
            break
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

void** x0_12 = __cxa_allocate_exception(0x20)
int64_t x0_13
int128_t v0
x0_13, v0 = operator new(0x30)
v0 = data_71d3f0
int64_t var_60_1 = x0_13
__builtin_strncpy(x0_13, "Bad input size for NIST key unwrap", 0x23)
int128_t var_70_1 = v0
*x0_12 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_12[1])
*x0_12 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_12, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
