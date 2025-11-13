// 函数: _ZN5Botan3TLS28TLS_CBC_HMAC_AEAD_Decryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xe86760
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg2
int64_t x9_1 = *(arg2 + 8) - x8
int64_t entry_x2

if (x9_1 u< entry_x2)
    Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9)
else
    int64_t x0 = (*(*arg1 + 0x38))(arg1, x8 + entry_x2, x9_1 - entry_x2)
    int64_t x8_1 = *arg2
    int64_t x9_4 = *(arg2 + 8)
    int64_t x10_1 = x0 + entry_x2
    int64_t x11_1 = x9_4 - x8_1
    
    if (x10_1 u> x11_1)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
        x8_1 = *arg2
        x9_4 = *(arg2 + 8)
    else if (x10_1 u< x11_1)
        x9_4 = x8_1 + x10_1
        *(arg2 + 8) = x9_4
    
    int64_t x9_5 = x9_4 - x8_1
    
    if (x9_5 u< entry_x2)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
    else if (x9_5 u> entry_x2)
        *(arg2 + 8) = x8_1 + entry_x2
    
    uint64_t x20_1 = *(arg1 + 0xa8)
    int64_t x9_6 = *(arg1 + 0x50)
    uint64_t x22_1 = *(arg1 + 0xb0) - x20_1
    int64_t x23_1 = x22_1 - x9_6
    
    if (x22_1 u< x9_6)
        goto label_e86ecc
    
    int128_t var_a0
    int128_t var_80
    int64_t x8_23
    int32_t x8_24
    uint128_t v0_6
    uint128_t v1_5
    int128_t v2_2
    int128_t v3_2
    int128_t v4_2
    int128_t v5_2
    int128_t v7_3
    int128_t v16_2
    
    if (zx.d(*(arg1 + 0x60)) == 0)
        if (x22_1 u% *(arg1 + 0x58) != 0)
            goto label_e86ecc
        
        v0_6, v1_5, v2_2, v3_2, v4_2, v5_2, v7_3, v16_2 =
            Botan::TLS::TLS_CBC_HMAC_AEAD_Decryption::cbc_decrypt_record(arg1, x20_1)
        x8_23 = x22_1 - 1
        
        if (x8_23 u<= 0xfffe)
            goto label_e86b6c
        
        x8_24 = 0
    label_e86cdc:
        int64_t* x24_2 = *(arg1 + 0x70)
        
        if (x24_2 == 0)
            goto label_e86ec4
        
        int32_t x9_16 = *(arg1 + 0x50)
        int16_t x10_5 = x8_24.w + x9_16.w
        int32_t x27_1 = sx.d((((x22_1.w - x10_5) ^ x22_1.w) | (x10_5 ^ x22_1.w)) ^ x22_1.w)
        int32_t x26_1 = x8_24 & not.d(x27_1 s>> 0xf)
        Botan::TLS::TLS_CBC_HMAC_AEAD_Mode::assoc_data_with_len(arg1.w)
        int64_t x1_11 = var_80.q
        (*(*x24_2 + 0x18))(x24_2, x1_11, var_80:8.q - x1_11)
        void* x0_16 = var_80.q
        
        if (x0_16 != 0)
            var_80:8.q = x0_16
            operator delete(x0_16)
        
        int64_t* x0_17 = *(arg1 + 0x70)
        
        if (x0_17 == 0)
            goto label_e86ec4
        
        (*(*x0_17 + 0x18))(x0_17, x20_1, zx.q((x22_1.d - x9_16 - x26_1).w))
        uint64_t x25_2 = *(arg1 + 0x50)
        __builtin_memset(&var_80, 0, 0x18)
        int64_t* x0_20
        int64_t x24_3
        
        if (x25_2 != 0)
            if ((x25_2 & 0xffffffff80000000) != 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
            label_e8718c:
                std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_39 =
                    *(arg1 + 0x70)
                
                if (x0_39 == 0)
                    x0_39 = Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
                        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)
                
                Botan::Buffered_Computation::final<std::__ndk1::allocator<uint8_t> >(x0_39)
                goto label_e870f8
            
            int64_t x0_19 = operator new(x25_2)
            int64_t x28_1 = x0_19 + x25_2
            x24_3 = x0_19
            var_80.q = x0_19
            int64_t var_70_2 = x28_1
            memset(x0_19, 0, x25_2)
            var_80:8.q = x28_1
            x0_20 = *(arg1 + 0x70)
            
            if (x0_20 == 0)
                goto label_e86e9c
            
            goto label_e86db8
        
        x24_3 = 0
        x0_20 = *(arg1 + 0x70)
        
        if (x0_20 == 0)
        label_e86e9c:
            Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)
        label_e86ec4:
            Botan::assertion_failure("m_mac is not null", &data_793a18, "mac", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)
        label_e86ecc:
            void** x0_22 = __cxa_allocate_exception(0x28)
            int64_t x0_23
            int128_t v0_11
            x0_23, v0_11 = operator new(0x20)
            int64_t var_70_3 = x0_23
            int128_t var_80_1 = data_71c370
            __builtin_strncpy(x0_23, "Message authentication failure", 0x1f)
            *x0_22 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_22[1])
            x0_22[4].d = 0x14
            *x0_22 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_22, _typeinfo_for_Botan::TLS::TLS_Exception, 
                Botan::Exception::~Exception)
            noreturn
        
    label_e86db8:
        (*(*x0_20 + 0x20))(x0_20, x24_3)
        int64_t i_3 = *(arg1 + 0x50)
        char* x10_10 = var_80.q
        var_a0.b = 0
        
        if (i_3 != 0)
            char* x11_18 = x20_1 + x22_1 - zx.q(x26_1) - i_3
            int64_t i
            
            do
                char x12_20 = *x11_18
                x11_18 = &x11_18[1]
                char x13_19 = *x10_10
                x10_10 = &x10_10[1]
                i = i_3
                i_3 -= 1
                var_a0.b = x13_19 ^ x12_20
            while (i != 1)
        
        if (((0xffffffff ^ x27_1 s>> 0xf) & not.d((x26_1 - 1) s>> 0xf) & 0xffffffff) == 0)
            goto label_e870e8
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<uint8_t const*>(
            arg2, *(arg2 + 8), x20_1)
    label_e86e3c:
        void* result = var_80.q
        
        if (result == 0)
            return result
        
        var_80:8.q = result
        return operator delete(result)
    
    if (x23_1 u% *(arg1 + 0x58) != 0)
        goto label_e86ecc
    
    if (*(arg1 + 0x48) + x23_1 u< 0x10000)
        x22_1 = *(arg1 + 0x70)
        
        if (x22_1 == 0)
            goto label_e86ec4
        
        Botan::TLS::TLS_CBC_HMAC_AEAD_Mode::assoc_data_with_len(arg1.w)
        int64_t x1_3 = var_80.q
        (*(*x22_1 + 0x18))(x22_1, x1_3, var_80:8.q - x1_3)
        void* x0_5 = var_80.q
        
        if (x0_5 != 0)
            var_80:8.q = x0_5
            operator delete(x0_5)
        
        if (*(arg1 + 0x48) != 0)
            int64_t* x0_6 = *(arg1 + 0x70)
            
            if (x0_6 == 0)
                goto label_e86ec4
            
            int64_t x1_4 = *(arg1 + 0x78)
            (*(*x0_6 + 0x18))(x0_6, x1_4, *(arg1 + 0x80) - x1_4)
        
        int64_t* x0_7 = *(arg1 + 0x70)
        
        if (x0_7 == 0)
            goto label_e86ec4
        
        (*(*x0_7 + 0x18))(x0_7, x20_1, x23_1)
        size_t x24_1 = *(arg1 + 0x50)
        __builtin_memset(&var_80, 0, 0x18)
        int64_t* x0_10
        
        if (x24_1 == 0)
            x22_1 = 0
            x0_10 = *(arg1 + 0x70)
            
            if (x0_10 == 0)
            label_e86b68:
                x8_23, v0_6, v1_5, v2_2, v3_2, v4_2, v5_2, v7_3, v16_2 = Botan::assertion_failure(
                    "m_mac is not null", &data_793a18, "mac", 
                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x1665)
            label_e86b6c:
                uint32_t x8_25 = zx.d(*(x20_1 + x8_23))
                int32_t x12_11 = x22_1.d & 0xffff
                int32_t x9_14
                
                x9_14 = x12_11 u> 0x100 ? x12_11 : 0x100
                
                int32_t x10_4 = x9_14 - 0x100
                int32_t x11_12 =
                    ((x22_1.d - (x8_25 + 1)) & not.d(x22_1.d) & 0x8000) << 0x10 s>> 0x1f
                
                if (x12_11 != zx.d(x10_4.w))
                    int16_t x12_12
                    
                    x12_12 = x12_11 u< 0x100 ? x22_1.w : 0x100
                    
                    uint32_t x12_14 = zx.d(x12_12 - 1)
                    
                    if (x12_14 u< 0xf)
                    label_e86cd4:
                        
                        do
                            int16_t x12_16 = x22_1.w - x10_4.w
                            int16_t x13_18 = (zx.w(*(x20_1 + zx.q(x10_4.w))) ^ x8_25.w) - 1
                            x10_4 += 1
                            x11_12 |=
                                not.d(sx.d(((x8_25 + 1).w - x12_16) | x12_16 | x13_18) s>> 0xf)
                        while ((x10_4 & 0xffff) != zx.d((x22_1.d).w))
                    else
                        int16_t x13_11
                        
                        if ((x22_1.d & 0xffff) u< 0x100)
                            x13_11 = x22_1.w
                        else
                            x13_11 = 0x100
                        
                        if ((((x10_4 & 0xffff) + zx.d(x13_11 - 1)) & 0x10000) != 0)
                            goto label_e86cd4
                        
                        v7_3.w = x10_4.w
                        v7_3:2.w = x10_4.w
                        v7_3:4.w = x10_4.w
                        v7_3:6.w = x10_4.w
                        v7_3:8.w = x10_4.w
                        v7_3:0xa.w = x10_4.w
                        v7_3:0xc.w = x10_4.w
                        v7_3:0xe.w = x10_4.w
                        v1_5.q = 0
                        v1_5:8.q = 0
                        int32_t x15_3 = (x12_14 + 1) & 0x1fff0
                        int32_t x13_14 = 0
                        v0_6.q = 0
                        v0_6:8.q = 0
                        v2_2.w = (x22_1.d).w
                        v2_2:2.w = (x22_1.d).w
                        v2_2:4.w = (x22_1.d).w
                        v2_2:6.w = (x22_1.d).w
                        v2_2:8.w = (x22_1.d).w
                        v2_2:0xa.w = (x22_1.d).w
                        v2_2:0xc.w = (x22_1.d).w
                        v2_2:0xe.w = (x22_1.d).w
                        v3_2.w = (x8_25 + 1).w
                        v3_2:2.w = (x8_25 + 1).w
                        v3_2:4.w = (x8_25 + 1).w
                        v3_2:6.w = (x8_25 + 1).w
                        v3_2:8.w = (x8_25 + 1).w
                        v3_2:0xa.w = (x8_25 + 1).w
                        v3_2:0xc.w = (x8_25 + 1).w
                        v3_2:0xe.w = (x8_25 + 1).w
                        v4_2.b = x8_25.b
                        v4_2:1.b = x8_25.b
                        v4_2:2.b = x8_25.b
                        v4_2:3.b = x8_25.b
                        v4_2:4.b = x8_25.b
                        v4_2:5.b = x8_25.b
                        v4_2:6.b = x8_25.b
                        v4_2:7.b = x8_25.b
                        v5_2.w = 8
                        v5_2:2.w = 8
                        v5_2:4.w = 8
                        v5_2:6.w = 8
                        v5_2:8.w = 8
                        v5_2:0xa.w = 8
                        v5_2:0xc.w = 8
                        v5_2:0xe.w = 8
                        v1_5.w = x11_12
                        int128_t v7_4 = v7_3 + data_71a7d0
                        v16_2.w = 0x10
                        v16_2:2.w = 0x10
                        v16_2:4.w = 0x10
                        v16_2:6.w = 0x10
                        v16_2:8.w = 0x10
                        v16_2:0xa.w = 0x10
                        v16_2:0xc.w = 0x10
                        v16_2:0xe.w = 0x10
                        
                        do
                            uint128_t v17_5 = v2_2 - v7_4
                            uint128_t v18_5 = v17_5 - v5_2
                            uint64_t x11_14 = x20_1 + zx.q(x10_4.w + x13_14.w)
                            uint128_t v17_6 = vorrq_s8(v3_2 - v17_5, v17_5)
                            uint128_t v18_6 = vorrq_s8(v3_2 - v18_5, v18_5)
                            uint128_t v19_4
                            v19_4.q = *x11_14
                            uint128_t v20_4
                            v20_4.q = *(x11_14 + 8)
                            x13_14 += 0x10
                            v7_4 += v16_2
                            uint128_t v19_6 = vaddw_u8(sx.o(-1), v19_4 ^ v4_2)
                            uint128_t v20_6 = vaddw_u8(sx.o(-1), v20_4 ^ v4_2)
                            uint128_t v17_7 = vorrq_s8(v17_6, v19_6)
                            uint128_t v18_7 = vorrq_s8(v18_6, v20_6)
                            uint128_t v17_8 = vcgezq_s16(v17_7)
                            uint128_t v18_8 = vcgezq_s16(v18_7)
                            v1_5 = vorrq_s8(v1_5, v17_8)
                            v0_6 = vorrq_s8(v0_6, v18_8)
                        while (x15_3 != x13_14)
                        
                        uint128_t v0_7 = vorrq_s8(v0_6, v1_5)
                        uint128_t v0_8 = vorrq_s8(v0_7, vdupq_laneq_s64(v0_7, 1))
                        uint128_t v0_9 = vorrq_s8(v0_8, vdupq_laneq_s32(v0_8, 1))
                        x11_12 = zx.d(vorrq_s8(v0_9, vdupq_laneq_s16(v0_9, 1)))
                        x10_4 += x15_3
                        
                        if (x12_14 + 1 != x15_3)
                            goto label_e86cd4
                
                x8_24 = (x8_25 + 1) & not.d(x11_12)
                goto label_e86cdc
        else
            if ((x24_1 & 0xffffffff80000000) != 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
            label_e870e8:
                Botan::TLS::TLS_CBC_HMAC_AEAD_Decryption::perform_additional_compressions(arg1, 
                    x22_1)
                
                if (zx.d(*(arg1 + 0x61)) != 0)
                    goto label_e8718c
                
            label_e870f8:
                void** x0_35 = __cxa_allocate_exception(0x28)
                int64_t x0_36
                int128_t v0_14
                x0_36, v0_14 = operator new(0x20)
                int64_t var_90_2 = x0_36
                int128_t var_a0_3 = data_71c370
                __builtin_strncpy(x0_36, "Message authentication failure", 0x1f)
                *x0_35 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_35[1])
                x0_35[4].d = 0x14
                *x0_35 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                __cxa_throw(x0_35, _typeinfo_for_Botan::TLS::TLS_Exception, 
                    Botan::Exception::~Exception)
                noreturn
            
            uint64_t x0_9 = operator new(x24_1)
            int64_t x25_1 = x0_9 + x24_1
            x22_1 = x0_9
            var_80.q = x0_9
            int64_t var_70_1 = x25_1
            memset(x0_9, 0, x24_1)
            var_80:8.q = x25_1
            x0_10 = *(arg1 + 0x70)
            
            if (x0_10 == 0)
                goto label_e86b68
        
        (*(*x0_10 + 0x20))(x0_10, x22_1)
        int64_t i_2 = *(arg1 + 0x50)
        char* x9_10 = var_80.q
        var_a0.b = 0
        
        if (i_2 != 0)
            char* x10_2 = x20_1 + x23_1
            int64_t i_1
            
            do
                char x11_2 = *x10_2
                x10_2 = &x10_2[1]
                char x12_1 = *x9_10
                x9_10 = &x9_10[1]
                i_1 = i_2
                i_2 -= 1
                var_a0.b = x12_1 ^ x11_2
            while (i_1 != 1)
        
        uint128_t v0_1
        uint128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        int128_t v7_1
        int128_t v16_1
        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v7_1, v16_1 =
            Botan::TLS::TLS_CBC_HMAC_AEAD_Decryption::cbc_decrypt_record(arg1, x20_1)
        
        if (x23_1 - 1 u> 0xfffe)
        label_e86f60:
            void** x0_26 = __cxa_allocate_exception(0x28)
            int64_t x0_27
            int128_t v0_12
            x0_27, v0_12 = operator new(0x20)
            int64_t var_90 = x0_27
            int128_t var_a0_1 = data_71c370
            __builtin_strncpy(x0_27, "Message authentication failure", 0x1f)
            *x0_26 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_26[1])
            x0_26[4].d = 0x14
            *x0_26 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_26, _typeinfo_for_Botan::TLS::TLS_Exception, 
                Botan::Exception::~Exception)
            noreturn
        
        uint32_t x8_18 = zx.d(*(x20_1 + x23_1 - 1))
        int32_t x12_2 = x23_1.d & 0xffff
        int32_t x9_11
        
        x9_11 = x12_2 u> 0x100 ? x12_2 : 0x100
        
        int32_t x10_3 = x9_11 - 0x100
        int32_t x11_7 = ((x23_1.d - (x8_18 + 1)) & not.d(x23_1.d) & 0x8000) << 0x10 s>> 0x1f
        
        if (x12_2 != zx.d(x10_3.w))
            int16_t x12_3
            
            x12_3 = x12_2 u< 0x100 ? x23_1.w : 0x100
            
            uint32_t x12_5 = zx.d(x12_3 - 1)
            
            if (x12_5 u< 0xf)
            label_e86ad8:
                
                do
                    int16_t x12_7 = x23_1.w - x10_3.w
                    int16_t x13_9 = (zx.w(*(x20_1 + zx.q(x10_3.w))) ^ x8_18.w) - 1
                    x10_3 += 1
                    x11_7 |= not.d(sx.d(((x8_18 + 1).w - x12_7) | x12_7 | x13_9) s>> 0xf)
                while ((x10_3 & 0xffff) != zx.d((x23_1.d).w))
            else
                int16_t x13_2
                
                if ((x23_1.d & 0xffff) u< 0x100)
                    x13_2 = x23_1.w
                else
                    x13_2 = 0x100
                
                if ((((x10_3 & 0xffff) + zx.d(x13_2 - 1)) & 0x10000) != 0)
                    goto label_e86ad8
                
                v7_1.w = x10_3.w
                v7_1:2.w = x10_3.w
                v7_1:4.w = x10_3.w
                v7_1:6.w = x10_3.w
                v7_1:8.w = x10_3.w
                v7_1:0xa.w = x10_3.w
                v7_1:0xc.w = x10_3.w
                v7_1:0xe.w = x10_3.w
                v1_1.q = 0
                v1_1:8.q = 0
                int32_t x15_1 = (x12_5 + 1) & 0x1fff0
                int32_t x13_5 = 0
                v0_1.q = 0
                v0_1:8.q = 0
                v2_1.w = (x23_1.d).w
                v2_1:2.w = (x23_1.d).w
                v2_1:4.w = (x23_1.d).w
                v2_1:6.w = (x23_1.d).w
                v2_1:8.w = (x23_1.d).w
                v2_1:0xa.w = (x23_1.d).w
                v2_1:0xc.w = (x23_1.d).w
                v2_1:0xe.w = (x23_1.d).w
                v3_1.w = (x8_18 + 1).w
                v3_1:2.w = (x8_18 + 1).w
                v3_1:4.w = (x8_18 + 1).w
                v3_1:6.w = (x8_18 + 1).w
                v3_1:8.w = (x8_18 + 1).w
                v3_1:0xa.w = (x8_18 + 1).w
                v3_1:0xc.w = (x8_18 + 1).w
                v3_1:0xe.w = (x8_18 + 1).w
                v4_1.b = x8_18.b
                v4_1:1.b = x8_18.b
                v4_1:2.b = x8_18.b
                v4_1:3.b = x8_18.b
                v4_1:4.b = x8_18.b
                v4_1:5.b = x8_18.b
                v4_1:6.b = x8_18.b
                v4_1:7.b = x8_18.b
                v5_1.w = 8
                v5_1:2.w = 8
                v5_1:4.w = 8
                v5_1:6.w = 8
                v5_1:8.w = 8
                v5_1:0xa.w = 8
                v5_1:0xc.w = 8
                v5_1:0xe.w = 8
                v1_1.w = x11_7
                int128_t v7_2 = v7_1 + data_71a7d0
                v16_1.w = 0x10
                v16_1:2.w = 0x10
                v16_1:4.w = 0x10
                v16_1:6.w = 0x10
                v16_1:8.w = 0x10
                v16_1:0xa.w = 0x10
                v16_1:0xc.w = 0x10
                v16_1:0xe.w = 0x10
                
                do
                    uint128_t v17_1 = v2_1 - v7_2
                    uint128_t v18_1 = v17_1 - v5_1
                    uint64_t x11_9 = x20_1 + zx.q(x10_3.w + x13_5.w)
                    uint128_t v17_2 = vorrq_s8(v3_1 - v17_1, v17_1)
                    uint128_t v18_2 = vorrq_s8(v3_1 - v18_1, v18_1)
                    uint128_t v19_1
                    v19_1.q = *x11_9
                    uint128_t v20_1
                    v20_1.q = *(x11_9 + 8)
                    x13_5 += 0x10
                    v7_2 += v16_1
                    uint128_t v19_3 = vaddw_u8(sx.o(-1), v19_1 ^ v4_1)
                    uint128_t v20_3 = vaddw_u8(sx.o(-1), v20_1 ^ v4_1)
                    uint128_t v17_3 = vorrq_s8(v17_2, v19_3)
                    uint128_t v18_3 = vorrq_s8(v18_2, v20_3)
                    uint128_t v17_4 = vcgezq_s16(v17_3)
                    uint128_t v18_4 = vcgezq_s16(v18_3)
                    v1_1 = vorrq_s8(v1_1, v17_4)
                    v0_1 = vorrq_s8(v0_1, v18_4)
                while (x15_1 != x13_5)
                
                uint128_t v0_2 = vorrq_s8(v0_1, v1_1)
                uint128_t v0_3 = vorrq_s8(v0_2, vdupq_laneq_s64(v0_2, 1))
                uint128_t v0_4 = vorrq_s8(v0_3, vdupq_laneq_s32(v0_3, 1))
                x11_7 = zx.d(vorrq_s8(v0_4, vdupq_laneq_s16(v0_4, 1)))
                x10_3 += x15_1
                
                if (x12_5 + 1 != x15_1)
                    goto label_e86ad8
        
        if (((x8_18 + 1) & not.d(x11_7)) == 0)
            goto label_e86f60
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<uint8_t const*>(
            arg2, *(arg2 + 8), x20_1)
        goto label_e86e3c

Botan::assertion_failure("enc_iv_size <= 0xFFFF", &data_793a18, "finish", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x159aa)
void** x0_30 = __cxa_allocate_exception(0x28)
int64_t x0_31
int128_t v0_13
x0_31, v0_13 = operator new(0x20)
int64_t var_90_1 = x0_31
int128_t var_a0_2 = data_71c370
__builtin_strncpy(x0_31, "Message authentication failure", 0x1f)
*x0_30 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_30[1])
x0_30[4].d = 0x14
*x0_30 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
__cxa_throw(x0_30, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
noreturn
