// 函数: _ZNSt6__ndk16vectorINS_10shared_ptrIN5Botan13EC_Group_DataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_
// 地址: 0xefc220
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::shared_ptr<Botan::EC_Group_Data> const& x22 = *arg1
std::__ndk1::shared_ptr<Botan::EC_Group_Data> const& x19 = arg1[1]
int64_t x24 = (x19 - x22) s>> 4

if ((x24 + 1) u>> 0x3c != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    void* x9_2 = arg1[2] - x22
    int64_t x11_1 = x9_2 s>> 3
    int64_t x8_2
    
    if (x11_1 u< x24 + 1)
        x8_2 = x24 + 1
    else
        x8_2 = x11_1
    
    int64_t x23_1
    
    if (0x7ffffffffffffff u> x9_2 s>> 4)
        x23_1 = x8_2
    else
        x23_1 = 0xfffffffffffffff
    
    int64_t result
    
    if (x23_1 == 0)
        result = 0
    label_efc290:
        int64_t* entry_x1
        int64_t x9_3 = entry_x1[1]
        int64_t* x8_4 = result + (x24 << 4)
        *x8_4 = *entry_x1
        x8_4[1] = x9_3
        
        if (x9_3 != 0)
            int32_t i
            
            do
                i = __stxr(__ldxr(x9_3 + 8) + 1, x9_3 + 8)
            while (i != 0)
            x22 = *arg1
            x19 = arg1[1]
        
        int64_t x9_5 = result + (x23_1 << 4)
        
        if (x19 == x22)
            *arg1 = x8_4
            arg1[1] = &x8_4[2]
            arg1[2] = x9_5
            
            if (x19 == 0)
                return result
        else
            int64_t i_1 = 0
            
            do
                void* x13_1 = x19 + i_1
                void* x15_1 = x8_4 + i_1
                i_1 -= 0x10
                *(x15_1 - 0x10) = *(x13_1 - 0x10)
                *(x15_1 - 8) = *(x13_1 - 8)
                *(x13_1 - 0x10) = 0
                *(x13_1 - 8) = 0
            while (x22 - x19 != i_1)
            
            x19 = *arg1
            void* x21_2 = arg1[1]
            *arg1 = x8_4 + i_1
            arg1[1] = &x8_4[2]
            arg1[2] = x9_5
            
            if (x21_2 != x19)
                do
                    int64_t* x20_1 = *(x21_2 - 8)
                    x21_2 -= 0x10
                    
                    if (x20_1 != 0)
                        int64_t x9_7
                        int32_t i_2
                        
                        do
                            x9_7 = __ldaxr(&x20_1[1])
                            i_2 = __stlxr(x9_7 - 1, &x20_1[1])
                        while (i_2 != 0)
                        
                        if (x9_7 == 0)
                            (*(*x20_1 + 0x10))(x20_1)
                            result = std::__ndk1::__shared_weak_count::__release_weak()
                while (x21_2 != x19)
            
            if (x19 == 0)
                return result
        
        return operator delete(x19) __tailcall
    
    if (x23_1 u>> 0x3c == 0)
        result = operator new(x23_1 << 4)
        goto label_efc290

sub_ef2a0c()
noreturn
