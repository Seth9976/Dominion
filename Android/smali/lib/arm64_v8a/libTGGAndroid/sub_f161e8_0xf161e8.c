// 函数: sub_f161e8
// 地址: 0xf161e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_38 = arg5
int64_t var_30 = arg4
void* result
int64_t x8_4
int16_t* x9_2
int16_t x20_2
void* x21_1
void* x22_1

if (zx.d(*(arg1 + 0xa5)) == 0)
    x9_2 = *(arg1 + 0x78)
    x8_4 = *(arg1 + 0x80)
    *(arg1 + 0xa6)
    result = arg1 + 0x70
    x20_2 = (0xff & arg2.w) | ((0xffffff & arg3) << 8).w
    
    if (x9_2 u>= x8_4)
        x21_1 = *result
        x22_1 = x9_2 - x21_1
        void* result_1
        
        if (x22_1 s> -3)
        label_f16264:
            arg4 = x22_1 s>> 1
            void* x8_5 = x8_4 - x21_1
            void* x10_2
            
            if (x8_5 u< arg4 + 1)
                x10_2 = arg4 + 1
            else
                x10_2 = x8_5
            
            if (0x3fffffffffffffff u> x8_5 s>> 1)
                arg5 = x10_2
            else
                arg5 = 0x7fffffffffffffff
            
            if (arg5 == 0)
                goto label_f162d8
            
            if ((arg5 & 0xffffffff80000000) != 0)
                sub_ef2a0c()
                noreturn
            
            result = operator new(arg5 << 1)
            result_1 = result
            goto label_f162dc
        
    label_f162d4:
        result = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_f162d8:
        result_1 = nullptr
    label_f162dc:
        int16_t* x26_1 = result_1 + (arg4 << 1)
        *x26_1 = x20_2
        
        if (x22_1 s>= 1)
            result = memcpy(result_1, x21_1, x22_1)
        
        *(arg1 + 0x70) = result_1
        *(arg1 + 0x78) = &x26_1[1]
        *(arg1 + 0x80) = result_1 + (arg5 << 1)
        
        if (x21_1 != 0)
            return operator delete(x21_1) __tailcall
    else
        *x9_2 = x20_2
        *(arg1 + 0x78) = &x9_2[1]
else
    int64_t* x0 = *(arg1 + 0x18)
    char x0_1 = (*(*x0 + 0x28))(x0, zx.q(arg2))
    int64_t* x8_3 = *(arg1 + 0x18)
    result = (*(*x8_3 + 0x28))(x8_3, zx.q(arg3))
    x9_2 = *(arg1 + 0x78)
    x8_4 = *(arg1 + 0x80)
    x20_2 = zx.w(x0_1) | ((0xffffff & result.d) << 8).w
    
    if (x9_2 u>= x8_4)
        result = arg1 + 0x70
        x21_1 = *result
        x22_1 = x9_2 - x21_1
        
        if (x22_1 s<= -3)
            goto label_f162d4
        
        goto label_f16264
    
    *x9_2 = x20_2
    *(arg1 + 0x78) = &x9_2[1]
return result
