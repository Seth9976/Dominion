// 函数: _ZN5Botan6pbkdf2ERNS_25MessageAuthenticationCodeEPhmPKhmm
// 地址: 0xde8600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20
int64_t var_10 = x20

if (arg6 == 0)
    void** x0_13 = __cxa_allocate_exception(0x20)
    int64_t x0_14
    int128_t v0_4
    x0_14, v0_4 = operator new(0x20)
    int64_t var_70_2 = x0_14
    int128_t var_80_1 = data_71b7d0
    __builtin_strncpy(x0_14, "PBKDF2: Invalid iteration count", 0x20)
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t x21 = arg3

if (arg3 == 0)
    return 

uint8_t* x23_1 = arg2
Botan::MessageAuthenticationCode& x24_1 = arg1
memset(arg2, 0, x21)
uint64_t x0_2 = (**x24_1)(x24_1)
int128_t var_80

if (x0_2 == 0)
    Botan::assertion_failure("prf_sz > 0", &data_793a18, "pbkdf2", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf6be)
label_de8cdc:
    int64_t* x0_17 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* var_70
    
    if ((zx.d(var_80.b) & 1) != 0)
        operator delete(var_70)
    sub_1101e04(x0_17)
    noreturn

uint64_t fp_1 = x0_2
__builtin_memset(&var_80, 0, 0x18)

if ((x0_2 & 0xffffffff80000000) != 0)
    goto label_de8cdc

int64_t x0_4 = Botan::allocate_memory(fp_1, 1)
int64_t x19_1 = x0_4 + fp_1
var_80.q = x0_4
memset(x0_4, 0, fp_1)
var_80:8.q = x19_1
int32_t x19_2 = 1
uint64_t var_e8_1 = fp_1
void* x1
uint64_t x27_1
uint64_t temp0_1

do
    x27_1 = x21 u< fp_1 ? x21 : fp_1
    
    (*(*x24_1 + 0x18))(x24_1, arg4, arg5)
    int32_t var_64 = _byteswap(x19_2)
    (*(*x24_1 + 0x18))(x24_1, &var_64, 4)
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    int128_t v5_1
    int128_t v6_1
    int128_t v7_1
    arg1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*x24_1 + 0x20))(x24_1, var_80.q)
    x1 = var_80.q
    int64_t i_25 = x27_1 & 0xffffffffffffffe0
    
    if (i_25 != 0)
        int64_t x8_10 = 0
        
        if (i_25 == 0x20 || &x23_1[i_25 - 8] u< &x23_1[0x18] || &x23_1[i_25 - 0x10] u< &x23_1[0x10]
                || &x23_1[i_25 - 0x18] u< &x23_1[8] || &x23_1[i_25 - 0x20] u< x23_1)
            goto label_de87cc
        
        if (x23_1 u>= x1 + i_25 || x1 u>= &x23_1[i_25])
            int64_t i_22 = (((i_25 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x8_10 = i_22 << 5
            int64_t i_20 = i_22
            void* x12_2 = x1
            uint8_t* x13_2 = x23_1
            int64_t i
            
            do
                v0_1.q = *x13_2
                v1_1.q = *(x13_2 + 8)
                v2_1.q = *(x13_2 + 0x10)
                v3_1.q = *(x13_2 + 0x18)
                v0_1:8.q = *(x13_2 + 0x20)
                v1_1:8.q = *(x13_2 + 0x28)
                v2_1:8.q = *(x13_2 + 0x30)
                v3_1:8.q = *(x13_2 + 0x38)
                v4_1.q = *x12_2
                v5_1.q = *(x12_2 + 8)
                v6_1.q = *(x12_2 + 0x10)
                v7_1.q = *(x12_2 + 0x18)
                v4_1:8.q = *(x12_2 + 0x20)
                v5_1:8.q = *(x12_2 + 0x28)
                v6_1:8.q = *(x12_2 + 0x30)
                v7_1:8.q = *(x12_2 + 0x38)
                x12_2 += 0x40
                i = i_20
                i_20 -= 2
                int128_t v16_1 = v4_1 ^ v0_1
                int128_t v17_1 = v5_1 ^ v1_1
                int128_t v18_1 = v6_1 ^ v2_1
                int128_t v19_1 = v7_1 ^ v3_1
                *x13_2 = v16_1.q
                *(x13_2 + 8) = v17_1.q
                *(x13_2 + 0x10) = v18_1.q
                *(x13_2 + 0x18) = v19_1.q
                *(x13_2 + 0x20) = v16_1:8.q
                *(x13_2 + 0x28) = v17_1:8.q
                *(x13_2 + 0x30) = v18_1:8.q
                *(x13_2 + 0x38) = v19_1:8.q
                x13_2 = &x13_2[0x40]
            while (i != 2)
            
            if (((i_25 - 0x20) u>> 5) + 1 != i_22)
                goto label_de87cc
        else
            x8_10 = 0
        label_de87cc:
            int64_t i_16 = x8_10 - i_25
            void* x8_14 = x1 + x8_10 + 0x10
            void* x10_4 = &x23_1[x8_10 + 0x10]
            int64_t i_1
            
            do
                v2_1 = *(x8_14 - 0x10)
                v3_1 = *x8_14
                i_1 = i_16
                i_16 += 0x20
                x8_14 += 0x20
                v1_1 = v3_1 ^ *x10_4
                *(x10_4 - 0x10) ^= v2_1
                *x10_4 = v1_1
                x10_4 += 0x20
            while (i_1 != -0x20)
    
    if (x27_1 != i_25)
        int64_t i_26 = i_25
        
        if ((x27_1 & 0x18) == 0)
        label_de886c:
            int64_t i_11 = x27_1 - i_26
            void* x10_6 = &x23_1[i_26]
            void* x9_6 = x1 + i_26
            int64_t i_2
            
            do
                char x11_5 = *x9_6
                x9_6 += 1
                i_2 = i_11
                i_11 -= 1
                *x10_6 ^= x11_5
                x10_6 += 1
            while (i_2 != 1)
        else
            void* x8_15 = &x23_1[i_25]
            void* x10_5 = x1 + i_25
            
            if (x8_15 u< x1 + x27_1)
                i_26 = i_25
            
            if (x8_15 u< x1 + x27_1 && x10_5 u< &x23_1[x27_1])
                goto label_de886c
            
            uint64_t x9_5
            
            x9_5 = fp_1 u< x21 ? fp_1 : x21
            
            int64_t x11_4 = x9_5 & 7
            int64_t i_21 = (x9_5 & 0x1f) - x11_4
            i_26 = i_25 + i_21
            int64_t i_3
            
            do
                v0_1.q = *x10_5
                x10_5 += 8
                v1_1.q = *x8_15
                i_3 = i_21
                i_21 -= 8
                *x8_15 = (v1_1 ^ v0_1).q
                x8_15 += 8
            while (i_3 != 8)
            
            if (x11_4 != 0)
                goto label_de886c
    
    if (arg6 != 1)
        if (i_25 == 0)
            uint64_t x25_2
            
            x25_2 = fp_1 u< x21 ? fp_1 : x21
            
            int64_t x20_2 = x27_1 & 0xffffffffffffffe0
            int64_t fp_3 = x25_2 & 0xfffffffffffffff8
            int64_t x21_3 = 1
            
            do
                (*(*x24_1 + 0x18))(x24_1)
                int128_t v0_3
                int128_t v1_3
                int128_t v2_3
                int128_t v3_3
                arg1, v0_3, v1_3, v2_3, v3_3 = (*(*x24_1 + 0x20))(x24_1, var_80.q)
                x1 = var_80.q
                
                if (x27_1 != i_25)
                    int64_t x10_16
                    
                    if (x27_1 u< 8 || (x23_1 u< x1 + x27_1 && x1 u< &x23_1[x27_1]))
                        x10_16 = 0
                    label_de8b34:
                        int64_t i_15 = x27_1 - x10_16
                        void* x9_15 = &x23_1[x10_16]
                        void* x10_17 = x1 + x10_16
                        int64_t i_4
                        
                        do
                            char x11_11 = *x10_17
                            x10_17 += 1
                            i_4 = i_15
                            i_15 -= 1
                            *x9_15 ^= x11_11
                            x9_15 += 1
                        while (i_4 != 1)
                    else
                        int64_t x11_13
                        
                        if (x27_1 u>= 0x20)
                            void* x8_43 = x1 + 0x10
                            int64_t i_18 = i_25
                            void* x10_18 = &x23_1[0x10]
                            int64_t i_5
                            
                            do
                                v0_3 = *(x8_43 - 0x10)
                                v1_3 = *x8_43
                                x8_43 += 0x20
                                i_5 = i_18
                                i_18 -= 0x20
                                v1_3 ^= *x10_18
                                *(x10_18 - 0x10) ^= v0_3
                                *x10_18 = v1_3
                                x10_18 += 0x20
                            while (i_5 != 0x20)
                            
                            if (x27_1 != x20_2)
                                x11_13 = x20_2
                                x10_16 = x20_2
                                
                                if ((x27_1 & 0x18) == 0)
                                    goto label_de8b34
                                
                                goto label_de8bb4
                        else
                            x11_13 = 0
                        label_de8bb4:
                            void* x8_45 = x1 + x11_13
                            void* x9_16 = &x23_1[x11_13]
                            int64_t i_19 = neg.q(x27_1 & 0xfffffffffffffff8) + x11_13
                            int64_t i_6
                            
                            do
                                v0_3.q = *x8_45
                                x8_45 += 8
                                v1_3.q = *x9_16
                                i_6 = i_19
                                i_19 += 8
                                *x9_16 = (v1_3 ^ v0_3).q
                                x9_16 += 8
                            while (i_6 != -8)
                            x10_16 = fp_3
                            
                            if (x25_2 != fp_3)
                                goto label_de8b34
                
                x21_3 += 1
            while (x21_3 != arg6)
        else
            uint64_t x11_7
            
            x11_7 = fp_1 u< x21 ? fp_1 : x21
            
            int64_t x13_3 = x11_7 & 7
            int64_t i_24 = (((i_25 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            int64_t i_23 = (x11_7 & 0x1f) - x13_3
            int32_t x8_21 = (&x23_1[i_25 - 8] u< &x23_1[0x18] ? 1 : 0)
                | (&x23_1[i_25 - 0x10] u< &x23_1[0x10] ? 1 : 0)
                | (&x23_1[i_25 - 0x18] u< &x23_1[8] ? 1 : 0)
            void* x20_1 = &x23_1[i_25]
            int64_t x19_4 = 1
            
            do
                (*(*x24_1 + 0x18))(x24_1)
                int128_t v0_2
                int128_t v1_2
                int128_t v2_2
                int128_t v3_2
                int128_t v4_2
                int128_t v5_2
                int128_t v6_2
                int128_t v7_2
                arg1, v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 =
                    (*(*x24_1 + 0x20))(x24_1, var_80.q)
                x1 = var_80.q
                int64_t x10_11
                
                if ((((i_25 == 0x20 ? 1 : 0) | x8_21 | (&x23_1[i_25 - 0x20] u< x23_1 ? 1 : 0)) & 1)
                        != 0 || (x23_1 u< x1 + i_25 && x1 u< x20_1))
                    x10_11 = 0
                label_de89a4:
                    int64_t i_12 = neg.q(x27_1 & 0xffffffffffffffe0) + x10_11
                    void* x9_11 = x1 + x10_11 + 0x10
                    void* x10_12 = &x23_1[0x10 + x10_11]
                    int64_t i_7
                    
                    do
                        v2_2 = *(x9_11 - 0x10)
                        v3_2 = *x9_11
                        i_7 = i_12
                        i_12 += 0x20
                        x9_11 += 0x20
                        v1_2 = v3_2 ^ *x10_12
                        *(x10_12 - 0x10) ^= v2_2
                        *x10_12 = v1_2
                        x10_12 += 0x20
                    while (i_7 != -0x20)
                else
                    int64_t i_14 = i_24
                    void* x9_14 = x1
                    uint8_t* x10_15 = x23_1
                    int64_t i_8
                    
                    do
                        v0_2.q = *x10_15
                        v1_2.q = *(x10_15 + 8)
                        v2_2.q = *(x10_15 + 0x10)
                        v3_2.q = *(x10_15 + 0x18)
                        v0_2:8.q = *(x10_15 + 0x20)
                        v1_2:8.q = *(x10_15 + 0x28)
                        v2_2:8.q = *(x10_15 + 0x30)
                        v3_2:8.q = *(x10_15 + 0x38)
                        v4_2.q = *x9_14
                        v5_2.q = *(x9_14 + 8)
                        v6_2.q = *(x9_14 + 0x10)
                        v7_2.q = *(x9_14 + 0x18)
                        v4_2:8.q = *(x9_14 + 0x20)
                        v5_2:8.q = *(x9_14 + 0x28)
                        v6_2:8.q = *(x9_14 + 0x30)
                        v7_2:8.q = *(x9_14 + 0x38)
                        x9_14 += 0x40
                        i_8 = i_14
                        i_14 -= 2
                        int128_t v16_2 = v4_2 ^ v0_2
                        int128_t v17_2 = v5_2 ^ v1_2
                        int128_t v18_2 = v6_2 ^ v2_2
                        int128_t v19_2 = v7_2 ^ v3_2
                        *x10_15 = v16_2.q
                        *(x10_15 + 8) = v17_2.q
                        *(x10_15 + 0x10) = v18_2.q
                        *(x10_15 + 0x18) = v19_2.q
                        *(x10_15 + 0x20) = v16_2:8.q
                        *(x10_15 + 0x28) = v17_2:8.q
                        *(x10_15 + 0x30) = v18_2:8.q
                        *(x10_15 + 0x38) = v19_2:8.q
                        x10_15 = &x10_15[0x40]
                    while (i_8 != 2)
                    x10_11 = i_24 << 5
                    
                    if (((i_25 - 0x20) u>> 5) + 1 != i_24)
                        goto label_de89a4
                
                if (x27_1 != i_25)
                    int64_t i_27 = i_25
                    
                    if ((x27_1 & 0x18) == 0)
                    label_de8a34:
                        int64_t i_13 = x27_1 - i_27
                        void* x9_13 = &x23_1[i_27]
                        void* x10_14 = x1 + i_27
                        int64_t i_9
                        
                        do
                            char x11_9 = *x10_14
                            x10_14 += 1
                            i_9 = i_13
                            i_13 -= 1
                            *x9_13 ^= x11_9
                            x9_13 += 1
                        while (i_9 != 1)
                    else
                        void* x8_32 = x1 + i_25
                        
                        if (x20_1 u< x1 + x27_1)
                            i_27 = i_25
                        
                        if (x20_1 u< x1 + x27_1 && x8_32 u< &x23_1[x27_1])
                            goto label_de8a34
                        
                        int64_t i_17 = i_23
                        void* x10_13 = x20_1
                        int64_t i_10
                        
                        do
                            v0_2.q = *x8_32
                            x8_32 += 8
                            v1_2.q = *x10_13
                            i_10 = i_17
                            i_17 -= 8
                            *x10_13 = (v1_2 ^ v0_2).q
                            x10_13 += 8
                        while (i_10 != 8)
                        i_27 = i_25 + i_23
                        
                        if (x13_3 != 0)
                            goto label_de8a34
                
                x19_4 += 1
            while (x19_4 != arg6)
    
    fp_1 = var_e8_1
    x23_1 = &x23_1[x27_1]
    x19_2 += 1
    temp0_1 = x21
    x21 -= x27_1
while (temp0_1 != x27_1)

if (x1 != 0)
    var_80:8.q = x1
    Botan::deallocate_memory(x1, x19_1 - x1, 1)
