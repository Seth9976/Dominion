// 函数: sub_dcb38c
// 地址: 0xdcb38c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = (arg3 + 0xf) & 0xfffffffffffffff8
uint64_t* var_68_1
__builtin_memset(&var_68_1, 0, 0x18)

if (x19 == 0)
    goto label_dcb3fc

if ((x19 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    uint64_t* x0_1 = Botan::allocate_memory(x19, 1)
    void* x25_1 = x0_1 + x19
    var_68_1 = x0_1
    void* var_58_1 = x25_1
    memset(x0_1, 0, x19)
    void* var_60_1 = x25_1
label_dcb3fc:
    uint64_t* x0_2 = Botan::allocate_memory(0x10, 1)
    uint64_t* i = var_68_1
    *x0_2 = _byteswap(arg5)
    x0_2[1] = 0
    
    if (arg3 == 0)
        goto label_dcb428
    
    if (arg2 == 0)
        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    else
        memmove(&i[1], arg2, arg3)
    label_dcb428:
        int64_t x23_1 = arg3 + 7
        uint64_t x22_1 = x23_1 u>> 3
        
        if (x22_1 != 0)
            if (i != 0)
                int64_t x24_1 = 1
                
                do
                    x0_2[1] = i[x24_1]
                    (*(*arg4 + 0x48))(arg4, x0_2, x0_2, 1)
                    uint64_t* x8_5 = var_68_1
                    
                    if (x8_5 == 0)
                    label_dcb8e4:
                        Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                            "If n > 0 then args are not null", "copy_mem", 
                            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                        goto label_dcb90c
                    
                    int64_t x9_1 = x0_2[1]
                    int32_t temp0_1 = _byteswap(x24_1.d)
                    x8_5[x24_1] = x9_1
                    char x9_3 = *(x0_2 + 5) ^ (temp0_1 u>> 8).b
                    char x11_2 = *(x0_2 + 6) ^ (temp0_1 u>> 0x10).b
                    char x10_2 = *(x0_2 + 7) ^ (temp0_1 u>> 0x18).b
                    *(x0_2 + 4) ^= temp0_1.b
                    *(x0_2 + 5) = x9_3
                    *(x0_2 + 6) = x11_2
                    *(x0_2 + 7) = x10_2
                    
                    if (x22_1 == x24_1)
                        goto label_dcb4e0
                    
                    i = var_68_1
                    x24_1 += 1
                while (i != 0)
            
            while (true)
                Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            label_dcb4e0:
                int64_t x24_2 = 0
            label_dcb4e4:
                uint64_t* x8_8 = var_68_1
                
                if (x8_8 != 0)
                    x0_2[1] = x8_8[x24_2 + 1]
                    (*(*arg4 + 0x48))(arg4, x0_2, x0_2, 1)
                    uint64_t* x8_13 = var_68_1
                    
                    if (x8_13 == 0)
                        goto label_dcb8e4
                    
                    x8_13[x24_2 + 1] = x0_2[1]
                    char x8_15 = *(x0_2 + 4)
                    char x10_4 = *(x0_2 + 5)
                    char x11_3 = *(x0_2 + 6)
                    char x12_2 = *(x0_2 + 7)
                    int32_t temp0_2 = _byteswap(x22_1.d + x24_2.d + 1)
                    x24_2 += 1
                    *(x0_2 + 4) = x8_15 ^ temp0_2.b
                    *(x0_2 + 5) = x10_4 ^ (temp0_2 u>> 8).b
                    *(x0_2 + 6) = x11_3 ^ (temp0_2 u>> 0x10).b
                    *(x0_2 + 7) = x12_2 ^ (temp0_2 u>> 0x18).b
                    
                    if (x22_1 != x24_2)
                        goto label_dcb4e4
                    
                    int64_t x26_1 = 1
                label_dcb580:
                    uint64_t* x8_18 = var_68_1
                    
                    if (x8_18 != 0)
                        x0_2[1] = x8_18[x26_1]
                        (*(*arg4 + 0x48))(arg4, x0_2, x0_2, 1)
                        uint64_t* x8_22 = var_68_1
                        
                        if (x8_22 == 0)
                            goto label_dcb8e4
                        
                        int64_t x9_8 = x0_2[1]
                        int32_t temp0_3 = _byteswap(((x23_1 u>> 3 & 0x7fffffff) << 1).d + x26_1.d)
                        x8_22[x26_1] = x9_8
                        x26_1 += 1
                        char x9_10 = *(x0_2 + 5) ^ (temp0_3 u>> 8).b
                        char x11_6 = *(x0_2 + 6) ^ (temp0_3 u>> 0x10).b
                        char x10_8 = *(x0_2 + 7) ^ (temp0_3 u>> 0x18).b
                        *(x0_2 + 4) ^= temp0_3.b
                        *(x0_2 + 5) = x9_10
                        *(x0_2 + 6) = x11_6
                        *(x0_2 + 7) = x10_8
                        
                        if (neg.q(x22_1) + x26_1 != 1)
                            goto label_dcb580
                        
                        int64_t x26_2 = 1
                    label_dcb610:
                        uint64_t* x8_25 = var_68_1
                        
                        if (x8_25 != 0)
                            x0_2[1] = x8_25[x26_2]
                            (*(*arg4 + 0x48))(arg4, x0_2, x0_2, 1)
                            uint64_t* x8_29 = var_68_1
                            
                            if (x8_29 == 0)
                                goto label_dcb8e4
                            
                            int64_t x9_11 = x0_2[1]
                            int32_t temp0_4 = _byteswap(x22_1.d * 3 + x26_2.d)
                            x8_29[x26_2] = x9_11
                            x26_2 += 1
                            char x9_13 = *(x0_2 + 5) ^ (temp0_4 u>> 8).b
                            char x11_8 = *(x0_2 + 6) ^ (temp0_4 u>> 0x10).b
                            char x10_11 = *(x0_2 + 7) ^ (temp0_4 u>> 0x18).b
                            *(x0_2 + 4) ^= temp0_4.b
                            *(x0_2 + 5) = x9_13
                            *(x0_2 + 6) = x11_8
                            *(x0_2 + 7) = x10_11
                            
                            if (neg.q(x22_1) + x26_2 != 1)
                                goto label_dcb610
                            
                            x23_1 = (x23_1 u>> 3 & 0x3fffffff) << 2
                            int64_t x25_4 = 1
                        label_dcb6a4:
                            uint64_t* x8_33 = var_68_1
                            
                            if (x8_33 != 0)
                                x0_2[1] = x8_33[x25_4]
                                (*(*arg4 + 0x48))(arg4, x0_2, x0_2, 1)
                                uint64_t* x8_37 = var_68_1
                                
                                if (x8_37 == 0)
                                    goto label_dcb8e4
                                
                                int64_t x9_14 = x0_2[1]
                                int32_t temp0_5 = _byteswap(x23_1.d + x25_4.d)
                                x8_37[x25_4] = x9_14
                                x25_4 += 1
                                char x9_16 = *(x0_2 + 5) ^ (temp0_5 u>> 8).b
                                char x11_10 = *(x0_2 + 6) ^ (temp0_5 u>> 0x10).b
                                char x10_14 = *(x0_2 + 7) ^ (temp0_5 u>> 0x18).b
                                *(x0_2 + 4) ^= temp0_5.b
                                *(x0_2 + 5) = x9_16
                                *(x0_2 + 6) = x11_10
                                *(x0_2 + 7) = x10_14
                                
                                if (neg.q(x22_1) + x25_4 != 1)
                                    goto label_dcb6a4
                                
                                x23_1 = neg.q(x22_1)
                                x22_1 = zx.q(x22_1.d * 5)
                                int64_t x24_6 = 1
                            label_dcb734:
                                uint64_t* x8_40 = var_68_1
                                
                                if (x8_40 != 0)
                                    x0_2[1] = x8_40[x24_6]
                                    (*(*arg4 + 0x48))(arg4, x0_2, x0_2, 1)
                                    uint64_t* x8_44 = var_68_1
                                    
                                    if (x8_44 == 0)
                                        goto label_dcb8e4
                                    
                                    int64_t x9_17 = x0_2[1]
                                    int32_t temp0_6 = _byteswap(x22_1.d + x24_6.d)
                                    x8_44[x24_6] = x9_17
                                    x24_6 += 1
                                    char x9_19 = *(x0_2 + 5) ^ (temp0_6 u>> 8).b
                                    char x11_12 = *(x0_2 + 6) ^ (temp0_6 u>> 0x10).b
                                    char x10_17 = *(x0_2 + 7) ^ (temp0_6 u>> 0x18).b
                                    *(x0_2 + 4) ^= temp0_6.b
                                    *(x0_2 + 5) = x9_19
                                    *(x0_2 + 6) = x11_12
                                    *(x0_2 + 7) = x10_17
                                    
                                    if (x23_1 + x24_6 != 1)
                                        goto label_dcb734
                                    
                                    i = var_68_1
                                    break
        
        if (i == 0)
        label_dcb90c:
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                "If n > 0 then args are not null", "copy_mem", 
                "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        else
            *i = *x0_2
            uint64_t* x23_2 = var_68_1
            __builtin_memset(arg1, 0, 0x18)
            uint64_t x21_1 = var_60_1 - x23_2
            
            if (var_60_1 == x23_2)
            label_dcb884:
                Botan::deallocate_memory(x0_2, 0x10, 1)
                uint64_t* result = var_68_1
                
                if (result == 0)
                    return result
                
                uint64_t* result_1 = result
                return Botan::deallocate_memory(result, var_58_1 - result, 1)
            
            if ((x21_1 & 0xffffffff80000000) == 0)
                void* x0_11
                int128_t v0_1
                int128_t v1_1
                x0_11, v0_1, v1_1 = operator new(x21_1)
                *arg1 = x0_11
                arg1[1] = x0_11
                arg1[2] = x0_11 + x21_1
                void* x8_51
                
                if (x23_2 == var_60_1)
                    x8_51 = x0_11
                else if (x21_1 u< 0x20 || (x0_11 u< var_60_1 && x23_2 u< var_60_1 + x0_11 - x23_2))
                label_dcb858:
                    x8_51 = x0_11
                    
                    do
                        char x9_20 = *x23_2
                        x23_2 += 1
                        *x8_51 = x9_20
                        x8_51 += 1
                    while (var_60_1 != x23_2)
                else
                    int64_t i_3 = x21_1 & 0xffffffffffffffe0
                    void* x10_18 = &x23_2[2]
                    x8_51 = x0_11 + i_3
                    x23_2 += i_3
                    void* x11_13 = x0_11 + 0x10
                    int64_t i_2 = i_3
                    int64_t i_1
                    
                    do
                        v0_1 = *(x10_18 - 0x10)
                        v1_1 = *x10_18
                        x10_18 += 0x20
                        i_1 = i_2
                        i_2 -= 0x20
                        *(x11_13 - 0x10) = v0_1
                        *x11_13 = v1_1
                        x11_13 += 0x20
                    while (i_1 != 0x20)
                    x0_11 = x8_51
                    
                    if (x21_1 != i_3)
                        goto label_dcb858
                
                arg1[1] = x8_51
                goto label_dcb884

sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
