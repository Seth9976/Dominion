// 函数: sub_fff4f4
// 地址: 0xfff4f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x26 = *(arg2 + 8)
int32_t* x20 = arg2
int64_t var_80_1
size_t bytes
int64_t x22_1

if (x26 != 0)
    int32_t x8_2 = x20[0xc] u>> 2 & 7
    bool z_1
    
    if (x8_2 == 3)
        z_1 = arg4 == 0
    else
        z_1 = false
    
    int32_t x8_3
    
    x8_3 = z_1 ? 2 : x8_2
    
    int32_t x9_2 = x20[1] * *x20
    
    if (x8_3 == 3)
        if (x9_2 s>= 1)
            int64_t i = 0
            
            do
                if (zx.d(*(*(x20 + 0x18) + i)) != 0)
                    uint64_t x11_2 = zx.q(i.d << 2)
                    *(*(x20 + 8) + x11_2) = *(arg4 + x11_2)
                
                i += 1
            while (i != zx.q(x9_2))
    else if (x8_3 == 2 && x9_2 s>= 1)
        int64_t i_1 = 0
        
        do
            if (zx.d(*(*(x20 + 0x18) + i_1)) != 0)
                uint64_t x12_1 = zx.q(i_1.d << 2)
                *(*(x20 + 8) + x12_1) = *(*(x20 + 0x10) + x12_1)
            
            i_1 += 1
        while (i_1 != zx.q(x9_2))
    
    var_80_1 = x26
    memcpy(*(x20 + 0x10), *(x20 + 8), (*x20 * x20[1]) << 2)
    x22_1 = *(x20 + 0x18)
    bytes = x20[1] * *x20
    goto label_fff6a0

if (sub_1000808(arg1, x20, arg3, 0) != 0)
    int32_t bytes_2 = x20[1] * *x20
    int64_t bytes_1 = sx.q(bytes_2 << 2)
    int64_t x0_3 = malloc(bytes_1)
    *(arg2 + 8) = x0_3
    int64_t x0_5 = malloc(bytes_1)
    bytes = sx.q(bytes_2)
    x20 = arg2
    *(arg2 + 0x10) = x0_5
    int64_t x0_7 = malloc(bytes)
    *(x20 + 0x18) = x0_7
    char const* const x9_34
    void* const x19
    
    if (x0_3 == 0)
        x19 = nullptr
        x9_34 = "outofmem"
    label_100001c:
        data_2423720 = x9_34
        return x19
    
    x22_1 = x0_7
    var_80_1 = x26
    memset(x0_3, 0, bytes_1)
    memset(x0_5, 0, bytes_1)
    memset(x22_1, 0, bytes)
label_fff6a0:
    void* x8_11 = &x20[0x220e]
    void* x8_12 = &x20[0x2210]
    memset(x22_1, 0, bytes)
    void* x8_14
    void* x9_8
    uint32_t x10_10
    
    while (true)
    label_fff6f0:
        char* x10_9 = *(arg1 + 0xb8)
        x8_14 = *(arg1 + 0xc0)
        
        if (x10_9 u>= x8_14)
            if (*(arg1 + 0x30) == 0)
                goto label_fffc74
            
            int32_t x0_14 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            
            if (x0_14 == 0)
                x10_10 = 0
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
                x8_14 = arg1 + 0x39
            else
                x10_10 = zx.d(*(arg1 + 0x38))
                x8_14 = arg1 + 0x38 + sx.q(x0_14)
            
            x9_8 = arg1 + 0x39
            *(arg1 + 0xc0) = x8_14
            *(arg1 + 0xb8) = arg1 + 0x39
            
            if (x10_10 != 0x21)
                break
        else
            x9_8 = &x10_9[1]
            *(arg1 + 0xb8) = x9_8
            x10_10 = zx.d(*x10_9)
            
            if (x10_10 != 0x21)
                break
        
        char* x9_27
        uint32_t x9_28
        void* x10_15
        void* x8_49
        char* x10_11
        
        if (x9_8 u>= x8_14)
            if (*(arg1 + 0x30) != 0)
                int32_t x0_16 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                uint32_t x9_10
                
                if (x0_16 == 0)
                    x9_10 = 0
                    *(arg1 + 0x30) = 0
                    *(arg1 + 0x38) = 0
                    x8_14 = arg1 + 0x39
                else
                    x9_10 = zx.d(*(arg1 + 0x38))
                    x8_14 = arg1 + 0x38 + sx.q(x0_16)
                
                x10_11 = arg1 + 0x39
                *(arg1 + 0xc0) = x8_14
                *(arg1 + 0xb8) = arg1 + 0x39
                
                if (x9_10 != 0xf9)
                    goto label_fffae4
                
                goto label_fff7e4
            
        label_fffae4:
            x9_27 = *(arg1 + 0xb8)
            x8_49 = *(arg1 + 0xc0)
            
            if (x9_27 u>= x8_49)
            label_fffb0c:
                
                while (true)
                    if (*(arg1 + 0x30) == 0)
                        goto label_fff6f0
                    
                    int32_t x0_30 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    
                    if (x0_30 == 0)
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                        *(arg1 + 0xc0) = arg1 + 0x39
                        *(arg1 + 0xb8) = arg1 + 0x39
                        goto label_fff6f0
                    
                    x9_28 = zx.d(*(arg1 + 0x38))
                    x8_49 = arg1 + 0x38 + sx.q(x0_30)
                    x10_15 = arg1 + 0x39
                    *(arg1 + 0xc0) = x8_49
                    *(arg1 + 0xb8) = arg1 + 0x39
                    
                    if (x9_28 == 0)
                        goto label_fff6f0
                    
                label_fffb6c:
                    
                    if (*(arg1 + 0x10) != 0)
                        int32_t x11_7 = x8_49.d - x10_15.d
                        
                        if (x9_28 s> x11_7)
                            int64_t x9_29 = *(arg1 + 0x18)
                            int64_t x0_31 = *(arg1 + 0x28)
                            *(arg1 + 0xb8) = x8_49
                            x9_29(x0_31, zx.q(x9_28 - x11_7))
                            x9_27 = *(arg1 + 0xb8)
                            x8_49 = *(arg1 + 0xc0)
                            
                            if (x9_27 u< x8_49)
                                break
                            
                            continue
                    
                    *(arg1 + 0xb8) = x10_15 + zx.q(x9_28)
                    goto label_fffae4
        else
            x10_11 = x9_8 + 1
            *(arg1 + 0xb8) = x10_11
            
            if (zx.d(*x9_8) != 0xf9)
                goto label_fffae4
            
        label_fff7e4:
            uint32_t x9_11
            
            if (x10_11 u>= x8_14)
                x9_11 = *(arg1 + 0x30)
                
                if (x9_11 == 0)
                label_fff874:
                    
                    if (*(arg1 + 0x10) != 0)
                        int32_t x11_5 = x8_14.d - x10_11.d
                        
                        if (x9_11 s> x11_5)
                            int64_t x9_12 = *(arg1 + 0x18)
                            int64_t x0_19 = *(arg1 + 0x28)
                            *(arg1 + 0xb8) = x8_14
                            x9_12(x0_19, zx.q(x9_11 - x11_5))
                            continue
                    
                    *(arg1 + 0xb8) = &x10_11[zx.q(x9_11)]
                    continue
                    continue
                else
                    int32_t x0_18 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    
                    if (x0_18 == 0)
                        x9_11 = 0
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                        x8_14 = arg1 + 0x39
                    else
                        x9_11 = zx.d(*(arg1 + 0x38))
                        x8_14 = &(arg1 + 0x38)[sx.q(x0_18)]
                    
                    x10_11 = arg1 + 0x39
                    *(arg1 + 0xc0) = x8_14
                    *(arg1 + 0xb8) = arg1 + 0x39
                    
                    if (x9_11 != 4)
                        goto label_fff874
            else
                *(arg1 + 0xb8) = &x10_11[1]
                x9_11 = zx.d(*x10_11)
                x10_11 = &x10_11[1]
                
                if (x9_11 != 4)
                    goto label_fff874
            uint32_t x8_27
            
            if (x10_11 u>= x8_14)
                x8_27 = *(arg1 + 0x30)
                
                if (x8_27 != 0)
                    int32_t x0_21 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    void* x9_15
                    
                    if (x0_21 == 0)
                        x8_27 = 0
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                        x9_15 = arg1 + 0x39
                    else
                        x8_27 = zx.d(*(arg1 + 0x38))
                        x9_15 = &(arg1 + 0x38)[sx.q(x0_21)]
                    
                    *(arg1 + 0xc0) = x9_15
                    *(arg1 + 0xb8) = arg1 + 0x39
            else
                *(arg1 + 0xb8) = &x10_11[1]
                x8_27 = zx.d(*x10_11)
            
            x20[0xc] = x8_27
            char* x9_16 = *(arg1 + 0xb8)
            int64_t x8_29 = *(arg1 + 0xc0)
            uint32_t x8_31
            uint32_t x20_1
            
            if (x9_16 u< x8_29)
                *(arg1 + 0xb8) = &x9_16[1]
                x20_1 = zx.d(*x9_16)
                x9_16 = &x9_16[1]
                
                if (x9_16 u>= x8_29)
                label_fff980:
                    x8_31 = *(arg1 + 0x30)
                    
                    if (x8_31 != 0)
                        int32_t x0_25 =
                            (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                        void* x9_19
                        
                        if (x0_25 == 0)
                            x8_31 = 0
                            *(arg1 + 0x30) = 0
                            *(arg1 + 0x38) = 0
                            x9_19 = arg1 + 0x39
                        else
                            x8_31 = zx.d(*(arg1 + 0x38))
                            x9_19 = &(arg1 + 0x38)[sx.q(x0_25)]
                        
                        *(arg1 + 0xc0) = x9_19
                        *(arg1 + 0xb8) = arg1 + 0x39
                else
                    *(arg1 + 0xb8) = &x9_16[1]
                    x8_31 = zx.d(*x9_16)
            else if (*(arg1 + 0x30) == 0)
                x20_1 = 0
                
                if (x9_16 u>= x8_29)
                    goto label_fff980
                
                *(arg1 + 0xb8) = &x9_16[1]
                x8_31 = zx.d(*x9_16)
            else
                int32_t x0_23 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                void* x8_35
                
                if (x0_23 == 0)
                    x20_1 = 0
                    *(arg1 + 0x30) = 0
                    *(arg1 + 0x38) = 0
                    x8_35 = arg1 + 0x39
                else
                    x20_1 = zx.d(*(arg1 + 0x38))
                    x8_35 = &(arg1 + 0x38)[sx.q(x0_23)]
                
                x9_16 = arg1 + 0x39
                *(arg1 + 0xc0) = x8_35
                *(arg1 + 0xb8) = arg1 + 0x39
                
                if (x9_16 u>= x8_35)
                    goto label_fff980
                
                *(arg1 + 0xb8) = &x9_16[1]
                x8_31 = zx.d(*x9_16)
            
            x20 = arg2
            *(x8_11 + 0x30) = ((0xffff00ff & x20_1) | (0xff & x8_31) << 8) * 0xa
            uint64_t x8_39 = zx.q(x20[0xb])
            
            if ((x8_39.d & 0x80000000) == 0)
                *(&x20[x8_39] + 0x37) = 0xff
            
            if ((zx.d(x20[0xc].b) & 1) != 0)
                char* x8_45 = *(arg1 + 0xb8)
                uint32_t x8_46
                
                if (x8_45 u>= *(arg1 + 0xc0))
                    x8_46 = *(arg1 + 0x30)
                    
                    if (x8_46 != 0)
                        int32_t x0_28 =
                            (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                        void* x9_26
                        
                        if (x0_28 == 0)
                            x8_46 = 0
                            *(arg1 + 0x30) = 0
                            *(arg1 + 0x38) = 0
                            x9_26 = arg1 + 0x39
                        else
                            x8_46 = zx.d(*(arg1 + 0x38))
                            x9_26 = &(arg1 + 0x38)[sx.q(x0_28)]
                        
                        *(arg1 + 0xc0) = x9_26
                        *(arg1 + 0xb8) = arg1 + 0x39
                else
                    *(arg1 + 0xb8) = &x8_45[1]
                    x8_46 = zx.d(*x8_45)
                
                x20[0xb] = x8_46
                *(&x20[zx.q(x8_46)] + 0x37) = 0
                x9_27 = *(arg1 + 0xb8)
                x8_49 = *(arg1 + 0xc0)
                
                if (x9_27 u>= x8_49)
                    goto label_fffb0c
            else
                if (*(arg1 + 0x10) == 0)
                    *(arg1 + 0xb8) += 1
                else
                    int64_t x9_21 = *(arg1 + 0xc0)
                    int64_t x8_43 = *(arg1 + 0xb8)
                    int32_t x10_14 = x9_21.d - x8_43.d
                    
                    if (x10_14 s> 0)
                        *(arg1 + 0xb8) = x8_43 + 1
                    else
                        int64_t x8_44 = *(arg1 + 0x18)
                        int64_t x0_26 = *(arg1 + 0x28)
                        *(arg1 + 0xb8) = x9_21
                        x8_44(x0_26, zx.q(1 - x10_14))
                
                x20[0xb] = 0xffffffff
                x9_27 = *(arg1 + 0xb8)
                x8_49 = *(arg1 + 0xc0)
                
                if (x9_27 u>= x8_49)
                    goto label_fffb0c
        x10_15 = &x9_27[1]
        *(arg1 + 0xb8) = x10_15
        x9_28 = zx.d(*x9_27)
        
        if (x9_28 != 0)
            goto label_fffb6c
    
    if (x10_10 == 0x3b)
        return arg1
    
    if (x10_10 != 0x2c)
    label_fffc74:
        x19 = nullptr
        x9_34 = "unknown code"
        goto label_100001c
    
    uint32_t var_84_1
    
    if (x9_8 u>= x8_14)
        if (*(arg1 + 0x30) == 0)
            var_84_1 = 0
            
            if (x9_8 u< x8_14)
                goto label_fffbd8
            
            goto label_fffd04
        
        int32_t x0_33 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        
        if (x0_33 == 0)
            var_84_1 = 0
            *(arg1 + 0x30) = 0
            *(arg1 + 0x38) = 0
            x8_14 = arg1 + 0x39
        else
            x8_14 = &(arg1 + 0x38)[sx.q(x0_33)]
            var_84_1 = zx.d(*(arg1 + 0x38))
        
        x9_8 = arg1 + 0x39
        *(arg1 + 0xc0) = x8_14
        *(arg1 + 0xb8) = arg1 + 0x39
        
        if (x9_8 u< x8_14)
            goto label_fffbd8
        
        goto label_fffd04
    
    *(arg1 + 0xb8) = x9_8 + 1
    var_84_1 = zx.d(*x9_8)
    x9_8 += 1
    uint32_t var_90_1
    
    if (x9_8 u>= x8_14)
    label_fffd04:
        
        if (*(arg1 + 0x30) == 0)
            var_90_1 = 0
            
            if (x9_8 u< x8_14)
                goto label_fffbf4
            
            goto label_fffd6c
        
        int32_t x0_35 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        
        if (x0_35 == 0)
            var_90_1 = 0
            *(arg1 + 0x30) = 0
            *(arg1 + 0x38) = 0
            x8_14 = arg1 + 0x39
        else
            x8_14 = &(arg1 + 0x38)[sx.q(x0_35)]
            var_90_1 = zx.d(*(arg1 + 0x38))
        
        x9_8 = arg1 + 0x39
        *(arg1 + 0xc0) = x8_14
        *(arg1 + 0xb8) = arg1 + 0x39
        
        if (x9_8 u< x8_14)
            goto label_fffbf4
        
        goto label_fffd6c
    
label_fffbd8:
    *(arg1 + 0xb8) = x9_8 + 1
    var_90_1 = zx.d(*x9_8)
    x9_8 += 1
    uint32_t var_94_1
    
    if (x9_8 u>= x8_14)
    label_fffd6c:
        
        if (*(arg1 + 0x30) == 0)
            var_94_1 = 0
            
            if (x9_8 u< x8_14)
                goto label_fffc10
            
            goto label_fffdd4
        
        int32_t x0_37 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        
        if (x0_37 == 0)
            var_94_1 = 0
            *(arg1 + 0x30) = 0
            *(arg1 + 0x38) = 0
            x8_14 = arg1 + 0x39
        else
            x8_14 = &(arg1 + 0x38)[sx.q(x0_37)]
            var_94_1 = zx.d(*(arg1 + 0x38))
        
        x9_8 = arg1 + 0x39
        *(arg1 + 0xc0) = x8_14
        *(arg1 + 0xb8) = arg1 + 0x39
        
        if (x9_8 u< x8_14)
            goto label_fffc10
        
        goto label_fffdd4
    
label_fffbf4:
    *(arg1 + 0xb8) = x9_8 + 1
    var_94_1 = zx.d(*x9_8)
    x9_8 += 1
    char var_98_1
    
    if (x9_8 u>= x8_14)
    label_fffdd4:
        
        if (*(arg1 + 0x30) == 0)
            var_98_1 = 0
            
            if (x9_8 u< x8_14)
                goto label_fffc2c
            
            goto label_fffe3c
        
        int32_t x0_39 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        
        if (x0_39 == 0)
            var_98_1 = 0
            *(arg1 + 0x30) = 0
            *(arg1 + 0x38) = 0
            x8_14 = arg1 + 0x39
        else
            x8_14 = arg1 + 0x38 + sx.q(x0_39)
            var_98_1 = *(arg1 + 0x38)
        
        x9_8 = arg1 + 0x39
        *(arg1 + 0xc0) = x8_14
        *(arg1 + 0xb8) = arg1 + 0x39
        
        if (x9_8 u< x8_14)
            goto label_fffc2c
        
        goto label_fffe3c
    
label_fffc10:
    *(arg1 + 0xb8) = x9_8 + 1
    var_98_1 = *x9_8
    x9_8 += 1
    uint32_t x22_2
    
    if (x9_8 u>= x8_14)
    label_fffe3c:
        
        if (*(arg1 + 0x30) == 0)
            x22_2 = 0
            
            if (x9_8 u< x8_14)
                goto label_fffc44
            
            goto label_fffea0
        
        int32_t x0_41 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        
        if (x0_41 == 0)
            x22_2 = 0
            *(arg1 + 0x30) = 0
            *(arg1 + 0x38) = 0
            x8_14 = arg1 + 0x39
        else
            x22_2 = zx.d(*(arg1 + 0x38))
            x8_14 = &(arg1 + 0x38)[sx.q(x0_41)]
        
        x9_8 = arg1 + 0x39
        *(arg1 + 0xc0) = x8_14
        *(arg1 + 0xb8) = arg1 + 0x39
        
        if (x9_8 u< x8_14)
            goto label_fffc44
        
        goto label_fffea0
    
label_fffc2c:
    *(arg1 + 0xb8) = x9_8 + 1
    x22_2 = zx.d(*x9_8)
    x9_8 += 1
    uint32_t x12_3
    
    if (x9_8 u>= x8_14)
    label_fffea0:
        
        if (*(arg1 + 0x30) == 0)
            x12_3 = 0
            
            if (x9_8 u< x8_14)
                goto label_fffc5c
            
            goto label_ffff04
        
        int32_t x0_43 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        
        if (x0_43 == 0)
            x12_3 = 0
            *(arg1 + 0x30) = 0
            *(arg1 + 0x38) = 0
            x8_14 = arg1 + 0x39
        else
            x12_3 = zx.d(*(arg1 + 0x38))
            x8_14 = &(arg1 + 0x38)[sx.q(x0_43)]
        
        x9_8 = arg1 + 0x39
        *(arg1 + 0xc0) = x8_14
        *(arg1 + 0xb8) = arg1 + 0x39
        
        if (x9_8 u< x8_14)
            goto label_fffc5c
        
        goto label_ffff04
    
label_fffc44:
    *(arg1 + 0xb8) = x9_8 + 1
    x12_3 = zx.d(*x9_8)
    x9_8 += 1
    uint32_t x10_23
    uint32_t x20_3
    
    if (x9_8 u>= x8_14)
    label_ffff04:
        
        if (*(arg1 + 0x30) == 0)
            x10_23 = var_84_1
            x20_3 = 0
        else
            int32_t x0_45 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            
            if (x0_45 == 0)
                x20_3 = 0
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
                x8_14 = arg1 + 0x39
            else
                x20_3 = zx.d(*(arg1 + 0x38))
                x8_14 = &(arg1 + 0x38)[sx.q(x0_45)]
            
            x10_23 = var_84_1
            x9_8 = arg1 + 0x39
            *(arg1 + 0xc0) = x8_14
            *(arg1 + 0xb8) = arg1 + 0x39
    else
    label_fffc5c:
        *(arg1 + 0xb8) = x9_8 + 1
        x20_3 = zx.d(*x9_8)
        x9_8 += 1
        x10_23 = var_84_1
    
    int32_t x10_31 = (0xffff00ff & x10_23) | zx.d(var_90_1.b) << 8
    uint32_t x8_78
    
    if (x9_8 u>= x8_14)
        x8_78 = *(arg1 + 0x30)
        
        if (x8_78 != 0)
            int32_t x0_47 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            void* x9_41
            
            if (x0_47 == 0)
                x8_78 = 0
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
                x9_41 = arg1 + 0x39
            else
                x8_78 = zx.d(*(arg1 + 0x38))
                x9_41 = &(arg1 + 0x38)[sx.q(x0_47)]
            
            *(arg1 + 0xc0) = x9_41
            *(arg1 + 0xb8) = arg1 + 0x39
    else
        *(arg1 + 0xb8) = x9_8 + 1
        x8_78 = zx.d(*x9_8)
    
    int32_t x10_32 = ((0xffff00ff & x22_2) | (0xff & x12_3) << 8) + x10_31
    int32_t x9_42 = *arg2
    int32_t x14_2
    int32_t x20_4
    
    if (x10_32 s<= x9_42)
        x20_4 = (0xffff00ff & x20_3) | (0xff & x8_78) << 8
        x14_2 = (0xffff00ff & var_94_1) | zx.d(var_98_1) << 8
    
    if (x10_32 s> x9_42 || x20_4 + x14_2 s> arg2[1])
        x19 = nullptr
        x9_34 = "bad Image Descriptor"
        goto label_100001c
    
    int32_t x9_43 = x9_42 << 2
    int32_t x11_11 = x9_43 * x14_2
    int32_t x8_81 = x10_31 << 2
    *(x8_12 + 0xc) = x8_81
    *(x8_12 + 0x10) = x11_11
    *(x8_12 + 0x18) = x11_11 + x20_4 * x9_43
    *(x8_12 + 0x1c) = x8_81
    *(x8_12 + 0x20) = x11_11
    *(x8_12 + 0x24) = x9_43
    *(x8_12 + 0x14) = x10_32 << 2
    char* x8_82 = *(arg1 + 0xb8)
    uint32_t x8_83
    int32_t x10_35
    int32_t* x20_5
    
    if (x8_82 u>= *(arg1 + 0xc0))
        x8_83 = *(arg1 + 0x30)
        x20_5 = arg2
        
        if (x8_83 != 0)
            int32_t x0_49 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            void* x9_47
            
            if (x0_49 == 0)
                x8_83 = 0
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
                x9_47 = arg1 + 0x39
            else
                x8_83 = zx.d(*(arg1 + 0x38))
                x9_47 = &(arg1 + 0x38)[sx.q(x0_49)]
            
            *(arg1 + 0xc0) = x9_47
            *(arg1 + 0xb8) = arg1 + 0x39
            goto label_10000cc
        
        x10_35 = 0
        *(x8_12 + 8) = 0
    else
        *(arg1 + 0xb8) = &x8_82[1]
        x8_83 = zx.d(*x8_82)
        x20_5 = arg2
    label_10000cc:
        int32_t x9_48 = *(x8_12 + 0x24)
        x10_35 = (x8_83 & 0x40) << 0x19 s>> 0x1f & 3
        
        if ((x8_83 & 0x40) == 0)
            x9_43 = x9_48
        else
            x9_43 = x9_48 << 3
        
        *(x8_12 + 8) = x8_83
    
    *x8_12 = x10_35
    *(x8_12 + 4) = x9_43
    void* var_78_1
    void* x8_88
    
    if ((x8_83 & 0x80) != 0)
        int32_t x9_50
        
        if ((zx.d(x20_5[0xc].b) & 1) != 0)
            x9_50 = x20_5[0xb]
        else
            x9_50 = -1
        
        void* x11_13 = zx.q(x9_50)
        uint64_t i_4 = zx.q(2 << (x8_83 & 7))
        void* x22_5 = x20_5 + 0x437
        uint64_t i_2
        
        do
            char* x8_92 = *(arg1 + 0xb8)
            var_78_1 = x11_13
            uint32_t x8_93
            
            if (x8_92 u>= *(arg1 + 0xc0))
                x8_93 = *(arg1 + 0x30)
                
                if (x8_93 != 0)
                    int32_t x0_51 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    void* x9_56
                    
                    if (x0_51 == 0)
                        x8_93 = 0
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                        x9_56 = arg1 + 0x39
                    else
                        x8_93 = zx.d(*(arg1 + 0x38))
                        x9_56 = &(arg1 + 0x38)[sx.q(x0_51)]
                    
                    x11_13 = var_78_1
                    *(arg1 + 0xc0) = x9_56
                    *(arg1 + 0xb8) = arg1 + 0x39
            else
                *(arg1 + 0xb8) = &x8_92[1]
                x8_93 = zx.d(*x8_92)
            
            *(x22_5 - 1) = x8_93.b
            char* x8_95 = *(arg1 + 0xb8)
            uint32_t x8_96
            
            if (x8_95 u>= *(arg1 + 0xc0))
                x8_96 = *(arg1 + 0x30)
                
                if (x8_96 != 0)
                    int32_t x0_53 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    void* x9_61
                    
                    if (x0_53 == 0)
                        x8_96 = 0
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                        x9_61 = arg1 + 0x39
                    else
                        x8_96 = zx.d(*(arg1 + 0x38))
                        x9_61 = &(arg1 + 0x38)[sx.q(x0_53)]
                    
                    x11_13 = var_78_1
                    *(arg1 + 0xc0) = x9_61
                    *(arg1 + 0xb8) = arg1 + 0x39
            else
                *(arg1 + 0xb8) = &x8_95[1]
                x8_96 = zx.d(*x8_95)
            
            *(x22_5 - 2) = x8_96.b
            char* x8_98 = *(arg1 + 0xb8)
            uint32_t x8_89
            
            if (x8_98 u< *(arg1 + 0xc0))
                *(arg1 + 0xb8) = &x8_98[1]
                x8_89 = zx.d(*x8_98)
            else
                x8_89 = *(arg1 + 0x30)
                
                if (x8_89 != 0)
                    int32_t x0_55 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    void* x9_65
                    
                    if (x0_55 == 0)
                        x8_89 = 0
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                        x9_65 = arg1 + 0x39
                    else
                        x8_89 = zx.d(*(arg1 + 0x38))
                        x9_65 = &(arg1 + 0x38)[sx.q(x0_55)]
                    
                    x11_13 = var_78_1
                    *(arg1 + 0xc0) = x9_65
                    *(arg1 + 0xb8) = arg1 + 0x39
            
            void* temp0_1 = x11_13
            x11_13 -= 1
            *(x22_5 - 3) = x8_89.b
            i_2 = i_4
            i_4 -= 1
            *x22_5 = ((temp0_1 u>= 1 ? 1 : 0) << 0x1f s>> 0x1f).b
            x22_5 += 4
        while (i_2 != 1)
        x20_5 = arg2
        x8_88 = &x20_5[0x10d]
    else
        if ((zx.d(x20_5[8].b) & 0x80) == 0)
            x19 = nullptr
            x9_34 = "missing color table"
            goto label_100001c
        
        x8_88 = &x20_5[0xd]
    
    *x8_11 = x8_88
    char* x8_100 = *(arg1 + 0xb8)
    int32_t var_98_2
    int32_t var_94_2
    uint32_t x8_101
    uint64_t x8_104
    
    if (x8_100 u>= *(arg1 + 0xc0))
        if (*(arg1 + 0x30) == 0)
            var_90_1.q = 1
            var_98_2 = 1
            var_94_2 = 1
            x8_104 = 1
        label_10003a4:
            int64_t x9_73 = 0
            void* x10_38 = x20_5 + 0x837
            
            do
                *(x10_38 - 3) = 0xffff
                *(x10_38 - 1) = (x9_73.d).b
                *x10_38 = (x9_73.d).b
                x10_38 += 4
                x9_73 += 1
            while (x8_104 != x9_73)
            
            int32_t x8_107 = 0
            uint32_t x13_3 = 0
            int32_t x22_6 = 0
            uint32_t x12_6 = var_90_1 + 2
            uint32_t var_ac_1 = x12_6
            int32_t x10_39 = var_98_2
            int32_t x9_76 = var_94_2
            uint32_t x14_3 = 0
            int32_t x11_15 = -1
        label_10003f0:
            int32_t var_a8_1 = x11_15
            int32_t var_a4_1 = x8_107
            int32_t x15_1 = x9_76
            int32_t x20_6 = x22_6
            uint32_t var_a0
            var_a0.q = zx.q(x12_6)
            int32_t var_84_3 = x10_39
            var_78_1.d = x9_76
            
            while (true)
                x22_6 = x20_6 - x15_1
                void* var_70_1
                
                if (x20_6 s>= x15_1)
                    x10_39 = var_98_2
                    x9_76 = var_94_2
                    x12_6 = var_ac_1
                    x11_15 = -1
                    int32_t x16_1 = x13_3 & var_84_3
                    x13_3 s>>= x15_1
                    x8_107 = 1
                    
                    if (x16_1 == var_90_1)
                        goto label_10003f0
                    
                    if (x16_1 != var_90_1 + 1)
                        uint32_t x20_7 = var_a0
                        
                        if (x16_1 s<= x20_7)
                            if ((var_a4_1 & 1) == 0)
                                x19 = nullptr
                                x9_34 = "no clear code"
                                goto label_100001c
                            
                            if ((var_a8_1 & 0x80000000) == 0)
                                if (x20_7 s>= 0x2000)
                                    x19 = nullptr
                                    x9_34 = "too many codes"
                                    goto label_100001c
                                
                                int64_t x8_121 = sx.q(x20_7)
                                void* x11_17 = &arg2[0x20d + x8_121]
                                *x11_17 = var_a8_1.w
                                char x10_42 = *(&arg2[0x20d + zx.q(var_a8_1)] + 2)
                                *(x11_17 + 2) = x10_42
                                
                                if (x16_1 != x20_7 + 1)
                                    x10_42 = *(&arg2[sx.q(x16_1)] + 0x836)
                                
                                x20_7 += 1
                                *(&arg2[x8_121] + 0x837) = x10_42
                                goto label_10005d0
                            
                            if (x16_1 != x20_7)
                            label_10005d0:
                                var_70_1.d = x14_3
                                sub_1000f9c(arg2, x16_1.w)
                                int32_t x12_7 = var_78_1.d
                                x14_3 = var_70_1.d
                                int32_t temp2_1 =
                                    (x20_7 s< 0x1000 ? 1 : 0) & ((x20_7 & var_84_3) == 0 ? 1 : 0)
                                
                                if (temp2_1 == 0)
                                    x10_39 = var_84_3
                                else
                                    x10_39 = not.d(0xffffffff << (x12_7 + 1))
                                
                                x11_15 = x16_1
                                
                                if (temp2_1 != 0)
                                    x9_76 = x12_7 + 1
                                else
                                    x9_76 = x12_7
                                
                                x8_107 = 1
                                x12_6 = x20_7
                                goto label_10003f0
                        
                        x19 = nullptr
                        x9_34 = "illegal code in raster"
                        goto label_100001c
                    
                    void* x9_86
                    uint32_t x9_88
                    void* x10_46
                    void* x8_128
                    
                    if ((x14_3 & 0x80000000) != 0)
                        void* x8_129 = *(arg1 + 0xc0)
                        *(arg1 + 0xb8) = x8_129
                        x9_86 = x8_129
                        x8_128 = *(arg1 + 0xc0)
                        
                        if (x9_86 u>= x8_128)
                        label_1000714:
                            
                            while (true)
                                if (*(arg1 + 0x30) == 0)
                                    goto label_100078c
                                
                                int32_t x0_67 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, 
                                    zx.q(*(arg1 + 0x34)))
                                
                                if (x0_67 == 0)
                                    x9_88 = 0
                                    *(arg1 + 0x30) = 0
                                    *(arg1 + 0x38) = 0
                                    x8_128 = arg1 + 0x39
                                else
                                    x9_88 = zx.d(*(arg1 + 0x38))
                                    x8_128 = &(arg1 + 0x38)[sx.q(x0_67)]
                                
                                x10_46 = arg1 + 0x39
                                *(arg1 + 0xc0) = x8_128
                                *(arg1 + 0xb8) = arg1 + 0x39
                            label_1000784:
                                
                                if (x9_88 == 0)
                                    goto label_100078c
                                
                                if (*(arg1 + 0x10) != 0)
                                    int32_t x11_20 = x8_128.d - x10_46.d
                                    
                                    if (x9_88 s> x11_20)
                                        int64_t x9_87 = *(arg1 + 0x18)
                                        int64_t x0_65 = *(arg1 + 0x28)
                                        *(arg1 + 0xb8) = x8_128
                                        x9_87(x0_65, zx.q(x9_88 - x11_20))
                                        x9_86 = *(arg1 + 0xb8)
                                        x8_128 = *(arg1 + 0xc0)
                                        
                                        if (x9_86 u< x8_128)
                                            break
                                        
                                        continue
                                
                                void* x8_135 = x10_46 + zx.q(x9_88)
                                *(arg1 + 0xb8) = x8_135
                                x9_86 = x8_135
                                x8_128 = *(arg1 + 0xc0)
                                
                                if (x9_86 u< x8_128)
                                    break
                    else
                        int64_t x8_126
                        
                        if (*(arg1 + 0x10) == 0)
                            x8_126 = *(arg1 + 0xb8)
                        label_10006c0:
                            void* x8_130 = x8_126 + zx.q(x14_3)
                            *(arg1 + 0xb8) = x8_130
                            x9_86 = x8_130
                            x8_128 = *(arg1 + 0xc0)
                            
                            if (x9_86 u>= x8_128)
                                goto label_1000714
                        else
                            int64_t x9_85 = *(arg1 + 0xc0)
                            x8_126 = *(arg1 + 0xb8)
                            int32_t x10_45 = x9_85.d - x8_126.d
                            
                            if (x14_3 s<= x10_45)
                                goto label_10006c0
                            
                            int64_t x8_127 = *(arg1 + 0x18)
                            int64_t x0_64 = *(arg1 + 0x28)
                            *(arg1 + 0xb8) = x9_85
                            x8_127(x0_64, zx.q(x14_3 - x10_45))
                            x9_86 = *(arg1 + 0xb8)
                            x8_128 = *(arg1 + 0xc0)
                            
                            if (x9_86 u>= x8_128)
                                goto label_1000714
                    x10_46 = x9_86 + 1
                    *(arg1 + 0xb8) = x10_46
                    x9_88 = zx.d(*x9_86)
                    goto label_1000784
                
                char* x9_77 = *(arg1 + 0xb8)
                void* x8_111 = *(arg1 + 0xc0)
                
                if (x14_3 == 0)
                    if (x9_77 u>= x8_111)
                        if (*(arg1 + 0x30) != 0)
                            int32_t x0_60 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                            
                            if (x0_60 == 0)
                                x14_3 = 0
                                *(arg1 + 0x30) = 0
                                *(arg1 + 0x38) = 0
                                x8_111 = arg1 + 0x39
                            else
                                x14_3 = zx.d(*(arg1 + 0x38))
                                x8_111 = &(arg1 + 0x38)[sx.q(x0_60)]
                            
                            x15_1 = var_78_1.d
                            x9_77 = arg1 + 0x39
                            *(arg1 + 0xc0) = x8_111
                            *(arg1 + 0xb8) = arg1 + 0x39
                            goto label_10004b0
                        
                    label_100078c:
                        x19 = *(arg2 + 8)
                        
                        if (x19 != 0 && var_80_1 == 0 && arg2[9] s>= 1)
                            int32_t x9_90 = arg2[1] * *arg2
                            
                            if (x9_90 s>= 1)
                                int64_t i_3 = 0
                                
                                do
                                    if (zx.d(*(*(arg2 + 0x18) + i_3)) == 0)
                                        *(&arg2[0xd + sx.q(arg2[9])] + 3) = 0xff
                                        *(*(arg2 + 8) + zx.q(i_3.d << 2)) =
                                            arg2[0xd + sx.q(arg2[9])]
                                    
                                    i_3 += 1
                                while (i_3 != zx.q(x9_90))
                        
                        break
                    
                    *(arg1 + 0xb8) = &x9_77[1]
                    x14_3 = zx.d(*x9_77)
                    x9_77 = &x9_77[1]
                label_10004b0:
                    
                    if (x14_3 == 0)
                        goto label_100078c
                
                x14_3 -= 1
                uint32_t x8_109
                
                if (x9_77 u< x8_111)
                    *(arg1 + 0xb8) = &x9_77[1]
                    x8_109 = zx.d(*x9_77)
                else
                    x8_109 = *(arg1 + 0x30)
                    
                    if (x8_109 != 0)
                        var_70_1.d = x14_3
                        int32_t x0_62 =
                            (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                        void* x9_80
                        
                        if (x0_62 == 0)
                            x8_109 = 0
                            *(arg1 + 0x30) = 0
                            *(arg1 + 0x38) = 0
                            x9_80 = arg1 + 0x39
                        else
                            x8_109 = zx.d(*(arg1 + 0x38))
                            x9_80 = &(arg1 + 0x38)[sx.q(x0_62)]
                        
                        x15_1 = var_78_1.d
                        x14_3 = var_70_1.d
                        *(arg1 + 0xc0) = x9_80
                        *(arg1 + 0xb8) = arg1 + 0x39
                
                x13_3 |= x8_109 << x20_6
                x20_6 += 8
            
            return x19
        
        int32_t x0_58 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        void* x9_71
        
        if (x0_58 == 0)
            x8_101 = 0
            *(arg1 + 0x30) = 0
            *(arg1 + 0x38) = 0
            x9_71 = arg1 + 0x39
        else
            x8_101 = zx.d(*(arg1 + 0x38))
            x9_71 = &(arg1 + 0x38)[sx.q(x0_58)]
        
        *(arg1 + 0xc0) = x9_71
        *(arg1 + 0xb8) = arg1 + 0x39
        
        if (x8_101 u<= 0xc)
            goto label_1000388
    else
        *(arg1 + 0xb8) = &x8_100[1]
        x8_101 = zx.d(*x8_100)
        
        if (x8_101 u<= 0xc)
        label_1000388:
            uint64_t x9_72 = zx.q(1 << x8_101)
            var_98_2 = (2 << x8_101) - 1
            var_94_2 = x8_101 + 1
            
            if (x9_72.d s> 1)
                x8_104 = zx.q(x9_72.d)
            else
                x8_104 = 1
            
            var_90_1.q = x9_72
            goto label_10003a4

return nullptr
