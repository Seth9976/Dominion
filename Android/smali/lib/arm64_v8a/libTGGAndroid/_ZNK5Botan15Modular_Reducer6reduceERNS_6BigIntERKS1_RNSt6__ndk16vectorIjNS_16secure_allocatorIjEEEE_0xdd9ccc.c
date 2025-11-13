// 函数: _ZNK5Botan15Modular_Reducer6reduceERNS_6BigIntERKS1_RNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd9ccc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_90

if (arg2 == arg3)
    void** x0_18 = __cxa_allocate_exception(0x20)
    int64_t x0_19
    int128_t v0_9
    x0_19, v0_9 = operator new(0x30)
    v0_9 = data_71b5b0
    int64_t var_80_1 = x0_19
    __builtin_strncpy(x0_19, "Modular_Reducer arguments cannot alias", 0x27)
    var_90 = v0_9
    *x0_18 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_18[1])
    *x0_18 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_18, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int64_t x8 = *(arg1 + 0x50)

if (x8 == 0)
    void** x0_23 = __cxa_allocate_exception(0x20)
    int64_t x0_24
    int128_t v0_10
    x0_24, v0_10 = operator new(0x30)
    v0_10 = data_71c510
    int64_t var_80_2 = x0_24
    __builtin_strncpy(x0_24, "Modular_Reducer: Never initalized", 0x22)
    var_90 = v0_10
    *x0_23 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_23[1])
    *x0_23 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_23, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x23 = *(arg3 + 0x18)

if (x23 == -1)
    int64_t x8_3 = *arg3
    int64_t x10_2 = *(arg3 + 8)
    int64_t x9_3 = x10_2 - x8_3
    
    if (x10_2 == x8_3)
        x23 = nullptr
        *(arg3 + 0x18) = 0
        
        if (0 u> *(arg1 + 0x50) << 1)
            goto label_dd9d2c
        
        goto label_dd9dd8
    
    int64_t x11_2
    
    x11_2 = x9_3 s>= 0 ? x9_3 : -1
    
    int64_t x10_3 = x8_3 - x10_2
    int64_t x11_3
    
    x11_3 = x11_2 s< 1 ? x11_2 : 1
    
    x23 = x9_3 s>> 2
    int64_t x9_4
    
    x9_4 = x10_3 s> x9_3 ? x10_3 : x9_3
    
    int64_t i_11 = x11_3 * (x9_4 u>> 2)
    uint64_t x10_4 = 1
    int64_t i
    
    do
        int32_t x11_4 = *(x8_3 - 4 + (i_11 << 2))
        i = i_11
        i_11 -= 1
        x10_4 = zx.q(x10_4.d) & zx.q(((x11_4 - 1) & not.d(x11_4)) s>> 0x1f)
        x23 -= x10_4
    while (i != 1)
    *(arg3 + 0x18) = x23
    
    if (x23 u> *(arg1 + 0x50) << 1)
        goto label_dd9d2c
    
    goto label_dd9dd8

void* result

if (x23 u<= x8 << 1)
label_dd9dd8:
    *(arg3 + 8)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(arg2, 
        *arg3)
    int64_t x8_6 = *(arg3 + 0x18)
    *(arg2 + 0x20) = 1
    *(arg2 + 0x18) = x8_6
    *(arg1 + 0x50)
    uint64_t x0_4 = Botan::BigInt::mul(Botan::BigInt::operator>>=(arg2), arg1 + 0x28)
    *(arg1 + 0x50)
    Botan::BigInt::mul(Botan::BigInt::operator>>=(x0_4), arg1)
    int64_t x8_12 = *(arg1 + 0x50) << 5
    
    if (x8_12 == -0x20)
        int64_t x8_17 = *(arg2 + 0x10)
        int64_t x0_7 = *arg2
        size_t x9_9 = x8_17 - x0_7
        size_t x2_4 = *(arg2 + 8) - x0_7
        int64_t x10_9 = x9_9 s>> 2
        int64_t x11_6 = x2_4 s>> 2
        
        if (x10_9 u> x11_6)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
            x0_7 = *arg2
            x2_4 = *(arg2 + 8) - x0_7
        else if (x10_9 u< x11_6)
            x2_4 = x9_9
            *(arg2 + 8) = x8_17
        
        if (x2_4 != 0)
            memset(x0_7, 0, x2_4)
        
        *(arg2 + 0x18) = 0
    else
        int64_t x8_13 = *arg2
        uint64_t x24_1 = (x8_12 + 0x20) u>> 5
        int64_t x10_6 = (*(arg2 + 8) - x8_13) s>> 2
        
        if (x24_1 u< x10_6)
            if (x10_6 != x24_1 + 1)
                int64_t x2_3 = (x10_6 - (x24_1 + 1)) << 2
                
                if (x2_3 != 0)
                    memset(x8_13 + ((x24_1 + 1) << 2), 0, x2_3)
                    x8_13 = *arg2
            
            *(x8_13 + (x24_1 << 2)) = 0
            *(arg2 + 0x18) = -1
    
    void* x8_20 = *(arg1 + 0x50)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x2_5
    
    if (x8_20 + 1 u>= x23)
        x2_5 = x23
    else
        x2_5 = x8_20 + 1
    
    Botan::BigInt::rev_sub(arg2, *arg3, x2_5)
    uint64_t* entry_x3
    uint64_t x0_10 = *entry_x3
    size_t x2_6 = entry_x3[1] - x0_10
    int32_t x23_1 = *(arg2 + 0x20) == 0 ? 1 : 0
    
    if (*(arg1 + 0x50) + 2 u> x2_6 s>> 2)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x3)
        x0_10 = *entry_x3
        x2_6 = entry_x3[1] - x0_10
    
    if (x2_6 != 0)
        memset(x0_10, 0, x2_6)
        x0_10 = *entry_x3
    
    *(x0_10 + (*(arg1 + 0x50) << 2) + 4) = x23_1
    uint128_t v0_1
    uint128_t v1_1
    uint128_t v2_1
    uint128_t v3_1
    v0_1, v1_1, v2_1, v3_1 = Botan::BigInt::ct_reduce_below(
        Botan::BigInt::add(arg2, *entry_x3, *(arg1 + 0x50) + 2), arg1, entry_x3)
    int64_t x23_2 = *(arg2 + 0x18)
    
    if (x23_2 == -1)
        int64_t x8_27 = *arg2
        int64_t x10_11 = *(arg2 + 8)
        int64_t x9_13 = x10_11 - x8_27
        
        if (x10_11 == x8_27)
            x23_2 = 0
        else
            int64_t x11_7
            
            x11_7 = x9_13 s>= 0 ? x9_13 : -1
            
            int64_t x10_12 = x8_27 - x10_11
            int64_t x11_8
            
            x11_8 = x11_7 s< 1 ? x11_7 : 1
            
            x23_2 = x9_13 s>> 2
            int64_t x9_14
            
            x9_14 = x10_12 s> x9_13 ? x10_12 : x9_13
            
            int64_t i_12 = x11_8 * (x9_14 u>> 2)
            uint64_t x10_13 = 1
            int64_t i_1
            
            do
                int32_t x11_9 = *(x8_27 - 4 + (i_12 << 2))
                i_1 = i_12
                i_12 -= 1
                x10_13 = zx.q(x10_13.d) & zx.q(((x11_9 - 1) & not.d(x11_9)) s>> 0x1f)
                x23_2 -= x10_13
            while (i_1 != 1)
        
        *(arg2 + 0x18) = x23_2
    
    int32_t x9_16 = *(arg3 + 0x20)
    
    if (*(arg2 + 0x20) != 1)
        void** x0_28 = __cxa_allocate_exception(0x20)
        int64_t x0_29
        int128_t v0_11
        x0_29, v0_11 = operator new(0x30)
        (*"this is positive")[0].o
        int64_t var_80_3 = x0_29
        v0_11 = data_71cbb0
        __builtin_strncpy(x0_29, "BigInt::sub_rev requires this is positive", 0x2a)
        var_90 = v0_11
        *x0_28 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_28[1])
        *x0_28 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_28, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn
    
    int32_t* x24_2 = *arg1
    int64_t fp_1 = *(arg1 + 8)
    int64_t x26_1 = x23_2
    void* x27_1 = fp_1 - x24_2
    int64_t x25_1 = x27_1 s>> 2
    
    if (x23_2 == -1)
        int64_t x8_30 = *arg2
        int64_t x10_14 = *(arg2 + 8)
        int64_t x9_17 = x10_14 - x8_30
        
        if (x10_14 == x8_30)
            x26_1 = 0
        else
            int64_t x11_11
            
            x11_11 = x9_17 s>= 0 ? x9_17 : -1
            
            int64_t x10_15 = x8_30 - x10_14
            int64_t x11_12
            
            x11_12 = x11_11 s< 1 ? x11_11 : 1
            
            x26_1 = x9_17 s>> 2
            int64_t x9_18
            
            x9_18 = x10_15 s> x9_17 ? x10_15 : x9_17
            
            int64_t i_13 = x11_12 * (x9_18 u>> 2)
            uint64_t x10_16 = 1
            int64_t i_2
            
            do
                int32_t x11_13 = *(x8_30 - 4 + (i_13 << 2))
                i_2 = i_13
                i_13 -= 1
                x10_16 = zx.q(x10_16.d) & zx.q(((x11_13 - 1) & not.d(x11_13)) s>> 0x1f)
                x26_1 -= x10_16
            while (i_2 != 1)
        
        *(arg2 + 0x18) = x26_1
    
    uint64_t x0_14 = *entry_x3
    int64_t x8_32 = entry_x3[1]
    int64_t x21_1
    
    x21_1 = x26_1 u< x25_1 ? x25_1 : x26_1
    
    int64_t x9_21 = (x8_32 - x0_14) s>> 2
    
    if (x21_1 u> x9_21)
        v0_1, v1_1, v2_1, v3_1 =
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x3)
        x0_14 = *entry_x3
        x8_32 = entry_x3[1]
    else if (x21_1 u< x9_21)
        x8_32 = x0_14 + (x21_1 << 2)
        entry_x3[1] = x8_32
    
    if (x8_32 != x0_14)
        v0_1, v1_1, v2_1, v3_1 = memset(x0_14, 0, x8_32 - x0_14)
    
    int64_t x8_33 = *arg2
    int64_t x9_24 = (*(arg2 + 8) - x8_33) s>> 2
    
    if (x21_1 u> x9_24)
        if (x21_1 u<= (*(arg2 + 0x10) - x8_33) s>> 2 || (x21_1 & 0xfffffffffffffff8) + 8 u> x9_24)
            v0_1, v1_1, v2_1, v3_1 =
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
        else if ((x21_1 & 0xfffffffffffffff8) + 8 u< x9_24)
            *(arg2 + 8) = x8_33 + (((x21_1 & 0xfffffffffffffff8) + 8) << 2)
    
    uint64_t x0_17 = *entry_x3
    int32_t* x8_34 = *arg2
    int32_t x9_25 = 0
    int64_t x10_21
    
    x10_21 = x26_1 u> x25_1 ? x25_1 : x26_1
    
    if (x10_21 != 0)
        int64_t i_14 = neg.q(x10_21)
        int32_t* x11_15 = x8_34
        int32_t* x12_4 = x24_2
        int64_t i_3
        
        do
            int32_t x13_1 = *x11_15
            x11_15 = &x11_15[1]
            int32_t x14_1 = *x12_4
            x12_4 = &x12_4[1]
            i_3 = i_14
            i_14 += 1
            int32_t x15_1 = x14_1 ^ x13_1
            int32_t x15_2 = ((x15_1 - 1) & not.d(x15_1)) s>> 0x1f
            x9_25 = (x9_25 & x15_2)
                | ((((((x13_1 - x14_1) ^ x13_1) | x15_1) ^ x13_1) s>> 0x1f | 1) & not.d(x15_2))
        while (i_3 u< -1)
    
    if (x26_1 u< x25_1)
        void* x11_16
        
        x11_16 = x27_1 s>= 0 ? x27_1 : -ffffffffffffffff
        
        void* x10_22 = x24_2 - fp_1
        void* x11_17
        
        x11_17 = x11_16 s< 1 ? x11_16 : 1
        
        void* x12_5
        
        x12_5 = x10_22 s> x27_1 ? x10_22 : x27_1
        
        int64_t x13_7 = neg.q(x26_1) + x11_17 * (x12_5 u>> 2)
        int32_t x13_8
        int64_t x12_7
        
        if (x13_7 u>= 8)
            int64_t i_24 = x13_7 & 0xfffffffffffffff8
            v0_1.q = 0
            v0_1:8.q = 0
            x12_7 = x26_1 + i_24
            void* x15_4 = &x24_2[x26_1 + 4]
            int64_t i_21 = i_24
            v1_1.q = 0
            v1_1:8.q = 0
            int64_t i_4
            
            do
                v2_1 = *(x15_4 - 0x10)
                v3_1 = *x15_4
                i_4 = i_21
                i_21 -= 8
                x15_4 += 0x20
                v0_1 = vorrq_s8(v2_1, v0_1)
                v1_1 = vorrq_s8(v3_1, v1_1)
            while (i_4 != 8)
            uint128_t v0_2 = vorrq_s8(v1_1, v0_1)
            uint128_t v0_3 = vorrq_s8(v0_2, vdupq_laneq_s64(v0_2, 1))
            x13_8 = vorrq_s8(v0_3, vdupq_laneq_s32(v0_3, 1))
            
            if (x13_7 != i_24)
                goto label_dda28c
        else
            x13_8 = 0
            x12_7 = x26_1
        label_dda28c:
            void* x10_28
            
            x10_28 = x10_22 s> x27_1 ? x10_22 : x27_1
            
            int64_t i_15 = neg.q(x12_7) + x11_17 * (x10_28 u>> 2)
            void* x11_19 = &x24_2[x12_7]
            int64_t i_5
            
            do
                int32_t x12_8 = *x11_19
                x11_19 += 4
                i_5 = i_15
                i_15 -= 1
                x13_8 |= x12_8
            while (i_5 != 1)
        x9_25 |= not.d(((x13_8 - 1) & not.d(x13_8)) s>> 0x1f)
    else if (x26_1 u> x25_1)
        void* x10_23
        
        x10_23 = x27_1 s>= 0 ? x27_1 : -ffffffffffffffff
        
        void* x13_9 = x24_2 - fp_1
        void* x14_5
        
        x14_5 = x10_23 s< 1 ? x10_23 : 1
        
        void* x10_24
        
        x10_24 = x13_9 s> x27_1 ? x13_9 : x27_1
        
        int64_t x10_26 = x26_1 - x14_5 * (x10_24 u>> 2)
        int32_t x10_27
        int64_t x11_18
        
        if (x10_26 u>= 8)
            void* x15_5
            
            x15_5 = x13_9 s> x27_1 ? x13_9 : x27_1
            
            int64_t i_23 = x10_26 & 0xfffffffffffffff8
            v0_1.q = 0
            v0_1:8.q = 0
            x11_18 = x25_1 + i_23
            int64_t i_19 = i_23
            void* x14_9 = &x8_34[x14_5 * (x15_5 u>> 2) + 4]
            v1_1.q = 0
            v1_1:8.q = 0
            int64_t i_6
            
            do
                v2_1 = *(x14_9 - 0x10)
                v3_1 = *x14_9
                i_6 = i_19
                i_19 -= 8
                x14_9 += 0x20
                v0_1 = vorrq_s8(v2_1, v0_1)
                v1_1 = vorrq_s8(v3_1, v1_1)
            while (i_6 != 8)
            uint128_t v0_5 = vorrq_s8(v1_1, v0_1)
            uint128_t v0_6 = vorrq_s8(v0_5, vdupq_laneq_s64(v0_5, 1))
            x10_27 = vorrq_s8(v0_6, vdupq_laneq_s32(v0_6, 1))
            
            if (x10_26 != i_23)
                goto label_dda334
        else
            x10_27 = 0
            x11_18 = x25_1
        label_dda334:
            int64_t i_18 = x26_1 - x11_18
            void* x11_20 = &x8_34[x11_18]
            int64_t i_7
            
            do
                int32_t x13_10 = *x11_20
                x11_20 += 4
                i_7 = i_18
                i_18 -= 1
                x10_27 |= x13_10
            while (i_7 != 1)
        int32_t x10_33 = ((x10_27 - 1) & not.d(x10_27)) s>> 0x1f
        x9_25 = (x9_25 & x10_33) | (not.d(x10_33) & 1)
    
    int64_t x10_37
    
    if (x9_25 s< 0)
        x10_37 = x8_34 ^ x24_2
    else
        x10_37 = 0
    
    int64_t x9_29
    
    if (x9_25 s< 0)
        x9_29 = x26_1 ^ x25_1
    else
        x9_29 = 0
    
    uint64_t x2_10 = x9_29 ^ x26_1
    uint64_t x8_36 = x9_29 ^ x25_1
    uint64_t x4_1
    
    x4_1 = x8_36 u< x2_10 ? x8_36 : x2_10
    
    int128_t v0_8
    int128_t v1_6
    int128_t v2_2
    int128_t v3_2
    result, v0_8, v1_6, v2_2, v3_2 =
        Botan::bigint_sub3(x0_17, x10_37 ^ x8_34, x2_10, x10_37 ^ x24_2, x4_1)
    int32_t x8_38 =
        zx.d(*(arg2 + 0x20)) ^ ((x23_2 != 0 ? 1 : 0) & (x9_16 == 0 ? 1 : 0) & (x9_25 s> 0 ? 1 : 0))
    
    if (x8_38 == 0)
        int64_t x8_39 = *(arg2 + 0x18)
        
        if (x8_39 == -1)
            int64_t x9_31 = *arg2
            int64_t x11_22 = *(arg2 + 8)
            int64_t x10_38 = x11_22 - x9_31
            
            if (x11_22 == x9_31)
                x8_39 = 0
            else
                int64_t x12_9
                
                x12_9 = x10_38 s>= 0 ? x10_38 : -1
                
                int64_t x11_23 = x9_31 - x11_22
                int64_t x12_10
                
                x12_10 = x12_9 s< 1 ? x12_9 : 1
                
                x8_39 = x10_38 s>> 2
                int64_t x10_39
                
                x10_39 = x11_23 s> x10_38 ? x11_23 : x10_38
                
                int64_t i_16 = x12_10 * (x10_39 u>> 2)
                uint64_t x11_24 = 1
                int64_t i_8
                
                do
                    int32_t x12_11 = *(x9_31 - 4 + (i_16 << 2))
                    i_8 = i_16
                    i_16 -= 1
                    x11_24 = zx.q(x11_24.d) & zx.q(((x12_11 - 1) & not.d(x12_11)) s>> 0x1f)
                    x8_39 -= x11_24
                while (i_8 != 1)
            
            *(arg2 + 0x18) = x8_39
        
        x8_38 = x8_39 == 0 ? 1 : 0
    
    *(arg2 + 0x20) = x8_38
    *(arg2 + 0x18) = -1
    
    if (x21_1 != 0 && x23_2 != 0 && x9_16 == 0)
        void* x8_41 = *arg2
        uint64_t x9_33 = *entry_x3
        int64_t x10_41
        
        if (x21_1 u>= 8)
            x10_41 = x21_1 << 2
        
        int64_t i_22
        
        if (x21_1 u>= 8 && (x8_41 u>= x9_33 + x10_41 || x9_33 u>= x8_41 + x10_41))
            i_22 = x21_1 & 0xfffffffffffffff8
            void* x11_26 = x8_41 + 0x10
            void* x12_14 = x9_33 + 0x10
            int64_t i_20 = i_22
            int64_t i_9
            
            do
                v0_8 = *(x11_26 - 0x10)
                v3_2 = *x11_26
                v2_2 = *x12_14
                i_9 = i_20
                i_20 -= 8
                *(x11_26 - 0x10) = *(x12_14 - 0x10)
                *x11_26 = v2_2
                *(x12_14 - 0x10) = v0_8
                *x12_14 = v3_2
                x11_26 += 0x20
                x12_14 += 0x20
            while (i_9 != 8)
            
            if (x21_1 != i_22)
                goto label_dda470
        else
            i_22 = 0
        label_dda470:
            int64_t i_17 = x21_1 - i_22
            int64_t x10_43 = i_22 << 2
            int64_t x9_34 = x9_33 + x10_43
            int32_t* x8_42 = x8_41 + x10_43
            int64_t i_10
            
            do
                int32_t x12_13 = *x8_42
                i_10 = i_17
                i_17 -= 1
                *x8_42 = *x9_34
                x8_42 = &x8_42[1]
                *x9_34 = x12_13
                x9_34 += 4
            while (i_10 != 1)
else
label_dd9d2c:
    Botan::ct_modulo(arg3, arg1)
    int64_t var_80
    
    if (&var_90 == arg2)
        result = *arg2
        
        if (result != 0)
            var_90:8.q = result
            return Botan::deallocate_memory(result, (var_80 - result) s>> 2, 4)
    else
        result = *arg2
        var_90.q = result
        *arg2 = var_90
        int64_t x11_1 = *(arg2 + 0x10)
        int64_t x9_1 = *(arg2 + 0x18)
        *(arg2 + 0x10) = var_80
        int64_t var_78
        *(arg2 + 0x18) = var_78
        int64_t var_78_1 = x9_1
        int32_t x9_2 = *(arg2 + 0x20)
        int32_t var_70
        *(arg2 + 0x20) = var_70
        int32_t var_70_1 = x9_2
        
        if (result != 0)
            var_90:8.q = result
            return Botan::deallocate_memory(result, (x11_1 - result) s>> 2, 4)

return result
