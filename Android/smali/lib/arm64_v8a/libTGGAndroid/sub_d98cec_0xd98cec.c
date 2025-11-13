// 函数: sub_d98cec
// 地址: 0xd98cec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_51 = arg28

if (x8_51 != 0)
    arg29 = x8_51
    operator delete(x8_51)

int64_t x8
int32_t i

do
    x8 = __ldaxr(arg3)
    i = __stlxr(x8 - 1, arg3)
while (i != 0)

if (x8 == 0)
    (*(*arg19 + 0x10))(arg19)
    std::__ndk1::__shared_weak_count::__release_weak()

void* arg_160
int16_t* result_1
int16_t* result_2

if (arg2 != 2)
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
    
    int64_t x8_48
    int32_t i_2
    
    do
        x8_48 = __ldaxr(arg3)
        i_2 = __stlxr(x8_48 - 1, arg3)
    while (i_2 != 0)
    
    if (x8_48 == 0)
        (*(*arg19 + 0x10))(arg19)
        std::__ndk1::__shared_weak_count::__release_weak()
    
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
__cxa_end_catch()
int64_t* arg_110 = arg25
int32_t i_3

do
    i_3 = __stxr(__ldxr(arg3) + 1, arg3)
while (i_3 != 0)
int128_t v0
int128_t v1
int128_t v2
v0, v1, v2 = Botan::polyn_gf2m::polyn_gf2m(&arg28, arg5, arg24)
int32_t arg_150
arg28.d = arg_150
v0 = arg30
arg_150 = arg28.d
int64_t* x20_10 = arg35
arg35 = arg31
v2 = arg32.o
arg32.o = arg29.o
int64_t x9_23 = arg33
arg30:8.q = arg34
arg31 = x20_10
arg33.o = v0
arg29.o = v2
arg30.q = x9_23
int64_t x9_24

if (x20_10 != 0)
    int32_t i_4
    
    do
        x9_24 = __ldaxr(&x20_10[1])
        i_4 = __stlxr(x9_24 - 1, &x20_10[1])
    while (i_4 != 0)

void* arg_130

if (x20_10 != 0 && x9_24 == 0)
    (*(*x20_10 + 0x10))(x20_10)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (arg29 != 0)
        arg_130 = arg29
        Botan::deallocate_memory(arg29, (arg30.q - arg29) s>> 1, 2)
else if (arg29 != 0)
    arg_130 = arg29
    Botan::deallocate_memory(arg29, (arg30.q - arg29) s>> 1, 2)

if (arg19 != 0)
    int64_t x9_25
    int32_t i_5
    
    do
        x9_25 = __ldaxr(&arg19[1])
        i_5 = __stlxr(x9_25 - 1, &arg19[1])
    while (i_5 != 0)
    
    if (x9_25 == 0)
        (*(*arg19 + 0x10))(arg19)
        std::__ndk1::__shared_weak_count::__release_weak()

int32_t i_6

do
    i_6 = __stxr(__ldxr(arg3) + 1, arg3)
while (i_6 != 0)
__builtin_memset(&arg28, 0, 0x18)
int64_t x26_3 = *arg25 * arg5
int64_t x8_66 = x26_3 * arg4
void* x0_36
int64_t x20_13
int32_t* x28_2

if (x8_66 == 0)
    x28_2 = nullptr
    x20_13 = 0
    int64_t* x8_71
    
    if (arg5 == 0)
    label_d98704:
        
        do
            result_1[x20_13]
            uint64_t x10_26 = zx.q(Botan::polyn_gf2m::eval(&arg_150))
            int64_t* x0_55 = arg25[2]
            int64_t x9_30 = *x0_55
            
            if (x10_26 u>= (x0_55[1] - x9_30) s>> 1)
                goto label_d98bc0
            
            x8_71 = arg25[3]
            
            if ((x8_71[1] - *x8_71) s>> 1 u<= zx.q(arg25[1].w - *(x9_30 + (x10_26 << 1))))
                goto label_d98bb8
            
            x20_13 += 1
        while (arg26 != x20_13)
        
        goto label_d9870c
    
label_d98504:
    int16_t* result_5 = result_1
label_d98520:
    result_5[x20_13]
    uint64_t x11_16 = zx.q(Botan::polyn_gf2m::eval(&arg_150))
    int64_t* x0_51 = arg25[2]
    int64_t x10_24 = *x0_51
    
    if (x11_16 u>= (x0_51[1] - x10_24) s>> 1)
    label_d98bc0:
        x0_36 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    else
        x8_71 = arg25[3]
        int16_t x9_29 = arg25[1].w
        int64_t x10_25 = *x8_71
        uint64_t x12_6 = zx.q(x9_29 - *(x10_24 + (x11_16 << 1)))
        
        if (x12_6 u>= (x8_71[1] - x10_25) s>> 1)
        label_d98bb8:
            x0_36 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
        else
            uint32_t x1_10 = zx.d(*(x10_25 + (x12_6 << 1)))
            int64_t x12_7 = *arg25
            result_5 = result_1
            int64_t x11_20 = 0
            int32_t* x13_14 = &x28_2[1 + arg8 + (x20_13 u>> 5)]
            int32_t x14_4 = arg7.d << x20_13.d
            int64_t x17_1 = x12_7
            
            while (true)
                if (x17_1 != 0)
                    if ((x1_10 & 1) != 0)
                        x28_2[(x20_13 u>> 5) + x17_1 * x11_20 * arg4] |= x14_4
                    
                    x17_1 = x12_7
                    
                    if (x12_7 u>= 2)
                        int32_t* x2_11 = x13_14
                        int64_t x3_2 = 1
                        
                        do
                            if (((x1_10 & 0xffff) u>> x3_2.d & 1) != 0)
                                *x2_11 |= x14_4
                            
                            x3_2 += 1
                            x2_11 += arg9
                        while (x3_2 u< x12_7)
                        
                        x17_1 = x12_7
                
                uint32_t x2_8 = 0
                
                if ((x1_10 & 0xffff) != 0)
                    uint32_t x3_3 = zx.d(result_5[x20_13])
                    uint32_t x3_4 = x3_3 ^ x3_3 u>> 1
                    
                    if (x3_4 != 0)
                        int64_t x2_12 = *x0_51
                        uint64_t x1_11 = zx.q(x1_10.w)
                        int64_t x4_7 = (x0_51[1] - x2_12) s>> 1
                        
                        if (x4_7 u<= x1_11)
                            x0_36 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            goto label_d9945c
                        
                        uint64_t x3_5 = zx.q(x3_4)
                        
                        if (x4_7 u<= x3_5)
                            x0_36 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            goto label_d9945c
                        
                        int64_t x1_12 = *x8_71
                        uint64_t x2_14 =
                            zx.q(*(x2_12 + (x3_5 << 1))) + zx.q(*(x2_12 + (x1_11 << 1)))
                        uint64_t x2_17 = zx.q((x2_14 u>> x17_1).w + (x2_14.w & x9_29))
                        
                        if (x2_17 u>= (x8_71[1] - x1_12) s>> 1)
                            x0_36 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            goto label_d9945c
                        
                        x2_8 = zx.d(*(x1_12 + (x2_17 << 1)))
                
                x11_20 += 1
                x13_14 += arg9 * x12_7
                x1_10 = x2_8
                
                if (x11_20 == arg5)
                    x20_13 += 1
                    
                    if (x20_13 == arg26)
                        break
                    
                    goto label_d98520
            
        label_d9870c:
            void* arg_198
            __builtin_memset(&arg_198, 0, 0x18)
            
            if (arg26 u>> 0x3d != 0)
                x0_36 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            else
                void* x0_57 = Botan::allocate_memory(arg26, 8)
                int64_t* x20_14 = x0_57
                arg_198 = x0_57
                int128_t v0_1
                int128_t v1_1
                int128_t v2_1
                int128_t v3_1
                v0_1, v1_1, v2_1, v3_1 = memset(x0_57, 0, arg18)
                *x20_14 = 0
                void* arg_1a0 = &x20_14[arg17]
                
                if (arg26 != 1)
                    x20_14[1] = arg7
                    
                    if (arg26 != 2)
                        x20_14[2] = 2
                        
                        if (arg26 != 3)
                            int64_t x8_81 = 3
                            
                            do
                                *(arg_198 + (x8_81 << 3)) = x8_81
                                x8_81 += 1
                            while (arg26 != x8_81)
                
                int64_t x20_15 = arg22
                
                if (x26_3 != 0)
                    uint64_t x15_5 = arg26
                    int64_t i_19 = 0
                    int32_t x8_82 = 0
                    int64_t x9_34 = x15_5 - x26_3
                    void* x10_30 = &x28_2[arg4]
                    int64_t x13_16 = not.q(x26_3) + x15_5
                    
                    do
                        x15_5 -= 1
                        
                        if (i_19 == x26_3)
                        label_d987cc:
                            *(arg_198 + ((x13_16 - zx.q(x8_82)) << 3)) = sx.q(x15_5.d)
                            
                            if (x15_5 == 0)
                                void* x16_6 = arg_198
                                
                                if (arg_1a0 != x16_6)
                                    arg_1a0 = x16_6
                            
                            x8_82 += 1
                            i_19 -= 1
                        else
                            int64_t x0_59 = arg4 * i_19
                            void* x2_19 = &x28_2[4 + x0_59]
                            uint64_t x16_5 = x15_5 u>> 5
                            int32_t x17_7 = arg7.d << x15_5.d
                            int64_t x1_14 = x0_59
                            void* x3_8 = x2_19
                            int64_t i_20 = i_19
                            
                            while (true)
                                int64_t x5_1 = i_20 * arg4
                                
                                if ((x28_2[x5_1 + x16_5] & x17_7) != 0)
                                    if (i_20 != i_19)
                                        int64_t x4_11 = i_19 * arg4
                                        int64_t x3_9
                                        
                                        if (arg23 u>= 0xe0)
                                            if (&x28_2[x4_11] u< x10_30 + (x5_1 << 2)
                                                    && &x28_2[x5_1] u< x10_30 + (x4_11 << 2))
                                                x20_15 = arg22
                                                x3_9 = 0
                                                goto label_d988dc
                                            
                                            int64_t i_18 = arg20
                                            x20_15 = arg22
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
                                            x3_9 = arg20
                                            
                                            if (arg4 != x3_9)
                                                goto label_d988dc
                                        else
                                            x3_9 = 0
                                        label_d988dc:
                                            int64_t i_17 = arg4 - x3_9
                                            void* x1_15 = &x28_2[x3_9 + x4_11]
                                            void* x3_11 = &x28_2[x3_9 + x1_14]
                                            int64_t i_8
                                            
                                            do
                                                int32_t x4_13 = *x3_11
                                                x3_11 += 4
                                                i_8 = i_17
                                                i_17 -= 1
                                                *x1_15 ^= x4_13
                                                x1_15 += 4
                                            while (i_8 != 1)
                                    
                                    int64_t x1_16 = i_19 + 1
                                    *(arg_198 + ((x9_34 + i_19) << 3)) = x15_5
                                    
                                    if (x1_16 u< x26_3)
                                        void* x2_22 = &x28_2[1 + arg4 * x1_16]
                                        int64_t x4_15 = arg4
                                        
                                        do
                                            if (x4_15 != 0
                                                    && (x28_2[x16_5 + x1_16 * x4_15] & x17_7) != 0)
                                                x28_2[x4_15 * x1_16] ^= x28_2[x4_15 * i_19]
                                                
                                                if (arg8 == 0)
                                                    x4_15 = 1
                                                else
                                                    int64_t x4_18 = 0
                                                    
                                                    do
                                                        int64_t x5_11 = x4_18 << 2
                                                        x4_18 += 1
                                                        *(x2_22 + x5_11) ^= x28_2[1 + x0_59 + x4_18]
                                                    while (arg8 != x4_18)
                                                    
                                                    x4_15 = x4_18 + 1
                                            
                                            x1_16 += 1
                                            x2_22 += arg9
                                        while (x1_16 != x26_3)
                                    
                                    if (i_19 != 0)
                                        void* x1_19 = &x28_2[1 + arg4 * (i_19 - 1)]
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
                                                        *(x1_19 + x4_25) ^= x28_2[1 + x0_59 + x3_17]
                                                    while (arg8 != x3_17)
                                                    
                                                    x3_14 = x3_17 + 1
                                            
                                            x1_19 += x20_15
                                        while (i_9 != 0)
                                    
                                    break
                                
                                i_20 += 1
                                x3_8 += arg9
                                x1_14 += arg4
                                
                                if (i_20 == x26_3)
                                    goto label_d987cc
                        
                        i_19 += 1
                    while (i_19 != x26_3)
                
                if (arg_1a0 == arg_198)
                    int64_t* x0_69 = __cxa_allocate_exception(0x20)
                    void* x0_70
                    int128_t v0_2
                    x0_70, v0_2 = operator new(0x50)
                    arg28.o = arg12
                    arg_130 = x0_70
                    __builtin_strncpy(x0_70, 
                        "McEliece keygen failed - could not bring matrix to row reduced echelon form", 
                        0x4c)
                    *x0_69 = arg11
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_69[1])
                    *x0_69 = arg10
                    __cxa_throw(x0_69, _typeinfo_for_Botan::Invalid_State, 
                        Botan::Exception::~Exception)
                    noreturn
                
                void* x0_61 = operator new(0x30)
                *(x0_61 + 0x18) = 0
                int64_t x20_18 = arg26 - x26_3
                void* x9_37 = (((x26_3 - 1) u>> 5) + 1) * x20_18
                *(x0_61 + 0x20) = 0
                *(x0_61 + 0x28) = 0
                *x0_61 = x20_18
                *(x0_61 + 8) = x26_3
                *(x0_61 + 0x10) = ((x26_3 - 1) u>> 5) + 1
                __builtin_memset(&arg28, 0, 0x18)
                
                if (x9_37 == 0)
                    *(x0_61 + 0x18) = 0
                    *(x0_61 + 0x20) = 0
                    *(x0_61 + 0x28) = x9_37
                    
                    if (x20_18 != 0)
                    label_d98ae8:
                        int64_t x8_92 = 0
                        int64_t x9_40 = x26_3
                        
                        do
                            if (x9_40 != 0)
                                int64_t x9_41 = 0
                                int64_t x10_32 = 0
                                
                                do
                                    int64_t x11_24 = *(arg_198 + (x8_92 << 3))
                                    
                                    if ((x28_2[x9_41 + (x11_24 u>> 5)] u>> x11_24.d & 1) != 0)
                                        int32_t* x12_13 = *(x0_61 + 0x18)
                                        *(x0_61 + 0x10)
                                        x12_13[*(x0_61 + 0x10) * x8_92 + (x10_32 u>> 5)] ^=
                                            arg7.d << x10_32.d
                                        x26_3 = *(x0_61 + 8)
                                    
                                    x10_32 += 1
                                    x9_41 += arg4
                                while (x10_32 u< x26_3)
                                
                                x20_18 = *x0_61
                                x9_40 = x26_3
                            
                            x8_92 += 1
                        while (x8_92 u< x20_18)
                        
                        goto label_d98b6c
                    
                label_d98b6c:
                    *arg16 = 0
                    arg16[1] = 0
                    void* x0_65 = operator new(arg21)
                    arg28 = x0_65
                    memset(x0_65, 0, arg21)
                    void* x8_3 = arg_198
                    int16_t* result_4 = result_1
                    *x0_65 = result_4[*x8_3]
                    
                    if (arg26 != 1)
                        void* x8_5 = arg28
                        *(x0_65 + 2) = result_4[*(x8_3 + 8)]
                        
                        if (arg26 != 2)
                            int64_t x9_3 = 2
                            
                            do
                                *(x8_5 + (x9_3 << 1)) = result_1[*(arg_198 + (x9_3 << 3))]
                                x9_3 += 1
                            while (arg26 != x9_3)
                    
                    void* x8_6 = arg28
                    int64_t x9_4 = 0
                    
                    do
                        int64_t x10_7 = x9_4 << 1
                        x9_4 += 1
                        result_1[x9_4] = *(x8_6 + x10_7)
                    while (arg26 != x9_4)
                    
                    void* x0_4 = arg28
                    
                    if (x0_4 != 0)
                        operator delete(x0_4)
                    
                    void* x0_5 = arg_198
                    
                    if (x0_5 != 0)
                        arg_1a0 = x0_5
                        Botan::deallocate_memory(x0_5, (x0_57 + (arg26 << 3) - x0_5) s>> 3, 8)
                    
                    if (x28_2 != 0)
                        operator delete(x28_2)
                    
                    int64_t x8_9
                    int32_t i_10
                    
                    do
                        x8_9 = __ldaxr(arg3)
                        i_10 = __stlxr(x8_9 - 1, arg3)
                    while (i_10 != 0)
                    
                    if (x8_9 == 0)
                        (*(*arg19 + 0x10))(arg19)
                        std::__ndk1::__shared_weak_count::__release_weak()
                    
                    Botan::polyn_gf2m::sqrt_mod_init(&arg_150)
                    Botan::syndrome_init(&arg_150, &result_1, arg26.d)
                    void* arg_f8
                    __builtin_memset(&arg_f8, 0, 0x18)
                    int64_t x24 = (((arg15 - 1) u>> 5) + 1) * arg26
                    void* arg_100
                    void* x25
                    
                    if (x24 == 0)
                        x25 = nullptr
                        
                        if (arg26 != 0 && arg5 != 0)
                        label_d98f8c:
                            int64_t x8_17 = 0
                            
                            do
                                int64_t x10_9 = 0
                                int64_t x11_3 = 0
                                
                                do
                                    uint64_t x12_4 = x10_9 u>> 5
                                    uint64_t x14_1 = x12_4 << 2
                                    *(x25 + x14_1) ^=
                                        zx.d(*(*(arg_198 + x8_17 * 0x30 + 8) + (x11_3 << 1)))
                                        << x10_9.d
                                    
                                    if ((x10_9 & 0x1f) + arg6 u>= 0x21)
                                        void* x12_5 = x25 + (x12_4 << 2)
                                        *(x12_5 + 4) ^=
                                            zx.d(*(*(arg_198 + x8_17 * 0x30 + 8) + (x11_3 << 1)))
                                            u>> neg.d(x10_9.d & 0x1f)
                                    
                                    x11_3 += 1
                                    x10_9 += arg6
                                while (arg5 != x11_3)
                                
                                x8_17 += 1
                                x25 += (((arg15 - 1) u>> 5) + 1) << 2
                            while (x8_17 != arg26)
                            
                            goto label_d99034
                        
                    label_d99034:
                        void* x0_14 = operator new(arg21)
                        void* arg_e0 = x0_14
                        void* arg_f0 = x0_14 + (arg26 << 1)
                        memset(x0_14, 0, arg21)
                        void* x8_19 = x0_14 + arg13
                        
                        if (arg13 != 0)
                            void* x8_20 = arg_e0
                            void* x9_8 = x8_19 - x8_20
                            *(x0_14 + (zx.q(*result_1) << 1)) = 0
                            
                            if (x9_8 != 2)
                                void* x11_5
                                
                                x11_5 = x9_8 s>= 0 ? x9_8 : -ffffffffffffffff
                                
                                void* x10_11 = x8_20 - x8_19
                                void* x11_6
                                
                                x11_6 = x11_5 s< 1 ? x11_5 : 1
                                
                                void* x9_9
                                
                                x9_9 = x10_11 s> x9_8 ? x10_11 : x9_8
                                
                                int64_t i_11 = 1
                                
                                do
                                    *(x8_20 + (zx.q(result_1[i_11]) << 1)) = (i_11.d).w
                                    i_11 += 1
                                while (x11_6 * (x9_9 u>> 1) != i_11)
                        
                        int32_t* x22 = *(x0_61 + 0x18)
                        int64_t x23 = *(x0_61 + 0x20)
                        __builtin_memset(&arg27, 0, 0x18)
                        uint64_t x20_4 = x23 - x22
                        void* arg_d0
                        void* x21_2
                        
                        if (x23 == x22)
                            x21_2 = nullptr
                            
                            if (x23 != x22)
                            label_d9911c:
                                *x21_2 = *x22
                                int32_t* x8_22 = *(x0_61 + 0x18)
                                
                                if ((*(x0_61 + 0x20) - x8_22) s>> 2 u>= 2)
                                    int64_t i_12 = 1
                                    
                                    do
                                        int64_t x11_9 = i_12 << 2
                                        i_12 += 1
                                        *(arg27 + x11_9) = x8_22[i_12]
                                        x8_22 = *(x0_61 + 0x18)
                                    while (i_12 u< (*(x0_61 + 0x20) - x8_22) s>> 2)
                                
                                goto label_d99174
                            
                        label_d99174:
                            Botan::McEliece_PrivateKey::McEliece_PrivateKey(arg14, &arg_150, 
                                &arg_f8, &arg28, &arg_e0)
                            void* x0_18 = arg27
                            
                            if (x0_18 != 0)
                                arg_d0 = x0_18
                                operator delete(x0_18)
                            
                            void* x0_19 = arg_e0
                            
                            if (x0_19 != 0)
                                operator delete(x0_19)
                            
                            void* x0_20 = arg_f8
                            
                            if (x0_20 != 0)
                                arg_100 = x0_20
                                operator delete(x0_20)
                            
                            void* x21_3 = arg_198
                            
                            if (x21_3 != 0)
                                void* x22_1 = arg_1a0
                                void* x0_21
                                
                                if (x22_1 != x21_3)
                                    do
                                        int64_t* x20_5 = *(x22_1 - 8)
                                        int64_t x9_15
                                        
                                        if (x20_5 != 0)
                                            int32_t i_13
                                            
                                            do
                                                x9_15 = __ldaxr(&x20_5[1])
                                                i_13 = __stlxr(x9_15 - 1, &x20_5[1])
                                            while (i_13 != 0)
                                        
                                        void* x0_22
                                        
                                        if (x20_5 != 0 && x9_15 == 0)
                                            (*(*x20_5 + 0x10))(x20_5)
                                            std::__ndk1::__shared_weak_count::__release_weak()
                                            x0_22 = *(x22_1 - 0x28)
                                            
                                            if (x0_22 != 0)
                                                goto label_d991f4
                                        else
                                            x0_22 = *(x22_1 - 0x28)
                                            
                                            if (x0_22 != 0)
                                            label_d991f4:
                                                int64_t x8_25 = *(x22_1 - 0x18)
                                                *(x22_1 - 0x20) = x0_22
                                                Botan::deallocate_memory(x0_22, 
                                                    (x8_25 - x0_22) s>> 1, 2)
                                        x22_1 -= 0x30
                                    while (x22_1 != x21_3)
                                    
                                    x0_21 = arg_198
                                else
                                    x0_21 = x21_3
                                
                                arg_1a0 = x21_3
                                operator delete(x0_21)
                            
                            void* x21_4 = arg28
                            
                            if (x21_4 != 0)
                                void* x22_2 = arg29
                                void* x0_25
                                
                                if (x22_2 != x21_4)
                                    do
                                        int64_t* x20_6 = *(x22_2 - 8)
                                        int64_t x9_16
                                        
                                        if (x20_6 != 0)
                                            int32_t i_14
                                            
                                            do
                                                x9_16 = __ldaxr(&x20_6[1])
                                                i_14 = __stlxr(x9_16 - 1, &x20_6[1])
                                            while (i_14 != 0)
                                        
                                        void* x0_26
                                        
                                        if (x20_6 != 0 && x9_16 == 0)
                                            (*(*x20_6 + 0x10))(x20_6)
                                            std::__ndk1::__shared_weak_count::__release_weak()
                                            x0_26 = *(x22_2 - 0x28)
                                            
                                            if (x0_26 != 0)
                                                goto label_d99290
                                        else
                                            x0_26 = *(x22_2 - 0x28)
                                            
                                            if (x0_26 != 0)
                                            label_d99290:
                                                int64_t x8_30 = *(x22_2 - 0x18)
                                                *(x22_2 - 0x20) = x0_26
                                                Botan::deallocate_memory(x0_26, 
                                                    (x8_30 - x0_26) s>> 1, 2)
                                        x22_2 -= 0x30
                                    while (x22_2 != x21_4)
                                    
                                    x0_25 = arg28
                                else
                                    x0_25 = x21_4
                                
                                arg29 = x21_4
                                operator delete(x0_25)
                            
                            void* x0_29 = *(x0_61 + 0x18)
                            
                            if (x0_29 != 0)
                                *(x0_61 + 0x20) = x0_29
                                operator delete(x0_29)
                            
                            operator delete(x0_61)
                            
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
                            
                            int64_t x8_38
                            int32_t i_16
                            
                            do
                                x8_38 = __ldaxr(arg3)
                                i_16 = __stlxr(x8_38 - 1, arg3)
                            while (i_16 != 0)
                            
                            if (x8_38 != 0)
                                return result
                            
                            (*(*arg19 + 0x10))(arg19)
                            return std::__ndk1::__shared_weak_count::__release_weak()
                        
                        if ((x20_4 & 0xffffffff80000000) == 0)
                            void* x0_16 = operator new(x20_4)
                            void* x24_2 = x0_16 + x20_4
                            x21_2 = x0_16
                            arg27 = x0_16
                            void* arg_d8 = x24_2
                            memset(x0_16, 0, x20_4)
                            arg_d0 = x24_2
                            
                            if (x23 != x22)
                                goto label_d9911c
                            
                            goto label_d99174
                    else
                        if (x24 u>> 0x3e == 0)
                            int64_t x20_2 = x24 << 2
                            void* x0_12 = operator new(x20_2)
                            x25 = x0_12
                            arg_f8 = x0_12
                            void* arg_108 = x0_12 + (x24 << 2)
                            memset(x0_12, 0, x20_2)
                            arg_100 = x20_2 + x0_12
                            
                            if (arg26 != 0 && arg5 != 0)
                                goto label_d98f8c
                            
                            goto label_d99034
                        
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    x0_36 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                else
                    if (x9_37 u>> 0x3e == 0)
                        size_t x0_62 = x9_37 << 2
                        void* x0_63 = operator new(x0_62)
                        memset(x0_63, 0, x0_62)
                        *(x0_61 + 0x18) = x0_63
                        *(x0_61 + 0x20) = x0_62 + x0_63
                        *(x0_61 + 0x28) = x0_63 + (x9_37 << 2)
                        
                        if (x20_18 != 0)
                            goto label_d98ae8
                        
                        goto label_d98b6c
                    
                    x0_36 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    if (x8_66 u>> 0x3e == 0)
        int64_t x20_12 = x8_66 << 2
        int32_t* x0_48 = operator new(x20_12)
        x28_2 = x0_48
        memset(x0_48, 0, x20_12)
        x20_13 = 0
        
        if (arg5 == 0)
            goto label_d98704
        
        goto label_d98504
    
    x0_36 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_d9945c:
sub_c776cc(x0_36)
noreturn
