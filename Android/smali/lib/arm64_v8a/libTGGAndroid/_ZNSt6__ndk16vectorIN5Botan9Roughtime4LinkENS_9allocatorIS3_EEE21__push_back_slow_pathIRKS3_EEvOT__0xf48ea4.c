// 函数: _ZNSt6__ndk16vectorIN5Botan9Roughtime4LinkENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_
// 地址: 0xf48ea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Roughtime::Link const& x9 = *arg1
int64_t x20 = ((arg1[1] - x9) s>> 3) * -0x1111111111111111

if (x20 + 1 u> 0x222222222222222)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((arg1[2] - x9) s>> 3) * -0x1111111111111111
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x20 + 1)
        x10_3 = x20 + 1
    else
        x10_3 = x10_2
    
    int64_t x23_1
    
    x23_1 = x9_3 u< 0x111111111111111 ? x10_3 : 0x222222222222222
    
    int64_t x22
    
    if (x23_1 == 0)
        x22 = 0
    label_f48f3c:
        Botan::Roughtime::Link* x20_1 = x22 + x20 * 0x78
        void* result
        int128_t v0
        int128_t v1
        int128_t v2
        int128_t v3
        result, v0, v1, v2, v3 = Botan::Roughtime::Link::Link(x20_1)
        Botan::Roughtime::Link const& __saved_x1 = *arg1
        void* x11_2 = arg1[1]
        int64_t x8 = x22 + x23_1 * 0x78
        
        if (x11_2 == __saved_x1)
            *arg1 = x20_1
            arg1[1] = x20_1 + 0x78
            arg1[2] = x8
        else
            int64_t i = 0
            
            do
                void* x15_1 = x20_1 + i
                void* x16_1 = x11_2 + i
                __builtin_memset(x15_1 - 0x78, 0, 0x18)
                i -= 0x78
                *(x15_1 - 0x78) = *(x16_1 - 0x78)
                *(x15_1 - 0x70) = *(x16_1 - 0x70)
                *(x15_1 - 0x68) = *(x16_1 - 0x68)
                __builtin_memset(x16_1 - 0x78, 0, 0x18)
                *(x15_1 - 0x60) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
                __builtin_memset(x15_1 - 0x58, 0, 0x18)
                *(x15_1 - 0x58) = *(x16_1 - 0x58)
                *(x15_1 - 0x50) = *(x16_1 - 0x50)
                *(x15_1 - 0x48) = *(x16_1 - 0x48)
                v0 = *(x16_1 - 0x20)
                v1 = *(x16_1 - 0x10)
                v2 = *(x16_1 - 0x40)
                v3 = *(x16_1 - 0x30)
                __builtin_memset(x16_1 - 0x58, 0, 0x18)
                *(x15_1 - 0x20) = v0
                *(x15_1 - 0x10) = v1
                *(x15_1 - 0x40) = v2
                *(x15_1 - 0x30) = v3
            while (__saved_x1 - x11_2 != i)
            
            __saved_x1 = *arg1
            void* x22_1 = arg1[1]
            *arg1 = x20_1 + i
            arg1[1] = x20_1 + 0x78
            arg1[2] = x8
            
            if (x22_1 != __saved_x1)
                bool cond:1_1
                
                do
                    void* x0_3 = *(x22_1 - 0x58)
                    *(x22_1 - 0x60) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
                    
                    if (x0_3 != 0)
                        *(x22_1 - 0x50) = x0_3
                        operator delete(x0_3)
                    
                    result = *(x22_1 - 0x78)
                    
                    if (result != 0)
                        *(x22_1 - 0x70) = result
                        result = operator delete(result)
                    
                    cond:1_1 = __saved_x1 == x22_1 - 0x78
                    x22_1 -= 0x78
                while (not(cond:1_1))
        
        if (__saved_x1 == 0)
            return result
        
        return operator delete(__saved_x1) __tailcall
    
    if (x23_1 u<= 0x222222222222222)
        x22 = operator new(x23_1 * 0x78)
        goto label_f48f3c

sub_ef2a0c()
noreturn
