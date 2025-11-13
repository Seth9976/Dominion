// 函数: sub_d98ca8
// 地址: 0xd98ca8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__cxa_free_exception()
void* x20 = arg36
void* arg_1a0

if (x20 != 0)
    arg_1a0 = x20
    Botan::deallocate_memory(x20, (arg37 - x20) s>> 3, 8)

if (arg10 != 0)
    operator delete(arg10)

int64_t x8_3
int32_t i

do
    x8_3 = __ldaxr(arg3)
    i = __stlxr(x8_3 - 1, arg3)
while (i != 0)

if (x8_3 == 0)
    (*(*arg20 + 0x10))(arg20)
    std::__ndk1::__shared_weak_count::__release_weak()

void* arg_160
int16_t* result_1
int16_t* result_2

if (arg2.d != 2)
    if (arg35 != 0)
        int64_t x9_19
        int32_t i_1
        
        do
            x9_19 = __ldaxr(&arg35[1])
            i_1 = __stlxr(x9_19 - 1, &arg35[1])
        while (i_1 != 0)
        
        if (x9_19 == 0)
            (*(*arg35 + 0x10))(arg35)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    if (arg32 != 0)
        arg_160 = arg32
        Botan::deallocate_memory(arg32, (arg33 - arg32) s>> 1, 2)
    
    int16_t* result_3 = result_1
    
    if (result_3 != 0)
        result_2 = result_3
        operator delete(result_3)
    
    int64_t x8_51
    int32_t i_2
    
    do
        x8_51 = __ldaxr(arg3)
        i_2 = __stlxr(x8_51 - 1, arg3)
    while (i_2 != 0)
    
    if (x8_51 == 0)
        (*(*arg20 + 0x10))(arg20)
        std::__ndk1::__shared_weak_count::__release_weak()
    
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
__cxa_end_catch()
int64_t* arg_110 = arg26
int32_t i_3

do
    i_3 = __stxr(__ldxr(arg3) + 1, arg3)
while (i_3 != 0)
int32_t arg_120
int128_t v0
int128_t v1
int128_t v2
v0, v1, v2 = Botan::polyn_gf2m::polyn_gf2m(&arg_120, arg5, arg25)
int32_t x8_56 = arg_120
int32_t arg_150
arg_120 = arg_150
v0 = arg30
arg_150 = x8_56
int64_t* x20_11 = arg35
arg35 = arg31
v2 = arg32.o
arg32.o = arg29
int64_t x9_23 = arg33
arg30:8.q = arg34
arg31 = x20_11
arg33.o = v0
arg29 = v2
arg30.q = x9_23
int64_t x9_24

if (x20_11 != 0)
    int32_t i_4
    
    do
        x9_24 = __ldaxr(&x20_11[1])
        i_4 = __stlxr(x9_24 - 1, &x20_11[1])
    while (i_4 != 0)

void* x0_45

if (x20_11 != 0 && x9_24 == 0)
    (*(*x20_11 + 0x10))(x20_11)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_45 = arg29.q
    
    if (x0_45 != 0)
        arg29:8.q = x0_45
        Botan::deallocate_memory(x0_45, (arg30.q - x0_45) s>> 1, 2)
else
    x0_45 = arg29.q
    
    if (x0_45 != 0)
        arg29:8.q = x0_45
        Botan::deallocate_memory(x0_45, (arg30.q - x0_45) s>> 1, 2)

if (arg20 != 0)
    int64_t x9_25
    int32_t i_5
    
    do
        x9_25 = __ldaxr(&arg20[1])
        i_5 = __stlxr(x9_25 - 1, &arg20[1])
    while (i_5 != 0)
    
    if (x9_25 == 0)
        (*(*arg20 + 0x10))(arg20)
        std::__ndk1::__shared_weak_count::__release_weak()

int32_t i_6

do
    i_6 = __stxr(__ldxr(arg3) + 1, arg3)
while (i_6 != 0)
__builtin_memset(&arg_120, 0, 0x18)
int64_t x26_3 = *arg26 * arg5
int64_t x8_68 = x26_3 * arg4
void* x0_37
int64_t x20_14
int32_t* x28_2

if (x8_68 == 0)
    x28_2 = nullptr
    x20_14 = 0
    int64_t* x8_73
    
    if (arg5 == 0)
    label_d98704:
        
        do
            result_1[x20_14]
            uint64_t x10_26 = zx.q(Botan::polyn_gf2m::eval(&arg_150))
            int64_t* x0_56 = arg26[2]
            int64_t x9_30 = *x0_56
            
            if (x10_26 u>= (x0_56[1] - x9_30) s>> 1)
                goto label_d98bc0
            
            x8_73 = arg26[3]
            
            if ((x8_73[1] - *x8_73) s>> 1 u<= zx.q(arg26[1].w - *(x9_30 + (x10_26 << 1))))
                goto label_d98bb8
            
            x20_14 += 1
        while (arg27 != x20_14)
        
        goto label_d9870c
    
label_d98504:
    int16_t* result_5 = result_1
label_d98520:
    result_5[x20_14]
    uint64_t x11_16 = zx.q(Botan::polyn_gf2m::eval(&arg_150))
    int64_t* x0_52 = arg26[2]
    int64_t x10_24 = *x0_52
    
    if (x11_16 u>= (x0_52[1] - x10_24) s>> 1)
    label_d98bc0:
        x0_37 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    else
        x8_73 = arg26[3]
        int16_t x9_29 = arg26[1].w
        int64_t x10_25 = *x8_73
        uint64_t x12_6 = zx.q(x9_29 - *(x10_24 + (x11_16 << 1)))
        
        if (x12_6 u>= (x8_73[1] - x10_25) s>> 1)
        label_d98bb8:
            x0_37 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
        else
            uint32_t x1_11 = zx.d(*(x10_25 + (x12_6 << 1)))
            int64_t x12_7 = *arg26
            result_5 = result_1
            int64_t x11_20 = 0
            int32_t* x13_14 = &x28_2[1 + arg8 + (x20_14 u>> 5)]
            int32_t x14_4 = arg7.d << x20_14.d
            int64_t x17_1 = x12_7
            
            while (true)
                if (x17_1 != 0)
                    if ((x1_11 & 1) != 0)
                        x28_2[(x20_14 u>> 5) + x17_1 * x11_20 * arg4] |= x14_4
                    
                    x17_1 = x12_7
                    
                    if (x12_7 u>= 2)
                        int32_t* x2_11 = x13_14
                        int64_t x3_2 = 1
                        
                        do
                            if (((x1_11 & 0xffff) u>> x3_2.d & 1) != 0)
                                *x2_11 |= x14_4
                            
                            x3_2 += 1
                            x2_11 += arg9
                        while (x3_2 u< x12_7)
                        
                        x17_1 = x12_7
                
                uint32_t x2_8 = 0
                
                if ((x1_11 & 0xffff) != 0)
                    uint32_t x3_3 = zx.d(result_5[x20_14])
                    uint32_t x3_4 = x3_3 ^ x3_3 u>> 1
                    
                    if (x3_4 != 0)
                        int64_t x2_12 = *x0_52
                        uint64_t x1_12 = zx.q(x1_11.w)
                        int64_t x4_7 = (x0_52[1] - x2_12) s>> 1
                        
                        if (x4_7 u<= x1_12)
                            x0_37 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            goto label_d9945c
                        
                        uint64_t x3_5 = zx.q(x3_4)
                        
                        if (x4_7 u<= x3_5)
                            x0_37 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            goto label_d9945c
                        
                        int64_t x1_13 = *x8_73
                        uint64_t x2_14 =
                            zx.q(*(x2_12 + (x3_5 << 1))) + zx.q(*(x2_12 + (x1_12 << 1)))
                        uint64_t x2_17 = zx.q((x2_14 u>> x17_1).w + (x2_14.w & x9_29))
                        
                        if (x2_17 u>= (x8_73[1] - x1_13) s>> 1)
                            x0_37 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            goto label_d9945c
                        
                        x2_8 = zx.d(*(x1_13 + (x2_17 << 1)))
                
                x11_20 += 1
                x13_14 += arg9 * x12_7
                x1_11 = x2_8
                
                if (x11_20 == arg5)
                    x20_14 += 1
                    
                    if (x20_14 == arg27)
                        break
                    
                    goto label_d98520
            
        label_d9870c:
            __builtin_memset(&arg36, 0, 0x18)
            
            if (arg27 u>> 0x3d != 0)
                x0_37 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            else
                void* x0_58 = Botan::allocate_memory(arg27, 8)
                arg36 = x0_58
                int128_t v0_1
                int128_t v1_1
                int128_t v2_1
                int128_t v3_1
                v0_1, v1_1, v2_1, v3_1 = memset(x0_58, 0, arg19)
                *x0_58 = 0
                arg_1a0 = x0_58 + (arg18 << 3)
                
                if (arg27 != 1)
                    *(x0_58 + 8) = arg7
                    
                    if (arg27 != 2)
                        *(x0_58 + 0x10) = 2
                        
                        if (arg27 != 3)
                            int64_t x8_83 = 3
                            
                            do
                                *(arg36 + (x8_83 << 3)) = x8_83
                                x8_83 += 1
                            while (arg27 != x8_83)
                
                int64_t x20_16 = arg23
                
                if (x26_3 != 0)
                    uint64_t x15_5 = arg27
                    int64_t i_19 = 0
                    int32_t x8_84 = 0
                    int64_t x9_34 = x15_5 - x26_3
                    void* x10_30 = &x28_2[arg4]
                    int64_t x13_16 = not.q(x26_3) + x15_5
                    
                    do
                        x15_5 -= 1
                        
                        if (i_19 == x26_3)
                        label_d987cc:
                            *(arg36 + ((x13_16 - zx.q(x8_84)) << 3)) = sx.q(x15_5.d)
                            
                            if (x15_5 == 0)
                                void* x16_6 = arg36
                                
                                if (arg_1a0 != x16_6)
                                    arg_1a0 = x16_6
                            
                            x8_84 += 1
                            i_19 -= 1
                        else
                            int64_t x0_60 = arg4 * i_19
                            void* x2_19 = &x28_2[4 + x0_60]
                            uint64_t x16_5 = x15_5 u>> 5
                            int32_t x17_7 = arg7.d << x15_5.d
                            int64_t x1_15 = x0_60
                            void* x3_8 = x2_19
                            int64_t i_20 = i_19
                            
                            while (true)
                                int64_t x5_1 = i_20 * arg4
                                
                                if ((x28_2[x5_1 + x16_5] & x17_7) != 0)
                                    if (i_20 != i_19)
                                        int64_t x4_11 = i_19 * arg4
                                        int64_t x3_9
                                        
                                        if (arg24 u>= 0xe0)
                                            if (&x28_2[x4_11] u< x10_30 + (x5_1 << 2)
                                                    && &x28_2[x5_1] u< x10_30 + (x4_11 << 2))
                                                x20_16 = arg23
                                                x3_9 = 0
                                                goto label_d988dc
                                            
                                            int64_t i_18 = arg21
                                            x20_16 = arg23
                                            int32_t i_7
                                            
                                            do
                                                v0_1 = *(x3_8 - 0x10)
                                                v1_1 = *x3_8
                                                x3_8 += 0x20
                                                i_7 = i_18
                                                i_18 -= 8
                                                v1_1 ^= *x2_19
                                                *(x2_19 - 0x10) ^= v0_1
                                                *x2_19 = v1_1
                                                x2_19 += 0x20
                                            while (i_7 != 8)
                                            x3_9 = arg21
                                            
                                            if (arg4 != x3_9)
                                                goto label_d988dc
                                        else
                                            x3_9 = 0
                                        label_d988dc:
                                            int64_t i_17 = arg4 - x3_9
                                            void* x1_16 = &x28_2[x3_9 + x4_11]
                                            void* x3_11 = &x28_2[x3_9 + x1_15]
                                            int64_t i_8
                                            
                                            do
                                                int32_t x4_13 = *x3_11
                                                x3_11 += 4
                                                i_8 = i_17
                                                i_17 -= 1
                                                *x1_16 ^= x4_13
                                                x1_16 += 4
                                            while (i_8 != 1)
                                    
                                    int64_t x1_17 = i_19 + 1
                                    *(arg36 + ((x9_34 + i_19) << 3)) = x15_5
                                    
                                    if (x1_17 u< x26_3)
                                        void* x2_22 = &x28_2[1 + arg4 * x1_17]
                                        int64_t x4_15 = arg4
                                        
                                        do
                                            if (x4_15 != 0
                                                    && (x28_2[x16_5 + x1_17 * x4_15] & x17_7) != 0)
                                                x28_2[x4_15 * x1_17] ^= x28_2[x4_15 * i_19]
                                                
                                                if (arg8 == 0)
                                                    x4_15 = 1
                                                else
                                                    int64_t x4_18 = 0
                                                    
                                                    do
                                                        int64_t x5_11 = x4_18 << 2
                                                        x4_18 += 1
                                                        *(x2_22 + x5_11) ^= x28_2[1 + x0_60 + x4_18]
                                                    while (arg8 != x4_18)
                                                    
                                                    x4_15 = x4_18 + 1
                                            
                                            x1_17 += 1
                                            x2_22 += arg9
                                        while (x1_17 != x26_3)
                                    
                                    if (i_19 != 0)
                                        void* x1_20 = &x28_2[1 + arg4 * (i_19 - 1)]
                                        int64_t x3_14 = arg4
                                        int64_t i_9 = i_19
                                        
                                        do
                                            i_9 -= 1
                                            
                                            if (x3_14 != 0
                                                    && (x28_2[x16_5 + i_9 * x3_14] & x17_7) != 0)
                                                x28_2[x3_14 * i_9] ^= x28_2[x3_14 * i_19]
                                                
                                                if (arg8 == 0)
                                                    x3_14 = 1
                                                else
                                                    int64_t x3_17 = 0
                                                    
                                                    do
                                                        int64_t x4_25 = x3_17 << 2
                                                        x3_17 += 1
                                                        *(x1_20 + x4_25) ^= x28_2[1 + x0_60 + x3_17]
                                                    while (arg8 != x3_17)
                                                    
                                                    x3_14 = x3_17 + 1
                                            
                                            x1_20 += x20_16
                                        while (i_9 != 0)
                                    
                                    break
                                
                                i_20 += 1
                                x3_8 += arg9
                                x1_15 += arg4
                                
                                if (i_20 == x26_3)
                                    goto label_d987cc
                        
                        i_19 += 1
                    while (i_19 != x26_3)
                
                if (arg_1a0 == arg36)
                    int64_t* x0_70 = __cxa_allocate_exception(0x20)
                    int64_t x0_71
                    int128_t v0_2
                    x0_71, v0_2 = operator new(0x50)
                    arg_120.o = arg13
                    arg29:8.q = x0_71
                    __builtin_strncpy(x0_71, 
                        "McEliece keygen failed - could not bring matrix to row reduced echelon form", 
                        0x4c)
                    *x0_70 = arg12
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_70[1])
                    *x0_70 = arg11
                    __cxa_throw(x0_70, _typeinfo_for_Botan::Invalid_State, 
                        Botan::Exception::~Exception)
                    noreturn
                
                void* x0_62 = operator new(0x30)
                *(x0_62 + 0x18) = 0
                int64_t x20_19 = arg27 - x26_3
                void* x9_37 = (((x26_3 - 1) u>> 5) + 1) * x20_19
                *(x0_62 + 0x20) = 0
                *(x0_62 + 0x28) = 0
                *x0_62 = x20_19
                *(x0_62 + 8) = x26_3
                *(x0_62 + 0x10) = ((x26_3 - 1) u>> 5) + 1
                __builtin_memset(&arg_120, 0, 0x18)
                
                if (x9_37 == 0)
                    *(x0_62 + 0x18) = 0
                    *(x0_62 + 0x20) = 0
                    *(x0_62 + 0x28) = x9_37
                    
                    if (x20_19 != 0)
                    label_d98ae8:
                        int64_t x8_94 = 0
                        int64_t x9_40 = x26_3
                        
                        do
                            if (x9_40 != 0)
                                int64_t x9_41 = 0
                                int64_t x10_32 = 0
                                
                                do
                                    int64_t x11_24 = *(arg36 + (x8_94 << 3))
                                    
                                    if ((x28_2[x9_41 + (x11_24 u>> 5)] u>> x11_24.d & 1) != 0)
                                        int32_t* x12_13 = *(x0_62 + 0x18)
                                        *(x0_62 + 0x10)
                                        x12_13[*(x0_62 + 0x10) * x8_94 + (x10_32 u>> 5)] ^=
                                            arg7.d << x10_32.d
                                        x26_3 = *(x0_62 + 8)
                                    
                                    x10_32 += 1
                                    x9_41 += arg4
                                while (x10_32 u< x26_3)
                                
                                x20_19 = *x0_62
                                x9_40 = x26_3
                            
                            x8_94 += 1
                        while (x8_94 u< x20_19)
                        
                        goto label_d98b6c
                    
                label_d98b6c:
                    *arg17 = 0
                    arg17[1] = 0
                    int16_t* x0_66 = operator new(arg22)
                    arg_120.q = x0_66
                    memset(x0_66, 0, arg22)
                    void* x8_6 = arg36
                    int16_t* result_4 = result_1
                    *x0_66 = result_4[*x8_6]
                    
                    if (arg27 != 1)
                        int64_t x8_8 = arg_120.q
                        x0_66[1] = result_4[*(x8_6 + 8)]
                        
                        if (arg27 != 2)
                            int64_t x9_3 = 2
                            
                            do
                                *(x8_8 + (x9_3 << 1)) = result_1[*(arg36 + (x9_3 << 3))]
                                x9_3 += 1
                            while (arg27 != x9_3)
                    
                    int16_t* x8_9 = arg_120.q
                    int64_t x9_4 = 0
                    
                    do
                        x9_4 += 1
                        result_1[x9_4] = x8_9[x9_4]
                    while (arg27 != x9_4)
                    
                    void* x0_5 = arg_120.q
                    
                    if (x0_5 != 0)
                        operator delete(x0_5)
                    
                    void* x0_6 = arg36
                    
                    if (x0_6 != 0)
                        arg_1a0 = x0_6
                        Botan::deallocate_memory(x0_6, (x0_58 + (arg27 << 3) - x0_6) s>> 3, 8)
                    
                    if (x28_2 != 0)
                        operator delete(x28_2)
                    
                    int64_t x8_12
                    int32_t i_10
                    
                    do
                        x8_12 = __ldaxr(arg3)
                        i_10 = __stlxr(x8_12 - 1, arg3)
                    while (i_10 != 0)
                    
                    if (x8_12 == 0)
                        (*(*arg20 + 0x10))(arg20)
                        std::__ndk1::__shared_weak_count::__release_weak()
                    
                    Botan::polyn_gf2m::sqrt_mod_init(&arg_150)
                    Botan::syndrome_init(&arg_150, &result_1, arg27.d)
                    void* arg_f8
                    __builtin_memset(&arg_f8, 0, 0x18)
                    int64_t x24 = (((arg16 - 1) u>> 5) + 1) * arg27
                    void* arg_100
                    void* x25
                    
                    if (x24 == 0)
                        x25 = nullptr
                        
                        if (arg27 != 0 && arg5 != 0)
                        label_d98f8c:
                            int64_t x8_20 = 0
                            
                            do
                                int64_t x10_9 = 0
                                int64_t x11_3 = 0
                                
                                do
                                    uint64_t x12_4 = x10_9 u>> 5
                                    uint64_t x14_1 = x12_4 << 2
                                    *(x25 + x14_1) ^=
                                        zx.d(*(*(arg36 + x8_20 * 0x30 + 8) + (x11_3 << 1)))
                                        << x10_9.d
                                    
                                    if ((x10_9 & 0x1f) + arg6 u>= 0x21)
                                        void* x12_5 = x25 + (x12_4 << 2)
                                        *(x12_5 + 4) ^=
                                            zx.d(*(*(arg36 + x8_20 * 0x30 + 8) + (x11_3 << 1)))
                                            u>> neg.d(x10_9.d & 0x1f)
                                    
                                    x11_3 += 1
                                    x10_9 += arg6
                                while (arg5 != x11_3)
                                
                                x8_20 += 1
                                x25 += (((arg16 - 1) u>> 5) + 1) << 2
                            while (x8_20 != arg27)
                            
                            goto label_d99034
                        
                    label_d99034:
                        void* x0_15 = operator new(arg22)
                        void* arg_e0 = x0_15
                        void* arg_f0 = x0_15 + (arg27 << 1)
                        memset(x0_15, 0, arg22)
                        void* x8_22 = x0_15 + arg14
                        
                        if (arg14 != 0)
                            void* x8_23 = arg_e0
                            void* x9_8 = x8_22 - x8_23
                            *(x0_15 + (zx.q(*result_1) << 1)) = 0
                            
                            if (x9_8 != 2)
                                void* x11_5
                                
                                x11_5 = x9_8 s>= 0 ? x9_8 : -ffffffffffffffff
                                
                                void* x10_11 = x8_23 - x8_22
                                void* x11_6
                                
                                x11_6 = x11_5 s< 1 ? x11_5 : 1
                                
                                void* x9_9
                                
                                x9_9 = x10_11 s> x9_8 ? x10_11 : x9_8
                                
                                int64_t i_11 = 1
                                
                                do
                                    *(x8_23 + (zx.q(result_1[i_11]) << 1)) = (i_11.d).w
                                    i_11 += 1
                                while (x11_6 * (x9_9 u>> 1) != i_11)
                        
                        int32_t* x22 = *(x0_62 + 0x18)
                        int64_t x23 = *(x0_62 + 0x20)
                        __builtin_memset(&arg28, 0, 0x18)
                        uint64_t x20_5 = x23 - x22
                        void* arg_d0
                        void* x21_2
                        
                        if (x23 == x22)
                            x21_2 = nullptr
                            
                            if (x23 != x22)
                            label_d9911c:
                                *x21_2 = *x22
                                int32_t* x8_25 = *(x0_62 + 0x18)
                                
                                if ((*(x0_62 + 0x20) - x8_25) s>> 2 u>= 2)
                                    int64_t i_12 = 1
                                    
                                    do
                                        int64_t x11_9 = i_12 << 2
                                        i_12 += 1
                                        *(arg28 + x11_9) = x8_25[i_12]
                                        x8_25 = *(x0_62 + 0x18)
                                    while (i_12 u< (*(x0_62 + 0x20) - x8_25) s>> 2)
                                
                                goto label_d99174
                            
                        label_d99174:
                            Botan::McEliece_PrivateKey::McEliece_PrivateKey(arg15, &arg_150, 
                                &arg_f8, &arg_120, &arg_e0)
                            void* x0_19 = arg28
                            
                            if (x0_19 != 0)
                                arg_d0 = x0_19
                                operator delete(x0_19)
                            
                            void* x0_20 = arg_e0
                            
                            if (x0_20 != 0)
                                operator delete(x0_20)
                            
                            void* x0_21 = arg_f8
                            
                            if (x0_21 != 0)
                                arg_100 = x0_21
                                operator delete(x0_21)
                            
                            void* x21_3 = arg36
                            
                            if (x21_3 != 0)
                                void* x22_1 = arg_1a0
                                void* x0_22
                                
                                if (x22_1 != x21_3)
                                    do
                                        int64_t* x20_6 = *(x22_1 - 8)
                                        int64_t x9_15
                                        
                                        if (x20_6 != 0)
                                            int32_t i_13
                                            
                                            do
                                                x9_15 = __ldaxr(&x20_6[1])
                                                i_13 = __stlxr(x9_15 - 1, &x20_6[1])
                                            while (i_13 != 0)
                                        
                                        void* x0_23
                                        
                                        if (x20_6 != 0 && x9_15 == 0)
                                            (*(*x20_6 + 0x10))(x20_6)
                                            std::__ndk1::__shared_weak_count::__release_weak()
                                            x0_23 = *(x22_1 - 0x28)
                                            
                                            if (x0_23 != 0)
                                                goto label_d991f4
                                        else
                                            x0_23 = *(x22_1 - 0x28)
                                            
                                            if (x0_23 != 0)
                                            label_d991f4:
                                                int64_t x8_28 = *(x22_1 - 0x18)
                                                *(x22_1 - 0x20) = x0_23
                                                Botan::deallocate_memory(x0_23, 
                                                    (x8_28 - x0_23) s>> 1, 2)
                                        x22_1 -= 0x30
                                    while (x22_1 != x21_3)
                                    
                                    x0_22 = arg36
                                else
                                    x0_22 = x21_3
                                
                                arg_1a0 = x21_3
                                operator delete(x0_22)
                            
                            void* x21_4 = arg_120.q
                            
                            if (x21_4 != 0)
                                void* x22_2 = arg29.q
                                void* x0_26
                                
                                if (x22_2 != x21_4)
                                    do
                                        int64_t* x20_7 = *(x22_2 - 8)
                                        int64_t x9_16
                                        
                                        if (x20_7 != 0)
                                            int32_t i_14
                                            
                                            do
                                                x9_16 = __ldaxr(&x20_7[1])
                                                i_14 = __stlxr(x9_16 - 1, &x20_7[1])
                                            while (i_14 != 0)
                                        
                                        void* x0_27
                                        
                                        if (x20_7 != 0 && x9_16 == 0)
                                            (*(*x20_7 + 0x10))(x20_7)
                                            std::__ndk1::__shared_weak_count::__release_weak()
                                            x0_27 = *(x22_2 - 0x28)
                                            
                                            if (x0_27 != 0)
                                                goto label_d99290
                                        else
                                            x0_27 = *(x22_2 - 0x28)
                                            
                                            if (x0_27 != 0)
                                            label_d99290:
                                                int64_t x8_33 = *(x22_2 - 0x18)
                                                *(x22_2 - 0x20) = x0_27
                                                Botan::deallocate_memory(x0_27, 
                                                    (x8_33 - x0_27) s>> 1, 2)
                                        x22_2 -= 0x30
                                    while (x22_2 != x21_4)
                                    
                                    x0_26 = arg_120.q
                                else
                                    x0_26 = x21_4
                                
                                arg29.q = x21_4
                                operator delete(x0_26)
                            
                            void* x0_30 = *(x0_62 + 0x18)
                            
                            if (x0_30 != 0)
                                *(x0_62 + 0x20) = x0_30
                                operator delete(x0_30)
                            
                            operator delete(x0_62)
                            
                            if (arg35 == 0)
                            label_d99318:
                                
                                if (arg32 != 0)
                                    arg_160 = arg32
                                    Botan::deallocate_memory(arg32, (arg33 - arg32) s>> 1, 2)
                            else
                                int64_t x9_17
                                int32_t i_15
                                
                                do
                                    x9_17 = __ldaxr(&arg35[1])
                                    i_15 = __stlxr(x9_17 - 1, &arg35[1])
                                while (i_15 != 0)
                                
                                if (x9_17 != 0)
                                    goto label_d99318
                                
                                (*(*arg35 + 0x10))(arg35)
                                std::__ndk1::__shared_weak_count::__release_weak()
                                
                                if (arg32 != 0)
                                    arg_160 = arg32
                                    Botan::deallocate_memory(arg32, (arg33 - arg32) s>> 1, 2)
                            
                            int16_t* result = result_1
                            
                            if (result != 0)
                                result_2 = result
                                result = operator delete(result)
                            
                            int64_t x8_41
                            int32_t i_16
                            
                            do
                                x8_41 = __ldaxr(arg3)
                                i_16 = __stlxr(x8_41 - 1, arg3)
                            while (i_16 != 0)
                            
                            if (x8_41 != 0)
                                return result
                            
                            (*(*arg20 + 0x10))(arg20)
                            return std::__ndk1::__shared_weak_count::__release_weak()
                        
                        if ((x20_5 & 0xffffffff80000000) == 0)
                            void* x0_17 = operator new(x20_5)
                            void* x24_2 = x0_17 + x20_5
                            x21_2 = x0_17
                            arg28 = x0_17
                            void* arg_d8 = x24_2
                            memset(x0_17, 0, x20_5)
                            arg_d0 = x24_2
                            
                            if (x23 != x22)
                                goto label_d9911c
                            
                            goto label_d99174
                    else
                        if (x24 u>> 0x3e == 0)
                            int64_t x20_3 = x24 << 2
                            void* x0_13 = operator new(x20_3)
                            x25 = x0_13
                            arg_f8 = x0_13
                            void* arg_108 = x0_13 + (x24 << 2)
                            memset(x0_13, 0, x20_3)
                            arg_100 = x20_3 + x0_13
                            
                            if (arg27 != 0 && arg5 != 0)
                                goto label_d98f8c
                            
                            goto label_d99034
                        
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    x0_37 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                else
                    if (x9_37 u>> 0x3e == 0)
                        size_t x0_63 = x9_37 << 2
                        void* x0_64 = operator new(x0_63)
                        memset(x0_64, 0, x0_63)
                        *(x0_62 + 0x18) = x0_64
                        *(x0_62 + 0x20) = x0_63 + x0_64
                        *(x0_62 + 0x28) = x0_64 + (x9_37 << 2)
                        
                        if (x20_19 != 0)
                            goto label_d98ae8
                        
                        goto label_d98b6c
                    
                    x0_37 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    if (x8_68 u>> 0x3e == 0)
        int64_t x20_13 = x8_68 << 2
        int32_t* x0_49 = operator new(x20_13)
        x28_2 = x0_49
        memset(x0_49, 0, x20_13)
        x20_14 = 0
        
        if (arg5 == 0)
            goto label_d98704
        
        goto label_d98504
    
    x0_37 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_d9945c:
sub_c776cc(x0_37)
noreturn
