// 函数: _ZNSt6__ndk16vectorINS_10shared_ptrINS_6threadEEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_
// 地址: 0xf446e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t x21 = (*(arg1 + 8) - x8) s>> 4

if ((x21 + 1) u>> 0x3c != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x8_1 = *(arg1 + 0x10) - x8
    int64_t x10_2 = x8_1 s>> 3
    int64_t x9_3
    
    if (x10_2 u< x21 + 1)
        x9_3 = x21 + 1
    else
        x9_3 = x10_2
    
    int64_t x22_1
    
    if (0x7ffffffffffffff u> x8_1 s>> 4)
        x22_1 = x9_3
    else
        x22_1 = 0xfffffffffffffff
    
    int64_t result
    
    if (x22_1 == 0)
        result = 0
    label_f4474c:
        int64_t* entry_x1
        int64_t x9_4 = entry_x1[1]
        int64_t* x8_3 = result + (x21 << 4)
        *x8_3 = *entry_x1
        x8_3[1] = x9_4
        *entry_x1 = 0
        entry_x1[1] = 0
        void* x20_2 = *arg1
        void* x11 = *(arg1 + 8)
        int64_t x9_5 = result + (x22_1 << 4)
        
        if (x11 == x20_2)
            *arg1 = x8_3
            *(arg1 + 8) = &x8_3[2]
            *(arg1 + 0x10) = x9_5
            
            if (x20_2 == 0)
                return result
        else
            int64_t i = 0
            
            do
                void* x14_1 = x11 + i
                void* x16_1 = x8_3 + i
                i -= 0x10
                *(x16_1 - 0x10) = *(x14_1 - 0x10)
                *(x16_1 - 8) = *(x14_1 - 8)
                *(x14_1 - 0x10) = 0
                *(x14_1 - 8) = 0
            while (x20_2 - x11 != i)
            
            x20_2 = *arg1
            void* x21_1 = *(arg1 + 8)
            *arg1 = x8_3 + i
            *(arg1 + 8) = &x8_3[2]
            *(arg1 + 0x10) = x9_5
            
            if (x21_1 != x20_2)
                do
                    int64_t* x19_1 = *(x21_1 - 8)
                    x21_1 -= 0x10
                    
                    if (x19_1 != 0)
                        int64_t x9_7
                        int32_t i_1
                        
                        do
                            x9_7 = __ldaxr(&x19_1[1])
                            i_1 = __stlxr(x9_7 - 1, &x19_1[1])
                        while (i_1 != 0)
                        
                        if (x9_7 == 0)
                            (*(*x19_1 + 0x10))(x19_1)
                            result = std::__ndk1::__shared_weak_count::__release_weak()
                while (x21_1 != x20_2)
            
            if (x20_2 == 0)
                return result
        
        return operator delete(x20_2) __tailcall
    
    if (x22_1 u>> 0x3c == 0)
        result = operator new(x22_1 << 4)
        goto label_f4474c

sub_ef2a0c()
noreturn
