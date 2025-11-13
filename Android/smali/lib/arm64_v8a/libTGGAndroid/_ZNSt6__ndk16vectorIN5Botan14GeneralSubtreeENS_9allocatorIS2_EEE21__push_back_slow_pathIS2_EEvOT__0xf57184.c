// 函数: _ZNSt6__ndk16vectorIN5Botan14GeneralSubtreeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_
// 地址: 0xf57184
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x22 = ((*(arg1 + 8) - x9) s>> 4) * -0x3333333333333333

if (x22 + 1 u> 0x333333333333333)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(arg1 + 0x10) - x9) s>> 4) * -0x3333333333333333
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x22 + 1)
        x10_3 = x22 + 1
    else
        x10_3 = x10_2
    
    int64_t x21_1
    
    x21_1 = x9_3 u< 0x199999999999999 ? x10_3 : 0x333333333333333
    
    int64_t result
    int128_t v0
    
    if (x21_1 == 0)
        result = 0
    label_f57224:
        void** x10_4 = result + x22 * 0x50
        *x10_4 = _vtable_for_Botan::GeneralSubtree + 0x10
        x10_4[1] = _vtable_for_Botan::GeneralName + 0x10
        void* entry_x1
        v0 = *(entry_x1 + 0x10)
        int64_t x13 = result + x21_1 * 0x50
        x10_4[4] = *(entry_x1 + 0x20)
        *(x10_4 + 0x10) = v0
        int64_t x14_1 = *(entry_x1 + 0x38)
        v0 = *(entry_x1 + 0x28)
        __builtin_memset(entry_x1 + 0x10, 0, 0x30)
        x10_4[7] = x14_1
        *(x10_4 + 0x28) = v0
        void* x14_2 = &x10_4[0xa]
        *(x10_4 + 0x40) = *(entry_x1 + 0x40)
        void* x20_2 = *arg1
        void* x15 = *(arg1 + 8)
        
        if (x15 == x20_2)
            *arg1 = x10_4
            *(arg1 + 8) = x14_2
            *(arg1 + 0x10) = x13
        else
            do
                x10_4 = &x10_4[-0xa]
                *x10_4 = _vtable_for_Botan::GeneralSubtree + 0x10
                x10_4[1] = _vtable_for_Botan::GeneralName + 0x10
                v0 = *(x15 - 0x40)
                x10_4[4] = *(x15 - 0x30)
                *(x10_4 + 0x10) = v0
                int64_t x16_2 = *(x15 - 0x18)
                v0 = *(x15 - 0x28)
                __builtin_memset(x15 - 0x40, 0, 0x30)
                x10_4[7] = x16_2
                *(x10_4 + 0x28) = v0
                v0 = *(x15 - 0x10)
                x15 -= 0x50
                *(x10_4 + 0x40) = v0
            while (x20_2 != x15)
            
            x20_2 = *arg1
            void** x21_2 = *(arg1 + 8)
            *arg1 = x10_4
            *(arg1 + 8) = x14_2
            *(arg1 + 0x10) = x13
            
            if (x21_2 != x20_2)
                void** x23_1 = x21_2
                
                do
                    x23_1 = &x23_1[-0xa]
                    *x23_1 = _vtable_for_Botan::GeneralSubtree + 0x10
                    uint32_t x8_2 = zx.d(x23_1[5].b)
                    x23_1[1] = _vtable_for_Botan::GeneralName + 0x10
                    
                    if ((x8_2 & 1) != 0)
                        result = operator delete(x21_2[-3])
                        
                        if ((zx.d(x21_2[-8].b) & 1) != 0)
                            result = operator delete(x21_2[-6])
                    else if ((zx.d(x21_2[-8].b) & 1) != 0)
                        result = operator delete(x21_2[-6])
                    
                    x21_2 = x23_1
                while (x20_2 != x23_1)
        
        if (x20_2 == 0)
            return result
        
        return operator delete(x20_2) __tailcall
    
    if (x21_1 u<= 0x333333333333333)
        result, v0 = operator new(x21_1 * 0x50)
        goto label_f57224

sub_ef2a0c()
noreturn
