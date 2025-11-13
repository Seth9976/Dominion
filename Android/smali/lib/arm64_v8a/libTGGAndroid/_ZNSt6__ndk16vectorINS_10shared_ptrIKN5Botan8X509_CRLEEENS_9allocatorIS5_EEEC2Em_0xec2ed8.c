// 函数: _ZNSt6__ndk16vectorINS_10shared_ptrIKN5Botan8X509_CRLEEENS_9allocatorIS5_EEEC2Em
// 地址: 0xec2ed8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1, 0, 0x18)
int64_t entry_x1

if (entry_x1 == 0)
    return 

if (entry_x1 u>> 0x3c != 0)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x22 = *arg1
    
    if (x22 != 0)
        void* x23_1 = *(arg1 + 8)
        void* x0_4 = x22
        
        if (x23_1 != x22)
            do
                int64_t* x21_2 = *(x23_1 - 8)
                x23_1 -= 0x10
                
                if (x21_2 != 0)
                    int64_t x9_1
                    int32_t i
                    
                    do
                        x9_1 = __ldaxr(&x21_2[1])
                        i = __stlxr(x9_1 - 1, &x21_2[1])
                    while (i != 0)
                    
                    if (x9_1 == 0)
                        (*(*x21_2 + 0x10))(x21_2)
                        std::__ndk1::__shared_weak_count::__release_weak()
            while (x23_1 != x22)
            
            x0_4 = *arg1
        
        *(arg1 + 8) = x22
        operator delete(x0_4)
    
    sub_1101e04(x0_3)
    noreturn

int64_t x21_1 = entry_x1 << 4
int64_t x0_1 = operator new(x21_1)
*arg1 = x0_1
*(arg1 + 0x10) = x0_1 + (entry_x1 << 4)
memset(x0_1, 0, x21_1)
*(arg1 + 8) = x21_1 + x0_1
