// 函数: sub_f33a24
// 地址: 0xf33a24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) != 0)
    char* x20_1 = *(arg1 + 0x10)
    
    if (x20_1 != 0 && *(arg1 + 0x18) == 0)
        size_t x0_2 = strlen(x20_1)
        
        if (x0_2 u>= -0x10)
            int64_t* x0_10 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
            (*(*x20_1 + 0x10))(x20_1)
            sub_1101e04(x0_10)
            noreturn
        
        int64_t var_50
        void* var_40
        void* x22_1
        
        if (x0_2 u>= 0x17)
            uint64_t x23_1 = (x0_2 + 0x10) & 0xfffffffffffffff0
            void* x0_4 = operator new(x23_1)
            x22_1 = x0_4
            size_t var_48_1 = x0_2
            var_40 = x0_4
            var_50 = x23_1 | 1
            memcpy(x22_1, x20_1, x0_2)
        else
            x22_1 = &var_50 | 1
            var_50.b = (x0_2.d << 1).b
            
            if (x0_2 != 0)
                memcpy(x22_1, x20_1, x0_2)
        
        *(x22_1 + x0_2) = 0
        int16_t var_68 = 0
        Botan::MessageAuthenticationCode::create(&var_50, &var_68)
        
        if ((zx.d(var_68.b) & 1) == 0)
            if ((zx.d(var_50.b) & 1) != 0)
                goto label_f33b4c
            
            goto label_f33af4
        
        void* var_58
        operator delete(var_58)
        int64_t x20_2
        int64_t var_38
        
        if ((zx.d(var_50.b) & 1) == 0)
        label_f33af4:
            x20_2 = var_38
            
            if (x20_2 == 0)
                return 0xffffffd8
        else
        label_f33b4c:
            operator delete(var_40)
            x20_2 = var_38
            
            if (x20_2 == 0)
                return 0xffffffd8
        void** x0_7 = operator new(0x18)
        x0_7[2] = x20_2
        x0_7[1].d = 0xa06e8fc1
        *x0_7 = _vtable_for_botan_mac_struct + 0x10
        **(arg1 + 8) = x0_7
        return 0

return 0xffffffe1
