// 函数: _ZN5Botan12random_primeERNS_21RandomNumberGeneratorEmRKNS_6BigIntEmmm
// 地址: 0xd15b10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = arg2
void* var_118
int128_t var_f0
int128_t var_c0

if (arg2 u<= 1)
    void** x0_49 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(i_2)
    int128_t* x0_52
    int128_t v0_5
    x0_52, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_118, nullptr)
    int64_t var_e0_1 = x0_52[1].q
    var_f0 = *x0_52
    __builtin_memset(x0_52, 0, 0x18)
    int128_t* x0_54
    int128_t v0_6
    x0_54, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_f0)
    int64_t var_b0_3 = x0_54[1].q
    var_c0 = *x0_54
    __builtin_memset(x0_54, 0, 0x18)
    *x0_49 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_49[1])
    *x0_49 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_49, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (*(arg3 + 0x20) != 0)
    int64_t x8_1 = *(arg3 + 0x18)
    
    if (x8_1 == -1)
        int64_t x9_1 = *arg3
        int64_t x11_1 = *(arg3 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 != x9_1)
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            int64_t x8_2 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_8 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_8 << 2))
                i = i_8
                i_8 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                x8_2 -= x11_3
            while (i != 1)
            *(arg3 + 0x18) = x8_2
            
            if (x8_2 != 0)
                goto label_d15bdc
            
            goto label_d15bf4
        
        *(arg3 + 0x18) = 0
    label_d15bf4:
        int64_t x0_1
        int128_t v0_1
        x0_1, v0_1 = Botan::BigInt::bits()
        
        if (x0_1 u< i_2)
            if (arg5 == 0)
                void** x0_57 = __cxa_allocate_exception(0x20)
                int64_t x0_58
                int128_t v0_7
                x0_58, v0_7 = operator new(0x30)
                v0_7 = data_71d3f0
                int64_t var_b0_4 = x0_58
                __builtin_strncpy(x0_58, "random_prime: Invalid modulo value", 0x23)
                var_c0 = v0_7
                *x0_57 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_57[1])
                *x0_57 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_57, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            int64_t x8_6 = arg4 u% arg5
            
            if (x8_6 == 0)
                void** x0_62 = __cxa_allocate_exception(0x20)
                int64_t x0_63
                int128_t v0_8
                x0_63, v0_8 = operator new(0x30)
                (*"for equiv/modulo")[0].o
                int64_t var_b0_5 = x0_63
                v0_8 = data_71cfc0
                __builtin_strncpy(x0_63, "random_prime Invalid value for equiv/modulo", 0x2c)
                var_c0 = v0_8
                *x0_62 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_62[1])
                *x0_62 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_62, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            Botan::BigInt* entry_x8
            
            if (i_2 u<= 0x10)
                if (arg5 == 2 && x8_6 == 1 && *(arg3 + 0x20) != 0)
                    int64_t i_6 = *(arg3 + 0x18)
                    
                    if (i_6 == -1)
                        int64_t x9_4 = *arg3
                        int64_t x11_4 = *(arg3 + 8)
                        int64_t x10_4 = x11_4 - x9_4
                        
                        if (x11_4 == x9_4)
                            i_6 = 0
                        else
                            int64_t x12_5
                            
                            x12_5 = x10_4 s>= 0 ? x10_4 : -1
                            
                            int64_t x11_5 = x9_4 - x11_4
                            int64_t x12_6
                            
                            x12_6 = x12_5 s< 1 ? x12_5 : 1
                            
                            i_6 = x10_4 s>> 2
                            int64_t x10_5
                            
                            x10_5 = x11_5 s> x10_4 ? x11_5 : x10_4
                            
                            int64_t i_9 = x12_6 * (x10_5 u>> 2)
                            uint64_t x11_6 = 1
                            int64_t i_1
                            
                            do
                                int32_t x12_7 = *(x9_4 - 4 + (i_9 << 2))
                                i_1 = i_9
                                i_9 -= 1
                                x11_6 = zx.q(x11_6.d) & zx.q(((x12_7 - 1) & not.d(x12_7)) s>> 0x1f)
                                i_6 -= x11_6
                            while (i_1 != 1)
                        
                        *(arg3 + 0x18) = i_6
                    
                    if (i_6 u<= 1)
                        if (i_6 == 0)
                        label_d15d14:
                            
                            if (i_2 == 2)
                                (*(*arg1 + 0x10))(arg1, &var_c0, 1)
                            else if (i_2 == 3)
                                (*(*arg1 + 0x10))(arg1, &var_c0, 1)
                            else if (i_2 != 4)
                                uint64_t x8_22
                                uint32_t x9_12
                                uint64_t x10_9
                                uint64_t x10_10
                                uint64_t x10_11
                                
                                do
                                    (*(*arg1 + 0x10))(arg1, &var_c0, 4)
                                    uint64_t x8_19 = zx.q(var_c0.d)
                                    uint64_t x1_7 = zx.q(*(Botan::PRIMES + (
                                        zx.q(x8_19.d - ((x8_19 * 0x5027736b) u>> 0x2b).d * 0x198d)
                                        << 1)))
                                    x8_22 = zx.q(x1_7 u> 0xff ? 1 : 0) << 3
                                    uint32_t x9_10 = x1_7.d u>> x8_22.d
                                    x10_9 = zx.q(x9_10 u> 0xf ? 1 : 0)
                                    uint32_t x9_11 = x9_10 u>> (x10_9 << 2).d
                                    x10_10 = zx.q(x9_11 u> 3 ? 1 : 0)
                                    x9_12 = x9_11 u>> (x10_10 << 1).d
                                    x10_11 = zx.q((x9_12 & 0xfffe) != 0 ? 1 : 0)
                                while (((-3 & ((-5 & x8_22) | (1 & x10_9) << 2)) | (1 & x10_10) << 1
                                    | x10_11) + zx.q(x9_12 u>> x10_11.d) != i_2)
                            else
                                (*(*arg1 + 0x10))(arg1, &var_c0, 1)
                            
                            return Botan::BigInt::BigInt(entry_x8)
                        
                        int32_t* x9_7 = *arg3
                        int32_t x10_7 = 0
                        int64_t i_3
                        
                        do
                            int32_t x11_7 = *x9_7
                            x9_7 = &x9_7[1]
                            i_3 = i_6
                            i_6 -= 1
                            int32_t x11_9 = ((x11_7 - 1) & not.d(x11_7)) s>> 0x1f
                            x10_7 = (x10_7 & x11_9) | (not.d(x11_9) & 1)
                        while (i_3 != 1)
                        
                        if (x10_7 == 0)
                            goto label_d15d14
                
                void** x0_45 = __cxa_allocate_exception(0x20)
                int64_t x0_46
                int128_t v0_4
                x0_46, v0_4 = operator new(0x50)
                var_c0 = data_71aa60
                int64_t var_b0_2 = x0_46
                __builtin_strncpy(x0_46, 
                    "random_prime equiv/modulo/coprime options not usable for small primes", 0x46)
                Botan::Exception::Exception(x0_45, "Not implemented")
                *x0_45 = _vtable_for_Botan::Not_Implemented + 0x10
                __cxa_throw(x0_45, _typeinfo_for_Botan::Not_Implemented, 
                    Botan::Exception::~Exception)
                noreturn
            
            uint64_t x9_6
            
            if (arg6 u> 0x80)
                x9_6 = (arg6 + 2) u>> 1
            else if (i_2 u> 0x5ff)
                x9_6 = 4
            else if (i_2 u> 0x3ff)
                x9_6 = 6
            else if (i_2 u> 0x1ff)
                x9_6 = 0xc
            else if (i_2 u<= 0xff)
                x9_6 = (arg6 + 2) u>> 1
            else
                x9_6 = 0x1d
            
            uint64_t x22_2 = (arg2 - 1) u>> 5
            int32_t x13_3 = 1 << (arg2 - 1).d
            int64_t x12_10 = x22_2 + 1
            uint64_t x25_2 = (i_2 - 2) u>> 5
            int32_t x9_16 = 1 << (i_2 - 2).d
            int64_t x11_14 = x25_2 + 1
            uint64_t i_7
            
            i_7 = i_2 u< 0x198d ? i_2 : 0x198d
            
            uint64_t x27_1 = i_7 << 1
            uint64_t x8_30 = (x27_1 - 2) u>> 1
            uint64_t x8_31 = x8_30 << 1
            int64_t x10_12
            
            if (x8_31 + 2 s>= 0)
                x10_12 = x8_31 + 2
            else
                x10_12 = -1
            
            int64_t x10_13
            
            x10_13 = x10_12 s< 1 ? x10_12 : 1
            
            int64_t x8_33
            
            if (-2 - x8_31 s> x8_31 + 2)
                x8_33 = -2 - x8_31
            else
                x8_33 = x8_31 + 2
            
            int64_t j_15 = x10_13 * (x8_33 u>> 1)
            v0_1.d = arg5.d
            v0_1:4.d = arg5.d
            v0_1:8.d = arg5.d
            v0_1:0xc.d = arg5.d
            uint64_t i_5 = i_2
            uint64_t var_180_1 = x25_2
            uint64_t var_178_1 = x22_2
            uint64_t var_188_1 = x27_1
            void* result
            int32_t i_4
            
            do
                __builtin_memset(entry_x8, 0, 0x18)
                *(entry_x8 + 0x18) = -1
                *(entry_x8 + 0x20) = 1
                Botan::BigInt::randomize(entry_x8, arg1, i_2.b)
                int64_t x8_36 = *entry_x8
                int64_t x9_23 = (*(entry_x8 + 8) - x8_36) s>> 2
                int32_t x9_25
                
                if (x9_23 u<= x22_2)
                    int64_t x10_14 = *(entry_x8 + 0x10)
                    *(entry_x8 + 0x18) = -1
                    
                    if (x22_2 u< (x10_14 - x8_36) s>> 2)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                        x9_25 = x13_3
                    else if ((x12_10 & 0xffffffffffffff8) + 8 u<= x9_23)
                        x9_25 = x13_3
                        
                        if ((x12_10 & 0xffffffffffffff8) + 8 u< x9_23)
                            x9_25 = x13_3
                            *(entry_x8 + 8) = x8_36 + (((x12_10 & 0xffffffffffffff8) + 8) << 2)
                    else
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                        x9_25 = x13_3
                else
                    int32_t x8_37 = *(x8_36 + (x22_2 << 2))
                    *(entry_x8 + 0x18) = -1
                    x9_25 = x8_37 | x13_3
                
                *(*entry_x8 + (x22_2 << 2)) = x9_25
                int64_t x8_41 = *entry_x8
                int64_t x9_29 = (*(entry_x8 + 8) - x8_41) s>> 2
                int32_t x9_31
                
                if (x9_29 u<= x25_2)
                    int64_t x10_17 = *(entry_x8 + 0x10)
                    *(entry_x8 + 0x18) = -1
                    
                    if (x25_2 u< (x10_17 - x8_41) s>> 2)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                        x9_31 = x9_16
                    else if ((x11_14 & 0xffffffffffffff8) + 8 u<= x9_29)
                        x9_31 = x9_16
                        
                        if ((x11_14 & 0xffffffffffffff8) + 8 u< x9_29)
                            x9_31 = x9_16
                            *(entry_x8 + 8) = x8_41 + (((x11_14 & 0xffffffffffffff8) + 8) << 2)
                    else
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                        x9_31 = x9_16
                else
                    int32_t x8_42 = *(x8_41 + (x25_2 << 2))
                    *(entry_x8 + 0x18) = -1
                    x9_31 = x8_42 | x9_16
                
                *(*entry_x8 + (x25_2 << 2)) = x9_31
                int32_t* x8_46 = *entry_x8
                int32_t x20_1
                
                if (*(entry_x8 + 8) == x8_46)
                    int64_t x10_20 = *(entry_x8 + 0x10)
                    *(entry_x8 + 0x18) = -1
                    
                    if (x10_20 == x8_46)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                        x20_1 = 1
                    else
                        x20_1 = 1
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            entry_x8)
                else
                    int32_t x8_47 = *x8_46
                    *(entry_x8 + 0x18) = -1
                    x20_1 = x8_47 | 1
                
                **entry_x8 = x20_1
                var_c0.d = x8_6.d + arg5.d - Botan::operator%(entry_x8, arg5.d)
                Botan::BigInt::add(entry_x8, &var_c0, 1)
                void* x0_18 = operator new(x27_1)
                memset(x0_18, 0, x27_1)
                int64_t x20_2 = (x8_30 + 1) << 1
                
                if (x20_2 != 0)
                    int64_t x21_1 = 0
                    
                    do
                        *(x0_18 + (x21_1 << 1)) =
                            Botan::operator%(entry_x8, zx.d(*(Botan::PRIMES + (x21_1 << 1))))
                        x21_1 += 1
                    while (j_15 != x21_1)
                
                void* x25_3 = x0_18 + x20_2
                int64_t x21_2 = 0
                int32_t var_14c_1 = 0
                int64_t x20_3 = ((x8_30 + 1) & 0x7fffffffffffffff) << 1 s>> 1
                int64_t x26 = x20_3 & 0xfffffffffffffff8
                
                while (true)
                    var_c0.d = arg5.d
                    uint128_t v0_2
                    uint128_t v1_1
                    int128_t v3_1
                    uint128_t v4_1
                    v0_2, v1_1, v3_1, v4_1 = Botan::BigInt::add(entry_x8, &var_c0, 1)
                    
                    if (x25_3 != x0_18)
                        int64_t x9_36
                        
                        if (x20_3 u>= 8)
                            int64_t j_7 = j_15 & 0xfffffffffffffff8
                            int64_t (* const x9_37)() = Botan::PRIMES
                            void* x10_21 = x0_18
                            int64_t j
                            
                            do
                                v0_2 = *x10_21
                                v1_1 = *x9_37
                                x9_37 += 0x10
                                j = j_7
                                j_7 -= 8
                                uint128_t v2_1 = vaddw_u16(v0_1, v0_2)
                                v0_2 = vaddw_high_u16(v0_1, v0_2)
                                v3_1.d = zx.d(v1_1.w)
                                v3_1:4.d = zx.d(v1_1:2.w)
                                v3_1:8.d = zx.d(v1_1:4.w)
                                v3_1:0xc.d = zx.d(v1_1:6.w)
                                v1_1.d = zx.d(v1_1:8.w)
                                v1_1:4.d = zx.d(v1_1:0xa.w)
                                v1_1:8.d = zx.d(v1_1:0xc.w)
                                v1_1:0xc.d = zx.d(v1_1:0xe.w)
                                int32_t x0_22 = v1_1.d
                                int32_t x11_15 = v0_2:4.d
                                int32_t x12_11 = v1_1:4.d
                                int32_t x13_5 = v0_2:8.d
                                int32_t x16_1 = v1_1:8.d
                                int32_t x14_1 = v0_2:0xc.d
                                int32_t x17_1 = v1_1:0xc.d
                                v1_1.d = float.s(v2_1.d u% v3_1.d)
                                v0_2.d = float.s(v0_2.d u% x0_22)
                                v1_1:4.d = v2_1:4.d u% v3_1:4.d
                                v0_2:4.d = x11_15 u% x12_11
                                v1_1:8.d = v2_1:8.d u% v3_1:8.d
                                v0_2:8.d = x13_5 u% x16_1
                                v1_1:0xc.d = v2_1:0xc.d u% v3_1:0xc.d
                                v0_2:0xc.d = x14_1 u% x17_1
                                vmovn_s32(v1_1)
                                *x10_21 = vmovn_high_s32(v0_2)
                                x10_21 += 0x10
                            while (j != 8)
                            x9_36 = x26
                            
                            if (x20_3 != x26)
                                goto label_d162d0
                        else
                            x9_36 = 0
                        label_d162d0:
                            int64_t x10_22 = x9_36 << 1
                            int64_t j_8 = j_15 - x9_36
                            void* x9_38 = Botan::PRIMES + x10_22
                            int16_t* x10_23 = x0_18 + x10_22
                            int64_t j_1
                            
                            do
                                uint32_t x12_14 = zx.d(*x9_38)
                                x9_38 += 2
                                j_1 = j_8
                                j_8 -= 1
                                int32_t x11_18 = zx.d(*x10_23) + arg5.d
                                *x10_23 = x11_18.w - (x11_18 u/ x12_14).w * x12_14.w
                                x10_23 = &x10_23[1]
                            while (j_1 != 1)
                    
                    char* x8_53 = *entry_x8
                    
                    if (*(entry_x8 + 8) != x8_53 && (zx.d(*x8_53) & 1) != 0)
                        if (x25_3 != x0_18)
                            void* x8_55 = x0_18
                            int64_t (* const x9_40)() = Botan::PRIMES
                            int64_t j_11 = j_15
                            int64_t j_2
                            
                            do
                                uint32_t x11_20 = zx.d(*x8_55)
                                
                                if (x11_20 == 0)
                                    goto label_d161a8
                                
                                uint32_t x12_15 = zx.d(*x9_40)
                                uint32_t x12_16
                                
                                if (x12_15 - 1 s< 0)
                                    x12_16 = x12_15
                                else
                                    x12_16 = x12_15 - 1
                                
                                if (x11_20 == x12_16 s>> 1)
                                    goto label_d161a8
                                
                                j_2 = j_11
                                j_11 -= 1
                                x9_40 += 2
                                x8_55 += 2
                            while (j_2 != 1)
                        
                        Botan::Modular_Reducer::Modular_Reducer(&var_c0)
                        
                        if (*(arg3 + 0x20) != 0)
                            int64_t j_9 = *(arg3 + 0x18)
                            
                            if (j_9 == -1)
                                int64_t x9_41 = *arg3
                                int64_t x11_21 = *(arg3 + 8)
                                int64_t x10_24 = x11_21 - x9_41
                                
                                if (x11_21 == x9_41)
                                    j_9 = 0
                                    *(arg3 + 0x18) = 0
                                label_d16410:
                                    
                                    if (j_9 == 0)
                                        goto label_d165d8
                                    
                                    int32_t x10_27 = 0
                                    int32_t* x9_46 = *arg3
                                    int64_t j_3
                                    
                                    do
                                        int32_t x11_24 = *x9_46
                                        x9_46 = &x9_46[1]
                                        j_3 = j_9
                                        j_9 -= 1
                                        int32_t x11_26 =
                                            (((x11_24 ^ 1) - 1) & not.d(x11_24)) s>> 0x1f
                                        x10_27 = (x10_27 & x11_26) | ((
                                            ((x11_24 - 1) & not.d(x11_24)) s>> 0x1f | 1)
                                            & not.d(x11_26))
                                    while (j_3 != 1)
                                    
                                    if (x10_27 s< 1)
                                        goto label_d165d8
                                else
                                    int64_t x12_17
                                    
                                    x12_17 = x10_24 s>= 0 ? x10_24 : -1
                                    
                                    int64_t x11_22 = x9_41 - x11_21
                                    int64_t x12_18
                                    
                                    x12_18 = x12_17 s< 1 ? x12_17 : 1
                                    
                                    j_9 = x10_24 s>> 2
                                    int64_t x10_25
                                    
                                    x10_25 = x11_22 s> x10_24 ? x11_22 : x10_24
                                    
                                    int64_t j_12 = x12_18 * (x10_25 u>> 2)
                                    uint64_t x11_23 = 1
                                    int64_t j_4
                                    
                                    do
                                        int32_t x12_19 = *(x9_41 - 4 + (j_12 << 2))
                                        j_4 = j_12
                                        j_12 -= 1
                                        x11_23 = zx.q(x11_23.d)
                                            & zx.q(((x12_19 - 1) & not.d(x12_19)) s>> 0x1f)
                                        j_9 -= x11_23
                                    while (j_4 != 1)
                                    *(arg3 + 0x18) = j_9
                                    
                                    if (j_9 u<= 1)
                                        goto label_d16410
                            else if (j_9 u<= 1)
                                goto label_d16410
                            
                            if ((Botan::is_miller_rabin_probable_prime(entry_x8, &var_c0, arg1, 1)
                                    & 1) == 0)
                                goto label_d1664c
                            
                            uint32_t var_64 = 1
                            Botan::BigInt::add2(entry_x8, &var_64, 1, 0)
                            Botan::gcd(&var_118, arg3)
                            int32_t var_d0
                            int32_t x22_4
                            int64_t var_e0
                            void* x0_30
                            
                            if (var_d0 == 0)
                                x22_4 = -1
                                x0_30 = var_f0.q
                                
                                if (x0_30 != 0)
                                    var_f0:8.q = x0_30
                                    Botan::deallocate_memory(x0_30, (var_e0 - x0_30) s>> 2, 4)
                            else
                                int64_t j_14
                                int64_t j_10 = j_14
                                
                                if (j_10 == -1)
                                    int64_t x9_47 = var_f0.q
                                    int64_t x11_27 = var_f0:8.q
                                    int64_t x10_29 = x11_27 - x9_47
                                    
                                    if (x11_27 != x9_47)
                                        int64_t x12_26
                                        
                                        x12_26 = x10_29 s>= 0 ? x10_29 : -1
                                        
                                        int64_t x11_28 = x9_47 - x11_27
                                        int64_t x12_27
                                        
                                        x12_27 = x12_26 s< 1 ? x12_26 : 1
                                        
                                        j_10 = x10_29 s>> 2
                                        int64_t x10_30
                                        
                                        x10_30 = x11_28 s> x10_29 ? x11_28 : x10_29
                                        
                                        int64_t j_13 = x12_27 * (x10_30 u>> 2)
                                        uint64_t x11_29 = 1
                                        int64_t j_5
                                        
                                        do
                                            int32_t x12_28 = *(x9_47 - 4 + (j_13 << 2))
                                            j_5 = j_13
                                            j_13 -= 1
                                            x11_29 = zx.q(x11_29.d)
                                                & zx.q(((x12_28 - 1) & not.d(x12_28)) s>> 0x1f)
                                            j_10 -= x11_29
                                        while (j_5 != 1)
                                        j_14 = j_10
                                        
                                        if (j_10 u> 1)
                                            goto label_d164c4
                                        
                                        goto label_d16548
                                    
                                    j_10 = 0
                                    j_14 = 0
                                label_d16548:
                                    x0_30 = var_f0.q
                                    
                                    if (j_10 == 0)
                                        x22_4 = -1
                                        
                                        if (x0_30 != 0)
                                            var_f0:8.q = x0_30
                                            Botan::deallocate_memory(x0_30, (var_e0 - x0_30) s>> 2, 
                                                4)
                                    else
                                        x22_4 = 0
                                        int64_t j_6
                                        
                                        do
                                            int32_t x9_49 = *x0_30
                                            x0_30 += 4
                                            j_6 = j_10
                                            j_10 -= 1
                                            int32_t x9_51 =
                                                (((x9_49 ^ 1) - 1) & not.d(x9_49)) s>> 0x1f
                                            x22_4 = (x22_4 & x9_51) | ((
                                                ((x9_49 - 1) & not.d(x9_49)) s>> 0x1f | 1)
                                                & not.d(x9_51))
                                        while (j_6 != 1)
                                        x0_30 = var_f0.q
                                        
                                        if (x0_30 != 0)
                                            var_f0:8.q = x0_30
                                            Botan::deallocate_memory(x0_30, (var_e0 - x0_30) s>> 2, 
                                                4)
                                else
                                    if (j_10 u<= 1)
                                        goto label_d16548
                                    
                                label_d164c4:
                                    x22_4 = 1
                                    x0_30 = var_f0.q
                                    
                                    if (x0_30 != 0)
                                        var_f0:8.q = x0_30
                                        Botan::deallocate_memory(x0_30, (var_e0 - x0_30) s>> 2, 4)
                            void* x0_31 = var_118
                            
                            if (x0_31 != 0)
                                void* var_110_1 = x0_31
                                int64_t var_108
                                Botan::deallocate_memory(x0_31, (var_108 - x0_31) s>> 2, 4)
                            
                            if (x22_4 s> 0)
                                goto label_d1664c
                            
                            goto label_d165d8
                        
                    label_d165d8:
                        int32_t fp_1
                        void* var_98
                        void* var_90_1
                        int64_t var_88
                        
                        if (Botan::BigInt::bits() u<= i_5)
                            if ((
                                Botan::is_miller_rabin_probable_prime(entry_x8, &var_c0, arg1, x9_6)
                                & 1) == 0)
                            label_d1664c:
                                i_4 = 8
                                fp_1 = 1
                                
                                if (var_98 != 0)
                                    var_90_1 = var_98
                                    Botan::deallocate_memory(var_98, (var_88 - var_98) s>> 2, 4)
                            else
                                int32_t x0_38
                                
                                if (arg6 u>= 0x21)
                                    x0_38 = Botan::is_lucas_probable_prime(entry_x8, &var_c0)
                                
                                if (arg6 u>= 0x21 && (x0_38 & 1) == 0)
                                    goto label_d1664c
                                
                                fp_1 = 0
                                i_4 = 1
                                var_14c_1 = 1
                                
                                if (var_98 != 0)
                                    var_90_1 = var_98
                                    Botan::deallocate_memory(var_98, (var_88 - var_98) s>> 2, 4)
                        else
                            fp_1 = 0
                            i_4 = 6
                            
                            if (var_98 != 0)
                                var_90_1 = var_98
                                Botan::deallocate_memory(var_98, (var_88 - var_98) s>> 2, 4)
                        void* x0_39 = var_c0.q
                        
                        if (x0_39 != 0)
                            var_c0:8.q = x0_39
                            int64_t var_b0
                            Botan::deallocate_memory(x0_39, (var_b0 - x0_39) s>> 2, 4)
                        
                        if ((fp_1 & 1) == 0)
                            break
                    
                label_d161a8:
                    x21_2 += 1
                    
                    if (x21_2 == 0x8001)
                        i_4 = 6
                        break
                
                result = operator delete(x0_18)
                
                if ((var_14c_1 & 1) == 0)
                    result = *entry_x8
                    
                    if (result != 0)
                        int64_t x8_72 = *(entry_x8 + 0x10)
                        *(entry_x8 + 8) = result
                        result = Botan::deallocate_memory(result, (x8_72 - result) s>> 2, 4)
                
                i_2 = i_5
                x25_2 = var_180_1
                x22_2 = var_178_1
                x27_1 = var_188_1
            while (i_4 == 6)
            return result
    else
        if (x8_1 == 0)
            goto label_d15bf4
        
    label_d15bdc:
        char* x8_3 = *arg3
        
        if (*(arg3 + 8) != x8_3 && (zx.d(*x8_3) & 1) != 0)
            goto label_d15bf4

void** x0_41 = __cxa_allocate_exception(0x20)
int64_t x0_42
int128_t v0_3
x0_42, v0_3 = operator new(0x20)
int64_t var_b0_1 = x0_42
var_c0 = data_71cd20
__builtin_strncpy(x0_42, "random_prime: invalid coprime", 0x1e)
*x0_41 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_41[1])
*x0_41 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_41, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
