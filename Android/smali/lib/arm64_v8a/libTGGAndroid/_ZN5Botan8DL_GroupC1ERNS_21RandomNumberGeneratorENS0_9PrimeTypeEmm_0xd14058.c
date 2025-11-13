// 函数: _ZN5Botan8DL_GroupC1ERNS_21RandomNumberGeneratorENS0_9PrimeTypeEmm
// 地址: 0xd14058
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_50 = v9
double x
double x_1 = x
*arg1 = 0
*(arg1 + 8) = 0
int128_t var_140
void* var_b0
int128_t var_80

if (arg4 u<= 0x3ff)
    void** x0_51 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(arg4)
    int128_t* x0_54
    int128_t v0_6
    x0_54, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_b0, nullptr)
    int64_t var_70_2 = x0_54[1].q
    var_80 = *x0_54
    __builtin_memset(x0_54, 0, 0x18)
    int128_t* x0_56
    int128_t v0_7
    x0_56, v0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_80)
    int64_t var_130_3 = x0_56[1].q
    var_140 = *x0_56
    __builtin_memset(x0_56, 0, 0x18)
    *x0_51 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_51[1])
    *x0_51 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_51, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t entry_x4
uint64_t x9 = entry_x4
Botan::RandomNumberGenerator* x21 = arg2
void* result
int64_t var_a0

if (arg3.d == 2)
    uint64_t x8_31
    
    x8_31 = arg4 u< 0x401 ? 0xa0 : 0x100
    
    int64_t var_128_2 = -1
    int64_t var_68_1 = -1
    __builtin_memset(&var_140, 0, 0x18)
    __builtin_memset(&var_80, 0, 0x18)
    int32_t var_120_2 = 1
    uint64_t x4_1
    
    x4_1 = x9 == 0 ? x8_31 : x9
    
    int32_t var_60_1 = 1
    Botan::generate_dsa_primes(x21, &var_140, &var_80, arg4, x4_1)
    void* var_1d8
    
    if (var_1d8 != 0)
        void* var_1d0_1 = var_1d8
        operator delete(var_1d8)
    
    sub_d170a8(&var_b0, &var_140, &var_80)
    int64_t* x0_33 = operator new(0x188)
    x0_33[2] = 0
    *x0_33 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::DL_Group_Data, std::__ndk1::allocator<Botan::DL_Group_Data> >
        + 0x10
    x0_33[1] = 0
    Botan::DL_Group_Data::DL_Group_Data(&x0_33[3], &var_140, &var_80, &var_b0)
    int64_t* x20_3 = *(arg1 + 8)
    *arg1 = &x0_33[3]
    *(arg1 + 8) = x0_33
    int64_t x9_12
    
    if (x20_3 != 0)
        int32_t i
        
        do
            x9_12 = __ldaxr(&x20_3[1])
            i = __stlxr(x9_12 - 1, &x20_3[1])
        while (i != 0)
    
    void* var_a8_5
    void* x0_35
    
    if (x20_3 != 0 && x9_12 == 0)
        (*(*x20_3 + 0x10))(x20_3)
        std::__ndk1::__shared_weak_count::__release_weak()
        x0_35 = var_b0
        
        if (x0_35 != 0)
            var_a8_5 = x0_35
            Botan::deallocate_memory(x0_35, (var_a0 - x0_35) s>> 2, 4)
    else
        x0_35 = var_b0
        
        if (x0_35 != 0)
            var_a8_5 = x0_35
            Botan::deallocate_memory(x0_35, (var_a0 - x0_35) s>> 2, 4)
    void* x0_36 = var_80.q
    
    if (x0_36 != 0)
        var_80:8.q = x0_36
        int64_t var_70_1
        Botan::deallocate_memory(x0_36, (var_70_1 - x0_36) s>> 2, 4)
    
    result = var_140.q
    
    if (result != 0)
        var_140:8.q = result
        int64_t var_130_2
        return Botan::deallocate_memory(result, (var_130_2 - result) s>> 2, 4)
else
    uint32_t var_e0
    int64_t var_70
    
    if (arg3.d == 1)
        if (x9 == 0)
            x = float.d(arg4) / 1.4426950408889634
            double v0_3 = log(x)
            uint64_t x8_16 = vcvtd_u64_f64(pow(v0_3 * x * v0_3, float.d(0x3fd5555555555555))
                * 1.9199999999999999 * 1.4426950408889634 + 0.0)
            uint64_t x8_17
            
            x8_17 = x8_16 u> 0x40 ? x8_16 : 0x40
            
            x9 = x8_17 << 1
        
        __builtin_memset(&var_140, 0, 0x18)
        int64_t var_128_1 = -1
        int32_t var_120_1 = 1
        Botan::random_prime(x21, x9, &var_140, 1, 2, 0x80)
        void* x0_16 = var_140.q
        int64_t var_130_1
        
        if (x0_16 != 0)
            var_140:8.q = x0_16
            Botan::deallocate_memory(x0_16, (var_130_1 - x0_16) s>> 2, 4)
        
        Botan::operator*(&var_80, 2)
        Botan::Modular_Reducer::Modular_Reducer(&var_140)
        void* x0_19 = var_b0
        
        if (x0_19 != 0)
            void* var_a8_4 = x0_19
            Botan::deallocate_memory(x0_19, (var_a0 - x0_19) s>> 2, 4)
        
        __builtin_memset(&var_b0, 0, 0x18)
        var_e0.q = 0
        int64_t var_d8_2 = 0
        int64_t var_98_3 = -1
        int32_t var_90_2 = 1
        int64_t var_d0_1 = 0
        int64_t var_c8_1 = -1
        int32_t var_c0_1 = 1
        int128_t var_170
        int64_t var_160
        
        while (Botan::BigInt::bits() != arg4
                || (Botan::is_prime(&var_e0, x21, 0x80, true) & 1) == 0)
            Botan::BigInt::randomize(&var_b0, x21, arg4.b)
            Botan::Modular_Reducer::reduce(&var_140)
            uint64_t var_1a8
            uint64_t x2_3 = var_1a8
            uint32_t* var_1c0
            uint32_t* var_1b8
            
            if (x2_3 == -1)
                void* x9_7 = var_1b8 - var_1c0
                
                if (var_1b8 == var_1c0)
                    x2_3 = 0
                else
                    void* x11_3
                    
                    x11_3 = x9_7 s>= 0 ? x9_7 : -ffffffffffffffff
                    
                    void* x10_3 = var_1c0 - var_1b8
                    void* x11_4
                    
                    x11_4 = x11_3 s< 1 ? x11_3 : 1
                    
                    x2_3 = x9_7 s>> 2
                    void* x9_8
                    
                    x9_8 = x10_3 s> x9_7 ? x10_3 : x9_7
                    
                    int64_t j_1 = x11_4 * (x9_8 u>> 2)
                    uint64_t x10_4 = 1
                    int32_t j
                    
                    do
                        int32_t x11_5 = *(var_1c0 - 4 + (j_1 << 2))
                        j = j_1
                        j_1 -= 1
                        x10_4 = zx.q(x10_4.d) & zx.q(((x11_5 - 1) & not.d(x11_5)) s>> 0x1f)
                        x2_3 -= x10_4
                    while (j != 1)
                
                var_1a8 = x2_3
            
            int32_t var_1a0
            Botan::BigInt::add2(&var_b0, var_1c0, x2_3, zx.q(var_1a0 != 1 ? 1 : 0))
            uint32_t var_54 = 1
            void* var_198
            int128_t v0_5
            int128_t v1_2
            v0_5, v1_2 = Botan::BigInt::add2(&var_198, &var_54, 1, 1)
            v1_2 = var_e0.o
            var_e0.o = var_170
            int64_t x8_25 = var_d0_1
            int64_t x12_3 = var_c8_1
            var_d0_1 = var_160
            int64_t var_158
            var_c8_1 = var_158
            int32_t x9_11 = var_c0_1
            uint64_t x0_27 = v1_2.q
            int32_t var_150
            var_c0_1 = var_150
            var_170 = v1_2
            var_160 = x8_25
            var_158 = x12_3
            var_150 = x9_11
            
            if (x0_27 != 0)
                var_170:8.q = x0_27
                Botan::deallocate_memory(x0_27, (x8_25 - x0_27) s>> 2, 4)
            
            void* x0_28 = var_198
            
            if (x0_28 != 0)
                void* var_190_1 = x0_28
                int64_t var_188
                Botan::deallocate_memory(x0_28, (var_188 - x0_28) s>> 2, 4)
            
            if (var_1c0 != 0)
                var_1b8 = var_1c0
                int64_t var_1b0
                Botan::deallocate_memory(var_1c0, (var_1b0 - var_1c0) s>> 2, 4)
        
        sub_d170a8(&var_170, &var_e0, &var_80)
        void** x0_38 = operator new(0x188)
        x0_38[2] = 0
        *x0_38 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::DL_Group_Data, std::__ndk1::allocator<Botan::DL_Group_Data> >
            + 0x10
        x0_38[1] = 0
        Botan::DL_Group_Data::DL_Group_Data(&x0_38[3], &var_e0, &var_80, &var_170)
        int64_t* x20_4 = *(arg1 + 8)
        *arg1 = &x0_38[3]
        *(arg1 + 8) = x0_38
        int64_t x9_13
        
        if (x20_4 != 0)
            int32_t i_1
            
            do
                x9_13 = __ldaxr(&x20_4[1])
                i_1 = __stlxr(x9_13 - 1, &x20_4[1])
            while (i_1 != 0)
        
        void* x0_40
        
        if (x20_4 != 0 && x9_13 == 0)
            (*(*x20_4 + 0x10))(x20_4)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_40 = var_170.q
            
            if (x0_40 != 0)
                var_170:8.q = x0_40
                Botan::deallocate_memory(x0_40, (var_160 - x0_40) s>> 2, 4)
        else
            x0_40 = var_170.q
            
            if (x0_40 != 0)
                var_170:8.q = x0_40
                Botan::deallocate_memory(x0_40, (var_160 - x0_40) s>> 2, 4)
        void* x0_41 = var_e0.q
        
        if (x0_41 != 0)
            void* var_d8_3 = x0_41
            Botan::deallocate_memory(x0_41, (var_d0_1 - x0_41) s>> 2, 4)
        
        void* x0_42 = var_b0
        
        if (x0_42 != 0)
            void* var_a8_6 = x0_42
            int64_t var_a0_2
            Botan::deallocate_memory(x0_42, (var_a0_2 - x0_42) s>> 2, 4)
        
        void* var_118
        
        if (var_118 != 0)
            void* var_110_1 = var_118
            int64_t var_108
            Botan::deallocate_memory(var_118, (var_108 - var_118) s>> 2, 4)
        
        void* x0_44 = var_140.q
        
        if (x0_44 != 0)
            var_140:8.q = x0_44
            Botan::deallocate_memory(x0_44, (var_130_1 - x0_44) s>> 2, 4)
        
        result = var_80.q
        
        if (result != 0)
            var_80:8.q = result
            return Botan::deallocate_memory(result, (var_70 - result) s>> 2, 4)
    else
        if (arg3.d != 0)
            void** x0_59 = __cxa_allocate_exception(0x20)
            int64_t x0_60
            int128_t v0_8
            x0_60, v0_8 = operator new(0x20)
            int64_t var_130_4 = x0_60
            var_140 = data_71bd10
            __builtin_strncpy(x0_60, "DL_Group unknown PrimeType", 0x1b)
            *x0_59 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_59[1])
            *x0_59 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_59, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        if (x9 != 0 && arg4 - 1 != x9)
            void** x0_63 = __cxa_allocate_exception(0x20)
            int64_t x0_64
            int128_t v0_9
            x0_64, v0_9 = operator new(0x40)
            int64_t var_130_5 = x0_64
            var_140 = data_71b210
            __builtin_strncpy(x0_64, "Cannot create strong-prime DL_Group with specified q bits", 
                0x3a)
            *x0_63 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_63[1])
            *x0_63 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_63, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        Botan::random_safe_prime(x21, arg4)
        var_e0 = 1
        Botan::BigInt::add2(&var_140, &var_e0, 1, 0)
        Botan::operator>>(&var_b0, 1)
        void* x0_3 = var_b0
        
        if (x0_3 != 0)
            void* var_a8_1 = x0_3
            Botan::deallocate_memory(x0_3, (var_a0 - x0_3) s>> 2, 4)
        
        __builtin_memset(&var_b0, 0, 0x18)
        int32_t var_90_1 = 1
        int64_t var_98_1 = -1
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_b0)
        *var_b0 = 2
        void* x8_5 = var_b0
        int64_t var_98_2 = -1
        int64_t var_a8_2
        
        if ((var_a8_2 - x8_5) s>> 2 u>= 2)
            *(x8_5 + 4) = 0
        
        int64_t var_a0_1
        
        if (Botan::jacobi(&var_b0, &var_140) != 1)
            int64_t (* const x20_1)() = Botan::PRIMES
            int64_t i_4 = 0x198c
            int64_t i_2
            
            do
                *x20_1
                i_2 = i_4
                Botan::BigInt::BigInt(&var_e0)
                void* x0_8 = var_b0
                var_b0.o = var_e0.o
                int64_t x8_6 = var_a0_1
                int64_t x12_1 = var_98_2
                int64_t var_d0
                var_a0_1 = var_d0
                int64_t var_c8
                var_98_2 = var_c8
                int32_t x9_5 = var_90_1
                int32_t var_c0
                var_90_1 = var_c0
                var_e0.q = x0_8
                var_d0 = x8_6
                var_c8 = x12_1
                var_c0 = x9_5
                
                if (x0_8 != 0)
                    void* var_d8_1 = x0_8
                    Botan::deallocate_memory(x0_8, (x8_6 - x0_8) s>> 2, 4)
                
                if (Botan::jacobi(&var_b0, &var_140) == 1)
                    break
                
                i_4 = i_2 - 1
                x20_1 += 2
            while (i_2 != 0)
        
        int64_t* x0_11 = operator new(0x188)
        x0_11[2] = 0
        *x0_11 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::DL_Group_Data, std::__ndk1::allocator<Botan::DL_Group_Data> >
            + 0x10
        x0_11[1] = 0
        Botan::DL_Group_Data::DL_Group_Data(&x0_11[3], &var_140, &var_80, &var_b0)
        int64_t* x20_2 = *(arg1 + 8)
        *arg1 = &x0_11[3]
        *(arg1 + 8) = x0_11
        int64_t x9_6
        
        if (x20_2 != 0)
            int32_t i_3
            
            do
                x9_6 = __ldaxr(&x20_2[1])
                i_3 = __stlxr(x9_6 - 1, &x20_2[1])
            while (i_3 != 0)
        
        void* var_a8_3
        void* x0_13
        
        if (x20_2 != 0 && x9_6 == 0)
            (*(*x20_2 + 0x10))(x20_2)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_13 = var_b0
            
            if (x0_13 != 0)
                var_a8_3 = x0_13
                Botan::deallocate_memory(x0_13, (var_a0_1 - x0_13) s>> 2, 4)
        else
            x0_13 = var_b0
            
            if (x0_13 != 0)
                var_a8_3 = x0_13
                Botan::deallocate_memory(x0_13, (var_a0_1 - x0_13) s>> 2, 4)
        void* x0_14 = var_80.q
        
        if (x0_14 != 0)
            var_80:8.q = x0_14
            Botan::deallocate_memory(x0_14, (var_70 - x0_14) s>> 2, 4)
        
        result = var_140.q
        
        if (result != 0)
            var_140:8.q = result
            int64_t var_130
            return Botan::deallocate_memory(result, (var_130 - result) s>> 2, 4)
return result
