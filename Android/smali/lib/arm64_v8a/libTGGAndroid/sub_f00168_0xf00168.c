// 函数: sub_f00168
// 地址: 0xf00168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_150
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_150)
int16_t var_80 = 0
Botan::HashFunction::create(&var_150, &var_80)
void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)
void* var_140

if ((zx.d(var_150) & 1) != 0)
    operator delete(var_140)

int64_t x24 = *(Botan::EC_Group::data() + 0x1e8)
int64_t* var_58
uint64_t x0_7 = (**var_58)(var_58)
uint64_t x24_1 = (x24 + 7) u>> 3
uint64_t x25

x25 = x24_1 u< x0_7 ? x24_1 : x0_7

int32_t x20_1

if (x25 + x24_1 != arg5)
    x20_1 = 0
else
    void* x19_1
    void* x26_1
    
    if (x25 == 0)
        x19_1 = nullptr
        x26_1 = nullptr
    else
        void* x0_9 = Botan::allocate_memory(x25, 1)
        x19_1 = x0_9
        x26_1 = x0_9 + x25
        memcpy(x0_9, arg4, x25)
    
    __builtin_memset(&var_80, 0, 0x18)
    int64_t i_13 = -1
    int32_t var_60_1 = 1
    Botan::BigInt::binary_decode(&var_80, arg4 + x25)
    
    if (var_60_1 == 0)
        x20_1 = 0
    else
        int64_t i_7 = i_13
        
        if (i_7 == -1)
            int64_t x9_2 = var_80.q
            int64_t var_78
            int64_t x10_1 = var_78 - x9_2
            
            if (var_78 == x9_2)
                i_7 = 0
                int64_t var_68_1 = 0
            else
                int64_t x12_1
                
                x12_1 = x10_1 s>= 0 ? x10_1 : -1
                
                int64_t x11_2 = x9_2 - var_78
                int64_t x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                i_7 = x10_1 s>> 2
                int64_t x10_2
                
                x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
                
                int64_t i_8 = x12_2 * (x10_2 u>> 2)
                uint64_t x11_3 = 1
                int64_t i
                
                do
                    int32_t x12_3 = *(x9_2 - 4 + (i_8 << 2))
                    i = i_8
                    i_8 -= 1
                    x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    i_7 -= x11_3
                while (i != 1)
                int64_t i_14 = i_7
                
                if (i_7 u> 1)
                    goto label_f00354
            
        label_f00304:
            
            if (i_7 == 0)
                x20_1 = 0
            else
                int32_t* x9_4 = var_80.q
                int32_t x10_4 = 0
                int64_t i_1
                
                do
                    int32_t x11_4 = *x9_4
                    x9_4 = &x9_4[1]
                    i_1 = i_7
                    i_7 -= 1
                    int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                    x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
                while (i_1 != 1)
                
                if (x10_4 s>= 1)
                    goto label_f00354
                
                x20_1 = 0
        else
            if (i_7 u<= 1)
                goto label_f00304
            
        label_f00354:
            int32_t x0_14
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            x0_14, v0_1, v1_1, v2_1, v3_1 =
                Botan::BigInt::cmp(&var_80, Botan::EC_Group::data() - 0x18)
            
            if ((x0_14 & 0x80000000) != 0)
                size_t x22_1 = x26_1 - x19_1
                uint64_t var_98_1
                __builtin_memset(&var_98_1, 0, 0x18)
                int64_t var_88_1
                void* x8_10
                uint64_t x24_2
                
                if (x26_1 == x19_1)
                    x8_10 = nullptr
                    x24_2 = 0
                else
                    if ((x22_1 & 0xffffffff80000000) != 0)
                        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                        noreturn
                    
                    uint64_t x0_20 = Botan::allocate_memory(x22_1, 1)
                    int64_t x25_1 = x0_20 + x22_1
                    x24_2 = x0_20
                    var_98_1 = x0_20
                    var_88_1 = x25_1
                    int128_t v4_1
                    int128_t v5_1
                    int128_t v6_1
                    int128_t v7_1
                    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = memcpy(x0_20, x19_1, x22_1)
                    x8_10 = x22_1 & 0xffffffffffffffe0
                    int64_t var_90_1 = x25_1
                    
                    if (x8_10 != 0)
                        int64_t x9_5 = 0
                        int64_t i_16
                        
                        if (x8_10 != 0x20 && x24_2 + 0x18 + x8_10 - 0x20 u>= x24_2 + 0x18
                                && x24_2 + 0x10 + x8_10 - 0x20 u>= x24_2 + 0x10
                                && x24_2 + 8 + x8_10 - 0x20 u>= x24_2 + 8
                                && x24_2 + x8_10 - 0x20 u>= x24_2)
                            i_16 = (((x8_10 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                            int64_t x10_8 = 0
                            x9_5 = i_16 << 5
                            int64_t i_11 = i_16
                            int64_t i_2
                            
                            do
                                int64_t* x14_2 = x24_2 + x10_8
                                void* x15_2 = arg2 + x10_8
                                v0_1.q = *x14_2
                                v1_1.q = x14_2[1]
                                v2_1.q = x14_2[2]
                                v3_1.q = x14_2[3]
                                v0_1:8.q = x14_2[4]
                                v1_1:8.q = x14_2[5]
                                v2_1:8.q = x14_2[6]
                                v3_1:8.q = x14_2[7]
                                v4_1.q = *x15_2
                                v5_1.q = *(x15_2 + 8)
                                v6_1.q = *(x15_2 + 0x10)
                                v7_1.q = *(x15_2 + 0x18)
                                v4_1:8.q = *(x15_2 + 0x20)
                                v5_1:8.q = *(x15_2 + 0x28)
                                v6_1:8.q = *(x15_2 + 0x30)
                                v7_1:8.q = *(x15_2 + 0x38)
                                i_2 = i_11
                                i_11 -= 2
                                x10_8 += 0x40
                                int128_t v16_1 = v4_1 ^ v0_1
                                int128_t v17_1 = v5_1 ^ v1_1
                                int128_t v18_1 = v6_1 ^ v2_1
                                int128_t v19_1 = v7_1 ^ v3_1
                                *x14_2 = v16_1.q
                                x14_2[1] = v17_1.q
                                x14_2[2] = v18_1.q
                                x14_2[3] = v19_1.q
                                x14_2[4] = v16_1:8.q
                                x14_2[5] = v17_1:8.q
                                x14_2[6] = v18_1:8.q
                                x14_2[7] = v19_1:8.q
                            while (i_2 != 2)
                        
                        if (x8_10 == 0x20 || x24_2 + 0x18 + x8_10 - 0x20 u< x24_2 + 0x18
                                || x24_2 + 0x10 + x8_10 - 0x20 u< x24_2 + 0x10
                                || x24_2 + 8 + x8_10 - 0x20 u< x24_2 + 8
                                || x24_2 + x8_10 - 0x20 u< x24_2
                                || ((x8_10 - 0x20) u>> 5) + 1 != i_16)
                            do
                                int64_t x11_11 = x24_2 + x9_5
                                void* x12_8 = arg2 + 0x10 + x9_5
                                x9_5 += 0x20
                                v1_1 = *x12_8 ^ *(x11_11 + 0x10)
                                *x11_11 ^= *(x12_8 - 0x10)
                                *(x11_11 + 0x10) = v1_1
                            while (x8_10 != x9_5)
                
                if (x8_10 != x22_1)
                    int64_t x9_8 = x26_1 - x8_10 - x19_1
                    
                    if (x9_8 u< 8)
                        goto label_f0059c
                    
                    int64_t i_15
                    
                    if (x9_8 u>= 0x20)
                        i_15 = x9_8 & 0xffffffffffffffe0
                        void* x11_12 = arg2 + x8_10 + 0x10
                        void* x12_10 = x24_2 + x8_10 + 0x10
                        int64_t i_12 = i_15
                        int64_t i_3
                        
                        do
                            v0_1 = *(x11_12 - 0x10)
                            v1_1 = *x11_12
                            x11_12 += 0x20
                            i_3 = i_12
                            i_12 -= 0x20
                            v1_1 ^= *x12_10
                            *(x12_10 - 0x10) ^= v0_1
                            *x12_10 = v1_1
                            x12_10 += 0x20
                        while (i_3 != 0x20)
                        
                        if (x9_8 != i_15)
                            if ((x9_8 & 0x18) != 0)
                                goto label_f00558
                            
                            x8_10 += i_15
                        label_f0059c:
                            void* x9_9 = x24_2 + x8_10
                            void* i_10 = x8_10 + x19_1 - x26_1
                            char* x8_11 = arg2 + x8_10
                            void* i_4
                            
                            do
                                char x11_14 = *x8_11
                                x8_11 = &x8_11[1]
                                i_4 = i_10
                                i_10 += 1
                                *x9_9 ^= x11_14
                                x9_9 += 1
                            while (i_4 u< -1)
                    else
                        i_15 = 0
                    label_f00558:
                        int64_t x11_13 = x9_8 & 0xfffffffffffffff8
                        void* x13_3 = x8_10 + i_15
                        x8_10 += x11_13
                        void* x12_11 = arg2 + x13_3
                        void* x13_4 = x24_2 + x13_3
                        int64_t i_9 = i_15 - x11_13
                        int64_t i_5
                        
                        do
                            v0_1.q = *x12_11
                            x12_11 += 8
                            v1_1.q = *x13_4
                            i_5 = i_9
                            i_9 += 8
                            *x13_4 = (v1_1 ^ v0_1).q
                            x13_4 += 8
                        while (i_5 != -8)
                        
                        if (x9_8 != x11_13)
                            goto label_f0059c
                
                void* var_c0
                __builtin_memset(&var_c0, 0, 0x18)
                int64_t var_a8_1 = -1
                int32_t var_a0_1 = 1
                Botan::BigInt::binary_decode(&var_c0, x24_2)
                Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
                void* x0_25 = var_c0
                int64_t var_138
                int64_t var_a8_2 = var_138
                int64_t var_b0
                int64_t var_140_1 = var_b0
                int64_t var_138_1 = var_a8_1
                var_c0.o = var_150.o
                var_150.q = x0_25
                int32_t var_130
                int32_t var_a0_2 = var_130
                int32_t var_130_1 = var_a0_1
                
                if (x0_25 != 0)
                    void* var_148_1 = x0_25
                    Botan::deallocate_memory(x0_25, (var_b0 - x0_25) s>> 2, 4)
                
                Botan::PointGFp_Multi_Point_Precompute::multi_exp(arg1 + 0x40, &var_c0)
                Botan::PointGFp::get_affine_x()
                int64_t x0_27 = Botan::BigInt::bits()
                int64_t x8_16
                
                if ((x0_27 & 7) == 0)
                    x8_16 = 0
                else
                    x8_16 = 8 - (x0_27 & 7)
                
                uint64_t x24_3 = (x8_16 + x0_27) u>> 3
                void* x23_1
                void* x25_2
                
                if (x24_3 == 0)
                    x23_1 = nullptr
                    x25_2 = nullptr
                else
                    void* x0_29 = Botan::allocate_memory(x24_3, 1)
                    x23_1 = x0_29
                    x25_2 = x0_29 + x24_3
                    memset(x0_29, 0, x24_3)
                
                int64_t x0_30 = Botan::BigInt::bits()
                int64_t x8_20
                
                if ((x0_30 & 7) == 0)
                    x8_20 = 0
                else
                    x8_20 = 8 - (x0_30 & 7)
                
                int64_t x12_13 = x8_20 + x0_30
                uint64_t x9_12 = x12_13 u>> 5
                uint64_t i_6 = x12_13 u>> 3 & 3
                void* var_178
                int64_t var_170
                
                if (x9_12 != 0)
                    int64_t x10_13 = 0
                    int32_t* x13_6 = (x12_13 u>> 3) + x23_1 - 4
                    
                    do
                        int32_t x14_4
                        
                        if ((var_170 - var_178) s>> 2 u> x10_13)
                            x14_4 = *(var_178 + (x10_13 << 2))
                        else
                            x14_4 = 0
                        
                        x10_13 += 1
                        *x13_6 = _byteswap(x14_4)
                        x13_6 = &x13_6[-1]
                    while (x9_12 != x10_13)
                
                if (i_6 != 0)
                    int32_t x9_13
                    
                    if (x9_12 u>= (var_170 - var_178) s>> 2)
                        x9_13 = 0
                    else
                        x9_13 = *(var_178 + (x9_12 << 2))
                    
                    int32_t x11_20 = 0x18
                    
                    do
                        *(x23_1 - 1 + i_6) = (x9_13 u>> (not.d(x11_20) & 0x18)).b
                        i_6 -= 1
                        x11_20 -= 8
                    while (i_6 != 0)
                
                int64_t* x0_32 = (*(**(arg1 + 8) + 0x38))()
                uint64_t x24_4 = x25_2 - x23_1
                (*(*x0_32 + 0x10))(x0_32, x23_1, x24_4)
                (*(*x0_32 + 0x18))(x0_32)
                void* __offset(vtable_for_Botan::Null_RNG, 0x10) var_198 =
                    _vtable_for_Botan::Null_RNG + 0x10
                void* var_190
                (*(*x0_32 + 0x20))(x0_32, &var_190, *(Botan::EC_Group::data() + 0x1e8), &var_198)
                void* x0_37 = var_190
                
                if (x0_37 != 0)
                    void* var_188_1 = x0_37
                    int64_t var_180
                    Botan::deallocate_memory(x0_37, var_180 - x0_37, 1)
                
                void* var_1b0
                var_190 = var_1b0
                int64_t var_1a8
                int64_t var_188_2 = var_1a8
                int64_t var_1a0
                int64_t var_180_1 = var_1a0
                void* var_188_3
                
                if (var_1a8 - var_1b0 != x22_1)
                    x20_1 = 0
                label_f0085c:
                    
                    if (var_1b0 != 0)
                        var_188_3 = var_1b0
                        Botan::deallocate_memory(var_1b0, var_1a0 - var_1b0, 1)
                else
                    if (var_1b0 != var_1a8)
                        void* x10_17 = var_1b0
                        void* x11_21 = x19_1
                        
                        do
                            uint32_t x12_20 = zx.d(*x10_17)
                            uint32_t x13_7 = zx.d(*x11_21)
                            x20_1 = x12_20 == x13_7 ? 1 : 0
                            
                            if (x12_20 != x13_7)
                                break
                            
                            x10_17 += 1
                            x11_21 += 1
                        while (var_1a8 != x10_17)
                        
                        goto label_f0085c
                    
                    x20_1 = 1
                    
                    if (var_1b0 != 0)
                        var_188_3 = var_1b0
                        Botan::deallocate_memory(var_1b0, var_1a0 - var_1b0, 1)
                
                if (x0_32 != 0)
                    (*(*x0_32 + 8))(x0_32)
                
                if (x23_1 != 0)
                    Botan::deallocate_memory(x23_1, x24_4, 1)
                
                if (var_178 != 0)
                    void* var_170_1 = var_178
                    int64_t var_168
                    Botan::deallocate_memory(var_178, (var_168 - var_178) s>> 2, 4)
                
                Botan::PointGFp::~PointGFp()
                void* x0_42 = var_c0
                
                if (x0_42 != 0)
                    void* var_b8_1 = x0_42
                    Botan::deallocate_memory(x0_42, (var_140 - x0_42) s>> 2, 4)
                
                uint64_t x0_43 = var_98_1
                
                if (x0_43 != 0)
                    uint64_t var_90_2 = x0_43
                    Botan::deallocate_memory(x0_43, var_88_1 - x0_43, 1)
            else
                x20_1 = 0
    
    void* x0_15 = var_80.q
    
    if (x0_15 != 0)
        void* var_78_1 = x0_15
        int64_t var_70_1
        Botan::deallocate_memory(x0_15, (var_70_1 - x0_15) s>> 2, 4)
    
    if (x19_1 != 0)
        Botan::deallocate_memory(x19_1, x26_1 - x19_1, 1)

int64_t var_58_1 = 0

if (var_58 != 0)
    (*(*var_58 + 0x10))()

return zx.q(x20_1)
