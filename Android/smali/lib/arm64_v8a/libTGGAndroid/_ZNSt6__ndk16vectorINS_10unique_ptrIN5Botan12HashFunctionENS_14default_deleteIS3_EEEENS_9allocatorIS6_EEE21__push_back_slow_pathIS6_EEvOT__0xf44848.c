// 函数: _ZNSt6__ndk16vectorINS_10unique_ptrIN5Botan12HashFunctionENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_
// 地址: 0xf44848
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t x21 = (*(arg1 + 8) - x8) s>> 3

if ((x21 + 1) u>> 0x3d != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x8_1 = *(arg1 + 0x10) - x8
    int64_t x10_2 = x8_1 s>> 2
    int64_t x9_3
    
    if (x10_2 u< x21 + 1)
        x9_3 = x21 + 1
    else
        x9_3 = x10_2
    
    int64_t x22_1
    
    if (0xfffffffffffffff u> x8_1 s>> 3)
        x22_1 = x9_3
    else
        x22_1 = 0x1fffffffffffffff
    
    int64_t* result
    
    if (x22_1 == 0)
        result = nullptr
    label_f448b4:
        int64_t* entry_x1
        int64_t x10_3 = *entry_x1
        int64_t* x8_3 = &result[x21]
        *entry_x1 = 0
        *x8_3 = x10_3
        void* x9_5 = &x8_3[1]
        void* x20_2 = *arg1
        int64_t* x11 = *(arg1 + 8)
        void* x10_4 = &result[x22_1]
        
        if (x11 == x20_2)
            *arg1 = x8_3
            *(arg1 + 8) = x9_5
            *(arg1 + 0x10) = x10_4
            
            if (x20_2 == 0)
                return result
        else
            do
                x11 = &x11[-1]
                int64_t x12_1 = *x11
                *x11 = 0
                x8_3 = &x8_3[-1]
                *x8_3 = x12_1
            while (x20_2 != x11)
            
            x20_2 = *arg1
            int64_t* x21_1 = *(arg1 + 8)
            *arg1 = x8_3
            *(arg1 + 8) = x9_5
            *(arg1 + 0x10) = x10_4
            
            if (x21_1 != x20_2)
                do
                    x21_1 = &x21_1[-1]
                    result = *x21_1
                    *x21_1 = 0
                    
                    if (result != 0)
                        result = (*(*result + 0x10))()
                while (x20_2 != x21_1)
            
            if (x20_2 == 0)
                return result
        
        return operator delete(x20_2) __tailcall
    
    if (x22_1 u>> 0x3d == 0)
        result = operator new(x22_1 << 3)
        goto label_f448b4

sub_ef2a0c()
noreturn
