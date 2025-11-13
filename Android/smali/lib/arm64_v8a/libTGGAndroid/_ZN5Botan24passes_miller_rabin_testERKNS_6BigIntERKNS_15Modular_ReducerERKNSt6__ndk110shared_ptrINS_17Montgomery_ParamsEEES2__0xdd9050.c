// 函数: _ZN5Botan24passes_miller_rabin_testERKNS_6BigIntERKNS_15Modular_ReducerERKNSt6__ndk110shared_ptrINS_17Montgomery_ParamsEEES2_
// 地址: 0xdd9050
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x20) != 0)
    int64_t i_12 = *(arg1 + 0x18)
    
    if (i_12 != -1)
        if (i_12 u<= 1)
            goto label_dd9114
        
    label_dd9164:
        uint32_t var_b0 = 1
        Botan::BigInt::add2(arg1, &var_b0, 1, 0)
        void* var_88
        void* x10_6 = var_88
        int64_t var_80
        void* x13_4 = var_80 - x10_6
        int32_t x8_1
        int64_t x9_4
        
        if (var_80 == x10_6)
            x8_1 = 0
            x9_4 = 0
        else
            void* x15_1
            
            x15_1 = x13_4 s>= 0 ? x13_4 : -ffffffffffffffff
            
            void* x14_1 = x10_6 - var_80
            void* x15_2
            
            x15_2 = x15_1 s< 1 ? x15_1 : 1
            
            void* x13_5
            
            x13_5 = x14_1 s> x13_4 ? x14_1 : x13_4
            
            x9_4 = 0
            int64_t i = 0
            x8_1 = 0
            
            do
                int32_t x14_2
                
                if (x13_4 s>> 2 u> i)
                    x14_2 = *(x10_6 + (i << 2))
                else
                    x14_2 = 0
                
                int32_t x16_4 = ((x14_2 & 0xffff) - 1) u>> 0x1b & 0x10
                int32_t x15_4 = (x14_2 - 1) & not.d(x14_2)
                uint32_t x14_3 = x14_2 u>> x16_4
                int32_t x17_4 = ((x14_3 & 0xff) - 1) u>> 0x1c & 8
                uint32_t x14_4 = x14_3 u>> x17_4
                int32_t x17_8 = ((x14_4 & 0xf) - 1) u>> 0x1d & 4
                uint32_t x14_5 = x14_4 u>> x17_8
                int32_t x17_12 = ((x14_5 & 3) - 1) u>> 0x1e & 2
                i += 1
                x9_4 += zx.q(((x16_4 & 0xfffffffe) | (x15_4 & 0x80000000) u>> 0x1f | x17_4 | x17_8
                    | x17_12) + (((x14_5 u>> x17_12 & 1) - 1) u>> 0x1f)) & zx.q(not.d(x8_1))
                x8_1 |= not.d(x15_4 s>> 0x1f)
            while (x15_2 * (x13_5 u>> 2) != i)
        
        uint64_t x21 = zx.q(x9_4.d) & zx.q(x8_1)
        Botan::operator>>(&var_88, x21)
        Botan::BigInt::bits()
        void* x27 = *arg3
        int64_t* x23_2 = *(arg3 + 8)
        
        if (x23_2 != 0)
            int32_t i_1
            
            do
                i_1 = __stxr(__ldxr(&x23_2[1]) + 1, &x23_2[1])
            while (i_1 != 0)
        
        int64_t* x0_4 = operator new(0x50)
        x0_4[2] = 0
        x0_4[1] = 0
        *x0_4 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Exponentation_State const, std::__ndk1::allocator<Botan::Montgomery_Exponentation_State const> >
            + 0x10
        void* var_e0 = x27
        
        if (x23_2 != 0)
            int32_t i_2
            
            do
                i_2 = __stxr(__ldxr(&x23_2[1]) + 1, &x23_2[1])
            while (i_2 != 0)
        
        Botan::Montgomery_Exponentation_State::Montgomery_Exponentation_State(&x0_4[3], &var_e0, 
            arg4, true)
        
        if (x23_2 != 0)
            int64_t x8_5
            int32_t i_3
            
            do
                x8_5 = __ldaxr(&x23_2[1])
                i_3 = __stlxr(x8_5 - 1, &x23_2[1])
            while (i_3 != 0)
            
            if (x8_5 == 0)
                (*(*x23_2 + 0x10))(x23_2)
                std::__ndk1::__shared_weak_count::__release_weak()
            
            int64_t x8_8
            int32_t i_4
            
            do
                x8_8 = __ldaxr(&x23_2[1])
                i_4 = __stlxr(x8_8 - 1, &x23_2[1])
            while (i_4 != 0)
            
            if (x8_8 == 0)
                (*(*x23_2 + 0x10))(x23_2)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        Botan::Montgomery_Exponentation_State::exponentiation(&x0_4[3], &var_b0)
        int64_t i_18
        int32_t var_c0
        
        if (var_c0 != 0)
            int64_t i_13 = i_18
            
            if (i_13 == -1)
                void* x9_11 = var_e0
                void* x10_11 = x23_2 - x9_11
                
                if (x23_2 == x9_11)
                    i_13 = 0
                    i_18 = 0
                    
                    if (i_13 == 0)
                        goto label_dd9464
                else
                    void* x12_11
                    
                    x12_11 = x10_11 s>= 0 ? x10_11 : -ffffffffffffffff
                    
                    void* x11_8 = x9_11 - x23_2
                    void* x12_12
                    
                    x12_12 = x12_11 s< 1 ? x12_11 : 1
                    
                    i_13 = x10_11 s>> 2
                    void* x10_12
                    
                    x10_12 = x11_8 s> x10_11 ? x11_8 : x10_11
                    
                    int64_t i_16 = x12_12 * (x10_12 u>> 2)
                    uint64_t x11_9 = 1
                    int64_t i_5
                    
                    do
                        int32_t x12_13 = *(x9_11 - 4 + (i_16 << 2))
                        i_5 = i_16
                        i_16 -= 1
                        x11_9 = zx.q(x11_9.d) & zx.q(((x12_13 - 1) & not.d(x12_13)) s>> 0x1f)
                        i_13 -= x11_9
                    while (i_5 != 1)
                    i_18 = i_13
                    
                    if (i_13 u> 1 || i_13 == 0)
                        goto label_dd9464
            else if (i_13 u> 1 || i_13 == 0)
                goto label_dd9464
            
            void* x9_13 = var_e0
            int32_t x10_14 = 0
            int64_t i_6
            
            do
                int32_t x11_10 = *x9_13
                x9_13 += 4
                i_6 = i_13
                i_13 -= 1
                int32_t x11_12 = (((x11_10 ^ 1) - 1) & not.d(x11_10)) s>> 0x1f
                x10_14 = (x10_14 & x11_12)
                    | ((((x11_10 - 1) & not.d(x11_10)) s>> 0x1f | 1) & not.d(x11_12))
            while (i_6 != 1)
            
            if (x10_14 == 0)
                goto label_dd946c
            
            goto label_dd9464
        
    label_dd9464:
        int32_t x19_2
        void* var_d8_1
        int64_t var_d0
        void* x0_13
        
        if ((Botan::BigInt::is_equal(&var_e0) & 1) == 0)
            if (x21.d != 1)
                int64_t x22_3 = 1
                
                do
                    int128_t v0_1
                    int128_t v1_1
                    v0_1, v1_1 = Botan::Modular_Reducer::square(arg2)
                    v1_1 = var_e0.o
                    int64_t x9_14 = var_d0
                    int64_t i_20 = i_18
                    int64_t var_100
                    var_d0 = var_100
                    int64_t i_19
                    i_18 = i_19
                    int32_t var_f0
                    int32_t x8_13 = var_f0
                    int32_t x10_17 = var_c0
                    uint64_t x0_15 = v1_1.q
                    var_100 = x9_14
                    i_19 = i_20
                    int128_t var_110
                    var_e0.o = var_110
                    var_110 = v1_1
                    var_c0 = x8_13
                    var_f0 = x10_17
                    
                    if (x0_15 != 0)
                        var_110:8.q = x0_15
                        Botan::deallocate_memory(x0_15, (x9_14 - x0_15) s>> 2, 4)
                        x8_13 = var_c0
                    
                    if (x8_13 != 0)
                        int64_t i_14 = i_18
                        
                        if (i_14 == -1)
                            void* x9_15 = var_e0
                            void* x10_18 = x23_2 - x9_15
                            
                            if (x23_2 == x9_15)
                                i_14 = 0
                                i_18 = 0
                            label_dd957c:
                                
                                if (i_14 != 0)
                                    void* x9_17 = var_e0
                                    int32_t x10_21 = 0
                                    int64_t i_7
                                    
                                    do
                                        int32_t x11_16 = *x9_17
                                        x9_17 += 4
                                        i_7 = i_14
                                        i_14 -= 1
                                        int32_t x11_18 =
                                            (((x11_16 ^ 1) - 1) & not.d(x11_16)) s>> 0x1f
                                        x10_21 = (x10_21 & x11_18) | ((
                                            ((x11_16 - 1) & not.d(x11_16)) s>> 0x1f | 1)
                                            & not.d(x11_18))
                                    while (i_7 != 1)
                                    
                                    if (x10_21 == 0)
                                        break
                            else
                                void* x12_20
                                
                                x12_20 = x10_18 s>= 0 ? x10_18 : -ffffffffffffffff
                                
                                void* x11_14 = x9_15 - x23_2
                                void* x12_21
                                
                                x12_21 = x12_20 s< 1 ? x12_20 : 1
                                
                                i_14 = x10_18 s>> 2
                                void* x10_19
                                
                                x10_19 = x11_14 s> x10_18 ? x11_14 : x10_18
                                
                                int64_t i_17 = x12_21 * (x10_19 u>> 2)
                                uint64_t x11_15 = 1
                                int64_t i_8
                                
                                do
                                    int32_t x12_22 = *(x9_15 - 4 + (i_17 << 2))
                                    i_8 = i_17
                                    i_17 -= 1
                                    x11_15 = zx.q(x11_15.d)
                                        & zx.q(((x12_22 - 1) & not.d(x12_22)) s>> 0x1f)
                                    i_14 -= x11_15
                                while (i_8 != 1)
                                i_18 = i_14
                                
                                if (i_14 u<= 1)
                                    goto label_dd957c
                        else if (i_14 u<= 1)
                            goto label_dd957c
                    
                    if ((Botan::BigInt::is_equal(&var_e0) & 1) != 0)
                        goto label_dd946c
                    
                    x22_3 += 1
                while (x22_3 != x21)
            
            x19_2 = 0
            x0_13 = var_e0
            
            if (x0_13 != 0)
                var_d8_1 = x0_13
                Botan::deallocate_memory(x0_13, (var_d0 - x0_13) s>> 2, 4)
        else
        label_dd946c:
            x19_2 = 1
            x0_13 = var_e0
            
            if (x0_13 != 0)
                var_d8_1 = x0_13
                Botan::deallocate_memory(x0_13, (var_d0 - x0_13) s>> 2, 4)
        int64_t x8_17
        int32_t i_9
        
        do
            x8_17 = __ldaxr(&x0_4[1])
            i_9 = __stlxr(x8_17 - 1, &x0_4[1])
        while (i_9 != 0)
        void* var_a8_1
        int64_t var_a0
        void* x0_18
        
        if (x8_17 == 0)
            (*(*x0_4 + 0x10))(x0_4)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_18 = var_b0.q
            
            if (x0_18 != 0)
                var_a8_1 = x0_18
                Botan::deallocate_memory(x0_18, (var_a0 - x0_18) s>> 2, 4)
        else
            x0_18 = var_b0.q
            
            if (x0_18 != 0)
                var_a8_1 = x0_18
                Botan::deallocate_memory(x0_18, (var_a0 - x0_18) s>> 2, 4)
        void* x0_21 = var_88
        
        if (x0_21 != 0)
            void* var_80_1 = x0_21
            int64_t var_78
            Botan::deallocate_memory(x0_21, (var_78 - x0_21) s>> 2, 4)
        
        return zx.q(x19_2)
    
    int64_t x9_1 = *arg1
    int64_t x11_1 = *(arg1 + 8)
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        i_12 = 0
        *(arg1 + 0x18) = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        i_12 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_15 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i_10
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_15 << 2))
            i_10 = i_15
            i_15 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            i_12 -= x11_3
        while (i_10 != 1)
        *(arg1 + 0x18) = i_12
        
        if (i_12 u> 1)
            goto label_dd9164
    
label_dd9114:
    
    if (i_12 != 0)
        int32_t* x9_3 = *arg1
        int32_t x10_4 = 0
        int64_t i_11
        
        do
            int32_t x11_4 = *x9_3
            x9_3 = &x9_3[1]
            i_11 = i_12
            i_12 -= 1
            int32_t x11_6 = (((x11_4 ^ 1) - 1) & not.d(x11_4)) s>> 0x1f
            x10_4 = (x10_4 & x11_6) | ((((x11_4 - 1) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
        while (i_11 != 1)
        
        if (x10_4 s> 0)
            goto label_dd9164

sub_c776cc(Botan::assertion_failure("n > 1", &data_793a18, "passes_miller_rabin_test", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xed02))
noreturn
