// 函数: sub_fe30fc
// 地址: 0xfe30fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int64_t* x0 = malloc(0x4888)
int64_t* x23 = x0
*x0 = arg1
int32_t x0_1
int128_t v0
x0_1, v0 = sub_ff1908(x0, 2)

if (x0_1 != 0)
    if (arg2 != 0)
        *arg2 = **x23
    
    if (arg3 != 0)
        *arg3 = *(*x23 + 4)
    
    if (arg4 != 0)
        int32_t x8_7
        
        if (*(*x23 + 8) s>= 3)
            x8_7 = 3
        else
            x8_7 = 1
        
        *arg4 = x8_7
    
    goto label_fe3190

void* x8_9 = *x23
*(x8_9 + 0xb8) = *(x8_9 + 0xc8)
free(x23)
int32_t* var_468 = arg1
int32_t x0_6
int128_t v0_1
x0_6, v0_1 = sub_ff8f48(&var_468, 2, 0)

if (x0_6 != 0)
    if (arg2 != 0)
        *arg2 = *var_468
    
    if (arg3 != 0)
        *arg3 = var_468[1]
    
    if (arg4 == 0)
        goto label_fe3194
    
    *arg4 = var_468[2]
    goto label_fe3194

int32_t* x8_16 = var_468
*(x8_16 + 0xb8) = *(x8_16 + 0xc8)
x23 = malloc(0x8870)

if (sub_1000808(arg1, x23, arg4, 1) == 0)
    free(x23)
    *(arg1 + 0xb8) = *(arg1 + 0xc8)
    int32_t var_44c_1 = 0xff
    int64_t x0_12
    int128_t v0_3
    x0_12, v0_3 = sub_ffec34(arg1, &var_468)
    *(arg1 + 0xb8) = *(arg1 + 0xc8)
    uint32_t x8_15
    
    if (x0_12 != 0)
        if (arg2 != 0)
            *arg2 = *arg1
        
        if (arg3 != 0)
            *arg3 = arg1[1]
        
        if (arg4 == 0)
            goto label_fe3194
        
        int32_t var_450
        
        x8_15 = var_450 != 0 ? 4 : 3
        
        *arg4 = x8_15
        goto label_fe3194
    
    void** x26_1
    
    x26_1 = arg2 == 0 ? &var_468 : arg2
    
    void** x27_1
    
    x27_1 = arg3 == 0 ? &var_468 : arg3
    
    void** x23_1
    
    x23_1 = arg4 == 0 ? &var_468 : arg4
    
    int32_t x0_14
    int128_t v0_4
    x0_14, v0_4 = sub_ffc330(arg1)
    
    if (x0_14 == 0x38425053)
        char* x9_2 = *(arg1 + 0xb8)
        void* x8_22 = *(arg1 + 0xc0)
        char x25_1
        
        if (x9_2 u< x8_22)
            *(arg1 + 0xb8) = &x9_2[1]
            x25_1 = *x9_2
            x9_2 = &x9_2[1]
        else if (arg1[0xc] == 0)
            x25_1 = 0
        else
            int32_t x0_16
            x0_16, v0_4 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
            
            if (x0_16 == 0)
                x25_1 = 0
                arg1[0xc] = 0
                x8_22 = arg1 + 0x39
                arg1[0xe].b = 0
            else
                x25_1 = arg1[0xe].b
                x8_22 = &arg1[0xe] + sx.q(x0_16)
            
            x9_2 = arg1 + 0x39
            *(arg1 + 0xb8) = x9_2
            *(arg1 + 0xc0) = x8_22
        
        uint32_t x10_3
        
        if (x9_2 u>= x8_22)
            x10_3 = arg1[0xc]
            
            if (x10_3 != 0)
                int32_t x0_18
                x0_18, v0_4 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                
                if (x0_18 == 0)
                    x10_3 = 0
                    arg1[0xc] = 0
                    x8_22 = arg1 + 0x39
                    arg1[0xe].b = 0
                else
                    x10_3 = zx.d(arg1[0xe].b)
                    x8_22 = &arg1[0xe + sx.q(x0_18)]
                
                x9_2 = arg1 + 0x39
                *(arg1 + 0xb8) = x9_2
                *(arg1 + 0xc0) = x8_22
        else
            *(arg1 + 0xb8) = &x9_2[1]
            x10_3 = zx.d(*x9_2)
            x9_2 = &x9_2[1]
        
        if (((0xffff00ff & x10_3) | zx.d(x25_1) << 8) == 1)
            int32_t x10_6
            
            if (*(arg1 + 0x10) != 0)
                x10_6 = x8_22.d - x9_2.d
            
            void* x9_4
            
            if (*(arg1 + 0x10) == 0 || x10_6 s> 5)
                x9_4 = &x9_2[6]
                *(arg1 + 0xb8) = x9_4
            else
                int64_t x9_3 = *(arg1 + 0x18)
                int64_t x0_19 = *(arg1 + 0x28)
                *(arg1 + 0xb8) = x8_22
                x9_3(x0_19, zx.q(6 - x10_6))
                x9_4 = *(arg1 + 0xb8)
                x8_22 = *(arg1 + 0xc0)
            
            char x25_2
            
            if (x9_4 u< x8_22)
                *(arg1 + 0xb8) = x9_4 + 1
                x25_2 = *x9_4
                x9_4 += 1
            else if (arg1[0xc] == 0)
                x25_2 = 0
            else
                int32_t x0_21
                x0_21, v0_4 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                
                if (x0_21 == 0)
                    x25_2 = 0
                    arg1[0xc] = 0
                    x8_22 = arg1 + 0x39
                    arg1[0xe].b = 0
                else
                    x25_2 = arg1[0xe].b
                    x8_22 = &arg1[0xe] + sx.q(x0_21)
                
                x9_4 = arg1 + 0x39
                *(arg1 + 0xb8) = x9_4
                *(arg1 + 0xc0) = x8_22
            
            uint32_t x8_33
            
            if (x9_4 u>= x8_22)
                x8_33 = arg1[0xc]
                
                if (x8_33 != 0)
                    int32_t x0_23
                    x0_23, v0_4 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                    void* x9_7
                    
                    if (x0_23 == 0)
                        x8_33 = 0
                        arg1[0xc] = 0
                        x9_7 = arg1 + 0x39
                        arg1[0xe].b = 0
                    else
                        x8_33 = zx.d(arg1[0xe].b)
                        x9_7 = &arg1[0xe + sx.q(x0_23)]
                    
                    *(arg1 + 0xb8) = arg1 + 0x39
                    *(arg1 + 0xc0) = x9_7
            else
                *(arg1 + 0xb8) = x9_4 + 1
                x8_33 = zx.d(*x9_4)
            
            if (((0xffff00ff & x8_33) | zx.d(x25_2) << 8) u<= 0x10)
                *x27_1 = sub_ffc330(arg1)
                int32_t x0_27
                x0_27, v0_4 = sub_ffc330(arg1)
                *x26_1 = x0_27
                char* x9_8 = *(arg1 + 0xb8)
                void* x8_36 = *(arg1 + 0xc0)
                char x25_3
                
                if (x9_8 u< x8_36)
                    *(arg1 + 0xb8) = &x9_8[1]
                    x25_3 = *x9_8
                    x9_8 = &x9_8[1]
                else if (arg1[0xc] == 0)
                    x25_3 = 0
                else
                    int32_t x0_29
                    x0_29, v0_4 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                    
                    if (x0_29 == 0)
                        x25_3 = 0
                        arg1[0xc] = 0
                        x8_36 = arg1 + 0x39
                        arg1[0xe].b = 0
                    else
                        x25_3 = arg1[0xe].b
                        x8_36 = &arg1[0xe] + sx.q(x0_29)
                    
                    x9_8 = arg1 + 0x39
                    *(arg1 + 0xb8) = x9_8
                    *(arg1 + 0xc0) = x8_36
                
                uint32_t x10_12
                
                if (x9_8 u>= x8_36)
                    x10_12 = arg1[0xc]
                    
                    if (x10_12 != 0)
                        int32_t x0_31
                        x0_31, v0_4 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                        
                        if (x0_31 == 0)
                            x10_12 = 0
                            arg1[0xc] = 0
                            x8_36 = arg1 + 0x39
                            arg1[0xe].b = 0
                        else
                            x10_12 = zx.d(arg1[0xe].b)
                            x8_36 = &arg1[0xe + sx.q(x0_31)]
                        
                        x9_8 = arg1 + 0x39
                        *(arg1 + 0xb8) = x9_8
                        *(arg1 + 0xc0) = x8_36
                else
                    *(arg1 + 0xb8) = &x9_8[1]
                    x10_12 = zx.d(*x9_8)
                    x9_8 = &x9_8[1]
                
                int32_t x10_13 = (0xffff00ff & x10_12) | zx.d(x25_3) << 8
                
                if (x10_13 == 0x10 || x10_13 == 8)
                    char x25_4
                    
                    if (x9_8 u< x8_36)
                        *(arg1 + 0xb8) = &x9_8[1]
                        x25_4 = *x9_8
                        x9_8 = &x9_8[1]
                    else if (arg1[0xc] == 0)
                        x25_4 = 0
                    else
                        int32_t x0_33
                        x0_33, v0_4 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                        
                        if (x0_33 == 0)
                            x25_4 = 0
                            arg1[0xc] = 0
                            x8_36 = arg1 + 0x39
                            arg1[0xe].b = 0
                        else
                            x25_4 = arg1[0xe].b
                            x8_36 = &arg1[0xe] + sx.q(x0_33)
                        
                        x9_8 = arg1 + 0x39
                        *(arg1 + 0xb8) = x9_8
                        *(arg1 + 0xc0) = x8_36
                    
                    uint32_t x8_47
                    
                    if (x9_8 u>= x8_36)
                        x8_47 = arg1[0xc]
                        
                        if (x8_47 != 0)
                            int32_t x0_35
                            x0_35, v0_4 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                            void* x9_11
                            
                            if (x0_35 == 0)
                                x8_47 = 0
                                arg1[0xc] = 0
                                x9_11 = arg1 + 0x39
                                arg1[0xe].b = 0
                            else
                                x8_47 = zx.d(arg1[0xe].b)
                                x9_11 = &arg1[0xe + sx.q(x0_35)]
                            
                            *(arg1 + 0xb8) = arg1 + 0x39
                            *(arg1 + 0xc0) = x9_11
                    else
                        *(arg1 + 0xb8) = &x9_8[1]
                        x8_47 = zx.d(*x9_8)
                    
                    if (((0xffff00ff & x8_47) | zx.d(x25_4) << 8) == 3)
                        *x23_1 = 4
                        goto label_fe3194
    
    void** x27_2
    
    x27_2 = arg2 == 0 ? &var_468 : arg2
    
    void** x23_2
    
    x23_2 = arg3 == 0 ? &var_468 : arg3
    
    void** x8_50
    
    x8_50 = arg4 == 0 ? &var_468 : arg4
    
    *(arg1 + 0xb8) = *(arg1 + 0xc8)
    int32_t x0_37
    int128_t v0_5
    x0_37, v0_5 = sub_10010b8(arg1, "S")
    
    if (x0_37 == 0)
    labelid_eb:
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
    else
        char* x8_54
        void* x26_2
        
        if (*(arg1 + 0x10) == 0)
            x26_2 = &arg1[0x2e]
            x8_54 = *x26_2 + 0x58
            *x26_2 = x8_54
        else
            void* x8_52 = *(arg1 + 0xb8)
            int64_t x9_12 = *(arg1 + 0xc0)
            x26_2 = &arg1[0x2e]
            int32_t x10_17 = x9_12.d - x8_52.d
            
            if (x10_17 s> 0x57)
                x8_54 = x8_52 + 0x58
                *x26_2 = x8_54
            else
                int64_t x8_53 = *(arg1 + 0x18)
                int64_t x0_38 = *(arg1 + 0x28)
                *(arg1 + 0xb8) = x9_12
                x8_53(x0_38, zx.q(0x58 - x10_17))
                x8_54 = *(arg1 + 0xb8)
        
        void* x9_13 = *(arg1 + 0xc0)
        char x25_5
        
        if (x8_54 u< x9_13)
            *x26_2 = &x8_54[1]
            x25_5 = *x8_54
            x8_54 = &x8_54[1]
        else if (arg1[0xc] == 0)
            x25_5 = 0
        else
            int32_t x0_40
            x0_40, v0_5 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
            
            if (x0_40 == 0)
                x25_5 = 0
                arg1[0xc] = 0
                x9_13 = arg1 + 0x39
                arg1[0xe].b = 0
            else
                x25_5 = arg1[0xe].b
                x9_13 = &arg1[0xe] + sx.q(x0_40)
            
            x8_54 = arg1 + 0x39
            *(arg1 + 0xb8) = x8_54
            *(arg1 + 0xc0) = x9_13
        
        uint32_t x8_58
        
        if (x8_54 u>= x9_13)
            x8_58 = arg1[0xc]
            
            if (x8_58 != 0)
                int32_t x0_42
                x0_42, v0_5 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                void* x9_17
                
                if (x0_42 == 0)
                    x8_58 = 0
                    arg1[0xc] = 0
                    x9_17 = arg1 + 0x39
                    arg1[0xe].b = 0
                else
                    x8_58 = zx.d(arg1[0xe].b)
                    x9_17 = &arg1[0xe + sx.q(x0_42)]
                
                *(arg1 + 0xb8) = arg1 + 0x39
                *(arg1 + 0xc0) = x9_17
        else
            *x26_2 = &x8_54[1]
            x8_58 = zx.d(*x8_54)
        
        *x27_2 = (0xffff00ff & x8_58) | zx.d(x25_5) << 8
        char* x9_18 = *(arg1 + 0xb8)
        void* x8_61 = *(arg1 + 0xc0)
        char x25_6
        
        if (x9_18 u< x8_61)
            *x26_2 = &x9_18[1]
            x25_6 = *x9_18
            x9_18 = &x9_18[1]
        else if (arg1[0xc] == 0)
            x25_6 = 0
        else
            int32_t x0_44
            x0_44, v0_5 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
            
            if (x0_44 == 0)
                x25_6 = 0
                arg1[0xc] = 0
                x8_61 = arg1 + 0x39
                arg1[0xe].b = 0
            else
                x25_6 = arg1[0xe].b
                x8_61 = &arg1[0xe] + sx.q(x0_44)
            
            x9_18 = arg1 + 0x39
            *(arg1 + 0xb8) = x9_18
            *(arg1 + 0xc0) = x8_61
        
        uint32_t x8_66
        
        if (x9_18 u>= x8_61)
            x8_66 = arg1[0xc]
            
            if (x8_66 != 0)
                int32_t x0_46
                x0_46, v0_5 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                void* x9_21
                
                if (x0_46 == 0)
                    x8_66 = 0
                    arg1[0xc] = 0
                    x9_21 = arg1 + 0x39
                    arg1[0xe].b = 0
                else
                    x8_66 = zx.d(arg1[0xe].b)
                    x9_21 = &arg1[0xe + sx.q(x0_46)]
                
                *(arg1 + 0xb8) = arg1 + 0x39
                *(arg1 + 0xc0) = x9_21
        else
            *x26_2 = &x9_18[1]
            x8_66 = zx.d(*x9_18)
        
        *x23_2 = (0xffff00ff & x8_66) | zx.d(x25_6) << 8
        
        if (*(arg1 + 0x10) == 0)
            if (*(arg1 + 0xb8) u< *(arg1 + 0xc0))
                goto label_fe3948
            
        label_fe3968:
            *(arg1 + 0xb8) = *(arg1 + 0xc8)
        else
            int32_t x0_48
            x0_48, v0_5 = (*(arg1 + 0x20))(*(arg1 + 0x28))
            
            if (x0_48 == 0 || (arg1[0xc] != 0 && *(arg1 + 0xb8) u< *(arg1 + 0xc0)))
            label_fe3948:
                int32_t x8_73 = *x27_2
                
                if (x8_73 == 0 || 0x10000000 s/ x8_73 s>= *x23_2)
                    if (*(arg1 + 0x10) == 0)
                        void* x11_3 = &arg1[0x2e]
                        *x11_3 += 8
                    else
                        int64_t x8_86 = *(arg1 + 0xb8)
                        int64_t x9_29 = *(arg1 + 0xc0)
                        int32_t x10_26 = x9_29.d - x8_86.d
                        
                        if (x10_26 s> 7)
                            *(arg1 + 0xb8) = x8_86 + 8
                        else
                            int64_t x8_87 = *(arg1 + 0x18)
                            int64_t x0_56 = *(arg1 + 0x28)
                            *(arg1 + 0xb8) = x9_29
                            x8_87(x0_56, zx.q(8 - x10_26))
                    
                    int32_t x27_4 = 0
                    int64_t fp_2 = 0xb
                    
                    while (true)
                        int64_t temp0_1 = fp_2
                        fp_2 -= 1
                        
                        if (temp0_1 == 1)
                            break
                        
                        void* x9_30 = *(arg1 + 0xb8)
                        void* x8_90 = *(arg1 + 0xc0)
                        uint32_t x26_4
                        
                        if (x9_30 u< x8_90)
                            *(arg1 + 0xb8) = x9_30 + 1
                            x26_4 = zx.d(*x9_30)
                            x9_30 += 1
                        else if (arg1[0xc] == 0)
                            x26_4 = 0
                        else
                            int32_t x0_58
                            x0_58, v0_5 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                            
                            if (x0_58 == 0)
                                x26_4 = 0
                                arg1[0xc] = 0
                                arg1[0xe].b = 0
                                x8_90 = arg1 + 0x39
                            else
                                x26_4 = zx.d(arg1[0xe].b)
                                x8_90 = &arg1[0xe + sx.q(x0_58)]
                            
                            x9_30 = arg1 + 0x39
                            *(arg1 + 0xb8) = arg1 + 0x39
                            *(arg1 + 0xc0) = x8_90
                        
                        uint32_t x25_8
                        
                        if (x9_30 u< x8_90)
                            *(arg1 + 0xb8) = x9_30 + 1
                            x25_8 = zx.d(*x9_30)
                            x9_30 += 1
                        else if (arg1[0xc] == 0)
                            x25_8 = 0
                        else
                            int32_t x0_60
                            x0_60, v0_5 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                            
                            if (x0_60 == 0)
                                x25_8 = 0
                                arg1[0xc] = 0
                                arg1[0xe].b = 0
                                x8_90 = arg1 + 0x39
                            else
                                x25_8 = zx.d(arg1[0xe].b)
                                x8_90 = &arg1[0xe + sx.q(x0_60)]
                            
                            x9_30 = arg1 + 0x39
                            *(arg1 + 0xb8) = arg1 + 0x39
                            *(arg1 + 0xc0) = x8_90
                        
                        if (x9_30 u< x8_90)
                            x9_30 += 1
                            *(arg1 + 0xb8) = x9_30
                        else if (arg1[0xc] != 0)
                            int32_t x0_62
                            x0_62, v0_5 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                            
                            if (x0_62 == 0)
                                arg1[0xc] = 0
                                arg1[0xe].b = 0
                                x8_90 = arg1 + 0x39
                            else
                                x8_90 = arg1 + sx.q(x0_62) + 0x38
                            
                            x9_30 = arg1 + 0x39
                            *(arg1 + 0xc0) = x8_90
                            *(arg1 + 0xb8) = x9_30
                        
                        uint32_t x23_4
                        
                        if (x9_30 u< x8_90)
                            *(arg1 + 0xb8) = x9_30 + 1
                            x23_4 = zx.d(*x9_30)
                            x9_30 += 1
                        else if (arg1[0xc] == 0)
                            x23_4 = 0
                        else
                            int32_t x0_64
                            x0_64, v0_5 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                            
                            if (x0_64 == 0)
                                x23_4 = 0
                                arg1[0xc] = 0
                                arg1[0xe].b = 0
                                x8_90 = arg1 + 0x39
                            else
                                x23_4 = zx.d(arg1[0xe].b)
                                x8_90 = &arg1[0xe] + sx.q(x0_64)
                            
                            x9_30 = arg1 + 0x39
                            *(arg1 + 0xb8) = arg1 + 0x39
                            *(arg1 + 0xc0) = x8_90
                        
                        if (*(arg1 + 0x10) == 0)
                        label_fe3cb0:
                            
                            if (x9_30 u>= x8_90)
                                goto label_fe3968_2
                        else
                            int32_t x0_66
                            x0_66, v0_5 = (*(arg1 + 0x20))(*(arg1 + 0x28))
                            
                            if (x0_66 != 0)
                                if (arg1[0xc] == 0)
                                    goto label_fe3968_2
                                
                                x9_30 = *(arg1 + 0xb8)
                                x8_90 = *(arg1 + 0xc0)
                                goto label_fe3cb0
                        
                        if (x25_8 != 8)
                            goto label_fe3968_2
                        
                        x27_4 |= x23_4
                        
                        if (x26_4 == 0)
                            int32_t x8_104
                            
                            if ((x27_4 & 0x10) != 0)
                                x8_104 = 4
                            else
                                x8_104 = 3
                            
                            *x8_50 = x8_104
                            goto label_fe3194
                else
                label_fe3968_1:
                    *(arg1 + 0xb8) = *(arg1 + 0xc8)
            else
            label_fe3968_2:
                *(arg1 + 0xb8) = *(arg1 + 0xc8)
    
    if (sub_1001560(arg1, arg2, arg3, arg4) != 0)
        goto label_fe3194
    
    void var_474
    int32_t* x25_7
    
    x25_7 = arg2 == 0 ? &var_474 : arg2
    
    int32_t* x23_3
    
    x23_3 = arg3 == 0 ? &var_474 : arg3
    
    int32_t* x26_3
    
    x26_3 = arg4 == 0 ? &var_474 : arg4
    
    int32_t x0_52
    int128_t v0_6
    x0_52, v0_6 = sub_fe1748(arg1)
    void* x8_84
    char* x9_28
    void** fp_1
    
    if (x0_52 == 0)
    label_fe3a64:
        x9_28 = *(arg1 + 0xc8)
        x8_84 = *(arg1 + 0xd0)
        fp_1 = &arg1[0x2e]
        *(arg1 + 0xb8) = x9_28
        *(arg1 + 0xc0) = x8_84
        
        if (x9_28 u>= x8_84)
        label_fe3d4c:
            
            if (arg1[0xc] != 0)
                int32_t x0_71
                x0_71, v0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                
                if (x0_71 == 0)
                    arg1[0xc] = 0
                    x8_84 = arg1 + 0x39
                    arg1[0xe].b = 0
                else
                    x8_84 = arg1 + sx.q(x0_71) + 0x38
                
                x9_28 = arg1 + 0x39
                *(arg1 + 0xc0) = x8_84
                *fp_1 = x9_28
        else
            x9_28 = &x9_28[1]
            *fp_1 = x9_28
    else
        sub_1001a60(arg1, &var_468)
        
        if (zx.d(var_468.b) == 0)
            goto label_fe3a64
        
        int32_t x27_3 = 0
        
        do
            int64_t var_460
            
            if (((var_468 ^ 0x333d54414d524f46) | (var_460 ^ 0x6c725f7469622d32)
                    | (var_460 ^ 0x656267725f656c)) == 0)
                x27_3 = 1
            
            sub_1001a60(arg1, &var_468)
        while (zx.d(var_468.b) != 0)
        
        if (x27_3 == 0)
            goto label_fe3a64
        
        sub_1001a60(arg1, &var_468)
        
        if (((zx.d(var_468.w) ^ 0x592d) | (zx.d(var_468:2.b) ^ 0x20)) != 0)
            goto label_fe3a64
        
        char* nptr = &var_468 | 3
        char* endptr = nptr
        *x23_3 = strtol(nptr, &endptr, 0xa)
        char* endptr_1 = endptr
        fp_1 = &arg1[0x2e]
        
        if (zx.d(*endptr_1) == 0x20)
            do
                endptr_1 = &endptr_1[1]
            while (zx.d(*endptr_1) == 0x20)
            
            endptr = endptr_1
        
        int32_t x0_69
        x0_69, v0_6 = strncmp(endptr_1, 0x742778, 3)
        
        if (x0_69 == 0)
            endptr = &endptr_1[3]
            *x25_7 = strtol(&endptr_1[3], nullptr, 0xa)
            *x26_3 = 3
            goto label_fe3194
        
        x9_28 = *(arg1 + 0xc8)
        x8_84 = *(arg1 + 0xd0)
        *(arg1 + 0xb8) = x9_28
        *(arg1 + 0xc0) = x8_84
        
        if (x9_28 u>= x8_84)
            goto label_fe3d4c
        
        x9_28 = &x9_28[1]
        *fp_1 = x9_28
    
    uint32_t x25_9
    
    if (x9_28 u< x8_84)
        *fp_1 = &x9_28[1]
        x25_9 = zx.d(*x9_28)
        x9_28 = &x9_28[1]
    else if (arg1[0xc] == 0)
        x25_9 = 0
    label_fe3e04:
        uint32_t x23_5
        
        if (x9_28 u< x8_84)
            *fp_1 = &x9_28[1]
            x23_5 = zx.d(*x9_28)
            x9_28 = &x9_28[1]
        else if (arg1[0xc] == 0)
            x23_5 = 0
        else
            int32_t x0_75
            x0_75, v0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
            
            if (x0_75 == 0)
                x23_5 = 0
                arg1[0xc] = 0
                x8_84 = arg1 + 0x39
                arg1[0xe].b = 0
            else
                x23_5 = zx.d(arg1[0xe].b)
                x8_84 = &arg1[0xe + sx.q(x0_75)]
            
            x9_28 = arg1 + 0x39
            *(arg1 + 0xb8) = x9_28
            *(arg1 + 0xc0) = x8_84
        
        uint32_t x26_5
        
        if (x25_9 != 1)
            if (x23_5 u> 0xb || (1 << x23_5 & 0xc0c) == 0)
                goto label_fe42ec
            
            int32_t x10_47
            
            if (*(arg1 + 0x10) != 0)
                x10_47 = x8_84.d - x9_28.d
            
            if (*(arg1 + 0x10) == 0 || x10_47 s> 8)
                x26_5 = 0
                *fp_1 = &x9_28[9]
            else
                int64_t x9_33 = *(arg1 + 0x18)
                int64_t x0_77 = *(arg1 + 0x28)
                *(arg1 + 0xb8) = x8_84
                x9_33(x0_77, zx.q(9 - x10_47))
                x26_5 = 0
        else
            if ((x23_5 & 0xfffffff7) != 1)
                goto label_fe42ec
            
            int32_t x10_43
            
            if (*(arg1 + 0x10) != 0)
                x10_43 = x8_84.d - x9_28.d
            
            void* x10_44
            
            if (*(arg1 + 0x10) == 0 || x10_43 s> 3)
                x10_44 = &x9_28[4]
                *fp_1 = x10_44
            else
                int64_t x9_32 = *(arg1 + 0x18)
                int64_t x0_76 = *(arg1 + 0x28)
                *(arg1 + 0xb8) = x8_84
                x9_32(x0_76, zx.q(4 - x10_43))
                x10_44 = *(arg1 + 0xb8)
                x8_84 = *(arg1 + 0xc0)
            
            void* x9_34
            
            if (x10_44 u>= x8_84)
                if (arg1[0xc] == 0)
                    goto label_fe42ec
                
                int32_t x0_79
                x0_79, v0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                
                if (x0_79 == 0)
                    x26_5 = 0
                    arg1[0xc] = 0
                    x8_84 = arg1 + 0x39
                    arg1[0xe].b = 0
                else
                    x26_5 = zx.d(arg1[0xe].b)
                    x8_84 = &arg1[0xe + sx.q(x0_79)]
                
                x9_34 = arg1 + 0x39
                *(arg1 + 0xb8) = x9_34
                *(arg1 + 0xc0) = x8_84
            else
                x9_34 = x10_44 + 1
                *fp_1 = x9_34
                x26_5 = zx.d(*x10_44)
            
            if (x26_5 u> 0x20 || (1 << zx.q(x26_5) & 0x101018100) == 0)
                goto label_fe42ec
            
            int32_t x10_51
            
            if (*(arg1 + 0x10) != 0)
                x10_51 = x8_84.d - x9_34.d
            
            if (*(arg1 + 0x10) == 0 || x10_51 s> 3)
                *fp_1 = x9_34 + 4
            else
                int64_t x9_35 = *(arg1 + 0x18)
                int64_t x0_82 = *(arg1 + 0x28)
                *(arg1 + 0xb8) = x8_84
                x9_35(x0_82, zx.q(4 - x10_51))
        
        void* x9_36 = *(arg1 + 0xb8)
        void* x8_124 = *(arg1 + 0xc0)
        uint32_t x27_5
        
        if (x9_36 u< x8_124)
            *fp_1 = x9_36 + 1
            x27_5 = zx.d(*x9_36)
            x9_36 += 1
        else if (arg1[0xc] == 0)
            x27_5 = 0
        else
            int32_t x0_84
            x0_84, v0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
            
            if (x0_84 == 0)
                x27_5 = 0
                arg1[0xc] = 0
                x8_124 = arg1 + 0x39
                arg1[0xe].b = 0
            else
                x27_5 = zx.d(arg1[0xe].b)
                x8_124 = &arg1[0xe] + sx.q(x0_84)
            
            x9_36 = arg1 + 0x39
            *(arg1 + 0xb8) = x9_36
            *(arg1 + 0xc0) = x8_124
        
        uint32_t x10_54
        
        if (x9_36 u>= x8_124)
            x10_54 = arg1[0xc]
            
            if (x10_54 != 0)
                int32_t x0_86
                x0_86, v0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                
                if (x0_86 == 0)
                    x10_54 = 0
                    arg1[0xc] = 0
                    x8_124 = arg1 + 0x39
                    arg1[0xe].b = 0
                else
                    x10_54 = zx.d(arg1[0xe].b)
                    x8_124 = &arg1[0xe] + sx.q(x0_86)
                
                x9_36 = arg1 + 0x39
                *(arg1 + 0xb8) = x9_36
                *(arg1 + 0xc0) = x8_124
        else
            *fp_1 = x9_36 + 1
            x10_54 = zx.d(*x9_36)
            x9_36 += 1
        
        int32_t x27_6 = (0xffff00ff & x27_5) | (0xff & x10_54) << 8
        
        if (x27_6 == 0)
            goto label_fe42ec
        
        uint32_t x28_4
        
        if (x9_36 u< x8_124)
            *fp_1 = x9_36 + 1
            x28_4 = zx.d(*x9_36)
            x9_36 += 1
        else if (arg1[0xc] == 0)
            x28_4 = 0
        else
            int32_t x0_88
            x0_88, v0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
            
            if (x0_88 == 0)
                x28_4 = 0
                arg1[0xc] = 0
                x8_124 = arg1 + 0x39
                arg1[0xe].b = 0
            else
                x28_4 = zx.d(arg1[0xe].b)
                x8_124 = &arg1[0xe] + sx.q(x0_88)
            
            x9_36 = arg1 + 0x39
            *(arg1 + 0xb8) = x9_36
            *(arg1 + 0xc0) = x8_124
        
        uint32_t x10_57
        
        if (x9_36 u>= x8_124)
            x10_57 = arg1[0xc]
            
            if (x10_57 != 0)
                int32_t x0_90
                x0_90, v0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
                
                if (x0_90 == 0)
                    x10_57 = 0
                    arg1[0xc] = 0
                    x8_124 = arg1 + 0x39
                    arg1[0xe].b = 0
                else
                    x10_57 = zx.d(arg1[0xe].b)
                    x8_124 = &arg1[0xe] + sx.q(x0_90)
                
                x9_36 = arg1 + 0x39
                *(arg1 + 0xb8) = x9_36
                *(arg1 + 0xc0) = x8_124
        else
            *fp_1 = x9_36 + 1
            x10_57 = zx.d(*x9_36)
            x9_36 += 1
        
        int32_t x28_5 = (0xffff00ff & x28_4) | (0xff & x10_57) << 8
        
        if (x28_5 == 0)
            goto label_fe42ec
        
        uint32_t x25_10
        
        if (x9_36 u< x8_124)
            *fp_1 = x9_36 + 1
            x25_10 = zx.d(*x9_36)
            x9_36 += 1
        else if (arg1[0xc] == 0)
            x25_10 = 0
        else
            int32_t x0_92
            x0_92, v0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
            
            if (x0_92 == 0)
                x25_10 = 0
                arg1[0xc] = 0
                x8_124 = arg1 + 0x39
                arg1[0xe].b = 0
            else
                x25_10 = zx.d(arg1[0xe].b)
                x8_124 = &arg1[0xe] + sx.q(x0_92)
            
            x9_36 = arg1 + 0x39
            *(arg1 + 0xb8) = x9_36
            *(arg1 + 0xc0) = x8_124
        
        if (x9_36 u< x8_124)
            *fp_1 = x9_36 + 1
        else if (arg1[0xc] != 0)
            int32_t x0_94
            x0_94, v0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
            void* x8_141
            
            if (x0_94 == 0)
                arg1[0xc] = 0
                x8_141 = arg1 + 0x39
                arg1[0xe].b = 0
            else
                x8_141 = arg1 + sx.q(x0_94) + 0x38
            
            *(arg1 + 0xc0) = x8_141
            *fp_1 = arg1 + 0x39
        
        if (x26_5 == 0)
            uint64_t x8_143 = zx.q(x25_10 - 8)
            
            if (x8_143.d u> 0x18)
                goto label_fe42ec
            
            x8_15 = 1
            
            switch (x8_143)
                case 0
                    goto label_fe432c
                case 1, 2, 3, 4, 5, 6, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x11, 0x12, 0x13, 0x14, 
                        0x15, 0x16, 0x17
                    goto label_fe42ec
                case 7
                label_fe4314:
                    x8_15 = 3
                    goto label_fe432c
                case 8
                    if ((x23_5 & 0xfffffff7) != 3)
                        x8_15 = 3
                    else
                        x8_15 = 2
                    
                    goto label_fe432c
                case 0x10, 0x18
                    x8_15 = x25_10 u>> 3
                label_fe432c:
                    
                    if (arg2 != 0)
                        *arg2 = x27_6
                    
                    if (arg3 != 0)
                        *arg3 = x28_5
                    
                    if (arg4 == 0)
                        goto label_fe3194
                    
                    *arg4 = x8_15
                    goto label_fe3194
        else
            if (x25_10 != 0x10 && x25_10 != 8)
                goto label_fe42ec
            
            uint64_t x8_142 = zx.q(x26_5 - 8)
            
            if (x8_142.d u> 0x18)
                goto label_fe42ec
            
            x8_15 = 1
            
            switch (x8_142)
                case 0
                    goto label_fe432c
                case 1, 2, 3, 4, 5, 6, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x11, 0x12, 0x13, 0x14, 
                        0x15, 0x16, 0x17
                    goto label_fe42ec
                case 7, 8
                    goto label_fe4314
                case 0x10, 0x18
                    x8_15 = x26_5 u>> 3
                    goto label_fe432c
    else
        int32_t x0_73
        x0_73, v0_6 = (*(arg1 + 0x10))(*(arg1 + 0x28), &arg1[0xe], zx.q(arg1[0xd]))
        
        if (x0_73 == 0)
            x25_9 = 0
            arg1[0xc] = 0
            x8_84 = arg1 + 0x39
            arg1[0xe].b = 0
        else
            x25_9 = zx.d(arg1[0xe].b)
            x8_84 = &arg1[0xe + sx.q(x0_73)]
        
        x9_28 = arg1 + 0x39
        *(arg1 + 0xb8) = x9_28
        *(arg1 + 0xc0) = x8_84
    
    if (x25_9 u<= 1)
        goto label_fe3e04
    
label_fe42ec:
    *(arg1 + 0xb8) = *(arg1 + 0xc8)
    data_2423720 = "unknown image type"
    
    if (*(x24 + 0x28) == x8)
        return 0
else
    if (arg2 != 0)
        *arg2 = *x23
    
    if (arg3 != 0)
        *arg3 = *(x23 + 4)
    
label_fe3190:
    free(x23)
label_fe3194:
    
    if (*(x24 + 0x28) == x8)
        return 1

__stack_chk_fail()
noreturn
