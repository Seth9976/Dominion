// 函数: _ZN5Botan9power_modERKNS_6BigIntES2_S2_
// 地址: 0xd18b70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* entry_x8

if (*(arg3 + 0x20) == 0)
label_d18c90:
    __builtin_memset(entry_x8, 0, 0x18)
    *(entry_x8 + 0x18) = -1
    entry_x8[2].d = 1
    return 

int64_t i_11 = *(arg3 + 0x18)

if (i_11 == -1)
    int64_t x9_1 = *arg3
    int64_t x11_1 = *(arg3 + 8)
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        i_11 = 0
        *(arg3 + 0x18) = 0
        
        if (i_11 != 0)
            goto label_d18c38
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        i_11 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_12 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_12 << 2))
            i = i_12
            i_12 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            i_11 -= x11_3
        while (i != 1)
        *(arg3 + 0x18) = i_11
        
        if (i_11 u<= 1 && i_11 != 0)
            goto label_d18c38
else if (i_11 u<= 1 && i_11 != 0)
label_d18c38:
    int32_t* x9_3 = *arg3
    int32_t x10_4 = 0
    int64_t i_1
    
    do
        int32_t x11_4 = *x9_3
        x9_3 = &x9_3[1]
        i_1 = i_11
        i_11 -= 1
        int32_t x11_6 = (((x11_4 ^ 1) - 1) & not.d(x11_4)) s>> 0x1f
        x10_4 = (x10_4 & x11_6) | ((((x11_4 - 1) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
    while (i_1 != 1)
    
    if (x10_4 == 0)
        goto label_d18c90

int64_t x8 = *(arg1 + 0x18)

if (x8 == -1)
    int64_t x9_4 = *arg1
    int64_t x11_7 = *(arg1 + 8)
    int64_t x10_6 = x11_7 - x9_4
    
    if (x11_7 != x9_4)
        int64_t x12_10
        
        x12_10 = x10_6 s>= 0 ? x10_6 : -1
        
        int64_t x11_8 = x9_4 - x11_7
        int64_t x12_11
        
        x12_11 = x12_10 s< 1 ? x12_10 : 1
        
        int64_t x8_1 = x10_6 s>> 2
        int64_t x10_7
        
        x10_7 = x11_8 s> x10_6 ? x11_8 : x10_6
        
        int64_t i_13 = x12_11 * (x10_7 u>> 2)
        uint64_t x11_9 = 1
        int64_t i_2
        
        do
            int32_t x12_12 = *(x9_4 - 4 + (i_13 << 2))
            i_2 = i_13
            i_13 -= 1
            x11_9 = zx.q(x11_9.d) & zx.q(((x12_12 - 1) & not.d(x12_12)) s>> 0x1f)
            x8_1 -= x11_9
        while (i_2 != 1)
        *(arg1 + 0x18) = x8_1
        
        if (x8_1 != 0)
            goto label_d18d14
        
        goto label_d18f2c
    
    *(arg1 + 0x18) = 0
label_d18f2c:
    int64_t x8_14 = *(arg2 + 0x18)
    
    if (x8_14 == -1)
        int64_t x9_15 = *arg2
        int64_t x11_14 = *(arg2 + 8)
        int64_t x10_16 = x11_14 - x9_15
        int64_t x8_15
        
        if (x11_14 == x9_15)
            x8_15 = 0
        else
            int64_t x12_18
            
            x12_18 = x10_16 s>= 0 ? x10_16 : -1
            
            int64_t x11_15 = x9_15 - x11_14
            int64_t x12_19
            
            x12_19 = x12_18 s< 1 ? x12_18 : 1
            
            x8_15 = x10_16 s>> 2
            int64_t x10_17
            
            x10_17 = x11_15 s> x10_16 ? x11_15 : x10_16
            
            int64_t i_15 = x12_19 * (x10_17 u>> 2)
            uint64_t x11_16 = 1
            int64_t i_3
            
            do
                int32_t x12_20 = *(x9_15 - 4 + (i_15 << 2))
                i_3 = i_15
                i_15 -= 1
                x11_16 = zx.q(x11_16.d) & zx.q(((x12_20 - 1) & not.d(x12_20)) s>> 0x1f)
                x8_15 -= x11_16
            while (i_3 != 1)
        
        *(arg2 + 0x18) = x8_15
        __builtin_memset(entry_x8, 0, 0x18)
        
        if (x8_15 == 0)
            goto label_d19264
        
        *(entry_x8 + 0x18) = -1
        entry_x8[2].d = 1
    else
        __builtin_memset(entry_x8, 0, 0x18)
        
        if (x8_14 == 0)
        label_d19264:
            entry_x8[2].d = 1
            *(entry_x8 + 0x18) = -1
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
            **entry_x8 = 1
            void* x8_48 = *entry_x8
            int64_t x9_24 = *(entry_x8 + 8)
            *(entry_x8 + 0x18) = -1
            
            if ((x9_24 - x8_48) s>> 2 u>= 2)
                *(x8_48 + 4) = 0
        else
            *(entry_x8 + 0x18) = -1
            entry_x8[2].d = 1
    
    return 

if (x8 == 0)
    goto label_d18f2c

label_d18d14:
int64_t x8_2 = *(arg3 + 0x18)

if (x8_2 == -1)
    int64_t x9_13 = *arg3
    int64_t x11_11 = *(arg3 + 8)
    int64_t x10_13 = x11_11 - x9_13
    
    if (x11_11 == x9_13)
        *(arg3 + 0x18) = 0
        goto label_d18f2c
    
    int64_t x12_14
    
    x12_14 = x10_13 s>= 0 ? x10_13 : -1
    
    int64_t x11_12 = x9_13 - x11_11
    int64_t x12_15
    
    x12_15 = x12_14 s< 1 ? x12_14 : 1
    
    int64_t x8_13 = x10_13 s>> 2
    int64_t x10_14
    
    x10_14 = x11_12 s> x10_13 ? x11_12 : x10_13
    
    int64_t i_14 = x12_15 * (x10_14 u>> 2)
    uint64_t x11_13 = 1
    int64_t i_4
    
    do
        int32_t x12_16 = *(x9_13 - 4 + (i_14 << 2))
        i_4 = i_14
        i_14 -= 1
        x11_13 = zx.q(x11_13.d) & zx.q(((x12_16 - 1) & not.d(x12_16)) s>> 0x1f)
        x8_13 -= x11_13
    while (i_4 != 1)
    *(arg3 + 0x18) = x8_13
    
    if (x8_13 == 0)
        goto label_d18f2c
else if (x8_2 == 0)
    goto label_d18f2c

Botan::BigInt* var_b8
Botan::Modular_Reducer::Modular_Reducer(&var_b8)
int64_t x0_2 = Botan::BigInt::bits()
char* x8_3 = *arg3
Botan::BigInt* var_110
int32_t* var_e0

if (*(arg3 + 8) == x8_3 || (zx.d(*x8_3) & 1) == 0)
    __builtin_memset(&var_e0, 0, 0x18)
    int32_t var_c0_1 = 1
    int64_t var_c8_1 = -1
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_e0)
    *var_e0 = 1
    int32_t* x8_6 = var_e0
    int64_t var_c8_2 = -1
    int64_t var_d8
    
    if ((var_d8 - x8_6) s>> 2 u>= 2)
        x8_6[1] = 0
    
    Botan::Modular_Reducer::reduce(&var_b8)
    int64_t var_100
    uint64_t x0_10
    int64_t x23_2
    
    if (x0_2 == 0)
        x23_2 = 0
        x0_10 = 0
    else
        int64_t x27_1 = 0
        void* x22_1 = nullptr
        int64_t x24_2 = 0
        int64_t x26_1 = -1
        int32_t x28_1 = 1
        int128_t v0_2
        
        do
            Botan::Modular_Reducer::multiply(&var_b8, &var_110)
            int128_t var_170
            v0_2 = var_170
            int64_t var_160
            x23_2 = var_160
            int64_t var_158
            int64_t x25_1 = var_158
            int32_t var_150
            int32_t x26_2 = var_150
            var_170.q = x22_1
            int128_t var_140_1 = v0_2
            int64_t var_130_1 = x23_2
            int64_t var_128_1 = x25_1
            int32_t var_120_1 = x26_2
            
            if (x22_1 != 0)
                var_170:8.q = x22_1
                Botan::deallocate_memory(x22_1, (x27_1 - x22_1) s>> 2, 4)
            
            int128_t v0_3
            int128_t v1_1
            v0_3, v1_1 = Botan::Modular_Reducer::square(&var_b8)
            v1_1 = var_110.o
            int64_t x8_8 = var_100
            int64_t var_f8
            int64_t x11_10 = var_f8
            var_100 = x27_1
            var_f8 = x26_1
            int32_t var_f0
            int32_t x10_10 = var_f0
            uint64_t x0_8 = v1_1.q
            var_160 = x8_8
            var_158 = x11_10
            var_110.o = var_170
            var_170 = v1_1
            var_f0 = x28_1
            var_150 = x10_10
            
            if (x0_8 != 0)
                var_170:8.q = x0_8
                Botan::deallocate_memory(x0_8, (x8_8 - x0_8) s>> 2, 4)
            
            int64_t x8_10 = *arg2
            uint64_t x9_12 = x24_2 u>> 5
            int32_t x8_11
            
            if (x9_12 u>= (*(arg2 + 8) - x8_10) s>> 2)
                x8_11 = 0
            else
                x8_11 = *(x8_10 + (x9_12 << 2))
            
            Botan::BigInt::ct_cond_assign(&var_e0, zx.q(x8_11 u>> x24_2.d) & 1)
            x24_2 += 1
            x28_1 = x26_2
            x22_1 = v0_2.q
            x26_1 = x25_1
            x27_1 = x23_2
        while (x0_2 != x24_2)
        
        x0_10 = v0_2.q
    
    int128_t v0_1 = var_e0.o
    __builtin_memset(&var_e0, 0, 0x18)
    int64_t var_c8_3 = -1
    *entry_x8 = v0_1
    int64_t var_d0_1
    entry_x8[1].q = var_d0_1
    *(entry_x8 + 0x18) = var_c8_2
    entry_x8[2].d = var_c0_1
    int32_t var_c0_2 = 1
    
    if (x0_10 != 0)
        Botan::deallocate_memory(x0_10, (x23_2 - x0_10) s>> 2, 4)
    
    Botan::BigInt* x0_26 = var_110
    
    if (x0_26 != 0)
        Botan::BigInt* var_108_2 = x0_26
        Botan::deallocate_memory(x0_26, (var_100 - x0_26) s>> 2, 4)
    
    int32_t* x0_27 = var_e0
    
    if (x0_27 != 0)
        int32_t* var_d8_2 = x0_27
        int64_t var_d0_2
        Botan::deallocate_memory(x0_27, (var_d0_2 - x0_27) s>> 2, 4)
else
    int64_t* x0_11 = operator new(0xc8)
    x0_11[2] = 0
    x0_11[1] = 0
    *x0_11 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Params, std::__ndk1::allocator<Botan::Montgomery_Params> >
        + 0x10
    Botan::Montgomery_Params::Montgomery_Params(&x0_11[3], arg3)
    int32_t i_5
    
    do
        i_5 = __stxr(__ldxr(&x0_11[1]) + 1, &x0_11[1])
    while (i_5 != 0)
    Botan::Modular_Reducer::reduce(&var_b8)
    int64_t* x0_14 = operator new(0x50)
    x0_14[2] = 0
    x0_14[1] = 0
    *x0_14 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Exponentation_State const, std::__ndk1::allocator<Botan::Montgomery_Exponentation_State const> >
        + 0x10
    var_110 = &x0_11[3]
    int64_t* var_108_1 = x0_11
    int32_t i_6
    
    do
        i_6 = __stxr(__ldxr(&x0_11[1]) + 1, &x0_11[1])
    while (i_6 != 0)
    Botan::Montgomery_Exponentation_State::Montgomery_Exponentation_State(&x0_14[3], &var_110, 
        &var_e0, true)
    int64_t x8_22
    int32_t i_7
    
    do
        x8_22 = __ldaxr(&x0_11[1])
        i_7 = __stlxr(x8_22 - 1, &x0_11[1])
    while (i_7 != 0)
    
    if (x8_22 == 0)
        (*(*x0_11 + 0x10))(x0_11)
        std::__ndk1::__shared_weak_count::__release_weak()
    
    int32_t* x0_18 = var_e0
    
    if (x0_18 != 0)
        int32_t* var_d8_1 = x0_18
        int64_t var_d0
        Botan::deallocate_memory(x0_18, (var_d0 - x0_18) s>> 2, 4)
    
    int64_t x8_27
    int32_t i_8
    
    do
        x8_27 = __ldaxr(&x0_11[1])
        i_8 = __stlxr(x8_27 - 1, &x0_11[1])
    while (i_8 != 0)
    
    if (x8_27 == 0)
        (*(*x0_11 + 0x10))(x0_11)
        std::__ndk1::__shared_weak_count::__release_weak()
    
    Botan::Montgomery_Exponentation_State::exponentiation(&x0_14[3], arg2)
    int64_t x8_31
    int32_t i_9
    
    do
        x8_31 = __ldaxr(&x0_14[1])
        i_9 = __stlxr(x8_31 - 1, &x0_14[1])
    while (i_9 != 0)
    
    if (x8_31 == 0)
        (*(*x0_14 + 0x10))(x0_14)
        std::__ndk1::__shared_weak_count::__release_weak()
    
    int64_t x8_34
    int32_t i_10
    
    do
        x8_34 = __ldaxr(&x0_11[1])
        i_10 = __stlxr(x8_34 - 1, &x0_11[1])
    while (i_10 != 0)
    
    if (x8_34 == 0)
        (*(*x0_11 + 0x10))(x0_11)
        std::__ndk1::__shared_weak_count::__release_weak()
void* var_90

if (var_90 != 0)
    void* var_88_1 = var_90
    int64_t var_80
    Botan::deallocate_memory(var_90, (var_80 - var_90) s>> 2, 4)

arg1 = var_b8

if (arg1 != 0)
    Botan::BigInt const& var_b0_1 = arg1
    int64_t var_a8
    Botan::deallocate_memory(arg1, (var_a8 - arg1) s>> 2, 4)
