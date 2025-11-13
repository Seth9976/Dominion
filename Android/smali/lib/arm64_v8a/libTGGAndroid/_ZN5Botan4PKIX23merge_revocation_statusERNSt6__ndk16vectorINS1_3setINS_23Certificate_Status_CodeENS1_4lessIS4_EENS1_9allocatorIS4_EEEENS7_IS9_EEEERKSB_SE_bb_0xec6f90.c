// 函数: _ZN5Botan4PKIX23merge_revocation_statusERNSt6__ndk16vectorINS1_3setINS_23Certificate_Status_CodeENS1_4lessIS4_EENS1_9allocatorIS4_EEEENS7_IS9_EEEERKSB_SE_bb
// 地址: 0xec6f90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = *arg1
int64_t x8 = *(arg1 + 8)

if (x19 == x8)
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v0
    x0_7, v0 = operator new(0x40)
    v0 = data_71adb0
    int64_t var_70 = x0_7
    __builtin_strncpy(x0_7, "PKIX::merge_revocation_status chain_status was empty", 0x35)
    int128_t var_80 = v0
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (x8 - x19 == 0x18)
    return 

int64_t i = 0

do
    int64_t x8_9 = *arg2
    int32_t x28_2
    
    if (i u>= ((*(arg2 + 8) - x8_9) s>> 3) * -0x5555555555555555 || *(x8_9 + i * 0x18 + 0x10) == 0)
        x28_2 = 0
    else
        int64_t* x27_1 = x8_9 + i * 0x18
        int64_t* j_4 = *x27_1
        int32_t x28_1
        
        if (j_4 == &x27_1[1])
            x28_1 = 0
        else
            x28_1 = 0
            
            while (true)
                int32_t x8_10 = *(j_4 + 0x1c)
                int64_t* x20_2 = x19 + i * 0x18 + 8
                int64_t* x21_1 = *x20_2
                
                if (x8_10 == 3)
                    x28_1 = 1
                
                if (x21_1 == 0)
                    x21_1 = x20_2
                else
                    x20_2 = x19 + i * 0x18 + 8
                    
                    while (true)
                        int32_t x9_8 = *(x21_1 + 0x1c)
                        
                        if (x8_10 s>= x9_8)
                            if (x9_8 s>= x8_10)
                                break
                            
                            x20_2 = &x21_1[1]
                            int64_t* x9_10 = *x20_2
                            
                            if (x9_10 == 0)
                                break
                            
                            x21_1 = x9_10
                        else
                            int64_t* x9_9 = *x21_1
                            
                            if (x9_9 == 0)
                                x20_2 = x21_1
                                
                                if (*x20_2 != 0)
                                    goto label_ec70f0
                                
                                goto label_ec710c
                            
                            x20_2 = x21_1
                            x21_1 = x9_9
                
                int64_t* j
                
                if (*x20_2 == 0)
                label_ec710c:
                    int64_t* x0_1 = operator new(0x20)
                    int32_t x8_13 = *(j_4 + 0x1c)
                    *x0_1 = 0
                    x0_1[1] = 0
                    x0_1[2] = x21_1
                    *(x0_1 + 0x1c) = x8_13
                    *x20_2 = x0_1
                    int64_t* x8_14 = x19 + i * 0x18
                    int64_t x9_12 = **x8_14
                    int64_t* x1_1
                    
                    if (x9_12 == 0)
                        x1_1 = x0_1
                    else
                        *x8_14 = x9_12
                        x1_1 = *x20_2
                    
                    void* x19_2 = x19 + i * 0x18
                    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                        *(x19_2 + 8), x1_1)
                    *(x19_2 + 0x10) += 1
                    j = j_4[1]
                    
                    if (j == 0)
                        goto label_ec717c
                    
                    goto label_ec7170
                
            label_ec70f0:
                j = j_4[1]
                
                if (j != 0)
                label_ec7170:
                    
                    do
                        j_4 = j
                        j = *j
                    while (j != 0)
                    
                label_ec71a4:
                    
                    if (j_4 == &x27_1[1])
                        break
                else
                label_ec717c:
                    void* x8_18 = &j_4[2]
                    int64_t* j_5 = *x8_18
                    
                    if (*j_5 != j_4)
                        void* j_1
                        
                        do
                            j_1 = *x8_18
                            x8_18 = j_1 + 0x10
                            j_4 = *x8_18
                        while (*j_4 != j_1)
                        goto label_ec71a4
                    
                    j_4 = j_5
                    
                    if (j_4 == &x27_1[1])
                        break
                
                x19 = *arg1
        
        x28_2 = x28_1 & 1
    
    int64_t x8_21 = *arg3
    
    if (i u< ((*(arg3 + 8) - x8_21) s>> 3) * -0x5555555555555555 && *(x8_21 + i * 0x18 + 0x10) != 0)
        int64_t* fp_1 = x8_21 + i * 0x18
        int64_t* j_2 = *fp_1
        int32_t x27_3
        
        if (j_2 == &fp_1[1])
            x27_3 = 0
        else
            x27_3 = 0
            
            do
                int32_t x8_22 = *(j_2 + 0x1c)
                
                if (x8_22 - 0x1f6 u< 2 || x8_22 == 1)
                    x27_3 = 1
                
                int64_t x20_4 = *arg1
                int64_t* x25_2 = x20_4 + i * 0x18 + 8
                int64_t* x21_2 = *x25_2
                
                if (x21_2 == 0)
                    x21_2 = x25_2
                else
                    x25_2 = x20_4 + i * 0x18 + 8
                    
                    while (true)
                        int32_t x9_21 = *(x21_2 + 0x1c)
                        
                        if (x8_22 s>= x9_21)
                            if (x9_21 s>= x8_22)
                                break
                            
                            x25_2 = &x21_2[1]
                            int64_t* x9_23 = *x25_2
                            
                            if (x9_23 == 0)
                                break
                            
                            x21_2 = x9_23
                        else
                            int64_t* x9_22 = *x21_2
                            
                            if (x9_22 == 0)
                                x25_2 = x21_2
                                
                                if (*x25_2 != 0)
                                    goto label_ec72a8
                                
                                goto label_ec72c4
                            
                            x25_2 = x21_2
                            x21_2 = x9_22
                
                int64_t* k
                
                if (*x25_2 == 0)
                label_ec72c4:
                    int64_t* x0_3 = operator new(0x20)
                    int32_t x8_25 = *(j_2 + 0x1c)
                    *x0_3 = 0
                    x0_3[1] = 0
                    x0_3[2] = x21_2
                    *(x0_3 + 0x1c) = x8_25
                    *x25_2 = x0_3
                    int64_t* x8_26 = x20_4 + i * 0x18
                    int64_t x9_25 = **x8_26
                    int64_t* x1_2
                    
                    if (x9_25 == 0)
                        x1_2 = x0_3
                    else
                        *x8_26 = x9_25
                        x1_2 = *x25_2
                    
                    void* x20_5 = x20_4 + i * 0x18
                    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                        *(x20_5 + 8), x1_2)
                    *(x20_5 + 0x10) += 1
                    k = j_2[1]
                    
                    if (k == 0)
                        goto label_ec7334
                    
                    goto label_ec7328
                
            label_ec72a8:
                k = j_2[1]
                
                if (k != 0)
                label_ec7328:
                    
                    do
                        j_2 = k
                        k = *k
                    while (k != 0)
                else
                label_ec7334:
                    void* x8_30 = &j_2[2]
                    int64_t* j_3 = *x8_30
                    
                    if (*j_3 == j_2)
                        j_2 = j_3
                    else
                        void* k_1
                        
                        do
                            k_1 = *x8_30
                            x8_30 = k_1 + 0x10
                            j_2 = *x8_30
                        while (*j_2 != k_1)
            while (j_2 != &fp_1[1])
        
        if (((x28_2 | (x27_3 & 1)) & 1) == 0)
            goto label_ec739c
    else if ((x28_2 & 1) == 0)
    label_ec739c:
        
        if (((i == 0 ? 1 : 0) & arg4.d & 1) != 0 || ((i != 0 ? 1 : 0) & arg5.d) != 0)
            int64_t x19_3 = *arg1
            int64_t* x20_7 = x19_3 + i * 0x18 + 8
            int64_t* x21_3 = *x20_7
            
            if (x21_3 == 0)
                x21_3 = x20_7
            else
                x20_7 = x19_3 + i * 0x18 + 8
                
                while (true)
                    int32_t x8_39 = *(x21_3 + 0x1c)
                    
                    if (x8_39 s< 0x3eb)
                        if (x8_39 == 0x3ea)
                            break
                        
                        x20_7 = &x21_3[1]
                        int64_t* x8_41 = *x20_7
                        
                        if (x8_41 == 0)
                            break
                        
                        x21_3 = x8_41
                    else
                        int64_t* x8_40 = *x21_3
                        
                        if (x8_40 == 0)
                            x20_7 = x21_3
                            
                            if (*x20_7 != 0)
                                goto label_ec702c
                            
                            goto label_ec7414
                        
                        x20_7 = x21_3
                        x21_3 = x8_40
            
            if (*x20_7 == 0)
            label_ec7414:
                std::__ndk1::__tree_node_base<void*>* x0_5 = operator new(0x20)
                *(x0_5 + 0x1c) = 0x3ea
                *x0_5 = 0
                *(x0_5 + 8) = 0
                *(x0_5 + 0x10) = x21_3
                *x20_7 = x0_5
                int64_t* x8_43 = x19_3 + i * 0x18
                int64_t x9_30 = **x8_43
                std::__ndk1::__tree_node_base<void*>* x1
                
                if (x9_30 != 0)
                    *x8_43 = x9_30
                    x1 = *x20_7
                else
                    x1 = x0_5
                
                void* x19_1 = x19_3 + i * 0x18
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                    *(x19_1 + 8), x1)
                *(x19_1 + 0x10) += 1
    
label_ec702c:
    x19 = *arg1
    i += 1
while (i != ((*(arg1 + 8) - x19) s>> 3) * -0x5555555555555555 - 1)
