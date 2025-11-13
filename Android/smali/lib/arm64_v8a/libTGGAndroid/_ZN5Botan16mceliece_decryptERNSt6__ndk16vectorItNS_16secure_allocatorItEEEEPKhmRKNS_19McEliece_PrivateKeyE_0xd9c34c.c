// 函数: _ZN5Botan16mceliece_decryptERNSt6__ndk16vectorItNS_16secure_allocatorItEEEEPKhmRKNS_19McEliece_PrivateKeyE
// 地址: 0xd9c34c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = *(arg4 + 8)
int64_t x21 = *(arg4 + 0x68)
int64_t x28 = *(arg4 + 0x70)
int64_t x10 = *(x8 + 8)
int64_t x9_1 = *(x8 + 0x10) - x10
uint32_t x11 = (x9_1 u>> 1).d
int64_t x9_2 = (x9_1 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t fp = (x11 & x11 s>> 0x1f) - 1
int128_t var_c0
int64_t* x20
int64_t x22
int128_t* x27

while (true)
    int64_t x11_2 = x9_2 - 1
    
    if (x9_2 s< 1)
        x27 = &var_c0
        *x8 = fp
        void* x8_2 = *(arg4 + 8)
        x22 = *(x8_2 + 0x20)
        x20 = *(x8_2 + 0x28)
        
        if (x20 == 0)
            break
    else
        uint32_t x12_1 = zx.d(*(x10 - 2 + (x9_2 << 1)))
        x9_2 = x11_2
        
        if (x12_1 == 0)
            continue
        else
            x27 = &var_c0
            fp = x11_2.d
            *x8 = fp
            void* x8_1 = *(arg4 + 8)
            x22 = *(x8_1 + 0x20)
            x20 = *(x8_1 + 0x28)
            
            if (x20 == 0)
                break
    
    int32_t i
    
    do
        i = __stxr(__ldxr(&x20[1]) + 1, &x20[1])
    while (i != 0)
    break

int32_t var_1e8 = 0xffffffff
int64_t var_1e0
__builtin_memset(&var_1e0, 0, 0x18)
int16_t* result_4 = Botan::allocate_memory(1, 2)
*result_4 = 0
int16_t* result_1 = result_4
void* var_1d0 = &result_4[1]
int64_t* var_1c0 = x20

if (x20 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(&x20[1]) + 1, &x20[1])
    while (i_1 != 0)
    int64_t x9_7
    int32_t i_2
    
    do
        x9_7 = __ldaxr(&x20[1])
        i_2 = __stlxr(x9_7 - 1, &x20[1])
    while (i_2 != 0)
    
    if (x9_7 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t x8_8 = *(arg4 + 0xa0)

if (arg3 == (x8_8 + 7) u>> 3)
    uint64_t x9_10
    
    if ((x8_8 & 0xffffffff80000000) != 0)
        x9_10 = 0x40
    else if (x8_8 u< 2)
        x9_10 = 0
    else
        int32_t x9_9 = 0
        int64_t x10_5 = 1
        
        do
            x10_5 <<= 1
            x9_9 += 1
        while (x10_5 u< x8_8)
        
        x9_10 = zx.q(x9_9.b)
    
    int64_t x8_10 = x8_8 - *(arg4 + 0x98) * x9_10 + 7
    uint64_t x9_11 = x8_10 u>> 3
    
    if (x9_11 != ((x28 - 1) u>> 3) + 1)
        void** x0_61 = __cxa_allocate_exception(0x20)
        int64_t x0_62
        int128_t v0_6
        x0_62, v0_6 = operator new(0x40)
        int64_t var_b0_2 = x0_62
        var_c0 = data_71b3f0
        __builtin_strncpy(x0_62, "mce-decryption: wrong length of cleartext buffer", 0x31)
        *x0_61 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_61[1])
        *x0_61 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_61, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    uint64_t x22_1 = (x21 - 1) u>> 5
    int32_t* x0_3 = Botan::allocate_memory(x22_1 + 1, 4)
    int64_t x2 = (x22_1 + 1) << 2
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    v0_1, v1_1, v2_1, v3_1 = memset(x0_3, 0, x2)
    int64_t var_200_1
    __builtin_memset(&var_200_1, 0, 0x18)
    int64_t x27_1 = *(arg4 + 0x50)
    int64_t x8_13 = *(arg4 + 0x58)
    uint64_t x23_1 = x8_13 - x27_1
    void* x21_1
    
    if (x8_13 != x27_1)
        if ((x23_1 & 0xffffffff80000000) != 0)
            goto label_d9d348
        
        void* x0_5 = operator new(x23_1)
        x21_1 = x0_5
        void* var_200_2 = x0_5
        void* var_1f0_1 = x0_5 + (x23_1 s>> 2 << 2)
        v0_1, v1_1, v2_1, v3_1 = memcpy(x0_5, x27_1, x23_1)
        void* var_1f8_1 = x21_1 + x23_1
        goto label_d9c568
    
    x21_1 = nullptr
label_d9c568:
    int64_t x8_17 = *(arg4 + 0xa0)
    
    if (x8_17 != 0 && x2 != 0)
        int64_t x9_15 = 0
        int64_t x10_7 = 0
        int64_t i_22 = (x22_1 + 1) & 0xffffffffffffff8
        void* x12_2 = x21_1 + 0x10
        
        do
            if ((zx.d(arg2[x10_7 u>> 3]) u>> (x10_7.d & 7) & 1) != 0)
                int64_t i_23
                
                if (x21 - 1 u>= 0xe0)
                    int64_t i_20 = i_22
                    void* x17_2 = &x0_3[4]
                    void* x0_6 = x12_2
                    int32_t i_3
                    
                    do
                        v0_1 = *(x0_6 - 0x10)
                        v1_1 = *x0_6
                        x0_6 += 0x20
                        i_3 = i_20
                        i_20 -= 8
                        v1_1 ^= *x17_2
                        *(x17_2 - 0x10) ^= v0_1
                        *x17_2 = v1_1
                        x17_2 += 0x20
                    while (i_3 != 8)
                    i_23 = i_22
                    
                    if (x22_1 + 1 != i_22)
                        goto label_d9c618
                else
                    i_23 = 0
                label_d9c618:
                    int64_t i_21 = neg.q(((x22_1 << 2) + 4) u>> 2) + i_23
                    int32_t* x17_3 = &x0_3[i_23]
                    int32_t* x0_8 = x21_1 + ((i_23 + x9_15) << 2)
                    int64_t i_4
                    
                    do
                        int32_t x1_1 = *x0_8
                        x0_8 = &x0_8[1]
                        i_4 = i_21
                        i_21 += 1
                        *x17_3 ^= x1_1
                        x17_3 = &x17_3[1]
                    while (i_4 u< -1)
            
            x10_7 += 1
            x12_2 += (x22_1 << 2) + 4
            x9_15 += x22_1 + 1
        while (x10_7 != x8_17)
    
    if (x21_1 != 0)
        void* var_1f8_2 = x21_1
        operator delete(x21_1)
    
    uint64_t x22_2 = (x21 - 1) u>> 3
    void* x0_11 = Botan::allocate_memory(x22_2 + 1, 1)
    memset(x0_11, 0, x22_2 + 1)
    int64_t i_5
    
    if (x22_2 == 0)
        i_5 = 0
    label_d9c6cc:
        int32_t x9_17 = i_5.d << 3
        
        do
            int32_t x11_9 = x9_17 & 0x18
            x9_17 += 8
            *(x0_11 + i_5) = (*(x0_3 + (i_5 & 0xfffffffffffffffc)) u>> x11_9).b
            i_5 += 1
        while (x22_2 + 1 != i_5)
    else
        int32_t x9_16 = 0
        int64_t x10_8 = 0
        i_5 = (x22_2 + 1) & 0x3ffffffffffffffe
        
        do
            int32_t x11_7 = *(x0_3 + (x10_8 & 0xfffffffffffffffc))
            int32_t x12_3 = x9_16 & 0x10
            void* x13_3 = x0_11 + x10_8
            x10_8 += 2
            x9_16 += 0x10
            *x13_3 = (x11_7 u>> x12_3).b
            *(x13_3 + 1) = (x11_7 u>> (x12_3 | 8)).b
        while (i_5 != x10_8)
        
        if (x22_2 + 1 != i_5)
            goto label_d9c6cc
    void* x8_18 = *(arg4 + 8)
    int64_t* x23_2 = *(x8_18 + 0x28)
    int64_t var_210_1 = *(x8_18 + 0x20)
    
    if (x23_2 != 0)
        int32_t i_6
        
        do
            i_6 = __stxr(__ldxr(&x23_2[1]) + 1, &x23_2[1])
        while (i_6 != 0)
    
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    v0_2, v1_2, v2_2 = Botan::polyn_gf2m::polyn_gf2m(&var_c0, zx.q(fp - 1), x0_11, x22_2 + 1)
    int32_t x8_20 = var_1e8
    var_1e8 = var_c0.d
    int64_t* x23_3 = var_1c0
    var_c0.d = x8_20
    int128_t var_a8
    v1_2 = var_a8
    var_a8:8.q = x22
    int64_t* var_98_1 = x23_3
    v2_2 = var_c0
    int64_t* var_98
    var_1c0 = var_98
    var_c0 = result_1.o
    var_a8.q = var_1d0
    result_1.o = v2_2
    var_1d0.o = v1_2
    int64_t x9_23
    
    if (x23_3 != 0)
        int32_t i_7
        
        do
            x9_23 = __ldaxr(&x23_3[1])
            i_7 = __stlxr(x9_23 - 1, &x23_3[1])
        while (i_7 != 0)
    
    void* var_b0
    void* x0_13
    
    if (x23_3 != 0 && x9_23 == 0)
        (*(*x23_3 + 0x10))(x23_3)
        std::__ndk1::__shared_weak_count::__release_weak()
        x0_13 = var_c0:8.q
        
        if (x0_13 != 0)
            var_b0 = x0_13
            Botan::deallocate_memory(x0_13, (var_a8.q - x0_13) s>> 1, 2)
    else
        x0_13 = var_c0:8.q
        
        if (x0_13 != 0)
            var_b0 = x0_13
            Botan::deallocate_memory(x0_13, (var_a8.q - x0_13) s>> 1, 2)
    int32_t x25_2 = x28.d & 7
    
    if (x23_2 != 0)
        int64_t x9_24
        int32_t i_8
        
        do
            x9_24 = __ldaxr(&x23_2[1])
            i_8 = __stlxr(x9_24 - 1, &x23_2[1])
        while (i_8 != 0)
        
        if (x9_24 == 0)
            (*(*x23_2 + 0x10))(x23_2)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    void* x8_29 = &result_4[1] - result_1
    uint32_t x11_12 = (x8_29 u>> 1).d
    int64_t x9_26 = (x8_29 & 0x1fffffffe) << 0x1f s>> 0x20
    int32_t x8_31 = (x11_12 & x11_12 s>> 0x1f) - 1
    
    while (true)
        int64_t x11_13 = x9_26 - 1
        
        if (x9_26 s< 1)
            break
        
        uint32_t x12_5 = zx.d(*(result_1 - 2 + (x9_26 << 1)))
        x9_26 = x11_13
        
        if (x12_5 != 0)
            x8_31 = x11_13.d
            break
    
    var_1e8 = x8_31
    x27 = *(arg4 + 8)
    int64_t x11_14 = *(x27 + 8)
    int64_t x28_1 = (*(arg4 + 0x40) - *(arg4 + 0x38)) s>> 1
    int64_t x8_34 = x27[1].q - x11_14
    uint32_t x9_28 = (x8_34 u>> 1).d
    int64_t x8_35 = (x8_34 & 0x1fffffffe) << 0x1f s>> 0x20
    int32_t fp_1 = (x9_28 & x9_28 s>> 0x1f) - 1
    
    while (true)
        int64_t x10_19 = x8_35 - 1
        
        if (x8_35 s< 1)
            break
        
        uint32_t x11_15 = zx.d(*(x11_14 - 2 + (x8_35 << 1)))
        x8_35 = x10_19
        
        if (x11_15 != 0)
            fp_1 = x10_19.d
            break
    
    int32_t* x25_3 = x27[2].q
    int64_t* x23_5 = *(x27 + 0x28)
    *x27 = fp_1
    
    if (x23_5 != 0)
        int32_t i_9
        
        do
            i_9 = __stxr(__ldxr(&x23_5[1]) + 1, &x23_5[1])
        while (i_9 != 0)
    
    Botan::polyn_gf2m::eea_with_coefficients(&var_1e8, x27, 1)
    int64_t* x0_17 = *(x25_3 + 0x10)
    int64_t x9_33 = *x0_17
    int16_t* var_88
    uint64_t x11_16 = zx.q(*var_88)
    int64_t x10_22 = (x0_17[1] - x9_33) s>> 1
    
    if (x10_22 u<= x11_16)
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    label_d9d2ec:
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    label_d9d2f0:
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    label_d9d318:
        Botan::assertion_failure("u_deg >= 0", "Valid degree", "goppa_decode", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xba95)
    label_d9d340:
        Botan::assertion_failure("v_deg >= 0", "Valid degree", "goppa_decode", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xba9c)
    label_d9d348:
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_d9d350:
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_d9d378:
        int64_t* x0_66 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        
        if ((zx.d(var_c0.b) & 1) != 0)
            operator delete(var_b0)
        
        if (var_1c0 != 0)
            int64_t x9_64
            int32_t i_10
            
            do
                x9_64 = __ldaxr(&var_1c0[1])
                i_10 = __stlxr(x9_64 - 1, &var_1c0[1])
            while (i_10 != 0)
            
            if (x9_64 == 0)
                (*(*var_1c0 + 0x10))(var_1c0)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        if (result_1 != 0)
            int16_t* result_3 = result_1
            Botan::deallocate_memory(result_1, (var_1d0 - result_1) s>> 1, 2)
        
        sub_1101e04(x0_66)
        noreturn
    
    int64_t* x8_39 = *(x25_3 + 0x18)
    int64_t x11_17 = *x8_39
    uint64_t x12_8 = zx.q(x25_3[2].w - *(x9_33 + (x11_16 << 1)))
    
    if (x12_8 u>= (x8_39[1] - x11_17) s>> 1)
        goto label_d9d2ec
    
    uint64_t x8_40 = zx.q(*(x11_17 + (x12_8 << 1)))
    
    if (x10_22 u<= x8_40)
        goto label_d9d2f0
    
    uint64_t x8_41 = zx.q(*(x9_33 + (x8_40 << 1)))
    int64_t x9_34 = 0
    int64_t* x23_6
    
    while (true)
        void* x10_23 = var_c0:8.q
        void* x11_20 = var_b0 - x10_23
        uint32_t x13_6 = (x11_20 u>> 1).d
        int64_t x12_9 = (x11_20 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x11_22 = (x13_6 & x13_6 s>> 0x1f) - 1
        
        while (true)
            int64_t x14_4 = x12_9 - 1
            
            if (x12_9 s< 1)
                break
            
            uint32_t x15_2 = zx.d(*(x10_23 - 2 + (x12_9 << 1)))
            x12_9 = x14_4
            
            if (x15_2 != 0)
                x11_22 = x14_4.d
                break
        
        var_c0.d = x11_22
        
        if (x9_34 s> sx.q(x11_22))
            *(x10_23 + 2) ^= 1
            x23_6 = *(x27 + 0x28)
            int64_t var_100_1 = x27[2].q
            int64_t* var_f8_1 = x23_6
            break
        
        uint64_t x11_18 = zx.q(*(x10_23 + (x9_34 << 1)))
        
        if (x11_18 != 0)
            int64_t* x0_18 = *(x25_3 + 0x10)
            int64_t x12_10 = *x0_18
            
            if (x11_18 u>= (x0_18[1] - x12_10) s>> 1)
            label_d9d1c0:
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
            label_d9d1c4:
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
            label_d9d1c8:
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                goto label_d9d1cc
            
            int64_t* x0_19 = *(x25_3 + 0x18)
            uint64_t x14_5 = zx.q(*(x12_10 + (x11_18 << 1))) + x8_41
            int64_t x11_24 = *x0_19
            uint64_t x12_14 = zx.q((x14_5 u>> zx.q(*x25_3)).w + (x14_5.w & x25_3[2].w))
            
            if (x12_14 u>= (x0_19[1] - x11_24) s>> 1)
                goto label_d9d1c4
            
            x11_18 = zx.q(*(x11_24 + (x12_14 << 1)))
        
        *(x10_23 + (x9_34 << 1)) = (x11_18.d).w
        x9_34 += 1
    
    if (x23_6 != 0)
        int32_t i_11
        
        do
            i_11 = __stxr(__ldxr(&x23_6[1]) + 1, &x23_6[1])
        while (i_11 != 0)
    
    int32_t var_f0
    Botan::polyn_gf2m::polyn_gf2m(&var_f0, zx.q(fp_1 - 1))
    int64_t x9_37
    
    if (x23_6 != 0)
        int32_t i_12
        
        do
            x9_37 = __ldaxr(&x23_6[1])
            i_12 = __stlxr(x9_37 - 1, &x23_6[1])
        while (i_12 != 0)
    
    int16_t* var_e8
    
    if (x23_6 != 0 && x9_37 == 0)
        (*(*x23_6 + 0x10))(x23_6)
        std::__ndk1::__shared_weak_count::__release_weak()
        
        if (fp_1 == 0)
            goto label_d9cb90
    else if (fp_1 == 0)
    label_d9cb90:
        int64_t var_e0
        void* x8_53 = var_e0 - var_e8
        uint32_t x11_26 = (x8_53 u>> 1).d
        int64_t x9_39 = (x8_53 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x8_55 = (x11_26 & x11_26 s>> 0x1f) - 1
        
        while (true)
            int64_t x11_27 = x9_39 - 1
            
            if (x9_39 s< 1)
                break
            
            uint32_t x12_20 = zx.d(*(var_e8 - 2 + (x9_39 << 1)))
            x9_39 = x11_27
            
            if (x12_20 != 0)
                x8_55 = x11_27.d
                break
        
        var_f0 = x8_55
        Botan::polyn_gf2m::eea_with_coefficients(&var_f0, x27, (fp_1 u>> 1) + 1)
        int64_t* x23_7 = *(x27 + 0x28)
        int64_t var_1a0_1 = x27[2].q
        int64_t* var_198_1 = x23_7
        
        if (x23_7 != 0)
            int32_t i_13
            
            do
                i_13 = __stxr(__ldxr(&x23_7[1]) + 1, &x23_7[1])
            while (i_13 != 0)
        
        Botan::polyn_gf2m var_190
        Botan::polyn_gf2m::polyn_gf2m(&var_190, zx.q(fp_1))
        
        if (x23_7 != 0)
            int64_t x9_42
            int32_t i_14
            
            do
                x9_42 = __ldaxr(&x23_7[1])
                i_14 = __stlxr(x9_42 - 1, &x23_7[1])
            while (i_14 != 0)
            
            if (x9_42 == 0)
                (*(*x23_7 + 0x10))(x23_7)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        void* var_128
        int64_t var_120
        void* x8_63 = var_120 - var_128
        uint32_t x9_43 = (x8_63 u>> 1).d
        int64_t x8_64 = (x8_63 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x9_45 = (x9_43 & x9_43 s>> 0x1f) - 1
        
        while (true)
            int64_t x11_29 = x8_64 - 1
            
            if (x8_64 s< 1)
                break
            
            uint32_t x12_21 = zx.d(*(var_128 + (x8_64 << 1) - 2))
            x8_64 = x11_29
            
            if (x12_21 != 0)
                x9_45 = x11_29.d
                break
        
        int32_t var_130_1 = x9_45
        
        if ((x9_45 & 0x80000000) != 0)
            goto label_d9d318
        
        int64_t x8_66 = 0
        int64_t x9_47 = zx.q(x9_45 + 1) - 1
        uint64_t x10_32 = zx.q(*var_128)
        
        if (x10_32 != 0)
            goto label_d9cca8
        
        while (true)
            void* var_188
            *(var_188 + (x8_66 << 1)) = (x10_32.d).w
            
            if (x9_47 == 0)
                void* var_158
                int64_t var_150
                void* x8_68 = var_150 - var_158
                uint32_t x9_48 = (x8_68 u>> 1).d
                int64_t x8_69 = (x8_68 & 0x1fffffffe) << 0x1f s>> 0x20
                int32_t x9_50 = (x9_48 & x9_48 s>> 0x1f) - 1
                
                while (true)
                    int64_t x11_36 = x8_69 - 1
                    
                    if (x8_69 s< 1)
                        break
                    
                    uint32_t x12_27 = zx.d(*(var_158 + (x8_69 << 1) - 2))
                    x8_69 = x11_36
                    
                    if (x12_27 != 0)
                        x9_50 = x11_36.d
                        break
                
                int32_t var_160_1 = x9_50
                
                if ((x9_50 & 0x80000000) != 0)
                    break
                
                int64_t x8_71 = 0
                int64_t x9_52 = zx.q(x9_50 + 1) - 1
                uint64_t x10_37 = zx.q(*var_158)
                
                if (x10_37 != 0)
                    goto label_d9cd68
                
                while (true)
                    *(var_188 + (x8_71 << 1) + 2) = (x10_37.d).w
                    
                    if (x9_52 == 0)
                        Botan::find_roots_gf2m_decomp(&var_190, x28_1)
                        int64_t var_228_1
                        __builtin_memset(&var_228_1, 0, 0x18)
                        void* var_1b8
                        int64_t var_1b0
                        size_t fp_2 = var_1b0 - var_1b8
                        int64_t var_220_1
                        int64_t var_1a8
                        
                        if (var_1b0 != var_1b8)
                            if ((fp_2 & 0xffffffff80000000) != 0)
                                goto label_d9d350
                            
                            int64_t x23_8 = fp_2 s>> 1
                            int64_t x0_39 = Botan::allocate_memory(x23_8, 2)
                            var_228_1 = x0_39
                            int64_t var_218_1 = x0_39 + (x23_8 << 1)
                            memset(x0_39, 0, fp_2)
                            uint64_t x8_74 = 0
                            int32_t x9_53 = 1
                            var_220_1 = fp_2 + x0_39
                            
                            do
                                uint32_t x10_42 = zx.d(*(var_1b8 + (x8_74 << 1)))
                                uint32_t x10_43 = x10_42 ^ x10_42 u>> 8
                                uint32_t x10_44 = x10_43 ^ x10_43 u>> 4
                                uint32_t x10_45 = x10_44 ^ x10_44 u>> 2
                                uint64_t x10_46 = zx.q(x10_45) ^ zx.q(x10_45 u>> 1)
                                
                                if (x28_1 u<= x10_46)
                                    *(var_228_1 + (x8_74 << 1)) = x9_53.w - 1
                                
                                *(var_228_1 + (x8_74 << 1)) = *(*(arg4 + 0x38) + (x10_46 << 1))
                                x8_74 = zx.q(x9_53)
                                x9_53 += 1
                            while (x23_8 u> x8_74)
                            
                            Botan::deallocate_memory(var_1b8, (var_1a8 - var_1b8) s>> 1, 2)
                        else if (var_1b8 != 0)
                            Botan::deallocate_memory(var_1b8, (var_1a8 - var_1b8) s>> 1, 2)
                        int64_t* var_168
                        void* var_180_1
                        int64_t var_178
                        
                        if (var_168 == 0)
                        label_d9ceb8:
                            
                            if (var_188 != 0)
                                var_180_1 = var_188
                                Botan::deallocate_memory(var_188, (var_178 - var_188) s>> 1, 2)
                        else
                            int64_t x9_54
                            int32_t i_15
                            
                            do
                                x9_54 = __ldaxr(&var_168[1])
                                i_15 = __stlxr(x9_54 - 1, &var_168[1])
                            while (i_15 != 0)
                            
                            if (x9_54 != 0)
                                goto label_d9ceb8
                            
                            (*(*var_168 + 0x10))(var_168)
                            std::__ndk1::__shared_weak_count::__release_weak()
                            
                            if (var_188 != 0)
                                var_180_1 = var_188
                                Botan::deallocate_memory(var_188, (var_178 - var_188) s>> 1, 2)
                        std::__ndk1::pair<Botan::polyn_gf2m, Botan::polyn_gf2m>::~pair()
                        int64_t* var_c8
                        int16_t* var_e0_1
                        int64_t var_d8
                        
                        if (var_c8 == 0)
                        label_d9cf00:
                            
                            if (var_e8 != 0)
                                var_e0_1 = var_e8
                                Botan::deallocate_memory(var_e8, (var_d8 - var_e8) s>> 1, 2)
                        else
                            int64_t x9_55
                            int32_t i_16
                            
                            do
                                x9_55 = __ldaxr(&var_c8[1])
                                i_16 = __stlxr(x9_55 - 1, &var_c8[1])
                            while (i_16 != 0)
                            
                            if (x9_55 != 0)
                                goto label_d9cf00
                            
                            (*(*var_c8 + 0x10))(var_c8)
                            std::__ndk1::__shared_weak_count::__release_weak()
                            
                            if (var_e8 != 0)
                                var_e0_1 = var_e8
                                Botan::deallocate_memory(var_e8, (var_d8 - var_e8) s>> 1, 2)
                        std::__ndk1::pair<Botan::polyn_gf2m, Botan::polyn_gf2m>::~pair()
                        int64_t x9_56
                        
                        if (x23_5 != 0)
                            int32_t i_17
                            
                            do
                                x9_56 = __ldaxr(&x23_5[1])
                                i_17 = __stlxr(x9_56 - 1, &x23_5[1])
                            while (i_17 != 0)
                        
                        void* x0_43
                        
                        if (x23_5 != 0 && x9_56 == 0)
                            (*(*x23_5 + 0x10))(x23_5)
                            std::__ndk1::__shared_weak_count::__release_weak()
                            x0_43 = *arg1
                            
                            if (x0_43 != 0)
                                goto label_d9cf50
                        else
                            x0_43 = *arg1
                            
                            if (x0_43 != 0)
                            label_d9cf50:
                                int64_t x8_84 = *(arg1 + 0x10)
                                *(arg1 + 8) = x0_43
                                Botan::deallocate_memory(x0_43, (x8_84 - x0_43) s>> 1, 2)
                                __builtin_memset(arg1, 0, 0x18)
                        int64_t x22_5 = var_228_1
                        *arg1 = x22_5
                        int128_t v0_3 = var_220_1.o
                        int64_t* var_250_1
                        var_250_1.o = v0_3
                        *(arg1 + 8) = v0_3
                        int64_t* entry_x8
                        __builtin_memset(entry_x8, 0, 0x18)
                        uint64_t x10_50
                        int64_t x11_49
                        int64_t x26_1
                        
                        if (x9_11 != 0)
                            int64_t x0_45 = Botan::allocate_memory(x9_11, 1)
                            int64_t x23_11 = x0_45 + x9_11
                            x26_1 = x0_45
                            *entry_x8 = x0_45
                            entry_x8[2] = x23_11
                            memset(x0_45, 0, x9_11)
                            entry_x8[1] = x23_11
                            
                            if (arg2 != 0 && x26_1 != 0)
                                memcpy(x26_1, arg2, x9_11)
                                x10_50 = var_250_1
                                x11_49 = x10_50 - x22_5
                                
                                if (x11_49 != 0)
                                    goto label_d9d000
                                
                                goto label_d9d070
                            
                            break
                        
                        x26_1 = 0
                        x10_50 = var_250_1.o.q
                        x11_49 = x10_50 - x22_5
                        
                        if (x11_49 != 0)
                        label_d9d000:
                            int64_t x13_23
                            
                            x13_23 = x11_49 s>= 0 ? x11_49 : -1
                            
                            int64_t x12_35 = x22_5 - x10_50
                            int64_t x10_51 = *arg1
                            int64_t x13_24
                            
                            x13_24 = x13_23 s< 1 ? x13_23 : 1
                            
                            int64_t x11_50
                            
                            x11_50 = x12_35 s> x11_49 ? x12_35 : x11_49
                            
                            int64_t i_18 = 0
                            
                            do
                                uint64_t x13_25 = zx.q(*(x10_51 + (i_18 << 1)))
                                
                                if ((x8_10 & 0xfffffffffffffff8) u> x13_25)
                                    uint64_t x14_15 = x13_25 u>> 3
                                    *(x26_1 + x14_15) ^= (1 << (x13_25.d & 7)).b
                                
                                i_18 += 1
                            while (i_18 u< x13_24 * (x11_50 u>> 1))
                            
                            goto label_d9d070
                        
                    label_d9d070:
                        
                        if (x25_2 != 0)
                            void* x8_87 = x9_11 + x26_1
                            *(x8_87 - 1) &= (not.d(0xffffffff << x25_2)).b
                        
                        if (x0_11 != 0)
                            Botan::deallocate_memory(x0_11, x22_2 + 1, 1)
                        
                        if (x0_3 != 0)
                            Botan::deallocate_memory(x0_3, x2 s>> 2, 4)
                        
                        int16_t* result
                        int16_t* result_2
                        
                        if (var_1c0 == 0)
                        label_d9d0d4:
                            result = result_1
                            
                            if (result != 0)
                                result_2 = result
                                return Botan::deallocate_memory(result, (var_1d0 - result) s>> 1, 2)
                        else
                            int64_t x9_61
                            int32_t i_19
                            
                            do
                                x9_61 = __ldaxr(&var_1c0[1])
                                i_19 = __stlxr(x9_61 - 1, &var_1c0[1])
                            while (i_19 != 0)
                            
                            if (x9_61 != 0)
                                goto label_d9d0d4
                            
                            (*(*var_1c0 + 0x10))(var_1c0)
                            std::__ndk1::__shared_weak_count::__release_weak()
                            result = result_1
                            
                            if (result != 0)
                                result_2 = result
                                return Botan::deallocate_memory(result, (var_1d0 - result) s>> 1, 2)
                        return result
                    
                    x9_52 -= 1
                    x8_71 += 2
                    x10_37 = zx.q(*(var_158 + x8_71))
                    
                    if (x10_37 != 0)
                    label_d9cd68:
                        int64_t* x0_35 = *(x25_3 + 0x10)
                        int64_t x11_37 = *x0_35
                        
                        if (x10_37 u>= (x0_35[1] - x11_37) s>> 1)
                            goto label_d9d1bc
                        
                        int64_t* x0_36 = *(x25_3 + 0x18)
                        uint64_t x13_22 = zx.q(*(x11_37 + (x10_37 << 1))) << 1
                        int64_t x10_40 = *x0_36
                        uint64_t x11_41 =
                            zx.q((x13_22 u>> zx.q(*x25_3)).w + (x13_22.w & x25_3[2].w))
                        
                        if (x11_41 u>= (x0_36[1] - x10_40) s>> 1)
                            goto label_d9d1b8
                        
                        x10_37 = zx.q(*(x10_40 + (x11_41 << 1)))
                
                goto label_d9d378
            
            x9_47 -= 1
            x8_66 += 2
            x10_32 = zx.q(*(var_128 + x8_66))
            
            if (x10_32 != 0)
            label_d9cca8:
                int64_t* x0_33 = *(x25_3 + 0x10)
                int64_t x11_30 = *x0_33
                
                if (x10_32 u>= (x0_33[1] - x11_30) s>> 1)
                    goto label_d9d1b4
                
                int64_t* x0_34 = *(x25_3 + 0x18)
                uint64_t x13_21 = zx.q(*(x11_30 + (x10_32 << 1))) << 1
                int64_t x10_35 = *x0_34
                uint64_t x11_34 = zx.q((x13_21 u>> zx.q(*x25_3)).w + (x13_21.w & x25_3[2].w))
                
                if (x11_34 u>= (x0_34[1] - x10_35) s>> 1)
                    goto label_d9d1b0
                
                x10_32 = zx.q(*(x10_35 + (x11_34 << 1)))
        
        goto label_d9d340
    
    uint64_t x9_38 = zx.q(fp_1)
    int64_t x8_47 = 0
    
    while (true)
        uint64_t x12_18 = zx.q(*(var_c0:8.q + (x8_47 << 1)))
        uint64_t x14_7
        
        if (x12_18 != 0)
            int64_t* x0_21 = *(x25_3 + 0x10)
            int64_t x13_14 = *x0_21
            
            if (x12_18 u>= (x0_21[1] - x13_14) s>> 1)
                break
            
            int32_t x14_10 = *x25_3
            int64_t* x0_22 = *(x25_3 + 0x18)
            int64_t x12_19 = *x0_22
            uint32_t x13_16 = zx.d(*(x13_14 + (x12_18 << 1))) << (x14_10 - 1)
            uint64_t x13_19 = zx.q((x13_16 s>> x14_10).w + (x13_16.w & x25_3[2].w))
            
            if (x13_19 u>= (x0_22[1] - x12_19) s>> 1)
                goto label_d9d1c8
            
            uint64_t x12_15 = zx.q(*(x12_19 + (x13_19 << 1)))
            
            if ((x8_47.d & 1) == 0)
                x14_7 = (x8_47 u>> 1 & 0x7fffffff) << 1
                *(var_e8 + x14_7) ^= x12_15.w
            else if (x12_15.d != 0)
                int64_t x13_20 = 0
                
                while (true)
                    uint64_t x15_7 =
                        zx.q(*(*(*(arg4 + 0x20) + (x8_47 u>> 1 & 0x7fffffff) * 0x30 + 8) + x13_20))
                    
                    if (x15_7 != 0)
                        int64_t* x0_23 = *(x25_3 + 0x10)
                        int64_t x16_6 = *x0_23
                        int64_t x17_8 = (x0_23[1] - x16_6) s>> 1
                        
                        if (x17_8 u<= x12_15)
                            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        label_d9d1a8:
                            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        label_d9d1ac:
                            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        label_d9d1b0:
                            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        label_d9d1b4:
                            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        label_d9d1b8:
                            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        label_d9d1bc:
                            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            break
                        
                        if (x17_8 u<= x15_7)
                            goto label_d9d1a8
                        
                        int64_t* x0_24 = *(x25_3 + 0x18)
                        uint64_t x17_10 =
                            zx.q(*(x16_6 + (x15_7 << 1))) + zx.q(*(x16_6 + (x12_15 << 1)))
                        int64_t x15_13 = *x0_24
                        uint64_t x16_10 =
                            zx.q((x17_10 u>> zx.q(*x25_3)).w + (x17_10.w & x25_3[2].w))
                        
                        if (x16_10 u>= (x0_24[1] - x15_13) s>> 1)
                            goto label_d9d1ac
                        
                        x15_7 = zx.q(*(x15_13 + (x16_10 << 1)))
                    
                    *(var_e8 + x13_20) ^= x15_7.w
                    x13_20 += 2
                    
                    if (x9_38 << 1 == x13_20)
                        goto label_d9ca30
                
                goto label_d9d1c0
        else if ((x8_47.d & 1) == 0)
            x14_7 = (x8_47 u>> 1 & 0x7fffffff) << 1
            *(var_e8 + x14_7) ^= 0.w
    label_d9ca30:
        x8_47 += 1
        
        if (x8_47 == x9_38)
            goto label_d9cb90
    
label_d9d1cc:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()

void** x0_57 = __cxa_allocate_exception(0x20)
int64_t x0_58
int128_t v0_5
x0_58, v0_5 = operator new(0x30)
int64_t var_b0_1 = x0_58
*x27 = data_71c510
__builtin_strncpy(x0_58, "wrong size of McEliece ciphertext", 0x22)
*x0_57 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_57[1])
*x0_57 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_57, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
