// 函数: _ZN5Botan11BER_Decoder9raw_bytesINSt6__ndk19allocatorIhEEEERS0_RNS2_6vectorIhT_EE
// 地址: 0xcaeaf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
entry_x1[1] = *entry_x1
int64_t* x0 = *(arg1 + 0x28)
char var_54

if ((**x0)(x0, &var_54, 1) != 0)
    int64_t i
    
    do
        char* x8_6 = entry_x1[1]
        
        if (x8_6 != entry_x1[2])
            *x8_6 = var_54
            entry_x1[1] = &x8_6[1]
        else
            void* x21_1 = *entry_x1
            size_t x22_1 = x8_6 - x21_1
            
            if (x22_1 + 1 s< 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                return Botan::BER_Decoder::end_cons() __tailcall
            
            int64_t x9_3 = x22_1 << 1
            int64_t x8_8
            
            if (x9_3 u< x22_1 + 1)
                x8_8 = x22_1 + 1
            else
                x8_8 = x9_3
            
            int64_t x23_1
            
            x23_1 = x22_1 u< 0x3fffffffffffffff ? x8_8 : 0x7fffffffffffffff
            
            int64_t x24_1
            
            if (x23_1 == 0)
                x24_1 = 0
            else
                x24_1 = operator new(x23_1)
            
            char* x27_1 = x24_1 + x22_1
            *x27_1 = var_54
            
            if (x22_1 s>= 1)
                memcpy(x24_1, x21_1, x22_1)
            
            *entry_x1 = x24_1
            entry_x1[1] = &x27_1[1]
            entry_x1[2] = x24_1 + x23_1
            
            if (x21_1 != 0)
                operator delete(x21_1)
        
        int64_t* x0_2 = *(arg1 + 0x28)
        i = (**x0_2)(x0_2, &var_54, 1)
    while (i != 0)

return arg1
