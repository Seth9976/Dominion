// 函数: sub_9f654c
// 地址: 0x9f654c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_1 = *(muls.dp.d(arg2, 0x84) + 0x14a76a4)
int64_t x24 = sx.q(arg2)

if (x9_1 s>= 1 && *(arg1 + 0x150c) != 5)
    uint64_t x10_3 = *((x24 << 3) + 0x14a7240)
    
    if (x10_3 != 0)
        x10_3 = zx.q(*(x10_3 + 0xb0))
    
    data_14a71e8 = (&data_14a79b8)[sx.q(x10_3.d s% x9_1)]

if (*(arg1 + 0xd40) s>= 1)
    int64_t i = 0
    int32_t* x8_2 = x24 * 0x84 + 0x14a76c8
    int64_t var_37c8_1 = x24
    
    do
        int32_t var_37ac[0x8b]
        memset(&var_37ac, 0, 0x22c)
        int32_t var_1960[0x58]
        uint64_t x22_1
        
        if (*(arg1 + 0x1528) s< 1)
            x22_1 = 0
        else
            void* x28_1 = arg1 + 0x1aa8
            int32_t* x11_2 = x8_2
            int64_t j = 0
            x22_1 = 0
            
            do
                if (i == zx.q(*(x28_1 - 0x14)))
                    if (*x11_2 s>= 1 && *(x28_1 - 0x34) - 0x3eb u<= 1
                            && j != zx.q(*(arg1 + i * 0x5a30 + 0x17f74)))
                        uint64_t x0_1 = zx.q(*(x28_1 - 0x38))
                        
                        if (x0_1.d != 0x1309)
                            x11_2 = x8_2
                            
                            if ((zx.d(*(DomDefGet(x0_1, 0x18) + 0xcd)) & 0x10) == 0)
                                x11_2 = x8_2
                                
                                if (RandomInt(&data_14a71e8, 0x64) s< *x11_2)
                                    *(x28_1 + (x24 << 2)) = 0
                    
                    int32_t x8_14 = *(x28_1 - 0x34)
                    
                    if (x8_14 - 0x3e9 u<= 0x89)
                        if (*(x28_1 + (x24 << 2)) == 0)
                            var_1960[sx.q(x22_1.d)] = j.d
                            x22_1 = zx.q(x22_1.d + 1)
                        
                        int64_t x8_16 = zx.q(x8_14 - 0x3e8) << 0x20 s>> 0x1e
                        *(&var_37ac + x8_16) += 1
                    else if (x8_14 != 0x474)
                        pthread_kill(pthread_self(), 6)
                        uint64_t x0_13
                        void* x1_2
                        x0_13, x1_2 = XNoReturn()
                        return sub_9f6acc(x0_13, x1_2) __tailcall
                
                j += 1
                x28_1 += 0x68
            while (j s< sx.q(*(arg1 + 0x1528)))
        
        uint64_t x10_4 = 0
        int64_t j_1 = 0x3e8
        int64_t i_1 = i
        void var_3260
        
        do
            if (var_37ac[j_1 - 0x3e8] != 0)
                int32_t k = *(arg1 + i * 0x5a30 + ((j_1 - 0x3e8) << 2) + 0x17f68)
                int64_t x28_2
                
                if (k == 0)
                    x28_2 = 0
                else
                    x28_2 = 0
                    int32_t k_15 = 1
                    char var_3580[0x31c]
                    int32_t var_25e0[0x320]
                    int32_t k_14
                    
                    do
                        int32_t x10_8 = *(arg1 + mulu.dp.d(k, 0x68) + (x24 << 2) + 0x1aa8)
                        k_14 = k_15
                        uint64_t k_10 = zx.q(k)
                        char x9_14
                        
                        if ((x10_8 & 2) == 0)
                            int64_t x10_5 = zx.q(RandomInt(&data_14a71e8, x22_1.d)) << 0x20 s>> 0x1e
                            x22_1 = sx.q(x22_1.d) - 1
                            k = *(&var_1960 + x10_5)
                            x9_14 = 0
                            *(&var_1960 + x10_5) = var_1960[x22_1]
                        else
                            x9_14 = (x10_8 u>> 2).b & 1
                        
                        var_3580[x28_2] = x9_14
                        var_25e0[x28_2] = k
                        k = *(arg1 + k_10 * 0x68 + 0x1ac8)
                        x28_2 += 1
                        k_15 = k_14 + 1
                    while (k != 0)
                    
                    if (x28_2.d != 0)
                        uint64_t k_11 = zx.q(k_14)
                        uint64_t x23_2 = 0
                        int32_t (* x9_15)[0x320] = &var_25e0
                        char (* x10_9)[0x31c] = &var_3580
                        uint64_t k_6 = k_11
                        int32_t var_ce0[0x138]
                        uint64_t k_1
                        
                        do
                            if (zx.d(*x10_9) == 0)
                                var_ce0[sx.q(x23_2.d)] = *x9_15
                                x23_2 = zx.q(x23_2.d + 1)
                            
                            x9_15 = &(*x9_15)[1]
                            k_1 = k_6
                            k_6 -= 1
                            x10_9 = &(*x10_9)[1]
                        while (k_1 != 1)
                        void* x26_1 = &var_3260 + (sx.q(x10_4.d) << 2)
                        int32_t (* x20_1)[0x320] = &var_25e0
                        char (* x24_1)[0x31c] = &var_3580
                        uint64_t k_2
                        
                        do
                            int32_t x8_24
                            
                            if (zx.d(*x24_1) == 0)
                                int64_t x9_16 =
                                    zx.q(RandomInt(&data_14a71e8, x23_2.d)) << 0x20 s>> 0x1e
                                x23_2 = sx.q(x23_2.d) - 1
                                x8_24 = *(&var_ce0 + x9_16)
                                *(&var_ce0 + x9_16) = var_ce0[x23_2]
                            else
                                x8_24 = *x20_1
                            
                            *x26_1 = x8_24
                            x26_1 += 4
                            k_2 = k_11
                            k_11 -= 1
                            x20_1 = &(*x20_1)[1]
                            x24_1 = &(*x24_1)[1]
                        while (k_2 != 1)
                        x24 = var_37c8_1
                        i = i_1
                
                x10_4 = zx.q(x28_2.d + x10_4.d)
            
            j_1 += 1
        while (j_1 != 0x473)
        
        int64_t x10_11 = 0
        
        for (int64_t j_2 = 0x3e8; j_2 != 0x473; )
            int64_t x9_18 = j_2 - 0x3e8
            int32_t x11_5 = var_37ac[x9_18]
            
            if (x11_5 s>= 1)
                uint64_t k_13 = zx.q(x11_5 - 1)
                int64_t x14_1 = sx.q(x10_11.d)
                
                if (x11_5 == 1)
                    x10_11 = x14_1
                label_9f6994:
                    int32_t k_7 = x11_5 - k_13.d
                    int64_t x12_3 = x10_11
                    int32_t k_3
                    
                    do
                        x10_11 = x12_3 + 1
                        k_3 = k_7
                        k_7 -= 1
                        *(arg1 + zx.q(*(&var_3260 + (x12_3 << 2))) * 0x68 + 0x1ac8) = 0
                        x12_3 = x10_11
                    while (k_3 != 1)
                else
                    int64_t x13_2 = k_13 + 1
                    k_13 = x13_2 & 0x1fffffffe
                    x10_11 = k_13 + x14_1
                    void var_325c
                    void* x14_2 = &var_325c + (x14_1 << 2)
                    uint64_t k_9 = k_13
                    uint64_t k_4
                    
                    do
                        uint64_t x16_1 = zx.q(*(x14_2 - 4))
                        uint64_t x17_1 = zx.q(*x14_2)
                        k_4 = k_9
                        k_9 -= 2
                        x14_2 += 8
                        *(arg1 + 0x1a68 + x16_1 * 0x68 + 0x60) = 0
                        *(arg1 + 0x1a68 + x17_1 * 0x68 + 0x60) = 0
                    while (k_4 != 2)
                    
                    if (x13_2 != k_13)
                        goto label_9f6994
            
            j_2 += 1
            *(arg1 + i * 0x5a30 + (x9_18 << 2) + 0x17f68) = 0
        
        int32_t x8_26 = 0
        
        for (int64_t j_3 = 0x3e8; j_3 != 0x473; )
            uint64_t k_12 = zx.q(var_37ac[j_3 - 0x3e8])
            
            if (k_12.d s>= 1)
                uint64_t k_8 = k_12
                uint64_t k_5
                
                do
                    void var_3264
                    uint64_t x14_3 = zx.q(*(&var_3264 + (sx.q(x8_26) << 2) + (k_8 << 2)))
                    k_5 = k_8
                    k_8 -= 1
                    void* x15_1 = arg1 + x14_3 * 0x68
                    *(x15_1 + 0x1a74) = j_3.d
                    *(x15_1 + 0x1a8c) = 0
                    *(x15_1 + 0x1ac8) = *(arg1 + i * 0x5a30 + ((j_3 - 0x3e8) << 2) + 0x17f68)
                    *(arg1 + i * 0x5a30 + ((j_3 - 0x3e8) << 2) + 0x17f68) = x14_3.d
                while (k_5 s> 1)
            
            j_3 += 1
            x8_26 += k_12.d
        
        i += 1
    while (i s< sx.q(*(arg1 + 0xd40)))

sub_a027a4(arg1, 0x1301, arg2)
sub_a027a4(arg1, 0x91c, arg2)
sub_a027a4(arg1, 0x923, arg2)
sub_a027a4(arg1, 0xd30, arg2)
sub_a027a4(arg1, 0xd3d, arg2)
int64_t result = sub_a027a4(arg1, 0x1128, arg2)
*(arg1 + 0x1524) = 1
return result
