// 函数: _ZN5Botan10polyn_gf2m21eea_with_coefficientsERKS0_S2_i
// 地址: 0xda8640
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x19 = *(arg2 + 0x20)
int64_t* x27 = *(arg2 + 0x28)

if (x27 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x27[1]) + 1, &x27[1])
    while (i != 0)

int32_t var_98 = 0xffffffff
int128_t var_90
__builtin_memset(&var_90, 0, 0x28)
int64_t x9_3 = *(arg2 + 8)
int64_t x11_3 = *(arg2 + 0x10) - x9_3
uint32_t x10_2 = (x11_3 u>> 1).d
int64_t x12 = (x11_3 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x25 = (x10_2 & x10_2 s>> 0x1f) - 1

while (true)
    int64_t x10_4 = x12 - 1
    
    if (x12 s< 1)
        break
    
    uint32_t x11_4 = zx.d(*(x9_3 - 2 + (x12 << 1)))
    x12 = x10_4
    
    if (x11_4 != 0)
        x25 = x10_4.d
        break

*arg2 = x25

if (x25 s<= 3)
label_da99b4:
    Botan::assertion_failure("dr > 3", "Valid polynomial", "eea_with_coefficients", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xbf53)
label_da99b8:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_da99c0:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_da99c4:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_da99c8:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_da99d0:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_da99d4:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_da99d8:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_da99e4:
    sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_out_of_range())
    noreturn

int64_t* x26_1 = *(arg2 + 0x28)
int64_t var_d8_1 = *(arg2 + 0x20)
int64_t* var_d0_1 = x26_1

if (x26_1 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(&x26_1[1]) + 1, &x26_1[1])
    while (i_1 != 0)

int32_t var_c8
Botan::polyn_gf2m::polyn_gf2m(&var_c8, zx.q(x25))

if (x26_1 != 0)
    int64_t x9_7
    int32_t i_2
    
    do
        x9_7 = __ldaxr(&x26_1[1])
        i_2 = __stlxr(x9_7 - 1, &x26_1[1])
    while (i_2 != 0)
    
    if (x9_7 == 0)
        (*(*x26_1 + 0x10))(x26_1)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x26_2 = *(arg2 + 0x28)
int64_t var_118_1 = *(arg2 + 0x20)
int64_t* var_110_1 = x26_2

if (x26_2 != 0)
    int32_t i_3
    
    do
        i_3 = __stxr(__ldxr(&x26_2[1]) + 1, &x26_2[1])
    while (i_3 != 0)

int32_t var_108
Botan::polyn_gf2m::polyn_gf2m(&var_108, zx.q(x25 - 1))

if (x26_2 != 0)
    int64_t x9_10
    int32_t i_4
    
    do
        x9_10 = __ldaxr(&x26_2[1])
        i_4 = __stlxr(x9_10 - 1, &x26_2[1])
    while (i_4 != 0)
    
    if (x9_10 == 0)
        (*(*x26_2 + 0x10))(x26_2)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x26_3 = *(arg2 + 0x28)
int64_t var_158_1 = *(arg2 + 0x20)
int64_t* var_150_1 = x26_3

if (x26_3 != 0)
    int32_t i_5
    
    do
        i_5 = __stxr(__ldxr(&x26_3[1]) + 1, &x26_3[1])
    while (i_5 != 0)

int32_t var_148
Botan::polyn_gf2m::polyn_gf2m(&var_148, zx.q(x25 - 1))

if (x26_3 != 0)
    int64_t x9_13
    int32_t i_6
    
    do
        x9_13 = __ldaxr(&x26_3[1])
        i_6 = __stlxr(x9_13 - 1, &x26_3[1])
    while (i_6 != 0)
    
    if (x9_13 == 0)
        (*(*x26_3 + 0x10))(x26_3)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x26_4 = *(arg2 + 0x28)
int64_t var_198_1 = *(arg2 + 0x20)
int64_t* var_190_1 = x26_4

if (x26_4 != 0)
    int32_t i_7
    
    do
        i_7 = __stxr(__ldxr(&x26_4[1]) + 1, &x26_4[1])
    while (i_7 != 0)

int32_t var_188
Botan::polyn_gf2m::polyn_gf2m(&var_188, zx.q(x25 - 1))

if (x26_4 != 0)
    int64_t x9_16
    int32_t i_8
    
    do
        x9_16 = __ldaxr(&x26_4[1])
        i_8 = __stlxr(x9_16 - 1, &x26_4[1])
    while (i_8 != 0)
    
    if (x9_16 == 0)
        (*(*x26_4 + 0x10))(x26_4)
        std::__ndk1::__shared_weak_count::__release_weak()

int32_t* entry_x8
int32_t* x26_5 = entry_x8
var_c8 = *arg2
void* var_c0

if (&var_c8 != arg2)
    *(arg2 + 0x10)
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(&var_c0, 
        *(arg2 + 8))

int64_t x9_18 = *(arg2 + 0x20)
int64_t* x8_20 = *(arg2 + 0x28)

if (x8_20 != 0)
    int32_t i_9
    
    do
        i_9 = __stxr(__ldxr(&x8_20[1]) + 1, &x8_20[1])
    while (i_9 != 0)

int64_t var_a8_1 = x9_18
int64_t* var_a0_1 = x8_20
int64_t* var_a0

if (var_a0 != 0)
    int64_t x9_19
    int32_t i_10
    
    do
        x9_19 = __ldaxr(&var_a0[1])
        i_10 = __stlxr(x9_19 - 1, &var_a0[1])
    while (i_10 != 0)
    
    if (x9_19 == 0)
        (*(*var_a0 + 0x10))(var_a0)
        std::__ndk1::__shared_weak_count::__release_weak()

var_108 = *arg1
void* var_100

if (&var_108 != arg1)
    *(arg1 + 0x10)
    std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(&var_100, 
        *(arg1 + 8))

int64_t x9_21 = *(arg1 + 0x20)
int64_t* x8_24 = *(arg1 + 0x28)

if (x8_24 != 0)
    int32_t i_11
    
    do
        i_11 = __stxr(__ldxr(&x8_24[1]) + 1, &x8_24[1])
    while (i_11 != 0)

int64_t var_e8_1 = x9_21
int64_t* var_e0_1 = x8_24
int64_t* var_e0

if (var_e0 != 0)
    int64_t x9_22
    int32_t i_12
    
    do
        x9_22 = __ldaxr(&var_e0[1])
        i_12 = __stlxr(x9_22 - 1, &var_e0[1])
    while (i_12 != 0)
    
    if (x9_22 == 0)
        (*(*var_e0 + 0x10))(var_e0)
        std::__ndk1::__shared_weak_count::__release_weak()

void* var_140
void* x0_18 = var_140
int64_t var_138

if (var_138 != x0_18)
    memset(x0_18, 0, var_138 - x0_18)

int16_t* var_180
int16_t* x0_19 = var_180
var_148 = 0xffffffff
int64_t var_178

if (var_178 != x0_19)
    memset(x0_19, 0, var_178 - x0_19)
    x0_19 = var_180

*x0_19 = 1
void* x10_17 = var_100
var_188 = 0
int64_t var_f8
void* x8_31 = var_f8 - x10_17
uint32_t x11_15 = (x8_31 u>> 1).d
int64_t x9_23 = (x8_31 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x8_33 = (x11_15 & x11_15 s>> 0x1f) - 1

while (true)
    int64_t x11_16 = x9_23 - 1
    
    if (x9_23 s< 1)
        break
    
    uint32_t x12_3 = zx.d(*(x10_17 - 2 + (x9_23 << 1)))
    x9_23 = x11_16
    
    if (x12_3 != 0)
        x8_33 = x11_16.d
        break

void* x11_17 = var_c0
var_108 = x8_33
void* var_b8
void* x9_25 = var_b8 - x11_17
uint32_t x12_4 = (x9_25 u>> 1).d
int64_t x10_19 = (x9_25 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x9_27 = (x12_4 & x12_4 s>> 0x1f) - 1

while (true)
    int64_t x12_5 = x10_19 - 1
    
    if (x10_19 s< 1)
        break
    
    uint32_t x13_1 = zx.d(*(x11_17 - 2 + (x10_19 << 1)))
    x10_19 = x12_5
    
    if (x13_1 != 0)
        x9_27 = x12_5.d
        break

var_c8 = x9_27
int64_t var_168
int64_t* var_160
int64_t* var_120
int128_t var_80_1
int64_t* var_70_1
int32_t x20_1

if (x8_33 s>= arg3)
    int32_t x24_2 = x9_27 - x8_33
    x20_1 = 0
    
    while (true)
        int32_t x27_1 = x8_33
        
        if ((x24_2 & 0x80000000) == 0)
            int64_t x9_29 = sx.q(x27_1)
            uint64_t x12_6 = zx.q(x24_2)
            bool cond:11_1
            
            do
                int64_t* x0_20 = *(x19 + 0x10)
                int64_t x13_2 = *x0_20
                uint64_t x8_35 = zx.q(*(var_c0 + ((x12_6 + x9_29) << 1)))
                int64_t x14_3 = (x0_20[1] - x13_2) s>> 1
                
                if (x14_3 u<= x8_35)
                label_da994c:
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                label_da9954:
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                label_da9960:
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                    goto label_da9968
                
                uint64_t x15_3 = zx.q(*(var_100 + (x9_29 << 1)))
                
                if (x14_3 u<= x15_3)
                    goto label_da9954
                
                if (x8_35.d != 0)
                    int64_t* x8_36 = *(x19 + 0x18)
                    uint32_t x16_2 = zx.d(*(x13_2 + (x8_35 << 1))) - zx.d(*(x13_2 + (x15_3 << 1)))
                    int64_t x15_5 = *x8_36
                    uint64_t x16_5 = zx.q((x16_2.w & x19[2].w) + (x16_2 s>> *x19).w)
                    
                    if (x16_5 u>= (x8_36[1] - x15_5) s>> 1)
                        goto label_da9960
                    
                    uint64_t x8_37 = zx.q(*(x15_5 + (x16_5 << 1)))
                    
                    if (x8_37 == 0)
                        goto label_da8a94
                    
                    if (x14_3 u<= x8_37)
                        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        goto label_da9968
                    
                    uint32_t x8_38 = zx.d(*(x13_2 + (x8_37 << 1)))
                    
                    if ((x20_1 & 0x80000000) == 0)
                        int64_t x13_3 = 0
                        int64_t i_13 = 0
                        
                        do
                            uint64_t x15_6 = zx.q(var_180[i_13])
                            
                            if (x15_6 != 0)
                                int64_t* x0_22 = *(x19 + 0x10)
                                int64_t x16_7 = *x0_22
                                
                                if (x15_6 u>= (x0_22[1] - x16_7) s>> 1)
                                    goto label_da993c
                                
                                int64_t* x0_23 = *(x19 + 0x18)
                                uint64_t x1_7 = zx.q(*(x16_7 + (x15_6 << 1))) + zx.q(x8_38)
                                int64_t x15_10 = *x0_23
                                uint64_t x16_11 =
                                    zx.q((x1_7 u>> zx.q(*x19)).w + (x1_7.w & x19[2].w))
                                
                                if (x16_11 u>= (x0_23[1] - x15_10) s>> 1)
                                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                                label_da993c:
                                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                                label_da9940:
                                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                                    goto label_da9944
                                
                                x15_6 = zx.q(*(x15_10 + (x16_11 << 1)))
                            
                            void* x16_6 = var_140
                            int64_t x17_5 = (x12_6 + (x13_3 s>> 0x20)) << 1
                            i_13 += 1
                            x13_3 += 0x100000000
                            *(x16_6 + x17_5) ^= x15_6.w
                        while (zx.q(x20_1 + 1) != i_13)
                    
                    if ((x27_1 & 0x80000000) != 0)
                        goto label_da8a94
                    
                    int64_t x13_4 = 0
                    int64_t x14_4 = 0
                    
                    while (true)
                        uint64_t x15_11 = zx.q(*(var_100 + (x14_4 << 1)))
                        
                        if (x15_11 != 0)
                            int64_t* x0_25 = *(x19 + 0x10)
                            int64_t x16_13 = *x0_25
                            
                            if (x15_11 u>= (x0_25[1] - x16_13) s>> 1)
                                break
                            
                            int64_t* x0_26 = *(x19 + 0x18)
                            uint64_t x1_8 = zx.q(*(x16_13 + (x15_11 << 1))) + zx.q(x8_38)
                            int64_t x15_15 = *x0_26
                            uint64_t x16_17 = zx.q((x1_8 u>> zx.q(*x19)).w + (x1_8.w & x19[2].w))
                            
                            if (x16_17 u>= (x0_26[1] - x15_15) s>> 1)
                                goto label_da9940
                            
                            x15_11 = zx.q(*(x15_15 + (x16_17 << 1)))
                        
                        int16_t* x16_12 = var_c0
                        x14_4 += 1
                        x13_4 += 0x100000000
                        x16_12[x12_6 + (x13_4 s>> 0x20)] ^= x15_11.w
                        
                        if (zx.q(x27_1 + 1) == x14_4)
                            goto label_da8a94
                    
                label_da9944:
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                    goto label_da994c
                
            label_da8a94:
                cond:11_1 = x12_6 s<= 0
                x12_6 -= 1
            while (not(cond:11_1))
        
        int32_t var_1a4
        void* x2_7
        void* x8_39
        int32_t x10_21
        
        if (arg3 != 1)
            int16_t var_64_1 = 1
            void* x10_22 = var_100
            void* x8_41 = var_f8 - x10_22
            uint32_t x9_31 = (x8_41 u>> 1).d
            int64_t x8_42 = (x8_41 & 0x1fffffffe) << 0x1f s>> 0x20
            int32_t x9_33 = (x9_31 & x9_31 s>> 0x1f) - 1
            
            while (true)
                int64_t x11_21 = x8_42 - 1
                
                if (x8_42 s< 1)
                    break
                
                uint32_t x12_7 = zx.d(*(x10_22 - 2 + (x8_42 << 1)))
                x8_42 = x11_21
                
                if (x12_7 != 0)
                    x9_33 = x11_21.d
                    break
            
            x8_39 = var_c0
            x2_7 = var_b8
            int32_t x13_6 = 0
            var_108 = x9_33
            void* x11_22 = x2_7 - x8_39
            uint32_t x10_24 = (x11_22 u>> 1).d
            int64_t i_52 = (x11_22 & 0x1fffffffe) << 0x1f s>> 0x20
            
            if (x10_24 s>= 1)
                int32_t x15_18 = 0xffff
                int64_t i_51 = i_52
                int64_t i_14
                
                do
                    int32_t x17_19
                    
                    if (zx.d(*(x8_39 - 2 + (i_51 << 1))) == 0)
                        x17_19 = 0
                    else
                        x17_19 = 0xffff
                    
                    i_14 = i_51
                    i_51 -= 1
                    x13_6 |= x15_18 & i_51.d & x17_19
                    x15_18 &= not.d(x17_19)
                while (i_14 s> 1)
            
            void* x15_19 = var_140
            var_c8 = x13_6
            void* x13_7 = var_138 - x15_19
            uint32_t x16_20 = (x13_7 u>> 1).d
            int64_t i_54 = (x13_7 & 0x1fffffffe) << 0x1f s>> 0x20
            int32_t x13_8 = 0
            
            if (x16_20 s>= 1)
                int32_t x0_29 = 0xffff
                int64_t i_46 = i_54
                int64_t i_15
                
                do
                    int32_t x3_2
                    
                    if (zx.d(*(x15_19 - 2 + (i_46 << 1))) == 0)
                        x3_2 = 0
                    else
                        x3_2 = 0xffff
                    
                    i_15 = i_46
                    i_46 -= 1
                    x13_8 |= x0_29 & i_46.d & x3_2
                    x0_29 &= not.d(x3_2)
                while (i_15 s> 1)
            
            var_148 = x13_8
            int64_t x1_9 = *(arg2 + 8)
            int64_t x17_22 = *(arg2 + 0x10) - x1_9
            uint32_t x3_3 = (x17_22 u>> 1).d
            int64_t x0_30 = (x17_22 & 0x1fffffffe) << 0x1f s>> 0x20
            int32_t x17_24 = (x3_3 & x3_3 s>> 0x1f) - 1
            
            while (true)
                int64_t x3_4 = x0_30 - 1
                
                if (x0_30 s< 1)
                    break
                
                uint32_t x4_3 = zx.d(*(x1_9 - 2 + (x0_30 << 1)))
                x0_30 = x3_4
                
                if (x4_3 != 0)
                    x17_24 = x3_4.d
                    break
            
            x10_21 = (x10_24 & x10_24 s>> 0x1f) - 1
            *arg2 = x17_24
            int16_t x12_9
            
            if ((x17_24 & 1) != 0)
                while (true)
                    int64_t i_55 = i_52 - 1
                    
                    if (i_52 s< 1)
                        break
                    
                    uint32_t x1_11 = zx.d(*(x8_39 - 2 + (i_52 << 1)))
                    i_52 = i_55
                    
                    if (x1_11 != 0)
                        x10_21 = i_55.d
                        break
                
                int32_t x12_11 = (x16_20 & x16_20 s>> 0x1f) - 1
                var_c8 = x10_21
                
                while (true)
                    int64_t i_57 = i_54 - 1
                    
                    if (i_54 s< 1)
                        break
                    
                    uint32_t x17_26 = zx.d(*(x15_19 - 2 + (i_54 << 1)))
                    i_54 = i_57
                    
                    if (x17_26 != 0)
                        x12_11 = i_57.d
                        break
                
                var_148 = x12_11
                x12_9 = (x10_21 s< arg3 ? 1 : 0).w & (x12_11 s< arg3 - 1 ? 1 : 0).w
            else
                while (true)
                    int64_t i_56 = i_52 - 1
                    
                    if (i_52 s< 1)
                        break
                    
                    uint32_t x16_21 = zx.d(*(x8_39 - 2 + (i_52 << 1)))
                    i_52 = i_56
                    
                    if (x16_21 != 0)
                        x10_21 = i_56.d
                        break
                
                var_c8 = x10_21
                x12_9 = (x10_21 s< arg3 - 1 ? 1 : 0).w
            
            int16_t x12_15
            
            if (zx.d(x12_9) == 0)
                x12_15 = 0
            else
                x12_15 = var_64_1
            
            var_1a4.w = x12_15
            
            if (zx.q(x9_33 - 1) u> x11_22 s>> 1)
                goto label_da93c4
            
            if (x2_7 == x8_39)
                goto label_da93a4
            
            uint64_t i_16 = 0
            int32_t i_49 = 1
            void* x12_19
            
            do
                int64_t x11_23 = i_16 << 1
                bool cond:21_1 = x9_33 == i_49
                *(x8_39 + x11_23) |= var_1a4.w
                i_16 = zx.q(i_49)
                i_49 += 1
                int16_t x8_44
                
                x8_44 = cond:21_1 ? 0 : var_1a4.w
                
                var_1a4.w = x8_44
                x8_39 = var_c0
                x12_19 = var_b8 - x8_39
            while (i_16 u< x12_19 s>> 1)
            
            if ((x12_19 u>> 1).d s< 1)
                x10_21 = 0
                goto label_da93b4
            
            x10_21 = 0
            int64_t i_47 = (x12_19 & 0x1fffffffe) << 0x1f s>> 0x20
            int32_t x11_24 = 0xffff
            int64_t i_17
            
            do
                int32_t x12_22
                
                if (zx.d(*(x8_39 + (i_47 << 1) - 2)) == 0)
                    x12_22 = 0
                else
                    x12_22 = 0xffff
                
                i_17 = i_47
                i_47 -= 1
                x10_21 |= x11_24 & i_47.d & x12_22
                x11_24 &= not.d(x12_22)
            while (i_17 s> 1)
            goto label_da93b4
        
        int16_t var_19c_1 = 0
        var_1a4 = 0
        x8_39 = var_c0
        x2_7 = var_b8
        void* x11_20 = x2_7 - x8_39
        uint32_t x9_30 = (x11_20 u>> 1).d
        
        if (x9_30 s< 1)
            x10_21 = 0
        else
            x10_21 = 0
            int64_t i_50 = (x11_20 & 0x1fffffffe) << 0x1f s>> 0x20
            int32_t x14_5 = 0xffff
            int32_t i_18
            
            do
                int32_t x15_17
                
                if (zx.d(*(x8_39 - 2 + (i_50 << 1))) == 0)
                    x15_17 = 0
                else
                    x15_17 = 0xffff
                
                i_18 = i_50
                i_50 -= 1
                x10_21 |= x14_5 & i_50.d & x15_17
                x14_5 &= not.d(x15_17)
            while (i_18 s> 1)
        
        void* x12_23 = var_140
        int32_t x15_21 = 0
        var_c8 = x10_21
        void* x13_15 = var_138 - x12_23
        uint32_t x14_12 = (x13_15 u>> 1).d
        int64_t i_53 = (x13_15 & 0x1fffffffe) << 0x1f s>> 0x20
        
        if (x14_12 s>= 1)
            int32_t x17_27 = 0xffff
            int64_t i_45 = i_53
            int64_t i_19
            
            do
                int32_t x1_13
                
                if (zx.d(*(x12_23 - 2 + (i_45 << 1))) == 0)
                    x1_13 = 0
                else
                    x1_13 = 0xffff
                
                i_19 = i_45
                i_45 -= 1
                x15_21 |= x17_27 & i_45.d & x1_13
                x17_27 &= not.d(x1_13)
            while (i_19 s> 1)
        
        var_148 = x15_21
        int32_t x14_14 = (x14_12 & x14_12 s>> 0x1f) - 1
        int64_t i_59 = i_53
        int64_t i_61
        uint32_t i_20
        
        do
            i_61 = i_59 - 1
            
            if (i_59 s< 1)
                var_148 = x14_14
                
                if (x14_14 == 4)
                    goto label_da8fb8
                
                goto label_da90b4
            
            i_20 = zx.d(*(x12_23 - 2 + (i_59 << 1)))
            i_59 = i_61
        while (i_20 == 0)
        var_148 = i_61.d
        int32_t x9_43
        
        if (i_61.d != 4)
        label_da90b4:
            int64_t i_60 = i_53
            int64_t i_62
            uint32_t i_21
            
            do
                i_62 = i_60 - 1
                
                if (i_60 s< 1)
                    var_148 = x14_14
                    
                    if (x14_14 == 6)
                        goto label_da90dc
                    
                    goto label_da91e0
                
                i_21 = zx.d(*(x12_23 - 2 + (i_60 << 1)))
                i_60 = i_62
            while (i_21 == 0)
            var_148 = i_62.d
            
            if (i_62.d != 6)
            label_da91e0:
                
                while (true)
                    int64_t i_58 = i_53 - 1
                    
                    if (i_53 s< 1)
                        break
                    
                    uint32_t x17_32 = zx.d(*(x12_23 - 2 + (i_53 << 1)))
                    i_53 = i_58
                    
                    if (x17_32 != 0)
                        x14_14 = i_58.d
                        break
                
                var_148 = x14_14
                
                if (x14_14 == 8)
                    int64_t x13_34 = (x11_20 & 0x1fffffffe) << 0x1f s>> 0x20
                    x10_21 = (x9_30 & x9_30 s>> 0x1f) - 1
                    
                    while (true)
                        int64_t x9_54 = x13_34 - 1
                        
                        if (x13_34 s< 1)
                            break
                        
                        uint32_t x14_22 = zx.d(*(x8_39 + (x13_34 << 1) - 2))
                        x13_34 = x9_54
                        
                        if (x14_22 != 0)
                            x10_21 = x9_54.d
                            break
                    
                    var_c8 = x10_21
                    int64_t* x0_35 = *(x19 + 0x10)
                    uint64_t x14_23 = zx.q(*x8_39)
                    int64_t x13_36 = *x0_35
                    int64_t x17_33 = (x0_35[1] - x13_36) s>> 1
                    
                    if (x17_33 u<= x14_23)
                        goto label_da99b8
                    
                    int64_t* x9_57 = *(x19 + 0x18)
                    int16_t x15_27 = x19[2].w
                    int64_t x14_24 = *x9_57
                    uint64_t x4_8 = zx.q(x15_27 - *(x13_36 + (x14_23 << 1)))
                    int64_t x16_37 = (x9_57[1] - x14_24) s>> 1
                    
                    if (x16_37 u<= x4_8)
                        goto label_da99c0
                    
                    uint64_t x3_9 = zx.q(*(x12_23 + 2))
                    uint32_t x1_19 = 0
                    
                    if (x3_9.d != 0)
                        uint64_t x4_9 = zx.q(*(x14_24 + (x4_8 << 1)))
                        
                        if (x4_9.d != 0)
                            if (x17_33 u<= x3_9)
                                goto label_da99d4
                            
                            if (x17_33 u<= x4_9)
                                goto label_da99d8
                            
                            uint64_t x13_38 =
                                zx.q(*(x13_36 + (x4_9 << 1))) + zx.q(*(x13_36 + (x3_9 << 1)))
                            uint64_t x13_41 = zx.q((x13_38 u>> zx.q(*x19)).w + (x13_38.w & x15_27))
                            
                            if (x16_37 u<= x13_41)
                                goto label_da99e4
                            
                            x1_19 = zx.d(*(x14_24 + (x13_41 << 1)))
                    
                    x9_43 = (x10_21 == 0 ? 1 : 0) & (x1_19 == 1 ? 1 : 0) & (
                        (zx.d(*(x12_23 + 0xa)) | zx.d(*(x12_23 + 6)) | zx.d(*(x12_23 + 0xe))) == 0
                        ? 1 : 0)
                    var_1a4 = (x9_43 & 1) << 0x1f s>> 0x1f & 6
                    var_19c_1 = x9_43.w
            else
            label_da90dc:
                int64_t x13_25 = (x11_20 & 0x1fffffffe) << 0x1f s>> 0x20
                x10_21 = (x9_30 & x9_30 s>> 0x1f) - 1
                
                while (true)
                    int64_t x9_45 = x13_25 - 1
                    
                    if (x13_25 s< 1)
                        break
                    
                    uint32_t x14_18 = zx.d(*(x8_39 + (x13_25 << 1) - 2))
                    x13_25 = x9_45
                    
                    if (x14_18 != 0)
                        x10_21 = x9_45.d
                        break
                
                var_c8 = x10_21
                int64_t* x0_33 = *(x19 + 0x10)
                uint64_t x14_19 = zx.q(*x8_39)
                int64_t x13_27 = *x0_33
                int64_t x17_30 = (x0_33[1] - x13_27) s>> 1
                
                if (x17_30 u<= x14_19)
                    goto label_da9974
                
                int64_t* x9_48 = *(x19 + 0x18)
                int16_t x15_25 = x19[2].w
                int64_t x14_20 = *x9_48
                uint64_t x4_6 = zx.q(x15_25 - *(x13_27 + (x14_19 << 1)))
                int64_t x16_32 = (x9_48[1] - x14_20) s>> 1
                
                if (x16_32 u<= x4_6)
                    goto label_da997c
                
                uint64_t x1_17 = zx.q(*(x12_23 + 2))
                uint32_t x3_8 = 0
                
                if (x1_17.d != 0)
                    uint64_t x4_7 = zx.q(*(x14_20 + (x4_6 << 1)))
                    
                    if (x4_7.d != 0)
                        if (x17_30 u<= x1_17)
                            goto label_da99c4
                        
                        if (x17_30 u<= x4_7)
                            goto label_da99c8
                        
                        uint64_t x13_29 =
                            zx.q(*(x13_27 + (x4_7 << 1))) + zx.q(*(x13_27 + (x1_17 << 1)))
                        uint64_t x13_32 = zx.q((x13_29 u>> zx.q(*x19)).w + (x13_29.w & x15_25))
                        
                        if (x16_32 u<= x13_32)
                            goto label_da99d0
                        
                        x3_8 = zx.d(*(x14_20 + (x13_32 << 1)))
                
                x9_43 = (x10_21 == 0 ? 1 : 0) & (x3_8 == 1 ? 1 : 0)
                    & ((zx.d(*(x12_23 + 0xa)) | zx.d(*(x12_23 + 6))) == 0 ? 1 : 0)
                var_1a4 = (x9_43 & 1) << 0x1f s>> 0x1f & 4
                var_19c_1 = x9_43.w
        else
        label_da8fb8:
            int64_t x13_16 = (x11_20 & 0x1fffffffe) << 0x1f s>> 0x20
            x10_21 = (x9_30 & x9_30 s>> 0x1f) - 1
            
            while (true)
                int64_t x9_36 = x13_16 - 1
                
                if (x13_16 s< 1)
                    break
                
                uint32_t x14_15 = zx.d(*(x8_39 + (x13_16 << 1) - 2))
                x13_16 = x9_36
                
                if (x14_15 != 0)
                    x10_21 = x9_36.d
                    break
            
            var_c8 = x10_21
            int64_t* x0_31 = *(x19 + 0x10)
            uint64_t x14_16 = zx.q(*x8_39)
            int64_t x13_18 = *x0_31
            int64_t x17_28 = (x0_31[1] - x13_18) s>> 1
            
            if (x17_28 u<= x14_16)
            label_da9968:
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
            label_da9970:
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
            label_da9974:
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
            label_da997c:
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
            label_da9980:
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
            label_da9984:
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                goto label_da99b4
            
            int64_t* x9_39 = *(x19 + 0x18)
            int16_t x15_23 = x19[2].w
            int64_t x14_17 = *x9_39
            uint64_t x4_4 = zx.q(x15_23 - *(x13_18 + (x14_16 << 1)))
            int64_t x16_27 = (x9_39[1] - x14_17) s>> 1
            
            if (x16_27 u<= x4_4)
                goto label_da9970
            
            uint64_t x1_15 = zx.q(*(x12_23 + 2))
            uint32_t x3_7 = 0
            
            if (x1_15.d == 0)
                goto label_da9094
            
            uint64_t x4_5 = zx.q(*(x14_17 + (x4_4 << 1)))
            
            if (x4_5.d == 0)
                goto label_da9094
            
            if (x17_28 u<= x1_15)
                goto label_da9980
            
            if (x17_28 u<= x4_5)
                goto label_da9984
            
            uint64_t x13_20 = zx.q(*(x13_18 + (x4_5 << 1))) + zx.q(*(x13_18 + (x1_15 << 1)))
            uint64_t x13_23 = zx.q((x13_20 u>> zx.q(*x19)).w + (x13_20.w & x15_23))
            
            if (x16_27 u<= x13_23)
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                goto label_da99b4
            
            x3_7 = zx.d(*(x14_17 + (x13_23 << 1)))
        label_da9094:
            x9_43 = (x10_21 == 0 ? 1 : 0) & (x3_7 == 1 ? 1 : 0) & (zx.d(*(x12_23 + 6)) == 0 ? 1 : 0)
            var_1a4 = (x9_43 & 1) << 0x1f s>> 0x1f & 2
            var_19c_1 = x9_43.w
        uint64_t x9_63 = zx.q(var_1a4)
        int16_t var_64_3 = var_19c_1
        
        if (x9_63 u> x11_20 s>> 1)
            goto label_da93c4
        
        if (x2_7 != x8_39)
            uint64_t i_22 = 0
            void* x11_27
            
            do
                int64_t x12_32 = i_22 << 1
                bool cond:24_1 = x9_63.d == i_22.d
                i_22 = zx.q(i_22.d + 1)
                *(x8_39 + x12_32) |= var_64_3
                int16_t x8_46
                
                x8_46 = cond:24_1 ? 0 : var_64_3
                
                var_64_3 = x8_46
                x8_39 = var_c0
                x11_27 = var_b8 - x8_39
            while (i_22 u< x11_27 s>> 1)
            
            if ((x11_27 u>> 1).d s< 1)
                x10_21 = 0
                goto label_da93b4
            
            x10_21 = 0
            int64_t i_48 = (x11_27 & 0x1fffffffe) << 0x1f s>> 0x20
            int32_t x11_28 = 0xffff
            int64_t i_23
            
            do
                int32_t x12_35
                
                if (zx.d(*(x8_39 + (i_48 << 1) - 2)) == 0)
                    x12_35 = 0
                else
                    x12_35 = 0xffff
                
                i_23 = i_48
                i_48 -= 1
                x10_21 |= x11_28 & i_48.d & x12_35
                x11_28 &= not.d(x12_35)
            while (i_23 s> 1)
            goto label_da93b4
        
    label_da93a4:
        x10_21 = 0
        x8_39 = x2_7
    label_da93b4:
        var_c8 = x10_21
    label_da93c4:
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
            &var_90, x8_39)
        
        if (var_a0_1 != 0)
            int32_t i_24
            
            do
                i_24 = __stxr(__ldxr(&var_a0_1[1]) + 1, &var_a0_1[1])
            while (i_24 != 0)
        
        var_80_1:8.q = var_a8_1
        int64_t* var_70_2 = var_a0_1
        
        if (var_70_1 != 0)
            int64_t x9_66
            int32_t i_25
            
            do
                x9_66 = __ldaxr(&var_70_1[1])
                i_25 = __stlxr(x9_66 - 1, &var_70_1[1])
            while (i_25 != 0)
            
            if (x9_66 == 0)
                (*(*var_70_1 + 0x10))(var_70_1)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        void* x1_21 = var_100
        var_c8 = var_108
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
            &var_c0, x1_21)
        
        if (var_e0_1 != 0)
            int32_t i_26
            
            do
                i_26 = __stxr(__ldxr(&var_e0_1[1]) + 1, &var_e0_1[1])
            while (i_26 != 0)
        
        int64_t* x28_2 = var_a0_1
        var_a8_1 = var_e8_1
        var_a0_1 = var_e0_1
        
        if (x28_2 != 0)
            int64_t x9_68
            int32_t i_27
            
            do
                x9_68 = __ldaxr(&x28_2[1])
                i_27 = __stlxr(x9_68 - 1, &x28_2[1])
            while (i_27 != 0)
            
            if (x9_68 == 0)
                (*(*x28_2 + 0x10))(x28_2)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        uint16_t* x1_22 = var_90.q
        var_108 = x10_21
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
            &var_100, x1_22)
        
        if (var_70_2 != 0)
            int32_t i_28
            
            do
                i_28 = __stxr(__ldxr(&var_70_2[1]) + 1, &var_70_2[1])
            while (i_28 != 0)
        
        int64_t* x28_3 = var_e0_1
        var_e8_1 = var_80_1:8.q
        var_e0_1 = var_70_2
        
        if (x28_3 != 0)
            int64_t x9_70
            int32_t i_29
            
            do
                x9_70 = __ldaxr(&x28_3[1])
                i_29 = __stlxr(x9_70 - 1, &x28_3[1])
            while (i_29 != 0)
            
            if (x9_70 == 0)
                (*(*x28_3 + 0x10))(x28_3)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        int32_t x8_61 = var_148
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
            &var_90, var_140)
        
        if (var_120 != 0)
            int32_t i_30
            
            do
                i_30 = __stxr(__ldxr(&var_120[1]) + 1, &var_120[1])
            while (i_30 != 0)
        
        int64_t var_128
        var_80_1:8.q = var_128
        var_70_1 = var_120
        
        if (var_70_2 != 0)
            int64_t x9_72
            int32_t i_31
            
            do
                x9_72 = __ldaxr(&var_70_2[1])
                i_31 = __stlxr(x9_72 - 1, &var_70_2[1])
            while (i_31 != 0)
            
            if (x9_72 == 0)
                (*(*var_70_2 + 0x10))(var_70_2)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        int16_t* x1_24 = var_180
        var_148 = var_188
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
            &var_140, x1_24)
        
        if (var_160 != 0)
            int32_t i_32
            
            do
                i_32 = __stxr(__ldxr(&var_160[1]) + 1, &var_160[1])
            while (i_32 != 0)
        
        var_128 = var_168
        int64_t* x28_5 = var_120
        var_120 = var_160
        
        if (x28_5 != 0)
            int64_t x9_74
            int32_t i_33
            
            do
                x9_74 = __ldaxr(&x28_5[1])
                i_33 = __stlxr(x9_74 - 1, &x28_5[1])
            while (i_33 != 0)
            
            if (x9_74 == 0)
                (*(*x28_5 + 0x10))(x28_5)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        uint16_t* x1_25 = var_90.q
        var_188 = x8_61
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::assign<uint16_t*>(
            &var_180, x1_25)
        
        if (var_70_1 != 0)
            int32_t i_34
            
            do
                i_34 = __stxr(__ldxr(&var_70_1[1]) + 1, &var_70_1[1])
            while (i_34 != 0)
        
        int64_t* x28_6 = var_160
        var_168 = var_80_1:8.q
        var_160 = var_70_1
        
        if (x28_6 != 0)
            int64_t x9_76
            int32_t i_35
            
            do
                x9_76 = __ldaxr(&x28_6[1])
                i_35 = __stlxr(x9_76 - 1, &x28_6[1])
            while (i_35 != 0)
            
            if (x9_76 == 0)
                (*(*x28_6 + 0x10))(x28_6)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        int64_t x9_77 = 0
        uint32_t i_36
        
        do
            i_36 = zx.d(*(var_100 + (sx.q(x27_1) << 1) - 2 + (x9_77 << 1)))
            x9_77 -= 1
        while (i_36 == 0)
        x8_33 = x27_1 + x9_77.d
        x20_1 += x24_2
        x24_2 = neg.d(x9_77.d)
        
        if (x8_33 s< arg3)
            x8_33 = x27_1 + x9_77.d
            x26_5 = entry_x8
            break
else
    x20_1 = 0

var_108 = x8_33
*x26_5 = x20_1
var_188 = x20_1
std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&x26_5[2])
*(x26_5 + 0x20) = var_168
*(x26_5 + 0x28) = var_160

if (var_160 != 0)
    int32_t i_37
    
    do
        i_37 = __stxr(__ldxr(&var_160[1]) + 1, &var_160[1])
    while (i_37 != 0)

x26_5[0xc] = var_108
std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&x26_5[0xe])
*(x26_5 + 0x50) = var_e8_1
*(x26_5 + 0x58) = var_e0_1

if (var_e0_1 != 0)
    int32_t i_38
    
    do
        i_38 = __stxr(__ldxr(&var_e0_1[1]) + 1, &var_e0_1[1])
    while (i_38 != 0)

int16_t* var_178_1
int64_t var_170
int16_t* x0_58

if (var_160 == 0)
label_da9710:
    x0_58 = var_180
    
    if (x0_58 != 0)
        var_178_1 = x0_58
        Botan::deallocate_memory(x0_58, (var_170 - x0_58) s>> 1, 2)
else
    int64_t x9_84
    int32_t i_39
    
    do
        x9_84 = __ldaxr(&var_160[1])
        i_39 = __stlxr(x9_84 - 1, &var_160[1])
    while (i_39 != 0)
    
    if (x9_84 != 0)
        goto label_da9710
    
    (*(*var_160 + 0x10))(var_160)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_58 = var_180
    
    if (x0_58 != 0)
        var_178_1 = x0_58
        Botan::deallocate_memory(x0_58, (var_170 - x0_58) s>> 1, 2)
void* var_138_1
int64_t var_130
void* x0_59

if (var_120 == 0)
label_da9750:
    x0_59 = var_140
    
    if (x0_59 != 0)
        var_138_1 = x0_59
        Botan::deallocate_memory(x0_59, (var_130 - x0_59) s>> 1, 2)
else
    int64_t x9_85
    int32_t i_40
    
    do
        x9_85 = __ldaxr(&var_120[1])
        i_40 = __stlxr(x9_85 - 1, &var_120[1])
    while (i_40 != 0)
    
    if (x9_85 != 0)
        goto label_da9750
    
    (*(*var_120 + 0x10))(var_120)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_59 = var_140
    
    if (x0_59 != 0)
        var_138_1 = x0_59
        Botan::deallocate_memory(x0_59, (var_130 - x0_59) s>> 1, 2)
void* var_f8_1
int64_t var_f0
void* x0_60

if (var_e0_1 == 0)
label_da9790:
    x0_60 = var_100
    
    if (x0_60 != 0)
        var_f8_1 = x0_60
        Botan::deallocate_memory(x0_60, (var_f0 - x0_60) s>> 1, 2)
else
    int64_t x9_86
    int32_t i_41
    
    do
        x9_86 = __ldaxr(&var_e0_1[1])
        i_41 = __stlxr(x9_86 - 1, &var_e0_1[1])
    while (i_41 != 0)
    
    if (x9_86 != 0)
        goto label_da9790
    
    (*(*var_e0_1 + 0x10))(var_e0_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_60 = var_100
    
    if (x0_60 != 0)
        var_f8_1 = x0_60
        Botan::deallocate_memory(x0_60, (var_f0 - x0_60) s>> 1, 2)
void* var_b8_1
int64_t var_b0
void* x0_61

if (var_a0_1 == 0)
label_da97d0:
    x0_61 = var_c0
    
    if (x0_61 != 0)
        var_b8_1 = x0_61
        Botan::deallocate_memory(x0_61, (var_b0 - x0_61) s>> 1, 2)
else
    int64_t x9_87
    int32_t i_42
    
    do
        x9_87 = __ldaxr(&var_a0_1[1])
        i_42 = __stlxr(x9_87 - 1, &var_a0_1[1])
    while (i_42 != 0)
    
    if (x9_87 != 0)
        goto label_da97d0
    
    (*(*var_a0_1 + 0x10))(var_a0_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_61 = var_c0
    
    if (x0_61 != 0)
        var_b8_1 = x0_61
        Botan::deallocate_memory(x0_61, (var_b0 - x0_61) s>> 1, 2)
void* result

if (var_70_1 == 0)
label_da9810:
    result = var_90.q
    
    if (result != 0)
        var_90:8.q = result
        result = Botan::deallocate_memory(result, (var_80_1.q - result) s>> 1, 2)
else
    int64_t x9_88
    int32_t i_43
    
    do
        x9_88 = __ldaxr(&var_70_1[1])
        i_43 = __stlxr(x9_88 - 1, &var_70_1[1])
    while (i_43 != 0)
    
    if (x9_88 != 0)
        goto label_da9810
    
    (*(*var_70_1 + 0x10))(var_70_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = var_90.q
    
    if (result != 0)
        var_90:8.q = result
        result = Botan::deallocate_memory(result, (var_80_1.q - result) s>> 1, 2)

if (x27 != 0)
    int64_t x9_89
    int32_t i_44
    
    do
        x9_89 = __ldaxr(&x27[1])
        i_44 = __stlxr(x9_89 - 1, &x27[1])
    while (i_44 != 0)
    
    if (x9_89 == 0)
        (*(*x27 + 0x10))(x27)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
