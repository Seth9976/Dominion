// 函数: sub_fe1e9c
// 地址: 0xfe1e9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x12 + 0x28)
char* x24 = arg2
arg1[3] = arg2
arg1[4] = arg2
arg1[5] = &arg2[sx.q(arg3)]
arg1[6].d = arg4
int64_t result

if (arg5 == 0)
label_fe1f74:
    arg1[2].d = 0
    int32_t x8_3 = 0
    *(arg1 + 0x14) = 0
    int32_t x23_1 = *(arg1 + 0x14)
    
    while (x23_1 u>> x8_3 == 0)
        char* x9_36 = *arg1
        uint32_t x9_34
        
        if (x9_36 u< arg1[1])
            *arg1 = &x9_36[1]
            x9_34 = zx.d(*x9_36)
        else
            x9_34 = 0
        
        int32_t x9_4 = x8_3 + 8
        bool cond:1_1 = x8_3 s>= 0x11
        x23_1 |= x9_34 << x8_3
        x8_3 = x9_4
        *(arg1 + 0x14) = x23_1
        arg1[2].d = x9_4
        
        if (cond:1_1)
            while (true)
                uint32_t x8_4 = x23_1 u>> 1
                int32_t x11_2 = x9_4 - 1
                *(arg1 + 0x14) = x8_4
                arg1[2].d = x11_2
                
                if (x9_4 s<= 2)
                    int32_t i = x9_4 - 9
                    
                    do
                        if (x8_4 u>> (i + 8) != 0)
                            goto label_fe2b14
                        
                        char* x11_6 = *arg1
                        uint32_t x11_3
                        
                        if (x11_6 u< arg1[1])
                            *arg1 = &x11_6[1]
                            x11_3 = zx.d(*x11_6)
                        else
                            x11_3 = 0
                        
                        int32_t x10_6 = x11_3 << (i + 8)
                        int32_t x11_4 = i + 0x10
                        i += 8
                        x8_4 |= x10_6
                        *(arg1 + 0x14) = x8_4
                        arg1[2].d = x11_4
                    while (i s< 0x11)
                    
                    x11_2 = i + 8
                
                int32_t x9_5 = x8_4 & 3
                uint32_t x8_5 = x8_4 u>> 2
                int32_t i_9 = x11_2 - 2
                *(arg1 + 0x14) = x8_5
                arg1[2].d = i_9
                char const* const x9_37
                int16_t var_850
                
                if (x9_5 == 0)
                    int32_t x9_6 = i_9 & 7
                    
                    if (x9_6 != 0)
                        if (i_9 s< x9_6)
                            int32_t i_1 = x11_2 - 0xa
                            
                            do
                                if (x8_5 u>> (i_1 + 8) != 0)
                                    goto label_fe2b14
                                
                                char* x12_8 = *arg1
                                uint32_t x12_5
                                
                                if (x12_8 u< arg1[1])
                                    *arg1 = &x12_8[1]
                                    x12_5 = zx.d(*x12_8)
                                else
                                    x12_5 = 0
                                
                                int32_t x11_11 = x12_5 << (i_1 + 8)
                                int32_t x12_6 = i_1 + 0x10
                                i_1 += 8
                                x8_5 |= x11_11
                                *(arg1 + 0x14) = x8_5
                                arg1[2].d = x12_6
                            while (i_1 s< 0x11)
                            
                            i_9 = i_1 + 8
                        
                        x8_5 u>>= x9_6
                        i_9 -= x9_6
                        *(arg1 + 0x14) = x8_5
                        arg1[2].d = i_9
                    
                    int64_t x11_26
                    
                    if (i_9 s< 1)
                        if (i_9 != 0)
                            goto label_fe2b34
                        
                        x11_26 = 0
                        goto label_fe25f4
                    
                    x11_26 = 0
                    int32_t i_2
                    
                    do
                        *(&var_850 + x11_26) = x8_5.b
                        x11_26 += 1
                        i_2 = i_9
                        i_9 -= 8
                        x8_5 u>>= 8
                    while (i_2 s> 8)
                    *(arg1 + 0x14) = x8_5
                    arg1[2].d = i_9
                    
                    if (i_9 != 0)
                        goto label_fe2b34
                    
                    if (x11_26.d u<= 3)
                    label_fe25f4:
                        char* x9_21 = *arg1
                        int64_t x8_23 = arg1[1]
                        int64_t x10_25 = x11_26 & 0xffffffff
                        bool cond:6_1
                        
                        do
                            char x11_27
                            
                            if (x9_21 u< x8_23)
                                *arg1 = &x9_21[1]
                                x11_27 = *x9_21
                                x9_21 = &x9_21[1]
                            else
                                x11_27 = 0
                            
                            cond:6_1 = x10_25 == 3
                            *(&var_850 + x10_25) = x11_27
                            x10_25 += 1
                        while (not(cond:6_1))
                    
                    size_t x25_2 = zx.q(var_850)
                    int16_t var_84e
                    
                    if (zx.d(var_84e) != (x25_2.d ^ 0xffff))
                        x9_37 = "zlib corrupt"
                    else
                        int64_t x1_3 = *arg1
                        
                        if (x1_3 + x25_2 u> arg1[1])
                            x9_37 = "read past buffer"
                        else
                            int64_t x8_18 = arg1[5]
                            
                            if (&x24[x25_2] u<= x8_18)
                                goto label_fe25c8
                            
                            if (arg1[6].d == 0)
                                x9_37 = "output buffer limit"
                            else
                                int64_t oldmem = arg1[4]
                                int32_t x21_3 = x24.d - oldmem.d
                                int32_t bytes_7 = x8_18.d - oldmem.d
                                int32_t bytes_4
                                bool cond:12_1
                                
                                do
                                    bytes_4 = bytes_7
                                    cond:12_1 = x25_2.d + x21_3 s> bytes_7
                                    bytes_7 <<= 1
                                while (cond:12_1)
                                int64_t bytes_1 = sx.q(bytes_4)
                                int64_t x0_7 = realloc(oldmem, bytes_1)
                                
                                if (x0_7 == 0)
                                    x9_37 = "outofmem"
                                else
                                    x1_3 = *arg1
                                    x24 = x0_7 + sx.q(x21_3)
                                    arg1[3] = x24
                                    arg1[4] = x0_7
                                    arg1[5] = x0_7 + bytes_1
                                label_fe25c8:
                                    memcpy(x24, x1_3, x25_2)
                                    x24 = arg1[3] + x25_2
                                    *arg1 += x25_2
                                    arg1[3] = x24
                                    
                                    if ((x23_1 & 1) != 0)
                                    label_fe2a84:
                                        result = 1
                                        goto label_fe2ad0
                                    
                                label_fe29a8:
                                    x8_3 = arg1[2].d
                                    x23_1 = *(arg1 + 0x14)
                                    
                                    if (x8_3 s<= 0)
                                        break
                                    
                                    x9_4 = x8_3
                                    continue
                    
                label_fe2abc:
                    result = 0
                else
                    if (x9_5 == 1)
                        result = sub_1001df4(arg1 + 0x34, 0x8687a4, 0x120)
                        
                        if (result.d == 0)
                            goto label_fe2ad0
                        
                        result = sub_1001df4(&arg1[0x103], 0x8688c4, 0x20)
                        
                        if (result.d == 0)
                            goto label_fe2ad0
                    else
                        int32_t x0_3
                        uint32_t x9_7
                        int32_t x26_1
                        
                        if (x9_5 != 3)
                            if (x11_2 s<= 6)
                                int32_t i_3 = x11_2 - 0xa
                                
                                do
                                    if (x8_5 u>> (i_3 + 8) != 0)
                                        goto label_fe2b14
                                    
                                    char* x11_10 = *arg1
                                    uint32_t x11_7
                                    
                                    if (x11_10 u< arg1[1])
                                        *arg1 = &x11_10[1]
                                        x11_7 = zx.d(*x11_10)
                                    else
                                        x11_7 = 0
                                    
                                    int32_t x10_8 = x11_7 << (i_3 + 8)
                                    int32_t x11_8 = i_3 + 0x10
                                    i_3 += 8
                                    x8_5 |= x10_8
                                    *(arg1 + 0x14) = x8_5
                                    arg1[2].d = x11_8
                                while (i_3 s< 0x11)
                                
                                i_9 = i_3 + 8
                            
                            x9_7 = x8_5 u>> 5
                            int32_t x13_3 = i_9 - 5
                            *(arg1 + 0x14) = x9_7
                            arg1[2].d = x13_3
                            
                            if (i_9 s<= 9)
                                int32_t i_4 = i_9 - 0xd
                                
                                do
                                    if (x9_7 u>> (i_4 + 8) != 0)
                                        goto label_fe2b14
                                    
                                    char* x12_12 = *arg1
                                    uint32_t x12_9
                                    
                                    if (x12_12 u< arg1[1])
                                        *arg1 = &x12_12[1]
                                        x12_9 = zx.d(*x12_12)
                                    else
                                        x12_9 = 0
                                    
                                    int32_t x11_13 = x12_9 << (i_4 + 8)
                                    int32_t x12_10 = i_4 + 0x10
                                    i_4 += 8
                                    x9_7 |= x11_13
                                    *(arg1 + 0x14) = x9_7
                                    arg1[2].d = x12_10
                                while (i_4 s< 0x11)
                                
                                x13_3 = i_4 + 8
                            
                            uint32_t x11_15 = x9_7 u>> 5
                            int32_t x12_13 = x13_3 - 5
                            *(arg1 + 0x14) = x11_15
                            arg1[2].d = x12_13
                            
                            if (x13_3 s< 9)
                                int32_t i_5 = x13_3 - 0xd
                                
                                do
                                    if (x11_15 u>> (i_5 + 8) != 0)
                                        goto label_fe2b14
                                    
                                    char* x13_9 = *arg1
                                    uint32_t x13_6
                                    
                                    if (x13_9 u< arg1[1])
                                        *arg1 = &x13_9[1]
                                        x13_6 = zx.d(*x13_9)
                                    else
                                        x13_6 = 0
                                    
                                    int32_t x12_14 = x13_6 << (i_5 + 8)
                                    int32_t x13_7 = i_5 + 0x10
                                    i_5 += 8
                                    x11_15 |= x12_14
                                    *(arg1 + 0x14) = x11_15
                                    arg1[2].d = x13_7
                                while (i_5 s< 0x11)
                                
                                x12_13 = i_5 + 8
                            
                            int64_t i_6 = 0
                            uint32_t x9_8 = x11_15 u>> 4
                            int32_t x11_16 = x12_13 - 4
                            x26_1 = (x9_7 & 0x1f) + 1 + (x8_5 & 0x1f) + 0x101
                            *(arg1 + 0x14) = x9_8
                            arg1[2].d = x11_16
                            int64_t var_a30
                            __builtin_memset(&var_a30, 0, 0x13)
                            
                            do
                                int32_t x12_16
                                
                                if (x11_16 s<= 2)
                                    bool cond:16_1
                                    
                                    do
                                        if (x9_8 u>> x11_16 != 0)
                                            goto label_fe2b14
                                        
                                        char* x12_20 = *arg1
                                        uint32_t x12_18
                                        
                                        if (x12_20 u< arg1[1])
                                            *arg1 = &x12_20[1]
                                            x12_18 = zx.d(*x12_20)
                                        else
                                            x12_18 = 0
                                        
                                        x12_16 = x11_16 + 8
                                        cond:16_1 = x11_16 s>= 0x11
                                        x9_8 |= x12_18 << x11_16
                                        x11_16 = x12_16
                                        *(arg1 + 0x14) = x9_8
                                        arg1[2].d = x12_16
                                    while (not(cond:16_1))
                                else
                                    x12_16 = x11_16
                                
                                x11_16 = x12_16 - 3
                                uint64_t x12_17 = zx.q(*(&data_8688e4 + i_6))
                                i_6 += 1
                                char x13_11 = x9_8.b & 7
                                x9_8 u>>= 3
                                *(arg1 + 0x14) = x9_8
                                arg1[2].d = x11_16
                                *(&var_a30 + x12_17) = x13_11
                            while (i_6 != zx.q((x11_15 & 0xf) + 4))
                            
                            x0_3 = sub_1001df4(&var_850, &var_a30, 0x13)
                        
                        if (x9_5 == 3 || x0_3 == 0)
                        label_fe2a7c:
                            result = 0
                            goto label_fe2ad0
                        
                        int32_t x24_1 = 0
                        
                        while (true)
                            int32_t x0_5 = sub_10022ac(arg1, &var_850)
                            
                            if (x0_5 u>= 0x13)
                                goto label_fe2680
                            
                            char var_a18[0x1c8]
                            bool cond:21_1
                            
                            if (x0_5 s<= 0xf)
                                var_a18[sx.q(x24_1)] = x0_5.b
                                x24_1 += 1
                                cond:21_1 = x26_1 != x24_1
                                
                                if (x26_1 s> x24_1)
                                    continue
                            else
                                void* x0_6 = &var_a18[sx.q(x24_1)]
                                uint32_t x1_2
                                int32_t x21_2
                                
                                if (x0_5 == 0x11)
                                    int32_t x9_12 = arg1[2].d
                                    int32_t x8_11 = *(arg1 + 0x14)
                                    int32_t x10_15
                                    
                                    if (x9_12 s<= 2)
                                        bool cond:24_1
                                        
                                        do
                                            if (x8_11 u>> x9_12 != 0)
                                                goto label_fe2b14
                                            
                                            char* x10_19 = *arg1
                                            uint32_t x10_17
                                            
                                            if (x10_19 u< arg1[1])
                                                *arg1 = &x10_19[1]
                                                x10_17 = zx.d(*x10_19)
                                            else
                                                x10_17 = 0
                                            
                                            x10_15 = x9_12 + 8
                                            cond:24_1 = x9_12 s>= 0x11
                                            x8_11 |= x10_17 << x9_12
                                            x9_12 = x10_15
                                            *(arg1 + 0x14) = x8_11
                                            arg1[2].d = x10_15
                                        while (not(cond:24_1))
                                    else
                                        x10_15 = x9_12
                                    
                                    x1_2 = 0
                                    *(arg1 + 0x14) = x8_11 u>> 3
                                    arg1[2].d = x10_15 - 3
                                    x21_2 = (x8_11 & 7) + 3
                                else if (x0_5 != 0x10)
                                    int32_t x9_14 = arg1[2].d
                                    int32_t x8_13 = *(arg1 + 0x14)
                                    int32_t x10_20
                                    
                                    if (x9_14 s<= 6)
                                        bool cond:25_1
                                        
                                        do
                                            if (x8_13 u>> x9_14 != 0)
                                                goto label_fe2b14
                                            
                                            char* x10_24 = *arg1
                                            uint32_t x10_22
                                            
                                            if (x10_24 u< arg1[1])
                                                *arg1 = &x10_24[1]
                                                x10_22 = zx.d(*x10_24)
                                            else
                                                x10_22 = 0
                                            
                                            x10_20 = x9_14 + 8
                                            cond:25_1 = x9_14 s>= 0x11
                                            x8_13 |= x10_22 << x9_14
                                            x9_14 = x10_20
                                            *(arg1 + 0x14) = x8_13
                                            arg1[2].d = x10_20
                                        while (not(cond:25_1))
                                    else
                                        x10_20 = x9_14
                                    
                                    x1_2 = 0
                                    x21_2 = (x8_13 & 0x7f) + 0xb
                                    *(arg1 + 0x14) = x8_13 u>> 7
                                    arg1[2].d = x10_20 - 7
                                else
                                    int32_t x9_10 = arg1[2].d
                                    int32_t x8_9 = *(arg1 + 0x14)
                                    int32_t x10_10
                                    
                                    if (x9_10 s<= 1)
                                        bool cond:26_1
                                        
                                        do
                                            if (x8_9 u>> x9_10 != 0)
                                                goto label_fe2b14
                                            
                                            char* x10_14 = *arg1
                                            uint32_t x10_12
                                            
                                            if (x10_14 u< arg1[1])
                                                *arg1 = &x10_14[1]
                                                x10_12 = zx.d(*x10_14)
                                            else
                                                x10_12 = 0
                                            
                                            x10_10 = x9_10 + 8
                                            cond:26_1 = x9_10 s>= 0x11
                                            x8_9 |= x10_12 << x9_10
                                            x9_10 = x10_10
                                            *(arg1 + 0x14) = x8_9
                                            arg1[2].d = x10_10
                                        while (not(cond:26_1))
                                    else
                                        x10_10 = x9_10
                                    
                                    *(arg1 + 0x14) = x8_9 u>> 2
                                    arg1[2].d = x10_10 - 2
                                    
                                    if (x24_1 == 0)
                                        goto label_fe2680
                                    
                                    x1_2 = zx.d(*(x0_6 - 1))
                                    x21_2 = (x8_9 & 3) + 3
                                
                                if (x26_1 - x24_1 s< x21_2)
                                    goto label_fe2680
                                
                                memset(x0_6, x1_2, zx.q(x21_2))
                                x24_1 += x21_2
                                cond:21_1 = x26_1 != x24_1
                                
                                if (x26_1 s> x24_1)
                                    continue
                            
                            if (cond:21_1)
                            label_fe2680:
                                data_2423720 = "bad codelengths"
                                goto label_fe2a7c
                            
                            if (sub_1001df4(arg1 + 0x34, &var_a18, (x8_5 & 0x1f) + 0x101) == 0)
                                goto label_fe2a7c
                            
                            if (sub_1001df4(&arg1[0x103], &var_a18[zx.q((x8_5 & 0x1f) + 0x101)], 
                                    (x9_7 & 0x1f) + 1) != 0)
                                break
                            
                            goto label_fe2a7c
                    
                    x24 = arg1[3]
                    
                    while (true)
                        int32_t x0_14 = sub_10022ac(arg1, arg1 + 0x34)
                        
                        if (x0_14 s> 0xff)
                            if (x0_14 == 0x100)
                                arg1[3] = x24
                                
                                if ((x23_1 & 1) != 0)
                                    goto label_fe2a84
                                
                                goto label_fe29a8
                            
                            uint64_t x8_27 = zx.q(x0_14 - 0x101)
                            int32_t i_11 = *(&data_8688f8 + (zx.q(x8_27.d) << 2))
                            
                            if (x8_27 - 8 u<= 0x13)
                                int32_t x8_28 = *(&data_868974 + (x8_27 << 2))
                                int32_t x10_26 = arg1[2].d
                                int32_t x9_24 = *(arg1 + 0x14)
                                int32_t x11_28
                                
                                if (x10_26 s< x8_28)
                                    bool cond:15_1
                                    
                                    do
                                        if (x9_24 u>> x10_26 != 0)
                                            goto label_fe2b14
                                        
                                        char* x11_33 = *arg1
                                        uint32_t x11_31
                                        
                                        if (x11_33 u< arg1[1])
                                            *arg1 = &x11_33[1]
                                            x11_31 = zx.d(*x11_33)
                                        else
                                            x11_31 = 0
                                        
                                        x11_28 = x10_26 + 8
                                        cond:15_1 = x10_26 s>= 0x11
                                        x9_24 |= x11_31 << x10_26
                                        x10_26 = x11_28
                                        *(arg1 + 0x14) = x9_24
                                        arg1[2].d = x11_28
                                    while (not(cond:15_1))
                                else
                                    x11_28 = x10_26
                                
                                i_11 += x9_24 & not.d(0xffffffff << x8_28)
                                *(arg1 + 0x14) = x9_24 u>> x8_28
                                arg1[2].d = x11_28 - x8_28
                            
                            int32_t x0_16
                            int128_t v0_1
                            int128_t v1_1
                            x0_16, v0_1, v1_1 = sub_10022ac(arg1, &arg1[0x103])
                            
                            if ((x0_16 & 0x80000000) != 0)
                                goto label_fe2a08
                            
                            int32_t x8_30 = *(&data_8689f0 + (zx.q(x0_16) << 2))
                            uint64_t x9_26 = zx.q(x0_16)
                            
                            if (x9_26 - 4 u<= 0x19)
                                int32_t x9_27 = *(&data_868a70 + (x9_26 << 2))
                                int32_t x11_29 = arg1[2].d
                                int32_t x10_29 = *(arg1 + 0x14)
                                int32_t x12_24
                                
                                if (x11_29 s< x9_27)
                                    bool cond:18_1
                                    
                                    do
                                        if (x10_29 u>> x11_29 != 0)
                                            goto label_fe2b14
                                        
                                        char* x12_30 = *arg1
                                        uint32_t x12_28
                                        
                                        if (x12_30 u< arg1[1])
                                            *arg1 = &x12_30[1]
                                            x12_28 = zx.d(*x12_30)
                                        else
                                            x12_28 = 0
                                        
                                        x12_24 = x11_29 + 8
                                        cond:18_1 = x11_29 s>= 0x11
                                        x10_29 |= x12_28 << x11_29
                                        x11_29 = x12_24
                                        *(arg1 + 0x14) = x10_29
                                        arg1[2].d = x12_24
                                    while (not(cond:18_1))
                                else
                                    x12_24 = x11_29
                                
                                x8_30 += x10_29 & not.d(0xffffffff << x9_27)
                                *(arg1 + 0x14) = x10_29 u>> x9_27
                                arg1[2].d = x12_24 - x9_27
                            
                            int64_t oldmem_2 = arg1[4]
                            int64_t x28_1 = sx.q(x8_30)
                            void* x21_6 = x24 - oldmem_2
                            
                            if (x21_6 s< x28_1)
                                result = 0
                                data_2423720 = "bad dist"
                                goto label_fe2ad0
                            
                            int64_t x8_31 = arg1[5]
                            
                            if (&x24[sx.q(i_11)] u> x8_31)
                                int32_t x9_30 = arg1[6].d
                                arg1[3] = x24
                                
                                if (x9_30 == 0)
                                    x9_37 = "output buffer limit"
                                    goto label_fe2abc
                                
                                int32_t bytes_8 = x8_31.d - oldmem_2.d
                                int32_t bytes_5
                                bool cond:17_1
                                
                                do
                                    bytes_5 = bytes_8
                                    cond:17_1 = i_11 + x21_6.d s> bytes_8
                                    bytes_8 <<= 1
                                while (cond:17_1)
                                int64_t bytes = sx.q(bytes_5)
                                result, v0_1, v1_1 = realloc(oldmem_2, bytes)
                                
                                if (result == 0)
                                    x9_37 = "outofmem"
                                    break
                                    break
                                
                                x24 = result + sx.q(x21_6.d)
                                arg1[3] = x24
                                arg1[4] = result
                                arg1[5] = result + bytes
                            
                            char* x8_34 = x24 - x28_1
                            
                            if (x28_1.d != 1)
                                if (i_11 != 0)
                                    uint64_t x9_31 = zx.q(i_11 - 1)
                                    void* x9_32
                                    
                                    if (x9_31.d u< 0x1f || (x24 u< &x24[1 + x9_31 - x28_1]
                                            && x8_34 u< &x24[1 + x9_31]))
                                        x9_32 = x24
                                    else
                                        int64_t i_12 = (x9_31 + 1) & 0x1ffffffe0
                                        x9_32 = &x24[i_12]
                                        x8_34 = &x8_34[i_12]
                                        i_11 -= i_12.d
                                        int64_t i_10 = i_12
                                        int64_t i_7
                                        
                                        do
                                            void* x14_4 = &x24[neg.q(x28_1)]
                                            v1_1 = *(x14_4 + 0x10)
                                            i_7 = i_10
                                            i_10 -= 0x20
                                            *x24 = *x14_4
                                            *(x24 + 0x10) = v1_1
                                            x24 = &x24[0x20]
                                        while (i_7 != 0x20)
                                        x24 = x9_32
                                        
                                        if (x9_31 + 1 == i_12)
                                            continue
                                    
                                    x24 = x9_32
                                    int32_t i_8
                                    
                                    do
                                        char x9_33 = *x8_34
                                        x8_34 = &x8_34[1]
                                        i_8 = i_11
                                        i_11 -= 1
                                        *x24 = x9_33
                                        x24 = &x24[1]
                                    while (i_8 != 1)
                            else if (i_11 != 0)
                                memset(x24, zx.d(*x8_34), zx.q(i_11))
                                x24 = &x24[zx.q(i_11 - 1) + 1]
                        else
                            if ((x0_14 & 0x80000000) != 0)
                            label_fe2a08:
                                result = 0
                                data_2423720 = "bad huffman code"
                                goto label_fe2ad0
                            
                            int64_t x8_25 = arg1[5]
                            
                            if (x24 u>= x8_25)
                                int32_t x9_22 = arg1[6].d
                                arg1[3] = x24
                                
                                if (x9_22 == 0)
                                    x9_37 = "output buffer limit"
                                    goto label_fe2abc
                                
                                int64_t oldmem_1 = arg1[4]
                                int32_t x21_5 = x24.d - oldmem_1.d
                                int32_t bytes_6 = x8_25.d - oldmem_1.d
                                int32_t bytes_3
                                bool cond:9_1
                                
                                do
                                    bytes_3 = bytes_6
                                    cond:9_1 = bytes_6 s<= x21_5
                                    bytes_6 <<= 1
                                while (cond:9_1)
                                int64_t bytes_2 = sx.q(bytes_3)
                                result = realloc(oldmem_1, bytes_2)
                                
                                if (result == 0)
                                    x9_37 = "outofmem"
                                    break
                                    break
                                
                                x24 = result + sx.q(x21_5)
                                arg1[3] = x24
                                arg1[4] = result
                                arg1[5] = result + bytes_2
                            
                            *x24 = x0_14.b
                            x24 = &x24[1]
                data_2423720 = x9_37
                goto label_fe2ad0
    
label_fe2b14:
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 0xf39, 
        "void stbi__fill_bits(stbi__zbuf *)", "z->code_buffer < (1U << z->num_bits)")
label_fe2b34:
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image.h", 0xff2, 
        "int stbi__parse_uncompressed_block(stbi__zbuf *)", "a->num_bits == 0")
else
    char* x9_1 = *arg1
    int64_t x10_1 = arg1[1]
    uint32_t x8_1
    uint32_t x9_2
    
    if (x9_1 u>= x10_1)
        x8_1 = 0
        
        if (x9_1 u>= x10_1)
            x9_2 = 0
        else
            *arg1 = &x9_1[1]
            x9_2 = zx.d(*x9_1)
    else
        *arg1 = &x9_1[1]
        x8_1 = zx.d(*x9_1)
        x9_1 = &x9_1[1]
        
        if (x9_1 u< x10_1)
            *arg1 = &x9_1[1]
            x9_2 = zx.d(*x9_1)
        else
            x9_2 = 0
    
    if (((0xffff00ff & x9_2) | (0xff & x8_1) << 8) * 0xbdef7bdf u< 0x8421085)
        if ((x9_2 & 0x20) != 0)
            result = 0
            data_2423720 = "no preset dict"
            goto label_fe2ad0
        
        if ((x8_1 & 0xf) == 8)
            goto label_fe1f74
        
        result = 0
        data_2423720 = "bad compression"
        goto label_fe2ad0
    
    result = 0
    data_2423720 = "bad zlib header"
label_fe2ad0:
    
    if (*(x12 + 0x28) == x8)
        return result
__stack_chk_fail()
noreturn
