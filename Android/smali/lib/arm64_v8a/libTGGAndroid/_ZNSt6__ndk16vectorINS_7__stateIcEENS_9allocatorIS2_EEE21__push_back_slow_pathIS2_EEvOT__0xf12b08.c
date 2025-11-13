// 函数: _ZNSt6__ndk16vectorINS_7__stateIcEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_
// 地址: 0xf12b08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x22 = ((*(arg1 + 8) - x9) s>> 5) * -0x5555555555555555

if (x22 + 1 u> 0x2aaaaaaaaaaaaaa)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(arg1 + 0x10) - x9) s>> 5) * -0x5555555555555555
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x22 + 1)
        x10_3 = x22 + 1
    else
        x10_3 = x10_2
    
    int64_t x21_1
    
    x21_1 = x9_3 u< 0x155555555555555 ? x10_3 : 0x2aaaaaaaaaaaaaa
    
    void* result
    int128_t v0
    int128_t v1
    
    if (x21_1 == 0)
        result = nullptr
    label_f12b94:
        int128_t* entry_x1
        v0 = *entry_x1
        v1 = entry_x1[1]
        int128_t* x8_2 = result + x22 * 0x60
        *(x8_2 + 0x28) = 0
        x8_2[3].q = 0
        *x8_2 = v0
        x8_2[1] = v1
        int64_t x9_4 = result + x21_1 * 0x60
        x8_2[2] = entry_x1[2]
        x8_2[3].q = entry_x1[3].q
        __builtin_memset(&entry_x1[2], 0, 0x30)
        x8_2[4].q = 0
        *(x8_2 + 0x48) = 0
        *(x8_2 + 0x38) = *(entry_x1 + 0x38)
        int64_t x12_2 = *(entry_x1 + 0x48)
        int64_t x10_5 = entry_x1[5].q
        *(x8_2 + 0x55) = *(entry_x1 + 0x55)
        *(x8_2 + 0x48) = x12_2
        x8_2[5].q = x10_5
        void* x20_2 = *arg1
        void* x11_3 = *(arg1 + 8)
        
        if (x11_3 == x20_2)
            *arg1 = x8_2
            *(arg1 + 8) = &x8_2[6]
            *(arg1 + 0x10) = x9_4
            
            if (x20_2 == 0)
                return result
        else
            int64_t i = 0
            
            do
                void* x15_1 = x11_3 + i
                v0 = *(x15_1 - 0x60)
                v1 = *(x15_1 - 0x50)
                void* x14_1 = x8_2 + i
                __builtin_memset(x14_1 - 0x40, 0, 0x18)
                *(x14_1 - 0x60) = v0
                *(x14_1 - 0x50) = v1
                i -= 0x60
                *(x14_1 - 0x40) = *(x15_1 - 0x40)
                *(x14_1 - 0x38) = *(x15_1 - 0x38)
                *(x14_1 - 0x30) = *(x15_1 - 0x30)
                __builtin_memset(x15_1 - 0x40, 0, 0x30)
                __builtin_memset(x14_1 - 0x28, 0, 0x18)
                *(x14_1 - 0x28) = *(x15_1 - 0x28)
                *(x14_1 - 0x20) = *(x15_1 - 0x20)
                *(x14_1 - 0x18) = *(x15_1 - 0x18)
                int64_t x15_2 = *(x15_1 - 0x10)
                *(x14_1 - 0xb) = *(x15_1 - 0xb)
                *(x14_1 - 0x10) = x15_2
            while (x20_2 - x11_3 != i)
            
            x20_2 = *arg1
            void* x21_2 = *(arg1 + 8)
            *arg1 = x8_2 + i
            *(arg1 + 8) = &x8_2[6]
            *(arg1 + 0x10) = x9_4
            
            if (x21_2 != x20_2)
                bool cond:1_1
                
                do
                    void* x0_3 = *(x21_2 - 0x28)
                    
                    if (x0_3 != 0)
                        *(x21_2 - 0x20) = x0_3
                        operator delete(x0_3)
                    
                    result = *(x21_2 - 0x40)
                    
                    if (result != 0)
                        *(x21_2 - 0x38) = result
                        result = operator delete(result)
                    
                    cond:1_1 = x20_2 == x21_2 - 0x60
                    x21_2 -= 0x60
                while (not(cond:1_1))
            
            if (x20_2 == 0)
                return result
        
        return operator delete(x20_2) __tailcall
    
    if (x21_1 u<= 0x2aaaaaaaaaaaaaa)
        result, v0, v1 = operator new(x21_1 * 0x60)
        goto label_f12b94

sub_ef2a0c()
noreturn
