// 函数: sub_f16940
// 地址: 0xf16940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result

if (zx.d(*(arg1 + 0xa5)) == 0)
    char* x8_5 = *(arg1 + 0x48)
    int64_t x9_1 = *(arg1 + 0x50)
    result = arg1 + 0x40
    void* x21_2
    void* x22_1
    uint64_t x24_1
    
    if (zx.d(*(arg1 + 0xa6)) == 0)
        if (x8_5 != x9_1)
        label_f16a38:
            *x8_5 = arg2.b
            *(arg1 + 0x48) = &x8_5[1]
            return result
        
        x21_2 = *result
        x22_1 = x8_5 - x21_2
        
        if (x22_1 + 1 s>= 0)
            uint64_t x9_4 = x22_1 << 1
            uint64_t x8_11
            
            if (x9_4 u< x22_1 + 1)
                x8_11 = x22_1 + 1
            else
                x8_11 = x9_4
            
            x24_1 = x22_1 u< 0x3fffffffffffffff ? x8_11 : 0x7fffffffffffffff
            
            int64_t* result_1
            
            if (x24_1 != 0)
            label_f169dc:
                result = operator new(x24_1)
                result_1 = result
            else
            label_f16ac0:
                result_1 = nullptr
            
            void* x25_3 = result_1 + x22_1
            *x25_3 = arg2.b
            
            if (x22_1 s>= 1)
                result = memcpy(result_1, x21_2, x22_1)
            
            *(arg1 + 0x40) = result_1
            *(arg1 + 0x48) = x25_3 + 1
            *(arg1 + 0x50) = result_1 + x24_1
            
            if (x21_2 == 0)
                return result
            
            return operator delete(x21_2) __tailcall
    else
        if (x8_5 u< x9_1)
            goto label_f16a38
        
        x21_2 = *result
        x22_1 = x8_5 - x21_2
        
        if (x22_1 + 1 s>= 0)
            void* x9_2 = x9_1 - x21_2
            uint64_t x11_1 = x9_2 << 1
            uint64_t x8_7
            
            if (x11_1 u< x22_1 + 1)
                x8_7 = x22_1 + 1
            else
                x8_7 = x11_1
            
            x24_1 = x9_2 u< 0x3fffffffffffffff ? x8_7 : 0x7fffffffffffffff
            
            if (x24_1 == 0)
                goto label_f16ac0
            
            goto label_f169dc
else
    int64_t* x0 = *(arg1 + 0x18)
    result = (*(*x0 + 0x28))(x0, zx.q(arg2))
    char* x8_3 = *(arg1 + 0x48)
    int64_t x9 = *(arg1 + 0x50)
    char x21_1 = result.b
    
    if (x8_3 u< x9)
        *x8_3 = x21_1
        *(arg1 + 0x48) = &x8_3[1]
        return result
    
    result = arg1 + 0x40
    void* x20_1 = *result
    size_t x22_2 = x8_3 - x20_1
    
    if (x22_2 + 1 s>= 0)
        void* x9_3 = x9 - x20_1
        int64_t x11_2 = x9_3 << 1
        int64_t x8_9
        
        if (x11_2 u< x22_2 + 1)
            x8_9 = x22_2 + 1
        else
            x8_9 = x11_2
        
        int64_t x24_2
        
        x24_2 = x9_3 u< 0x3fffffffffffffff ? x8_9 : 0x7fffffffffffffff
        
        int64_t* result_2
        
        if (x24_2 == 0)
            result_2 = nullptr
        else
            result = operator new(x24_2)
            result_2 = result
        
        void* x25_1 = result_2 + x22_2
        *x25_1 = x21_1
        
        if (x22_2 s>= 1)
            result = memcpy(result_2, x20_1, x22_2)
        
        *(arg1 + 0x40) = result_2
        *(arg1 + 0x48) = x25_1 + 1
        *(arg1 + 0x50) = result_2 + x24_2
        
        if (x20_1 == 0)
            return result
        
        return operator delete(x20_1) __tailcall
int64_t x0_7
int64_t x1_4
x0_7, x1_4 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
return std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*> >(x0_7, x1_4)
    __tailcall
