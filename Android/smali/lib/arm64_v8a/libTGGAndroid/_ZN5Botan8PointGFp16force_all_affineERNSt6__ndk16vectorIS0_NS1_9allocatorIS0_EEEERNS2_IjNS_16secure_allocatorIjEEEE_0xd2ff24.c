// 函数: _ZN5Botan8PointGFp16force_all_affineERNSt6__ndk16vectorIS0_NS1_9allocatorIS0_EEEERNS2_IjNS_16secure_allocatorIjEEEE
// 地址: 0xd2ff24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x23 = *arg1
int64_t* x8 = *(arg1 + 8)

if (((x8 - x23) s>> 3) * -0xf0f0f0f0f0f0f0f u>= 2)
    int128_t var_a0
    
    if (x8 == x23)
        x23 = x8
    else
        int64_t i = 0
        
        do
            int64_t x12_1 = *(x23 + i * 0x88 + 0x78)
            
            if (x12_1 == -1)
                void* x12_2 = x23 + i * 0x88
                int64_t x13_1 = *(x12_2 + 0x60)
                int64_t x15_1 = *(x12_2 + 0x68)
                int64_t x14_1 = x15_1 - x13_1
                
                if (x15_1 == x13_1)
                    x12_1 = 0
                else
                    int64_t x16_1
                    
                    x16_1 = x14_1 s>= 0 ? x14_1 : -1
                    
                    int64_t x15_2 = x13_1 - x15_1
                    int64_t x16_2
                    
                    x16_2 = x16_1 s< 1 ? x16_1 : 1
                    
                    x12_1 = x14_1 s>> 2
                    int64_t x14_2
                    
                    x14_2 = x15_2 s> x14_1 ? x15_2 : x14_1
                    
                    int64_t j_1 = x16_2 * (x14_2 u>> 2)
                    uint64_t x15_3 = 1
                    int64_t j
                    
                    do
                        int32_t x16_3 = *(x13_1 - 4 + (j_1 << 2))
                        j = j_1
                        j_1 -= 1
                        x15_3 = zx.q(x15_3.d) & zx.q(((x16_3 - 1) & not.d(x16_3)) s>> 0x1f)
                        x12_1 -= x15_3
                    while (j != 1)
                
                *(x23 + i * 0x88 + 0x78) = x12_1
            
            if (x12_1 == 0)
                void** x0_34 = __cxa_allocate_exception(0x20)
                int64_t x0_35
                int128_t v0_4
                x0_35, v0_4 = operator new(0x30)
                v0_4 = data_71c500
                int64_t var_90_1 = x0_35
                __builtin_strncpy(x0_35, "Cannot convert zero ECC point to affine", 0x28)
                var_a0 = v0_4
                *x0_34 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_34[1])
                *x0_34 = _vtable_for_Botan::Invalid_State + 0x10
                __cxa_throw(x0_34, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
                noreturn
            
            x23 = *arg1
            i += 1
        while (i != ((*(arg1 + 8) - x23) s>> 3) * -0xf0f0f0f0f0f0f0f)
    
    uint32_t** x0_2 = (*(**x23 + 0x60))()
    
    if ((*(**x23 + 0x30))() u> (*(arg2 + 8) - *arg2) s>> 2)
        int64_t x0_6 = (*(**x23 + 0x30))()
        int64_t x8_11 = *arg2
        int64_t x9_6 = (*(arg2 + 8) - x8_11) s>> 2
        
        if (x0_6 u> x9_6)
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
        else if (x0_6 u< x9_6)
            *(arg2 + 8) = x8_11 + (x0_6 << 2)
    
    *(arg1 + 8) - *arg1
    uint32_t* var_78
    std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >::vector(&var_78)
    void* x24_1 = *arg1
    uint32_t* x22_2 = var_78
    
    if (x22_2 != x24_1 + 0x60)
        *(x24_1 + 0x68)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(x22_2, 
            *(x24_1 + 0x60))
    
    *(x22_2 + 0x18) = *(x24_1 + 0x78)
    x22_2[8] = *(x24_1 + 0x80)
    int64_t x8_19 = *arg1
    
    if (*(arg1 + 8) - x8_19 != 0x88)
        int64_t x22_3 = 0
        int64_t i_1 = 1
        int64_t x25_1 = 0xe8
        
        do
            int64_t* x0_10 = *x23
            void* x9_11 = var_78 + x22_3
            int64_t x2_2 = *x9_11
            (*(*x0_10 + 0x80))(x0_10, x9_11 + 0x28, x2_2, (*(x9_11 + 8) - x2_2) s>> 2, 
                x8_19 + x25_1, arg2)
            x8_19 = *arg1
            i_1 += 1
            x22_3 += 0x28
            x25_1 += 0x88
        while (i_1 != ((*(arg1 + 8) - x8_19) s>> 3) * -0xf0f0f0f0f0f0f0f)
    
    int64_t* x0_11 = *x23
    int64_t* var_70
    (*(*x0_11 + 0x68))(x0_11, var_70 - 0x28, arg2)
    void* var_c8
    __builtin_memset(&var_c8, 0, 0x18)
    void* var_f0
    __builtin_memset(&var_f0, 0, 0x18)
    void* var_118
    __builtin_memset(&var_118, 0, 0x18)
    int64_t var_b0_1 = -1
    int32_t var_a8_1 = 1
    int64_t var_d8_1 = -1
    int32_t var_d0_1 = 1
    int64_t var_100_1 = -1
    int32_t var_f8_1 = 1
    void* x25_2 = *arg1
    int64_t x8_25 = ((*(arg1 + 8) - x25_2) s>> 3) * -0xf0f0f0f0f0f0f0f
    void* var_140
    int64_t var_e8
    int64_t var_90
    
    if (x8_25 != 1)
        int64_t x26_1 = x8_25 - 2
        int64_t x28_1 = x8_25 * 0x88
        int64_t x27_1 = x8_25 * 0x28 - 0x50
        
        while (true)
            int64_t* x0_12 = *x23
            int64_t x2_4 = var_a0.q
            (*(*x0_12 + 0x80))(x0_12, &var_c8, x2_4, (var_a0:8.q - x2_4) s>> 2, var_78 + x27_1, 
                arg2)
            __builtin_memset(&var_140, 0, 0x18)
            int64_t var_128_1 = -1
            int32_t var_120_1 = 1
            int64_t* x0_13 = *x23
            int64_t x2_5 = var_a0.q
            int128_t v0_1
            int128_t v1_1
            v0_1, v1_1 = (*(*x0_13 + 0x80))(x0_13, &var_140, x2_5, (var_a0:8.q - x2_5) s>> 2, 
                x25_2 + x28_1 - 0x28, arg2)
            v1_1 = var_a0
            int64_t x8_31 = var_90
            int64_t var_88
            int64_t x11_8 = var_88
            int64_t var_130_1
            var_90 = var_130_1
            var_88 = var_128_1
            int32_t var_80
            int32_t x10_8 = var_80
            uint64_t x0_14 = v1_1.q
            int64_t var_130_2 = x8_31
            int64_t var_128_2 = x11_8
            var_a0 = var_140.o
            var_140.o = v1_1
            var_80 = var_120_1
            int32_t var_120_2 = x10_8
            
            if (x0_14 != 0)
                uint64_t var_138_1 = x0_14
                Botan::deallocate_memory(x0_14, (x8_31 - x0_14) s>> 2, 4)
            
            int64_t* x0_15 = *x23
            void* x2_6 = var_c8
            int64_t var_c0
            (*(*x0_15 + 0x88))(x0_15, &var_f0, x2_6, (var_c0 - x2_6) s>> 2, arg2)
            int64_t* x0_16 = *x23
            void* x2_7 = var_f0
            (*(*x0_16 + 0x80))(x0_16, &var_118, x2_7, (var_e8 - x2_7) s>> 2, &var_c8, arg2)
            __builtin_memset(&var_140, 0, 0x18)
            int64_t var_128_3 = -1
            int32_t var_120_3 = 1
            int64_t* x0_17 = *x23
            void* fp_1 = x25_2 + x28_1
            int64_t x2_8 = *(fp_1 - 0x78)
            (*(*x0_17 + 0x80))(x0_17, &var_140, x2_8, (*(fp_1 - 0x70) - x2_8) s>> 2, &var_f0, arg2)
            int64_t var_130_3
            
            if (&var_c8 - x25_2 != x28_1)
                void* x9_30 = *(fp_1 - 0x78)
                *(fp_1 - 0x78) = var_140
                var_140 = x9_30
                int64_t x9_31 = *(fp_1 - 0x70)
                int64_t var_138_2
                *(fp_1 - 0x70) = var_138_2
                void* x8_43 = x25_2 + x28_1
                int64_t var_138_3 = x9_31
                int64_t x10_9 = *(x8_43 - 0x68)
                *(x8_43 - 0x68) = var_130_3
                var_130_3 = x10_9
                int64_t x10_10 = *(x8_43 - 0x60)
                *(x8_43 - 0x60) = var_128_3
                int64_t var_128_4 = x10_10
                int32_t x10_11 = *(x8_43 - 0x58)
                *(x8_43 - 0x58) = var_120_3
                int32_t var_120_4 = x10_11
            
            void* x0_18 = var_140
            
            if (x0_18 != 0)
                void* var_138_4 = x0_18
                Botan::deallocate_memory(x0_18, (var_130_3 - x0_18) s>> 2, 4)
            
            __builtin_memset(&var_140, 0, 0x18)
            int64_t var_128_5 = -1
            int32_t var_120_5 = 1
            int64_t* x0_19 = *x23
            void* fp_2 = x25_2 + x28_1
            int64_t x2_9 = *(fp_2 - 0x50)
            (*(*x0_19 + 0x80))(x0_19, &var_140, x2_9, (*(fp_2 - 0x48) - x2_9) s>> 2, &var_118, arg2)
            int64_t var_130_4
            
            if (&var_f0 - x25_2 != x28_1)
                void* x9_37 = *(fp_2 - 0x50)
                *(fp_2 - 0x50) = var_140
                var_140 = x9_37
                int64_t x9_38 = *(fp_2 - 0x48)
                int64_t var_138_5
                *(fp_2 - 0x48) = var_138_5
                void* x8_52 = x25_2 + x28_1
                int64_t var_138_6 = x9_38
                int64_t x10_12 = *(x8_52 - 0x40)
                *(x8_52 - 0x40) = var_130_4
                var_130_4 = x10_12
                int64_t x10_13 = *(x8_52 - 0x38)
                *(x8_52 - 0x38) = var_128_5
                int64_t var_128_6 = x10_13
                int32_t x10_14 = *(x8_52 - 0x30)
                *(x8_52 - 0x30) = var_120_5
                int32_t var_120_6 = x10_14
            
            void* x0_20 = var_140
            
            if (x0_20 != 0)
                void* var_138_7 = x0_20
                Botan::deallocate_memory(x0_20, (var_130_4 - x0_20) s>> 2, 4)
            
            if (&x0_2[5] - x25_2 != x28_1)
                x0_2[1]
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                    x25_2 + x28_1 - 0x28, *x0_2)
            
            void* x9_42 = x25_2 + x28_1
            *(x9_42 - 0x10) = x0_2[3]
            *(x9_42 - 8) = x0_2[4].d
            
            if (x26_1 == 0)
                break
            
            x25_2 = *arg1
            x26_1 -= 1
            x27_1 -= 0x28
            x28_1 -= 0x88
    
    int64_t* x0_22 = *x23
    int64_t x2_11 = var_a0.q
    (*(*x0_22 + 0x88))(x0_22, &var_f0, x2_11, (var_a0:8.q - x2_11) s>> 2, arg2)
    int64_t* x0_23 = *x23
    void* x2_12 = var_f0
    (*(*x0_23 + 0x80))(x0_23, &var_118, x2_12, (var_e8 - x2_12) s>> 2, &var_a0, arg2)
    void* x8_64 = *arg1
    __builtin_memset(&var_140, 0, 0x18)
    int64_t var_128_7 = -1
    int32_t var_120_7 = 1
    int64_t* x0_24 = *x23
    int64_t x2_13 = *(x8_64 + 0x10)
    (*(*x0_24 + 0x80))(x0_24, &var_140, x2_13, (*(x8_64 + 0x18) - x2_13) s>> 2, &var_f0, arg2)
    void* x8_67 = *arg1
    void* var_138_8
    int64_t var_130_5
    void* x0_25
    
    if (x8_67 + 0x10 == &var_140)
        x0_25 = var_140
        
        if (x0_25 != 0)
            var_138_8 = x0_25
            Botan::deallocate_memory(x0_25, (var_130_5 - x0_25) s>> 2, 4)
    else
        x0_25 = *(x8_67 + 0x10)
        int128_t v0_2 = var_140.o
        var_140 = x0_25
        *(x8_67 + 0x10) = v0_2
        int64_t x12_4 = *(x8_67 + 0x20)
        int64_t x10_15 = *(x8_67 + 0x28)
        *(x8_67 + 0x20) = var_130_5
        *(x8_67 + 0x28) = var_128_7
        int64_t var_128_8 = x10_15
        int32_t x10_16 = *(x8_67 + 0x30)
        *(x8_67 + 0x30) = var_120_7
        int32_t var_120_8 = x10_16
        
        if (x0_25 != 0)
            var_138_8 = x0_25
            Botan::deallocate_memory(x0_25, (x12_4 - x0_25) s>> 2, 4)
    void* x8_70 = *arg1
    __builtin_memset(&var_140, 0, 0x18)
    int64_t var_128_9 = -1
    int32_t var_120_9 = 1
    int64_t* x0_26 = *x23
    int64_t x2_14 = *(x8_70 + 0x38)
    int128_t v0_3
    int128_t v1_2
    v0_3, v1_2 =
        (*(*x0_26 + 0x80))(x0_26, &var_140, x2_14, (*(x8_70 + 0x40) - x2_14) s>> 2, &var_118, arg2)
    void* x8_73 = *arg1
    void* var_138_9
    int64_t var_130_6
    void* x0_27
    
    if (x8_73 + 0x38 == &var_140)
        x0_27 = var_140
        
        if (x0_27 != 0)
            var_138_9 = x0_27
            Botan::deallocate_memory(x0_27, (var_130_6 - x0_27) s>> 2, 4)
    else
        v1_2 = *(x8_73 + 0x38)
        *(x8_73 + 0x38) = var_140.o
        var_140.o = v1_2
        int64_t x12_5 = *(x8_73 + 0x48)
        int64_t x10_17 = *(x8_73 + 0x50)
        x0_27 = v1_2.q
        *(x8_73 + 0x48) = var_130_6
        *(x8_73 + 0x50) = var_128_9
        int64_t var_128_10 = x10_17
        int32_t x10_18 = *(x8_73 + 0x58)
        *(x8_73 + 0x58) = var_120_9
        int32_t var_120_10 = x10_18
        
        if (x0_27 != 0)
            var_138_9 = x0_27
            Botan::deallocate_memory(x0_27, (x12_5 - x0_27) s>> 2, 4)
    void* x19_1 = *arg1
    
    if (x19_1 + 0x60 != x0_2)
        x0_2[1]
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
            x19_1 + 0x60, *x0_2)
    
    *(x19_1 + 0x78) = x0_2[3]
    *(x19_1 + 0x80) = x0_2[4].d
    void* x0_29 = var_118
    
    if (x0_29 != 0)
        void* var_110_1 = x0_29
        int64_t var_108
        Botan::deallocate_memory(x0_29, (var_108 - x0_29) s>> 2, 4)
    
    void* x0_30 = var_f0
    
    if (x0_30 != 0)
        void* var_e8_1 = x0_30
        int64_t var_e0
        Botan::deallocate_memory(x0_30, (var_e0 - x0_30) s>> 2, 4)
    
    void* x0_31 = var_c8
    
    if (x0_31 != 0)
        void* var_c0_1 = x0_31
        int64_t var_b8
        Botan::deallocate_memory(x0_31, (var_b8 - x0_31) s>> 2, 4)
    
    arg1 = var_a0.q
    
    if (arg1 != 0)
        var_a0:8.q = arg1
        Botan::deallocate_memory(arg1, (var_90 - arg1) s>> 2, 4)
    
    uint32_t* x19_2 = var_78
    
    if (x19_2 != 0)
        int64_t* x8_86 = var_70
        uint32_t* x0_33
        
        if (x8_86 == x19_2)
            x0_33 = x19_2
        else
            int64_t* x20_3 = x8_86
            
            do
                x20_3 = &x20_3[-5]
                void* x0_32 = *x20_3
                
                if (x0_32 != 0)
                    int64_t x9_57 = x8_86[-3]
                    x8_86[-4] = x0_32
                    Botan::deallocate_memory(x0_32, (x9_57 - x0_32) s>> 2, 4)
                
                x8_86 = x20_3
            while (x19_2 != x20_3)
            
            x0_33 = var_78
        
        uint32_t* var_70_1 = x19_2
        operator delete(x0_33)
else if (x8 != x23)
    int64_t x20_1 = 0
    int64_t i_2 = 0
    
    do
        Botan::PointGFp::force_affine()
        i_2 += 1
        x20_1 += 0x88
    while (i_2 != ((*(arg1 + 8) - *arg1) s>> 3) * -0xf0f0f0f0f0f0f0f)
