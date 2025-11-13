// 函数: sub_f2b0c0
// 地址: 0xf2b0c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* var_10 = arg2
int64_t* x8 = *(arg1 + 8)

if (x8 != 0)
    char* x9_1 = *(arg1 + 0x10)
    
    if (x9_1 != 0 && zx.d(*x9_1) != 0)
        *x8 = 0
        char* x21_1 = *(arg1 + 0x10)
        size_t x0_1 = strlen(x21_1)
        
        if (x0_1 u>= -0x10)
            int64_t* x0_10 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
            int64_t var_38_2 = 0
            (*(*arg2 + 8))(arg2)
            sub_1101e04(x0_10)
            noreturn
        
        int64_t var_50
        void* var_40
        void* x22_1
        
        if (x0_1 u>= 0x17)
            uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
            void* x0_4 = operator new(x23_1)
            x22_1 = x0_4
            size_t var_48_1 = x0_1
            var_40 = x0_4
            var_50 = x23_1 | 1
            memcpy(x22_1, x21_1, x0_1)
        else
            x22_1 = &var_50 | 1
            var_50.b = (x0_1.d << 1).b
            
            if (x0_1 != 0)
                memcpy(x22_1, x21_1, x0_1)
        
        *(x22_1 + x0_1) = 0
        int16_t var_68 = 0
        Botan::BlockCipher::create(&var_50, &var_68)
        
        if ((zx.d(var_68.b) & 1) == 0)
            if ((zx.d(var_50.b) & 1) != 0)
                goto label_f2b208
            
            goto label_f2b198
        
        void* var_58
        operator delete(var_58)
        int64_t x20_2
        int64_t var_38
        
        if ((zx.d(var_50.b) & 1) == 0)
        label_f2b198:
            x20_2 = var_38
            
            if (x20_2 == 0)
                return 0xffffffd8
        else
        label_f2b208:
            operator delete(var_40)
            x20_2 = var_38
            
            if (x20_2 == 0)
                return 0xffffffd8
        void** x0_7 = operator new(0x18)
        int64_t* result = nullptr
        x0_7[2] = x20_2
        x0_7[1].d = 0x64c29716
        *x0_7 = _vtable_for_botan_block_cipher_struct + 0x10
        **(arg1 + 8) = x0_7
        int64_t var_38_1 = 0
        
        if (result == 0)
            return result
        
        (*(*result + 8))()
        return nullptr

return 0xffffffe1
