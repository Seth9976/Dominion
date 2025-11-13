// 函数: _ZN5Botan14XTS_Decryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xed7618
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg2
int64_t x9_1 = *(arg2 + 8) - x8
int64_t entry_x2
int64_t x2 = x9_1 - entry_x2
char const* const x0_15
char* x1_10
int32_t x4_2

if (x9_1 u< entry_x2)
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x18e06)
label_ed7ee4:
    x4_2 = 0x18e0a
    x0_15 = "sz >= minimum_final_size()"
    x1_10 = "Have sufficient final input in XTS decrypt"
label_ed7f24:
    Botan::assertion_failure(x0_15, x1_10, "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", x4_2)
label_ed7f2c:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    sub_c776cc(Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9))
    noreturn

int64_t x24_1 = *(arg1 + 0x30)

if (x2 u< x24_1)
    goto label_ed7ee4

int64_t x23_1 = x8 + entry_x2
void* result

if (x2 u% x24_1 == 0)
    result = (*(*arg1 + 0x38))(arg1, x23_1)
    void* x8_6 = *arg2
    void* x9_4 = result + entry_x2
    void* x10_4 = *(arg2 + 8) - x8_6
    
    if (x9_4 u> x10_4)
        return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
            __tailcall
    
    if (x9_4 u< x10_4)
        *(arg2 + 8) = x8_6 + x9_4
    
    return result

int64_t x25_1 = (x2 u/ x24_1 - 1) * x24_1
uint64_t x21_1 = x2 - x25_1

if (x21_1 u<= x24_1 || x21_1 u>= x24_1 << 1)
    x4_2 = 0x18e17
    x0_15 = "final_bytes > BS && final_bytes < 2*BS"
    x1_10 = "Left over size in expected range"
    goto label_ed7f24

void* result_1
__builtin_memset(&result_1, 0, 0x18)

if ((x21_1 & 0xffffffff80000000) != 0)
    goto label_ed7f2c

void* result_3 = Botan::allocate_memory(x21_1, 1)
void* x23_2 = result_3 + x21_1
result_1 = result_3
memcpy(result_3, x23_1 + x25_1, x21_1)
int64_t x8_3 = *arg2
int64_t x9_3 = *(arg2 + 8)
int64_t x10_2 = x25_1 + entry_x2
int64_t x11_1 = x9_3 - x8_3

if (x10_2 u> x11_1)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
    x8_3 = *arg2
    x9_3 = *(arg2 + 8)
else if (x10_2 u< x11_1)
    x9_3 = x8_3 + x10_2
    *(arg2 + 8) = x9_3

int64_t x9_6 = x9_3 - x8_3

if (x9_6 u< entry_x2)
    sub_c776cc(Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9))
    noreturn

int64_t x0_6
int128_t v0_2
int128_t v1_2
int128_t v2_2
int128_t v3_2
int128_t v4_2
int128_t v5_2
int128_t v6_2
int128_t v7_2
x0_6, v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 =
    (*(*arg1 + 0x38))(arg1, x8_3 + entry_x2, x9_6 - entry_x2)
int64_t x8_8 = *arg2
int64_t x9_9 = x0_6 + entry_x2
int64_t x10_7 = *(arg2 + 8) - x8_8

if (x9_9 u> x10_7)
    v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 =
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
else if (x9_9 u< x10_7)
    *(arg2 + 8) = x8_8 + x9_9

void* x8_10 = *(arg1 + 0x18)
void* result_4 = result_1
int64_t x25_2 = x24_1 & 0xffffffffffffffe0

if (x25_2 != 0)
    int64_t x10_8 = 0
    
    if (x25_2 == 0x20 || result_4 + 0x18 + x25_2 - 0x20 u< result_4 + 0x18
            || result_4 + 0x10 + x25_2 - 0x20 u< result_4 + 0x10
            || result_4 + 8 + x25_2 - 0x20 u< result_4 + 8 || result_4 + x25_2 - 0x20 u< result_4)
        goto label_ed785c
    
    void* x11_5 = x8_10 + x24_1
    
    if (result_4 u>= x8_10 + x24_1 + x25_2 || x11_5 u>= result_4 + x25_2)
        int64_t i_35 = (((x25_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x10_8 = i_35 << 5
        int64_t i_28 = i_35
        void* result_13 = result_4
        int64_t i
        
        do
            v0_2.q = *result_13
            v1_2.q = *(result_13 + 8)
            v2_2.q = *(result_13 + 0x10)
            v3_2.q = *(result_13 + 0x18)
            v0_2:8.q = *(result_13 + 0x20)
            v1_2:8.q = *(result_13 + 0x28)
            v2_2:8.q = *(result_13 + 0x30)
            v3_2:8.q = *(result_13 + 0x38)
            v4_2.q = *x11_5
            v5_2.q = *(x11_5 + 8)
            v6_2.q = *(x11_5 + 0x10)
            v7_2.q = *(x11_5 + 0x18)
            v4_2:8.q = *(x11_5 + 0x20)
            v5_2:8.q = *(x11_5 + 0x28)
            v6_2:8.q = *(x11_5 + 0x30)
            v7_2:8.q = *(x11_5 + 0x38)
            x11_5 += 0x40
            i = i_28
            i_28 -= 2
            int128_t v16_2 = v4_2 ^ v0_2
            int128_t v17_2 = v5_2 ^ v1_2
            int128_t v18_2 = v6_2 ^ v2_2
            int128_t v19_2 = v7_2 ^ v3_2
            *result_13 = v16_2.q
            *(result_13 + 8) = v17_2.q
            *(result_13 + 0x10) = v18_2.q
            *(result_13 + 0x18) = v19_2.q
            *(result_13 + 0x20) = v16_2:8.q
            *(result_13 + 0x28) = v17_2:8.q
            *(result_13 + 0x30) = v18_2:8.q
            *(result_13 + 0x38) = v19_2:8.q
            result_13 += 0x40
        while (i != 2)
        
        if (((x25_2 - 0x20) u>> 5) + 1 != i_35)
            goto label_ed785c
    else
        x10_8 = nullptr
    label_ed785c:
        void* i_21 = x10_8 - x25_2
        void* x10_13 = x10_8 + result_4 + 0x10
        void* x12_6 = x10_8 + x24_1 + x8_10 + 0x10
        void* i_1
        
        do
            v2_2 = *(x12_6 - 0x10)
            v3_2 = *x12_6
            i_1 = i_21
            i_21 += 0x20
            x12_6 += 0x20
            v1_2 = v3_2 ^ *x10_13
            *(x10_13 - 0x10) ^= v2_2
            *x10_13 = v1_2
            x10_13 += 0x20
        while (i_1 != -0x20)

if (x24_1 != x25_2)
    int64_t x11_6 = x25_2
    
    if ((x24_1 & 0x18) == 0)
    label_ed78f8:
        int64_t i_17 = x24_1 - x11_6
        void* x9_10 = result_4 + x11_6
        char* x8_12 = x8_10 + x11_6 + x24_1
        int64_t i_2
        
        do
            char x11_11 = *x8_12
            x8_12 = &x8_12[1]
            i_2 = i_17
            i_17 -= 1
            *x9_10 ^= x11_11
            x9_10 += 1
        while (i_2 != 1)
    else
        int64_t* x10_14 = result_4 + x25_2
        int64_t* x12_8 = x8_10 + x24_1 + x25_2
        
        if (x10_14 u< x8_10 + (x24_1 << 1))
            x11_6 = x25_2
        
        if (x10_14 u< x8_10 + (x24_1 << 1) && x12_8 u< result_4 + x24_1)
            goto label_ed78f8
        
        int64_t x13_5 = x24_1 & 7
        int64_t i_29 = (x24_1 & 0x1f) - x13_5
        x11_6 = x25_2 + i_29
        int64_t i_3
        
        do
            v0_2.q = *x12_8
            x12_8 = &x12_8[1]
            v1_2.q = *x10_14
            i_3 = i_29
            i_29 -= 8
            *x10_14 = (v1_2 ^ v0_2).q
            x10_14 = &x10_14[1]
        while (i_3 != 8)
        
        if (x13_5 != 0)
            goto label_ed78f8

int64_t* x22_1 = *(arg1 + 8)
void* result_12 = result_1
int128_t v0_3
int128_t v1_3
int128_t v2_3
int128_t v3_3
int128_t v4_3
int128_t v5_3
int128_t v6_3
int128_t v7_3
v0_3, v1_3, v2_3, v3_3, v4_3, v5_3, v6_3, v7_3 = (*(*x22_1 + 0x50))(x22_1, result_12, result_12, 
    (x23_2 - result_12) u/ (*(*x22_1 + 0x30))(x22_1))
void* x8_17 = *(arg1 + 0x18)
void* result_5 = result_1

if (x25_2 != 0)
    int64_t x10_15 = 0
    
    if (x25_2 == 0x20 || result_5 + 0x18 + x25_2 - 0x20 u< result_5 + 0x18
            || result_5 + 0x10 + x25_2 - 0x20 u< result_5 + 0x10
            || result_5 + 8 + x25_2 - 0x20 u< result_5 + 8 || result_5 + x25_2 - 0x20 u< result_5)
        goto label_ed7a20
    
    void* x11_15 = x8_17 + x24_1
    
    if (result_5 u>= x8_17 + x24_1 + x25_2 || x11_15 u>= result_5 + x25_2)
        int64_t i_36 = (((x25_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x10_15 = i_36 << 5
        int64_t i_30 = i_36
        void* result_14 = result_5
        int64_t i_4
        
        do
            v0_3.q = *result_14
            v1_3.q = *(result_14 + 8)
            v2_3.q = *(result_14 + 0x10)
            v3_3.q = *(result_14 + 0x18)
            v0_3:8.q = *(result_14 + 0x20)
            v1_3:8.q = *(result_14 + 0x28)
            v2_3:8.q = *(result_14 + 0x30)
            v3_3:8.q = *(result_14 + 0x38)
            v4_3.q = *x11_15
            v5_3.q = *(x11_15 + 8)
            v6_3.q = *(x11_15 + 0x10)
            v7_3.q = *(x11_15 + 0x18)
            v4_3:8.q = *(x11_15 + 0x20)
            v5_3:8.q = *(x11_15 + 0x28)
            v6_3:8.q = *(x11_15 + 0x30)
            v7_3:8.q = *(x11_15 + 0x38)
            x11_15 += 0x40
            i_4 = i_30
            i_30 -= 2
            int128_t v16_3 = v4_3 ^ v0_3
            int128_t v17_3 = v5_3 ^ v1_3
            int128_t v18_3 = v6_3 ^ v2_3
            int128_t v19_3 = v7_3 ^ v3_3
            *result_14 = v16_3.q
            *(result_14 + 8) = v17_3.q
            *(result_14 + 0x10) = v18_3.q
            *(result_14 + 0x18) = v19_3.q
            *(result_14 + 0x20) = v16_3:8.q
            *(result_14 + 0x28) = v17_3:8.q
            *(result_14 + 0x30) = v18_3:8.q
            *(result_14 + 0x38) = v19_3:8.q
            result_14 += 0x40
        while (i_4 != 2)
        
        if (((x25_2 - 0x20) u>> 5) + 1 != i_36)
            goto label_ed7a20
    else
        x10_15 = nullptr
    label_ed7a20:
        void* i_22 = x10_15 - x25_2
        void* x10_20 = x10_15 + result_5 + 0x10
        void* x12_14 = x10_15 + x24_1 + x8_17 + 0x10
        void* i_5
        
        do
            v2_3 = *(x12_14 - 0x10)
            v3_3 = *x12_14
            i_5 = i_22
            i_22 += 0x20
            x12_14 += 0x20
            v1_3 = v3_3 ^ *x10_20
            *(x10_20 - 0x10) ^= v2_3
            *x10_20 = v1_3
            x10_20 += 0x20
        while (i_5 != -0x20)

if (x24_1 != x25_2)
    int64_t x11_16 = x25_2
    
    if ((x24_1 & 0x18) == 0)
    label_ed7abc:
        int64_t i_18 = x24_1 - x11_16
        void* x9_12 = result_5 + x11_16
        char* x8_18 = x8_17 + x11_16 + x24_1
        int64_t i_6
        
        do
            char x11_21 = *x8_18
            x8_18 = &x8_18[1]
            i_6 = i_18
            i_18 -= 1
            *x9_12 ^= x11_21
            x9_12 += 1
        while (i_6 != 1)
    else
        int64_t* x10_21 = result_5 + x25_2
        int64_t* x12_16 = x8_17 + x24_1 + x25_2
        
        if (x10_21 u< x8_17 + (x24_1 << 1))
            x11_16 = x25_2
        
        if (x10_21 u< x8_17 + (x24_1 << 1) && x12_16 u< result_5 + x24_1)
            goto label_ed7abc
        
        int64_t x13_9 = x24_1 & 7
        int64_t i_31 = (x24_1 & 0x1f) - x13_9
        x11_16 = x25_2 + i_31
        int64_t i_7
        
        do
            v0_3.q = *x12_16
            x12_16 = &x12_16[1]
            v1_3.q = *x10_21
            i_7 = i_31
            i_31 -= 8
            *x10_21 = (v1_3 ^ v0_3).q
            x10_21 = &x10_21[1]
        while (i_7 != 8)
        
        if (x13_9 != 0)
            goto label_ed7abc

if (x21_1 != x24_1)
    int64_t i_8 = 0
    
    do
        void* result_8 = result_1
        *(result_8 + i_8) ^= *(result_8 + x24_1 + i_8)
        void* result_9 = result_1
        void* x10_22 = result_9 + x24_1
        *(x10_22 + i_8) ^= *(result_9 + i_8)
        void* result_10 = result_1
        *(result_10 + i_8) ^= *(result_10 + x24_1 + i_8)
        i_8 += 1
    while (i_8 != x21_1 - x24_1)

void* x8_20 = *(arg1 + 0x18)
void* result_6 = result_1

if (x25_2 != 0)
    int64_t x10_23 = 0
    
    if (x25_2 == 0x20 || result_6 + 0x18 + x25_2 - 0x20 u< result_6 + 0x18
            || result_6 + 0x10 + x25_2 - 0x20 u< result_6 + 0x10
            || result_6 + 8 + x25_2 - 0x20 u< result_6 + 8 || result_6 + x25_2 - 0x20 u< result_6)
        goto label_ed7c04
    
    if (result_6 u>= x8_20 + x25_2 || x8_20 u>= result_6 + x25_2)
        int64_t i_33 = (((x25_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x10_23 = i_33 << 5
        int64_t i_25 = i_33
        void* x14_5 = x8_20
        void* result_15 = result_6
        int64_t i_9
        
        do
            v0_3.q = *result_15
            v1_3.q = *(result_15 + 8)
            v2_3.q = *(result_15 + 0x10)
            v3_3.q = *(result_15 + 0x18)
            v0_3:8.q = *(result_15 + 0x20)
            v1_3:8.q = *(result_15 + 0x28)
            v2_3:8.q = *(result_15 + 0x30)
            v3_3:8.q = *(result_15 + 0x38)
            v4_3.q = *x14_5
            v5_3.q = *(x14_5 + 8)
            v6_3.q = *(x14_5 + 0x10)
            v7_3.q = *(x14_5 + 0x18)
            v4_3:8.q = *(x14_5 + 0x20)
            v5_3:8.q = *(x14_5 + 0x28)
            v6_3:8.q = *(x14_5 + 0x30)
            v7_3:8.q = *(x14_5 + 0x38)
            x14_5 += 0x40
            i_9 = i_25
            i_25 -= 2
            int128_t v16_4 = v4_3 ^ v0_3
            int128_t v17_4 = v5_3 ^ v1_3
            int128_t v18_4 = v6_3 ^ v2_3
            int128_t v19_4 = v7_3 ^ v3_3
            *result_15 = v16_4.q
            *(result_15 + 8) = v17_4.q
            *(result_15 + 0x10) = v18_4.q
            *(result_15 + 0x18) = v19_4.q
            *(result_15 + 0x20) = v16_4:8.q
            *(result_15 + 0x28) = v17_4:8.q
            *(result_15 + 0x30) = v18_4:8.q
            *(result_15 + 0x38) = v19_4:8.q
            result_15 += 0x40
        while (i_9 != 2)
        
        if (((x25_2 - 0x20) u>> 5) + 1 != i_33)
            goto label_ed7c04
    else
        x10_23 = 0
    label_ed7c04:
        int64_t i_23 = x10_23 - x25_2
        void* x10_27 = x8_20 + x10_23 + 0x10
        void* x12_24 = result_6 + x10_23 + 0x10
        int64_t i_10
        
        do
            v2_3 = *(x10_27 - 0x10)
            v3_3 = *x10_27
            i_10 = i_23
            i_23 += 0x20
            x10_27 += 0x20
            v1_3 = v3_3 ^ *x12_24
            *(x12_24 - 0x10) ^= v2_3
            *x12_24 = v1_3
            x12_24 += 0x20
        while (i_10 != -0x20)

if (x24_1 != x25_2)
    int64_t x11_33 = x25_2
    
    if ((x24_1 & 0x18) == 0)
    label_ed7c98:
        int64_t i_19 = x24_1 - x11_33
        void* x9_13 = result_6 + x11_33
        void* x8_21 = x8_20 + x11_33
        int64_t i_11
        
        do
            char x11_37 = *x8_21
            x8_21 += 1
            i_11 = i_19
            i_19 -= 1
            *x9_13 ^= x11_37
            x9_13 += 1
        while (i_11 != 1)
    else
        void* x10_28 = result_6 + x25_2
        void* x12_25 = x8_20 + x25_2
        
        if (x10_28 u< x8_20 + x24_1)
            x11_33 = x25_2
        
        if (x10_28 u< x8_20 + x24_1 && x12_25 u< result_6 + x24_1)
            goto label_ed7c98
        
        int64_t x13_12 = x24_1 & 7
        int64_t i_32 = (x24_1 & 0x1f) - x13_12
        x11_33 = x25_2 + i_32
        int64_t i_12
        
        do
            v0_3.q = *x12_25
            x12_25 += 8
            v1_3.q = *x10_28
            i_12 = i_32
            i_32 -= 8
            *x10_28 = (v1_3 ^ v0_3).q
            x10_28 += 8
        while (i_12 != 8)
        
        if (x13_12 != 0)
            goto label_ed7c98

int64_t* x21_2 = *(arg1 + 8)
void* result_11 = result_1
int128_t v0_4
int128_t v1_4
int128_t v2_4
int128_t v3_4
int128_t v4_4
int128_t v5_4
int128_t v6_4
int128_t v7_4
v0_4, v1_4, v2_4, v3_4, v4_4, v5_4, v6_4, v7_4 = (*(*x21_2 + 0x50))(x21_2, result_11, result_11, 
    (x23_2 - result_11) u/ (*(*x21_2 + 0x30))(x21_2))
void* x8_26 = *(arg1 + 0x18)
void* result_7 = result_1

if (x25_2 != 0)
    int64_t x10_29 = 0
    
    if (x25_2 == 0x20 || result_7 + 0x18 + x25_2 - 0x20 u< result_7 + 0x18
            || result_7 + 0x10 + x25_2 - 0x20 u< result_7 + 0x10
            || result_7 + 8 + x25_2 - 0x20 u< result_7 + 8 || result_7 + x25_2 - 0x20 u< result_7)
        goto label_ed7db4
    
    if (result_7 u>= x8_26 + x25_2 || x8_26 u>= result_7 + x25_2)
        int64_t i_34 = (((x25_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        x10_29 = i_34 << 5
        int64_t i_26 = i_34
        void* x14_7 = x8_26
        void* result_16 = result_7
        int64_t i_13
        
        do
            v0_4.q = *result_16
            v1_4.q = *(result_16 + 8)
            v2_4.q = *(result_16 + 0x10)
            v3_4.q = *(result_16 + 0x18)
            v0_4:8.q = *(result_16 + 0x20)
            v1_4:8.q = *(result_16 + 0x28)
            v2_4:8.q = *(result_16 + 0x30)
            v3_4:8.q = *(result_16 + 0x38)
            v4_4.q = *x14_7
            v5_4.q = *(x14_7 + 8)
            v6_4.q = *(x14_7 + 0x10)
            v7_4.q = *(x14_7 + 0x18)
            v4_4:8.q = *(x14_7 + 0x20)
            v5_4:8.q = *(x14_7 + 0x28)
            v6_4:8.q = *(x14_7 + 0x30)
            v7_4:8.q = *(x14_7 + 0x38)
            x14_7 += 0x40
            i_13 = i_26
            i_26 -= 2
            int128_t v16_5 = v4_4 ^ v0_4
            int128_t v17_5 = v5_4 ^ v1_4
            int128_t v18_5 = v6_4 ^ v2_4
            int128_t v19_5 = v7_4 ^ v3_4
            *result_16 = v16_5.q
            *(result_16 + 8) = v17_5.q
            *(result_16 + 0x10) = v18_5.q
            *(result_16 + 0x18) = v19_5.q
            *(result_16 + 0x20) = v16_5:8.q
            *(result_16 + 0x28) = v17_5:8.q
            *(result_16 + 0x30) = v18_5:8.q
            *(result_16 + 0x38) = v19_5:8.q
            result_16 += 0x40
        while (i_13 != 2)
        
        if (((x25_2 - 0x20) u>> 5) + 1 != i_34)
            goto label_ed7db4
    else
        x10_29 = 0
    label_ed7db4:
        int64_t i_24 = x10_29 - x25_2
        void* x10_33 = x8_26 + x10_29 + 0x10
        void* x12_30 = result_7 + x10_29 + 0x10
        int64_t i_14
        
        do
            v2_4 = *(x10_33 - 0x10)
            v3_4 = *x10_33
            i_14 = i_24
            i_24 += 0x20
            x10_33 += 0x20
            v1_4 = v3_4 ^ *x12_30
            *(x12_30 - 0x10) ^= v2_4
            *x12_30 = v1_4
            x12_30 += 0x20
        while (i_14 != -0x20)

if (x24_1 != x25_2)
    if ((x24_1 & 0x18) == 0)
    label_ed7e40:
        int64_t i_20 = x24_1 - x25_2
        void* x9_15 = result_7 + x25_2
        void* x8_27 = x8_26 + x25_2
        int64_t i_15
        
        do
            char x11_43 = *x8_27
            x8_27 += 1
            i_15 = i_20
            i_20 -= 1
            *x9_15 ^= x11_43
            x9_15 += 1
        while (i_15 != 1)
    else
        void* x10_34 = result_7 + x25_2
        void* x11_42 = x8_26 + x25_2
        
        if (x10_34 u< x8_26 + x24_1 && x11_42 u< result_7 + x24_1)
            goto label_ed7e40
        
        int64_t x12_32 = x24_1 & 7
        int64_t i_27 = (x24_1 & 0x1f) - x12_32
        x25_2 += i_27
        int64_t i_16
        
        do
            v0_4.q = *x11_42
            x11_42 += 8
            v1_4.q = *x10_34
            i_16 = i_27
            i_27 -= 8
            *x10_34 = (v1_4 ^ v0_4).q
            x10_34 += 8
        while (i_16 != 8)
        
        if (x12_32 != 0)
            goto label_ed7e40

Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
    arg2, &result_1)
result = result_1

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, x23_2 - result, 1)
