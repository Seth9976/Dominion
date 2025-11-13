// 函数: sub_ff8f48
// 地址: 0xff8f48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t* x27 = arg1
int32_t* x20 = *arg1
arg1[2] = 0
arg1[3] = 0
arg1[1] = 0
int32_t x12_1

if (sub_ff8bac(x20) == 0)
    x12_1 = 0
else
    x12_1 = 1
    
    if (arg2 != 1)
        int32_t var_149c_1 = 0
        char var_14c4_1 = 0
        int64_t var_14b8_1 = 0
        uint64_t var_14b0_1 = x23
        int32_t x22_2 = 0
        int32_t x21_1 = 0
        int32_t x28_1 = 1
        uint32_t i_34 = 0
        int32_t var_1484_1 = 0
        int64_t* var_14a8_1 = x27
        
        while (true)
            int32_t x0_4 = sub_ffc330(x20)
            int32_t x0_6 = sub_ffc330(x20)
            int16_t var_1474
            char var_146c
            char var_1468[0x400]
            int32_t x8_85
            char const* const x9_21
            
            if (x0_6 s> 0x49484451)
                if (x0_6 == 0x49484452)
                    if (x28_1 == 0)
                        x12_1 = 0
                        x9_21 = "multiple IHDR"
                    label_ff9b28:
                        x23 = var_14b0_1
                    label_ff9b2c:
                        data_2423720 = x9_21
                        
                        if (*(x23 + 0x28) == x8)
                            return zx.q(x12_1)
                        
                        goto label_ffa16c
                    
                    if (x0_4 != 0xd)
                        x12_1 = 0
                        x9_21 = "bad IHDR len"
                        goto label_ff9b28
                    
                    int32_t x0_12 = sub_ffc330(x20)
                    *x20 = x0_12
                    
                    if (x0_12 u< 0x1000001)
                        int32_t x0_14 = sub_ffc330(x20)
                        x20[1] = x0_14
                        
                        if (x0_14 u< 0x1000001)
                            char* x8_17 = *(x20 + 0xb8)
                            uint32_t x8_18
                            
                            if (x8_17 u>= *(x20 + 0xc0))
                                if (x20[0xc] == 0)
                                    x27[4].d = 0
                                label_ff9c78:
                                    x12_1 = 0
                                    x9_21 = "1/2/4/8/16-bit only"
                                    goto label_ff9b28
                                
                                int32_t x0_24 =
                                    (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], zx.q(x20[0xd]))
                                void* x9_13
                                
                                if (x0_24 == 0)
                                    x8_18 = 0
                                    x20[0xc] = 0
                                    x20[0xe].b = 0
                                    x9_13 = x20 + 0x39
                                else
                                    x8_18 = zx.d(x20[0xe].b)
                                    x9_13 = &x20[0xe] + sx.q(x0_24)
                                
                                *(x20 + 0xc0) = x9_13
                                *(x20 + 0xb8) = x20 + 0x39
                                goto label_ff97fc
                            
                            *(x20 + 0xb8) = &x8_17[1]
                            x8_18 = zx.d(*x8_17)
                        label_ff97fc:
                            x27[4].d = x8_18
                            
                            if (x8_18 u> 0x10 || (1 << x8_18 & 0x10116) == 0)
                                goto label_ff9c78
                            
                            void* x9_19 = *(x20 + 0xb8)
                            void* x8_62 = *(x20 + 0xc0)
                            uint32_t x28_5
                            
                            if (x9_19 u>= x8_62)
                                if (x20[0xc] != 0)
                                    int32_t x0_39 =
                                        (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], zx.q(x20[0xd]))
                                    
                                    if (x0_39 == 0)
                                        x28_5 = 0
                                        x20[0xc] = 0
                                        x20[0xe].b = 0
                                        x8_62 = x20 + 0x39
                                    else
                                        x28_5 = zx.d(x20[0xe].b)
                                        x8_62 = &x20[0xe + sx.q(x0_39)]
                                    
                                    x9_19 = x20 + 0x39
                                    *(x20 + 0xc0) = x8_62
                                    *(x20 + 0xb8) = x20 + 0x39
                                    
                                    if (x28_5 u>= 7)
                                        goto label_ff9b04
                                    
                                    goto label_ff98b4
                                
                                x28_5 = 0
                            else
                                *(x20 + 0xb8) = x9_19 + 1
                                x28_5 = zx.d(*x9_19)
                                x9_19 += 1
                                
                                if (x28_5 u>= 7)
                                label_ff9b04:
                                    x12_1 = 0
                                    x9_21 = "bad ctype"
                                    goto label_ff9b28
                                
                            label_ff98b4:
                                
                                if (x28_5 == 3)
                                    if (x27[4].d == 0x10)
                                        goto label_ff9b04
                                    
                                    x28_5 = 3
                                    x21_1 = 3
                                else if ((x28_5 & 1) != 0)
                                    goto label_ff9b04
                            
                            if (x9_19 u< x8_62)
                                *(x20 + 0xb8) = x9_19 + 1
                                uint32_t x10_21 = zx.d(*x9_19)
                                x9_19 += 1
                                
                                if (x10_21 != 0)
                                label_ff9c00:
                                    x12_1 = 0
                                    x9_21 = "bad comp method"
                                    goto label_ff9b28
                            else if (x20[0xc] != 0)
                                int32_t x0_41 =
                                    (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], zx.q(x20[0xd]))
                                
                                if (x0_41 == 0)
                                    x20[0xc] = 0
                                    x20[0xe].b = 0
                                    x8_62 = x20 + 0x39
                                    x9_19 = x20 + 0x39
                                    *(x20 + 0xc0) = x8_62
                                    *(x20 + 0xb8) = x20 + 0x39
                                else
                                    uint32_t x10_23 = zx.d(x20[0xe].b)
                                    x8_62 = &x20[0xe] + sx.q(x0_41)
                                    x9_19 = x20 + 0x39
                                    *(x20 + 0xc0) = x8_62
                                    *(x20 + 0xb8) = x20 + 0x39
                                    
                                    if (x10_23 != 0)
                                        goto label_ff9c00
                            
                            if (x9_19 u< x8_62)
                                *(x20 + 0xb8) = x9_19 + 1
                                uint32_t x10_24 = zx.d(*x9_19)
                                x9_19 += 1
                                
                                if (x10_24 != 0)
                                label_ff9c14:
                                    x12_1 = 0
                                    x9_21 = "bad filter method"
                                    goto label_ff9b28
                            else if (x20[0xc] != 0)
                                int32_t x0_43 =
                                    (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], zx.q(x20[0xd]))
                                
                                if (x0_43 == 0)
                                    x20[0xc] = 0
                                    x20[0xe].b = 0
                                    x8_62 = x20 + 0x39
                                    x9_19 = x20 + 0x39
                                    *(x20 + 0xc0) = x8_62
                                    *(x20 + 0xb8) = x20 + 0x39
                                else
                                    uint32_t x10_26 = zx.d(x20[0xe].b)
                                    x8_62 = &x20[0xe] + sx.q(x0_43)
                                    x9_19 = x20 + 0x39
                                    *(x20 + 0xc0) = x8_62
                                    *(x20 + 0xb8) = x20 + 0x39
                                    
                                    if (x10_26 != 0)
                                        goto label_ff9c14
                            
                            uint32_t x12_2
                            
                            if (x9_19 u< x8_62)
                                *(x20 + 0xb8) = x9_19 + 1
                                x12_2 = zx.d(*x9_19)
                                
                                if (x12_2 u< 2)
                                    goto label_ff9a68
                                
                            label_ff9c28:
                                x12_1 = 0
                                x9_21 = "bad interlace method"
                                goto label_ff9b28
                            
                            int32_t x8_78
                            
                            if (x20[0xc] != 0)
                                int32_t x0_45 =
                                    (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], zx.q(x20[0xd]))
                                
                                if (x0_45 != 0)
                                    x12_2 = zx.d(x20[0xe].b)
                                    *(x20 + 0xc0) = &x20[0xe + sx.q(x0_45)]
                                    *(x20 + 0xb8) = x20 + 0x39
                                    
                                    if (x12_2 u< 2)
                                        goto label_ff9a68
                                    
                                    goto label_ff9c28
                                
                                x12_2 = 0
                                x20[0xc] = 0
                                x20[0xe].b = 0
                                *(x20 + 0xc0) = x20 + 0x39
                                *(x20 + 0xb8) = x20 + 0x39
                            label_ff9a68:
                                x8_78 = *x20
                                
                                if (x8_78 == 0)
                                    goto label_ff9af0
                                
                                goto label_ff9a70
                            
                            x12_2 = 0
                            x8_78 = *x20
                            
                            if (x8_78 == 0)
                            label_ff9af0:
                                x12_1 = 0
                                x9_21 = "0-pixel image"
                                goto label_ff9b28
                            
                        label_ff9a70:
                            int32_t x9_20 = x20[1]
                            
                            if (x9_20 == 0)
                                goto label_ff9af0
                            
                            var_14b8_1.d = x12_2
                            var_14b8_1:4.d = x28_5
                            
                            if ((x21_1 & 0xff) != 0)
                                x20[2] = 1
                                
                                if (x9_20 u<= (0x40000000 u/ x8_78) u>> 2)
                                    goto label_ff9008
                            else
                                int32_t x10_29 = ((x28_5 & 2) | 1) + (x28_5 u>> 2 & 1)
                                x20[2] = x10_29
                                
                                if (0x40000000 u/ x8_78 u/ x10_29 u>= x9_20)
                                    if (arg2 == 2)
                                        goto label_ff9c44
                                    
                                    goto label_ff9ab8
                    
                    x12_1 = 0
                    x9_21 = "too large"
                    goto label_ff9b28
                
                if (x0_6 == 0x504c5445)
                    if (x28_1 != 0)
                        goto label_ff9b1c
                    
                    int32_t x8_19
                    uint32_t i_40
                    
                    if (x0_4 u< 0x301)
                        x8_19 = x0_4 & 0xffff
                        i_40 = x8_19 u/ 3
                        i_34 = i_40
                    
                    if (x0_4 u>= 0x301 || i_40 * 3 != x0_4)
                        x12_1 = 0
                        x9_21 = "invalid PLTE"
                        goto label_ff9b28
                    
                    if (x8_19 u>= 3)
                        void* x9_8 = *(x20 + 0xb8)
                        void* x8_20 = *(x20 + 0xc0)
                        void* x28_3 = &var_1468 | 3
                        uint64_t i_33
                        
                        if (i_34 u> 1)
                            i_33 = zx.q(i_34)
                        else
                            i_33 = 1
                        
                        uint64_t i
                        
                        do
                            uint32_t x10_5
                            
                            if (x9_8 u>= x8_20)
                                x10_5 = x20[0xc]
                                
                                if (x10_5 != 0)
                                    int32_t x0_16 =
                                        (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], zx.q(x20[0xd]))
                                    
                                    if (x0_16 == 0)
                                        x10_5 = 0
                                        x20[0xc] = 0
                                        x20[0xe].b = 0
                                        x8_20 = x20 + 0x39
                                    else
                                        x10_5 = zx.d(x20[0xe].b)
                                        x8_20 = &x20[0xe + sx.q(x0_16)]
                                    
                                    x9_8 = x20 + 0x39
                                    *(x20 + 0xc0) = x8_20
                                    *(x20 + 0xb8) = x20 + 0x39
                            else
                                *(x20 + 0xb8) = x9_8 + 1
                                x10_5 = zx.d(*x9_8)
                                x9_8 += 1
                            
                            *(x28_3 - 3) = x10_5.b
                            uint32_t x10_6
                            
                            if (x9_8 u>= x8_20)
                                x10_6 = x20[0xc]
                                
                                if (x10_6 != 0)
                                    int32_t x0_18 =
                                        (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], zx.q(x20[0xd]))
                                    
                                    if (x0_18 == 0)
                                        x10_6 = 0
                                        x20[0xc] = 0
                                        x20[0xe].b = 0
                                        x8_20 = x20 + 0x39
                                    else
                                        x10_6 = zx.d(x20[0xe].b)
                                        x8_20 = &x20[0xe + sx.q(x0_18)]
                                    
                                    x9_8 = x20 + 0x39
                                    *(x20 + 0xc0) = x8_20
                                    *(x20 + 0xb8) = x20 + 0x39
                            else
                                *(x20 + 0xb8) = x9_8 + 1
                                x10_6 = zx.d(*x9_8)
                                x9_8 += 1
                            
                            *(x28_3 - 2) = x10_6.b
                            uint32_t x10_4
                            
                            if (x9_8 u< x8_20)
                                *(x20 + 0xb8) = x9_8 + 1
                                x10_4 = zx.d(*x9_8)
                                x9_8 += 1
                            else
                                x10_4 = x20[0xc]
                                
                                if (x10_4 != 0)
                                    int32_t x0_20 =
                                        (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], zx.q(x20[0xd]))
                                    
                                    if (x0_20 == 0)
                                        x10_4 = 0
                                        x20[0xc] = 0
                                        x20[0xe].b = 0
                                        x8_20 = x20 + 0x39
                                    else
                                        x10_4 = zx.d(x20[0xe].b)
                                        x8_20 = &x20[0xe + sx.q(x0_20)]
                                    
                                    x9_8 = x20 + 0x39
                                    *(x20 + 0xc0) = x8_20
                                    *(x20 + 0xb8) = x20 + 0x39
                            
                            *(x28_3 - 1) = x10_4.b
                            *x28_3 = 0xff
                            x28_3 += 4
                            i = i_33
                            i_33 -= 1
                        while (i != 1)
                    
                    goto label_ff9008
                
                if (x0_6 != 0x74524e53)
                    goto label_ff9448
                
                if (x28_1 != 0)
                    goto label_ff9b1c
                
                if (arg1[1] != 0)
                    x12_1 = 0
                    x9_21 = "tRNS after IDAT"
                    goto label_ff9b28
                
                if ((x21_1 & 0xff) == 0)
                    int32_t x8_45 = x20[2]
                    
                    if ((x8_45 & 1) == 0)
                        x12_1 = 0
                        x9_21 = "tRNS with alpha"
                        goto label_ff9b28
                    
                    if (x0_4 == x8_45 << 1)
                        if (x27[4].d == 0x10)
                            if (x8_45 s< 1)
                                goto label_ff9880
                            
                            void* x9_17 = *(x20 + 0xb8)
                            void* x8_46 = *(x20 + 0xc0)
                            int64_t i_1 = 0
                            
                            do
                                char x21_3
                                
                                if (x9_17 u>= x8_46)
                                    if (x20[0xc] == 0)
                                        x21_3 = 0
                                        
                                        if (x9_17 u>= x8_46)
                                            goto label_ff9648
                                        
                                        goto label_ff959c
                                    
                                    int32_t x0_31 =
                                        (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], zx.q(x20[0xd]))
                                    
                                    if (x0_31 == 0)
                                        x21_3 = 0
                                        x20[0xc] = 0
                                        x20[0xe].b = 0
                                        x8_46 = x20 + 0x39
                                    else
                                        x21_3 = x20[0xe].b
                                        x8_46 = &x20[0xe] + sx.q(x0_31)
                                    
                                    x9_17 = x20 + 0x39
                                    *(x20 + 0xc0) = x8_46
                                    *(x20 + 0xb8) = x20 + 0x39
                                    
                                    if (x9_17 u< x8_46)
                                        goto label_ff959c
                                    
                                    goto label_ff9648
                                
                                *(x20 + 0xb8) = x9_17 + 1
                                x21_3 = *x9_17
                                x9_17 += 1
                                uint32_t x10_9
                                
                                if (x9_17 u< x8_46)
                                label_ff959c:
                                    *(x20 + 0xb8) = x9_17 + 1
                                    x10_9 = zx.d(*x9_17)
                                    x9_17 += 1
                                else
                                label_ff9648:
                                    x10_9 = x20[0xc]
                                    
                                    if (x10_9 != 0)
                                        int32_t x0_33 = (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], 
                                            zx.q(x20[0xd]))
                                        
                                        if (x0_33 == 0)
                                            x10_9 = 0
                                            x20[0xc] = 0
                                            x20[0xe].b = 0
                                            x8_46 = x20 + 0x39
                                        else
                                            x10_9 = zx.d(x20[0xe].b)
                                            x8_46 = &x20[0xe + sx.q(x0_33)]
                                        
                                        x9_17 = x20 + 0x39
                                        *(x20 + 0xc0) = x8_46
                                        *(x20 + 0xb8) = x20 + 0x39
                                
                                (&var_1474)[i_1] = (0xff & x10_9.w) | (zx.d(x21_3) << 8).w
                                i_1 += 1
                            while (i_1 s< sx.q(x20[2]))
                        else if (x8_45 s< 1)
                        label_ff9880:
                            x28_1 = 0
                            x21_1 = 0
                            var_14c4_1 = 1
                            sub_ffc330(x20)
                            continue
                            continue
                        else
                            void* x9_18 = *(x20 + 0xb8)
                            void* x8_55 = *(x20 + 0xc0)
                            int64_t i_2 = 0
                            
                            do
                                if (x9_18 u< x8_55)
                                    x9_18 += 1
                                    *(x20 + 0xb8) = x9_18
                                else if (x20[0xc] != 0)
                                    int32_t x0_35 =
                                        (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], zx.q(x20[0xd]))
                                    
                                    if (x0_35 == 0)
                                        x20[0xc] = 0
                                        x20[0xe].b = 0
                                        x8_55 = x20 + 0x39
                                    else
                                        x8_55 = x20 + sx.q(x0_35) + 0x38
                                    
                                    x9_18 = x20 + 0x39
                                    *(x20 + 0xc0) = x8_55
                                    *(x20 + 0xb8) = x9_18
                                
                                uint32_t x10_14
                                
                                if (x9_18 u< x8_55)
                                    *(x20 + 0xb8) = x9_18 + 1
                                    x10_14 = zx.d(*x9_18)
                                    x9_18 += 1
                                else
                                    x10_14 = x20[0xc]
                                    
                                    if (x10_14 != 0)
                                        int32_t x0_37 = (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], 
                                            zx.q(x20[0xd]))
                                        
                                        if (x0_37 == 0)
                                            x10_14 = 0
                                            x20[0xc] = 0
                                            x20[0xe].b = 0
                                            x8_55 = x20 + 0x39
                                        else
                                            x10_14 = zx.d(x20[0xe].b)
                                            x8_55 = &x20[0xe + sx.q(x0_37)]
                                        
                                        x9_18 = x20 + 0x39
                                        *(x20 + 0xc0) = x8_55
                                        *(x20 + 0xb8) = x20 + 0x39
                                
                                (&var_146c)[i_2] = *(&data_8686d8 + sx.q(x27[4].d)) * x10_14.b
                                i_2 += 1
                            while (i_2 s< sx.q(x20[2]))
                        
                        var_14c4_1 = 1
                    label_ff9ab8:
                        x28_1 = 0
                        x21_1 = 0
                        sub_ffc330(x20)
                        continue
                        continue
                else
                    if (arg2 == 2)
                        x8_85 = 4
                        goto label_ff9c3c
                    
                    if (i_34 == 0)
                        x12_1 = 0
                        x9_21 = "tRNS before PLTE"
                        goto label_ff9b28
                    
                    if (i_34 u>= x0_4)
                        if (x0_4 != 0)
                            void* x9_1 = *(x20 + 0xb8)
                            void* x8_7 = *(x20 + 0xc0)
                            int64_t i_3 = 0
                            
                            do
                                uint32_t x10_2
                                
                                if (x9_1 u< x8_7)
                                    *(x20 + 0xb8) = x9_1 + 1
                                    x10_2 = zx.d(*x9_1)
                                    x9_1 += 1
                                else
                                    x10_2 = x20[0xc]
                                    
                                    if (x10_2 != 0)
                                        int32_t x0_8 = (*(x20 + 0x10))(*(x20 + 0x28), &x20[0xe], 
                                            zx.q(x20[0xd]))
                                        
                                        if (x0_8 == 0)
                                            x10_2 = 0
                                            x20[0xc] = 0
                                            x20[0xe].b = 0
                                            x8_7 = x20 + 0x39
                                        else
                                            x10_2 = zx.d(x20[0xe].b)
                                            x8_7 = &x20[0xe] + sx.q(x0_8)
                                        
                                        x9_1 = x20 + 0x39
                                        *(x20 + 0xc0) = x8_7
                                        *(x20 + 0xb8) = x20 + 0x39
                                
                                int64_t x11_2 = i_3 & 0xfffffffc
                                i_3 += 4
                                var_1468[x11_2 | 3] = x10_2.b
                            while (zx.q(x0_4) << 2 != i_3)
                        
                        x28_1 = 0
                        x21_1 = 4
                        sub_ffc330(x20)
                        continue
                        continue
                
                x12_1 = 0
                x9_21 = "bad tRNS len"
                goto label_ff9b28
            
            if (x0_6 == 0x43674249)
                if ((x0_4 & 0x80000000) != 0)
                    *(x20 + 0xb8) = *(x20 + 0xc0)
                else if (*(x20 + 0x10) == 0)
                    *(x20 + 0xb8) += zx.q(x0_4)
                else
                    int64_t x9_9 = *(x20 + 0xc0)
                    int64_t x8_31 = *(x20 + 0xb8)
                    int32_t x10_7 = x9_9.d - x8_31.d
                    
                    if (x0_4 s<= x10_7)
                        *(x20 + 0xb8) = x8_31 + zx.q(x0_4)
                    else
                        int64_t x8_32 = *(x20 + 0x18)
                        int64_t x0_21 = *(x20 + 0x28)
                        *(x20 + 0xb8) = x9_9
                        x8_32(x0_21, zx.q(x0_4 - x10_7))
                
                var_149c_1 = 1
                sub_ffc330(x20)
            else if (x0_6 != 0x49444154)
                if (x0_6 == 0x49454e44)
                    if (x28_1 != 0)
                        goto label_ff9b1c
                    
                    x23 = var_14b0_1
                    
                    if (arg2 != 0)
                        goto label_ff9ca8
                    
                    int64_t x19_2 = arg1[1]
                    
                    if (x19_2 == 0)
                        x9_21 = "no IDAT"
                        x12_1 = 0
                        goto label_ff9b2c
                    
                    int32_t x10_31 = x20[1]
                    int32_t x22_3 = x10_31 + x20[2] * x10_31 * ((7 + x27[4].d * *x20) u>> 3)
                    char* x0_47 = malloc(sx.q(x22_3))
                    
                    if (x0_47 == 0)
                        goto label_ff9e08
                    
                    int64_t var_1068 = x19_2
                    int64_t var_1060_1 = x19_2 + sx.q(var_1484_1)
                    int64_t var_1048
                    
                    if (sub_fe1e9c(&var_1068, x0_47, x22_3, 1, var_149c_1 == 0 ? 1 : 0) == 0)
                        free(var_1048)
                    label_ff9e08:
                        x27[2] = 0
                        
                        if (*(x23 + 0x28) == x8)
                            return 0
                        
                        goto label_ffa16c
                    
                    x27[2] = var_1048
                    
                    if (var_1048 == 0)
                        break
                    
                    int32_t var_1050
                    int32_t x26_5 = var_1050 - var_1048.d
                    uint64_t x0_51
                    uint32_t x1_19
                    uint128_t v0_1
                    uint128_t v1_1
                    int128_t v2_1
                    x0_51, x1_19, v0_1, v1_1, v2_1 = free(x27[1])
                    x27[1] = 0
                    int32_t x8_97 = x20[2]
                    char var_14a0_2 = x21_1.b
                    bool z_1
                    
                    if (x8_97 + 1 == arg3)
                        z_1 = arg3 == 3
                    else
                        z_1 = true
                    
                    bool z_2
                    
                    if (not(z_1))
                        z_2 = (x21_1 & 0xff) == 0
                    else
                        z_2 = false
                    
                    bool z_3
                    
                    if (not(z_2))
                        z_3 = zx.d(var_14c4_1) == 0
                    else
                        z_3 = false
                    
                    int32_t x3_1
                    
                    if (not(z_3))
                        x3_1 = x8_97 + 1
                    else
                        x3_1 = x8_97
                    
                    x20[3] = x3_1
                    uint32_t* x21_4 = *x27
                    int32_t x6_1 = x27[4].d
                    char* x25_2 = x27[2]
                    uint32_t x4_2 = *x21_4
                    int32_t x5_1 = x21_4[1]
                    int32_t x8_98
                    
                    x8_98 = x6_1 == 0x10 ? 2 : 1
                    
                    if (var_14b8_1.d != 0)
                        int32_t x8_99 = x8_98 * x3_1
                        uint64_t var_14e0_1
                        
                        if (((x5_1 | x4_2) & 0x80000000) != 0)
                            var_14e0_1 = 0
                        else if (x5_1 == 0 || 0x7fffffff s/ x5_1 s>= x4_2)
                            int32_t x8_103 = x5_1 * x4_2
                            
                            if (((x8_103 | x8_99) & 0x80000000) != 0
                                    || (x8_99 != 0 && 0x7fffffff s/ x8_99 s< x8_103))
                                var_14e0_1 = 0
                            else
                                x0_51, x1_19, v0_1, v1_1, v2_1 = malloc(sx.q(x8_103 * x8_99))
                                var_14e0_1 = x0_51
                            
                            x27 = var_14a8_1
                        else
                            var_14e0_1 = 0
                        
                        int64_t x11_16 = 0
                        int64_t x28_6 = sx.q(x8_99)
                        int32_t var_14e8_1 = x6_1
                        int32_t var_14e4_1 = x3_1
                        
                        while (true)
                            int64_t x9_39 = x11_16 << 2
                            int64_t x22_5 = sx.q(*(&data_8686e4 + x9_39))
                            int64_t x24_2 = sx.q(*(&data_86871c + x9_39))
                            int32_t x8_108 = *x21_4 + not.d(x22_5.d) + x24_2.d
                            
                            if (x24_2.d u<= x8_108)
                                int32_t x15_1 = *(&data_868700 + x9_39)
                                int32_t x19_3 = *(&data_868738 + x9_39)
                                int32_t x9_42 = x21_4[1] + not.d(x15_1) + x19_3
                                
                                if (x19_3 u<= x9_42)
                                    int32_t x21_5 = x21_4[2]
                                    uint32_t x27_2 = x8_108 u/ x24_2.d
                                    uint32_t fp_2 = x9_42 u/ x19_3
                                    int32_t var_1498_1
                                    var_1498_1.q = x11_16
                                    int32_t x22_6 = x3_1
                                    
                                    if (sub_ffc52c(x27, x25_2, x26_5, x3_1, x27_2, fp_2, x6_1, 
                                            var_14b8_1:4.d) == 0)
                                        free(var_14e0_1)
                                        break
                                    
                                    int32_t x21_6 = (((7 + x27_2 * x6_1 * x21_5) s>> 3) + 1) * fp_2
                                    int32_t x19_5
                                    char* x25_4
                                    int64_t fp_3
                                    
                                    if (x27_2 s< 1 || fp_2 s<= 0)
                                        x27 = var_14a8_1
                                        x19_5 = x6_1
                                        x25_4 = x25_2
                                        fp_3 = x27[3]
                                    else
                                        var_14b8_1.d = x26_5
                                        int32_t* x26_7 = *var_14a8_1
                                        fp_3 = var_14a8_1[3]
                                        int64_t i_4 = 0
                                        uint64_t x27_3 = zx.q(x27_2)
                                        int32_t x21_7 = x8_99 * x15_1
                                        
                                        do
                                            int64_t x23_6 = var_14e0_1 + x28_6 * x22_5
                                            int64_t x22_7 = 0
                                            
                                            do
                                                memcpy(x23_6 + zx.q(x21_7 * *x26_7), 
                                                    fp_3 + (x22_7 + i_4 * x27_3) * x28_6, x28_6)
                                                x22_7 += 1
                                                x23_6 += x28_6 * x24_2
                                            while (x22_7 != x27_3)
                                            
                                            i_4 += 1
                                            x21_7 += x8_99 * x19_3
                                        while (i_4 != zx.q(fp_2))
                                        
                                        x27 = var_14a8_1
                                        x26_5 = var_14b8_1.d
                                        x19_5 = var_14e8_1
                                        x22_6 = var_14e4_1
                                        x25_4 = x25_2
                                    
                                    x0_51, x1_19, v0_1, v1_1, v2_1 = free(fp_3)
                                    x11_16 = var_1498_1.q
                                    x25_2 = &x25_4[zx.q(x21_6)]
                                    x26_5 -= x21_6
                                    x3_1 = x22_6
                                    x6_1 = x19_5
                            
                            x11_16 += 1
                            
                            if (x11_16 == 7)
                                x23 = var_14b0_1
                                x27[3] = var_14e0_1
                                goto label_ffa0d8
                            
                            x21_4 = *x27
                        
                        goto label_ffa158
                    
                    x0_51, x1_19, v0_1, v1_1, v2_1 =
                        sub_ffc52c(x27, x25_2, x26_5, x3_1, x4_2, x5_1, x6_1, var_14b8_1:4.d)
                    
                    if (x0_51.d == 0)
                        break
                    
                label_ffa0d8:
                    char x16_1 = var_14a0_2
                    void* x0_70
                    int32_t x1_28
                    int32_t x2_26
                    int32_t x3_5
                    int32_t x4_5
                    
                    if (zx.d(var_14c4_1) != 0)
                        if (x27[4].d != 0x10)
                            int32_t* x8_130 = *x27
                            int32_t x10_39 = x20[3]
                            void* x9_49 = x27[3]
                            int32_t x8_132 = x8_130[1] * *x8_130
                            
                            if (x10_39 == 2)
                                x23 = var_14b0_1
                                x27 = var_14a8_1
                                x16_1 = var_14a0_2
                                
                                if (x8_132 != 0)
                                    uint32_t x10_42 = zx.d(var_146c)
                                    uint64_t x11_21 = zx.q(x8_132 - 1)
                                    uint64_t x11_22
                                    
                                    if (x11_21.d u< 8)
                                        x11_22 = 0
                                    else
                                        int64_t x12_8
                                        
                                        if (x11_21.d u>= 0x10)
                                            int64_t x13_9 = x11_21 + 1
                                            int64_t x14_6
                                            
                                            if ((x13_9 & 0xf) == 0)
                                                x14_6 = 0x10
                                            else
                                                x14_6 = x13_9 & 0xf
                                            
                                            v0_1.b = x10_42.b
                                            v0_1:1.b = x10_42.b
                                            v0_1:2.b = x10_42.b
                                            v0_1:3.b = x10_42.b
                                            v0_1:4.b = x10_42.b
                                            v0_1:5.b = x10_42.b
                                            v0_1:6.b = x10_42.b
                                            v0_1:7.b = x10_42.b
                                            v0_1:8.b = x10_42.b
                                            v0_1:9.b = x10_42.b
                                            v0_1:0xa.b = x10_42.b
                                            v0_1:0xb.b = x10_42.b
                                            v0_1:0xc.b = x10_42.b
                                            v0_1:0xd.b = x10_42.b
                                            v0_1:0xe.b = x10_42.b
                                            v0_1:0xf.b = x10_42.b
                                            x12_8 = x13_9 - x14_6
                                            void* x15_6 = x9_49 + 0xf
                                            
                                            do
                                                v1_1.b = *(x15_6 - 0xf)
                                                v2_1.b = *(x15_6 - 0xe)
                                                v1_1:1.b = *(x15_6 - 0xd)
                                                v2_1:1.b = *(x15_6 - 0xc)
                                                v1_1:2.b = *(x15_6 - 0xb)
                                                v2_1:2.b = *(x15_6 - 0xa)
                                                v1_1:3.b = *(x15_6 - 9)
                                                v2_1:3.b = *(x15_6 - 8)
                                                v1_1:4.b = *(x15_6 - 7)
                                                v2_1:4.b = *(x15_6 - 6)
                                                v1_1:5.b = *(x15_6 - 5)
                                                v2_1:5.b = *(x15_6 - 4)
                                                v1_1:6.b = *(x15_6 - 3)
                                                v2_1:6.b = *(x15_6 - 2)
                                                v1_1:7.b = *(x15_6 - 1)
                                                v2_1:7.b = *x15_6
                                                v1_1:8.b = *(x15_6 + 1)
                                                v2_1:8.b = *(x15_6 + 2)
                                                v1_1:9.b = *(x15_6 + 3)
                                                v2_1:9.b = *(x15_6 + 4)
                                                v1_1:0xa.b = *(x15_6 + 5)
                                                v2_1:0xa.b = *(x15_6 + 6)
                                                v1_1:0xb.b = *(x15_6 + 7)
                                                v2_1:0xb.b = *(x15_6 + 8)
                                                v1_1:0xc.b = *(x15_6 + 9)
                                                v2_1:0xc.b = *(x15_6 + 0xa)
                                                v1_1:0xd.b = *(x15_6 + 0xb)
                                                v2_1:0xd.b = *(x15_6 + 0xc)
                                                v1_1:0xe.b = *(x15_6 + 0xd)
                                                v2_1:0xe.b = *(x15_6 + 0xe)
                                                v1_1:0xf.b = *(x15_6 + 0xf)
                                                v2_1:0xf.b = *(x15_6 + 0x10)
                                                x13_9 -= 0x10
                                                v1_1 = not.o(vceqq_u8(v1_1, v0_1))
                                                void* x6_2 = x15_6 + 2
                                                void* x7_3 = x15_6 + 4
                                                void* x19_6 = x15_6 + 6
                                                void* x21_8 = x15_6 + 8
                                                void* x22_8 = x15_6 + 0xa
                                                void* x23_8 = x15_6 + 0xc
                                                void* x24_4 = x15_6 + 0xe
                                                void* x16_4 = x15_6 + 0x10
                                                *(x15_6 - 0xe) = v1_1.b
                                                *(x15_6 - 0xc) = v1_1:1.b
                                                *(x15_6 - 0xa) = v1_1:2.b
                                                *(x15_6 - 8) = v1_1:3.b
                                                *(x15_6 - 6) = v1_1:4.b
                                                *(x15_6 - 4) = v1_1:5.b
                                                *(x15_6 - 2) = v1_1:6.b
                                                *x15_6 = v1_1:7.b
                                                x15_6 += 0x20
                                                *x6_2 = v1_1:8.b
                                                *x7_3 = v1_1:9.b
                                                *x19_6 = v1_1:0xa.b
                                                *x21_8 = v1_1:0xb.b
                                                *x22_8 = v1_1:0xc.b
                                                *x23_8 = v1_1:0xd.b
                                                *x24_4 = v1_1:0xe.b
                                                *x16_4 = v1_1:0xf.b
                                            while (x14_6 != x13_9)
                                            
                                            if (x14_6 u> 8)
                                                goto label_ffa5d8
                                            
                                            x9_49 += x12_8 << 1
                                            x11_22 = zx.q(x12_8.d)
                                        else
                                            x12_8 = 0
                                        label_ffa5d8:
                                            int64_t x14_7
                                            
                                            if (((x11_21 + 1) & 7) == 0)
                                                x14_7 = 8
                                            else
                                                x14_7 = (x11_21 + 1) & 7
                                            
                                            void* x16_5 = x9_49 + (x12_8 << 1)
                                            x11_22 = x11_21 + 1 - x14_7
                                            v0_1.b = x10_42.b
                                            v0_1:1.b = x10_42.b
                                            v0_1:2.b = x10_42.b
                                            v0_1:3.b = x10_42.b
                                            v0_1:4.b = x10_42.b
                                            v0_1:5.b = x10_42.b
                                            v0_1:6.b = x10_42.b
                                            v0_1:7.b = x10_42.b
                                            x9_49 += x11_22 << 1
                                            int64_t i_28 = not.q(x11_21) + x14_7 + x12_8
                                            void* x13_11 = x16_5 + 7
                                            int64_t i_5
                                            
                                            do
                                                v1_1.b = *(x13_11 - 7)
                                                v2_1.b = *(x13_11 - 6)
                                                v1_1:1.b = *(x13_11 - 5)
                                                v2_1:1.b = *(x13_11 - 4)
                                                v1_1:2.b = *(x13_11 - 3)
                                                v2_1:2.b = *(x13_11 - 2)
                                                v1_1:3.b = *(x13_11 - 1)
                                                v2_1:3.b = *x13_11
                                                v1_1:4.b = *(x13_11 + 1)
                                                v2_1:4.b = *(x13_11 + 2)
                                                v1_1:5.b = *(x13_11 + 3)
                                                v2_1:5.b = *(x13_11 + 4)
                                                v1_1:6.b = *(x13_11 + 5)
                                                v2_1:6.b = *(x13_11 + 6)
                                                v1_1:7.b = *(x13_11 + 7)
                                                v2_1:7.b = *(x13_11 + 8)
                                                v1_1 = not.o(vceq_u8(v1_1, v0_1))
                                                void* x0_65 = x13_11 + 2
                                                void* x1_27 = x13_11 + 4
                                                void* x14_9 = x13_11 + 6
                                                void* x2_25 = x13_11 + 8
                                                i_5 = i_28
                                                i_28 += 8
                                                *(x13_11 - 6) = v1_1.b
                                                *(x13_11 - 4) = v1_1:1.b
                                                *(x13_11 - 2) = v1_1:2.b
                                                *x13_11 = v1_1:3.b
                                                x13_11 += 0x10
                                                *x0_65 = v1_1:4.b
                                                *x1_27 = v1_1:5.b
                                                *x14_9 = v1_1:6.b
                                                *x2_25 = v1_1:7.b
                                            while (i_5 != -8)
                                    
                                    x23 = var_14b0_1
                                    x27 = var_14a8_1
                                    x16_1 = var_14a0_2
                                    int32_t i_22 = x8_132 - x11_22.d
                                    int32_t i_6
                                    
                                    do
                                        char x11_26
                                        
                                        if (zx.d(*x9_49) != x10_42)
                                            x11_26 = -1
                                        else
                                            x11_26 = 0
                                        
                                        i_6 = i_22
                                        i_22 -= 1
                                        *(x9_49 + 1) = x11_26
                                        x9_49 += 2
                                    while (i_6 != 1)
                            else
                                if (x10_39 != 4)
                                    goto label_ffaa44
                                
                                x23 = var_14b0_1
                                x27 = var_14a8_1
                                x16_1 = var_14a0_2
                                
                                if (x8_132 != 0)
                                    uint32_t x10_40 = zx.d(var_146c)
                                    char var_146b
                                    uint32_t x11_19 = zx.d(var_146b)
                                    char var_146a
                                    uint32_t x12_5 = zx.d(var_146a)
                                    uint64_t x13_2 = zx.q(x8_132 - 1)
                                    int64_t i_38
                                    void* x14_1
                                    
                                    if (x13_2.d u>= 2)
                                        i_38 = (x13_2 + 1) & 0x1fffffffe
                                        x14_1 = x9_49 + (i_38 << 2)
                                        void* x9_51 = x9_49 + 3
                                        int64_t i_32 = i_38
                                        int64_t i_7
                                        
                                        do
                                            uint32_t x17_8 = zx.d(*(x9_51 - 3))
                                            
                                            if (x17_8 == x10_40)
                                                x0_51 = zx.q(*(x9_51 - 2))
                                            
                                            uint32_t x2_22 = zx.d(*(x9_51 + 1))
                                            
                                            if (x2_22 == x10_40)
                                                x1_19 = zx.d(*(x9_51 + 2))
                                            
                                            uint32_t x2_23 = x2_22 == x10_40 ? 1 : 0
                                            int32_t x17_10 = (x11_19 == zx.d((x0_51.d).b) ? 1 : 0)
                                                & (x17_8 == x10_40 ? 1 : 0)
                                            int32_t x0_62 = x11_19 == zx.d(x1_19.b) ? 1 : 0
                                            
                                            if (x17_10 == 1)
                                                x1_19 = zx.d(*(x9_51 - 1))
                                            
                                            x0_51 = zx.q(x0_62) & zx.q(x2_23)
                                            
                                            if (x0_51.d != 0)
                                                x2_23 = zx.d(*(x9_51 + 3))
                                            
                                            x1_19 = (x12_5 != zx.d(x1_19.b) ? 1 : 0) | (x17_10 ^ 1)
                                            int32_t x17_12 = x12_5 == zx.d(x2_23.b) ? 1 : 0
                                            
                                            if ((x1_19 & 1) == 0)
                                                *x9_51 = 0
                                                
                                                if ((x17_12 & x0_51.d) != 0)
                                                    *(x9_51 + 4) = 0
                                            else if ((x17_12 & x0_51.d) != 0)
                                                *(x9_51 + 4) = 0
                                            
                                            i_7 = i_32
                                            i_32 -= 2
                                            x9_51 += 8
                                        while (i_7 != 2)
                                        x23 = var_14b0_1
                                        x27 = var_14a8_1
                                        x16_1 = var_14a0_2
                                        
                                        if (x13_2 + 1 != i_38)
                                            goto label_ffa4b0
                                    else
                                        x23 = var_14b0_1
                                        x27 = var_14a8_1
                                        x16_1 = var_14a0_2
                                        i_38 = 0
                                        x14_1 = x9_49
                                    label_ffa4b0:
                                        void* x9_52 = x14_1 + 3
                                        int32_t i_21 = x8_132 - i_38.d
                                        int32_t i_8
                                        
                                        do
                                            if (zx.d(*(x9_52 - 3)) == x10_40
                                                    && zx.d(*(x9_52 - 2)) == x11_19
                                                    && zx.d(*(x9_52 - 1)) == x12_5)
                                                *x9_52 = 0
                                            
                                            i_8 = i_21
                                            i_21 -= 1
                                            x9_52 += 4
                                        while (i_8 != 1)
                        else
                            int32_t* x8_126 = *x27
                            int32_t x9_46 = x20[3]
                            void* x15_2 = x27[3]
                            int32_t x8_128 = x8_126[1] * *x8_126
                            
                            if (x9_46 == 2)
                                x23 = var_14b0_1
                                x27 = var_14a8_1
                                x16_1 = var_14a0_2
                                
                                if (x8_128 != 0)
                                    uint32_t x9_50 = zx.d(var_1474)
                                    uint64_t x11_20 = zx.q(x8_128 - 1)
                                    int64_t x10_41
                                    
                                    if (x11_20.d u> 7)
                                        int64_t x12_6
                                        
                                        if (((x11_20 + 1) & 7) == 0)
                                            x12_6 = 8
                                        else
                                            x12_6 = (x11_20 + 1) & 7
                                        
                                        x10_41 = x11_20 + 1 - x12_6
                                        v0_1.w = x9_50.w
                                        v0_1:2.w = x9_50.w
                                        v0_1:4.w = x9_50.w
                                        v0_1:6.w = x9_50.w
                                        v0_1:8.w = x9_50.w
                                        v0_1:0xa.w = x9_50.w
                                        v0_1:0xc.w = x9_50.w
                                        v0_1:0xe.w = x9_50.w
                                        int64_t i_27 = x11_20 - x12_6 + 1
                                        void* x13_4 = x15_2 + 0x12
                                        int64_t i_9
                                        
                                        do
                                            v1_1.w = *(x13_4 - 0x12)
                                            v2_1.w = *(x13_4 - 0x10)
                                            v1_1:2.w = *(x13_4 - 0xe)
                                            v2_1:2.w = *(x13_4 - 0xc)
                                            v1_1:4.w = *(x13_4 - 0xa)
                                            v2_1:4.w = *(x13_4 - 8)
                                            v1_1:6.w = *(x13_4 - 6)
                                            v2_1:6.w = *(x13_4 - 4)
                                            v1_1:8.w = *(x13_4 - 2)
                                            v2_1:8.w = *x13_4
                                            v1_1:0xa.w = *(x13_4 + 2)
                                            v2_1:0xa.w = *(x13_4 + 4)
                                            v1_1:0xc.w = *(x13_4 + 6)
                                            v2_1:0xc.w = *(x13_4 + 8)
                                            v1_1:0xe.w = *(x13_4 + 0xa)
                                            v2_1:0xe.w = *(x13_4 + 0xc)
                                            v1_1 = not.o(vceqq_u16(v1_1, v0_1))
                                            void* x0_63 = x13_4 + 4
                                            void* x14_4 = x13_4 + 8
                                            void* x1_25 = x13_4 + 0xc
                                            i_9 = i_27
                                            i_27 -= 8
                                            *(x13_4 - 0x10) = v1_1.w
                                            *(x13_4 - 0xc) = v1_1:2.w
                                            *(x13_4 - 8) = v1_1:4.w
                                            *(x13_4 - 4) = v1_1:6.w
                                            *x13_4 = v1_1:8.w
                                            x13_4 += 0x20
                                            *x0_63 = v1_1:0xa.w
                                            *x14_4 = v1_1:0xc.w
                                            *x1_25 = v1_1:0xe.w
                                        while (i_9 != 8)
                                        x15_2 += x10_41 << 2
                                    else
                                        x10_41 = 0
                                    
                                    x23 = var_14b0_1
                                    x27 = var_14a8_1
                                    x16_1 = var_14a0_2
                                    int32_t i_19 = x8_128 - x10_41.d
                                    int32_t i_10
                                    
                                    do
                                        int16_t x10_45
                                        
                                        if (zx.d(*x15_2) != x9_50)
                                            x10_45 = -1
                                        else
                                            x10_45 = 0
                                        
                                        i_10 = i_19
                                        i_19 -= 1
                                        *(x15_2 + 2) = x10_45
                                        x15_2 += 4
                                    while (i_10 != 1)
                            else
                                if (x9_46 != 4)
                                    __assert2(
                                        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\s"
                                    "tb/stb_image.h", 
                                        0x120b, 
                                        "int stbi__compute_transparency16(stbi__png *, stbi__uint16 *, "
                                    "int)", 
                                        "out_n == 2 || out_n == 4")
                                label_ffaa44:
                                    __assert2(
                                        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\s"
                                    "tb/stb_image.h", 
                                        0x11f2, 
                                        "int stbi__compute_transparency(stbi__png *, stbi_uc *, int)", 
                                        "out_n == 2 || out_n == 4")
                                    x0_70, x1_28, x2_26, x3_5, x4_5 = __assert2(
                                        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\s"
                                    "tb/stb_image.h", 
                                        0x125c, "void stbi__de_iphone(stbi__png *)", 
                                        "s->img_out_n == 4")
                                    return sub_ffaa68(x0_70, x1_28, x2_26, x3_5, x4_5) __tailcall
                                
                                x23 = var_14b0_1
                                x27 = var_14a8_1
                                x16_1 = var_14a0_2
                                
                                if (x8_128 != 0)
                                    uint32_t x9_47 = zx.d(var_1474)
                                    int16_t var_1472
                                    uint32_t x10_38 = zx.d(var_1472)
                                    int16_t var_1470
                                    uint32_t x11_17 = zx.d(var_1470)
                                    uint64_t x12_4 = zx.q(x8_128 - 1)
                                    int64_t i_37
                                    void* x13_1
                                    
                                    if (x12_4.d u>= 2)
                                        i_37 = (x12_4 + 1) & 0x1fffffffe
                                        x13_1 = x15_2 + (i_37 << 3)
                                        void* x15_3 = x15_2 + 8
                                        int64_t i_31 = i_37
                                        int64_t i_11
                                        
                                        do
                                            uint32_t x17_1 = zx.d(*(x15_3 - 8))
                                            
                                            if (x17_1 == x9_47)
                                                x0_51 = zx.q(*(x15_3 - 6))
                                            
                                            uint32_t x2_20 = zx.d(*x15_3)
                                            
                                            if (x2_20 == x9_47)
                                                x1_19 = zx.d(*(x15_3 + 2))
                                            
                                            uint32_t x2_21 = x2_20 == x9_47 ? 1 : 0
                                            int32_t x17_3 = (x10_38 == zx.d((x0_51.d).w) ? 1 : 0)
                                                & (x17_1 == x9_47 ? 1 : 0)
                                            int32_t x0_61 = x10_38 == zx.d(x1_19.w) ? 1 : 0
                                            
                                            if (x17_3 == 1)
                                                x1_19 = zx.d(*(x15_3 - 4))
                                            
                                            x0_51 = zx.q(x0_61) & zx.q(x2_21)
                                            
                                            if (x0_51.d != 0)
                                                x2_21 = zx.d(*(x15_3 + 4))
                                            
                                            x1_19 = (x11_17 != zx.d(x1_19.w) ? 1 : 0) | (x17_3 ^ 1)
                                            int32_t x17_5 = x11_17 == zx.d(x2_21.w) ? 1 : 0
                                            
                                            if ((x1_19 & 1) == 0)
                                                *(x15_3 - 2) = 0
                                                
                                                if ((x17_5 & x0_51.d) != 0)
                                                    *(x15_3 + 6) = 0
                                            else if ((x17_5 & x0_51.d) != 0)
                                                *(x15_3 + 6) = 0
                                            
                                            i_11 = i_31
                                            i_31 -= 2
                                            x15_3 += 0x10
                                        while (i_11 != 2)
                                        x23 = var_14b0_1
                                        x27 = var_14a8_1
                                        x16_1 = var_14a0_2
                                        
                                        if (x12_4 + 1 != i_37)
                                            goto label_ffa45c
                                    else
                                        x23 = var_14b0_1
                                        x27 = var_14a8_1
                                        x16_1 = var_14a0_2
                                        i_37 = 0
                                        x13_1 = x15_2
                                    label_ffa45c:
                                        int16_t* x13_5 = x13_1 + 4
                                        int32_t i_20 = x8_128 - i_37.d
                                        int32_t i_12
                                        
                                        do
                                            if (zx.d(x13_5[-2]) == x9_47
                                                    && zx.d(x13_5[-1]) == x10_38
                                                    && zx.d(*x13_5) == x11_17)
                                                x13_5[1] = 0
                                            
                                            i_12 = i_20
                                            i_20 -= 1
                                            x13_5 = &x13_5[4]
                                        while (i_12 != 1)
                    
                    if (var_149c_1 != 0 && data_2423718 != 0 && x20[3] s>= 3)
                        int32_t* x8_136 = *x27
                        void* x9_53 = x27[3]
                        int32_t x10_46 = x8_136[3]
                        int32_t x8_138 = x8_136[1] * *x8_136
                        
                        if (x10_46 != 4)
                            if (x10_46 != 3)
                                x0_70, x1_28, x2_26, x3_5, x4_5 = __assert2(
                                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\s"
                                "tb/stb_image.h", 
                                    0x125c, "void stbi__de_iphone(stbi__png *)", 
                                    "s->img_out_n == 4")
                                return sub_ffaa68(x0_70, x1_28, x2_26, x3_5, x4_5) __tailcall
                            
                            x23 = var_14b0_1
                            x27 = var_14a8_1
                            x16_1 = var_14a0_2
                            
                            if (x8_138 != 0)
                                void* x10_49
                                int64_t i_35
                                
                                if (x8_138 == 1)
                                    x23 = var_14b0_1
                                    x27 = var_14a8_1
                                    x16_1 = var_14a0_2
                                    i_35 = 0
                                    x10_49 = x9_53
                                label_ffa80c:
                                    int32_t i_23 = x8_138 - i_35.d
                                    int32_t i_13
                                    
                                    do
                                        char x11_33 = *x10_49
                                        i_13 = i_23
                                        i_23 -= 1
                                        *x10_49 = *(x10_49 + 2)
                                        *(x10_49 + 2) = x11_33
                                        x10_49 += 3
                                    while (i_13 != 1)
                                else
                                    i_35 = (zx.q(x8_138 - 1) + 1) & 0x1fffffffe
                                    x10_49 = x9_53 + i_35 * 3
                                    char* x9_54 = x9_53 + 2
                                    int64_t i_29 = i_35
                                    int64_t i_14
                                    
                                    do
                                        char x14_10 = x9_54[-2]
                                        char x16_7 = x9_54[3]
                                        char x17_18 = x9_54[1]
                                        i_14 = i_29
                                        i_29 -= 2
                                        x9_54[-2] = *x9_54
                                        x9_54[1] = x16_7
                                        *x9_54 = x14_10
                                        x9_54[3] = x17_18
                                        x9_54 = &x9_54[6]
                                    while (i_14 != 2)
                                    x23 = var_14b0_1
                                    x27 = var_14a8_1
                                    x16_1 = var_14a0_2
                                    
                                    if (zx.q(x8_138 - 1) + 1 != i_35)
                                        goto label_ffa80c
                        else if (data_2423714 == 0)
                            x23 = var_14b0_1
                            x27 = var_14a8_1
                            x16_1 = var_14a0_2
                            
                            if (x8_138 != 0)
                                uint64_t x10_54 = zx.q(x8_138 - 1)
                                void* x10_55
                                int64_t i_36
                                
                                if (x10_54.d u>= 2)
                                    i_36 = (x10_54 + 1) & 0x1fffffffe
                                    x10_55 = x9_53 + (i_36 << 2)
                                    void* x9_57 = x9_53 + 4
                                    int64_t i_30 = i_36
                                    int64_t i_15
                                    
                                    do
                                        char x14_15 = *(x9_57 - 4)
                                        char x16_8 = *(x9_57 + 2)
                                        char x17_19 = *x9_57
                                        i_15 = i_30
                                        i_30 -= 2
                                        *(x9_57 - 4) = *(x9_57 - 2)
                                        *x9_57 = x16_8
                                        *(x9_57 - 2) = x14_15
                                        *(x9_57 + 2) = x17_19
                                        x9_57 += 8
                                    while (i_15 != 2)
                                    x23 = var_14b0_1
                                    x27 = var_14a8_1
                                    x16_1 = var_14a0_2
                                    
                                    if (x10_54 + 1 != i_36)
                                        goto label_ffa880
                                else
                                    x23 = var_14b0_1
                                    x27 = var_14a8_1
                                    x16_1 = var_14a0_2
                                    i_36 = 0
                                    x10_55 = x9_53
                                label_ffa880:
                                    int32_t i_24 = x8_138 - i_36.d
                                    int32_t i_16
                                    
                                    do
                                        char x11_34 = *x10_55
                                        i_16 = i_24
                                        i_24 -= 1
                                        *x10_55 = *(x10_55 + 2)
                                        *(x10_55 + 2) = x11_34
                                        x10_55 += 4
                                    while (i_16 != 1)
                        else
                            x23 = var_14b0_1
                            x27 = var_14a8_1
                            x16_1 = var_14a0_2
                            
                            if (x8_138 != 0)
                                void* x9_55 = x9_53 + 1
                                
                                while (true)
                                    uint32_t x10_52 = zx.d(*(x9_55 + 2))
                                    uint32_t x11_28 = zx.d(*(x9_55 - 1))
                                    
                                    if (x10_52 == 0)
                                        char x10_51 = *(x9_55 + 1)
                                        *(x9_55 + 1) = x11_28.b
                                        *(x9_55 - 1) = x10_51
                                        int32_t temp3_1 = x8_138
                                        x8_138 -= 1
                                        x9_55 += 4
                                        
                                        if (temp3_1 == 1)
                                            break
                                    else
                                        uint32_t x12_14 = zx.d(*(x9_55 + 1))
                                        uint32_t x13_12 = zx.d(*x9_55)
                                        uint16_t x14_14 = (x10_52 u>> 1).w
                                        *(x9_55 - 1) =
                                            (zx.d((x12_14 << 8).w - x12_14.w + x14_14) u/ x10_52).b
                                        *x9_55 =
                                            (zx.d((x13_12 << 8).w - x13_12.w + x14_14) u/ x10_52).b
                                        *(x9_55 + 1) =
                                            (zx.d((x11_28 << 8).w - x11_28.w + x14_14) u/ x10_52).b
                                        int32_t temp4_1 = x8_138
                                        x8_138 -= 1
                                        x9_55 += 4
                                        
                                        if (temp4_1 == 1)
                                            break
                    
                    if (zx.d(x16_1) == 0)
                        if (zx.d(var_14c4_1) != 0)
                            x20[2] += 1
                        
                        goto label_ffa9fc
                    
                    uint32_t x8_139 = zx.d(x16_1)
                    uint32_t x21_9
                    
                    x21_9 = arg3 s> 2 ? arg3 : x8_139
                    
                    x20[2] = x8_139
                    x20[3] = x21_9
                    int32_t* x8_140 = *x27
                    int32_t i_39 = x8_140[1] * *x8_140
                    
                    if (((i_39 | x21_9) & 0x80000000) != 0)
                    label_ffa960:
                        x9_21 = "outofmem"
                        x12_1 = 0
                        goto label_ff9b2c
                    
                    char* x20_1 = x27[3]
                    
                    if (x21_9 != 0 && 0x7fffffff s/ x21_9 s< i_39)
                        goto label_ffa960
                    
                    char* x0_67 = malloc(sx.q(i_39 * x21_9))
                    
                    if (x0_67 == 0)
                        goto label_ffa960
                    
                    if (x21_9 != 3)
                        if (i_39 != 0)
                            uint64_t i_26 = zx.q(i_39)
                            char* x10_57 = x20_1
                            char* x11_36 = x0_67
                            uint64_t i_17
                            
                            do
                                uint64_t x12_22 = zx.q(*x10_57)
                                x10_57 = &x10_57[1]
                                char x12_23 = var_1468[1 | (0xff & x12_22) << 2]
                                char x13_19 = var_1468[2 | (0xff & x12_22) << 2]
                                char x14_19 = var_1468[3 | (0xff & x12_22) << 2]
                                *x11_36 = var_1468[x12_22 << 2]
                                x11_36[1] = x12_23
                                i_17 = i_26
                                i_26 -= 1
                                x11_36[2] = x13_19
                                x11_36[3] = x14_19
                                x11_36 = &x11_36[4]
                            while (i_17 != 1)
                    else if (i_39 != 0)
                        uint64_t i_25 = zx.q(i_39)
                        char* x10_56 = x20_1
                        char* x11_35 = x0_67
                        uint64_t i_18
                        
                        do
                            uint64_t x12_20 = zx.q(*x10_56)
                            x10_56 = &x10_56[1]
                            i_18 = i_25
                            i_25 -= 1
                            char x13_17 = var_1468[1 | (0xff & x12_20) << 2]
                            char x14_17 = var_1468[2 | (0xff & x12_20) << 2]
                            *x11_35 = var_1468[x12_20 << 2]
                            x11_35[1] = x13_17
                            x11_35[2] = x14_17
                            x11_35 = &x11_35[3]
                        while (i_18 != 1)
                    
                    free(x20_1)
                    x23 = var_14b0_1
                    x27 = var_14a8_1
                    x27[3] = x0_67
                label_ffa9fc:
                    free(x27[2])
                    x27[2] = 0
                label_ff9ca8:
                    
                    if (*(x23 + 0x28) == x8)
                        return 1
                    
                    goto label_ffa16c
                
            label_ff9448:
                
                if (x28_1 != 0)
                    goto label_ff9b1c
                
                if ((x0_6 & 0x20000000) == 0)
                    (*"XXXX PNG chunk not known")[0].d = _byteswap(x0_6)
                    data_2423720 = "XXXX PNG chunk not known"
                    
                    if (*(var_14b0_1 + 0x28) == x8)
                        return 0
                    
                    goto label_ffa16c
                
                if ((x0_4 & 0x80000000) != 0)
                    x28_1 = 0
                    *(x20 + 0xb8) = *(x20 + 0xc0)
                    sub_ffc330(x20)
                else
                    int64_t x8_34
                    
                    if (*(x20 + 0x10) == 0)
                        x8_34 = *(x20 + 0xb8)
                    else
                        int64_t x9_10 = *(x20 + 0xc0)
                        x8_34 = *(x20 + 0xb8)
                        int32_t x10_8 = x9_10.d - x8_34.d
                        
                        if (x0_4 s> x10_8)
                            int64_t x8_35 = *(x20 + 0x18)
                            int64_t x0_22 = *(x20 + 0x28)
                            *(x20 + 0xb8) = x9_10
                            x8_35(x0_22, zx.q(x0_4 - x10_8))
                        label_ff9008:
                            x28_1 = 0
                            sub_ffc330(x20)
                            continue
                            continue
                    
                    x28_1 = 0
                    *(x20 + 0xb8) = x8_34 + zx.q(x0_4)
                    sub_ffc330(x20)
            else
                if (x28_1 != 0)
                label_ff9b1c:
                    x12_1 = 0
                    x9_21 = "first not IHDR"
                    goto label_ff9b28
                
                if (i_34 == 0 && (x21_1 & 0xff) != 0)
                    x12_1 = 0
                    x9_21 = "no PLTE"
                    goto label_ff9b28
                
                if (arg2 == 2)
                    x8_85 = x21_1 & 0xff
                label_ff9c3c:
                    x20[2] = x8_85
                label_ff9c44:
                    
                    if (*(var_14b0_1 + 0x28) == x8)
                        return 1
                    
                    goto label_ffa16c
                
                int32_t x27_1 = x0_4 + var_1484_1
                
                if (x27_1 s< var_1484_1)
                label_ffa158:
                    
                    if (*(var_14b0_1 + 0x28) == x8)
                        return 0
                    
                    goto label_ffa16c
                
                int64_t x21_2
                
                if (x27_1 u> x22_2)
                    int32_t x8_13
                    
                    x8_13 = x0_4 u> 0x1000 ? x0_4 : 0x1000
                    
                    int32_t x8_14
                    
                    x8_14 = x22_2 == 0 ? x8_13 : x22_2
                    
                    bool cond:8_1
                    
                    do
                        x22_2 = x8_14
                        cond:8_1 = x27_1 u> x8_14
                        x8_14 <<= 1
                    while (cond:8_1)
                    int64_t x0_10 = realloc(arg1[1], zx.q(x22_2))
                    
                    if (x0_10 == 0)
                        x12_1 = 0
                        x9_21 = "outofmem"
                        goto label_ff9b28
                    
                    arg1[1] = x0_10
                    x21_2 = x0_10 + zx.q(var_1484_1)
                    
                    if (*(x20 + 0x10) != 0)
                        goto label_ff94cc
                    
                    goto label_ff91e4
                
                x21_2 = arg1[1] + zx.q(var_1484_1)
                int64_t x1_8
                int64_t x8_16
                
                if (*(x20 + 0x10) == 0)
                label_ff91e4:
                    x1_8 = *(x20 + 0xb8)
                    x8_16 = *(x20 + 0xc0)
                label_ff951c:
                    int64_t x26_4 = sx.q(x0_4)
                    
                    if (x1_8 + x26_4 u> x8_16)
                    label_ff9bec:
                        x12_1 = 0
                        x9_21 = "outofdata"
                        goto label_ff9b28
                    
                    memcpy(x21_2, x1_8, x26_4)
                    x28_1 = 0
                    *(x20 + 0xb8) += x26_4
                else
                label_ff94cc:
                    x8_16 = *(x20 + 0xc0)
                    x1_8 = *(x20 + 0xb8)
                    int32_t x9_14 = x8_16.d - x1_8.d
                    int32_t x28_4 = x0_4 - x9_14
                    
                    if (x0_4 s<= x9_14)
                        goto label_ff951c
                    
                    int64_t x26_3 = sx.q(x9_14)
                    memcpy(x21_2, x1_8, x26_3)
                    int32_t x0_28 = (*(x20 + 0x10))(*(x20 + 0x28), x21_2 + x26_3, zx.q(x28_4))
                    *(x20 + 0xb8) = *(x20 + 0xc0)
                    
                    if (x0_28 != x28_4)
                        goto label_ff9bec
                    
                    x28_1 = 0
                var_1484_1 = x27_1
                x27 = var_14a8_1
                sub_ffc330(x20)
        
        x12_1 = 0

if (*(x23 + 0x28) == x8)
    return zx.q(x12_1)

label_ffa16c:
__stack_chk_fail()
noreturn
