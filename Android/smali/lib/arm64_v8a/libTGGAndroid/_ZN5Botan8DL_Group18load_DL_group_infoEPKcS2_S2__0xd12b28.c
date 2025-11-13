// 函数: _ZN5Botan8DL_Group18load_DL_group_infoEPKcS2_S2_
// 地址: 0xd12b28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t x0 = strlen(arg1)

if (x0 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* var_90
    void* var_80
    void* x24_1
    
    if (x0 u>= 0x17)
        uint64_t x25_1 = (x0 + 0x10) & 0xfffffffffffffff0
        void* x0_2 = operator new(x25_1)
        x24_1 = x0_2
        size_t var_88_1 = x0
        var_80 = x0_2
        var_90 = x25_1 | 1
        memcpy(x24_1, arg1, x0)
    else
        x24_1 = &var_90 | 1
        var_90.b = (x0.d << 1).b
        
        if (x0 != 0)
            memcpy(x24_1, arg1, x0)
    
    *(x24_1 + x0) = 0
    void* result_1
    Botan::BigInt::BigInt(&result_1)
    
    if ((zx.d(var_90.b) & 1) != 0)
        operator delete(var_80)
    
    size_t x0_7 = strlen(arg2)
    
    if (x0_7 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        void* var_b8
        void* var_a8
        void* x23_1
        
        if (x0_7 u>= 0x17)
            uint64_t x24_2 = (x0_7 + 0x10) & 0xfffffffffffffff0
            void* x0_9 = operator new(x24_2)
            x23_1 = x0_9
            size_t var_b0_1 = x0_7
            var_a8 = x0_9
            var_b8 = x24_2 | 1
            memcpy(x23_1, arg2, x0_7)
        else
            x23_1 = &var_b8 | 1
            var_b8.b = (x0_7.d << 1).b
            
            if (x0_7 != 0)
                memcpy(x23_1, arg2, x0_7)
        
        *(x23_1 + x0_7) = 0
        Botan::BigInt::BigInt(&var_90)
        
        if ((zx.d(var_b8.b) & 1) != 0)
            operator delete(var_a8)
        
        size_t x0_14 = strlen(arg3)
        
        if (x0_14 u< -0x10)
            int64_t var_d0
            void* var_c0
            void* x22_3
            
            if (x0_14 u>= 0x17)
                uint64_t x23_2 = (x0_14 + 0x10) & 0xfffffffffffffff0
                void* x0_16 = operator new(x23_2)
                x22_3 = x0_16
                size_t var_c8_1 = x0_14
                var_c0 = x0_16
                var_d0 = x23_2 | 1
                memcpy(x22_3, arg3, x0_14)
            else
                x22_3 = &var_d0 | 1
                var_d0.b = (x0_14.d << 1).b
                
                if (x0_14 != 0)
                    memcpy(x22_3, arg3, x0_14)
            
            *(x22_3 + x0_14) = 0
            Botan::BigInt::BigInt(&var_b8)
            
            if ((zx.d(var_d0.b) & 1) != 0)
                operator delete(var_c0)
            
            int64_t* x0_20 = operator new(0x188)
            x0_20[2] = 0
            *x0_20 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::DL_Group_Data, std::__ndk1::allocator<Botan::DL_Group_Data> >
                + 0x10
            x0_20[1] = 0
            Botan::DL_Group_Data::DL_Group_Data(&x0_20[3], &result_1, &var_90, &var_b8)
            void* x0_22 = var_b8
            Botan::BigInt** entry_x8
            *entry_x8 = &x0_20[3]
            entry_x8[1] = x0_20
            
            if (x0_22 != 0)
                void* var_b0_2 = x0_22
                Botan::deallocate_memory(x0_22, (var_a8 - x0_22) s>> 2, 4)
            
            void* x0_23 = var_90
            
            if (x0_23 != 0)
                void* var_88_2 = x0_23
                Botan::deallocate_memory(x0_23, (var_80 - x0_23) s>> 2, 4)
            
            void* result = result_1
            
            if (result == 0)
                return result
            
            void* result_2 = result
            int64_t var_58
            return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)

sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
noreturn
