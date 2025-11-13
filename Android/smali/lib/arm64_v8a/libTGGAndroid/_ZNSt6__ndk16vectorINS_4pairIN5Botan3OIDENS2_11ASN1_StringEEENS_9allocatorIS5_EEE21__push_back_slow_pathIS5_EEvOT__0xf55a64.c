// 函数: _ZNSt6__ndk16vectorINS_4pairIN5Botan3OIDENS2_11ASN1_StringEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_
// 地址: 0xf55a64
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
    
    if (x21_1 == 0)
        result = nullptr
    label_f55afc:
        void** x9_4 = result + x22 * 0x60
        x9_4[2] = 0
        x9_4[3] = 0
        *x9_4 = _vtable_for_Botan::OID + 0x10
        int64_t x13 = result + x21_1 * 0x60
        void* entry_x1
        *(x9_4 + 8) = *(entry_x1 + 8)
        x9_4[3] = *(entry_x1 + 0x18)
        x9_4[4] = _vtable_for_Botan::ASN1_String + 0x10
        __builtin_memset(entry_x1 + 8, 0, 0x18)
        x9_4[6] = 0
        x9_4[7] = 0
        *(x9_4 + 0x28) = *(entry_x1 + 0x28)
        x9_4[7] = *(entry_x1 + 0x38)
        v0 = *(entry_x1 + 0x40)
        int64_t x14_2 = *(entry_x1 + 0x50)
        __builtin_memset(entry_x1 + 0x28, 0, 0x30)
        *(x9_4 + 0x40) = v0
        x9_4[0xa] = x14_2
        x9_4[0xb].d = *(entry_x1 + 0x58)
        void* x20_2 = *arg1
        void* x15 = *(arg1 + 8)
        
        if (x15 == x20_2)
            *arg1 = x9_4
            *(arg1 + 8) = &x9_4[0xc]
            *(arg1 + 0x10) = x13
        else
            int64_t i = 0
            
            do
                result = x9_4 + i
                void* x1 = x15 + i
                *(result - 0x60) = _vtable_for_Botan::OID + 0x10
                __builtin_memset(result - 0x58, 0, 0x18)
                i -= 0x60
                *(result - 0x58) = *(x1 - 0x58)
                *(result - 0x50) = *(x1 - 0x50)
                *(result - 0x48) = *(x1 - 0x48)
                __builtin_memset(x1 - 0x58, 0, 0x18)
                *(result - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                __builtin_memset(result - 0x38, 0, 0x18)
                *(result - 0x38) = *(x1 - 0x38)
                *(result - 0x30) = *(x1 - 0x30)
                *(result - 0x28) = *(x1 - 0x28)
                v0 = *(x1 - 0x20)
                int64_t x2_7 = *(x1 - 0x10)
                __builtin_memset(x1 - 0x38, 0, 0x30)
                *(result - 0x20) = v0
                *(result - 0x10) = x2_7
                *(result - 8) = *(x1 - 8)
            while (x20_2 - x15 != i)
            
            x20_2 = *arg1
            void* x21_2 = *(arg1 + 8)
            *arg1 = x9_4 + i
            *(arg1 + 8) = &x9_4[0xc]
            *(arg1 + 0x10) = x13
            
            if (x21_2 != x20_2)
                bool cond:1_1
                
                do
                    uint32_t x8_2 = zx.d(*(x21_2 - 0x20))
                    *(x21_2 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
                    
                    if ((x8_2 & 1) != 0)
                        operator delete(*(x21_2 - 0x10))
                    
                    void* x0_2 = *(x21_2 - 0x38)
                    
                    if (x0_2 != 0)
                        *(x21_2 - 0x30) = x0_2
                        operator delete(x0_2)
                    
                    result = *(x21_2 - 0x58)
                    *(x21_2 - 0x60) = _vtable_for_Botan::OID + 0x10
                    
                    if (result != 0)
                        *(x21_2 - 0x50) = result
                        result = operator delete(result)
                    
                    cond:1_1 = x20_2 == x21_2 - 0x60
                    x21_2 -= 0x60
                while (not(cond:1_1))
        
        if (x20_2 == 0)
            return result
        
        return operator delete(x20_2) __tailcall
    
    if (x21_1 u<= 0x2aaaaaaaaaaaaaa)
        result, v0 = operator new(x21_1 * 0x60)
        goto label_f55afc

sub_ef2a0c()
noreturn
