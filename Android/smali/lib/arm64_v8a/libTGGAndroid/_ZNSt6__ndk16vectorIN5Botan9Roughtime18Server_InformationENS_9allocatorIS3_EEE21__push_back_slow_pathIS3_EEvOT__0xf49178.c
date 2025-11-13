// 函数: _ZNSt6__ndk16vectorIN5Botan9Roughtime18Server_InformationENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_
// 地址: 0xf49178
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
    
    void* result
    int128_t v0
    
    if (x21_1 == 0)
        result = nullptr
    label_f4920c:
        int128_t* entry_x1
        int64_t x12_2 = entry_x1[1].q
        int128_t* x9_4 = result + x22 * 0x50
        *x9_4 = *entry_x1
        x9_4[1].q = x12_2
        *(x9_4 + 0x18) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
        __builtin_memset(entry_x1, 0, 0x18)
        *(x9_4 + 0x28) = 0
        x9_4[3].q = 0
        int64_t x11_2 = result + x21_1 * 0x50
        x9_4[2] = entry_x1[2]
        x9_4[3].q = entry_x1[3].q
        __builtin_memset(&entry_x1[2], 0, 0x30)
        x9_4[4].q = 0
        *(x9_4 + 0x48) = 0
        *(x9_4 + 0x38) = *(entry_x1 + 0x38)
        *(x9_4 + 0x48) = *(entry_x1 + 0x48)
        void* x20_2 = *arg1
        void* x13 = *(arg1 + 8)
        
        if (x13 == x20_2)
            *arg1 = x9_4
            *(arg1 + 8) = &x9_4[5]
            *(arg1 + 0x10) = x11_2
        else
            int64_t i = 0
            
            do
                void* x16_1 = x13 + i
                v0 = *(x16_1 - 0x50)
                result = x9_4 + i
                i -= 0x50
                *(result - 0x40) = *(x16_1 - 0x40)
                *(result - 0x50) = v0
                __builtin_memset(x16_1 - 0x50, 0, 0x18)
                *(result - 0x38) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
                __builtin_memset(result - 0x30, 0, 0x18)
                *(result - 0x30) = *(x16_1 - 0x30)
                *(result - 0x28) = *(x16_1 - 0x28)
                *(result - 0x20) = *(x16_1 - 0x20)
                __builtin_memset(x16_1 - 0x30, 0, 0x30)
                __builtin_memset(result - 0x18, 0, 0x18)
                *(result - 0x18) = *(x16_1 - 0x18)
                *(result - 0x10) = *(x16_1 - 0x10)
                *(result - 8) = *(x16_1 - 8)
            while (x20_2 - x13 != i)
            
            x20_2 = *arg1
            void* x21_2 = *(arg1 + 8)
            *arg1 = x9_4 + i
            *(arg1 + 8) = &x9_4[5]
            *(arg1 + 0x10) = x11_2
            
            if (x21_2 != x20_2)
                bool cond:1_1
                
                do
                    void* x22_1 = *(x21_2 - 0x18)
                    
                    if (x22_1 != 0)
                        char* x8_2 = *(x21_2 - 0x10)
                        void* x0_2
                        
                        if (x8_2 == x22_1)
                            x0_2 = x22_1
                        else
                            char* x23_1 = x8_2
                            
                            do
                                x23_1 = &x23_1[-0x18]
                                
                                if ((zx.d(*x23_1) & 1) != 0)
                                    operator delete(*(x8_2 - 8))
                                
                                x8_2 = x23_1
                            while (x22_1 != x23_1)
                            
                            x0_2 = *(x21_2 - 0x18)
                        
                        *(x21_2 - 0x10) = x22_1
                        operator delete(x0_2)
                    
                    result = *(x21_2 - 0x30)
                    *(x21_2 - 0x38) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
                    
                    if (result != 0)
                        *(x21_2 - 0x28) = result
                        result = operator delete(result)
                    
                    if ((zx.d(*(x21_2 - 0x50)) & 1) != 0)
                        result = operator delete(*(x21_2 - 0x40))
                    
                    cond:1_1 = x21_2 - 0x50 == x20_2
                    x21_2 -= 0x50
                while (not(cond:1_1))
        
        if (x20_2 == 0)
            return result
        
        return operator delete(x20_2) __tailcall
    
    if (x21_1 u<= 0x333333333333333)
        result, v0 = operator new(x21_1 * 0x50)
        goto label_f4920c

sub_ef2a0c()
noreturn
