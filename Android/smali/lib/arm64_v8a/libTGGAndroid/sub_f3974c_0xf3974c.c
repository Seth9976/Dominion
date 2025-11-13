// 函数: sub_f3974c
// 地址: 0xf3974c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 8)

if (x8 != 0)
    *x8 = 0
    Botan_FFI::botan_struct<Botan::RandomNumberGenerator, 1224866241u>* x0 = *(arg1 + 0x10)
    
    if (x0 != 0)
        Botan::RandomNumberGenerator* x0_1 =
            Botan_FFI::safe_get<Botan::RandomNumberGenerator, 1224866241u>(x0)
        char* x8_1 = *(arg1 + 0x18)
        char* x22_1
        
        x22_1 = x8_1 == 0 ? &data_76da56 : x8_1
        
        size_t x0_3 = strlen(x22_1)
        
        if (x0_3 u>= -0x10)
            std::__ndk1::__basic_string_common<true>::__throw_length_error()
        else
            int64_t var_58
            void* var_48
            void* x23_1
            
            if (x0_3 u>= 0x17)
                uint64_t x24_1 = (x0_3 + 0x10) & 0xfffffffffffffff0
                void* x0_5 = operator new(x24_1)
                x23_1 = x0_5
                size_t var_50_1 = x0_3
                var_48 = x0_5
                var_58 = x24_1 | 1
                memcpy(x23_1, x22_1, x0_3)
            else
                x23_1 = &var_58 | 1
                var_58.b = (x0_3.d << 1).b
                
                if (x0_3 != 0)
                    memcpy(x23_1, x22_1, x0_3)
            
            *(x23_1 + x0_3) = 0
            char* x8_5 = *(arg1 + 0x20)
            char* x22_2
            
            x22_2 = x8_5 == 0 ? &data_793a18 : x8_5
            
            size_t x0_8
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x3_1
            x0_8, x3_1 = strlen(x22_2)
            
            if (x0_8 u< -0x10)
                int64_t var_70
                void* var_60
                void* x23_2
                
                if (x0_8 u>= 0x17)
                    uint64_t x24_2 = (x0_8 + 0x10) & 0xfffffffffffffff0
                    void* x0_10 = operator new(x24_2)
                    x23_2 = x0_10
                    size_t var_68_1 = x0_8
                    var_60 = x0_10
                    var_70 = x24_2 | 1
                    x3_1 = memcpy(x23_2, x22_2, x0_8)
                else
                    x23_2 = &var_70 | 1
                    var_70.b = (x0_8.d << 1).b
                    
                    if (x0_8 != 0)
                        x3_1 = memcpy(x23_2, x22_2, x0_8)
                
                *(x23_2 + x0_8) = 0
                Botan::create_private_key(&var_58, x0_1, &var_70, x3_1)
                
                if ((zx.d(var_70.b) & 1) == 0)
                    if ((zx.d(var_58.b) & 1) != 0)
                        goto label_f398fc
                    
                    goto label_f398a4
                
                operator delete(var_60)
                int64_t x20_2
                int64_t var_38
                
                if ((zx.d(var_58.b) & 1) == 0)
                label_f398a4:
                    x20_2 = var_38
                    
                    if (x20_2 == 0)
                        return 0xffffffd8
                else
                label_f398fc:
                    operator delete(var_48)
                    x20_2 = var_38
                    
                    if (x20_2 == 0)
                        return 0xffffffd8
                void** x0_13 = operator new(0x18)
                x0_13[2] = x20_2
                x0_13[1].d = 0x7f96385e
                *x0_13 = _vtable_for_botan_privkey_struct + 0x10
                **(arg1 + 8) = x0_13
                return 0
        
        int64_t* x0_17 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        (*(*x0_1 + 8))(x0_1)
        sub_1101e04(x0_17)
        noreturn

return 0xffffffe1
