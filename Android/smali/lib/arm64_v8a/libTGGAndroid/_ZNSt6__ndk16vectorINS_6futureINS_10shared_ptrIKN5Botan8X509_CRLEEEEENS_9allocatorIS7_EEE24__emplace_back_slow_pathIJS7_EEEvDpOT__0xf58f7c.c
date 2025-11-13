// 函数: _ZNSt6__ndk16vectorINS_6futureINS_10shared_ptrIKN5Botan8X509_CRLEEEEENS_9allocatorIS7_EEE24__emplace_back_slow_pathIJS7_EEEvDpOT_
// 地址: 0xf58f7c
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
    label_f58fec:
        int64_t* x9_4 = &result[x21]
        int64_t* entry_x1
        *x9_4 = *entry_x1
        void* x8_4 = &x9_4[1]
        *entry_x1 = 0
        void* x20_2 = *arg1
        int64_t* x11 = *(arg1 + 8)
        void* x10_4 = &result[x22_1]
        
        if (x11 == x20_2)
            *arg1 = x9_4
            *(arg1 + 8) = x8_4
            *(arg1 + 0x10) = x10_4
            
            if (x20_2 == 0)
                return result
        else
            do
                x11 = &x11[-1]
                x9_4 = &x9_4[-1]
                *x9_4 = *x11
                *x11 = 0
            while (x20_2 != x11)
            
            x20_2 = *arg1
            int64_t* x21_1 = *(arg1 + 8)
            *arg1 = x9_4
            *(arg1 + 8) = x8_4
            *(arg1 + 0x10) = x10_4
            
            if (x21_1 != x20_2)
                do
                    x21_1 = &x21_1[-1]
                    result = *x21_1
                    
                    if (result != 0)
                        int64_t x9_6
                        int32_t i
                        
                        do
                            x9_6 = __ldaxr(&result[1])
                            i = __stlxr(x9_6 - 1, &result[1])
                        while (i != 0)
                        
                        if (x9_6 == 0)
                            result = (*(*result + 0x10))()
                while (x21_1 != x20_2)
            
            if (x20_2 == 0)
                return result
        
        return operator delete(x20_2) __tailcall
    
    if (x22_1 u>> 0x3d == 0)
        result = operator new(x22_1 << 3)
        goto label_f58fec

sub_ef2a0c()
noreturn
