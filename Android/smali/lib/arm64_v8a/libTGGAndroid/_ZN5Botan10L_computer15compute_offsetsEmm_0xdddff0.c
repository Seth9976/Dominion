// 函数: _ZN5Botan10L_computer15compute_offsetsEmm
// 地址: 0xdddff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (*(arg1 + 8) u>= entry_x2)
    int64_t* x22_1 = *(arg1 + 0x70)
    int64_t x20_1 = entry_x2
    uint64_t x21_1 = arg2
    
    if ((arg2 & 3) == 0)
        int64_t* x0_1 = Botan::L_computer::get(arg1)
        int64_t* x0_3
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        int128_t v6_1
        int128_t v7_1
        x0_3, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = Botan::L_computer::get(arg1)
        
        if (x20_1 u>= 4)
            int64_t x8_1 = *arg1
            
            while (true)
                int64_t* x9_1 = *(arg1 + 0x40)
                int64_t* x10_1 = *x0_1
                int64_t x11_1 = x8_1 & 0xffffffffffffffe0
                
                if (x11_1 != 0)
                    int64_t x12_1 = 0
                    
                    if (x11_1 == 0x20 || &x22_1[2] + x11_1 - 0x20 u< &x22_1[2]
                        || &x22_1[3] + x11_1 - 0x20 u< &x22_1[3]
                        || &x22_1[1] + x11_1 - 0x20 u< &x22_1[1] || x22_1 + x11_1 - 0x20 u< x22_1)
                    label_dde15c:
                        int64_t i_23 = x12_1 - x11_1
                        void* x12_3 = x9_1 + x12_1 + 0x10
                        void* x14_8 = x22_1 + x12_1 + 0x10
                        void* x15_6 = x10_1 + x12_1 + 0x10
                        int64_t i
                        
                        do
                            v0_1 = *(x12_3 - 0x10)
                            v1_1 = *x12_3
                            v2_1 = *(x15_6 - 0x10)
                            v3_1 = *x15_6
                            i = i_23
                            i_23 += 0x20
                            x12_3 += 0x20
                            x15_6 += 0x20
                            *(x14_8 - 0x10) = v2_1 ^ v0_1
                            *x14_8 = v3_1 ^ v1_1
                            x14_8 += 0x20
                        while (i != -0x20)
                    else
                        void* x15_3 = x22_1 + x11_1
                        x12_1 = 0
                        
                        if (((x22_1 u< x9_1 + x11_1 ? 1 : 0) & (x9_1 u< x15_3 ? 1 : 0) & 1) != 0
                                || ((x22_1 u< x10_1 + x11_1 ? 1 : 0) & (x10_1 u< x15_3 ? 1 : 0)
                                & 1) != 0)
                            goto label_dde15c
                        
                        int64_t i_39 = (((x11_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        x12_1 = i_39 << 5
                        int64_t i_31 = i_39
                        int64_t* x16_4 = x10_1
                        int64_t* x17_3 = x9_1
                        int64_t* x0_5 = x22_1
                        int64_t i_1
                        
                        do
                            v0_1.q = *x17_3
                            v1_1.q = x17_3[1]
                            v2_1.q = x17_3[2]
                            v3_1.q = x17_3[3]
                            v0_1:8.q = x17_3[4]
                            v1_1:8.q = x17_3[5]
                            v2_1:8.q = x17_3[6]
                            v3_1:8.q = x17_3[7]
                            x17_3 = &x17_3[8]
                            v4_1.q = *x16_4
                            v5_1.q = x16_4[1]
                            v6_1.q = x16_4[2]
                            v7_1.q = x16_4[3]
                            v4_1:8.q = x16_4[4]
                            v5_1:8.q = x16_4[5]
                            v6_1:8.q = x16_4[6]
                            v7_1:8.q = x16_4[7]
                            x16_4 = &x16_4[8]
                            i_1 = i_31
                            i_31 -= 2
                            int128_t v16_1 = v4_1 ^ v0_1
                            int128_t v17_1 = v5_1 ^ v1_1
                            int128_t v18_1 = v6_1 ^ v2_1
                            int128_t v19_1 = v7_1 ^ v3_1
                            *x0_5 = v16_1.q
                            x0_5[1] = v17_1.q
                            x0_5[2] = v18_1.q
                            x0_5[3] = v19_1.q
                            x0_5[4] = v16_1:8.q
                            x0_5[5] = v17_1:8.q
                            x0_5[6] = v18_1:8.q
                            x0_5[7] = v19_1:8.q
                            x0_5 = &x0_5[8]
                        while (i_1 != 2)
                        
                        if (((x11_1 - 0x20) u>> 5) + 1 != i_39)
                            goto label_dde15c
                
                if (x8_1 != x11_1)
                    if ((x8_1 & 0x18) == 0)
                    label_dde228:
                        int64_t i_18 = x8_1 - x11_1
                        void* x12_8 = x22_1 + x11_1
                        void* x10_2 = x10_1 + x11_1
                        void* x9_2 = x9_1 + x11_1
                        int64_t i_2
                        
                        do
                            char x11_3 = *x9_2
                            x9_2 += 1
                            char x13_6 = *x10_2
                            x10_2 += 1
                            i_2 = i_18
                            i_18 -= 1
                            *x12_8 = x13_6 ^ x11_3
                            x12_8 += 1
                        while (i_2 != 1)
                    else
                        void* x12_4 = x22_1 + x11_1
                        void* x13_3 = x22_1 + x8_1
                        
                        if (((x12_4 u< x9_1 + x8_1 ? 1 : 0) & (x9_1 + x11_1 u< x13_3 ? 1 : 0) & 1)
                                != 0 || ((x12_4 u< x10_1 + x8_1 ? 1 : 0) & (x10_1 + x11_1 u< x13_3 ? 1 : 0)
                                & 1) != 0)
                            goto label_dde228
                        
                        int64_t x12_7 = x8_1 & 7
                        int64_t i_33 = (x8_1 & 0x1f) - x12_7
                        int64_t* x13_5 = x9_1 + x11_1
                        void* x15_9 = x10_1 + x11_1
                        int64_t x14_13 = x11_1 + i_33
                        void* x11_2 = x22_1 + x11_1
                        int64_t i_3
                        
                        do
                            v0_1.q = *x13_5
                            x13_5 = &x13_5[1]
                            v1_1.q = *x15_9
                            x15_9 += 8
                            i_3 = i_33
                            i_33 -= 8
                            *x11_2 = (v1_1 ^ v0_1).q
                            x11_2 += 8
                        while (i_3 != 8)
                        x11_1 = x14_13
                        
                        if (x12_7 != 0)
                            goto label_dde228
                
                int64_t x9_3 = *arg1
                char* x10_3 = *x0_3
                int64_t i_36 = x9_3 & 0xffffffffffffffe0
                
                if (i_36 != 0)
                    void* x8_2 = &x10_3[0x10]
                    int64_t* x12_9 = x22_1
                    int64_t i_24 = i_36
                    int64_t i_4
                    
                    do
                        v0_1 = *x12_9
                        v1_1 = *(x12_9 + 0x10)
                        void* x14_14 = x12_9 + x9_3
                        i_4 = i_24
                        i_24 -= 0x20
                        x12_9 = &x12_9[4]
                        v0_1 ^= *(x8_2 - 0x10)
                        v1_1 ^= *x8_2
                        x8_2 += 0x20
                        *x14_14 = v0_1
                        *(x14_14 + 0x10) = v1_1
                    while (i_4 != 0x20)
                
                void* x8_3 = x22_1 + x9_3
                
                if (x9_3 != i_36)
                    if ((x9_3 & 0x18) == 0)
                    label_dde344:
                        
                        do
                            *(x8_3 + i_36) = x10_3[i_36] ^ *(x22_1 + i_36)
                            i_36 += 1
                        while (x9_3 != i_36)
                    else
                        void* x12_11 = x22_1 + x9_3 + i_36
                        void* x13_7 = x22_1 + (x9_3 << 1)
                        
                        if (((x12_11 u< x8_3 ? 1 : 0) & (x22_1 + i_36 u< x13_7 ? 1 : 0) & 1) != 0
                                || ((x12_11 u< &x10_3[x9_3] ? 1 : 0)
                                & (&x10_3[i_36] u< x13_7 ? 1 : 0) & 1) != 0)
                            goto label_dde344
                        
                        int64_t x12_14 = x9_3 & 7
                        int64_t i_32 = (x9_3 & 0x1f) - x12_14
                        void* x14_18 = x22_1 + i_36
                        int64_t i_41 = i_36 + i_32
                        void* x11_5 = &x10_3[i_36]
                        int64_t i_5
                        
                        do
                            v0_1.q = *x14_18
                            v1_1.q = *x11_5
                            x11_5 += 8
                            i_5 = i_32
                            i_32 -= 8
                            *(x14_18 + x9_3) = (v1_1 ^ v0_1).q
                            x14_18 += 8
                        while (i_5 != 8)
                        i_36 = i_41
                        
                        if (x12_14 != 0)
                            goto label_dde344
                
                int64_t x9_4 = *arg1
                void* x11_6 = *(arg1 + 0x40)
                void* x10_4 = *x0_3
                int64_t x12_17 = x9_4 & 0xffffffffffffffe0
                
                if (x12_17 != 0)
                    int64_t x13_11 = 0
                    
                    if (x12_17 == 0x20 || x11_6 + 0x18 + x12_17 - 0x20 u< x11_6 + 0x18
                            || x11_6 + 0x10 + x12_17 - 0x20 u< x11_6 + 0x10
                            || x11_6 + 8 + x12_17 - 0x20 u< x11_6 + 8
                            || x11_6 + x12_17 - 0x20 u< x11_6)
                        goto label_dde414
                    
                    if (x11_6 u>= x10_4 + x12_17 || x10_4 u>= x11_6 + x12_17)
                        int64_t i_40 = (((x12_17 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        x13_11 = i_40 << 5
                        int64_t i_34 = i_40
                        void* x17_7 = x10_4
                        void* x0_7 = x11_6
                        int64_t i_6
                        
                        do
                            v0_1.q = *x0_7
                            v1_1.q = *(x0_7 + 8)
                            v2_1.q = *(x0_7 + 0x10)
                            v3_1.q = *(x0_7 + 0x18)
                            v0_1:8.q = *(x0_7 + 0x20)
                            v1_1:8.q = *(x0_7 + 0x28)
                            v2_1:8.q = *(x0_7 + 0x30)
                            v3_1:8.q = *(x0_7 + 0x38)
                            v4_1.q = *x17_7
                            v5_1.q = *(x17_7 + 8)
                            v6_1.q = *(x17_7 + 0x10)
                            v7_1.q = *(x17_7 + 0x18)
                            v4_1:8.q = *(x17_7 + 0x20)
                            v5_1:8.q = *(x17_7 + 0x28)
                            v6_1:8.q = *(x17_7 + 0x30)
                            v7_1:8.q = *(x17_7 + 0x38)
                            x17_7 += 0x40
                            i_6 = i_34
                            i_34 -= 2
                            int128_t v16_2 = v4_1 ^ v0_1
                            int128_t v17_2 = v5_1 ^ v1_1
                            int128_t v18_2 = v6_1 ^ v2_1
                            int128_t v19_2 = v7_1 ^ v3_1
                            *x0_7 = v16_2.q
                            *(x0_7 + 8) = v17_2.q
                            *(x0_7 + 0x10) = v18_2.q
                            *(x0_7 + 0x18) = v19_2.q
                            *(x0_7 + 0x20) = v16_2:8.q
                            *(x0_7 + 0x28) = v17_2:8.q
                            *(x0_7 + 0x30) = v18_2:8.q
                            *(x0_7 + 0x38) = v19_2:8.q
                            x0_7 += 0x40
                        while (i_6 != 2)
                        
                        if (((x12_17 - 0x20) u>> 5) + 1 != i_40)
                            goto label_dde414
                    else
                        x13_11 = 0
                    label_dde414:
                        int64_t i_26 = x13_11 - x12_17
                        void* x13_15 = x10_4 + x13_11 + 0x10
                        void* x15_14 = x11_6 + x13_11 + 0x10
                        int64_t i_7
                        
                        do
                            v2_1 = *(x13_15 - 0x10)
                            v3_1 = *x13_15
                            i_7 = i_26
                            i_26 += 0x20
                            x13_15 += 0x20
                            v1_1 = v3_1 ^ *x15_14
                            *(x15_14 - 0x10) ^= v2_1
                            *x15_14 = v1_1
                            x15_14 += 0x20
                        while (i_7 != -0x20)
                
                if (x9_4 != x12_17)
                    if ((x9_4 & 0x18) == 0)
                    label_dde4a0:
                        int64_t i_25 = x9_4 - x12_17
                        void* x11_7 = x11_6 + x12_17
                        void* x10_5 = x10_4 + x12_17
                        int64_t i_8
                        
                        do
                            char x12_18 = *x10_5
                            x10_5 += 1
                            i_8 = i_25
                            i_25 -= 1
                            *x11_7 ^= x12_18
                            x11_7 += 1
                        while (i_8 != 1)
                    else
                        int64_t* x13_16 = x11_6 + x12_17
                        void* x14_22 = x10_4 + x12_17
                        
                        if (x13_16 u< x10_4 + x9_4 && x14_22 u< x11_6 + x9_4)
                            goto label_dde4a0
                        
                        int64_t x15_16 = x9_4 & 7
                        int64_t i_35 = (x9_4 & 0x1f) - x15_16
                        x12_17 += i_35
                        int64_t i_9
                        
                        do
                            v0_1.q = *x14_22
                            x14_22 += 8
                            v1_1.q = *x13_16
                            i_9 = i_35
                            i_35 -= 8
                            *x13_16 = (v1_1 ^ v0_1).q
                            x13_16 = &x13_16[1]
                        while (i_9 != 8)
                        
                        if (x15_16 != 0)
                            goto label_dde4a0
                
                size_t x2 = *arg1
                void* x26_1 = *(arg1 + 0x40)
                void* x25_1 = x8_3 + x9_4
                int64_t x27_1
                
                if (x2 == 0)
                    x27_1 = 0
                else
                    if (x22_1 == 0)
                        goto label_dde8dc
                    
                    if (x26_1 == 0)
                        goto label_dde8dc
                    
                    memmove(x25_1, x26_1, x2)
                    x27_1 = *arg1
                    x26_1 = *(arg1 + 0x40)
                
                x21_1 += 4
                _CountLeadingZeros(__rbit(x21_1.d))
                int64_t* x0_10
                x0_10, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = Botan::L_computer::get(arg1)
                int64_t x10_6 = *arg1
                void* x8_5 = *x0_10
                int64_t x9_5 = x10_6 & 0xffffffffffffffe0
                
                if (x9_5 != 0)
                    int64_t x11_8 = 0
                    
                    if (x9_5 == 0x20 || x26_1 + 0x18 + x9_5 - 0x20 u< x26_1 + 0x18
                            || x26_1 + 0x10 + x9_5 - 0x20 u< x26_1 + 0x10
                            || x26_1 + 8 + x9_5 - 0x20 u< x26_1 + 8
                            || x26_1 + x9_5 - 0x20 u< x26_1)
                        goto label_dde5d4
                    
                    if (x26_1 u>= x8_5 + x9_5 || x8_5 u>= x26_1 + x9_5)
                        int64_t i_37 = (((x9_5 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                        x11_8 = i_37 << 5
                        int64_t i_27 = i_37
                        void* x15_18 = x8_5
                        void* x16_13 = x26_1
                        int64_t i_10
                        
                        do
                            v0_1.q = *x16_13
                            v1_1.q = *(x16_13 + 8)
                            v2_1.q = *(x16_13 + 0x10)
                            v3_1.q = *(x16_13 + 0x18)
                            v0_1:8.q = *(x16_13 + 0x20)
                            v1_1:8.q = *(x16_13 + 0x28)
                            v2_1:8.q = *(x16_13 + 0x30)
                            v3_1:8.q = *(x16_13 + 0x38)
                            v4_1.q = *x15_18
                            v5_1.q = *(x15_18 + 8)
                            v6_1.q = *(x15_18 + 0x10)
                            v7_1.q = *(x15_18 + 0x18)
                            v4_1:8.q = *(x15_18 + 0x20)
                            v5_1:8.q = *(x15_18 + 0x28)
                            v6_1:8.q = *(x15_18 + 0x30)
                            v7_1:8.q = *(x15_18 + 0x38)
                            x15_18 += 0x40
                            i_10 = i_27
                            i_27 -= 2
                            int128_t v16_3 = v4_1 ^ v0_1
                            int128_t v17_3 = v5_1 ^ v1_1
                            int128_t v18_3 = v6_1 ^ v2_1
                            int128_t v19_3 = v7_1 ^ v3_1
                            *x16_13 = v16_3.q
                            *(x16_13 + 8) = v17_3.q
                            *(x16_13 + 0x10) = v18_3.q
                            *(x16_13 + 0x18) = v19_3.q
                            *(x16_13 + 0x20) = v16_3:8.q
                            *(x16_13 + 0x28) = v17_3:8.q
                            *(x16_13 + 0x30) = v18_3:8.q
                            *(x16_13 + 0x38) = v19_3:8.q
                            x16_13 += 0x40
                        while (i_10 != 2)
                        
                        if (((x9_5 - 0x20) u>> 5) + 1 != i_37)
                            goto label_dde5d4
                    else
                        x11_8 = 0
                    label_dde5d4:
                        int64_t i_21 = x11_8 - x9_5
                        void* x11_12 = x8_5 + x11_8 + 0x10
                        void* x13_20 = x26_1 + x11_8 + 0x10
                        int64_t i_11
                        
                        do
                            v2_1 = *(x11_12 - 0x10)
                            v3_1 = *x11_12
                            i_11 = i_21
                            i_21 += 0x20
                            x11_12 += 0x20
                            v1_1 = v3_1 ^ *x13_20
                            *(x13_20 - 0x10) ^= v2_1
                            *x13_20 = v1_1
                            x13_20 += 0x20
                        while (i_11 != -0x20)
                
                if (x10_6 != x9_5)
                    if ((x10_6 & 0x18) == 0)
                    label_dde660:
                        int64_t i_19 = x10_6 - x9_5
                        void* x11_14 = x26_1 + x9_5
                        void* x8_6 = x8_5 + x9_5
                        int64_t i_12
                        
                        do
                            char x9_6 = *x8_6
                            x8_6 += 1
                            i_12 = i_19
                            i_19 -= 1
                            *x11_14 ^= x9_6
                            x11_14 += 1
                        while (i_12 != 1)
                    else
                        int64_t* x11_13 = x26_1 + x9_5
                        void* x12_23 = x8_5 + x9_5
                        
                        if (x11_13 u< x8_5 + x10_6 && x12_23 u< x26_1 + x10_6)
                            goto label_dde660
                        
                        int64_t x13_22 = x10_6 & 7
                        int64_t i_28 = (x10_6 & 0x1f) - x13_22
                        x9_5 += i_28
                        int64_t i_13
                        
                        do
                            v0_1.q = *x12_23
                            x12_23 += 8
                            v1_1.q = *x11_13
                            i_13 = i_28
                            i_28 -= 8
                            *x11_13 = (v1_1 ^ v0_1).q
                            x11_13 = &x11_13[1]
                        while (i_13 != 8)
                        
                        if (x13_22 != 0)
                            goto label_dde660
                
                size_t x2_1 = *arg1
                void* x25_2 = x25_1 + x27_1
                
                if (x2_1 == 0)
                    x8_1 = 0
                    x20_1 -= 4
                    x22_1 = x25_2
                    
                    if (x20_1 u<= 3)
                        break
                else
                    if (x22_1 == 0)
                        goto label_dde8dc
                    
                    int64_t x1_5 = *(arg1 + 0x40)
                    
                    if (x1_5 == 0)
                        goto label_dde8dc
                    
                    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = memmove(x25_2, x1_5, x2_1)
                    x8_1 = *arg1
                    x20_1 -= 4
                    x22_1 = x25_2 + x8_1
                    
                    if (x20_1 u<= 3)
                        break
    
    if (x20_1 == 0)
        return *(arg1 + 0x70)
    
    int64_t x23_2 = 0
    
    while (true)
        void* x24_2 = *(arg1 + 0x40)
        _CountLeadingZeros(__rbit(x23_2.d + x21_1.d + 1))
        int64_t* x0_13
        int128_t v0_2
        int128_t v1_2
        int128_t v2_2
        int128_t v3_2
        int128_t v4_2
        int128_t v5_2
        int128_t v6_2
        int128_t v7_2
        x0_13, v0_2, v1_2, v2_2, v3_2, v4_2, v5_2, v6_2, v7_2 = Botan::L_computer::get(arg1)
        int64_t x10_7 = *arg1
        void* x8_10 = *x0_13
        int64_t x9_8 = x10_7 & 0xffffffffffffffe0
        
        if (x9_8 != 0)
            int64_t x11_15 = 0
            
            if (x9_8 == 0x20 || x24_2 + 0x18 + x9_8 - 0x20 u< x24_2 + 0x18
                    || x24_2 + 0x10 + x9_8 - 0x20 u< x24_2 + 0x10
                    || x24_2 + 8 + x9_8 - 0x20 u< x24_2 + 8 || x24_2 + x9_8 - 0x20 u< x24_2)
                goto label_dde7bc
            
            if (x24_2 u>= x8_10 + x9_8 || x8_10 u>= x24_2 + x9_8)
                int64_t i_38 = (((x9_8 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x11_15 = i_38 << 5
                int64_t i_29 = i_38
                void* x15_20 = x8_10
                void* x16_15 = x24_2
                int64_t i_14
                
                do
                    v0_2.q = *x16_15
                    v1_2.q = *(x16_15 + 8)
                    v2_2.q = *(x16_15 + 0x10)
                    v3_2.q = *(x16_15 + 0x18)
                    v0_2:8.q = *(x16_15 + 0x20)
                    v1_2:8.q = *(x16_15 + 0x28)
                    v2_2:8.q = *(x16_15 + 0x30)
                    v3_2:8.q = *(x16_15 + 0x38)
                    v4_2.q = *x15_20
                    v5_2.q = *(x15_20 + 8)
                    v6_2.q = *(x15_20 + 0x10)
                    v7_2.q = *(x15_20 + 0x18)
                    v4_2:8.q = *(x15_20 + 0x20)
                    v5_2:8.q = *(x15_20 + 0x28)
                    v6_2:8.q = *(x15_20 + 0x30)
                    v7_2:8.q = *(x15_20 + 0x38)
                    x15_20 += 0x40
                    i_14 = i_29
                    i_29 -= 2
                    int128_t v16_4 = v4_2 ^ v0_2
                    int128_t v17_4 = v5_2 ^ v1_2
                    int128_t v18_4 = v6_2 ^ v2_2
                    int128_t v19_4 = v7_2 ^ v3_2
                    *x16_15 = v16_4.q
                    *(x16_15 + 8) = v17_4.q
                    *(x16_15 + 0x10) = v18_4.q
                    *(x16_15 + 0x18) = v19_4.q
                    *(x16_15 + 0x20) = v16_4:8.q
                    *(x16_15 + 0x28) = v17_4:8.q
                    *(x16_15 + 0x30) = v18_4:8.q
                    *(x16_15 + 0x38) = v19_4:8.q
                    x16_15 += 0x40
                while (i_14 != 2)
                
                if (((x9_8 - 0x20) u>> 5) + 1 != i_38)
                    goto label_dde7bc
            else
                x11_15 = 0
            label_dde7bc:
                int64_t i_22 = x11_15 - x9_8
                void* x11_19 = x8_10 + x11_15 + 0x10
                void* x13_26 = x24_2 + x11_15 + 0x10
                int64_t i_15
                
                do
                    v2_2 = *(x11_19 - 0x10)
                    v3_2 = *x11_19
                    i_15 = i_22
                    i_22 += 0x20
                    x11_19 += 0x20
                    v1_2 = v3_2 ^ *x13_26
                    *(x13_26 - 0x10) ^= v2_2
                    *x13_26 = v1_2
                    x13_26 += 0x20
                while (i_15 != -0x20)
        
        if (x10_7 != x9_8)
            if ((x10_7 & 0x18) == 0)
            label_dde848:
                int64_t i_20 = x10_7 - x9_8
                void* x11_21 = x24_2 + x9_8
                void* x8_11 = x8_10 + x9_8
                int64_t i_16
                
                do
                    char x9_9 = *x8_11
                    x8_11 += 1
                    i_16 = i_20
                    i_20 -= 1
                    *x11_21 ^= x9_9
                    x11_21 += 1
                while (i_16 != 1)
            else
                int64_t* x11_20 = x24_2 + x9_8
                void* x12_28 = x8_10 + x9_8
                
                if (x11_20 u< x8_10 + x10_7 && x12_28 u< x24_2 + x10_7)
                    goto label_dde848
                
                int64_t x13_28 = x10_7 & 7
                int64_t i_30 = (x10_7 & 0x1f) - x13_28
                x9_8 += i_30
                int64_t i_17
                
                do
                    v0_2.q = *x12_28
                    x12_28 += 8
                    v1_2.q = *x11_20
                    i_17 = i_30
                    i_30 -= 8
                    *x11_20 = (v1_2 ^ v0_2).q
                    x11_20 = &x11_20[1]
                while (i_17 != 8)
                
                if (x13_28 != 0)
                    goto label_dde848
        
        size_t x2_2 = *arg1
        
        if (x2_2 == 0)
            x23_2 += 1
            
            if (x23_2 == x20_1)
                return *(arg1 + 0x70)
        else
            if (x22_1 == 0)
                break
            
            int64_t x1_7 = *(arg1 + 0x40)
            
            if (x1_7 == 0)
                break
            
            memmove(x22_1, x1_7, x2_2)
            x23_2 += 1
            x22_1 += *arg1
            
            if (x23_2 == x20_1)
                return *(arg1 + 0x70)
    
label_dde8dc:
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)

uint8_t* x0_16
uint64_t x1_8
x0_16, x1_8 = Botan::assertion_failure("blocks <= m_max_blocks", "OCB offsets", "compute_offsets", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf0ca)
return Botan::OCB_Encryption::process(x0_16, x1_8) __tailcall
