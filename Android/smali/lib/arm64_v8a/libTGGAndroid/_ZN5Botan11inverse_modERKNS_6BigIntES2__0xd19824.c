// 函数: _ZN5Botan11inverse_modERKNS_6BigIntES2_
// 地址: 0xd19824
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg2 + 0x18)

if (x9 == -1)
    int64_t x8 = *arg2
    int64_t x11_1 = *(arg2 + 8)
    int64_t x10_1 = x11_1 - x8
    
    if (x11_1 == x8)
        x9 = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x8 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x9 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_16 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x8 - 4 + (i_16 << 2))
            i = i_16
            i_16 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x9 -= x11_3
        while (i != 1)
    
    *(arg2 + 0x18) = x9

if (x9 == 0)
    void* x0_35 = __cxa_allocate_exception(0x20)
    Botan::BigInt::DivideByZero::DivideByZero()
    __cxa_throw(x0_35, _typeinfo_for_Botan::BigInt::DivideByZero, Botan::Exception::~Exception)
    noreturn

int128_t var_80

if (*(arg2 + 0x20) == 0 || *(arg1 + 0x20) == 0)
    void** x0_30 = __cxa_allocate_exception(0x20)
    int64_t x0_31
    int128_t v0_4
    x0_31, v0_4 = operator new(0x30)
    (*" be non-negative")[0].o
    int64_t var_70_1 = x0_31
    v0_4 = data_71cfc0
    __builtin_strncpy(x0_31, "inverse_mod: arguments must be non-negative", 0x2c)
    var_80 = v0_4
    *x0_30 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_30[1])
    *x0_30 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_30, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x8_4 = *(arg1 + 0x18)
int128_t* entry_x8

if (x8_4 == -1)
    int64_t x9_1 = *arg1
    int64_t x11_4 = *(arg1 + 8)
    int64_t x10_4 = x11_4 - x9_1
    
    if (x11_4 != x9_1)
        int64_t x12_5
        
        x12_5 = x10_4 s>= 0 ? x10_4 : -1
        
        int64_t x11_5 = x9_1 - x11_4
        int64_t x12_6
        
        x12_6 = x12_5 s< 1 ? x12_5 : 1
        
        int64_t x8_5 = x10_4 s>> 2
        int64_t x10_5
        
        x10_5 = x11_5 s> x10_4 ? x11_5 : x10_4
        
        int64_t i_17 = x12_6 * (x10_5 u>> 2)
        uint64_t x11_6 = 1
        int64_t i_1
        
        do
            int32_t x12_7 = *(x9_1 - 4 + (i_17 << 2))
            i_1 = i_17
            i_17 -= 1
            x11_6 = zx.q(x11_6.d) & zx.q(((x12_7 - 1) & not.d(x12_7)) s>> 0x1f)
            x8_5 -= x11_6
        while (i_1 != 1)
        *(arg1 + 0x18) = x8_5
        
        if (x8_5 != 0)
            goto label_d19950
        
        goto label_d19980
    
    *(arg1 + 0x18) = 0
label_d19980:
    __builtin_memset(entry_x8, 0, 0x18)
    *(entry_x8 + 0x18) = -1
    entry_x8[2].d = 1
    return 

if (x8_4 == 0)
    goto label_d19980

label_d19950:
char* x8_6 = *arg1
char* x8_8
int64_t x13_3

if (*(arg1 + 8) == x8_6 || (zx.d(*x8_6) & 1) == 0)
    x8_8 = *arg2
    x13_3 = *(arg2 + 8)
    
    if (x13_3 == x8_8 || (zx.d(*x8_8) & 1) == 0)
        goto label_d19980
else
    x8_8 = *arg2
    x13_3 = *(arg2 + 8)

int64_t var_70

if (x13_3 != x8_8 && (zx.d(*x8_8) & 1) != 0)
    if ((Botan::BigInt::is_less_than(arg1) & 1) != 0)
        return sub_dd05c0(entry_x8, arg1, arg2) __tailcall
    
    Botan::ct_modulo(arg1, arg2)
    sub_dd05c0(entry_x8, &var_80, arg2)
    arg1 = var_80.q
    
    if (arg1 != 0)
        var_80:8.q = arg1
        Botan::deallocate_memory(arg1, (var_70 - arg1) s>> 2, 4)
    
    return 

void* x14_1 = x13_3 - x8_8
int32_t x9_6
int64_t x10_7

if (x13_3 == x8_8)
    x9_6 = 0
    x10_7 = 0
else
    void* x15_1
    
    x15_1 = x14_1 s>= 0 ? x14_1 : -ffffffffffffffff
    
    void* x13_4 = x8_8 - x13_3
    void* x15_2
    
    x15_2 = x15_1 s< 1 ? x15_1 : 1
    
    void* x13_5
    
    x13_5 = x13_4 s> x14_1 ? x13_4 : x14_1
    
    x10_7 = 0
    int64_t i_2 = 0
    x9_6 = 0
    
    do
        int32_t x14_2
        
        if (x14_1 s>> 2 u> i_2)
            x14_2 = *(x8_8 + (i_2 << 2))
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
        i_2 += 1
        x10_7 += zx.q(((x16_4 & 0xfffffffe) | (x15_4 & 0x80000000) u>> 0x1f | x17_4 | x17_8
            | x17_12) + (((x14_5 u>> x17_12 & 1) - 1) u>> 0x1f)) & zx.q(not.d(x9_6))
        x9_6 |= not.d(x15_4 s>> 0x1f)
    while (x15_2 * (x13_5 u>> 2) != i_2)

uint64_t x21_1 = zx.q(x10_7.d) & zx.q(x9_6)

if (x21_1.d == 0)
    Botan::assertion_failure("mod_lz > 0", &data_793a18, "inverse_mod", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe4c1)
    sub_c776cc(Botan::assertion_failure("mod_bits > mod_lz", &data_793a18, "inverse_mod", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe4c3))
    noreturn

int64_t x0_5 = Botan::BigInt::bits()

if (x0_5 u<= x21_1)
    sub_c776cc(Botan::assertion_failure("mod_bits > mod_lz", &data_793a18, "inverse_mod", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe4c3))
    noreturn

if (x0_5 - 1 == x21_1)
    return sub_dd0d58(entry_x8, arg1, x21_1) __tailcall

Botan::operator>>(arg2, x21_1)
Botan::ct_modulo(arg1, &var_80)
uint32_t* var_d0
void* var_a8
sub_dd05c0(&var_d0, &var_a8, &var_80)
int32_t* var_f8
sub_dd0d58(&var_f8, arg1, x21_1)
int32_t var_b0
int64_t var_c8
int64_t i_22

if (var_b0 == 0)
label_d19c68:
    int32_t var_d8
    
    if (var_d8 != 0)
        int64_t i_20
        int64_t i_12 = i_20
        
        if (i_12 == -1)
            int32_t* x9_12 = var_f8
            int64_t var_f0
            void* x10_15 = var_f0 - x9_12
            
            if (var_f0 == x9_12)
                i_12 = 0
            else
                void* x12_17
                
                x12_17 = x10_15 s>= 0 ? x10_15 : -ffffffffffffffff
                
                void* x11_18 = x9_12 - var_f0
                void* x12_18
                
                x12_18 = x12_17 s< 1 ? x12_17 : 1
                
                i_12 = x10_15 s>> 2
                void* x10_16
                
                x10_16 = x11_18 s> x10_15 ? x11_18 : x10_15
                
                int64_t i_19 = x12_18 * (x10_16 u>> 2)
                uint64_t x11_19 = 1
                int64_t i_3
                
                do
                    int32_t x12_19 = *(x9_12 - 4 + (i_19 << 2))
                    i_3 = i_19
                    i_19 -= 1
                    x11_19 = zx.q(x11_19.d) & zx.q(((x12_19 - 1) & not.d(x12_19)) s>> 0x1f)
                    i_12 -= x11_19
                while (i_3 != 1)
            
            int64_t i_21 = i_12
        
        if (i_12 u<= 1)
            if (i_12 == 0)
                goto label_d19ddc
            
            int32_t* x9_14 = var_f8
            int32_t x10_18 = 0
            int64_t i_4
            
            do
                int32_t x11_20 = *x9_14
                x9_14 = &x9_14[1]
                i_4 = i_12
                i_12 -= 1
                int32_t x11_22 = ((x11_20 - 1) & not.d(x11_20)) s>> 0x1f
                x10_18 = (x10_18 & x11_22) | (not.d(x11_22) & 1)
            while (i_4 != 1)
            
            if (x10_18 == 0)
                goto label_d19ddc
    
    uint64_t x25_1 = x21_1 u>> 5
    int64_t var_108_1 = -1
    void* var_120
    __builtin_memset(&var_120, 0, 0x18)
    int32_t var_100_1 = 1
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_120)
    *(var_120 + (x25_1 << 2)) = 1 << x21_1.d
    void* var_148
    sub_dd0d58(&var_148, &var_80, x21_1)
    int64_t i_23 = i_22
    uint64_t x22_1 = var_d0
    
    if (i_23 == -1)
        int64_t x9_16 = var_c8 - x22_1
        
        if (var_c8 == x22_1)
            i_23 = 0
        else
            int64_t x11_25
            
            x11_25 = x9_16 s>= 0 ? x9_16 : -1
            
            int64_t x10_20 = x22_1 - var_c8
            int64_t x11_26
            
            x11_26 = x11_25 s< 1 ? x11_25 : 1
            
            i_23 = x9_16 s>> 2
            int64_t x9_17
            
            x9_17 = x10_20 s> x9_16 ? x10_20 : x9_16
            
            int64_t i_14 = x11_26 * (x9_17 u>> 2)
            uint64_t x10_21 = 1
            int64_t i_5
            
            do
                int32_t x11_27 = *(x22_1 - 4 + (i_14 << 2))
                i_5 = i_14
                i_14 -= 1
                x10_21 = zx.q(x10_21.d) & zx.q(((x11_27 - 1) & not.d(x11_27)) s>> 0x1f)
                i_23 -= x10_21
            while (i_5 != 1)
        
        int64_t i_24 = i_23
    
    Botan::BigInt::add2(&var_f8, x22_1, i_23, zx.q(var_b0 != 1 ? 1 : 0))
    void* var_198
    Botan::operator*(&var_148, &var_198)
    void* x0_18 = var_198
    int64_t var_188
    
    if (x0_18 != 0)
        void* var_190_1 = x0_18
        Botan::deallocate_memory(x0_18, (var_188 - x0_18) s>> 2, 4)
    
    uint32_t* var_170
    uint32_t* x8_22 = var_170
    int32_t var_150_1 = 1
    int64_t var_168
    int64_t x9_21 = (var_168 - x8_22) s>> 2
    
    if (x25_1 u< x9_21)
        if (x9_21 != x25_1 + 1)
            int64_t x2_10 = (x9_21 - (x25_1 + 1)) << 2
            
            if (x2_10 != 0)
                memset(&x8_22[x25_1 + 1], 0, x2_10)
                x8_22 = var_170
        
        x8_22[x25_1] &= not.d(0xffffffff << (x21_1.d & 0x1f))
        int64_t var_158_1 = -1
        goto label_d19ec4
    
    int64_t var_158
    int64_t x21_3 = var_158
    uint32_t* x1_17
    int64_t x2_11
    
    if (x21_3 == -1)
    label_d19ec4:
        x1_17 = var_170
        void* x8_23 = var_168 - x1_17
        
        if (var_168 == x1_17)
            x21_3 = 0
            x2_11 = 0
            var_158 = 0
        else
            void* x10_26
            
            x10_26 = x8_23 s>= 0 ? x8_23 : -ffffffffffffffff
            
            void* x9_25 = x1_17 - var_168
            void* x10_27
            
            x10_27 = x10_26 s< 1 ? x10_26 : 1
            
            void* x11_29
            
            x11_29 = x9_25 s> x8_23 ? x9_25 : x8_23
            
            x2_11 = x8_23 s>> 2
            int64_t i_6 = x10_27 * (x11_29 u>> 2) - 1
            uint64_t x11_31 = 1
            x21_3 = x2_11
            
            do
                int32_t x12_23 = x1_17[i_6]
                i_6 -= 1
                x11_31 = zx.q(x11_31.d) & zx.q(((x12_23 - 1) & not.d(x12_23)) s>> 0x1f)
                x21_3 -= x11_31
            while (i_6 != -1)
            
            var_158 = x21_3
            
            if (x21_3 == -1)
                if (x8_23 == 0)
                    x2_11 = 0
                else
                    void* x11_32
                    
                    x11_32 = x8_23 s>= 0 ? x8_23 : -ffffffffffffffff
                    
                    void* x11_33
                    
                    x11_33 = x11_32 s< 1 ? x11_32 : 1
                    
                    void* x8_24
                    
                    x8_24 = x9_25 s> x8_23 ? x9_25 : x8_23
                    
                    int64_t i_13 = x11_33 * (x8_24 u>> 2)
                    uint64_t x9_26 = 1
                    int64_t i_7
                    
                    do
                        int32_t x11_34 = *(x1_17 - 4 + (i_13 << 2))
                        i_7 = i_13
                        i_13 -= 1
                        x9_26 = zx.q(x9_26.d) & zx.q(((x11_34 - 1) & not.d(x11_34)) s>> 0x1f)
                        x2_11 -= x9_26
                    while (i_7 != 1)
                
                x21_3 = 1
                var_158 = x2_11
            else
                x2_11 = x21_3
    else
        x1_17 = var_170
        x2_11 = x21_3
    
    Botan::BigInt::add2(&var_120, x1_17, x2_11, zx.q(var_150_1 != 1 ? 1 : 0))
    int32_t var_150
    Botan::BigInt::ct_cond_assign(&var_170, zx.q(var_150 == 0 ? 1 : 0) & zx.q(x21_3 != 0 ? 1 : 0))
    void* x0_22 = var_198
    
    if (x0_22 != 0)
        void* var_190_2 = x0_22
        Botan::deallocate_memory(x0_22, (var_188 - x0_22) s>> 2, 4)
    
    Botan::BigInt::operator*=(&var_170)
    
    if (i_23 == -1)
        int64_t x9_28 = var_c8 - x22_1
        
        if (var_c8 == x22_1)
            i_23 = 0
        else
            int64_t x11_36
            
            x11_36 = x9_28 s>= 0 ? x9_28 : -1
            
            int64_t x10_30 = x22_1 - var_c8
            int64_t x11_37
            
            x11_37 = x11_36 s< 1 ? x11_36 : 1
            
            i_23 = x9_28 s>> 2
            int64_t x9_29
            
            x9_29 = x10_30 s> x9_28 ? x10_30 : x9_28
            
            int64_t i_15 = x11_37 * (x9_29 u>> 2)
            uint64_t x10_31 = 1
            int64_t i_8
            
            do
                int32_t x11_38 = *(x22_1 - 4 + (i_15 << 2))
                i_8 = i_15
                i_15 -= 1
                x10_31 = zx.q(x10_31.d) & zx.q(((x11_38 - 1) & not.d(x11_38)) s>> 0x1f)
                i_23 -= x10_31
            while (i_8 != 1)
        
        int64_t i_25 = i_23
    
    Botan::BigInt::add(&var_170, x22_1, i_23)
    entry_x8[2].d = 1
    int128_t v0_3 = var_170.o
    int64_t var_158_2 = -1
    int64_t var_160
    entry_x8[1].q = var_160
    *(entry_x8 + 0x18) = -1
    void* x0_25 = var_148
    *(entry_x8 + 0x18) = var_158
    __builtin_memset(&var_170, 0, 0x18)
    *entry_x8 = v0_3
    entry_x8[2].d = var_150_1
    int64_t var_138
    
    if (x0_25 != 0)
        Botan::deallocate_memory(x0_25, (var_138 - x0_25) s>> 2, 4)
    void* x0_26 = var_120
    
    if (x0_26 != 0)
        void* var_118_1 = x0_26
        int64_t var_110
        Botan::deallocate_memory(x0_26, (var_110 - x0_26) s>> 2, 4)
else
    int64_t i_11 = i_22
    
    if (i_11 == -1)
        uint32_t* x9_9 = var_d0
        void* x10_10 = var_c8 - x9_9
        
        if (var_c8 == x9_9)
            i_11 = 0
        else
            void* x12_12
            
            x12_12 = x10_10 s>= 0 ? x10_10 : -ffffffffffffffff
            
            void* x11_10 = x9_9 - var_c8
            void* x12_13
            
            x12_13 = x12_12 s< 1 ? x12_12 : 1
            
            i_11 = x10_10 s>> 2
            void* x10_11
            
            x10_11 = x11_10 s> x10_10 ? x11_10 : x10_10
            
            int64_t i_18 = x12_13 * (x10_11 u>> 2)
            uint64_t x11_11 = 1
            int64_t i_9
            
            do
                int32_t x12_14 = *(x9_9 - 4 + (i_18 << 2))
                i_9 = i_18
                i_18 -= 1
                x11_11 = zx.q(x11_11.d) & zx.q(((x12_14 - 1) & not.d(x12_14)) s>> 0x1f)
                i_11 -= x11_11
            while (i_9 != 1)
        
        i_22 = i_11
    
    if (i_11 u> 1)
        goto label_d19c68
    
    if (i_11 != 0)
        uint32_t* x9_11 = var_d0
        int32_t x10_13 = 0
        int64_t i_10
        
        do
            uint32_t x11_12 = *x9_11
            x9_11 = &x9_11[1]
            i_10 = i_11
            i_11 -= 1
            int32_t x11_14 = ((x11_12 - 1) & not.d(x11_12)) s>> 0x1f
            x10_13 = (x10_13 & x11_14) | (not.d(x11_14) & 1)
        while (i_10 != 1)
        
        if (x10_13 == 0)
            goto label_d19ddc
        
        goto label_d19c68
    
label_d19ddc:
    __builtin_memset(entry_x8, 0, 0x18)
    *(entry_x8 + 0x18) = -1
    entry_x8[2].d = 1
int32_t* x0_27 = var_f8
int64_t var_e8

if (x0_27 != 0)
    Botan::deallocate_memory(x0_27, (var_e8 - x0_27) s>> 2, 4)
uint32_t* x0_28 = var_d0
int64_t var_c0

if (x0_28 != 0)
    Botan::deallocate_memory(x0_28, (var_c0 - x0_28) s>> 2, 4)
void* x0_29 = var_a8

if (x0_29 != 0)
    void* var_a0_1 = x0_29
    int64_t var_98
    Botan::deallocate_memory(x0_29, (var_98 - x0_29) s>> 2, 4)

arg1 = var_80.q

if (arg1 != 0)
    var_80:8.q = arg1
    Botan::deallocate_memory(arg1, (var_70 - arg1) s>> 2, 4)
