// 函数: _ZN5Botan14CBC_Encryption7processEPhm
// 地址: 0xcef000
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x18)

if (x8 == *(arg1 + 0x20))
    Botan::throw_invalid_state("state().empty() == false", "process", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else
    int64_t x23_1 = *(arg1 + 0x30)
    int64_t entry_result
    uint64_t x9_1 = entry_result u/ x23_1
    
    if (entry_result u% x23_1 == 0)
        if (x23_1 u> entry_result)
            return entry_result
        
        int64_t i_20 = x23_1 & 0xffffffffffffffe0
        int128_t entry_v0
        int128_t entry_v1
        int128_t entry_v2
        int128_t entry_v3
        int128_t entry_v4
        int128_t entry_v5
        int128_t entry_v6
        int128_t entry_v7
        
        if (i_20 != 0)
            int64_t x9_3 = 0
            
            if (i_20 == 0x20 || arg2 + 0x18 + i_20 - 0x20 u< arg2 + 0x18
                    || arg2 + 0x10 + i_20 - 0x20 u< arg2 + 0x10
                    || arg2 + 8 + i_20 - 0x20 u< arg2 + 8 || arg2 + i_20 - 0x20 u< arg2)
                goto label_cef110
            
            if (x8 + i_20 u<= arg2 || x8 u>= arg2 + i_20)
                int64_t i_19 = (((i_20 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x9_3 = i_19 << 5
                int64_t i_15 = i_19
                void* x13_2 = x8
                uint64_t x14_2 = arg2
                int64_t i
                
                do
                    entry_v0.q = *x14_2
                    entry_v1.q = *(x14_2 + 8)
                    entry_v2.q = *(x14_2 + 0x10)
                    entry_v3.q = *(x14_2 + 0x18)
                    entry_v0:8.q = *(x14_2 + 0x20)
                    entry_v1:8.q = *(x14_2 + 0x28)
                    entry_v2:8.q = *(x14_2 + 0x30)
                    entry_v3:8.q = *(x14_2 + 0x38)
                    entry_v4.q = *x13_2
                    entry_v5.q = *(x13_2 + 8)
                    entry_v6.q = *(x13_2 + 0x10)
                    entry_v7.q = *(x13_2 + 0x18)
                    entry_v4:8.q = *(x13_2 + 0x20)
                    entry_v5:8.q = *(x13_2 + 0x28)
                    entry_v6:8.q = *(x13_2 + 0x30)
                    entry_v7:8.q = *(x13_2 + 0x38)
                    x13_2 += 0x40
                    i = i_15
                    i_15 -= 2
                    int128_t v16_1 = entry_v4 ^ entry_v0
                    int128_t v17_1 = entry_v5 ^ entry_v1
                    int128_t v18_1 = entry_v6 ^ entry_v2
                    int128_t v19_1 = entry_v7 ^ entry_v3
                    *x14_2 = v16_1.q
                    *(x14_2 + 8) = v17_1.q
                    *(x14_2 + 0x10) = v18_1.q
                    *(x14_2 + 0x18) = v19_1.q
                    *(x14_2 + 0x20) = v16_1:8.q
                    *(x14_2 + 0x28) = v17_1:8.q
                    *(x14_2 + 0x30) = v18_1:8.q
                    *(x14_2 + 0x38) = v19_1:8.q
                    x14_2 += 0x40
                while (i != 2)
                
                if (((i_20 - 0x20) u>> 5) + 1 != i_19)
                    goto label_cef110
            else
                x9_3 = 0
            label_cef110:
                int64_t i_13 = x9_3 - i_20
                void* x9_7 = x8 + x9_3 + 0x10
                void* x11_4 = arg2 + x9_3 + 0x10
                int64_t i_1
                
                do
                    entry_v2 = *(x9_7 - 0x10)
                    entry_v3 = *x9_7
                    i_1 = i_13
                    i_13 += 0x20
                    x9_7 += 0x20
                    entry_v0 = entry_v2 ^ *(x11_4 - 0x10)
                    entry_v1 = entry_v3 ^ *x11_4
                    *(x11_4 - 0x10) = entry_v0
                    *x11_4 = entry_v1
                    x11_4 += 0x20
                while (i_1 != -0x20)
        
        if (x23_1 != i_20)
            int64_t i_21 = i_20
            
            if ((x23_1 & 0x18) == 0)
            label_cef1a8:
                int64_t i_11 = x23_1 - i_21
                char* x11_6 = arg2 + i_21
                void* x8_1 = x8 + i_21
                int64_t i_2
                
                do
                    char x10_6 = *x8_1
                    x8_1 += 1
                    i_2 = i_11
                    i_11 -= 1
                    *x11_6 ^= x10_6
                    x11_6 = &x11_6[1]
                while (i_2 != 1)
            else
                int64_t* x9_8 = arg2 + i_20
                void* x11_5 = x8 + i_20
                
                if (x9_8 u< x8 + x23_1)
                    i_21 = i_20
                
                if (x9_8 u< x8 + x23_1 && x11_5 u< arg2 + x23_1)
                    goto label_cef1a8
                
                int64_t x12_3 = x23_1 & 7
                int64_t i_16 = (x23_1 & 0x1f) - x12_3
                i_21 = i_20 + i_16
                int64_t i_3
                
                do
                    entry_v0.q = *x11_5
                    x11_5 += 8
                    entry_v1.q = *x9_8
                    i_3 = i_16
                    i_16 -= 8
                    entry_v0 ^= entry_v1
                    *x9_8 = entry_v0.q
                    x9_8 = &x9_8[1]
                while (i_3 != 8)
                
                if (x12_3 != 0)
                    goto label_cef1a8
        
        int64_t* x0 = *(arg1 + 8)
        int128_t v0
        int128_t v1
        int128_t v2
        int128_t v3
        v0, v1, v2, v3 = (*(*x0 + 0x48))(x0, arg2, arg2, 1, entry_v0, entry_v1, entry_v2, entry_v3, 
            entry_v4, entry_v5, entry_v6, entry_v7)
        
        if (x9_1 != 1)
            if (i_20 == 0)
                int64_t x22_2 = x23_1 & 0xfffffffffffffff8
                int64_t x19_2 = x23_1 & 0xffffffffffffffe0
                void* x24_2 = arg2 + 0x10
                char* x26_2 = arg2 + x23_1
                int64_t fp_2 = 1
                uint64_t x21_2 = arg2
                
                do
                    int64_t i_12 = i_20
                    
                    if (x23_1 != i_12)
                        int64_t x8_19
                        
                        if (x23_1 u< 8)
                            x8_19 = 0
                        label_cef4b4:
                            
                            do
                                x26_2[x8_19] ^= *(x21_2 + x8_19)
                                x8_19 += 1
                            while (neg.q(x23_1) != neg.q(x8_19))
                        else
                            int64_t x10_10
                            
                            if (x23_1 u>= 0x20)
                                void* x8_20 = x24_2
                                int64_t i_4
                                
                                do
                                    int128_t* x10_11 = x8_20 + x23_1
                                    v0 = *(x8_20 - 0x10)
                                    v1 = *x8_20
                                    i_4 = i_12
                                    i_12 -= 0x20
                                    x8_20 += 0x20
                                    v1 ^= *x10_11
                                    x10_11[-1] ^= v0
                                    *x10_11 = v1
                                while (i_4 != 0x20)
                                
                                if (x23_1 != x19_2)
                                    x10_10 = x19_2
                                    x8_19 = x19_2
                                    
                                    if ((x23_1 & 0x18) == 0)
                                        goto label_cef4b4
                                    
                                    goto label_cef46c
                            else
                                x10_10 = 0
                            label_cef46c:
                                int64_t* x8_21 = x21_2 + x10_10
                                void* x9_14 = &x26_2[x10_10]
                                int64_t i_14 = neg.q(x22_2) + x10_10
                                int64_t i_5
                                
                                do
                                    v0.q = *x8_21
                                    x8_21 = &x8_21[1]
                                    v1.q = *x9_14
                                    i_5 = i_14
                                    i_14 += 8
                                    *x9_14 = (v1 ^ v0).q
                                    x9_14 += 8
                                while (i_5 != -8)
                                x8_19 = x22_2
                                
                                if (x23_1 != x22_2)
                                    goto label_cef4b4
                    
                    int64_t* x0_4 = *(arg1 + 8)
                    int64_t x1_3 = arg2 + fp_2 * x23_1
                    v0, v1, v2, v3 = (*(*x0_4 + 0x48))(x0_4, x1_3, x1_3, 1)
                    fp_2 += 1
                    x24_2 += x23_1
                    x21_2 += x23_1
                    x26_2 = &x26_2[x23_1]
                while (fp_2 != x9_1)
            else
                int64_t x21_1 = x23_1 & 0x1f
                int64_t x9_9 = x23_1 & 7
                int64_t i_18 = x21_1 - x9_9
                int64_t x27_1 = 0
                int128_t* x20_1 = arg2 + 0x10
                int64_t* x19_1 = arg2 + i_20
                void* x28_1 = arg2 + x23_1
                int64_t x24_1 = 1
                uint64_t x22_1 = arg2
                
                do
                    int64_t x8_13 = x23_1 * x27_1
                    int64_t x1_2 = arg2 + x24_1 * x23_1
                    int128_t* x12_6 = x20_1
                    int64_t i_17 = i_20
                    int64_t i_6
                    
                    do
                        int128_t* x14_3 = x12_6 + x23_1
                        v0 = x12_6[-1]
                        v1 = *x12_6
                        i_6 = i_17
                        i_17 -= 0x20
                        x12_6 = &x12_6[2]
                        v0 ^= x14_3[-1]
                        v1 ^= *x14_3
                        x14_3[-1] = v0
                        *x14_3 = v1
                    while (i_6 != 0x20)
                    
                    if (x23_1 != i_20)
                        int64_t i_22 = i_20
                        
                        if (x21_1 u< 8)
                        label_cef378:
                            int64_t i_10 = x23_1 - i_22
                            char* x9_13 = x28_1 + i_22
                            char* x10_9 = x22_1 + i_22
                            int64_t i_7
                            
                            do
                                char x11_9 = *x10_9
                                x10_9 = &x10_9[1]
                                i_7 = i_10
                                i_10 -= 1
                                *x9_13 ^= x11_9
                                x9_13 = &x9_13[1]
                            while (i_7 != 1)
                        else
                            if (arg2 + x23_1 + i_20 + x8_13 u< arg2 + x23_1 + x8_13)
                                i_22 = i_20
                            
                            if (arg2 + x23_1 + i_20 + x8_13 u< arg2 + x23_1 + x8_13
                                    && arg2 + i_20 + x8_13 u< arg2 + (x23_1 << 1) + x8_13)
                                goto label_cef378
                            
                            int64_t i_9 = i_18
                            int64_t* x9_12 = x19_1
                            int64_t i_8
                            
                            do
                                v0.q = *x9_12
                                v1.q = *(x9_12 + x23_1)
                                i_8 = i_9
                                i_9 -= 8
                                v0 ^= v1
                                *(x9_12 + x23_1) = v0.q
                                x9_12 = &x9_12[1]
                            while (i_8 != 8)
                            i_22 = i_20 + i_18
                            
                            if (x9_9 != 0)
                                goto label_cef378
                    
                    int64_t* x0_3 = *(arg1 + 8)
                    v0, v1, v2, v3 = (*(*x0_3 + 0x48))(x0_3, x1_2, x1_2, 1, v0, v1)
                    x24_1 += 1
                    x27_1 += 1
                    x20_1 += x23_1
                    x19_1 += x23_1
                    x28_1 += x23_1
                    x22_1 += x23_1
                while (x24_1 != x9_1)
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
            &arg1[0x18], arg2 + (x9_1 - 1) * x23_1)
        return entry_result

char* x0_5
char* x1_4
char* x2_4
x0_5, x1_4, x2_4 = Botan::assertion_failure("sz % BS == 0", "CBC input is full blocks", "process", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4db2)
noreturn Botan::throw_invalid_state(x0_5, x1_4, x2_4) __tailcall
