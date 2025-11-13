// 函数: _ZN5Botan14OCB_Encryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xdde960
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
void* var_68

if (*(arg1 + 0x10) == 0)
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
label_ddf7c4:
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf20e)
label_ddf7cc:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_ddf7f4:
    Botan::assertion_failure("remainder_bytes < BS", "Only a partial block left", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf21e)
label_ddf7fc:
    int64_t* x0_22 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* result_5 = result_1
    
    if (result_5 != 0)
        void* result_13 = result_5
        Botan::deallocate_memory(result_5, var_68 - result_5, 1)
    
    sub_1101e04(x0_22)
    noreturn

int64_t x24_1 = *arg2
int64_t x20_1 = *(arg2 + 8)
int64_t x8_1 = x20_1 - x24_1
int64_t entry_x2
int64_t x25_1 = x8_1 - entry_x2

if (x8_1 u< entry_x2)
    goto label_ddf7c4

uint64_t x21_1 = *(arg1 + 0x58)
__builtin_memset(&result_1, 0, 0x18)
void* var_70_1
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7

if (x21_1 != 0)
    if ((x21_1 & 0xffffffff80000000) != 0)
        goto label_ddf7cc
    
    void* result_4 = Botan::allocate_memory(x21_1, 1)
    void* x23_1 = result_4 + x21_1
    result_1 = result_4
    var_68 = x23_1
    v0, v1, v2, v3, v4, v5, v6, v7 = memset(result_4, 0, x21_1)
    var_70_1 = x23_1

void* result_3

if (x25_1 == 0)
    void* x8_4 = *(arg1 + 0x10)
    
    if (&result_1 != x8_4 + 0x40)
        *(x8_4 + 0x48)
        v0, v1, v2, v3, v4, v5, v6, v7 =
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
            &result_1, *(x8_4 + 0x40))
else
    uint64_t x23_2 = x24_1 + entry_x2
    v0, v1, v2, v3, v4, v5, v6, v7 = Botan::OCB_Encryption::encrypt(arg1, x23_2)
    void* x8_2 = *(arg1 + 0x10)
    
    if (&result_1 != x8_2 + 0x40)
        *(x8_2 + 0x48)
        v0, v1, v2, v3, v4, v5, v6, v7 =
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
            &result_1, *(x8_2 + 0x40))
    
    int64_t x24_3 = x25_1 u/ x21_1 * x21_1
    int64_t x26_1 = x25_1 u% x21_1
    
    if (x26_1 != 0)
        if (x26_1 u>= x21_1)
            goto label_ddf7f4
        
        int64_t* x8_3 = *(arg1 + 0x20)
        int64_t fp_1 = x26_1 & 0xffffffffffffffe0
        int64_t* x28_1 = x23_2 + x24_3
        
        if (fp_1 != 0)
            int64_t x9_2 = 0
            
            if (fp_1 == 0x20 || &x8_3[3] + fp_1 - 0x20 u< &x8_3[3]
                    || &x8_3[2] + fp_1 - 0x20 u< &x8_3[2] || &x8_3[1] + fp_1 - 0x20 u< &x8_3[1]
                    || x8_3 + fp_1 - 0x20 u< x8_3)
                goto label_ddeb50
            
            if (x8_3 u>= x24_1 + x24_3 + entry_x2 + fp_1 || x28_1 u>= x8_3 + fp_1)
                int64_t x12_3 = (((fp_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                int64_t x10_3 = 0
                x9_2 = x12_3 << 5
                int64_t* x13_2 = x8_3
                
                do
                    void* x14_2 = &x28_1[x10_3 * 4]
                    v0.q = *x13_2
                    v1.q = x13_2[1]
                    v2.q = x13_2[2]
                    v3.q = x13_2[3]
                    v0:8.q = x13_2[4]
                    v1:8.q = x13_2[5]
                    v2:8.q = x13_2[6]
                    v3:8.q = x13_2[7]
                    v4.q = *x14_2
                    v5.q = *(x14_2 + 8)
                    v6.q = *(x14_2 + 0x10)
                    v7.q = *(x14_2 + 0x18)
                    v4:8.q = *(x14_2 + 0x20)
                    v5:8.q = *(x14_2 + 0x28)
                    v6:8.q = *(x14_2 + 0x30)
                    v7:8.q = *(x14_2 + 0x38)
                    x10_3 += 2
                    int128_t v16_1 = v4 ^ v0
                    int128_t v17_1 = v5 ^ v1
                    int128_t v18_1 = v6 ^ v2
                    int128_t v19_1 = v7 ^ v3
                    *x13_2 = v16_1.q
                    x13_2[1] = v17_1.q
                    x13_2[2] = v18_1.q
                    x13_2[3] = v19_1.q
                    x13_2[4] = v16_1:8.q
                    x13_2[5] = v17_1:8.q
                    x13_2[6] = v18_1:8.q
                    x13_2[7] = v19_1:8.q
                    x13_2 = &x13_2[8]
                while (x10_3 != x12_3)
                
                if (((fp_1 - 0x20) u>> 5) + 1 != x12_3)
                    goto label_ddeb50
            else
                x9_2 = 0
            label_ddeb50:
                
                do
                    int128_t* x10_4 = x8_3 + x9_2
                    int128_t* x11_3 = x28_1 + x9_2
                    x9_2 += 0x20
                    v1 = x11_3[1] ^ x10_4[1]
                    *x10_4 ^= *x11_3
                    x10_4[1] = v1
                while (x9_2 != fp_1)
        
        if (fp_1 != x26_1)
            int64_t x11_4 = fp_1
            int64_t x9_14 = x20_1 - x24_3 - entry_x2 - x24_1 - fp_1
            
            if (x9_14 u< 8)
                goto label_ddec5c
            
            if (x8_3 + fp_1 u< x20_1)
                x11_4 = fp_1
            
            if (x8_3 + fp_1 u< x20_1 && x24_1 + x24_3 + entry_x2 + fp_1
                    u< x8_3 + x20_1 - (x24_1 + entry_x2 + x24_3))
                goto label_ddec5c
            
            int64_t x10_11
            
            if (x9_14 u>= 0x20)
                int64_t x11_10 = 0
                x10_11 = x9_14 & 0xffffffffffffffe0
                
                do
                    int64_t x12_5 = fp_1 + x11_10
                    void* x13_3 = x28_1 + x12_5
                    void* x12_6 = x8_3 + x12_5
                    x11_10 += 0x20
                    v1 = *(x12_6 + 0x10) ^ *(x13_3 + 0x10)
                    *x12_6 ^= *x13_3
                    *(x12_6 + 0x10) = v1
                while (x11_10 != x10_11)
                
                if (x9_14 != x10_11)
                    if ((x9_14 & 0x18) != 0)
                        goto label_ddec0c
                    
                    x11_4 = fp_1 + x10_11
                label_ddec5c:
                    
                    do
                        *(x8_3 + x11_4) ^= *(x28_1 + x11_4)
                        x11_4 += 1
                    while (x11_4 != x26_1)
            else
                x10_11 = 0
            label_ddec0c:
                int64_t x12_7 = x9_14 & 0xfffffffffffffff8
                x11_4 = fp_1 + x12_7
                
                do
                    int64_t x13_4 = fp_1 + x10_11
                    v0.q = *(x28_1 + x13_4)
                    v1.q = *(x8_3 + x13_4)
                    x10_11 += 8
                    *(x8_3 + x13_4) = (v1 ^ v0).q
                while (x10_11 != x12_7)
                
                if (x9_14 != x12_7)
                    goto label_ddec5c
        
        char* x8_5 = *(arg1 + 0x20)
        x8_5[x26_1] ^= 0x80
        void* x23_3 = *(arg1 + 0x10)
        void* result_7 = result_1
        void* x8_6 = *(x23_3 + 0x28)
        void* x10_14 = *(x23_3 + 0x30) - x8_6
        
        if (x10_14 u> var_70_1 - result_7)
            v0, v1, v2, v3, v4, v5, v6, v7 =
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
            x8_6 = *(x23_3 + 0x28)
            result_7 = result_1
            x10_14 = *(x23_3 + 0x30) - x8_6
        
        void* x11_12 = x10_14 & 0xffffffffffffffe0
        
        if (x11_12 != 0)
            int64_t x12_9 = 0
            
            if (x11_12 == 0x20 || result_7 + 0x18 + x11_12 - 0x20 u< result_7 + 0x18
                    || result_7 + 0x10 + x11_12 - 0x20 u< result_7 + 0x10
                    || result_7 + 8 + x11_12 - 0x20 u< result_7 + 8
                    || result_7 + x11_12 - 0x20 u< result_7)
                goto label_dded5c
            
            if (result_7 u>= x8_6 + x11_12 || x8_6 u>= result_7 + x11_12)
                int64_t i_28 = (((x11_12 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x12_9 = i_28 << 5
                int64_t i_23 = i_28
                void* x16_3 = x8_6
                void* result_17 = result_7
                int64_t i
                
                do
                    v0.q = *result_17
                    v1.q = *(result_17 + 8)
                    v2.q = *(result_17 + 0x10)
                    v3.q = *(result_17 + 0x18)
                    v0:8.q = *(result_17 + 0x20)
                    v1:8.q = *(result_17 + 0x28)
                    v2:8.q = *(result_17 + 0x30)
                    v3:8.q = *(result_17 + 0x38)
                    v4.q = *x16_3
                    v5.q = *(x16_3 + 8)
                    v6.q = *(x16_3 + 0x10)
                    v7.q = *(x16_3 + 0x18)
                    v4:8.q = *(x16_3 + 0x20)
                    v5:8.q = *(x16_3 + 0x28)
                    v6:8.q = *(x16_3 + 0x30)
                    v7:8.q = *(x16_3 + 0x38)
                    x16_3 += 0x40
                    i = i_23
                    i_23 -= 2
                    int128_t v16_2 = v4 ^ v0
                    int128_t v17_2 = v5 ^ v1
                    int128_t v18_2 = v6 ^ v2
                    int128_t v19_2 = v7 ^ v3
                    *result_17 = v16_2.q
                    *(result_17 + 8) = v17_2.q
                    *(result_17 + 0x10) = v18_2.q
                    *(result_17 + 0x18) = v19_2.q
                    *(result_17 + 0x20) = v16_2:8.q
                    *(result_17 + 0x28) = v17_2:8.q
                    *(result_17 + 0x30) = v18_2:8.q
                    *(result_17 + 0x38) = v19_2:8.q
                    result_17 += 0x40
                while (i != 2)
                
                if (((x11_12 - 0x20) u>> 5) + 1 != i_28)
                    goto label_dded5c
            else
                x12_9 = 0
            label_dded5c:
                void* i_19 = x12_9 - x11_12
                void* x12_13 = x8_6 + x12_9 + 0x10
                void* x14_6 = result_7 + x12_9 + 0x10
                void* i_1
                
                do
                    v2 = *(x12_13 - 0x10)
                    v3 = *x12_13
                    i_1 = i_19
                    i_19 += 0x20
                    x12_13 += 0x20
                    v1 = v3 ^ *x14_6
                    *(x14_6 - 0x10) ^= v2
                    *x14_6 = v1
                    x14_6 += 0x20
                while (i_1 != -0x20)
        
        if (x10_14 != x11_12)
            if ((x10_14 & 0x18) == 0)
            label_ddede8:
                int64_t i_13 = x10_14 - x11_12
                void* x9_19 = result_7 + x11_12
                void* x8_7 = x8_6 + x11_12
                int64_t i_2
                
                do
                    char x11_13 = *x8_7
                    x8_7 += 1
                    i_2 = i_13
                    i_13 -= 1
                    *x9_19 ^= x11_13
                    x9_19 += 1
                while (i_2 != 1)
            else
                int64_t* x12_14 = result_7 + x11_12
                void* x13_8 = x8_6 + x11_12
                
                if (x12_14 u< x8_6 + x10_14 && x13_8 u< result_7 + x10_14)
                    goto label_ddede8
                
                void* x14_8 = x10_14 & 7
                void* i_24 = (x10_14 & 0x1f) - x14_8
                x11_12 += i_24
                void* i_3
                
                do
                    v0.q = *x13_8
                    x13_8 += 8
                    v1.q = *x12_14
                    i_3 = i_24
                    i_24 -= 8
                    *x12_14 = (v1 ^ v0).q
                    x12_14 = &x12_14[1]
                while (i_3 != 8)
                
                if (x14_8 != 0)
                    goto label_ddede8
        
        __builtin_memset(&result_3, 0, 0x18)
        
        if ((x21_1 & 0xffffffff80000000) != 0)
            goto label_ddf7fc
        
        void* result_14 = Botan::allocate_memory(x21_1, 1)
        void* x24_4 = result_14 + x21_1
        result_3 = result_14
        memset(result_14, 0, x21_1)
        void* var_88_1 = x24_4
        int64_t* x24_5 = *(arg1 + 8)
        void* result_12 = result_1
        v0, v1, v2, v3, v4, v5, v6, v7 = (*(*x24_5 + 0x48))(x24_5, result_12, result_14, 
            (var_70_1 - result_12) u/ (*(*x24_5 + 0x30))(x24_5))
        void* result_16 = result_3
        
        if (fp_1 != 0)
            int64_t x9_21 = 0
            
            if (fp_1 == 0x20)
                goto label_ddef80
            
            int64_t x10_18 = x24_3 + entry_x2 + x24_1
            
            if (x10_18 + 0x18 + fp_1 - 0x20 u< x10_18 + 0x18
                    || x10_18 + 0x10 + fp_1 - 0x20 u< x10_18 + 0x10
                    || x10_18 + 8 + fp_1 - 0x20 u< x10_18 + 8 || x28_1 + fp_1 - 0x20 u< x28_1)
                goto label_ddef80
            
            if (x28_1 u>= result_16 + fp_1 || result_16 u>= x24_1 + x24_3 + entry_x2 + fp_1)
                int64_t x12_18 = (((fp_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                int64_t x10_21 = 0
                x9_21 = x12_18 << 5
                void* result_20 = result_16
                
                do
                    void* x14_10 = &x28_1[x10_21 * 4]
                    v0.q = *x14_10
                    v1.q = *(x14_10 + 8)
                    v2.q = *(x14_10 + 0x10)
                    v3.q = *(x14_10 + 0x18)
                    v0:8.q = *(x14_10 + 0x20)
                    v1:8.q = *(x14_10 + 0x28)
                    v2:8.q = *(x14_10 + 0x30)
                    v3:8.q = *(x14_10 + 0x38)
                    v4.q = *result_20
                    v5.q = *(result_20 + 8)
                    v6.q = *(result_20 + 0x10)
                    v7.q = *(result_20 + 0x18)
                    v4:8.q = *(result_20 + 0x20)
                    v5:8.q = *(result_20 + 0x28)
                    v6:8.q = *(result_20 + 0x30)
                    v7:8.q = *(result_20 + 0x38)
                    result_20 += 0x40
                    x10_21 += 2
                    int128_t v16_3 = v4 ^ v0
                    int128_t v17_3 = v5 ^ v1
                    int128_t v18_3 = v6 ^ v2
                    int128_t v19_3 = v7 ^ v3
                    *x14_10 = v16_3.q
                    *(x14_10 + 8) = v17_3.q
                    *(x14_10 + 0x10) = v18_3.q
                    *(x14_10 + 0x18) = v19_3.q
                    *(x14_10 + 0x20) = v16_3:8.q
                    *(x14_10 + 0x28) = v17_3:8.q
                    *(x14_10 + 0x30) = v18_3:8.q
                    *(x14_10 + 0x38) = v19_3:8.q
                while (x10_21 != x12_18)
                
                if (((fp_1 - 0x20) u>> 5) + 1 != x12_18)
                    goto label_ddef80
            else
                x9_21 = 0
            label_ddef80:
                
                do
                    void* x10_22 = x28_1 + x9_21
                    int128_t* x11_17 = result_16 + x9_21
                    x9_21 += 0x20
                    v1 = x11_17[1] ^ *(x10_22 + 0x10)
                    *x10_22 ^= *x11_17
                    *(x10_22 + 0x10) = v1
                while (x9_21 != fp_1)
        
        if (fp_1 != x26_1)
            int64_t x9_31 = x20_1 - x24_3 - entry_x2 - x24_1 - fp_1
            
            if (x9_31 u< 8 || (x24_1 + x24_3 + entry_x2 + fp_1
                    u< result_16 + x20_1 - (x24_1 + entry_x2 + x24_3) && result_16 + fp_1 u< x20_1))
                goto label_ddf084
            
            int64_t x10_27
            
            if (x9_31 u>= 0x20)
                int64_t x11_24 = 0
                x10_27 = x9_31 & 0xffffffffffffffe0
                
                do
                    int64_t x12_20 = fp_1 + x11_24
                    void* x13_11 = result_16 + x12_20
                    void* x12_21 = x28_1 + x12_20
                    x11_24 += 0x20
                    v1 = *(x12_21 + 0x10) ^ *(x13_11 + 0x10)
                    *x12_21 ^= *x13_11
                    *(x12_21 + 0x10) = v1
                while (x11_24 != x10_27)
                
                if (x9_31 != x10_27)
                    if ((x9_31 & 0x18) != 0)
                        goto label_ddf030
                    
                    fp_1 += x10_27
                label_ddf084:
                    
                    do
                        *(x28_1 + fp_1) ^= *(result_16 + fp_1)
                        fp_1 += 1
                    while (fp_1 != x26_1)
            else
                x10_27 = 0
            label_ddf030:
                int64_t x12_22 = x9_31 & 0xfffffffffffffff8
                
                do
                    int64_t x13_12 = fp_1 + x10_27
                    v0.q = *(result_16 + x13_12)
                    v1.q = *(x28_1 + x13_12)
                    x10_27 += 8
                    *(x28_1 + x13_12) = (v1 ^ v0).q
                while (x10_27 != x12_22)
                
                fp_1 += x12_22
                
                if (x9_31 != x12_22)
                    goto label_ddf084
        
        void* result_15 = result_3
        
        if (result_15 != 0)
            void* result_19 = result_15
            v0, v1, v2, v3, v4, v5, v6, v7 =
                Botan::deallocate_memory(result_15, x24_4 - result_15, 1)

void* x8_13 = *(arg1 + 0x20)
int64_t x16_7 = *(arg1 + 0x28)
void* x8_16
void* result_8
int32_t x20_7
int64_t x24_6

if (x16_7 == x8_13)
    x24_6 = x21_1 & 0xffffffffffffffe0
label_ddf2a0:
    result_8 = result_1
    x20_7 = x24_6 == 0 ? 1 : 0
    x8_16 = *(*(arg1 + 0x10) + 0x10)
    
    if (x24_6 == 0)
        x20_7 = 1
    else
        int64_t x10_29 = 0
        
        if (x24_6 == 0x20 || result_8 + 0x18 + x24_6 - 0x20 u< result_8 + 0x18
                || result_8 + 0x10 + x24_6 - 0x20 u< result_8 + 0x10
                || result_8 + 8 + x24_6 - 0x20 u< result_8 + 8
                || result_8 + x24_6 - 0x20 u< result_8)
            goto label_ddf4d4
        
        if (result_8 u>= x8_16 + x24_6 || x8_16 u>= result_8 + x24_6)
            int64_t i_27 = (((x24_6 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            int64_t x11_30 = 0
            x10_29 = i_27 << 5
            int64_t i_20 = i_27
            int64_t i_4
            
            do
                void* x15_10 = result_8 + x11_30
                void* x16_9 = x8_16 + x11_30
                v0.q = *x15_10
                v1.q = *(x15_10 + 8)
                v2.q = *(x15_10 + 0x10)
                v3.q = *(x15_10 + 0x18)
                v0:8.q = *(x15_10 + 0x20)
                v1:8.q = *(x15_10 + 0x28)
                v2:8.q = *(x15_10 + 0x30)
                v3:8.q = *(x15_10 + 0x38)
                v4.q = *x16_9
                v5.q = *(x16_9 + 8)
                v6.q = *(x16_9 + 0x10)
                v7.q = *(x16_9 + 0x18)
                v4:8.q = *(x16_9 + 0x20)
                v5:8.q = *(x16_9 + 0x28)
                v6:8.q = *(x16_9 + 0x30)
                v7:8.q = *(x16_9 + 0x38)
                i_4 = i_20
                i_20 -= 2
                x11_30 += 0x40
                int128_t v16_5 = v4 ^ v0
                int128_t v17_5 = v5 ^ v1
                int128_t v18_5 = v6 ^ v2
                int128_t v19_5 = v7 ^ v3
                *x15_10 = v16_5.q
                *(x15_10 + 8) = v17_5.q
                *(x15_10 + 0x10) = v18_5.q
                *(x15_10 + 0x18) = v19_5.q
                *(x15_10 + 0x20) = v16_5:8.q
                *(x15_10 + 0x28) = v17_5:8.q
                *(x15_10 + 0x30) = v18_5:8.q
                *(x15_10 + 0x38) = v19_5:8.q
            while (i_4 != 2)
            
            if (((x24_6 - 0x20) u>> 5) + 1 != i_27)
                goto label_ddf4d4
        else
            x10_29 = 0
        label_ddf4d4:
            
            do
                void* x11_31 = result_8 + x10_29
                int128_t* x12_27 = x8_16 + x10_29
                x10_29 += 0x20
                v1 = x12_27[1] ^ *(x11_31 + 0x10)
                *x11_31 ^= *x12_27
                *(x11_31 + 0x10) = v1
            while (x24_6 != x10_29)
else
    int64_t x9_34 = 0
    int64_t i_5 = 0
    x24_6 = x21_1 & 0xffffffffffffffe0
    
    if (x24_6 != 0)
        int64_t x11_26 = x21_1 & 0x1f
        int64_t x13_13 = x21_1 & 7
        int64_t j_15 = x11_26 - x13_13
        int64_t j_14 = (((x24_6 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
        int64_t x2_6 = 0x10
        int64_t x3_2 = x24_6
        
        do
            void* result_6 = result_1
            int64_t x6_1 = x21_1 * x9_34
            int64_t x5_1 = x24_6 + x6_1
            int64_t x7_1 = 0
            
            if (x24_6 == 0x20 || result_6 + 0x18 + x24_6 - 0x20 u< result_6 + 0x18
                    || result_6 + 0x10 + x24_6 - 0x20 u< result_6 + 0x10
                    || result_6 + 8 + x24_6 - 0x20 u< result_6 + 8
                    || result_6 + x24_6 - 0x20 u< result_6)
                goto label_ddf1d8
            
            if (result_6 u>= x8_13 + x5_1 || x8_13 + i_5 u>= result_6 + x24_6)
                int64_t j_10 = j_14
                void* x20_6 = x8_13
                void* result_18 = result_6
                int64_t j
                
                do
                    void* x23_6 = x20_6 + i_5
                    v0.q = *result_18
                    v1.q = *(result_18 + 8)
                    v2.q = *(result_18 + 0x10)
                    v3.q = *(result_18 + 0x18)
                    v0:8.q = *(result_18 + 0x20)
                    v1:8.q = *(result_18 + 0x28)
                    v2:8.q = *(result_18 + 0x30)
                    v3:8.q = *(result_18 + 0x38)
                    v4.q = *x23_6
                    v5.q = *(x23_6 + 8)
                    v6.q = *(x23_6 + 0x10)
                    v7.q = *(x23_6 + 0x18)
                    v4:8.q = *(x23_6 + 0x20)
                    v5:8.q = *(x23_6 + 0x28)
                    v6:8.q = *(x23_6 + 0x30)
                    v7:8.q = *(x23_6 + 0x38)
                    j = j_10
                    j_10 -= 2
                    x20_6 += 0x40
                    int128_t v16_4 = v4 ^ v0
                    int128_t v17_4 = v5 ^ v1
                    int128_t v18_4 = v6 ^ v2
                    int128_t v19_4 = v7 ^ v3
                    *result_18 = v16_4.q
                    *(result_18 + 8) = v17_4.q
                    *(result_18 + 0x10) = v18_4.q
                    *(result_18 + 0x18) = v19_4.q
                    *(result_18 + 0x20) = v16_4:8.q
                    *(result_18 + 0x28) = v17_4:8.q
                    *(result_18 + 0x30) = v18_4:8.q
                    *(result_18 + 0x38) = v19_4:8.q
                    result_18 += 0x40
                while (j != 2)
                x7_1 = j_14 << 5
                
                if (((x24_6 - 0x20) u>> 5) + 1 != j_14)
                    goto label_ddf1d8
            else
                x7_1 = 0
            label_ddf1d8:
                int64_t j_13 = neg.q(x21_1 & 0xffffffffffffffe0) + x7_1
                void* x7_4 = result_6 + x7_1 + 0x10
                int128_t* x22_6 = x8_13 + x7_1 + x2_6
                int64_t j_1
                
                do
                    v2 = x22_6[-1]
                    v3 = *x22_6
                    j_1 = j_13
                    j_13 += 0x20
                    x22_6 = &x22_6[2]
                    v1 = v3 ^ *x7_4
                    *(x7_4 - 0x10) ^= v2
                    *x7_4 = v1
                    x7_4 += 0x20
                while (j_1 != -0x20)
            
            if (x21_1 != x24_6)
                int64_t x7_5 = x24_6
                
                if (x11_26 u< 8)
                label_ddf26c:
                    int64_t j_9 = x21_1 - x7_5
                    void* x4_3 = result_6 + x7_5
                    void* x8_14 = x8_13 + x7_5
                    int64_t j_2
                    
                    do
                        char x6_3 = *(x8_14 + i_5)
                        j_2 = j_9
                        j_9 -= 1
                        x8_14 += 1
                        *x4_3 ^= x6_3
                        x4_3 += 1
                    while (j_2 != 1)
                else
                    void* x6_2 = result_6 + x24_6
                    
                    if (x6_2 u< x8_13 + x21_1 + x6_1)
                        x7_5 = x24_6
                    
                    if (x6_2 u< x8_13 + x21_1 + x6_1 && x8_13 + x5_1 u< result_6 + x21_1)
                        goto label_ddf26c
                    
                    void* x5_3 = x8_13 + x3_2
                    int64_t j_11 = j_15
                    int64_t j_3
                    
                    do
                        v0.q = *x5_3
                        x5_3 += 8
                        v1.q = *x6_2
                        j_3 = j_11
                        j_11 -= 8
                        *x6_2 = (v1 ^ v0).q
                        x6_2 += 8
                    while (j_3 != 8)
                    x7_5 = x24_6 + j_15
                    
                    if (x13_13 != 0)
                        goto label_ddf26c
            
            x8_13 = *(arg1 + 0x20)
            i_5 += x21_1
            x9_34 += 1
            x2_6 += x21_1
            x3_2 += x21_1
        while (i_5 != *(arg1 + 0x28) - x8_13)
        
        goto label_ddf2a0
    
    int64_t x13_16 = x21_1 & 0xfffffffffffffff8
    int64_t x11_29 = x21_1 & 0xffffffffffffffe0
    int64_t x15_9 = 0x10
    
    do
        if (x21_1 != x24_6)
            void* result_10 = result_1
            int64_t x0_11
            
            if (x21_1 u< 8 || (result_10 u< x8_13 + x21_1 + x21_1 * x9_34
                    && x8_13 + i_5 u< result_10 + x21_1))
                x0_11 = 0
            label_ddf390:
                int64_t j_12 = x21_1 - x0_11
                void* x16_8 = result_10 + x0_11
                void* x8_17 = x8_13 + x0_11
                int64_t j_4
                
                do
                    char x0_12 = *(x8_17 + i_5)
                    j_4 = j_12
                    j_12 -= 1
                    x8_17 += 1
                    *x16_8 ^= x0_12
                    x16_8 += 1
                while (j_4 != 1)
            else
                int64_t x1_8
                
                if (x21_1 u>= 0x20)
                    void* x17_7 = x8_13 + x15_9
                    void* x0_14 = result_10 + 0x10
                    int64_t j_7 = x24_6
                    int64_t j_5
                    
                    do
                        v0 = *(x17_7 - 0x10)
                        v1 = *x17_7
                        x17_7 += 0x20
                        j_5 = j_7
                        j_7 -= 0x20
                        v1 ^= *x0_14
                        *(x0_14 - 0x10) ^= v0
                        *x0_14 = v1
                        x0_14 += 0x20
                    while (j_5 != 0x20)
                    
                    if (x21_1 != x11_29)
                        x1_8 = x11_29
                        x0_11 = x11_29
                        
                        if ((x21_1 & 0x18) == 0)
                            goto label_ddf390
                        
                        goto label_ddf410
                else
                    x1_8 = 0
                label_ddf410:
                    void* x17_8 = x8_13 + x1_8
                    void* x0_15 = result_10 + x1_8
                    int64_t j_8 = neg.q(x13_16) + x1_8
                    int64_t j_6
                    
                    do
                        v0.q = *(x17_8 + i_5)
                        v1.q = *x0_15
                        j_6 = j_8
                        j_8 += 8
                        x17_8 += 8
                        *x0_15 = (v1 ^ v0).q
                        x0_15 += 8
                    while (j_6 != -8)
                    x0_11 = x13_16
                    
                    if (x21_1 != x13_16)
                        goto label_ddf390
            x8_13 = *(arg1 + 0x20)
            x16_7 = *(arg1 + 0x28)
        
        i_5 += x21_1
        x9_34 += 1
        x15_9 += x21_1
    while (i_5 != x16_7 - x8_13)
    
    result_8 = result_1
    x24_6 = 0
    x20_7 = 1
    x8_16 = *(*(arg1 + 0x10) + 0x10)

int64_t x10_33 = x21_1 - x24_6

if (x21_1 != x24_6)
    int64_t x12_28 = x24_6
    
    if (x10_33 u< 8)
        goto label_ddf5a8
    
    if (result_8 + x24_6 u< x8_16 + x21_1)
        x12_28 = x24_6
    
    if (result_8 + x24_6 u< x8_16 + x21_1 && x8_16 + x24_6 u< result_8 + x21_1)
        goto label_ddf5a8
    
    int64_t i_25
    
    if (x10_33 u>= 0x20)
        i_25 = x10_33 & 0xffffffffffffffe0
        void* x12_31 = x8_16 + x24_6 + 0x10
        void* x13_18 = result_8 + x24_6 + 0x10
        int64_t i_21 = i_25
        int64_t i_6
        
        do
            v0 = *(x12_31 - 0x10)
            v1 = *x12_31
            x12_31 += 0x20
            i_6 = i_21
            i_21 -= 0x20
            v1 ^= *x13_18
            *(x13_18 - 0x10) ^= v0
            *x13_18 = v1
            x13_18 += 0x20
        while (i_6 != 0x20)
        
        if (x10_33 != i_25)
            if ((x10_33 & 0x18) != 0)
                goto label_ddf568
            
            x12_28 = x24_6 + i_25
        label_ddf5a8:
            int64_t i_14 = x21_1 - x12_28
            void* x9_35 = result_8 + x12_28
            void* x8_19 = x8_16 + x12_28
            int64_t i_7
            
            do
                char x11_34 = *x8_19
                x8_19 += 1
                i_7 = i_14
                i_14 -= 1
                *x9_35 ^= x11_34
                x9_35 += 1
            while (i_7 != 1)
    else
        i_25 = 0
    label_ddf568:
        int64_t x13_19 = x10_33 & 0xfffffffffffffff8
        int64_t x15_11 = x24_6 + i_25
        x12_28 = x24_6 + x13_19
        void* x14_13 = x8_16 + x15_11
        void* x15_12 = result_8 + x15_11
        int64_t i_16 = i_25 - x13_19
        int64_t i_8
        
        do
            v0.q = *x14_13
            x14_13 += 8
            v1.q = *x15_12
            i_8 = i_16
            i_16 += 8
            *x15_12 = (v1 ^ v0).q
            x15_12 += 8
        while (i_8 != -8)
        
        if (x10_33 != x13_19)
            goto label_ddf5a8

int64_t* x22_7 = *(arg1 + 8)
void* result_11 = result_1
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
v0_1, v1_1, v2_1, v3_1 = (*(*x22_7 + 0x48))(x22_7, result_11, result_11, 
    (var_70_1 - result_11) u/ (*(*x22_7 + 0x30))(x22_7))
void* result_9 = result_1
void* x8_24 = *(arg1 + 0x38)

if ((x20_7 & 1) == 0)
    void* x10_34 = x8_24 + 0x10
    void* x11_36 = result_9 + 0x10
    int64_t i_18 = x24_6
    int64_t i_9
    
    do
        v2_1 = *(x10_34 - 0x10)
        v3_1 = *x10_34
        i_9 = i_18
        i_18 -= 0x20
        x10_34 += 0x20
        v1_1 = v3_1 ^ *x11_36
        *(x11_36 - 0x10) ^= v2_1
        *x11_36 = v1_1
        x11_36 += 0x20
    while (i_9 != 0x20)

int64_t x10_35 = x21_1 - x24_6

if (x21_1 != x24_6)
    if (x10_35 u< 8 || (result_9 + x24_6 u< x8_24 + x21_1 && x8_24 + x24_6 u< result_9 + x21_1))
        goto label_ddf708
    
    int64_t i_26
    
    if (x10_35 u>= 0x20)
        i_26 = x10_35 & 0xffffffffffffffe0
        void* x12_35 = x8_24 + x24_6 + 0x10
        void* x13_21 = result_9 + x24_6 + 0x10
        int64_t i_22 = i_26
        int64_t i_10
        
        do
            v0_1 = *(x12_35 - 0x10)
            v1_1 = *x12_35
            x12_35 += 0x20
            i_10 = i_22
            i_22 -= 0x20
            v1_1 ^= *x13_21
            *(x13_21 - 0x10) ^= v0_1
            *x13_21 = v1_1
            x13_21 += 0x20
        while (i_10 != 0x20)
        
        if (x10_35 != i_26)
            if ((x10_35 & 0x18) != 0)
                goto label_ddf6c8
            
            x24_6 += i_26
        label_ddf708:
            int64_t i_15 = x21_1 - x24_6
            void* x9_37 = result_9 + x24_6
            void* x8_25 = x8_24 + x24_6
            int64_t i_11
            
            do
                char x11_39 = *x8_25
                x8_25 += 1
                i_11 = i_15
                i_15 -= 1
                *x9_37 ^= x11_39
                x9_37 += 1
            while (i_11 != 1)
    else
        i_26 = 0
    label_ddf6c8:
        int64_t x12_36 = x10_35 & 0xfffffffffffffff8
        int64_t x14_14 = x24_6 + i_26
        x24_6 += x12_36
        void* x13_22 = x8_24 + x14_14
        void* x14_15 = result_9 + x14_14
        int64_t i_17 = i_26 - x12_36
        int64_t i_12
        
        do
            v0_1.q = *x13_22
            x13_22 += 8
            v1_1.q = *x14_15
            i_12 = i_17
            i_17 += 8
            *x14_15 = (v1_1 ^ v0_1).q
            x14_15 += 8
        while (i_12 != -8)
        
        if (x10_35 != x12_36)
            goto label_ddf708

int64_t x9_38 = *(arg1 + 0x50)
result_3 = result_1
int64_t var_88_2 = x9_38
Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(arg2, &result_3)
int64_t x0_20 = *(arg1 + 0x20)
int64_t x8_27 = *(arg1 + 0x28)

if (x8_27 != x0_20)
    memset(x0_20, 0, x8_27 - x0_20)

*(arg1 + 0x18) = 0
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, var_68 - result, 1)
