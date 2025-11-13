// 函数: sub_cb08dc
// 地址: 0xcb08dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x30)
uint64_t x8 = zx.q(*arg2)
int64_t* x19 = arg1
int32_t temp0 = x8.d & 1
uint64_t x24

if (temp0 == 0)
    x24 = x8 u>> 1
else
    x24 = *(arg2 + 8)

void* x25

if (temp0 != 0)
    x25 = *(arg2 + 0x10)
else
    x25 = &arg2[1]

int64_t var_78
void* var_68

if (x24 != 0)
    while (true)
        void* var_88_1
        void* var_80_1
        uint64_t var_70_1
        
        if (zx.d(*x25) != 0x2e)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                &var_78)
        else
            uint64_t x8_1 = zx.q(var_78.b)
            uint64_t x8_2
            
            if ((x8_1.d & 1) == 0)
                x8_2 = x8_1 u>> 1
            else
                x8_2 = var_70_1
            
            if (x8_2 == 0)
                break
            
            int32_t x0_2 = Botan::to_u32bit(&var_78)
            int32_t* x9_2 = var_88_1
            
            if (x9_2 u>= var_80_1)
                void* result_4 = result_1
                void* x22_1 = x9_2 - result_4
                int64_t fp_1 = x22_1 s>> 2
                
                if ((fp_1 + 1) u>> 0x3e != 0)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    sub_ef2a0c()
                    noreturn
                
                void* x8_4 = var_80_1 - result_4
                int64_t x10_3 = x8_4 s>> 1
                int64_t x9_5
                
                if (x10_3 u< fp_1 + 1)
                    x9_5 = fp_1 + 1
                else
                    x9_5 = x10_3
                
                int64_t x28_1
                
                if (0x1fffffffffffffff u> x8_4 s>> 2)
                    x28_1 = x9_5
                else
                    x28_1 = 0x3fffffffffffffff
                
                void* result_6
                void* fp_3
                
                if (x28_1 == 0)
                    result_6 = nullptr
                    *(fp_1 << 2) = x0_2
                    fp_3 = (fp_1 << 2) + 4
                    
                    if (x22_1 s>= 1)
                        memcpy(result_6, result_4, x22_1)
                else
                    if (x28_1 u>> 0x3e != 0)
                        sub_ef2a0c()
                        noreturn
                    
                    result_6 = operator new(x28_1 << 2)
                    int32_t* fp_2 = result_6 + (fp_1 << 2)
                    *fp_2 = x0_2
                    fp_3 = &fp_2[1]
                    
                    if (x22_1 s>= 1)
                        memcpy(result_6, result_4, x22_1)
                
                result_1 = result_6
                var_88_1 = fp_3
                var_80_1 = result_6 + (x28_1 << 2)
                
                if (result_4 != 0)
                    operator delete(result_4)
            else
                *x9_2 = x0_2
                var_88_1 = &x9_2[1]
            
            if ((zx.d(var_78.b) & 1) != 0)
                *var_68 = 0
                var_70_1 = 0
            else
                var_78.w = 0
        
        uint64_t temp1_1 = x24
        x24 -= 1
        x25 += 1
        
        if (temp1_1 == 1)
            uint32_t x9_6 = zx.d(var_78.b)
            uint64_t x8_10
            
            if ((x9_6 & 1) == 0)
                x8_10 = zx.q(x9_6 u>> 1)
            else
                x8_10 = var_70_1
            
            if (x8_10 != 0)
                int32_t x0_8 = Botan::to_u32bit(&var_78)
                void* x24_2
                
                if (var_88_1 u>= var_80_1)
                    void* result_5 = result_1
                    void* x22_2 = var_88_1 - result_5
                    int64_t x24_3 = x22_2 s>> 2
                    
                    if ((x24_3 + 1) u>> 0x3e != 0)
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        sub_ef2a0c()
                        noreturn
                    
                    void* x8_12 = var_80_1 - result_5
                    int64_t x11_1 = x8_12 s>> 1
                    int64_t x9_8
                    
                    if (x11_1 u< x24_3 + 1)
                        x9_8 = x24_3 + 1
                    else
                        x9_8 = x11_1
                    
                    int64_t x25_1
                    
                    if (0x1fffffffffffffff u> x8_12 s>> 2)
                        x25_1 = x9_8
                    else
                        x25_1 = 0x3fffffffffffffff
                    
                    void* result_7
                    
                    if (x25_1 == 0)
                        result_7 = nullptr
                    else
                        if (x25_1 u>> 0x3e != 0)
                            sub_ef2a0c()
                            noreturn
                        
                        result_7 = operator new(x25_1 << 2)
                    
                    int32_t* x24_4 = result_7 + (x24_3 << 2)
                    *x24_4 = x0_8
                    x24_2 = &x24_4[1]
                    
                    if (x22_2 s>= 1)
                        memcpy(result_7, result_5, x22_2)
                    
                    result_1 = result_7
                    var_80_1 = result_7 + (x25_1 << 2)
                    
                    if (result_5 != 0)
                        operator delete(result_5)
                else
                    *var_88_1 = x0_8
                    x24_2 = var_88_1 + 4
                
                void* result_3 = result_1
                
                if ((x24_2 - result_3) s>> 2 u> 1)
                    *x19 = result_3
                    x19[1] = x24_2
                    x19[2] = var_80_1
                    x19 = &result_1
            
            break

__builtin_memset(x19, 0, 0x18)
void* result = result_1

if (result != 0)
    void* result_2 = result
    result = operator delete(result)

if ((zx.d(var_78.b) & 1) == 0)
    return result

return operator delete(var_68)
