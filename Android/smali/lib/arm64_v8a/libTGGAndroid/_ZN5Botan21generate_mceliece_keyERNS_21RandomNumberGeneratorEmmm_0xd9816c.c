// 函数: _ZN5Botan21generate_mceliece_keyERNS_21RandomNumberGeneratorEmmm
// 地址: 0xd9816c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x27 = arg4 * arg2
int128_t var_c0

if (x27 u>= arg3)
    void** x0_70 = __cxa_allocate_exception(0x20)
    int64_t x0_71
    int128_t v0_5
    x0_71, v0_5 = operator new(0x20)
    int64_t var_b0_3 = x0_71
    var_c0 = data_71abe0
    __builtin_strncpy(x0_71, "invalid McEliece parameters", 0x1c)
    *x0_70 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_70[1])
    *x0_70 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_70, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t x0 = operator new(0x20)
Botan::GF2m_Field::GF2m_Field(x0)
void** x0_1 = operator new(0x20)
x0_1[1] = 0
int16_t* result_1
__builtin_memset(&result_1, 0, 0x18)
x0_1[2] = 0
x0_1[3] = x0
*x0_1 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::GF2m_Field*, std::__ndk1::default_delete<Botan::GF2m_Field>, std::__ndk1::allocator<Botan::GF2m_Field> >
    + 0x10
void* x0_17

if ((arg3 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    x0_17 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    uint64_t x25_1 = arg3 << 1
    int16_t* result_3 = operator new(x25_1)
    int16_t* result_7 = result_3
    result_1 = result_3
    void* var_80_1 = &result_3[arg3]
    memset(result_3, 0, x25_1)
    int64_t x21_2 = (((x25_1 - 2) u>> 1) + 1) << 1
    void* x8_3 = &result_7[((x25_1 - 2) u>> 1) + 1]
    
    if (x21_2 != 0)
        int64_t i = 0
        
        do
            result_7[i] = (i.d).w
            result_7 = result_1
            i += 1
        while (i != (x8_3 - result_7) s>> 1)
        
        if (x8_3 != result_7)
            int64_t i_1 = 0
            
            do
                (*(*arg1 + 0x10))(arg1, &var_c0, 2)
                int16_t* result_4 = result_1
                i_1 += 1
                int64_t x9_5 = (x8_3 - result_4) s>> 1
                int16_t x12_2 = result_4[i_1]
                result_4[i_1] = result_4[zx.q(var_c0.w) u% x9_5]
                result_4[zx.q(var_c0.w) u% x9_5] = x12_2
            while (i_1 != (x8_3 - result_1) s>> 1)
    
    int32_t i_2
    
    do
        i_2 = __stxr(__ldxr(&x0_1[1]) + 1, &x0_1[1])
    while (i_2 != 0)
    var_c0.d = 0xffffffff
    __builtin_memset(&var_c0:8, 0, 0x18)
    int16_t* x0_4
    int128_t v0_1
    x0_4, v0_1 = Botan::allocate_memory(1, 2)
    *x0_4 = 0
    var_c0:8.q = x0_4
    void* var_b0_1 = &x0_4[1]
    int32_t i_3
    
    do
        i_3 = __stxr(__ldxr(&x0_1[1]) + 1, &x0_1[1])
    while (i_3 != 0)
    int64_t x8_13
    int32_t i_4
    
    do
        x8_13 = __ldaxr(&x0_1[1])
        i_4 = __stlxr(x8_13 - 1, &x0_1[1])
    while (i_4 != 0)
    
    if (x8_13 == 0)
        (*(*x0_1 + 0x10))(x0_1)
        std::__ndk1::__shared_weak_count::__release_weak()
    
    uint64_t x13_1 = arg3 << 3
    uint64_t x25_2 = (arg3 - 1) u>> 5
    int128_t var_e8
    int128_t* var_1a8_1 = &var_e8
    v0_1 = data_71b810
    int64_t i_23 = (x25_2 + 1) & 0xffffffffffffff8
    int64_t x27_1 = (x25_2 + 1) << 2
    int64_t x8_19 = neg.q(x27_1)
    uint64_t var_100_1 = x0
    int32_t i_5
    
    do
        i_5 = __stxr(__ldxr(&x0_1[1]) + 1, &x0_1[1])
    while (i_5 != 0)
    int32_t var_f0
    int128_t v0_2
    int128_t v1_1
    int128_t v2_1
    v0_2, v1_1, v2_1 = Botan::polyn_gf2m::polyn_gf2m(&var_f0, arg4, arg1)
    int32_t x8_22 = var_f0
    var_f0 = var_c0.d
    int128_t var_d8
    v0_2 = var_d8
    var_c0.d = x8_22
    v2_1 = var_c0
    var_c0 = var_e8
    var_d8:8.q = x0
    void** var_c8_1 = x0_1
    void* var_a8_1
    var_a8_1.o = v0_2
    var_e8 = v2_1
    var_d8.q = &x0_4[1]
    int64_t x9_16
    
    if (x0_1 != 0)
        int32_t i_6
        
        do
            x9_16 = __ldaxr(&x0_1[1])
            i_6 = __stlxr(x9_16 - 1, &x0_1[1])
        while (i_6 != 0)
    
    void* x0_8
    
    if (x0_1 != 0 && x9_16 == 0)
        (*(*x0_1 + 0x10))(x0_1)
        std::__ndk1::__shared_weak_count::__release_weak()
        x0_8 = var_e8.q
        
        if (x0_8 != 0)
            var_e8:8.q = x0_8
            Botan::deallocate_memory(x0_8, (var_d8.q - x0_8) s>> 1, 2)
    else
        x0_8 = var_e8.q
        
        if (x0_8 != 0)
            var_e8:8.q = x0_8
            Botan::deallocate_memory(x0_8, (var_d8.q - x0_8) s>> 1, 2)
    
    if (x0_1 != 0)
        int64_t x9_17
        int32_t i_7
        
        do
            x9_17 = __ldaxr(&x0_1[1])
            i_7 = __stlxr(x9_17 - 1, &x0_1[1])
        while (i_7 != 0)
        
        if (x9_17 == 0)
            (*(*x0_1 + 0x10))(x0_1)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    int32_t i_8
    
    do
        i_8 = __stxr(__ldxr(&x0_1[1]) + 1, &x0_1[1])
    while (i_8 != 0)
    __builtin_memset(&var_f0, 0, 0x18)
    int64_t x26_1 = *x0 * arg4
    int64_t x8_34 = x26_1 * (x25_2 + 1)
    int64_t x20_5
    int32_t* x28_1
    
    if (x8_34 == 0)
        x28_1 = nullptr
        x20_5 = 0
        int64_t* x8_39
        
        if (arg4 == 0)
        label_d98704:
            
            do
                result_1[x20_5]
                uint64_t x10_10 = zx.q(Botan::polyn_gf2m::eval(&var_c0))
                int64_t* x0_20 = *(x0 + 0x10)
                int64_t x9_22 = *x0_20
                
                if (x10_10 u>= (x0_20[1] - x9_22) s>> 1)
                    goto label_d98bc0
                
                x8_39 = *(x0 + 0x18)
                
                if ((x8_39[1] - *x8_39) s>> 1 u<= zx.q(*(x0 + 8) - *(x9_22 + (x10_10 << 1))))
                    goto label_d98bb8
                
                x20_5 += 1
            while (arg3 != x20_5)
            
            goto label_d9870c
        
    label_d98504:
        int16_t* result_6 = result_1
    label_d98520:
        result_6[x20_5]
        uint64_t x11_4 = zx.q(Botan::polyn_gf2m::eval(&var_c0))
        int64_t* x0_15 = *(x0 + 0x10)
        int64_t x10_8 = *x0_15
        
        if (x11_4 u>= (x0_15[1] - x10_8) s>> 1)
        label_d98bc0:
            x0_17 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
        else
            x8_39 = *(x0 + 0x18)
            int16_t x9_21 = *(x0 + 8)
            int64_t x10_9 = *x8_39
            uint64_t x12_5 = zx.q(x9_21 - *(x10_8 + (x11_4 << 1)))
            
            if (x12_5 u>= (x8_39[1] - x10_9) s>> 1)
            label_d98bb8:
                x0_17 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
            else
                uint32_t x1_5 = zx.d(*(x10_9 + (x12_5 << 1)))
                int64_t x12_6 = *x0
                result_6 = result_1
                int64_t x11_8 = 0
                int32_t* x13_4 = &x28_1[1 + x25_2 + (x20_5 u>> 5)]
                int32_t x14_2 = 1 << x20_5.d
                int64_t x17_1 = x12_6
                
                while (true)
                    if (x17_1 != 0)
                        if ((x1_5 & 1) != 0)
                            x28_1[(x20_5 u>> 5) + x17_1 * x11_8 * (x25_2 + 1)] |= x14_2
                        
                        x17_1 = x12_6
                        
                        if (x12_6 u>= 2)
                            int32_t* x2_6 = x13_4
                            int64_t x3 = 1
                            
                            do
                                if (((x1_5 & 0xffff) u>> x3.d & 1) != 0)
                                    *x2_6 |= x14_2
                                
                                x3 += 1
                                x2_6 = &x2_6[x25_2 + 1]
                            while (x3 u< x12_6)
                            
                            x17_1 = x12_6
                    
                    uint32_t x2_3 = 0
                    
                    if ((x1_5 & 0xffff) != 0)
                        uint32_t x3_1 = zx.d(result_6[x20_5])
                        uint32_t x3_2 = x3_1 ^ x3_1 u>> 1
                        
                        if (x3_2 != 0)
                            int64_t x2_7 = *x0_15
                            uint64_t x1_6 = zx.q(x1_5.w)
                            int64_t x4_6 = (x0_15[1] - x2_7) s>> 1
                            
                            if (x4_6 u<= x1_6)
                                x0_17 =
                                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                                goto label_d9945c
                            
                            uint64_t x3_3 = zx.q(x3_2)
                            
                            if (x4_6 u<= x3_3)
                                x0_17 =
                                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                                goto label_d9945c
                            
                            int64_t x1_7 = *x8_39
                            uint64_t x2_9 =
                                zx.q(*(x2_7 + (x3_3 << 1))) + zx.q(*(x2_7 + (x1_6 << 1)))
                            uint64_t x2_12 = zx.q((x2_9 u>> x17_1).w + (x2_9.w & x9_21))
                            
                            if (x2_12 u>= (x8_39[1] - x1_7) s>> 1)
                                x0_17 =
                                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                                goto label_d9945c
                            
                            x2_3 = zx.d(*(x1_7 + (x2_12 << 1)))
                    
                    x11_8 += 1
                    x13_4 += x27_1 * x12_6
                    x1_5 = x2_3
                    
                    if (x11_8 == arg4)
                        x20_5 += 1
                        
                        if (x20_5 == arg3)
                            break
                        
                        goto label_d98520
                
            label_d9870c:
                int64_t var_78_1
                __builtin_memset(&var_78_1, 0, 0x18)
                
                if (arg3 u>> 0x3d != 0)
                    x0_17 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                else
                    void* x0_22 = Botan::allocate_memory(arg3, 8)
                    int64_t* x20_6 = x0_22
                    int128_t v0_3
                    int128_t v1_2
                    int128_t v2_2
                    int128_t v3_1
                    v0_3, v1_2, v2_2, v3_1 = memset(x0_22, 0, x13_1)
                    *x20_6 = 0
                    void* var_70_1 = &x20_6[((x13_1 - 8) u>> 3) + 1]
                    
                    if (arg3 != 1)
                        x20_6[1] = 1
                        
                        if (arg3 != 2)
                            x20_6[2] = 2
                            
                            if (arg3 != 3)
                                int64_t x8_49 = 3
                                
                                do
                                    *(x0_22 + (x8_49 << 3)) = x8_49
                                    x8_49 += 1
                                while (arg3 != x8_49)
                    
                    int64_t x20_7 = x8_19
                    
                    if (x26_1 != 0)
                        uint64_t x15_2 = arg3
                        int64_t i_21 = 0
                        int32_t x8_50 = 0
                        int64_t x9_26 = x15_2 - x26_1
                        void* x10_14 = &x28_1[x25_2 + 1]
                        int64_t x13_6 = not.q(x26_1) + x15_2
                        
                        do
                            x15_2 -= 1
                            
                            if (i_21 == x26_1)
                            label_d987cc:
                                *(x0_22 + ((x13_6 - zx.q(x8_50)) << 3)) = sx.q(x15_2.d)
                                
                                if (x15_2 == 0 && var_70_1 != x0_22)
                                    var_70_1 = x0_22
                                
                                x8_50 += 1
                                i_21 -= 1
                            else
                                int64_t x0_24 = (x25_2 + 1) * i_21
                                void* x2_14 = &x28_1[4 + x0_24]
                                uint64_t x16_3 = x15_2 u>> 5
                                int32_t x17_7 = 1 << x15_2.d
                                int64_t x1_9 = x0_24
                                void* x3_6 = x2_14
                                int64_t i_22 = i_21
                                
                                while (true)
                                    int64_t x5_1 = i_22 * (x25_2 + 1)
                                    
                                    if ((x28_1[x5_1 + x16_3] & x17_7) != 0)
                                        if (i_22 != i_21)
                                            int64_t x4_10 = i_21 * (x25_2 + 1)
                                            int64_t i_24
                                            
                                            if (arg3 - 1 u>= 0xe0)
                                                if (&x28_1[x4_10] u< x10_14 + (x5_1 << 2)
                                                        && &x28_1[x5_1] u< x10_14 + (x4_10 << 2))
                                                    x20_7 = x8_19
                                                    i_24 = 0
                                                    goto label_d988dc
                                                
                                                int64_t i_20 = i_23
                                                x20_7 = x8_19
                                                int32_t i_9
                                                
                                                do
                                                    v0_3 = *(x3_6 - 0x10)
                                                    v1_2 = *x3_6
                                                    x3_6 += 0x20
                                                    i_9 = i_20
                                                    i_20 -= 8
                                                    v1_2 ^= *x2_14
                                                    *(x2_14 - 0x10) ^= v0_3
                                                    *x2_14 = v1_2
                                                    x2_14 += 0x20
                                                while (i_9 != 8)
                                                i_24 = i_23
                                                
                                                if (x25_2 + 1 != i_24)
                                                    goto label_d988dc
                                            else
                                                i_24 = 0
                                            label_d988dc:
                                                int64_t i_19 = x25_2 + 1 - i_24
                                                void* x1_10 = &x28_1[i_24 + x4_10]
                                                void* x3_8 = &x28_1[i_24 + x1_9]
                                                int64_t i_10
                                                
                                                do
                                                    int32_t x4_12 = *x3_8
                                                    x3_8 += 4
                                                    i_10 = i_19
                                                    i_19 -= 1
                                                    *x1_10 ^= x4_12
                                                    x1_10 += 4
                                                while (i_10 != 1)
                                        
                                        int64_t x1_11 = i_21 + 1
                                        *(x0_22 + ((x9_26 + i_21) << 3)) = x15_2
                                        
                                        if (x1_11 u< x26_1)
                                            void* x2_17 = &x28_1[1 + (x25_2 + 1) * x1_11]
                                            int64_t x4_14 = x25_2 + 1
                                            
                                            do
                                                if (x4_14 != 0
                                                        && (x28_1[x16_3 + x1_11 * x4_14] & x17_7)
                                                        != 0)
                                                    x28_1[x4_14 * x1_11] ^= x28_1[x4_14 * i_21]
                                                    
                                                    if (x25_2 == 0)
                                                        x4_14 = 1
                                                    else
                                                        int64_t x4_17 = 0
                                                        
                                                        do
                                                            int64_t x5_11 = x4_17 << 2
                                                            x4_17 += 1
                                                            *(x2_17 + x5_11) ^=
                                                                x28_1[1 + x0_24 + x4_17]
                                                        while (x25_2 != x4_17)
                                                        
                                                        x4_14 = x4_17 + 1
                                                
                                                x1_11 += 1
                                                x2_17 += x27_1
                                            while (x1_11 != x26_1)
                                        
                                        if (i_21 != 0)
                                            void* x1_14 = &x28_1[1 + (x25_2 + 1) * (i_21 - 1)]
                                            int64_t x3_11 = x25_2 + 1
                                            int64_t i_11 = i_21
                                            
                                            do
                                                i_11 -= 1
                                                
                                                if (x3_11 != 0
                                                        && (x28_1[x16_3 + i_11 * x3_11] & x17_7)
                                                        != 0)
                                                    x28_1[x3_11 * i_11] ^= x28_1[x3_11 * i_21]
                                                    
                                                    if (x25_2 == 0)
                                                        x3_11 = 1
                                                    else
                                                        int64_t x3_14 = 0
                                                        
                                                        do
                                                            int64_t x4_24 = x3_14 << 2
                                                            x3_14 += 1
                                                            *(x1_14 + x4_24) ^=
                                                                x28_1[1 + x0_24 + x3_14]
                                                        while (x25_2 != x3_14)
                                                        
                                                        x3_11 = x3_14 + 1
                                                
                                                x1_14 += x20_7
                                            while (i_11 != 0)
                                        
                                        break
                                    
                                    i_22 += 1
                                    x3_6 += x27_1
                                    x1_9 += x25_2 + 1
                                    
                                    if (i_22 == x26_1)
                                        goto label_d987cc
                            
                            i_21 += 1
                        while (i_21 != x26_1)
                    
                    if (var_70_1 == x0_22)
                        void** x0_34 = __cxa_allocate_exception(0x20)
                        int64_t x0_35
                        int128_t v0_4
                        x0_35, v0_4 = operator new(0x50)
                        var_f0.o = v0_1
                        var_e8:8.q = x0_35
                        __builtin_strncpy(x0_35, 
                            "McEliece keygen failed - could not bring matrix to row reduced echelon form", 
                            0x4c)
                        *x0_34 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_34[1])
                        *x0_34 = _vtable_for_Botan::Invalid_State + 0x10
                        __cxa_throw(x0_34, _typeinfo_for_Botan::Invalid_State, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    int64_t* x0_26 = operator new(0x30)
                    x0_26[3] = 0
                    void* fp_3 = x0_26
                    int64_t x20_10 = arg3 - x26_1
                    int64_t x9_29 = (((x26_1 - 1) u>> 5) + 1) * x20_10
                    x0_26[4] = 0
                    x0_26[5] = 0
                    *x0_26 = x20_10
                    x0_26[1] = x26_1
                    x0_26[2] = ((x26_1 - 1) u>> 5) + 1
                    __builtin_memset(&var_f0, 0, 0x18)
                    
                    if (x9_29 == 0)
                        *(fp_3 + 0x18) = 0
                        *(fp_3 + 0x20) = 0
                        *(fp_3 + 0x28) = x9_29
                        
                        if (x20_10 != 0)
                        label_d98ae8:
                            int64_t x8_60 = 0
                            int64_t x9_32 = x26_1
                            
                            do
                                if (x9_32 != 0)
                                    int64_t x9_33 = 0
                                    int64_t x10_16 = 0
                                    
                                    do
                                        int64_t x11_12 = *(x0_22 + (x8_60 << 3))
                                        
                                        if ((x28_1[x9_33 + (x11_12 u>> 5)] u>> x11_12.d & 1) != 0)
                                            int32_t* x12_12 = *(fp_3 + 0x18)
                                            *(fp_3 + 0x10)
                                            x12_12[*(fp_3 + 0x10) * x8_60 + (x10_16 u>> 5)] ^=
                                                1 << x10_16.d
                                            x26_1 = *(fp_3 + 8)
                                        
                                        x10_16 += 1
                                        x9_33 += x25_2 + 1
                                    while (x10_16 u< x26_1)
                                    
                                    x20_10 = *fp_3
                                    x9_32 = x26_1
                                
                                x8_60 += 1
                            while (x8_60 u< x20_10)
                            
                            goto label_d98b6c
                        
                    label_d98b6c:
                        *var_1a8_1 = 0
                        *(var_1a8_1 + 8) = 0
                        int16_t* x0_30 = operator new(x25_1)
                        var_f0.q = x0_30
                        memset(x0_30, 0, x25_1)
                        int16_t* result_5 = result_1
                        *x0_30 = result_5[*x0_22]
                        
                        if (arg3 != 1)
                            int64_t x8_69 = var_f0.q
                            x0_30[1] = result_5[*(x0_22 + 8)]
                            
                            if (arg3 != 2)
                                int64_t x9_36 = 2
                                
                                do
                                    *(x8_69 + (x9_36 << 1)) = result_1[*(x0_22 + (x9_36 << 3))]
                                    x9_36 += 1
                                while (arg3 != x9_36)
                        
                        int16_t* x8_70 = var_f0.q
                        int64_t x9_37 = 0
                        
                        do
                            x9_37 += 1
                            result_1[x9_37] = x8_70[x9_37]
                        while (arg3 != x9_37)
                        
                        void* x0_38 = var_f0.q
                        
                        if (x0_38 != 0)
                            operator delete(x0_38)
                        
                        if (x0_22 != 0)
                            var_70_1 = x0_22
                            Botan::deallocate_memory(x0_22, arg3 << 3 s>> 3, 8)
                        
                        if (x28_1 != 0)
                            operator delete(x28_1)
                        
                        int64_t x8_73
                        int32_t i_12
                        
                        do
                            x8_73 = __ldaxr(&x0_1[1])
                            i_12 = __stlxr(x8_73 - 1, &x0_1[1])
                        while (i_12 != 0)
                        
                        if (x8_73 == 0)
                            (*(*x0_1 + 0x10))(x0_1)
                            std::__ndk1::__shared_weak_count::__release_weak()
                        
                        Botan::polyn_gf2m::sqrt_mod_init(&var_c0)
                        Botan::syndrome_init(&var_c0, &result_1, arg3.d)
                        void* var_118
                        __builtin_memset(&var_118, 0, 0x18)
                        int64_t x24_1 = (((x27 - 1) u>> 5) + 1) * arg3
                        void* x25_3
                        
                        if (x24_1 == 0)
                            x25_3 = nullptr
                            
                            if (arg3 != 0 && arg4 != 0)
                            label_d98f8c:
                                int64_t x8_81 = 0
                                
                                do
                                    int64_t x10_24 = 0
                                    int64_t x11_20 = 0
                                    
                                    do
                                        uint64_t x12_16 = x10_24 u>> 5
                                        uint64_t x14_5 = x12_16 << 2
                                        *(x25_3 + x14_5) ^=
                                            zx.d(*(*(x0_22 + x8_81 * 0x30 + 8) + (x11_20 << 1)))
                                            << x10_24.d
                                        
                                        if ((x10_24 & 0x1f) + arg2 u>= 0x21)
                                            void* x12_17 = x25_3 + (x12_16 << 2)
                                            *(x12_17 + 4) ^=
                                                zx.d(*(*(x0_22 + x8_81 * 0x30 + 8) + (x11_20 << 1)))
                                                u>> neg.d(x10_24.d & 0x1f)
                                        
                                        x11_20 += 1
                                        x10_24 += arg2
                                    while (arg4 != x11_20)
                                    
                                    x8_81 += 1
                                    x25_3 += (((x27 - 1) u>> 5) + 1) << 2
                                while (x8_81 != arg3)
                                
                                goto label_d99034
                            
                        label_d99034:
                            void* x0_48 = operator new(x25_1)
                            void* var_130 = x0_48
                            void* var_120_1 = x0_48 + (arg3 << 1)
                            memset(x0_48, 0, x25_1)
                            void* x8_83 = x0_48 + x21_2
                            
                            if (x21_2 != 0)
                                void* x8_84 = var_130
                                void* x9_41 = x8_83 - x8_84
                                *(x0_48 + (zx.q(*result_1) << 1)) = 0
                                
                                if (x9_41 != 2)
                                    void* x11_22
                                    
                                    x11_22 = x9_41 s>= 0 ? x9_41 : -ffffffffffffffff
                                    
                                    void* x10_26 = x8_84 - x8_83
                                    void* x11_23
                                    
                                    x11_23 = x11_22 s< 1 ? x11_22 : 1
                                    
                                    void* x9_42
                                    
                                    x9_42 = x10_26 s> x9_41 ? x10_26 : x9_41
                                    
                                    int64_t i_13 = 1
                                    
                                    do
                                        *(x8_84 + (zx.q(result_1[i_13]) << 1)) = (i_13.d).w
                                        i_13 += 1
                                    while (x11_23 * (x9_42 u>> 1) != i_13)
                            
                            int32_t* x22_1 = *(fp_3 + 0x18)
                            int64_t x23_1 = *(fp_3 + 0x20)
                            void* var_148_1
                            __builtin_memset(&var_148_1, 0, 0x18)
                            uint64_t x20_14 = x23_1 - x22_1
                            void* x21_6
                            
                            if (x23_1 == x22_1)
                                x21_6 = nullptr
                                
                                if (x23_1 != x22_1)
                                label_d9911c:
                                    *x21_6 = *x22_1
                                    int32_t* x8_86 = *(fp_3 + 0x18)
                                    
                                    if ((*(fp_3 + 0x20) - x8_86) s>> 2 u>= 2)
                                        int64_t i_14 = 1
                                        
                                        do
                                            int64_t x11_26 = i_14 << 2
                                            i_14 += 1
                                            *(var_148_1 + x11_26) = x8_86[i_14]
                                            x8_86 = *(fp_3 + 0x18)
                                        while (i_14 u< (*(fp_3 + 0x20) - x8_86) s>> 2)
                                    
                                    goto label_d99174
                                
                            label_d99174:
                                Botan::polyn_gf2m* entry_x8
                                Botan::McEliece_PrivateKey::McEliece_PrivateKey(entry_x8, &var_c0, 
                                    &var_118, &var_f0, &var_130)
                                void* x0_52 = var_148_1
                                
                                if (x0_52 != 0)
                                    void* var_140_2 = x0_52
                                    operator delete(x0_52)
                                
                                void* x0_53 = var_130
                                
                                if (x0_53 != 0)
                                    operator delete(x0_53)
                                
                                void* x0_54 = var_118
                                
                                if (x0_54 != 0)
                                    void* var_110_2 = x0_54
                                    operator delete(x0_54)
                                
                                if (x0_22 != 0)
                                    void* x22_2 = var_70_1
                                    void* x0_55
                                    
                                    if (x22_2 != x0_22)
                                        do
                                            int64_t* x20_15 = *(x22_2 - 8)
                                            int64_t x9_48
                                            
                                            if (x20_15 != 0)
                                                int32_t i_15
                                                
                                                do
                                                    x9_48 = __ldaxr(&x20_15[1])
                                                    i_15 = __stlxr(x9_48 - 1, &x20_15[1])
                                                while (i_15 != 0)
                                            
                                            void* x0_56
                                            
                                            if (x20_15 != 0 && x9_48 == 0)
                                                (*(*x20_15 + 0x10))(x20_15)
                                                std::__ndk1::__shared_weak_count::__release_weak()
                                                x0_56 = *(x22_2 - 0x28)
                                                
                                                if (x0_56 != 0)
                                                    goto label_d991f4
                                            else
                                                x0_56 = *(x22_2 - 0x28)
                                                
                                                if (x0_56 != 0)
                                                label_d991f4:
                                                    int64_t x8_89 = *(x22_2 - 0x18)
                                                    *(x22_2 - 0x20) = x0_56
                                                    Botan::deallocate_memory(x0_56, 
                                                        (x8_89 - x0_56) s>> 1, 2)
                                            x22_2 -= 0x30
                                        while (x22_2 != x0_22)
                                        
                                        x0_55 = x0_22
                                    else
                                        x0_55 = x0_22
                                    
                                    void* var_70_2 = x0_22
                                    operator delete(x0_55)
                                
                                void* x21_8 = var_f0.q
                                
                                if (x21_8 != 0)
                                    void* x22_3 = var_e8.q
                                    void* x0_59
                                    
                                    if (x22_3 != x21_8)
                                        do
                                            int64_t* x20_16 = *(x22_3 - 8)
                                            int64_t x9_49
                                            
                                            if (x20_16 != 0)
                                                int32_t i_16
                                                
                                                do
                                                    x9_49 = __ldaxr(&x20_16[1])
                                                    i_16 = __stlxr(x9_49 - 1, &x20_16[1])
                                                while (i_16 != 0)
                                            
                                            void* x0_60
                                            
                                            if (x20_16 != 0 && x9_49 == 0)
                                                (*(*x20_16 + 0x10))(x20_16)
                                                std::__ndk1::__shared_weak_count::__release_weak()
                                                x0_60 = *(x22_3 - 0x28)
                                                
                                                if (x0_60 != 0)
                                                    goto label_d99290
                                            else
                                                x0_60 = *(x22_3 - 0x28)
                                                
                                                if (x0_60 != 0)
                                                label_d99290:
                                                    int64_t x8_94 = *(x22_3 - 0x18)
                                                    *(x22_3 - 0x20) = x0_60
                                                    Botan::deallocate_memory(x0_60, 
                                                        (x8_94 - x0_60) s>> 1, 2)
                                            x22_3 -= 0x30
                                        while (x22_3 != x21_8)
                                        
                                        x0_59 = var_f0.q
                                    else
                                        x0_59 = x21_8
                                    
                                    var_e8.q = x21_8
                                    operator delete(x0_59)
                                
                                void* x0_63 = x0_26[3]
                                
                                if (x0_63 != 0)
                                    *(fp_3 + 0x20) = x0_63
                                    operator delete(x0_63)
                                
                                operator delete(fp_3)
                                int64_t* var_c8
                                void* var_b0_2
                                void* x0_65
                                
                                if (var_c8 == 0)
                                label_d99318:
                                    x0_65 = var_c0:8.q
                                    
                                    if (x0_65 != 0)
                                        var_b0_2 = x0_65
                                        Botan::deallocate_memory(x0_65, (var_a8_1 - x0_65) s>> 1, 2)
                                else
                                    int64_t x9_50
                                    int32_t i_17
                                    
                                    do
                                        x9_50 = __ldaxr(&var_c8[1])
                                        i_17 = __stlxr(x9_50 - 1, &var_c8[1])
                                    while (i_17 != 0)
                                    
                                    if (x9_50 != 0)
                                        goto label_d99318
                                    
                                    (*(*var_c8 + 0x10))(var_c8)
                                    std::__ndk1::__shared_weak_count::__release_weak()
                                    x0_65 = var_c0:8.q
                                    
                                    if (x0_65 != 0)
                                        var_b0_2 = x0_65
                                        Botan::deallocate_memory(x0_65, (var_a8_1 - x0_65) s>> 1, 2)
                                int16_t* result = result_1
                                
                                if (result != 0)
                                    int16_t* result_2 = result
                                    result = operator delete(result)
                                
                                int64_t x8_102
                                int32_t i_18
                                
                                do
                                    x8_102 = __ldaxr(&x0_1[1])
                                    i_18 = __stlxr(x8_102 - 1, &x0_1[1])
                                while (i_18 != 0)
                                
                                if (x8_102 != 0)
                                    return result
                                
                                (*(*x0_1 + 0x10))(x0_1)
                                return std::__ndk1::__shared_weak_count::__release_weak()
                            
                            if ((x20_14 & 0xffffffff80000000) == 0)
                                void* x0_50 = operator new(x20_14)
                                void* x24_3 = x0_50 + x20_14
                                x21_6 = x0_50
                                var_148_1 = x0_50
                                void* var_138_1 = x24_3
                                memset(x0_50, 0, x20_14)
                                void* var_140_1 = x24_3
                                
                                if (x23_1 != x22_1)
                                    goto label_d9911c
                                
                                goto label_d99174
                            
                            x0_17 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        else
                            if (x24_1 u>> 0x3e == 0)
                                int64_t x20_12 = x24_1 << 2
                                void* x0_46 = operator new(x20_12)
                                x25_3 = x0_46
                                var_118 = x0_46
                                void* var_108_1 = x0_46 + (x24_1 << 2)
                                memset(x0_46, 0, x20_12)
                                void* var_110_1 = x20_12 + x0_46
                                
                                if (arg3 != 0 && arg4 != 0)
                                    goto label_d98f8c
                                
                                goto label_d99034
                            
                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                            x0_17 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    else
                        if (x9_29 u>> 0x3e == 0)
                            int64_t x0_27 = x9_29 << 2
                            int64_t x0_28 = operator new(x0_27)
                            memset(x0_28, 0, x0_27)
                            *(fp_3 + 0x18) = x0_28
                            *(fp_3 + 0x20) = x0_27 + x0_28
                            *(fp_3 + 0x28) = x0_28 + (x9_29 << 2)
                            
                            if (x20_10 != 0)
                                goto label_d98ae8
                            
                            goto label_d98b6c
                        
                        x0_17 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        if (x8_34 u>> 0x3e == 0)
            int64_t x20_4 = x8_34 << 2
            int32_t* x0_12 = operator new(x20_4)
            x28_1 = x0_12
            memset(x0_12, 0, x20_4)
            x20_5 = 0
            
            if (arg4 == 0)
                goto label_d98704
            
            goto label_d98504
        
        x0_17 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

label_d9945c:
sub_c776cc(x0_17)
noreturn
