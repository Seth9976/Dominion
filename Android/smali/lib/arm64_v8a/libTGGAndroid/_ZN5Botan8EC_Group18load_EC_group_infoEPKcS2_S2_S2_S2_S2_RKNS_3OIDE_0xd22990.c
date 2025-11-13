// 函数: _ZN5Botan8EC_Group18load_EC_group_infoEPKcS2_S2_S2_S2_S2_RKNS_3OIDE
// 地址: 0xd22990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t x0 = strlen(arg1)

if (x0 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_d22e84:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_d22e8c:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* var_b0
    void* var_a0
    void* x28_1
    
    if (x0 u>= 0x17)
        uint64_t fp_1 = (x0 + 0x10) & 0xfffffffffffffff0
        void* x0_2 = operator new(fp_1)
        x28_1 = x0_2
        size_t var_a8_1 = x0
        var_a0 = x0_2
        var_b0 = fp_1 | 1
        memcpy(x28_1, arg1, x0)
    else
        x28_1 = &var_b0 | 1
        var_b0.b = (x0.d << 1).b
        
        if (x0 != 0)
            memcpy(x28_1, arg1, x0)
    
    *(x28_1 + x0) = 0
    void* result_1
    Botan::BigInt::BigInt(&result_1)
    
    if ((zx.d(var_b0.b) & 1) != 0)
        operator delete(var_a0)
    
    size_t x0_7 = strlen(arg2)
    
    if (x0_7 u>= -0x10)
        goto label_d22e84
    
    void* var_d8
    void* var_c8
    void* x27_1
    
    if (x0_7 u>= 0x17)
        uint64_t x28_2 = (x0_7 + 0x10) & 0xfffffffffffffff0
        void* x0_9 = operator new(x28_2)
        x27_1 = x0_9
        size_t var_d0_1 = x0_7
        var_c8 = x0_9
        var_d8 = x28_2 | 1
        memcpy(x27_1, arg2, x0_7)
    else
        x27_1 = &var_d8 | 1
        var_d8.b = (x0_7.d << 1).b
        
        if (x0_7 != 0)
            memcpy(x27_1, arg2, x0_7)
    
    *(x27_1 + x0_7) = 0
    Botan::BigInt::BigInt(&var_b0)
    
    if ((zx.d(var_d8.b) & 1) != 0)
        operator delete(var_c8)
    
    size_t x0_14 = strlen(arg3)
    
    if (x0_14 u>= -0x10)
        goto label_d22e8c
    
    void* var_100
    void* var_f0
    void* x26_3
    
    if (x0_14 u>= 0x17)
        uint64_t x27_2 = (x0_14 + 0x10) & 0xfffffffffffffff0
        void* x0_16 = operator new(x27_2)
        x26_3 = x0_16
        size_t var_f8_1 = x0_14
        var_f0 = x0_16
        var_100 = x27_2 | 1
        memcpy(x26_3, arg3, x0_14)
    else
        x26_3 = &var_100 | 1
        var_100.b = (x0_14.d << 1).b
        
        if (x0_14 != 0)
            memcpy(x26_3, arg3, x0_14)
    
    *(x26_3 + x0_14) = 0
    Botan::BigInt::BigInt(&var_d8)
    
    if ((zx.d(var_100.b) & 1) != 0)
        operator delete(var_f0)
    
    size_t x0_21 = strlen(arg4)
    
    if (x0_21 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        void* var_128
        void* var_118
        void* x25_2
        
        if (x0_21 u>= 0x17)
            uint64_t x26_4 = (x0_21 + 0x10) & 0xfffffffffffffff0
            void* x0_23 = operator new(x26_4)
            x25_2 = x0_23
            size_t var_120_1 = x0_21
            var_118 = x0_23
            var_128 = x26_4 | 1
            memcpy(x25_2, arg4, x0_21)
        else
            x25_2 = &var_128 | 1
            var_128.b = (x0_21.d << 1).b
            
            if (x0_21 != 0)
                memcpy(x25_2, arg4, x0_21)
        
        *(x25_2 + x0_21) = 0
        Botan::BigInt::BigInt(&var_100)
        
        if ((zx.d(var_128.b) & 1) != 0)
            operator delete(var_118)
        
        size_t x0_28 = strlen(arg5)
        
        if (x0_28 u>= -0x10)
            std::__ndk1::__basic_string_common<true>::__throw_length_error()
        else
            void* var_150
            void* var_140
            void* x24_2
            
            if (x0_28 u>= 0x17)
                uint64_t x25_3 = (x0_28 + 0x10) & 0xfffffffffffffff0
                void* x0_30 = operator new(x25_3)
                x24_2 = x0_30
                size_t var_148_1 = x0_28
                var_140 = x0_30
                var_150 = x25_3 | 1
                memcpy(x24_2, arg5, x0_28)
            else
                x24_2 = &var_150 | 1
                var_150.b = (x0_28.d << 1).b
                
                if (x0_28 != 0)
                    memcpy(x24_2, arg5, x0_28)
            
            *(x24_2 + x0_28) = 0
            Botan::BigInt::BigInt(&var_128)
            
            if ((zx.d(var_150.b) & 1) != 0)
                operator delete(var_140)
            
            size_t x0_35 = strlen(arg6)
            
            if (x0_35 u< -0x10)
                int32_t* var_178
                void* var_168
                void* x23_2
                
                if (x0_35 u>= 0x17)
                    uint64_t x24_3 = (x0_35 + 0x10) & 0xfffffffffffffff0
                    void* x0_37 = operator new(x24_3)
                    x23_2 = x0_37
                    size_t var_170_1 = x0_35
                    var_168 = x0_37
                    var_178 = x24_3 | 1
                    memcpy(x23_2, arg6, x0_35)
                else
                    x23_2 = &var_178 | 1
                    var_178.b = (x0_35.d << 1).b
                    
                    if (x0_35 != 0)
                        memcpy(x23_2, arg6, x0_35)
                
                *(x23_2 + x0_35) = 0
                Botan::BigInt::BigInt(&var_150)
                
                if ((zx.d(var_178.b) & 1) != 0)
                    operator delete(var_168)
                
                __builtin_memset(&var_178, 0, 0x18)
                int32_t var_158 = 1
                int64_t var_160 = -1
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                    &var_178)
                *var_178 = 1
                int32_t* x8_25 = var_178
                int64_t var_160_1 = -1
                int64_t var_170_2
                
                if ((var_170_2 - x8_25) s>> 2 u>= 2)
                    x8_25[1] = 0
                
                int64_t* x0_42 = operator new(0x210)
                x0_42[2] = 0
                *x0_42 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::EC_Group_Data, std::__ndk1::allocator<Botan::EC_Group_Data> >
                    + 0x10
                x0_42[1] = 0
                int32_t var_188 = 0
                Botan::OID const& var_190 = arg7
                Botan::EC_Group_Data::EC_Group_Data(&x0_42[3], &result_1, &var_b0, &var_d8, 
                    &var_100, &var_128, &var_150, &var_178)
                int32_t* x0_44 = var_178
                Botan::BigInt** entry_x8
                *entry_x8 = &x0_42[3]
                entry_x8[1] = x0_42
                
                if (x0_44 != 0)
                    int32_t* var_170_3 = x0_44
                    int64_t var_168_1
                    Botan::deallocate_memory(x0_44, (var_168_1 - x0_44) s>> 2, 4)
                
                void* x0_45 = var_150
                
                if (x0_45 != 0)
                    void* var_148_2 = x0_45
                    Botan::deallocate_memory(x0_45, (var_140 - x0_45) s>> 2, 4)
                
                void* x0_46 = var_128
                
                if (x0_46 != 0)
                    void* var_120_2 = x0_46
                    Botan::deallocate_memory(x0_46, (var_118 - x0_46) s>> 2, 4)
                
                void* x0_47 = var_100
                
                if (x0_47 != 0)
                    void* var_f8_2 = x0_47
                    Botan::deallocate_memory(x0_47, (var_f0 - x0_47) s>> 2, 4)
                
                void* x0_48 = var_d8
                
                if (x0_48 != 0)
                    void* var_d0_2 = x0_48
                    Botan::deallocate_memory(x0_48, (var_c8 - x0_48) s>> 2, 4)
                
                void* x0_49 = var_b0
                
                if (x0_49 != 0)
                    void* var_a8_2 = x0_49
                    Botan::deallocate_memory(x0_49, (var_a0 - x0_49) s>> 2, 4)
                
                void* result = result_1
                
                if (result == 0)
                    return result
                
                void* result_2 = result
                int64_t var_78
                return Botan::deallocate_memory(result, (var_78 - result) s>> 2, 4)

sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
noreturn
