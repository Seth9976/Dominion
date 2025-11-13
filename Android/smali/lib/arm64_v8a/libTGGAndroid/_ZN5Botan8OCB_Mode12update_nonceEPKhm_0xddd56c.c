// 函数: _ZN5Botan8OCB_Mode12update_nonceEPKhm
// 地址: 0xddd56c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x25 = *(arg1 + 0x58)
int64_t x8_1 = ror.q(x25 - 0x10, 3)

if (x8_1 u< 3 || x8_1 == 6)
    void* x8_2 = *(arg1 + 0x98)
    void* x9_2 = *(arg1 + 0xa0) - x8_2
    void* x0_1
    int32_t x26_1
    
    if (x25 != 0x10)
        if (x25 u> x9_2)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x98])
        else if (x25 u< x9_2)
            *(arg1 + 0xa0) = x8_2 + x25
        
        x26_1 = x25 == 0x18 ? 0x7f : -1
        
        x0_1 = *(arg1 + 0x98)
        int64_t x8_6 = *(arg1 + 0xa0)
        
        if (x8_6 != x0_1)
            memset(x0_1, 0, x8_6 - x0_1)
            x0_1 = *(arg1 + 0x98)
    else if (x9_2 u<= 0xf)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x98])
        x26_1 = 0x3f
        x0_1 = *(arg1 + 0x98)
        int64_t x8_3 = *(arg1 + 0xa0)
        
        if (x8_3 != x0_1)
            memset(x0_1, 0, x8_3 - x0_1)
            x0_1 = *(arg1 + 0x98)
    else if (x9_2 != 0x10)
        *(arg1 + 0xa0) = x8_2 + 0x10
        x26_1 = 0x3f
        x0_1 = *(arg1 + 0x98)
        int64_t x8_40 = *(arg1 + 0xa0)
        
        if (x8_40 != x0_1)
            memset(x0_1, 0, x8_40 - x0_1)
            x0_1 = *(arg1 + 0x98)
    else
        x26_1 = 0x3f
        x0_1 = *(arg1 + 0x98)
        int64_t x8_4 = *(arg1 + 0xa0)
        
        if (x8_4 != x0_1)
            memset(x0_1, 0, x8_4 - x0_1)
            x0_1 = *(arg1 + 0x98)
    
    size_t entry_x2
    void* x23_1 = x25 - entry_x2
    
    if (entry_x2 == 0)
        goto label_ddd684
    
    if (arg2 != 0 && x0_1 != 0)
        memmove(x0_1 + x23_1, arg2, entry_x2)
    label_ddd684:
        **(arg1 + 0x98) =
            ((((*(*arg1 + 0x80))(arg1) << 3) u% (x25 << 3)) << zx.q(x25 u< 0x11 ? 1 : 0)).b
        void* x8_13 = x23_1 + *(arg1 + 0x98)
        *(x8_13 - 1) ^= 1
        void* x8_15 = x25 + *(arg1 + 0x98)
        uint32_t x23_2 = zx.d(*(x8_15 - 1))
        *(x8_15 - 1) = x23_2.b & (not.d(x26_1)).b
        char* x8_16 = *(arg1 + 0x68)
        char* x1_2 = *(arg1 + 0x98)
        int64_t x9_7 = *(arg1 + 0x70)
        
        if (x9_7 - x8_16 == *(arg1 + 0xa0) - x1_2)
            if (x8_16 != x9_7)
                char* x10_3 = x1_2
                
                do
                    if (zx.d(*x8_16) != zx.d(*x10_3))
                        goto label_ddd724
                    
                    x8_16 = &x8_16[1]
                    x10_3 = &x10_3[1]
                while (x9_7 != x8_16)
            
            goto label_dddb24
        
    label_ddd724:
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
            &arg1[0x68], x1_2)
        int64_t* x21_1 = *(arg1 + 8)
        int64_t x22_1 = *(arg1 + 0x98)
        (*(*x21_1 + 0x48))(x21_1, x22_1, x22_1, 
            (*(arg1 + 0xa0) - x22_1) u/ (*(*x21_1 + 0x30))(x21_1))
        void* var_70_1
        
        if (x25 == 0x10)
            int64_t x28_1 = 0
            var_70_1 = &arg1[0x98]
            
            while (true)
                void* x21_2 = *(arg1 + 0x98)
                char* x8_22 = *(arg1 + 0xa0)
                int64_t x9_9 = *(arg1 + 0xa8)
                char* x10_4 = x21_2 + x28_1
                char x27_1 = x10_4[1] ^ *x10_4
                
                if (x8_22 u< x9_9)
                    *x8_22 = x27_1
                    *(arg1 + 0xa0) = &x8_22[1]
                else
                    size_t x24_3 = x8_22 - x21_2
                    
                    if (x24_3 + 1 s< 0)
                        break
                    
                    void* x9_10 = x9_9 - x21_2
                    int64_t x10_6 = x9_10 << 1
                    int64_t x8_24
                    
                    if (x10_6 u< x24_3 + 1)
                        x8_24 = x24_3 + 1
                    else
                        x8_24 = x10_6
                    
                    int64_t x22_2
                    
                    x22_2 = x9_10 u< 0x3fffffffffffffff ? x8_24 : 0x7fffffffffffffff
                    
                    size_t x2_4
                    int64_t x23_3
                    
                    if (x22_2 == 0)
                        x23_3 = 0
                        x2_4 = x24_3
                    else
                        int64_t x0_12 = Botan::allocate_memory(x22_2, 1)
                        x21_2 = *(arg1 + 0x98)
                        x23_3 = x0_12
                        x2_4 = *(arg1 + 0xa0) - x21_2
                    
                    char* x20_2 = x23_3 + x24_3
                    void* x24_4 = x20_2 - x2_4
                    *x20_2 = x27_1
                    
                    if (x2_4 s>= 1)
                        memcpy(x24_4, x21_2, x2_4)
                    
                    int64_t x8_26 = *(arg1 + 0xa8)
                    *(arg1 + 0x98) = x24_4
                    *(arg1 + 0xa0) = &x20_2[1]
                    *(arg1 + 0xa8) = x23_3 + x22_2
                    
                    if (x21_2 != 0)
                        Botan::deallocate_memory(x21_2, x8_26 - x21_2, 1)
                
                x28_1 += 1
                
                if (x28_1 == 8)
                    goto label_dddb10
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        else if (x25 == 0x18)
            int64_t x28_2 = 0
            var_70_1 = &arg1[0x98]
            
            while (true)
                void* x21_3 = *(arg1 + 0x98)
                char* x8_28 = *(arg1 + 0xa0)
                int64_t x9_12 = *(arg1 + 0xa8)
                char* x10_7 = x21_3 + x28_2
                char x27_2 = x10_7[5] ^ *x10_7
                
                if (x8_28 u< x9_12)
                    *x8_28 = x27_2
                    *(arg1 + 0xa0) = &x8_28[1]
                else
                    size_t x24_5 = x8_28 - x21_3
                    
                    if (x24_5 + 1 s< 0)
                        break
                    
                    void* x9_13 = x9_12 - x21_3
                    int64_t x10_9 = x9_13 << 1
                    int64_t x8_30
                    
                    if (x10_9 u< x24_5 + 1)
                        x8_30 = x24_5 + 1
                    else
                        x8_30 = x10_9
                    
                    int64_t x22_3
                    
                    x22_3 = x9_13 u< 0x3fffffffffffffff ? x8_30 : 0x7fffffffffffffff
                    
                    size_t x2_5
                    int64_t x23_4
                    
                    if (x22_3 == 0)
                        x23_4 = 0
                        x2_5 = x24_5
                    else
                        int64_t x0_16 = Botan::allocate_memory(x22_3, 1)
                        x21_3 = *(arg1 + 0x98)
                        x23_4 = x0_16
                        x2_5 = *(arg1 + 0xa0) - x21_3
                    
                    char* x20_3 = x23_4 + x24_5
                    void* x24_6 = x20_3 - x2_5
                    *x20_3 = x27_2
                    
                    if (x2_5 s>= 1)
                        memcpy(x24_6, x21_3, x2_5)
                    
                    int64_t x8_32 = *(arg1 + 0xa8)
                    *(arg1 + 0x98) = x24_6
                    *(arg1 + 0xa0) = &x20_3[1]
                    *(arg1 + 0xa8) = x23_4 + x22_3
                    
                    if (x21_3 != 0)
                        Botan::deallocate_memory(x21_3, x8_32 - x21_3, 1)
                
                x28_2 += 1
                
                if (x28_2 == 0x10)
                    goto label_dddb10
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        else if (x25 == 0x20)
            int64_t x28_4 = 0
            
            while (true)
                void* x21_5 = *(arg1 + 0x98)
                char* x8_42 = *(arg1 + 0xa0)
                int64_t x9_18 = *(arg1 + 0xa8)
                char* x10_13 = x21_5 + x28_4
                uint32_t x11_7 = zx.d(*x10_13)
                char x26_3 = x11_7.b ^ (x11_7 << 1).b ^ x10_13[1] u>> 7
                
                if (x8_42 u< x9_18)
                    *x8_42 = x26_3
                    *(arg1 + 0xa0) = &x8_42[1]
                else
                    void* x24_9 = x8_42 - x21_5
                    
                    if (x24_9 + 1 s< 0)
                        break
                    
                    void* x9_19 = x9_18 - x21_5
                    int64_t x10_15 = x9_19 << 1
                    int64_t x8_44
                    
                    if (x10_15 u< x24_9 + 1)
                        x8_44 = x24_9 + 1
                    else
                        x8_44 = x10_15
                    
                    int64_t x22_5
                    
                    x22_5 = x9_19 u< 0x3fffffffffffffff ? x8_44 : 0x7fffffffffffffff
                    
                    void* x2_7
                    void* const x23_6
                    
                    if (x22_5 == 0)
                        x23_6 = nullptr
                        x2_7 = x24_9
                    else
                        void* x0_24 = Botan::allocate_memory(x22_5, 1)
                        x21_5 = *(arg1 + 0x98)
                        x23_6 = x0_24
                        x2_7 = *(arg1 + 0xa0) - x21_5
                    
                    void* x27_5 = x23_6 + x24_9
                    void* x24_10 = x27_5 - x2_7
                    *x27_5 = x26_3
                    
                    if (x2_7 s>= 1)
                        memcpy(x24_10, x21_5, x2_7)
                    
                    int64_t x8_46 = *(arg1 + 0xa8)
                    *(arg1 + 0x98) = x24_10
                    *(arg1 + 0xa0) = x27_5 + 1
                    *(arg1 + 0xa8) = x23_6 + x22_5
                    
                    if (x21_5 != 0)
                        Botan::deallocate_memory(x21_5, x8_46 - x21_5, 1)
                
                x28_4 += 1
                
                if (x28_4 == 0x20)
                    goto label_dddb10
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        else if (x25 != 0x40)
        label_dddb10:
            *(arg1 + 0xa0)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
                &arg1[0x80], *(arg1 + 0x98))
        label_dddb24:
            uint64_t x22_6 = zx.q(x23_2) & zx.q(x26_1)
            uint64_t x21_6 = x22_6 u>> 3 & 0x1f
            
            if (*(arg1 + 0x88) - *(arg1 + 0x80) u>= x25 + x21_6 + 1)
                void* x8_49 = *(arg1 + 0xb0)
                void* x9_24 = *(arg1 + 0xb8) - x8_49
                
                if (x25 u<= x9_24)
                    if (x25 u< x9_24)
                        *(arg1 + 0xb8) = x8_49 + x25
                    
                    if (x25 != 0)
                        goto label_dddb74
                else
                    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
                        &arg1[0xb0])
                label_dddb74:
                    int32_t x9_25 = x22_6.d & 7
                    int64_t x8_51 = 0
                    
                    do
                        (*(arg1 + 0xb0))[x8_51] =
                            (zx.d(*(*(arg1 + 0x80) + x21_6 + x8_51)) << x9_25).b
                        char* x12_4 = *(arg1 + 0xb0)
                        x12_4[x8_51] |=
                            (zx.d(*(*(arg1 + 0x80) + x21_6 + x8_51 + 1)) u>> (8 - x9_25)).b
                        x8_51 += 1
                    while (x25 != x8_51)
                
                return &arg1[0xb0]
        else
            int64_t x28_3 = 0
            
            while (true)
                void* x21_4 = *(arg1 + 0x98)
                char* x8_34 = *(arg1 + 0xa0)
                int64_t x9_15 = *(arg1 + 0xa8)
                char* x10_10 = x21_4 + x28_3
                char x26_2 = x10_10[0x16] ^ *x10_10
                
                if (x8_34 u< x9_15)
                    *x8_34 = x26_2
                    *(arg1 + 0xa0) = &x8_34[1]
                else
                    void* x24_7 = x8_34 - x21_4
                    
                    if (x24_7 + 1 s< 0)
                        break
                    
                    void* x9_16 = x9_15 - x21_4
                    int64_t x10_12 = x9_16 << 1
                    void* x8_36
                    
                    if (x10_12 u< x24_7 + 1)
                        x8_36 = x24_7 + 1
                    else
                        x8_36 = x10_12
                    
                    void* x22_4
                    
                    x22_4 = x9_16 u< 0x3fffffffffffffff ? x8_36 : 0x7fffffffffffffff
                    
                    void* x2_6
                    void* const x23_5
                    
                    if (x22_4 == 0)
                        x23_5 = nullptr
                        x2_6 = x24_7
                    else
                        void* x0_20 = Botan::allocate_memory(x22_4, 1)
                        x21_4 = *(arg1 + 0x98)
                        x23_5 = x0_20
                        x2_6 = *(arg1 + 0xa0) - x21_4
                    
                    void* x27_3 = x23_5 + x24_7
                    int64_t x24_8 = x27_3 - x2_6
                    *x27_3 = x26_2
                    
                    if (x2_6 s>= 1)
                        memcpy(x24_8, x21_4, x2_6)
                    
                    int64_t x8_38 = *(arg1 + 0xa8)
                    *(arg1 + 0x98) = x24_8
                    *(arg1 + 0xa0) = x27_3 + 1
                    *(arg1 + 0xa8) = x23_5 + x22_4
                    
                    if (x21_4 != 0)
                        Botan::deallocate_memory(x21_4, x8_38 - x21_4, 1)
                
                x28_3 += 1
                
                if (x28_3 == 0x20)
                    goto label_dddb10
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        Botan::assertion_failure("m_stretch.size() >= BS + shift_bytes + 1", "Size ok", 
            "update_nonce", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf1d1)
    
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

sub_c776cc(Botan::assertion_failure("BS == 16 || BS == 24 || BS == 32 || BS == 64", 
    "OCB block size is supported", "update_nonce", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf187))
noreturn
