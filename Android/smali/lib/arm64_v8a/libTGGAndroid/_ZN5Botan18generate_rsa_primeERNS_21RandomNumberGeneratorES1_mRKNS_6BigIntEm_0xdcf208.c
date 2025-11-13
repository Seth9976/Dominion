// 函数: _ZN5Botan18generate_rsa_primeERNS_21RandomNumberGeneratorES1_mRKNS_6BigIntEm
// 地址: 0xdcf208
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_c0

if (arg3 u<= 0x1ff)
    void** x0_37 = __cxa_allocate_exception(0x20)
    int64_t x0_38
    int128_t v0_2
    x0_38, v0_2 = operator new(0x30)
    v0_2 = data_71c510
    int64_t var_b0_2 = x0_38
    __builtin_strncpy(x0_38, "generate_rsa_prime bits too small", 0x22)
    var_c0 = v0_2
    *x0_37 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_37[1])
    *x0_37 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_37, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (*(arg4 + 0x20) != 0)
    int64_t i_7 = *(arg4 + 0x18)
    uint64_t x27_1 = arg3
    char* x9_1
    
    if (i_7 == -1)
        int64_t x9_2 = *arg4
        int64_t x11_1 = *(arg4 + 8)
        int64_t x10_1 = x11_1 - x9_2
        
        if (x11_1 != x9_2)
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_2 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_7 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_11 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_2 - 4 + (i_11 << 2))
                i = i_11
                i_11 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_7 -= x11_3
            while (i != 1)
            *(arg4 + 0x18) = i_7
            x9_1 = *arg4
            
            if (i_7 u> 1)
                goto label_dcf338
            
            goto label_dcf2e8
        
        i_7 = 0
        *(arg4 + 0x18) = 0
        x9_1 = *arg4
    label_dcf2e8:
        
        if (i_7 != 0)
            int32_t x10_4 = 0
            char* x11_4 = x9_1
            int64_t i_1
            
            do
                int32_t x12_5 = *x11_4
                x11_4 = &x11_4[4]
                i_1 = i_7
                i_7 -= 1
                int32_t x12_7 = (((x12_5 ^ 1) - 1) & not.d(x12_5)) s>> 0x1f
                x10_4 =
                    (x10_4 & x12_7) | ((((x12_5 - 1) & not.d(x12_5)) s>> 0x1f | 1) & not.d(x12_7))
            while (i_1 != 1)
            
            if (x10_4 s>= 1)
                goto label_dcf338
    else
        x9_1 = *arg4
        
        if (i_7 u<= 1)
            goto label_dcf2e8
        
    label_dcf338:
        
        if (*(arg4 + 8) != x9_1 && (zx.d(*x9_1) & 1) != 0 && Botan::BigInt::bits() u< 0x41)
            uint64_t x8_3
            
            if (arg5 u> 0x80)
                x8_3 = (arg5 + 2) u>> 1
            else if (x27_1 u> 0x5ff)
                x8_3 = 4
            else if (x27_1 u> 0x3ff)
                x8_3 = 6
            else if (x27_1 u> 0x1ff)
                x8_3 = 0xc
            else if (x27_1 u<= 0xff)
                x8_3 = (arg5 + 2) u>> 1
            else
                x8_3 = 0x1d
            
            uint64_t x28 = (x27_1 - 1) u>> 5
            int32_t x13_7 = 1 << (x27_1 - 1).d
            int32_t x8_6 = 1 << (x27_1 - 2).d
            uint64_t x23 = (x27_1 - 2) u>> 5
            uint64_t x8_7
            
            x8_7 = x27_1 u< 0x198d ? x27_1 : 0x198d
            
            int64_t x9_5 = x28 + 1
            int64_t x12_8 = x23 + 1
            int64_t x8_8 = x8_7 << 1
            uint64_t var_160 = x28
            uint64_t x8_10 = (x8_8 - 2) u>> 1
            uint64_t x8_11 = x8_10 << 1
            uint64_t var_130 = x27_1
            int64_t x10_7
            
            if (x8_11 + 2 s>= 0)
                x10_7 = x8_11 + 2
            else
                x10_7 = -1
            
            int64_t x10_8
            
            x10_8 = x10_7 s< 1 ? x10_7 : 1
            
            int64_t x8_13
            
            if (-2 - x8_11 s> x8_11 + 2)
                x8_13 = -2 - x8_11
            else
                x8_13 = x8_11 + 2
            
            int64_t x21 = x10_8 * (x8_13 u>> 1)
            uint64_t var_168 = x23
            void* result
            
            while (true)
                Botan::BigInt* entry_x8
                __builtin_memset(entry_x8, 0, 0x18)
                *(entry_x8 + 0x18) = -1
                *(entry_x8 + 0x20) = 1
                Botan::BigInt::randomize(entry_x8, arg1, x27_1.b)
                int64_t x8_16 = *entry_x8
                int64_t x9_12 = (*(entry_x8 + 8) - x8_16) s>> 2
                int32_t x9_14
                
                if (x9_12 u<= x28)
                    int64_t x10_9 = *(entry_x8 + 0x10)
                    *(entry_x8 + 0x18) = -1
                    
                    if (x28 u< (x10_9 - x8_16) s>> 2)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                        x9_14 = x13_7
                    else if ((x9_5 & 0xffffffffffffff8) + 8 u<= x9_12)
                        x9_14 = x13_7
                        
                        if ((x9_5 & 0xffffffffffffff8) + 8 u< x9_12)
                            x9_14 = x13_7
                            *(entry_x8 + 8) = x8_16 + (((x9_5 & 0xffffffffffffff8) + 8) << 2)
                    else
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                        x9_14 = x13_7
                else
                    int32_t x8_17 = *(x8_16 + (x28 << 2))
                    *(entry_x8 + 0x18) = -1
                    x9_14 = x8_17 | x13_7
                
                *(*entry_x8 + (x28 << 2)) = x9_14
                int64_t x8_21 = *entry_x8
                int64_t x9_18 = (*(entry_x8 + 8) - x8_21) s>> 2
                int32_t x9_20
                
                if (x9_18 u<= x23)
                    int64_t x10_12 = *(entry_x8 + 0x10)
                    *(entry_x8 + 0x18) = -1
                    
                    if (x23 u< (x10_12 - x8_21) s>> 2)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                        x9_20 = x8_6
                    else if ((x12_8 & 0xffffffffffffff8) + 8 u<= x9_18)
                        x9_20 = x8_6
                        
                        if ((x12_8 & 0xffffffffffffff8) + 8 u< x9_18)
                            x9_20 = x8_6
                            *(entry_x8 + 8) = x8_21 + (((x12_8 & 0xffffffffffffff8) + 8) << 2)
                    else
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                        x9_20 = x8_6
                else
                    int32_t x8_22 = *(x8_21 + (x23 << 2))
                    *(entry_x8 + 0x18) = -1
                    x9_20 = x8_22 | x8_6
                
                *(*entry_x8 + (x23 << 2)) = x9_20
                int32_t* x8_26 = *entry_x8
                int32_t x20_1
                
                if (*(entry_x8 + 8) == x8_26)
                    int64_t x10_15 = *(entry_x8 + 0x10)
                    *(entry_x8 + 0x18) = -1
                    
                    if (x10_15 == x8_26)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                        x20_1 = 1
                    else
                        x20_1 = 1
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                else
                    int32_t x8_27 = *x8_26
                    *(entry_x8 + 0x18) = -1
                    x20_1 = x8_27 | 1
                
                **entry_x8 = x20_1
                void* x0_10 = operator new(x8_8)
                memset(x0_10, 0, x8_8)
                int64_t x23_1 = (x8_10 + 1) << 1
                
                if (x23_1 != 0)
                    int64_t x20_3 = 0
                    
                    do
                        *(x0_10 + (x20_3 << 1)) =
                            Botan::operator%(entry_x8, zx.d(*(Botan::PRIMES + (x20_3 << 1))))
                        x20_3 += 1
                    while (x21 != x20_3)
                
                int64_t x20_4 = 0
                int32_t var_124_1 = 0
                int64_t x27_2 = ((x8_10 + 1) & 0x7fffffffffffffff) << 1 s>> 1
                int64_t x23_2 = x27_2 & 0xfffffffffffffff8
                int32_t fp_3
                
                while (true)
                    var_c0.d = 2
                    uint128_t v0_1
                    uint128_t v1_1
                    int128_t v3_1
                    uint128_t v4_1
                    v0_1, v1_1, v3_1, v4_1 = Botan::BigInt::add(entry_x8, &var_c0, 1)
                    
                    if (x0_10 + x23_1 != x0_10)
                        int64_t x9_25
                        
                        if (x27_2 u>= 8)
                            int64_t i_8 = x21 & 0xfffffffffffffff8
                            int64_t (* const x9_26)() = Botan::PRIMES
                            void* x10_16 = x0_10
                            v4_1.d = 2
                            v4_1:4.d = 2
                            v4_1:8.d = 2
                            v4_1:0xc.d = 2
                            int64_t i_2
                            
                            do
                                v0_1 = *x10_16
                                v1_1 = *x9_26
                                x9_26 += 0x10
                                i_2 = i_8
                                i_8 -= 8
                                uint128_t v2_1 = vaddw_u16(v4_1, v0_1)
                                v0_1 = vaddw_high_u16(v4_1, v0_1)
                                v3_1.d = zx.d(v1_1.w)
                                v3_1:4.d = zx.d(v1_1:2.w)
                                v3_1:8.d = zx.d(v1_1:4.w)
                                v3_1:0xc.d = zx.d(v1_1:6.w)
                                v1_1.d = zx.d(v1_1:8.w)
                                v1_1:4.d = zx.d(v1_1:0xa.w)
                                v1_1:8.d = zx.d(v1_1:0xc.w)
                                v1_1:0xc.d = zx.d(v1_1:0xe.w)
                                int32_t x0_14 = v1_1.d
                                int32_t x11_5 = v0_1:4.d
                                int32_t x12_10 = v1_1:4.d
                                int32_t x13_8 = v0_1:8.d
                                int32_t x16_1 = v1_1:8.d
                                int32_t x14_3 = v0_1:0xc.d
                                int32_t x17_1 = v1_1:0xc.d
                                v1_1.d = float.s(v2_1.d u% v3_1.d)
                                v0_1.d = float.s(v0_1.d u% x0_14)
                                v1_1:4.d = v2_1:4.d u% v3_1:4.d
                                v0_1:4.d = x11_5 u% x12_10
                                v1_1:8.d = v2_1:8.d u% v3_1:8.d
                                v0_1:8.d = x13_8 u% x16_1
                                v1_1:0xc.d = v2_1:0xc.d u% v3_1:0xc.d
                                v0_1:0xc.d = x14_3 u% x17_1
                                vmovn_s32(v1_1)
                                *x10_16 = vmovn_high_s32(v0_1)
                                x10_16 += 0x10
                            while (i_2 != 8)
                            x9_25 = x23_2
                            
                            if (x27_2 != x23_2)
                                goto label_dcf79c
                        else
                            x9_25 = 0
                        label_dcf79c:
                            int64_t x10_17 = x9_25 << 1
                            int64_t i_9 = x21 - x9_25
                            void* x9_27 = Botan::PRIMES + x10_17
                            int16_t* x10_18 = x0_10 + x10_17
                            int64_t i_3
                            
                            do
                                uint32_t x12_13 = zx.d(*x9_27)
                                x9_27 += 2
                                i_3 = i_9
                                i_9 -= 1
                                int32_t x11_8 = zx.d(*x10_18) + 2
                                *x10_18 = x11_8.w - (x11_8 u/ x12_13).w * x12_13.w
                                x10_18 = &x10_18[1]
                            while (i_3 != 1)
                        void* x8_31 = x0_10
                        int64_t i_12 = x21 - 1
                        uint32_t x9_28
                        int64_t i_4
                        
                        do
                            x9_28 = zx.d(*x8_31)
                            x8_31 += 2
                            
                            if (x9_28 == 0)
                                break
                            
                            i_4 = i_12
                            i_12 -= 1
                        while (i_4 != 0)
                        
                        if (x9_28 == 0)
                            goto label_dcf670
                    
                    Botan::Modular_Reducer::Modular_Reducer(&var_c0)
                    void* var_98
                    void* var_90_1
                    int64_t var_88
                    
                    if ((Botan::is_miller_rabin_probable_prime(entry_x8, &var_c0, arg2, 1) & 1)
                        == 0)
                    label_dcf96c:
                        fp_3 = 6
                        
                        if (var_98 != 0)
                            var_90_1 = var_98
                            Botan::deallocate_memory(var_98, (var_88 - var_98) s>> 2, 4)
                    else
                        uint32_t var_64 = 1
                        Botan::BigInt::add2(entry_x8, &var_64, 1, 0)
                        void* var_110
                        Botan::gcd(&var_110, arg4)
                        int32_t var_c8
                        int32_t fp_2
                        void* var_e8
                        void* var_e0
                        int64_t var_d8
                        
                        if (var_c8 == 0)
                            fp_2 = -1
                            
                            if (var_e8 != 0)
                                var_e0 = var_e8
                                Botan::deallocate_memory(var_e8, (var_d8 - var_e8) s>> 2, 4)
                        else
                            int64_t i_14
                            int64_t i_10 = i_14
                            
                            if (i_10 == -1)
                                void* x10_19 = var_e0 - var_e8
                                
                                if (var_e0 != var_e8)
                                    void* x12_14
                                    
                                    x12_14 = x10_19 s>= 0 ? x10_19 : -ffffffffffffffff
                                    
                                    void* x11_11 = var_e8 - var_e0
                                    void* x12_15
                                    
                                    x12_15 = x12_14 s< 1 ? x12_14 : 1
                                    
                                    i_10 = x10_19 s>> 2
                                    void* x10_20
                                    
                                    x10_20 = x11_11 s> x10_19 ? x11_11 : x10_19
                                    
                                    int64_t i_13 = x12_15 * (x10_20 u>> 2)
                                    uint64_t x11_12 = 1
                                    int64_t i_5
                                    
                                    do
                                        int32_t x12_16 = *(var_e8 - 4 + (i_13 << 2))
                                        i_5 = i_13
                                        i_13 -= 1
                                        x11_12 = zx.q(x11_12.d)
                                            & zx.q(((x12_16 - 1) & not.d(x12_16)) s>> 0x1f)
                                        i_10 -= x11_12
                                    while (i_5 != 1)
                                    i_14 = i_10
                                    
                                    if (i_10 u> 1)
                                        goto label_dcf85c
                                    
                                    goto label_dcf8e0
                                
                                i_10 = 0
                                i_14 = 0
                            label_dcf8e0:
                                void* x0_22 = var_e8
                                
                                if (i_10 == 0)
                                    fp_2 = -1
                                    
                                    if (x0_22 != 0)
                                        var_e0 = x0_22
                                        Botan::deallocate_memory(x0_22, (var_d8 - x0_22) s>> 2, 4)
                                else
                                    fp_2 = 0
                                    int64_t i_6
                                    
                                    do
                                        int32_t x9_31 = *x0_22
                                        x0_22 += 4
                                        i_6 = i_10
                                        i_10 -= 1
                                        int32_t x9_33 = (((x9_31 ^ 1) - 1) & not.d(x9_31)) s>> 0x1f
                                        fp_2 = (fp_2 & x9_33) | ((
                                            ((x9_31 - 1) & not.d(x9_31)) s>> 0x1f | 1) & not.d(x9_33))
                                    while (i_6 != 1)
                                    
                                    if (var_e8 != 0)
                                        var_e0 = var_e8
                                        Botan::deallocate_memory(var_e8, (var_d8 - var_e8) s>> 2, 4)
                            else
                                if (i_10 u<= 1)
                                    goto label_dcf8e0
                                
                            label_dcf85c:
                                fp_2 = 1
                                
                                if (var_e8 != 0)
                                    var_e0 = var_e8
                                    Botan::deallocate_memory(var_e8, (var_d8 - var_e8) s>> 2, 4)
                        void* x0_23 = var_110
                        
                        if (x0_23 != 0)
                            void* var_108_1 = x0_23
                            int64_t var_100
                            Botan::deallocate_memory(x0_23, (var_100 - x0_23) s>> 2, 4)
                        
                        if (fp_2 s> 0)
                            goto label_dcf96c
                        
                        if (Botan::BigInt::bits() u<= var_130)
                            int32_t x0_29 =
                                Botan::is_miller_rabin_probable_prime(entry_x8, &var_c0, arg2, x8_3)
                            fp_3 = x0_29 & 1
                            var_124_1 |= x0_29
                            
                            if (var_98 != 0)
                                var_90_1 = var_98
                                Botan::deallocate_memory(var_98, (var_88 - var_98) s>> 2, 4)
                        else
                            fp_3 = 4
                            
                            if (var_98 != 0)
                                var_90_1 = var_98
                                Botan::deallocate_memory(var_98, (var_88 - var_98) s>> 2, 4)
                    void* x0_25 = var_c0.q
                    
                    if (x0_25 != 0)
                        var_c0:8.q = x0_25
                        int64_t var_b0
                        Botan::deallocate_memory(x0_25, (var_b0 - x0_25) s>> 2, 4)
                    
                    if (fp_3 == 0 || fp_3 == 6)
                    label_dcf670:
                        x20_4 += 1
                        
                        if (x20_4 != 0x8001)
                            continue
                    else if (fp_3 != 4)
                        result = operator delete(x0_10)
                        break
                    
                    result = operator delete(x0_10)
                    fp_3 = 0
                    break
                
                x27_1 = var_130
                x23 = var_168
                x28 = var_160
                
                if ((var_124_1 & 1) == 0)
                    result = *entry_x8
                    
                    if (result != 0)
                        int64_t x8_45 = *(entry_x8 + 0x10)
                        *(entry_x8 + 8) = result
                        result = Botan::deallocate_memory(result, (x8_45 - result) s>> 2, 4)
                
                if (fp_3 != 0)
                    break
            
            return result

void** x0_32 = __cxa_allocate_exception(0x20)
int64_t x0_33
int128_t v2_2
x0_33, v2_2 = operator new(0x40)
(*"positive integer")[0].o
int64_t var_b0_1 = x0_33
v2_2 = data_71a790
__builtin_strncpy(x0_33, "generate_rsa_prime coprime must be small odd positive integer", 0x3e)
var_c0 = v2_2
*x0_32 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_32[1])
*x0_32 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_32, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
