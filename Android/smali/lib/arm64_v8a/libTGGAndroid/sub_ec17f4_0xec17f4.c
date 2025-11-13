// 函数: sub_ec17f4
// 地址: 0xec17f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x28 = arg1

if (arg2 != 1)
label_ec1988:
    
    if (arg9 != 0)
        int64_t x9_3
        int32_t i
        
        do
            x9_3 = __ldaxr(&arg9[1])
            i = __stlxr(x9_3 - 1, &arg9[1])
        while (i != 0)
        
        if (x9_3 == 0)
            (*(*arg9 + 0x10))(arg9)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    if (arg7 != 0)
        int64_t x9_4
        int32_t i_1
        
        do
            x9_4 = __ldaxr(&arg7[1])
            i_1 = __stlxr(x9_4 - 1, &arg7[1])
        while (i_1 != 0)
        
        if (x9_4 == 0)
            (*(*arg7 + 0x10))(arg7)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    void* x21_5 = *arg15
    
    if (x21_5 != 0)
        void* x0_14 = x21_5
        void* x20 = arg15[1]
        
        if (x20 != x21_5)
            do
                *(x20 - 0x10)
                x20 -= 0x18
                std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
                    x20)
            while (x21_5 != x20)
            
            x0_14 = *arg15
        
        arg15[1] = x21_5
        operator delete(x0_14)
    
    sub_1101e04(x28)
    noreturn

__cxa_begin_catch(x28)
int64_t* x21_2 = arg8 + arg5 * arg3 + 8
int64_t* x28_1 = *x21_2

if (x28_1 == 0)
    x28_1 = x21_2
else
    x21_2 = arg8 + arg5 * arg3 + 8
    
    while (true)
        int32_t x8_2 = *(x28_1 + 0x1c)
        
        if (x8_2 s< 0x1199)
            if (x8_2 == 0x1198)
                break
            
            x21_2 = &x28_1[1]
            int64_t* x8_4 = *x21_2
            
            if (x8_4 == 0)
                break
            
            x28_1 = x8_4
        else
            int64_t* x8_3 = *x28_1
            
            if (x8_3 == 0)
                x21_2 = x28_1
                break
            
            x21_2 = x28_1
            x28_1 = x8_3

if (*x21_2 == 0)
    std::__ndk1::__tree_node_base<void*>* x1 = operator new(0x20)
    *(x1 + 0x1c) = 0x1198
    *x1 = 0
    *(x1 + 8) = 0
    *(x1 + 0x10) = x28_1
    *x21_2 = x1
    int64_t x8_8 = **arg12
    
    if (x8_8 != 0)
        *arg12 = x8_8
        x1 = *x21_2
    
    void* x21_4 = arg8 + arg5 * arg3
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(*(x21_4 + 8), 
        x1)
    *(x21_4 + 0x10) += 1

int32_t* result = __cxa_end_catch()
std::__ndk1::__tree_node<Botan::Certificate_Status_Code, void*>* x8_24

while (true)
label_ec1554:
    
    if (arg9 == 0)
    label_ec1570:
        
        if (arg7 != 0)
        label_ec1578:
            int64_t x9_13 = __ldaxr(&arg7[1])
            
            if (__stlxr(x9_13 - 1, &arg7[1]) != 0)
                goto label_ec1578
            
            if (x9_13 == 0)
                (*(*arg7 + 0x10))(arg7)
                result = std::__ndk1::__shared_weak_count::__release_weak()
    else
    label_ec155c:
        int64_t x9_12 = __ldaxr(&arg9[1])
        
        if (__stlxr(x9_12 - 1, &arg9[1]) != 0)
            goto label_ec155c
        
        if (x9_12 != 0)
            goto label_ec1570
        
        (*(*arg9 + 0x10))(arg9)
        result = std::__ndk1::__shared_weak_count::__release_weak()
        
        if (arg7 != 0)
            goto label_ec1578
    
    int64_t x21_7 = *arg4
    int64_t x27_1 = arg4[1]
    int64_t x25_1 = (x27_1 - x21_7) s>> 4
    int64_t x26_1 = *arg15
    x8_24 = arg15[1]
    
    if (arg6 == x25_1 - 1)
        if (x8_24 == x26_1)
            return result
        
        break
    
    int64_t x22_1 = arg6
    
    if (((x8_24 - x26_1) s>> 3) * -0x5555555555555555 u<= arg6)
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    else if (x25_1 u> x22_1)
        int64_t* x8_26 = x21_7 + (x22_1 << 4)
        int64_t fp_2 = *x8_26
        arg7 = x8_26[1]
        
        if (arg7 != 0)
        label_ec14e8:
            
            if (__stxr(__ldxr(&arg7[1]) + 1, &arg7[1]) != 0)
                goto label_ec14e8
            
            x21_7 = *arg4
            x27_1 = arg4[1]
        
        arg6 = x22_1 + 1
        
        if (arg6 u< (x27_1 - x21_7) s>> 4)
            int64_t* x8_29 = x21_7 + (arg6 << 4)
            Botan::X509_Certificate* x21_8 = *x8_29
            arg9 = x8_29[1]
            
            if (arg9 != 0)
            label_ec1520:
                
                if (__stxr(__ldxr(&arg9[1]) + 1, &arg9[1]) != 0)
                    goto label_ec1520
            
            int64_t* x8_32 = *arg14
            
            if (x22_1 u>= (arg14[1] - x8_32) s>> 4)
                continue
            else
                result = x8_32[x22_1 * 2]
                
                if (result == 0)
                    continue
                else if (*result == 0)
                    int64_t* x8_44 = x26_1 + x22_1 * 0x18
                    result = Botan::OCSP::Response::check_signature(result, arg13)
                    int32_t x28_3 = result.d
                    std::__ndk1::__tree_node_base<void*>* x1_6
                    void* x21_15
                    
                    if (result.d != 2)
                        std::__ndk1::__tree_node_base<void*>** x21_13 = x26_1 + x22_1 * 0x18 + 8
                        std::__ndk1::__tree_node_base<void*>* fp_4 = *x21_13
                        
                        if (fp_4 == 0)
                            fp_4 = x21_13
                            
                            if (*x21_13 != 0)
                                continue
                        else
                            x21_13 = x26_1 + x22_1 * 0x18 + 8
                            
                            while (true)
                                int32_t x8_53 = *(fp_4 + 0x1c)
                                std::__ndk1::__tree_node_base<void*>* x8_52
                                
                                if (x28_3 s< x8_53)
                                    x8_52 = *fp_4
                                    
                                    if (x8_52 == 0)
                                        x21_13 = fp_4
                                        
                                        if (*x21_13 != 0)
                                            goto label_ec1554
                                        
                                        goto label_ec1748
                                    
                                    x21_13 = fp_4
                                else
                                    if (x8_53 s>= x28_3)
                                        break
                                    
                                    x21_13 = fp_4 + 8
                                    x8_52 = *x21_13
                                    
                                    if (x8_52 == 0)
                                        break
                                
                                fp_4 = x8_52
                            
                            if (*x21_13 != 0)
                                continue
                        
                    label_ec1748:
                        x1_6 = operator new(0x20)
                        *(x1_6 + 0x1c) = x28_3
                        *x1_6 = 0
                        *(x1_6 + 8) = 0
                        *(x1_6 + 0x10) = fp_4
                        *x21_13 = x1_6
                        int64_t x8_59 = **x8_44
                        
                        if (x8_59 != 0)
                            *x8_44 = x8_59
                            x1_6 = *x21_13
                        
                        x21_15 = x26_1 + x22_1 * 0x18
                    else
                        int64_t* x8_46 = *arg14
                        
                        if (x22_1 u>= (arg14[1] - x8_46) s>> 4)
                            x28 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            goto label_ec1988
                        
                        result =
                            Botan::OCSP::Response::status_for(x8_46[x22_1 * 2], x21_8, fp_2, arg10)
                        int64_t* x21_10 = x26_1 + x22_1 * 0x18 + 8
                        int64_t* fp_3 = *x21_10
                        int32_t x28_4 = result.d
                        
                        if (fp_3 == 0)
                            fp_3 = x21_10
                            
                            if (*x21_10 != 0)
                                continue
                        else
                            x21_10 = x26_1 + x22_1 * 0x18 + 8
                        label_ec167c:
                            int32_t x8_49 = *(fp_3 + 0x1c)
                            int64_t* x8_48
                            
                            if (x28_4 s< x8_49)
                                x8_48 = *fp_3
                                
                                if (x8_48 != 0)
                                    x21_10 = fp_3
                                    fp_3 = x8_48
                                    goto label_ec167c
                                
                                x21_10 = fp_3
                                
                                if (*x21_10 != 0)
                                    continue
                            else
                                if (x8_49 s< x28_4)
                                    x21_10 = &fp_3[1]
                                    x8_48 = *x21_10
                                
                                if (x8_49 s< x28_4 && x8_48 != 0)
                                    fp_3 = x8_48
                                    goto label_ec167c
                                
                                if (*x21_10 != 0)
                                    continue
                        
                        x1_6 = operator new(0x20)
                        *(x1_6 + 0x1c) = x28_4
                        *x1_6 = 0
                        *(x1_6 + 8) = 0
                        *(x1_6 + 0x10) = fp_3
                        *x21_10 = x1_6
                        int64_t x8_62 = **x8_44
                        
                        if (x8_62 != 0)
                            *x8_44 = x8_62
                            x1_6 = *x21_10
                        
                        x21_15 = x26_1 + x22_1 * 0x18
                    
                    result = std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                        *(x21_15 + 8), x1_6)
                    *(x21_15 + 0x10) += 1
                    continue
                else
                    continue
        
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v0
    x0_7, v0 = operator new(0x30)
    int64_t arg_40 = x0_7
    v0 = data_71bb40
    __builtin_strncpy(x0_7, "PKIX::check_ocsp cert_path empty", 0x21)
    int128_t arg_30 = v0
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

label_ec1474:

if (*(x8_24 - 8) == 0)
    *(x8_24 - 0x10)
    result = std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
        x8_24 - 0x18)
    *arg15
    arg15[1] = x8_24 - 0x18

return result
