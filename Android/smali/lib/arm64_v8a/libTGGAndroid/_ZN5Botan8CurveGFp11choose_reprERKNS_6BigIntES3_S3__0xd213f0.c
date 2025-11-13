// 函数: _ZN5Botan8CurveGFp11choose_reprERKNS_6BigIntES3_S3_
// 地址: 0xd213f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::prime_p192()
struct std::__ndk1::__shared_weak_count::std::__ndk1::__shared_ptr_pointer<Botan::(anonymous namespace)::CurveGFp_P192*, std::__ndk1::default_delete<Botan::(anonymous namespace)::CurveGFp_P192>, std::__ndk1::allocator<Botan::(anonymous namespace)::CurveGFp_P192> >::VTable
    ** result
void** entry_x8
struct std::__ndk1::__shared_weak_count::std::__ndk1::__shared_ptr_pointer<Botan::(anonymous namespace)::CurveGFp_P192*, std::__ndk1::default_delete<Botan::(anonymous namespace)::CurveGFp_P192>, std::__ndk1::allocator<Botan::(anonymous namespace)::CurveGFp_P192> >::VTable
    * const x8_6
struct Botan::CurveGFp_Repr::Botan::(anonymous namespace)::CurveGFp_P192::VTable** x19

if ((Botan::BigInt::is_equal(arg1) & 1) == 0)
    Botan::prime_p224()
    
    if ((Botan::BigInt::is_equal(arg1) & 1) == 0)
        Botan::prime_p256()
        
        if ((Botan::BigInt::is_equal(arg1) & 1) == 0)
            Botan::prime_p384()
            
            if ((Botan::BigInt::is_equal(arg1) & 1) == 0)
                Botan::prime_p521()
                
                if ((Botan::BigInt::is_equal(arg1) & 1) == 0)
                    struct Botan::CurveGFp_Repr::Botan::(anonymous namespace)::CurveGFp_P192::VTable
                        ** x0_30 = operator new(0x158)
                    struct Botan::CurveGFp_Repr::Botan::(anonymous namespace)::CurveGFp_Montgomery::VTable
                        ** x21_10 = x0_30
                    x19 = x0_30
                    *x21_10 = &_vtable_for_Botan::(anonymous namespace)::CurveGFp_Montgomery{for `Botan::CurveGFp_Repr'}
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                        &x21_10[1])
                    x19[4] = *(arg1 + 0x18)
                    x19[5].d = *(arg1 + 0x20)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                        &x19[6])
                    x19[9] = *(arg2 + 0x18)
                    x19[0xa].d = *(arg2 + 0x20)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                        &x19[0xb])
                    x19[0xe] = *(arg3 + 0x18)
                    int32_t x10_1 = *(arg3 + 0x20)
                    x19[0x15] = 0
                    x19[0xf].d = x10_1
                    x19[0x10] = 0
                    int64_t x12_1 = x19[4]
                    int32_t* x10_2 = x19[1]
                    int64_t x11_1 = x19[2]
                    x19[0x11] = 0
                    x19[0x12] = 0
                    x19[0x13] = -1
                    x19[0x14].d = 1
                    x19[0x16] = 0
                    x19[0x17] = 0
                    x19[0x18] = -1
                    x19[0x19].d = 1
                    
                    if (x12_1 == -1)
                        void* x14_1 = x11_1 - x10_2
                        
                        if (x11_1 == x10_2)
                            x12_1 = 0
                        else
                            void* x16_1
                            
                            x16_1 = x14_1 s>= 0 ? x14_1 : -ffffffffffffffff
                            
                            void* x15_1 = x10_2 - x11_1
                            void* x16_2
                            
                            x16_2 = x16_1 s< 1 ? x16_1 : 1
                            
                            x12_1 = x14_1 s>> 2
                            void* x14_2
                            
                            x14_2 = x15_1 s> x14_1 ? x15_1 : x14_1
                            
                            int64_t i_3 = x16_2 * (x14_2 u>> 2)
                            uint64_t x15_2 = 1
                            int64_t i
                            
                            do
                                int32_t x16_3 = *(x10_2 - 4 + (i_3 << 2))
                                i = i_3
                                i_3 -= 1
                                x15_2 = zx.q(x15_2.d) & zx.q(((x16_3 - 1) & not.d(x16_3)) s>> 0x1f)
                                x12_1 -= x15_2
                            while (i != 1)
                        
                        x19[4] = x12_1
                    
                    x19[0x1b] = 0
                    x19[0x1a] = x12_1
                    x19[0x1c] = 0
                    x19[0x1d] = 0
                    x19[0x1e] = -1
                    x19[0x1f].d = 1
                    x19[0x21] = 0
                    x19[0x22] = 0
                    x19[0x20] = 0
                    x19[0x23] = -1
                    x19[0x24].d = 1
                    x19[0x25] = 0
                    x19[0x26] = 0
                    x19[0x27] = 0
                    x19[0x28] = -1
                    x19[0x29].d = 1
                    uint32_t x0_34
                    
                    if (x11_1 == x10_2)
                        x0_34 = 0
                    else
                        x0_34 = *x10_2
                    
                    x19[0x2a].d = Botan::monty_inverse(x0_34)
                    void* var_c0
                    Botan::Modular_Reducer::Modular_Reducer(&var_c0)
                    int64_t x8_35 = x19[0x1b]
                    int64_t fp_1 = x19[0x1a] & 0x7ffffffffffffff
                    int64_t x9_18 = (x19[0x1c] - x8_35) s>> 2
                    int32_t x8_37
                    
                    if (x9_18 u<= fp_1)
                        int64_t x10_4 = x19[0x1d]
                        x19[0x1e] = -1
                        
                        if (fp_1 u< (x10_4 - x8_35) s>> 2)
                            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                &x19[0x1b])
                        else if (((fp_1 + 1) & 0xffffffffffffff8) + 8 u> x9_18)
                            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                                &x19[0x1b])
                        else if (((fp_1 + 1) & 0xffffffffffffff8) + 8 u< x9_18)
                            x19[0x1c] = x8_35 + ((((fp_1 + 1) & 0xffffffffffffff8) + 8) << 2)
                        
                        x8_37 = 1
                    else
                        int32_t x8_36 = *(x8_35 + (fp_1 << 2))
                        x19[0x1e] = -1
                        x8_37 = x8_36 | 1
                    
                    *(x19[0x1b] + (fp_1 << 2)) = x8_37
                    Botan::Modular_Reducer::reduce(&var_c0)
                    void* x0_40 = x19[0x1b]
                    int128_t var_f0
                    int128_t v0_1 = var_f0
                    int64_t x8_39 = x19[0x1d]
                    int64_t x11_2 = x19[0x1e]
                    int64_t var_e0
                    x19[0x1d] = var_e0
                    int64_t var_d8
                    x19[0x1e] = var_d8
                    int32_t x9_21 = x19[0x1f].d
                    *(x19 + 0xd8) = v0_1
                    var_f0.q = x0_40
                    int32_t var_d0
                    x19[0x1f].d = var_d0
                    
                    if (x0_40 != 0)
                        var_f0:8.q = x0_40
                        Botan::deallocate_memory(x0_40, (x8_39 - x0_40) s>> 2, 4)
                    
                    Botan::Modular_Reducer::square(&var_c0)
                    void* x0_42 = x19[0x20]
                    int128_t v0_2 = var_f0
                    int64_t x8_41 = x19[0x22]
                    int64_t x11_3 = x19[0x23]
                    x19[0x22] = x8_39
                    x19[0x23] = x11_2
                    int32_t x9_23 = x19[0x24].d
                    *(x19 + 0x100) = v0_2
                    var_f0.q = x0_42
                    x19[0x24].d = x9_21
                    
                    if (x0_42 != 0)
                        var_f0:8.q = x0_42
                        Botan::deallocate_memory(x0_42, (x8_41 - x0_42) s>> 2, 4)
                    
                    Botan::Modular_Reducer::multiply(&var_c0, &x19[0x1b])
                    void* x0_44 = x19[0x25]
                    *(x19 + 0x128) = var_f0
                    int64_t x8_43 = x19[0x27]
                    int64_t x12_2 = x19[0x28]
                    x19[0x27] = x8_41
                    x19[0x28] = x11_3
                    int32_t x9_25 = x19[0x29].d
                    x19[0x29].d = x9_23
                    var_f0.q = x0_44
                    
                    if (x0_44 != 0)
                        var_f0:8.q = x0_44
                        Botan::deallocate_memory(x0_44, (x8_43 - x0_44) s>> 2, 4)
                    
                    Botan::Modular_Reducer::multiply(&var_c0, &x19[0x1b])
                    void* x0_46 = x19[0x10]
                    int128_t v0_4 = var_f0
                    int64_t x8_45 = x19[0x12]
                    int64_t x11_5 = x19[0x13]
                    x19[0x12] = x8_43
                    x19[0x13] = x12_2
                    int32_t x9_27 = x19[0x14].d
                    *(x19 + 0x80) = v0_4
                    var_f0.q = x0_46
                    x19[0x14].d = x9_25
                    
                    if (x0_46 != 0)
                        var_f0:8.q = x0_46
                        Botan::deallocate_memory(x0_46, (x8_45 - x0_46) s>> 2, 4)
                    
                    Botan::Modular_Reducer::multiply(&var_c0, &x19[0x1b])
                    void* x0_48 = x19[0x15]
                    int128_t v0_5 = var_f0
                    int64_t x8_47 = x19[0x17]
                    int64_t x11_6 = x19[0x18]
                    x19[0x17] = x8_45
                    x19[0x18] = x11_5
                    int32_t x9_29 = x19[0x19].d
                    int64_t var_d8_5 = x11_6
                    *(x19 + 0xa8) = v0_5
                    var_f0.q = x0_48
                    x19[0x19].d = x9_27
                    int32_t var_d0_5 = x9_29
                    
                    if (x0_48 != 0)
                        var_f0:8.q = x0_48
                        Botan::deallocate_memory(x0_48, (x8_47 - x0_48) s>> 2, 4)
                    
                    int64_t x8_49 = x19[9]
                    
                    if (x8_49 == -1)
                        int64_t x9_30 = x19[6]
                        int64_t x11_7 = x19[7]
                        int64_t x10_18 = x11_7 - x9_30
                        
                        if (x11_7 == x9_30)
                            x8_49 = 0
                        else
                            int64_t x12_3
                            
                            x12_3 = x10_18 s>= 0 ? x10_18 : -1
                            
                            int64_t x11_8 = x9_30 - x11_7
                            int64_t x12_4
                            
                            x12_4 = x12_3 s< 1 ? x12_3 : 1
                            
                            x8_49 = x10_18 s>> 2
                            int64_t x10_19
                            
                            x10_19 = x11_8 s> x10_18 ? x11_8 : x10_18
                            
                            int64_t i_2 = x12_4 * (x10_19 u>> 2)
                            uint64_t x11_9 = 1
                            int64_t i_1
                            
                            do
                                int32_t x12_5 = *(x9_30 - 4 + (i_2 << 2))
                                i_1 = i_2
                                i_2 -= 1
                                x11_9 = zx.q(x11_9.d) & zx.q(((x12_5 - 1) & not.d(x12_5)) s>> 0x1f)
                                x8_49 -= x11_9
                            while (i_1 != 1)
                        
                        x19[9] = x8_49
                    
                    *(x19 + 0x154) = (x8_49 == 0 ? 1 : 0).b
                    uint32_t var_64 = 3
                    Botan::BigInt::add2(&x19[6], &var_64, 1, 1)
                    char x0_51 = Botan::BigInt::is_equal(&var_f0)
                    void* x8_50 = var_f0.q
                    *(x19 + 0x155) = x0_51 & 1
                    
                    if (x8_50 != 0)
                        var_f0:8.q = x8_50
                        Botan::deallocate_memory(x8_50, (x8_47 - x8_50) s>> 2, 4)
                    
                    void* var_98
                    
                    if (var_98 != 0)
                        void* var_90_1 = var_98
                        int64_t var_88
                        Botan::deallocate_memory(var_98, (var_88 - var_98) s>> 2, 4)
                    
                    void* x0_54 = var_c0
                    
                    if (x0_54 != 0)
                        void* var_b8_1 = x0_54
                        int64_t var_b0
                        Botan::deallocate_memory(x0_54, (var_b0 - x0_54) s>> 2, 4)
                    
                    *entry_x8 = x19
                    result = operator new(0x20)
                    result[2] = 0
                    x8_6 = &_vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::(anonymous namespace)::CurveGFp_Montgomery*, std::__ndk1::default_delete<Botan::(anonymous namespace)::CurveGFp_Montgomery>, std::__ndk1::allocator<Botan::(anonymous namespace)::CurveGFp_Montgomery> >{for `std::__ndk1::__shared_weak_count'}
                else
                    struct Botan::CurveGFp_Repr::Botan::(anonymous namespace)::CurveGFp_P192::VTable
                        ** x0_26 = operator new(0x88)
                    x19 = x0_26
                    *x0_26 = &_vtable_for_Botan::(anonymous namespace)::CurveGFp_NIST{for `Botan::CurveGFp_Repr'}
                    x0_26[1] = 0
                    x0_26[2] = 0
                    x0_26[3] = 0
                    x0_26[5].d = 1
                    x0_26[4] = -1
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        &x0_26[1])
                    x19[1]->vFunc_0 = 1
                    void* x8_26 = x19[1]
                    int64_t x9_12 = x19[2]
                    x19[4] = -1
                    
                    if ((x9_12 - x8_26) s>> 2 u>= 2)
                        *(x8_26 + 4) = 0
                    
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                        &x19[6])
                    x19[9] = *(arg2 + 0x18)
                    x19[0xa].d = *(arg2 + 0x20)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(
                        &x19[0xb])
                    x19[0xe] = *(arg3 + 0x18)
                    int32_t x8_30 = *(arg3 + 0x20)
                    x19[0x10] = 0x11
                    *x19 = &_vtable_for_Botan::(anonymous namespace)::CurveGFp_P521{for `Botan::CurveGFp_Repr'}
                    *entry_x8 = x19
                    x19[0xf].d = x8_30
                    result = operator new(0x20)
                    result[2] = 0
                    x8_6 = &_vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::(anonymous namespace)::CurveGFp_P521*, std::__ndk1::default_delete<Botan::(anonymous namespace)::CurveGFp_P521>, std::__ndk1::allocator<Botan::(anonymous namespace)::CurveGFp_P521> >{for `std::__ndk1::__shared_weak_count'}
            else
                struct Botan::CurveGFp_Repr::Botan::(anonymous namespace)::CurveGFp_P192::VTable** 
                    x0_20 = operator new(0x88)
                x19 = x0_20
                *x0_20 = &_vtable_for_Botan::(anonymous namespace)::CurveGFp_NIST{for `Botan::CurveGFp_Repr'}
                x0_20[1] = 0
                x0_20[2] = 0
                x0_20[3] = 0
                x0_20[5].d = 1
                x0_20[4] = -1
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                    &x0_20[1])
                x19[1]->vFunc_0 = 1
                void* x8_20 = x19[1]
                int64_t x9_9 = x19[2]
                x19[4] = -1
                
                if ((x9_9 - x8_20) s>> 2 u>= 2)
                    *(x8_20 + 4) = 0
                
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x19[6])
                x19[9] = *(arg2 + 0x18)
                x19[0xa].d = *(arg2 + 0x20)
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x19[0xb])
                x19[0xe] = *(arg3 + 0x18)
                int32_t x8_24 = *(arg3 + 0x20)
                x19[0x10] = 0xc
                *x19 = &_vtable_for_Botan::(anonymous namespace)::CurveGFp_P384{for `Botan::CurveGFp_Repr'}
                *entry_x8 = x19
                x19[0xf].d = x8_24
                result = operator new(0x20)
                result[2] = 0
                x8_6 = &_vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::(anonymous namespace)::CurveGFp_P384*, std::__ndk1::default_delete<Botan::(anonymous namespace)::CurveGFp_P384>, std::__ndk1::allocator<Botan::(anonymous namespace)::CurveGFp_P384> >{for `std::__ndk1::__shared_weak_count'}
        else
            struct Botan::CurveGFp_Repr::Botan::(anonymous namespace)::CurveGFp_P192::VTable** 
                x0_14 = operator new(0x88)
            x19 = x0_14
            *x0_14 =
                &_vtable_for_Botan::(anonymous namespace)::CurveGFp_NIST{for `Botan::CurveGFp_Repr'}
            x0_14[1] = 0
            x0_14[2] = 0
            x0_14[3] = 0
            x0_14[5].d = 1
            x0_14[4] = -1
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&x0_14[1])
            x19[1]->vFunc_0 = 1
            void* x8_14 = x19[1]
            int64_t x9_6 = x19[2]
            x19[4] = -1
            
            if ((x9_6 - x8_14) s>> 2 u>= 2)
                *(x8_14 + 4) = 0
            
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x19[6])
            x19[9] = *(arg2 + 0x18)
            x19[0xa].d = *(arg2 + 0x20)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x19[0xb])
            x19[0xe] = *(arg3 + 0x18)
            int32_t x8_18 = *(arg3 + 0x20)
            x19[0x10] = 8
            *x19 =
                &_vtable_for_Botan::(anonymous namespace)::CurveGFp_P256{for `Botan::CurveGFp_Repr'}
            *entry_x8 = x19
            x19[0xf].d = x8_18
            result = operator new(0x20)
            result[2] = 0
            x8_6 = &_vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::(anonymous namespace)::CurveGFp_P256*, std::__ndk1::default_delete<Botan::(anonymous namespace)::CurveGFp_P256>, std::__ndk1::allocator<Botan::(anonymous namespace)::CurveGFp_P256> >{for `std::__ndk1::__shared_weak_count'}
    else
        struct Botan::CurveGFp_Repr::Botan::(anonymous namespace)::CurveGFp_P192::VTable** x0_8 =
            operator new(0x88)
        x19 = x0_8
        *x0_8 = &_vtable_for_Botan::(anonymous namespace)::CurveGFp_NIST{for `Botan::CurveGFp_Repr'}
        x0_8[1] = 0
        x0_8[2] = 0
        x0_8[3] = 0
        x0_8[5].d = 1
        x0_8[4] = -1
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&x0_8[1])
        x19[1]->vFunc_0 = 1
        void* x8_8 = x19[1]
        int64_t x9_3 = x19[2]
        x19[4] = -1
        
        if ((x9_3 - x8_8) s>> 2 u>= 2)
            *(x8_8 + 4) = 0
        
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x19[6])
        x19[9] = *(arg2 + 0x18)
        x19[0xa].d = *(arg2 + 0x20)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x19[0xb])
        x19[0xe] = *(arg3 + 0x18)
        int32_t x8_12 = *(arg3 + 0x20)
        x19[0x10] = 7
        *x19 = &_vtable_for_Botan::(anonymous namespace)::CurveGFp_P224{for `Botan::CurveGFp_Repr'}
        *entry_x8 = x19
        x19[0xf].d = x8_12
        result = operator new(0x20)
        result[2] = 0
        x8_6 = &_vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::(anonymous namespace)::CurveGFp_P224*, std::__ndk1::default_delete<Botan::(anonymous namespace)::CurveGFp_P224>, std::__ndk1::allocator<Botan::(anonymous namespace)::CurveGFp_P224> >{for `std::__ndk1::__shared_weak_count'}
else
    struct Botan::CurveGFp_Repr::Botan::(anonymous namespace)::CurveGFp_NIST::VTable** x0_2 =
        operator new(0x88)
    x19 = x0_2
    *x0_2 = &_vtable_for_Botan::(anonymous namespace)::CurveGFp_NIST{for `Botan::CurveGFp_Repr'}
    x0_2[1] = 0
    x0_2[2] = 0
    x0_2[3] = 0
    x0_2[5].d = 1
    x0_2[4] = -1
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&x0_2[1])
    x19[1]->vFunc_0 = 1
    void* x8_1 = x19[1]
    int64_t x9 = x19[2]
    x19[4] = -1
    
    if ((x9 - x8_1) s>> 2 u>= 2)
        *(x8_1 + 4) = 0
    
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x19[6])
    x19[9] = *(arg2 + 0x18)
    x19[0xa].d = *(arg2 + 0x20)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x19[0xb])
    x19[0xe] = *(arg3 + 0x18)
    int32_t x8_5 = *(arg3 + 0x20)
    x19[0x10] = 6
    *x19 = &_vtable_for_Botan::(anonymous namespace)::CurveGFp_P192{for `Botan::CurveGFp_Repr'}
    *entry_x8 = x19
    x19[0xf].d = x8_5
    result = operator new(0x20)
    x8_6 = &_vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::(anonymous namespace)::CurveGFp_P192*, std::__ndk1::default_delete<Botan::(anonymous namespace)::CurveGFp_P192>, std::__ndk1::allocator<Botan::(anonymous namespace)::CurveGFp_P192> >{for `std::__ndk1::__shared_weak_count'}
    result[2] = 0

result[3] = x19
entry_x8[1] = result
*result = x8_6
result[1] = 0
return result
