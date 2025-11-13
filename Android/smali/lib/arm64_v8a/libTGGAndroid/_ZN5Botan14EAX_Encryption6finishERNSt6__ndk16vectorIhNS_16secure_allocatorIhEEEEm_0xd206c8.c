// 函数: _ZN5Botan14EAX_Encryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xd206c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x40) == *(arg1 + 0x48))
    Botan::assertion_failure("m_nonce_mac.empty() == false", &data_793a18, "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x69eb)
else
    int64_t x8_1 = *arg2
    int64_t x9_2 = *(arg2 + 8) - x8_1
    int64_t entry_x2
    
    if (x9_2 u>= entry_x2)
        int64_t x0 = (*(*arg1 + 0x38))(arg1, x8_1 + entry_x2, x9_2 - entry_x2)
        int64_t x8_2 = *arg2
        int64_t x9_5 = x0 + entry_x2
        int64_t x10_1 = *(arg2 + 8) - x8_2
        
        if (x9_5 u> x10_1)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
        else if (x9_5 u< x10_1)
            *(arg2 + 8) = x8_2 + x9_5
        
        *(arg1 + 0x20)
        int128_t v0
        int128_t v1
        int128_t v2
        int128_t v3
        int128_t v4
        int128_t v5
        int128_t v6
        int128_t v7
        v0, v1, v2, v3, v4, v5, v6, v7 = Botan::Buffered_Computation::final()
        void* result
        void* result_3 = result
        void* x9_6 = *(arg1 + 0x40)
        int64_t var_48
        void* x12 = var_48 - result_3
        void* x11 = x12 & 0xffffffffffffffe0
        
        if (x11 != 0)
            int64_t x13_1 = 0
            
            if (x11 == 0x20 || result_3 + 0x18 + x11 - 0x20 u< result_3 + 0x18
                    || result_3 + 0x10 + x11 - 0x20 u< result_3 + 0x10
                    || result_3 + 8 + x11 - 0x20 u< result_3 + 8
                    || result_3 + x11 - 0x20 u< result_3)
                goto label_d20810
            
            if (result_3 u>= x9_6 + x11 || x9_6 u>= result_3 + x11)
                int64_t i_24 = (((x11 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x13_1 = i_24 << 5
                int64_t i_17 = i_24
                void* x17_2 = x9_6
                void* result_5 = result_3
                int64_t i
                
                do
                    v0.q = *result_5
                    v1.q = *(result_5 + 8)
                    v2.q = *(result_5 + 0x10)
                    v3.q = *(result_5 + 0x18)
                    v0:8.q = *(result_5 + 0x20)
                    v1:8.q = *(result_5 + 0x28)
                    v2:8.q = *(result_5 + 0x30)
                    v3:8.q = *(result_5 + 0x38)
                    v4.q = *x17_2
                    v5.q = *(x17_2 + 8)
                    v6.q = *(x17_2 + 0x10)
                    v7.q = *(x17_2 + 0x18)
                    v4:8.q = *(x17_2 + 0x20)
                    v5:8.q = *(x17_2 + 0x28)
                    v6:8.q = *(x17_2 + 0x30)
                    v7:8.q = *(x17_2 + 0x38)
                    x17_2 += 0x40
                    i = i_17
                    i_17 -= 2
                    int128_t v16_1 = v4 ^ v0
                    int128_t v17_1 = v5 ^ v1
                    int128_t v18_1 = v6 ^ v2
                    int128_t v19_1 = v7 ^ v3
                    *result_5 = v16_1.q
                    *(result_5 + 8) = v17_1.q
                    *(result_5 + 0x10) = v18_1.q
                    *(result_5 + 0x18) = v19_1.q
                    *(result_5 + 0x20) = v16_1:8.q
                    *(result_5 + 0x28) = v17_1:8.q
                    *(result_5 + 0x30) = v18_1:8.q
                    *(result_5 + 0x38) = v19_1:8.q
                    result_5 += 0x40
                while (i != 2)
                
                if (((x11 - 0x20) u>> 5) + 1 != i_24)
                    goto label_d20810
            else
                x13_1 = 0
            label_d20810:
                void* i_15 = x13_1 - x11
                void* x13_5 = x9_6 + x13_1 + 0x10
                void* x15_4 = result_3 + x13_1 + 0x10
                void* i_1
                
                do
                    v2 = *(x13_5 - 0x10)
                    v3 = *x13_5
                    i_1 = i_15
                    i_15 += 0x20
                    x13_5 += 0x20
                    v1 = v3 ^ *x15_4
                    *(x15_4 - 0x10) ^= v2
                    *x15_4 = v1
                    x15_4 += 0x20
                while (i_1 != -0x20)
        
        if (x11 != x12)
            void* x13_6 = x12 - x11
            
            if (x13_6 u< 8 || (result_3 + x11 u< x9_6 + x12 && x9_6 + x11 u< var_48))
                goto label_d20908
            
            void* i_22
            
            if (x13_6 u>= 0x20)
                i_22 = x13_6 & 0xffffffffffffffe0
                void* x14_4 = x9_6 + x11 + 0x10
                void* x15_6 = result_3 + x11 + 0x10
                void* i_18 = i_22
                void* i_2
                
                do
                    v0 = *(x14_4 - 0x10)
                    v1 = *x14_4
                    x14_4 += 0x20
                    i_2 = i_18
                    i_18 -= 0x20
                    v1 ^= *x15_6
                    *(x15_6 - 0x10) ^= v0
                    *x15_6 = v1
                    x15_6 += 0x20
                while (i_2 != 0x20)
                
                if (x13_6 != i_22)
                    if ((x13_6 & 0x18) != 0)
                        goto label_d208c8
                    
                    x11 += i_22
                label_d20908:
                    void* x10_2 = x11 + result_3
                    void* i_11 = x10_2 - var_48
                    void* x9_7 = x9_6 + x11
                    void* i_3
                    
                    do
                        char x11_1 = *x9_7
                        x9_7 += 1
                        i_3 = i_11
                        i_11 += 1
                        *x10_2 ^= x11_1
                        x10_2 += 1
                    while (i_3 u< -1)
            else
                i_22 = nullptr
            label_d208c8:
                void* x14_5 = x13_6 & 0xfffffffffffffff8
                void* x16_3 = i_22 + x11
                x11 += x14_5
                void* x15_7 = x9_6 + x16_3
                int64_t* x16_4 = result_3 + x16_3
                void* i_13 = i_22 - x14_5
                void* i_4
                
                do
                    v0.q = *x15_7
                    x15_7 += 8
                    v1.q = *x16_4
                    i_4 = i_13
                    i_13 += 8
                    *x16_4 = (v1 ^ v0).q
                    x16_4 = &x16_4[1]
                while (i_4 != -8)
                
                if (x13_6 != x14_5)
                    goto label_d20908
        
        uint64_t x8_5 = *(arg1 + 0x28)
        void* result_1
        
        if (x8_5 == *(arg1 + 0x30))
            int64_t x0_5 = (*(**(arg1 + 0x10) + 0x30))()
            int64_t* x21_2 = *(arg1 + 0x20)
            int64_t i_21 = x0_5 - 1
            char var_34
            
            if (x0_5 != 1)
                int64_t i_5
                
                do
                    var_34 = 0
                    (*(*x21_2 + 0x18))(x21_2, &var_34, 1)
                    i_5 = i_21
                    i_21 -= 1
                while (i_5 != 1)
            
            var_34 = 1
            (*(*x21_2 + 0x18))(x21_2, &var_34, 1)
            (*(*x21_2 + 0x18))(x21_2, 0, 0)
            v0, v1, v2, v3, v4, v5, v6, v7 = Botan::Buffered_Computation::final()
            void* x0_10 = *(arg1 + 0x28)
            
            if (x0_10 != 0)
                int64_t x8_14 = *(arg1 + 0x38)
                *(arg1 + 0x30) = x0_10
                v0, v1, v2, v3, v4, v5, v6, v7 = Botan::deallocate_memory(x0_10, x8_14 - x0_10, 1)
                __builtin_memset(arg1 + 0x28, 0, 0x18)
            
            v0 = result_1.o
            *(arg1 + 0x28) = v0
            int64_t var_60
            *(arg1 + 0x38) = var_60
            x8_5 = v0.q
        
        void* result_4 = result
        void* x12_4 = var_48 - result_4
        void* x11_3 = x12_4 & 0xffffffffffffffe0
        
        if (x11_3 != 0)
            int64_t x13_7 = 0
            
            if (x11_3 == 0x20 || result_4 + 0x18 + x11_3 - 0x20 u< result_4 + 0x18
                    || result_4 + 0x10 + x11_3 - 0x20 u< result_4 + 0x10
                    || result_4 + 8 + x11_3 - 0x20 u< result_4 + 8
                    || result_4 + x11_3 - 0x20 u< result_4)
                goto label_d20ac0
            
            if (result_4 u>= x8_5 + x11_3 || x8_5 u>= result_4 + x11_3)
                int64_t i_25 = (((x11_3 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x13_7 = i_25 << 5
                int64_t i_19 = i_25
                uint64_t x17_4 = x8_5
                void* result_6 = result_4
                int64_t i_6
                
                do
                    v0.q = *result_6
                    v1.q = *(result_6 + 8)
                    v2.q = *(result_6 + 0x10)
                    v3.q = *(result_6 + 0x18)
                    v0:8.q = *(result_6 + 0x20)
                    v1:8.q = *(result_6 + 0x28)
                    v2:8.q = *(result_6 + 0x30)
                    v3:8.q = *(result_6 + 0x38)
                    v4.q = *x17_4
                    v5.q = *(x17_4 + 8)
                    v6.q = *(x17_4 + 0x10)
                    v7.q = *(x17_4 + 0x18)
                    v4:8.q = *(x17_4 + 0x20)
                    v5:8.q = *(x17_4 + 0x28)
                    v6:8.q = *(x17_4 + 0x30)
                    v7:8.q = *(x17_4 + 0x38)
                    x17_4 += 0x40
                    i_6 = i_19
                    i_19 -= 2
                    int128_t v16_2 = v4 ^ v0
                    int128_t v17_2 = v5 ^ v1
                    int128_t v18_2 = v6 ^ v2
                    int128_t v19_2 = v7 ^ v3
                    *result_6 = v16_2.q
                    *(result_6 + 8) = v17_2.q
                    *(result_6 + 0x10) = v18_2.q
                    *(result_6 + 0x18) = v19_2.q
                    *(result_6 + 0x20) = v16_2:8.q
                    *(result_6 + 0x28) = v17_2:8.q
                    *(result_6 + 0x30) = v18_2:8.q
                    *(result_6 + 0x38) = v19_2:8.q
                    result_6 += 0x40
                while (i_6 != 2)
                
                if (((x11_3 - 0x20) u>> 5) + 1 != i_25)
                    goto label_d20ac0
            else
                x13_7 = 0
            label_d20ac0:
                void* i_16 = x13_7 - x11_3
                void* x13_11 = x8_5 + x13_7 + 0x10
                void* x15_11 = result_4 + x13_7 + 0x10
                void* i_7
                
                do
                    v2 = *(x13_11 - 0x10)
                    v3 = *x13_11
                    i_7 = i_16
                    i_16 += 0x20
                    x13_11 += 0x20
                    v1 = v3 ^ *x15_11
                    *(x15_11 - 0x10) ^= v2
                    *x15_11 = v1
                    x15_11 += 0x20
                while (i_7 != -0x20)
        
        if (x11_3 != x12_4)
            void* x13_12 = x12_4 - x11_3
            
            if (x13_12 u< 8 || (result_4 + x11_3 u< x8_5 + x12_4 && x8_5 + x11_3 u< var_48))
                goto label_d20bb8
            
            void* i_23
            
            if (x13_12 u>= 0x20)
                i_23 = x13_12 & 0xffffffffffffffe0
                void* x14_9 = x8_5 + x11_3 + 0x10
                void* x15_13 = result_4 + x11_3 + 0x10
                void* i_20 = i_23
                void* i_8
                
                do
                    v0 = *(x14_9 - 0x10)
                    v1 = *x14_9
                    x14_9 += 0x20
                    i_8 = i_20
                    i_20 -= 0x20
                    v1 ^= *x15_13
                    *(x15_13 - 0x10) ^= v0
                    *x15_13 = v1
                    x15_13 += 0x20
                while (i_8 != 0x20)
                
                if (x13_12 != i_23)
                    if ((x13_12 & 0x18) != 0)
                        goto label_d20b78
                    
                    x11_3 += i_23
                label_d20bb8:
                    void* x10_3 = x11_3 + result_4
                    void* i_12 = x10_3 - var_48
                    void* x8_16 = x8_5 + x11_3
                    void* i_9
                    
                    do
                        char x11_4 = *x8_16
                        x8_16 += 1
                        i_9 = i_12
                        i_12 += 1
                        *x10_3 ^= x11_4
                        x10_3 += 1
                    while (i_9 u< -1)
            else
                i_23 = nullptr
            label_d20b78:
                void* x14_10 = x13_12 & 0xfffffffffffffff8
                void* x16_7 = i_23 + x11_3
                x11_3 += x14_10
                int64_t* x15_14 = x8_5 + x16_7
                void* x16_8 = result_4 + x16_7
                void* i_14 = i_23 - x14_10
                void* i_10
                
                do
                    v0.q = *x15_14
                    x15_14 = &x15_14[1]
                    v1.q = *x16_8
                    i_10 = i_14
                    i_14 += 8
                    *x16_8 = (v1 ^ v0).q
                    x16_8 += 8
                while (i_10 != -8)
                
                if (x13_12 != x14_10)
                    goto label_d20bb8
        
        int64_t x9_10 = *(arg1 + 8)
        result_1 = result
        int64_t var_68 = x9_10
        Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(arg2, &result_1)
        
        if (result == 0)
            return result
        
        void* result_2 = result
        int64_t var_40
        return Botan::deallocate_memory(result, var_40 - result, 1)

sub_c776cc(Botan::assertion_failure("buffer.size() >= offset", "Offset ok", "update", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x9a9))
noreturn
