// 函数: _ZN5Botan4CMAC8add_dataEPKhm
// 地址: 0xd03f20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x18)
int64_t x8 = *(arg1 + 0x80)
int64_t x10_1 = *(arg1 + 0x20) - x9
size_t x10_2 = x10_1 - x8

if (x10_1 u< x8)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
else
    int64_t x24_1 = *(arg1 + 0x78)
    size_t entry_x2
    size_t x2
    
    x2 = x10_2 u< entry_x2 ? x10_2 : entry_x2
    
    uint8_t const* var_68_1 = arg1
    
    if (x2 == 0)
        goto label_d03f88
    
    if (arg2 != 0)
        int128_t v0
        int128_t v1
        int128_t v2
        int128_t v3
        int128_t v4
        int128_t v5
        int128_t v6
        int128_t v7
        v0, v1, v2, v3, v4, v5, v6, v7 = memmove(x9 + x8, arg2, x2)
        arg1 = var_68_1
        x8 = *(arg1 + 0x80)
    label_d03f88:
        
        if (x8 + entry_x2 u<= x24_1)
            *(arg1 + 0x80) = x8 + entry_x2
            return 
        
        void* x9_2 = *(arg1 + 0x30)
        void* x8_1 = *(arg1 + 0x18)
        int64_t x26_1 = x24_1 & 0xffffffffffffffe0
        
        if (x26_1 != 0)
            int64_t x10_3 = 0
            
            if (x26_1 == 0x20 || x9_2 + 0x18 + x26_1 - 0x20 u< x9_2 + 0x18
                    || x9_2 + 0x10 + x26_1 - 0x20 u< x9_2 + 0x10
                    || x9_2 + 8 + x26_1 - 0x20 u< x9_2 + 8 || x9_2 + x26_1 - 0x20 u< x9_2)
                goto label_d04054
            
            if (x9_2 u>= x8_1 + x26_1 || x8_1 u>= x9_2 + x26_1)
                int64_t i_16 = (((x26_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x10_3 = i_16 << 5
                int64_t i_12 = i_16
                void* x14_2 = x8_1
                void* x15_2 = x9_2
                int64_t i
                
                do
                    v0.q = *x15_2
                    v1.q = *(x15_2 + 8)
                    v2.q = *(x15_2 + 0x10)
                    v3.q = *(x15_2 + 0x18)
                    v0:8.q = *(x15_2 + 0x20)
                    v1:8.q = *(x15_2 + 0x28)
                    v2:8.q = *(x15_2 + 0x30)
                    v3:8.q = *(x15_2 + 0x38)
                    v4.q = *x14_2
                    v5.q = *(x14_2 + 8)
                    v6.q = *(x14_2 + 0x10)
                    v7.q = *(x14_2 + 0x18)
                    v4:8.q = *(x14_2 + 0x20)
                    v5:8.q = *(x14_2 + 0x28)
                    v6:8.q = *(x14_2 + 0x30)
                    v7:8.q = *(x14_2 + 0x38)
                    x14_2 += 0x40
                    i = i_12
                    i_12 -= 2
                    int128_t v16_1 = v4 ^ v0
                    int128_t v17_1 = v5 ^ v1
                    int128_t v18_1 = v6 ^ v2
                    int128_t v19_1 = v7 ^ v3
                    *x15_2 = v16_1.q
                    *(x15_2 + 8) = v17_1.q
                    *(x15_2 + 0x10) = v18_1.q
                    *(x15_2 + 0x18) = v19_1.q
                    *(x15_2 + 0x20) = v16_1:8.q
                    *(x15_2 + 0x28) = v17_1:8.q
                    *(x15_2 + 0x30) = v18_1:8.q
                    *(x15_2 + 0x38) = v19_1:8.q
                    x15_2 += 0x40
                while (i != 2)
                
                if (((x26_1 - 0x20) u>> 5) + 1 != i_16)
                    goto label_d04054
            else
                x10_3 = 0
            label_d04054:
                int64_t i_10 = x10_3 - x26_1
                void* x10_7 = x8_1 + x10_3 + 0x10
                void* x12_4 = x9_2 + x10_3 + 0x10
                int64_t i_1
                
                do
                    v2 = *(x10_7 - 0x10)
                    v3 = *x10_7
                    i_1 = i_10
                    i_10 += 0x20
                    x10_7 += 0x20
                    v1 = v3 ^ *x12_4
                    *(x12_4 - 0x10) ^= v2
                    *x12_4 = v1
                    x12_4 += 0x20
                while (i_1 != -0x20)
        
        if (x24_1 != x26_1)
            int64_t x11_3 = x26_1
            
            if ((x24_1 & 0x18) == 0)
            label_d040e8:
                int64_t i_9 = x24_1 - x11_3
                void* x9_3 = x9_2 + x11_3
                void* x8_2 = x8_1 + x11_3
                int64_t i_2
                
                do
                    char x11_7 = *x8_2
                    x8_2 += 1
                    i_2 = i_9
                    i_9 -= 1
                    *x9_3 ^= x11_7
                    x9_3 += 1
                while (i_2 != 1)
            else
                int64_t* x10_8 = x9_2 + x26_1
                void* x12_5 = x8_1 + x26_1
                
                if (x10_8 u< x8_1 + x24_1)
                    x11_3 = x26_1
                
                if (x10_8 u< x8_1 + x24_1 && x12_5 u< x9_2 + x24_1)
                    goto label_d040e8
                
                int64_t x13_3 = x24_1 & 7
                int64_t i_13 = (x24_1 & 0x1f) - x13_3
                x11_3 = x26_1 + i_13
                int64_t i_3
                
                do
                    v0.q = *x12_5
                    x12_5 += 8
                    v1.q = *x10_8
                    i_3 = i_13
                    i_13 -= 8
                    *x10_8 = (v1 ^ v0).q
                    x10_8 = &x10_8[1]
                while (i_3 != 8)
                
                if (x13_3 != 0)
                    goto label_d040e8
        
        int64_t* x22_1 = *(arg1 + 0x10)
        int64_t x23_1 = *(arg1 + 0x30)
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        int128_t v6_1
        int128_t v7_1
        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*x22_1 + 0x48))(x22_1, x23_1, x23_1, 
            (*(arg1 + 0x38) - x23_1) u/ (*(*x22_1 + 0x30))(x22_1))
        arg1 = var_68_1
        int64_t x8_7 = *(arg1 + 0x80)
        int64_t x9_5 = x24_1 - x8_7
        size_t x19_1 = entry_x2 - x9_5
        int64_t* x22_2 = arg2 + x9_5
        
        if (x19_1 u> x24_1)
            int64_t var_70_1 = x24_1
            
            if (x26_1 == 0)
                int64_t x21_3 = 0
                int64_t x25_2 = x24_1 & 0xffffffffffffffe0
                int64_t x10_15 = x24_1 & 0x18
                int64_t fp_1 = x24_1 & 0xfffffffffffffff8
                int64_t x8_17 = (x24_1 << 1) - x8_7
                int64_t i_4 = neg.q(x24_1)
                
                do
                    char* x23_3 = *(arg1 + 0x30)
                    
                    if (x24_1 != x26_1)
                        int64_t x8_22
                        
                        if (x24_1 u>= 8)
                            int64_t x8_23 = x24_1 * x21_3
                            
                            if (x23_3 u< arg2 + x8_17 + x8_23
                                    && arg2 + x9_5 + x8_23 u< &x23_3[x24_1])
                                x8_22 = 0
                                goto label_d04510
                            
                            int64_t x9_22
                            
                            if (x24_1 u>= 0x20)
                                int64_t x8_26 = 0
                                
                                do
                                    void* x10_16 = x22_2 + x8_26
                                    void* x11_22 = &x23_3[0x10 + x8_26]
                                    x8_26 += 0x20
                                    v1_1 = *x11_22 ^ *(x10_16 + 0x10)
                                    *(x11_22 - 0x10) ^= *x10_16
                                    *x11_22 = v1_1
                                while (x25_2 != x8_26)
                                
                                if (x24_1 != x25_2)
                                    x9_22 = x25_2
                                    x8_22 = x25_2
                                    
                                    if (x10_15 == 0)
                                        goto label_d04510
                                    
                                    goto label_d044e8
                            else
                                x9_22 = 0
                            label_d044e8:
                                
                                do
                                    v0_1.q = *(x22_2 + x9_22)
                                    v1_1.q = *(x23_3 + x9_22)
                                    *(x23_3 + x9_22) = (v1_1 ^ v0_1).q
                                    x9_22 += 8
                                while (fp_1 != x9_22)
                                
                                x8_22 = fp_1
                                
                                if (x24_1 != fp_1)
                                    goto label_d04510
                        else
                            x8_22 = 0
                        label_d04510:
                            
                            do
                                x23_3[x8_22] ^= *(x22_2 + x8_22)
                                x8_22 += 1
                            while (i_4 != neg.q(x8_22))
                        x23_3 = *(arg1 + 0x30)
                    
                    int64_t* x24_3 = *(arg1 + 0x10)
                    v0_1, v1_1, v2_1, v3_1 = (*(*x24_3 + 0x48))(x24_3, x23_3, x23_3, 
                        (*(arg1 + 0x38) - x23_3) u/ (*(*x24_3 + 0x30))(x24_3))
                    x24_1 = var_70_1
                    arg1 = var_68_1
                    x21_3 += 1
                    x19_1 -= x24_1
                    x22_2 += x24_1
                while (x19_1 u> x24_1)
            else
                int64_t x9_7 = x24_1 + x26_1 - x8_7
                int64_t x8_8 = (x24_1 << 1) - x8_7
                int64_t x11_9 = x24_1 & 0x1f
                int64_t x12_7 = x24_1 & 7
                int64_t i_15 = x11_9 - x12_7
                int64_t i_14 = (((x26_1 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                int64_t x28_1 = 0
                int64_t* x21_2 = arg2 + x9_7
                int64_t i_6 = neg.q(x24_1)
                
                do
                    char* x8_16 = *(arg1 + 0x30)
                    int64_t x10_11 = x24_1 * x28_1
                    int64_t x11_10 = 0
                    int64_t x9_11 = arg2 + x9_7 + x10_11
                    
                    if (x26_1 == 0x20 || &x8_16[x26_1 - 8] u< &x8_16[0x18]
                            || &x8_16[x26_1 - 0x10] u< &x8_16[0x10]
                            || &x8_16[x26_1 - 0x18] u< &x8_16[8] || &x8_16[x26_1 - 0x20] u< x8_16)
                        goto label_d0431c
                    
                    if (x8_16 u>= x9_11 || arg2 + x9_5 + x10_11 u>= &x8_16[x26_1])
                        int64_t i_11 = i_14
                        int64_t x11_14 = 0
                        int64_t i_5
                        
                        do
                            void* x13_6 = &x8_16[x11_14]
                            void* x14_4 = x22_2 + x11_14
                            v0_1.q = *x13_6
                            v1_1.q = *(x13_6 + 8)
                            v2_1.q = *(x13_6 + 0x10)
                            v3_1.q = *(x13_6 + 0x18)
                            v0_1:8.q = *(x13_6 + 0x20)
                            v1_1:8.q = *(x13_6 + 0x28)
                            v2_1:8.q = *(x13_6 + 0x30)
                            v3_1:8.q = *(x13_6 + 0x38)
                            v4_1.q = *x14_4
                            v5_1.q = *(x14_4 + 8)
                            v6_1.q = *(x14_4 + 0x10)
                            v7_1.q = *(x14_4 + 0x18)
                            v4_1:8.q = *(x14_4 + 0x20)
                            v5_1:8.q = *(x14_4 + 0x28)
                            v6_1:8.q = *(x14_4 + 0x30)
                            v7_1:8.q = *(x14_4 + 0x38)
                            i_5 = i_11
                            i_11 -= 2
                            x11_14 += 0x40
                            int128_t v16_2 = v4_1 ^ v0_1
                            int128_t v17_2 = v5_1 ^ v1_1
                            int128_t v18_2 = v6_1 ^ v2_1
                            int128_t v19_2 = v7_1 ^ v3_1
                            *x13_6 = v16_2.q
                            *(x13_6 + 8) = v17_2.q
                            *(x13_6 + 0x10) = v18_2.q
                            *(x13_6 + 0x18) = v19_2.q
                            *(x13_6 + 0x20) = v16_2:8.q
                            *(x13_6 + 0x28) = v17_2:8.q
                            *(x13_6 + 0x30) = v18_2:8.q
                            *(x13_6 + 0x38) = v19_2:8.q
                        while (i_5 != 2)
                        x11_10 = i_14 << 5
                        
                        if (((x26_1 - 0x20) u>> 5) + 1 != i_14)
                            goto label_d0431c
                    else
                        x11_10 = 0
                    label_d0431c:
                        
                        do
                            int128_t* x12_12 = &x8_16[x11_10]
                            int128_t* x13_7 = x22_2 + x11_10
                            x11_10 += 0x20
                            v1_1 = x13_7[1] ^ x12_12[1]
                            *x12_12 ^= *x13_7
                            x12_12[1] = v1_1
                        while (x26_1 != x11_10)
                    
                    if (x24_1 != x26_1)
                        int64_t x11_17 = x26_1
                        
                        if (x11_9 u< 8)
                        label_d043a4:
                            
                            do
                                x8_16[x11_17] ^= *(x22_2 + x11_17)
                                x11_17 += 1
                            while (i_6 != neg.q(x11_17))
                        else
                            int64_t* x10_13 = &x8_16[x26_1]
                            
                            if (x10_13 u< arg2 + x8_8 + x10_11)
                                x11_17 = x26_1
                            
                            if (x10_13 u< arg2 + x8_8 + x10_11 && x9_11 u< &x8_16[x24_1])
                                goto label_d043a4
                            
                            int64_t i_8 = i_15
                            int64_t* x11_21 = x21_2
                            int64_t i_7
                            
                            do
                                v0_1.q = *x11_21
                                x11_21 = &x11_21[1]
                                v1_1.q = *x10_13
                                i_7 = i_8
                                i_8 -= 8
                                *x10_13 = (v1_1 ^ v0_1).q
                                x10_13 = &x10_13[1]
                            while (i_7 != 8)
                            x11_17 = x26_1 + i_15
                            
                            if (x12_7 != 0)
                                goto label_d043a4
                    
                    int64_t* x23_2 = *(arg1 + 0x10)
                    int64_t x24_2 = *(arg1 + 0x30)
                    x24_1 = var_70_1
                    v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = (*(*x23_2 + 0x48))(x23_2, 
                        x24_2, x24_2, (*(arg1 + 0x38) - x24_2) u/ (*(*x23_2 + 0x30))(x23_2))
                    arg1 = var_68_1
                    x19_1 -= x24_1
                    x22_2 += x24_1
                    x28_1 += 1
                    x21_2 += x24_1
                while (x19_1 u> x24_1)
        
        if (x19_1 == 0)
            goto label_d04538
        
        if (x22_2 != 0)
            int64_t x0_10 = *(arg1 + 0x18)
            
            if (x0_10 != 0)
                memmove(x0_10, x22_2, x19_1)
                arg1 = var_68_1
            label_d04538:
                *(arg1 + 0x80) = x19_1
                return 

Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::CMAC::output_length() __tailcall
