// 函数: _ZNSt6__ndk16vectorIN5Botan9Roughtime4LinkENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_
// 地址: 0xf48c80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x22 = ((*(arg1 + 8) - x9) s>> 3) * -0x1111111111111111

if (x22 + 1 u> 0x222222222222222)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(arg1 + 0x10) - x9) s>> 3) * -0x1111111111111111
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x22 + 1)
        x10_3 = x22 + 1
    else
        x10_3 = x10_2
    
    int64_t x21_1
    
    x21_1 = x9_3 u< 0x111111111111111 ? x10_3 : 0x222222222222222
    
    void* result
    int128_t v0
    int128_t v1
    int128_t v2
    int128_t v3
    
    if (x21_1 == 0)
        result = nullptr
    label_f48d10:
        int128_t* x8 = result + x22 * 0x78
        *(x8 + 8) = 0
        x8[1].q = 0
        int64_t x11_2 = result + x21_1 * 0x78
        int128_t* entry_x1
        *x8 = *entry_x1
        x8[1].q = entry_x1[1].q
        *(x8 + 0x18) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
        __builtin_memset(entry_x1, 0, 0x18)
        *(x8 + 0x28) = 0
        x8[3].q = 0
        x8[2] = entry_x1[2]
        x8[3].q = entry_x1[3].q
        v0 = *(entry_x1 + 0x68)
        v1 = *(entry_x1 + 0x58)
        v2 = *(entry_x1 + 0x48)
        v3 = *(entry_x1 + 0x38)
        __builtin_memset(&entry_x1[2], 0, 0x18)
        *(x8 + 0x68) = v0
        *(x8 + 0x58) = v1
        *(x8 + 0x48) = v2
        *(x8 + 0x38) = v3
        void* x20_2 = *arg1
        void* x13 = *(arg1 + 8)
        
        if (x13 == x20_2)
            *arg1 = x8
            *(arg1 + 8) = x8 + 0x78
            *(arg1 + 0x10) = x11_2
        else
            int64_t i = 0
            
            do
                void* x16_1 = x8 + i
                void* x17_1 = x13 + i
                __builtin_memset(x16_1 - 0x78, 0, 0x18)
                i -= 0x78
                *(x16_1 - 0x78) = *(x17_1 - 0x78)
                *(x16_1 - 0x70) = *(x17_1 - 0x70)
                *(x16_1 - 0x68) = *(x17_1 - 0x68)
                __builtin_memset(x17_1 - 0x78, 0, 0x18)
                *(x16_1 - 0x60) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
                __builtin_memset(x16_1 - 0x58, 0, 0x18)
                *(x16_1 - 0x58) = *(x17_1 - 0x58)
                *(x16_1 - 0x50) = *(x17_1 - 0x50)
                result = *(x17_1 - 0x48)
                *(x16_1 - 0x48) = result
                v0 = *(x17_1 - 0x20)
                v1 = *(x17_1 - 0x10)
                v2 = *(x17_1 - 0x40)
                v3 = *(x17_1 - 0x30)
                __builtin_memset(x17_1 - 0x58, 0, 0x18)
                *(x16_1 - 0x20) = v0
                *(x16_1 - 0x10) = v1
                *(x16_1 - 0x40) = v2
                *(x16_1 - 0x30) = v3
            while (x20_2 - x13 != i)
            
            x20_2 = *arg1
            void* x21_2 = *(arg1 + 8)
            *arg1 = x8 + i
            *(arg1 + 8) = x8 + 0x78
            *(arg1 + 0x10) = x11_2
            
            if (x21_2 != x20_2)
                bool cond:1_1
                
                do
                    void* x0_6 = *(x21_2 - 0x58)
                    *(x21_2 - 0x60) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
                    
                    if (x0_6 != 0)
                        *(x21_2 - 0x50) = x0_6
                        operator delete(x0_6)
                    
                    result = *(x21_2 - 0x78)
                    
                    if (result != 0)
                        *(x21_2 - 0x70) = result
                        result = operator delete(result)
                    
                    cond:1_1 = x20_2 == x21_2 - 0x78
                    x21_2 -= 0x78
                while (not(cond:1_1))
        
        if (x20_2 == 0)
            return result
        
        return operator delete(x20_2) __tailcall
    
    if (x21_1 u<= 0x222222222222222)
        result, v0, v1, v2, v3 = operator new(x21_1 * 0x78)
        goto label_f48d10

sub_ef2a0c()
noreturn
