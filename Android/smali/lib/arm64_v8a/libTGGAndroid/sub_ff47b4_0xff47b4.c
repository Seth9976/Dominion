// 函数: sub_ff47b4
// 地址: 0xff47b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg1[0x90d].d = 0
arg1[0x8dc] = 0
arg1[0x8db] = 0
arg1[0x8e8] = 0
arg1[0x8e7] = 0
arg1[0x8f4] = 0
arg1[0x8f3] = 0
arg1[0x900] = 0
arg1[0x8ff] = 0
int32_t result
uint128_t v0
uint128_t v1
uint128_t v2
result, v0, v1, v2 = sub_ff1908(arg1, 0)

if (result != 0)
    uint32_t x8_1 = zx.d(arg1[0x905].b)
    void* fp_1 = &arg1[0x905]
    int64_t* x15_1 = arg1
    
    if (x8_1 == 0xff)
        void* x19_1 = *x15_1
        char* x8_2 = *(x19_1 + 0xb8)
        
        if (x8_2 u< *(x19_1 + 0xc0))
            *(x19_1 + 0xb8) = &x8_2[1]
            
            if (zx.d(*x8_2) != 0xff)
                x8_1 = 0xff
            else
            label_ff789c:
                
                while (true)
                    void* x19_49 = *x15_1
                    char* x8_376 = *(x19_49 + 0xb8)
                    
                    if (x8_376 u< *(x19_49 + 0xc0))
                        *(x19_49 + 0xb8) = &x8_376[1]
                        x8_1 = zx.d(*x8_376)
                        
                        if (x8_1 != 0xff)
                            break
                    else
                        x8_1 = *(x19_49 + 0x30)
                        
                        if (x8_1 == 0)
                            break
                        
                        int32_t x0_120
                        x0_120, v0, v1, v2 = (*(x19_49 + 0x10))(*(x19_49 + 0x28), x19_49 + 0x38, 
                            zx.q(*(x19_49 + 0x34)))
                        void* x9_385
                        
                        if (x0_120 == 0)
                            x8_1 = 0
                            *(x19_49 + 0x30) = 0
                            x9_385 = x19_49 + 0x39
                            *(x19_49 + 0x38) = 0
                        else
                            x8_1 = zx.d(*(x19_49 + 0x38))
                            x9_385 = &(x19_49 + 0x38)[sx.q(x0_120)]
                        
                        x15_1 = arg1
                        *(x19_49 + 0xb8) = x19_49 + 0x39
                        *(x19_49 + 0xc0) = x9_385
                        
                        if (x8_1 != 0xff)
                            break
        else if (*(x19_1 + 0x30) == 0)
            x8_1 = 0xff
        else
            int32_t x0_1
            x0_1, v0, v1, v2 =
                (*(x19_1 + 0x10))(*(x19_1 + 0x28), x19_1 + 0x38, zx.q(*(x19_1 + 0x34)))
            uint32_t x8_6
            void* x9_5
            
            if (x0_1 == 0)
                x8_6 = 0
                *(x19_1 + 0x30) = 0
                x9_5 = x19_1 + 0x39
                *(x19_1 + 0x38) = 0
            else
                x8_6 = zx.d(*(x19_1 + 0x38))
                x9_5 = x19_1 + 0x38 + sx.q(x0_1)
            
            x15_1 = arg1
            *(x19_1 + 0xb8) = x19_1 + 0x39
            *(x19_1 + 0xc0) = x9_5
            
            if (x8_6 == 0xff)
                goto label_ff789c
            
            x8_1 = 0xff
    else
        *fp_1 = 0xff
    
    void* x23_1 = arg1 + 0x4824
    
    while (true)
        int32_t x9_7 = x8_1 & 0xff
        char const* const x9_386
        
        if (x9_7 == 0xda)
            void* x26_1 = *x15_1
            char* x9_8 = *(x26_1 + 0xb8)
            int64_t x8_7 = *(x26_1 + 0xc0)
            char x20_1
            
            if (x9_8 u>= x8_7)
                if (*(x26_1 + 0x30) == 0)
                    x20_1 = 0
                    
                    if (x9_8 u< x8_7)
                        goto label_ff4930
                    
                    goto label_ff4a6c
                
                int32_t x0_4
                x0_4, v0, v1, v2 =
                    (*(x26_1 + 0x10))(*(x26_1 + 0x28), x26_1 + 0x38, zx.q(*(x26_1 + 0x34)))
                void* x8_19
                
                if (x0_4 == 0)
                    x20_1 = 0
                    *(x26_1 + 0x30) = 0
                    x8_19 = x26_1 + 0x39
                    *(x26_1 + 0x38) = 0
                else
                    x20_1 = *(x26_1 + 0x38)
                    x8_19 = x26_1 + 0x38 + sx.q(x0_4)
                
                x15_1 = arg1
                x9_8 = x26_1 + 0x39
                *(x26_1 + 0xb8) = x9_8
                *(x26_1 + 0xc0) = x8_19
                
                if (x9_8 u< x8_19)
                    goto label_ff4930
                
                goto label_ff4a6c
            
            *(x26_1 + 0xb8) = &x9_8[1]
            x20_1 = *x9_8
            x9_8 = &x9_8[1]
            char* x8_9
            void* x19_2
            uint32_t x22_1
            
            if (x9_8 u>= x8_7)
            label_ff4a6c:
                
                if (*(x26_1 + 0x30) == 0)
                    x22_1 = 0
                    x19_2 = *x15_1
                    x8_9 = *(x19_2 + 0xb8)
                    
                    if (x8_9 u< *(x19_2 + 0xc0))
                        goto label_ff494c
                    
                    goto label_ff4b4c
                
                int32_t x0_8
                x0_8, v0, v1, v2 =
                    (*(x26_1 + 0x10))(*(x26_1 + 0x28), x26_1 + 0x38, zx.q(*(x26_1 + 0x34)))
                void* x8_28
                
                if (x0_8 == 0)
                    x22_1 = 0
                    *(x26_1 + 0x30) = 0
                    x8_28 = x26_1 + 0x39
                    *(x26_1 + 0x38) = 0
                else
                    x22_1 = zx.d(*(x26_1 + 0x38))
                    x8_28 = &(x26_1 + 0x38)[sx.q(x0_8)]
                
                x15_1 = arg1
                *(x26_1 + 0xb8) = x26_1 + 0x39
                *(x26_1 + 0xc0) = x8_28
                x19_2 = *x15_1
                x8_9 = *(x19_2 + 0xb8)
                
                if (x8_9 u< *(x19_2 + 0xc0))
                    goto label_ff494c
                
                goto label_ff4b4c
            
        label_ff4930:
            *(x26_1 + 0xb8) = &x9_8[1]
            x22_1 = zx.d(*x9_8)
            x19_2 = *x15_1
            x8_9 = *(x19_2 + 0xb8)
            uint32_t x8_10
            
            if (x8_9 u>= *(x19_2 + 0xc0))
            label_ff4b4c:
                
                if (*(x19_2 + 0x30) != 0)
                    int32_t x0_12
                    x0_12, v0, v1, v2 =
                        (*(x19_2 + 0x10))(*(x19_2 + 0x28), x19_2 + 0x38, zx.q(*(x19_2 + 0x34)))
                    void* x9_18
                    
                    if (x0_12 == 0)
                        x8_10 = 0
                        *(x19_2 + 0x30) = 0
                        x9_18 = x19_2 + 0x39
                        *(x19_2 + 0x38) = 0
                    else
                        x8_10 = zx.d(*(x19_2 + 0x38))
                        x9_18 = x19_2 + 0x38 + sx.q(x0_12)
                    
                    x15_1 = arg1
                    *(x19_2 + 0xb8) = x19_2 + 0x39
                    *(x19_2 + 0xc0) = x9_18
                    goto label_ff4b9c
                
                *(arg1 + 0x4854) = 0
                x9_386 = "bad SOS component count"
            else
            label_ff494c:
                *(x19_2 + 0xb8) = &x8_9[1]
                x8_10 = zx.d(*x8_9)
            label_ff4b9c:
                *(arg1 + 0x4854) = x8_10
                
                if (x8_10 - 1 u> 3)
                    x9_386 = "bad SOS component count"
                else
                    void* x26_3 = *x15_1
                    
                    if (*(x26_3 + 8) s< x8_10)
                        x9_386 = "bad SOS component count"
                    else if (((0xffff00ff & x22_1) | zx.d(x20_1) << 8) != (x8_10 << 1) + 6)
                        x9_386 = "bad SOS len"
                    else
                        int64_t x20_3 = 0
                        
                        while (true)
                            char* x8_38 = *(x26_3 + 0xb8)
                            char* x8_39
                            void* x19_3
                            uint32_t i
                            
                            if (x8_38 u>= *(x26_3 + 0xc0))
                                if (*(x26_3 + 0x30) == 0)
                                    i = 0
                                    x19_3 = *x15_1
                                    x8_39 = *(x19_3 + 0xb8)
                                    
                                    if (x8_39 u< *(x19_3 + 0xc0))
                                        goto label_ff4bf8
                                    
                                    goto label_ff4c78
                                
                                int32_t x0_14
                                x0_14, v0, v1, v2 = (*(x26_3 + 0x10))(*(x26_3 + 0x28), 
                                    x26_3 + 0x38, zx.q(*(x26_3 + 0x34)))
                                void* x8_45
                                
                                if (x0_14 == 0)
                                    i = 0
                                    *(x26_3 + 0x30) = 0
                                    x8_45 = x26_3 + 0x39
                                    *(x26_3 + 0x38) = 0
                                else
                                    i = zx.d(*(x26_3 + 0x38))
                                    x8_45 = &(x26_3 + 0x38)[sx.q(x0_14)]
                                
                                x15_1 = arg1
                                *(x26_3 + 0xb8) = x26_3 + 0x39
                                *(x26_3 + 0xc0) = x8_45
                                x19_3 = *x15_1
                                x8_39 = *(x19_3 + 0xb8)
                                
                                if (x8_39 u< *(x19_3 + 0xc0))
                                    goto label_ff4bf8
                                
                                goto label_ff4c78
                            
                            *(x26_3 + 0xb8) = &x8_38[1]
                            i = zx.d(*x8_38)
                            x19_3 = *x15_1
                            x8_39 = *(x19_3 + 0xb8)
                            uint32_t x8_40
                            int64_t x9_31
                            uint64_t x10_8
                            
                            if (x8_39 u>= *(x19_3 + 0xc0))
                            label_ff4c78:
                                x8_40 = *(x19_3 + 0x30)
                                
                                if (x8_40 == 0)
                                    goto label_ff4ca8
                                
                                int32_t x0_16
                                x0_16, v0, v1, v2 = (*(x19_3 + 0x10))(*(x19_3 + 0x28), 
                                    x19_3 + 0x38, zx.q(*(x19_3 + 0x34)))
                                void* x9_30
                                
                                if (x0_16 == 0)
                                    x8_40 = 0
                                    *(x19_3 + 0x30) = 0
                                    x9_30 = x19_3 + 0x39
                                    *(x19_3 + 0x38) = 0
                                else
                                    x8_40 = zx.d(*(x19_3 + 0x38))
                                    x9_30 = x19_3 + 0x38 + sx.q(x0_16)
                                
                                x15_1 = arg1
                                *(x19_3 + 0xb8) = x19_3 + 0x39
                                *(x19_3 + 0xc0) = x9_30
                                x26_3 = *x15_1
                                x10_8 = zx.q(*(x26_3 + 8))
                                
                                if (x10_8.d s>= 1)
                                    goto label_ff4cb8
                                
                                x9_31 = 0
                            else
                            label_ff4bf8:
                                *(x19_3 + 0xb8) = &x8_39[1]
                                x8_40 = zx.d(*x8_39)
                            label_ff4ca8:
                                x26_3 = *x15_1
                                x10_8 = zx.q(*(x26_3 + 8))
                                
                                if (x10_8.d s< 1)
                                    x9_31 = 0
                                else
                                label_ff4cb8:
                                    void* x11_1 = &x15_1[0x8d4]
                                    x9_31 = 0
                                    
                                    while (*x11_1 != i)
                                        x9_31 += 1
                                        x11_1 += 0x60
                                        
                                        if (x10_8 == x9_31)
                                            return 0
                            
                            if (x9_31.d != x10_8.d)
                                *(x15_1 + mulu.dp.d(x9_31.d, 0x60) + 0x46b0) = x8_40 u>> 4
                                
                                if (x8_40 u>= 0x40)
                                    x9_386 = "bad DC huff"
                                    goto label_ff7b70
                                
                                int32_t x8_47 = x8_40 & 0xf
                                *(x15_1 + zx.q(x9_31.d) * 0x60 + 0x46b4) = x8_47
                                
                                if (x8_47 u>= 4)
                                    x9_386 = "bad AC huff"
                                    goto label_ff7b70
                                
                                *(x15_1 + (x20_3 << 2) + 0x4858) = x9_31.d
                                x20_3 += 1
                                
                                if (x20_3 s< sx.q(*(arg1 + 0x4854)))
                                    continue
                                else
                                    char* x8_50 = *(x26_3 + 0xb8)
                                    uint32_t x8_51
                                    
                                    if (x8_50 u>= *(x26_3 + 0xc0))
                                        x8_51 = *(x26_3 + 0x30)
                                        
                                        if (x8_51 != 0)
                                            int32_t x0_22
                                            x0_22, v0, v1, v2 = (*(x26_3 + 0x10))(*(x26_3 + 0x28), 
                                                x26_3 + 0x38, zx.q(*(x26_3 + 0x34)))
                                            void* x9_42
                                            
                                            if (x0_22 == 0)
                                                x8_51 = 0
                                                *(x26_3 + 0x30) = 0
                                                x9_42 = x26_3 + 0x39
                                                *(x26_3 + 0x38) = 0
                                            else
                                                x8_51 = zx.d(*(x26_3 + 0x38))
                                                x9_42 = x26_3 + 0x38 + sx.q(x0_22)
                                            
                                            x15_1 = arg1
                                            *(x26_3 + 0xb8) = x26_3 + 0x39
                                            *(x26_3 + 0xc0) = x9_42
                                    else
                                        *(x26_3 + 0xb8) = &x8_50[1]
                                        x8_51 = zx.d(*x8_50)
                                    
                                    *(arg1 + 0x4834) = x8_51
                                    void* x19_4 = *x15_1
                                    char* x8_59 = *(x19_4 + 0xb8)
                                    uint32_t x8_60
                                    
                                    if (x8_59 u>= *(x19_4 + 0xc0))
                                        x8_60 = *(x19_4 + 0x30)
                                        
                                        if (x8_60 != 0)
                                            int32_t x0_24
                                            x0_24, v0, v1, v2 = (*(x19_4 + 0x10))(*(x19_4 + 0x28), 
                                                x19_4 + 0x38, zx.q(*(x19_4 + 0x34)))
                                            void* x9_47
                                            
                                            if (x0_24 == 0)
                                                x8_60 = 0
                                                *(x19_4 + 0x30) = 0
                                                x9_47 = x19_4 + 0x39
                                                *(x19_4 + 0x38) = 0
                                            else
                                                x8_60 = zx.d(*(x19_4 + 0x38))
                                                x9_47 = &(x19_4 + 0x38)[sx.q(x0_24)]
                                            
                                            x15_1 = arg1
                                            *(x19_4 + 0xb8) = x19_4 + 0x39
                                            *(x19_4 + 0xc0) = x9_47
                                    else
                                        *(x19_4 + 0xb8) = &x8_59[1]
                                        x8_60 = zx.d(*x8_59)
                                    
                                    arg1[0x907].d = x8_60
                                    void* x19_5 = *x15_1
                                    char* x8_62 = *(x19_5 + 0xb8)
                                    uint32_t x8_63
                                    
                                    if (x8_62 u>= *(x19_5 + 0xc0))
                                        x8_63 = *(x19_5 + 0x30)
                                        
                                        if (x8_63 != 0)
                                            int32_t x0_26
                                            x0_26, v0, v1, v2 = (*(x19_5 + 0x10))(*(x19_5 + 0x28), 
                                                x19_5 + 0x38, zx.q(*(x19_5 + 0x34)))
                                            void* x9_52
                                            
                                            if (x0_26 == 0)
                                                x8_63 = 0
                                                *(x19_5 + 0x30) = 0
                                                x9_52 = x19_5 + 0x39
                                                *(x19_5 + 0x38) = 0
                                            else
                                                x8_63 = zx.d(*(x19_5 + 0x38))
                                                x9_52 = &(x19_5 + 0x38)[sx.q(x0_26)]
                                            
                                            x15_1 = arg1
                                            *(x19_5 + 0xb8) = x19_5 + 0x39
                                            *(x19_5 + 0xc0) = x9_52
                                    else
                                        *(x19_5 + 0xb8) = &x8_62[1]
                                        x8_63 = zx.d(*x8_62)
                                    
                                    int32_t x9_53 = arg1[0x906].d
                                    int32_t x11_3 = *(arg1 + 0x4834)
                                    uint32_t x12_2 = x8_63 u>> 4
                                    int32_t x10_18 = x8_63 & 0xf
                                    *(arg1 + 0x483c) = x12_2
                                    arg1[0x908].d = x10_18
                                    
                                    if (x9_53 != 0)
                                        if (x11_3 s> 0x3f)
                                            x9_386 = "bad SOS"
                                            goto label_ff7b70
                                        
                                        int32_t x12_3 = arg1[0x907].d
                                        
                                        if (x12_3 s<= 0x3f && x11_3 s<= x12_3 && x8_63 u<= 0xdf
                                                && x10_18 u< 0xe)
                                            goto label_ff5034
                                        
                                        x9_386 = "bad SOS"
                                        goto label_ff7b70
                                    
                                    if (x11_3 != 0 || (x12_2 | x10_18) != 0)
                                        x9_386 = "bad SOS"
                                        goto label_ff7b70
                                    
                                    arg1[0x907].d = 0x3f
                                label_ff5034:
                                    int32_t x8_66 = arg1[0x90d].d
                                    arg1[0x905].b = 0xff
                                    int32_t x10_19 = *(arg1 + 0x4854)
                                    int32_t x8_67
                                    
                                    x8_67 = x8_66 == 0 ? 0x7fffffff : x8_66
                                    
                                    arg1[0x904] = 0
                                    *(arg1 + 0x482c) = 0
                                    arg1[0x8fb].d = 0
                                    arg1[0x8ef].d = 0
                                    arg1[0x8e3].d = 0
                                    arg1[0x8d7].d = 0
                                    *(arg1 + 0x486c) = x8_67
                                    *(arg1 + 0x4844) = 0
                                    int32_t var_120
                                    int32_t* var_100
                                    int32_t var_f8
                                    
                                    if (x9_53 != 0)
                                        if (x10_19 != 1)
                                            int32_t x10_70 = *(arg1 + 0x4694)
                                            
                                            if (x10_70 s< 1)
                                            label_ff7654:
                                                x8_1 = zx.d(*fp_1)
                                            else
                                                int32_t x9_250 = arg1[0x8d2].d
                                                var_f8 = 0
                                                
                                                while (true)
                                                    if (x9_250 s>= 1)
                                                        var_100.d = 0
                                                        
                                                        while (true)
                                                            int32_t x9_251 = *(arg1 + 0x4854)
                                                            
                                                            if (x9_251 s>= 1)
                                                                int64_t x12_24 = 0
                                                                
                                                                while (true)
                                                                    int64_t x10_71 =
                                                                        sx.q(*(x15_1 + (x12_24 << 2) + 0x4858))
                                                                    int32_t* x8_248 =
                                                                        x15_1 + x10_71 * 0x60 + 0x46a8
                                                                    int32_t x8_249 = *x8_248
                                                                    
                                                                    if (x8_249 s>= 1)
                                                                        void* x10_72 = x15_1 + x10_71 * 0x60
                                                                        var_120.q = x10_72 + 0x46a4
                                                                        int32_t x9_253 = *(x10_72 + 0x46a4)
                                                                        int32_t x27_6 = 0
                                                                        
                                                                        while (true)
                                                                            if (x9_253 s>= 1)
                                                                                if (arg1[0x907].d == 0)
                                                                                    int32_t x28_4 = 0
                                                                                    int16_t* x26_11 = *(x10_72 + 0x46f0) + (
                                                                                        sx.q((*(x10_72 + 0x46f8)
                                                                                        * (x27_6 + x8_249 * var_f8)
                                                                                        + x9_253 * var_100.d) << 6) << 1)
                                                                                    
                                                                                    do
                                                                                        int64_t x20_8 = sx.q(*(x10_72 + 0x46b0))
                                                                                        
                                                                                        if (*x23_1 s<= 0xf)
                                                                                            int32_t i_1
                                                                                            
                                                                                            do
                                                                                                uint32_t x8_256
                                                                                                
                                                                                                if (*(arg1 + 0x482c) != 0)
                                                                                                    x8_256 = 0
                                                                                                else
                                                                                                    void* x19_28 = *x15_1
                                                                                                    char* x8_260 = *(x19_28 + 0xb8)
                                                                                                    
                                                                                                    if (x8_260 u>= *(x19_28 + 0xc0))
                                                                                                        x8_256 = *(x19_28 + 0x30)
                                                                                                        
                                                                                                        if (x8_256 != 0)
                                                                                                            int32_t x0_78
                                                                                                            x0_78, v0, v1, v2 = (*(x19_28 + 0x10))(
                                                                                                                *(x19_28 + 0x28), x19_28 + 0x38, 
                                                                                                                zx.q(*(x19_28 + 0x34)))
                                                                                                            void* x9_259
                                                                                                            
                                                                                                            if (x0_78 == 0)
                                                                                                                x8_256 = 0
                                                                                                                *(x19_28 + 0x30) = 0
                                                                                                                x9_259 = x19_28 + 0x39
                                                                                                                *(x19_28 + 0x38) = 0
                                                                                                            else
                                                                                                                x8_256 = zx.d(*(x19_28 + 0x38))
                                                                                                                x9_259 = &(x19_28 + 0x38)[sx.q(x0_78)]
                                                                                                            
                                                                                                            x15_1 = arg1
                                                                                                            *(x19_28 + 0xb8) = x19_28 + 0x39
                                                                                                            *(x19_28 + 0xc0) = x9_259
                                                                                                            
                                                                                                            if (x8_256 == 0xff)
                                                                                                                goto label_ff6930
                                                                                                    else
                                                                                                        *(x19_28 + 0xb8) = &x8_260[1]
                                                                                                        x8_256 = zx.d(*x8_260)
                                                                                                        
                                                                                                        if (x8_256 == 0xff)
                                                                                                        label_ff6930:
                                                                                                            void* x19_29 = *x15_1
                                                                                                            char* x8_262 = *(x19_29 + 0xb8)
                                                                                                            uint32_t x8_263
                                                                                                            
                                                                                                            if (x8_262 u>= *(x19_29 + 0xc0))
                                                                                                                x8_263 = *(x19_29 + 0x30)
                                                                                                                
                                                                                                                if (x8_263 == 0)
                                                                                                                    goto label_ff699c
                                                                                                                
                                                                                                            label_ff6968:
                                                                                                                int32_t x0_80
                                                                                                                x0_80, v0, v1, v2 = (*(x19_29 + 0x10))(
                                                                                                                    *(x19_29 + 0x28), x19_29 + 0x38, 
                                                                                                                    zx.q(*(x19_29 + 0x34)))
                                                                                                                void* x9_264
                                                                                                                
                                                                                                                if (x0_80 == 0)
                                                                                                                    x8_263 = 0
                                                                                                                    *(x19_29 + 0x30) = 0
                                                                                                                    x9_264 = x19_29 + 0x39
                                                                                                                    *(x19_29 + 0x38) = 0
                                                                                                                else
                                                                                                                    x8_263 = zx.d(*(x19_29 + 0x38))
                                                                                                                    x9_264 = x19_29 + 0x38 + sx.q(x0_80)
                                                                                                                
                                                                                                                x15_1 = arg1
                                                                                                                *(x19_29 + 0xb8) = x19_29 + 0x39
                                                                                                                *(x19_29 + 0xc0) = x9_264
                                                                                                                goto label_ff699c
                                                                                                            
                                                                                                            int32_t x9_265
                                                                                                            
                                                                                                            while (true)
                                                                                                                *(x19_29 + 0xb8) = &x8_262[1]
                                                                                                                x8_263 = zx.d(*x8_262)
                                                                                                            label_ff699c:
                                                                                                                x9_265 = x8_263 & 0xff
                                                                                                                
                                                                                                                if (x9_265 != 0xff)
                                                                                                                    break
                                                                                                                
                                                                                                                x19_29 = *x15_1
                                                                                                                x8_262 = *(x19_29 + 0xb8)
                                                                                                                
                                                                                                                if (x8_262 u>= *(x19_29 + 0xc0))
                                                                                                                    x8_263 = 0
                                                                                                                    
                                                                                                                    if (*(x19_29 + 0x30) != 0)
                                                                                                                        goto label_ff6968
                                                                                                                    
                                                                                                                    goto label_ff699c
                                                                                                            
                                                                                                            if (x9_265 != 0)
                                                                                                                *fp_1 = x8_263.b
                                                                                                                *(arg1 + 0x482c) = 1
                                                                                                                
                                                                                                                if (*(arg1 + 0x483c) != 0)
                                                                                                                    goto label_ff686c
                                                                                                                
                                                                                                                goto label_ff6b60
                                                                                                            
                                                                                                            x8_256 = 0xff
                                                                                                
                                                                                                i_1 = *x23_1
                                                                                                arg1[0x904].d |= x8_256 << (0x18 - i_1)
                                                                                                *x23_1 = i_1 + 8
                                                                                            while (i_1 s< 0x11)
                                                                                        
                                                                                        if (*(arg1 + 0x483c) == 0)
                                                                                        label_ff6b60:
                                                                                            __builtin_memset(x26_11, 0, 0x80)
                                                                                            int32_t x0_86
                                                                                            x0_86, v0, v1, v2 = sub_ff88e0(x15_1, 
                                                                                                x15_1 + x20_8 * 0x690 + 8)
                                                                                            int32_t x8_289
                                                                                            
                                                                                            if (x0_86 == 0)
                                                                                                x15_1 = arg1
                                                                                                x8_289 = 0
                                                                                            else
                                                                                                x15_1 = arg1
                                                                                                
                                                                                                if (*x23_1 s< x0_86)
                                                                                                    int32_t i_2
                                                                                                    
                                                                                                    do
                                                                                                        uint32_t x8_277
                                                                                                        
                                                                                                        if (*(arg1 + 0x482c) != 0)
                                                                                                            x8_277 = 0
                                                                                                        else
                                                                                                            void* x19_32 = *x15_1
                                                                                                            char* x8_281 = *(x19_32 + 0xb8)
                                                                                                            
                                                                                                            if (x8_281 u>= *(x19_32 + 0xc0))
                                                                                                                x8_277 = *(x19_32 + 0x30)
                                                                                                                
                                                                                                                if (x8_277 != 0)
                                                                                                                    int32_t x0_88
                                                                                                                    x0_88, v0, v1, v2 = (*(x19_32 + 0x10))(
                                                                                                                        *(x19_32 + 0x28), x19_32 + 0x38, 
                                                                                                                        zx.q(*(x19_32 + 0x34)))
                                                                                                                    void* x9_286
                                                                                                                    
                                                                                                                    if (x0_88 == 0)
                                                                                                                        x8_277 = 0
                                                                                                                        *(x19_32 + 0x30) = 0
                                                                                                                        x9_286 = x19_32 + 0x39
                                                                                                                        *(x19_32 + 0x38) = 0
                                                                                                                    else
                                                                                                                        x8_277 = zx.d(*(x19_32 + 0x38))
                                                                                                                        x9_286 = &(x19_32 + 0x38)[sx.q(x0_88)]
                                                                                                                    
                                                                                                                    x15_1 = arg1
                                                                                                                    *(x19_32 + 0xb8) = x19_32 + 0x39
                                                                                                                    *(x19_32 + 0xc0) = x9_286
                                                                                                                    
                                                                                                                    if (x8_277 == 0xff)
                                                                                                                        goto label_ff6c38
                                                                                                            else
                                                                                                                *(x19_32 + 0xb8) = &x8_281[1]
                                                                                                                x8_277 = zx.d(*x8_281)
                                                                                                                
                                                                                                                if (x8_277 == 0xff)
                                                                                                                label_ff6c38:
                                                                                                                    void* x19_33 = *x15_1
                                                                                                                    char* x8_283 = *(x19_33 + 0xb8)
                                                                                                                    uint32_t x8_284
                                                                                                                    
                                                                                                                    if (x8_283 u>= *(x19_33 + 0xc0))
                                                                                                                        x8_284 = *(x19_33 + 0x30)
                                                                                                                        
                                                                                                                        if (x8_284 == 0)
                                                                                                                            goto label_ff6ca4
                                                                                                                        
                                                                                                                    label_ff6c70:
                                                                                                                        int32_t x0_90
                                                                                                                        x0_90, v0, v1, v2 = (*(x19_33 + 0x10))(
                                                                                                                            *(x19_33 + 0x28), x19_33 + 0x38, 
                                                                                                                            zx.q(*(x19_33 + 0x34)))
                                                                                                                        void* x9_291
                                                                                                                        
                                                                                                                        if (x0_90 == 0)
                                                                                                                            x8_284 = 0
                                                                                                                            *(x19_33 + 0x30) = 0
                                                                                                                            x9_291 = x19_33 + 0x39
                                                                                                                            *(x19_33 + 0x38) = 0
                                                                                                                        else
                                                                                                                            x8_284 = zx.d(*(x19_33 + 0x38))
                                                                                                                            x9_291 = x19_33 + 0x38 + sx.q(x0_90)
                                                                                                                        
                                                                                                                        x15_1 = arg1
                                                                                                                        *(x19_33 + 0xb8) = x19_33 + 0x39
                                                                                                                        *(x19_33 + 0xc0) = x9_291
                                                                                                                        goto label_ff6ca4
                                                                                                                    
                                                                                                                    int32_t x9_292
                                                                                                                    
                                                                                                                    while (true)
                                                                                                                        *(x19_33 + 0xb8) = &x8_283[1]
                                                                                                                        x8_284 = zx.d(*x8_283)
                                                                                                                    label_ff6ca4:
                                                                                                                        x9_292 = x8_284 & 0xff
                                                                                                                        
                                                                                                                        if (x9_292 != 0xff)
                                                                                                                            break
                                                                                                                        
                                                                                                                        x19_33 = *x15_1
                                                                                                                        x8_283 = *(x19_33 + 0xb8)
                                                                                                                        
                                                                                                                        if (x8_283 u>= *(x19_33 + 0xc0))
                                                                                                                            x8_284 = 0
                                                                                                                            
                                                                                                                            if (*(x19_33 + 0x30) != 0)
                                                                                                                                goto label_ff6c70
                                                                                                                            
                                                                                                                            goto label_ff6ca4
                                                                                                                    
                                                                                                                    if (x9_292 != 0)
                                                                                                                        *fp_1 = x8_284.b
                                                                                                                        *(arg1 + 0x482c) = 1
                                                                                                                        break
                                                                                                                    
                                                                                                                    x8_277 = 0xff
                                                                                                        
                                                                                                        i_2 = *x23_1
                                                                                                        arg1[0x904].d |= x8_277 << (0x18 - i_2)
                                                                                                        *x23_1 = i_2 + 8
                                                                                                    while (i_2 s< 0x11)
                                                                                                
                                                                                                if (x0_86 u>= 0x11)
                                                                                                    return __assert2(
                                                                                                        "C:\x\ax2017\Engine\android\A"
                                                                                                    "ndroidEngine\..\..\ExternalCode\s"
                                                                                                    "tb/stb_image.h", 
                                                                                                        0x773, 
                                                                                                        "int stbi__extend_receive(stbi__jpeg *, "
                                                                                                    "int)", 
                                                                                                        "n >= 0 && n < (int) (sizeof(stbi__bmask)/sizeof(*stbi__bmask))")
                                                                                                
                                                                                                int32_t x8_290 = arg1[0x904].d
                                                                                                uint64_t x9_298 = zx.q(x0_86) << 2
                                                                                                int32_t x10_87 =
                                                                                                    *(&data_868654 + x9_298)
                                                                                                int32_t x11_33 =
                                                                                                    ror.d(x8_290, neg.d(x0_86))
                                                                                                arg1[0x904].d = x11_33 & not.d(x10_87)
                                                                                                x8_289 = (*(&data_868698 + x9_298)
                                                                                                    & not.d(x8_290 s>> 0x1f))
                                                                                                    + (x10_87 & x11_33)
                                                                                                *x23_1 -= x0_86
                                                                                            
                                                                                            int32_t x8_292 =
                                                                                                *(x10_72 + 0x46b8) + x8_289
                                                                                            *(x10_72 + 0x46b8) = x8_292
                                                                                            *x26_11 = (x8_292 << arg1[0x908].d).w
                                                                                        else
                                                                                        label_ff686c:
                                                                                            int32_t x9_268 = *x23_1
                                                                                            int32_t x8_267
                                                                                            
                                                                                            if (x9_268 s> 0)
                                                                                            label_ff6cec:
                                                                                                x8_267 = arg1[0x904].d
                                                                                            else
                                                                                                int32_t i_3
                                                                                                
                                                                                                do
                                                                                                    uint32_t x8_265
                                                                                                    
                                                                                                    if (*(arg1 + 0x482c) != 0)
                                                                                                        x8_265 = 0
                                                                                                    else
                                                                                                        void* x19_30 = *x15_1
                                                                                                        char* x8_269 = *(x19_30 + 0xb8)
                                                                                                        
                                                                                                        if (x8_269 u>= *(x19_30 + 0xc0))
                                                                                                            x8_265 = *(x19_30 + 0x30)
                                                                                                            
                                                                                                            if (x8_265 != 0)
                                                                                                                int32_t x0_82
                                                                                                                x0_82, v0, v1, v2 = (*(x19_30 + 0x10))(
                                                                                                                    *(x19_30 + 0x28), x19_30 + 0x38, 
                                                                                                                    zx.q(*(x19_30 + 0x34)))
                                                                                                                void* x9_273
                                                                                                                
                                                                                                                if (x0_82 == 0)
                                                                                                                    x8_265 = 0
                                                                                                                    *(x19_30 + 0x30) = 0
                                                                                                                    x9_273 = x19_30 + 0x39
                                                                                                                    *(x19_30 + 0x38) = 0
                                                                                                                else
                                                                                                                    x8_265 = zx.d(*(x19_30 + 0x38))
                                                                                                                    x9_273 = &(x19_30 + 0x38)[sx.q(x0_82)]
                                                                                                                
                                                                                                                x15_1 = arg1
                                                                                                                *(x19_30 + 0xb8) = x19_30 + 0x39
                                                                                                                *(x19_30 + 0xc0) = x9_273
                                                                                                                
                                                                                                                if (x8_265 == 0xff)
                                                                                                                    goto label_ff6a88
                                                                                                        else
                                                                                                            *(x19_30 + 0xb8) = &x8_269[1]
                                                                                                            x8_265 = zx.d(*x8_269)
                                                                                                            
                                                                                                            if (x8_265 == 0xff)
                                                                                                            label_ff6a88:
                                                                                                                void* x19_31 = *x15_1
                                                                                                                char* x8_271 = *(x19_31 + 0xb8)
                                                                                                                uint32_t x8_272
                                                                                                                
                                                                                                                if (x8_271 u>= *(x19_31 + 0xc0))
                                                                                                                    x8_272 = *(x19_31 + 0x30)
                                                                                                                    
                                                                                                                    if (x8_272 == 0)
                                                                                                                        goto label_ff6af4
                                                                                                                    
                                                                                                                label_ff6ac0:
                                                                                                                    int32_t x0_84
                                                                                                                    x0_84, v0, v1, v2 = (*(x19_31 + 0x10))(
                                                                                                                        *(x19_31 + 0x28), x19_31 + 0x38, 
                                                                                                                        zx.q(*(x19_31 + 0x34)))
                                                                                                                    void* x9_278
                                                                                                                    
                                                                                                                    if (x0_84 == 0)
                                                                                                                        x8_272 = 0
                                                                                                                        *(x19_31 + 0x30) = 0
                                                                                                                        x9_278 = x19_31 + 0x39
                                                                                                                        *(x19_31 + 0x38) = 0
                                                                                                                    else
                                                                                                                        x8_272 = zx.d(*(x19_31 + 0x38))
                                                                                                                        x9_278 = x19_31 + 0x38 + sx.q(x0_84)
                                                                                                                    
                                                                                                                    x15_1 = arg1
                                                                                                                    *(x19_31 + 0xb8) = x19_31 + 0x39
                                                                                                                    *(x19_31 + 0xc0) = x9_278
                                                                                                                    goto label_ff6af4
                                                                                                                
                                                                                                                int32_t x9_279
                                                                                                                
                                                                                                                while (true)
                                                                                                                    *(x19_31 + 0xb8) = &x8_271[1]
                                                                                                                    x8_272 = zx.d(*x8_271)
                                                                                                                label_ff6af4:
                                                                                                                    x9_279 = x8_272 & 0xff
                                                                                                                    
                                                                                                                    if (x9_279 != 0xff)
                                                                                                                        break
                                                                                                                    
                                                                                                                    x19_31 = *x15_1
                                                                                                                    x8_271 = *(x19_31 + 0xb8)
                                                                                                                    
                                                                                                                    if (x8_271 u>= *(x19_31 + 0xc0))
                                                                                                                        x8_272 = 0
                                                                                                                        
                                                                                                                        if (*(x19_31 + 0x30) != 0)
                                                                                                                            goto label_ff6ac0
                                                                                                                        
                                                                                                                        goto label_ff6af4
                                                                                                                
                                                                                                                if (x9_279 != 0)
                                                                                                                    *fp_1 = x8_272.b
                                                                                                                    *(arg1 + 0x482c) = 1
                                                                                                                    x9_268 = *x23_1
                                                                                                                    goto label_ff6cec
                                                                                                                
                                                                                                                x8_265 = 0xff
                                                                                                    
                                                                                                    i_3 = *x23_1
                                                                                                    x9_268 = i_3 + 8
                                                                                                    x8_267 =
                                                                                                        x8_265 << (0x18 - i_3) | arg1[0x904].d
                                                                                                    arg1[0x904].d = x8_267
                                                                                                    *x23_1 = x9_268
                                                                                                while (i_3 s< 0x11)
                                                                                            
                                                                                            arg1[0x904].d = x8_267 << 1
                                                                                            *x23_1 = x9_268 - 1
                                                                                            
                                                                                            if ((x8_267 & 0x80000000) != 0)
                                                                                                *x26_11 +=
                                                                                                    (0x10000 << arg1[0x908].d u>> 0x10).w
                                                                                        
                                                                                        x28_4 += 1
                                                                                        x9_253 = *var_120.q
                                                                                        x8_249 = *x8_248
                                                                                        
                                                                                        if (x28_4 s>= x9_253)
                                                                                            goto label_ff6808
                                                                                        
                                                                                        x26_11 = *(x10_72 + 0x46f0) + (sx.q((
                                                                                            x28_4 + x9_253 * var_100.d +
                                                                                            *(x10_72 + 0x46f8)
                                                                                            * (x27_6 + x8_249 * var_f8)) << 6)
                                                                                            << 1)
                                                                                    while (arg1[0x907].d == 0)
                                                                                
                                                                                break
                                                                            
                                                                        label_ff6808:
                                                                            x27_6 += 1
                                                                            
                                                                            if (x27_6 s>= x8_249)
                                                                                x9_251 = *(arg1 + 0x4854)
                                                                                goto label_ff6df8
                                                                        
                                                                        break
                                                                    
                                                                label_ff6df8:
                                                                    x12_24 += 1
                                                                    
                                                                    if (x12_24 s>= sx.q(x9_251))
                                                                        x8_67 = *(arg1 + 0x486c)
                                                                        goto label_ff6e08
                                                                
                                                                goto label_ff7ba0
                                                            
                                                        label_ff6e08:
                                                            int32_t temp1_1 = x8_67
                                                            x8_67 -= 1
                                                            *(arg1 + 0x486c) = x8_67
                                                            
                                                            if (temp1_1 s<= 1)
                                                                if (*x23_1 s<= 0x17)
                                                                    int32_t i_4
                                                                    
                                                                    do
                                                                        uint32_t x8_298
                                                                        
                                                                        if (*(arg1 + 0x482c) != 0)
                                                                            x8_298 = 0
                                                                        else
                                                                            void* x19_34 = *x15_1
                                                                            char* x8_302 = *(x19_34 + 0xb8)
                                                                            
                                                                            if (x8_302 u>= *(x19_34 + 0xc0))
                                                                                x8_298 = *(x19_34 + 0x30)
                                                                                
                                                                                if (x8_298 != 0)
                                                                                    int32_t x0_92
                                                                                    x0_92, v0, v1, v2 = (*(x19_34 + 0x10))(
                                                                                        *(x19_34 + 0x28), x19_34 + 0x38, 
                                                                                        zx.q(*(x19_34 + 0x34)))
                                                                                    void* x9_308
                                                                                    
                                                                                    if (x0_92 == 0)
                                                                                        x8_298 = 0
                                                                                        *(x19_34 + 0x30) = 0
                                                                                        x9_308 = x19_34 + 0x39
                                                                                        *(x19_34 + 0x38) = 0
                                                                                    else
                                                                                        x8_298 = zx.d(*(x19_34 + 0x38))
                                                                                        x9_308 = &(x19_34 + 0x38)[sx.q(x0_92)]
                                                                                    
                                                                                    x15_1 = arg1
                                                                                    *(x19_34 + 0xb8) = x19_34 + 0x39
                                                                                    *(x19_34 + 0xc0) = x9_308
                                                                                    goto label_ff6ec8
                                                                            else
                                                                                *(x19_34 + 0xb8) = &x8_302[1]
                                                                                x8_298 = zx.d(*x8_302)
                                                                            label_ff6ec8:
                                                                                
                                                                                if (x8_298 == 0xff)
                                                                                    void* x19_35 = *x15_1
                                                                                    char* x8_304 = *(x19_35 + 0xb8)
                                                                                    uint32_t x8_305
                                                                                    
                                                                                    if (x8_304 u>= *(x19_35 + 0xc0))
                                                                                        x8_305 = *(x19_35 + 0x30)
                                                                                        
                                                                                        if (x8_305 == 0)
                                                                                            goto label_ff6f3c
                                                                                        
                                                                                    label_ff6f08:
                                                                                        int32_t x0_94
                                                                                        x0_94, v0, v1, v2 = (*(x19_35 + 0x10))(
                                                                                            *(x19_35 + 0x28), x19_35 + 0x38, 
                                                                                            zx.q(*(x19_35 + 0x34)))
                                                                                        void* x9_313
                                                                                        
                                                                                        if (x0_94 == 0)
                                                                                            x8_305 = 0
                                                                                            *(x19_35 + 0x30) = 0
                                                                                            x9_313 = x19_35 + 0x39
                                                                                            *(x19_35 + 0x38) = 0
                                                                                        else
                                                                                            x8_305 = zx.d(*(x19_35 + 0x38))
                                                                                            x9_313 = x19_35 + 0x38 + sx.q(x0_94)
                                                                                        
                                                                                        x15_1 = arg1
                                                                                        *(x19_35 + 0xb8) = x19_35 + 0x39
                                                                                        *(x19_35 + 0xc0) = x9_313
                                                                                        goto label_ff6f3c
                                                                                    
                                                                                    int32_t x9_314
                                                                                    
                                                                                    while (true)
                                                                                        *(x19_35 + 0xb8) = &x8_304[1]
                                                                                        x8_305 = zx.d(*x8_304)
                                                                                    label_ff6f3c:
                                                                                        x9_314 = x8_305 & 0xff
                                                                                        
                                                                                        if (x9_314 != 0xff)
                                                                                            break
                                                                                        
                                                                                        x19_35 = *x15_1
                                                                                        x8_304 = *(x19_35 + 0xb8)
                                                                                        
                                                                                        if (x8_304 u>= *(x19_35 + 0xc0))
                                                                                            x8_305 = 0
                                                                                            
                                                                                            if (*(x19_35 + 0x30) != 0)
                                                                                                goto label_ff6f08
                                                                                            
                                                                                            goto label_ff6f3c
                                                                                    
                                                                                    if (x9_314 != 0)
                                                                                        *fp_1 = x8_305.b
                                                                                        *(arg1 + 0x482c) = 1
                                                                                        break
                                                                                    
                                                                                    x8_298 = 0xff
                                                                        
                                                                        i_4 = *x23_1
                                                                        arg1[0x904].d |= x8_298 << (0x18 - i_4)
                                                                        *x23_1 = i_4 + 8
                                                                    while (i_4 s< 0x11)
                                                                
                                                                x8_1 = zx.d(*fp_1)
                                                                
                                                                if ((x8_1 & 0xf8) != 0xd0)
                                                                    break
                                                                
                                                                int32_t x8_307 = arg1[0x90d].d
                                                                arg1[0x905].b = 0xff
                                                                
                                                                x8_67 =
                                                                    x8_307 == 0 ? 0x7fffffff : x8_307
                                                                
                                                                arg1[0x904] = 0
                                                                *(arg1 + 0x482c) = 0
                                                                arg1[0x8fb].d = 0
                                                                arg1[0x8ef].d = 0
                                                                arg1[0x8e3].d = 0
                                                                arg1[0x8d7].d = 0
                                                                *(arg1 + 0x486c) = x8_67
                                                                *(arg1 + 0x4844) = 0
                                                            
                                                            x9_250 = arg1[0x8d2].d
                                                            bool cond:18_1 = var_100.d + 1 s< x9_250
                                                            var_100.d += 1
                                                            
                                                            if (not(cond:18_1))
                                                                x10_70 = *(arg1 + 0x4694)
                                                                goto label_ff6fec
                                                        
                                                        break
                                                    
                                                label_ff6fec:
                                                    bool cond:13_1 = var_f8 + 1 s< x10_70
                                                    var_f8 += 1
                                                    
                                                    if (not(cond:13_1))
                                                        goto label_ff7654
                                        else
                                            int64_t x8_68 = sx.q(arg1[0x90b].d)
                                            void* x10_20 = x15_1 + x8_68 * 0x60
                                            int32_t x9_54 = *(x10_20 + 0x46c0)
                                            
                                            if (x9_54 s< 1)
                                                goto label_ff7654
                                            
                                            int32_t x20_4 = *(x10_20 + 0x46bc)
                                            void* x8_69 = x15_1 + x8_68 * 0x60
                                            int32_t x8_72 = (x20_4 + 7) s>> 3
                                            int32_t x9_56 = (x9_54 + 7) s>> 3
                                            int32_t x8_73
                                            
                                            x8_73 = x8_72 s> 1 ? x8_72 : 1
                                            
                                            int32_t var_13c_1 = x20_4
                                            int32_t x8_74
                                            
                                            x8_74 = x9_56 s> 1 ? x9_56 : 1
                                            
                                            void* var_118
                                            var_118.d = 0
                                            
                                            while (true)
                                                if (x20_4 s>= 1)
                                                    int32_t x22_4 = 0
                                                    
                                                    while (true)
                                                        int32_t x27_3 = *(arg1 + 0x4834)
                                                        void* var_110
                                                        var_110.d = x22_4
                                                        int16_t* x20_5 = *(x8_69 + 0x46f0) + (sx.q((
                                                            x22_4 + *(x8_69 + 0x46f8) * var_118.d) << 6)
                                                            << 1)
                                                        
                                                        if (x27_3 == 0)
                                                            if (arg1[0x907].d != 0)
                                                            label_ff7ba0:
                                                                x9_386 = "can't merge dc and ac"
                                                                goto label_ff7b70
                                                            
                                                            int64_t x26_8 = sx.q(*(x8_69 + 0x46b0))
                                                            
                                                            if (*x23_1 s<= 0xf)
                                                                int32_t i_5
                                                                
                                                                do
                                                                    uint32_t x8_86
                                                                    
                                                                    if (*(arg1 + 0x482c) != 0)
                                                                        x8_86 = 0
                                                                    else
                                                                        void* x19_6 = *x15_1
                                                                        char* x8_90 = *(x19_6 + 0xb8)
                                                                        
                                                                        if (x8_90 u>= *(x19_6 + 0xc0))
                                                                            x8_86 = *(x19_6 + 0x30)
                                                                            
                                                                            if (x8_86 != 0)
                                                                                int32_t x0_28
                                                                                x0_28, v0, v1, v2 = (*(x19_6 + 0x10))(
                                                                                    *(x19_6 + 0x28), x19_6 + 0x38, 
                                                                                    zx.q(*(x19_6 + 0x34)))
                                                                                void* x9_67
                                                                                
                                                                                if (x0_28 == 0)
                                                                                    x8_86 = 0
                                                                                    *(x19_6 + 0x30) = 0
                                                                                    x9_67 = x19_6 + 0x39
                                                                                    *(x19_6 + 0x38) = 0
                                                                                else
                                                                                    x8_86 = zx.d(*(x19_6 + 0x38))
                                                                                    x9_67 = &(x19_6 + 0x38)[sx.q(x0_28)]
                                                                                
                                                                                x15_1 = arg1
                                                                                *(x19_6 + 0xb8) = x19_6 + 0x39
                                                                                *(x19_6 + 0xc0) = x9_67
                                                                                goto label_ff5278
                                                                        else
                                                                            *(x19_6 + 0xb8) = &x8_90[1]
                                                                            x8_86 = zx.d(*x8_90)
                                                                        label_ff5278:
                                                                            
                                                                            if (x8_86 == 0xff)
                                                                                void* x19_7 = *x15_1
                                                                                char* x8_92 = *(x19_7 + 0xb8)
                                                                                uint32_t x8_93
                                                                                
                                                                                if (x8_92 u>= *(x19_7 + 0xc0))
                                                                                    x8_93 = *(x19_7 + 0x30)
                                                                                    
                                                                                    if (x8_93 == 0)
                                                                                        goto label_ff52ec
                                                                                    
                                                                                label_ff52b8:
                                                                                    int32_t x0_30
                                                                                    x0_30, v0, v1, v2 = (*(x19_7 + 0x10))(
                                                                                        *(x19_7 + 0x28), x19_7 + 0x38, 
                                                                                        zx.q(*(x19_7 + 0x34)))
                                                                                    void* x9_72
                                                                                    
                                                                                    if (x0_30 == 0)
                                                                                        x8_93 = 0
                                                                                        *(x19_7 + 0x30) = 0
                                                                                        x9_72 = x19_7 + 0x39
                                                                                        *(x19_7 + 0x38) = 0
                                                                                    else
                                                                                        x8_93 = zx.d(*(x19_7 + 0x38))
                                                                                        x9_72 = x19_7 + 0x38 + sx.q(x0_30)
                                                                                    
                                                                                    x15_1 = arg1
                                                                                    *(x19_7 + 0xb8) = x19_7 + 0x39
                                                                                    *(x19_7 + 0xc0) = x9_72
                                                                                    goto label_ff52ec
                                                                                
                                                                                int32_t x9_73
                                                                                
                                                                                while (true)
                                                                                    *(x19_7 + 0xb8) = &x8_92[1]
                                                                                    x8_93 = zx.d(*x8_92)
                                                                                label_ff52ec:
                                                                                    x9_73 = x8_93 & 0xff
                                                                                    
                                                                                    if (x9_73 != 0xff)
                                                                                        break
                                                                                    
                                                                                    x19_7 = *x15_1
                                                                                    x8_92 = *(x19_7 + 0xb8)
                                                                                    
                                                                                    if (x8_92 u>= *(x19_7 + 0xc0))
                                                                                        x8_93 = 0
                                                                                        
                                                                                        if (*(x19_7 + 0x30) != 0)
                                                                                            goto label_ff52b8
                                                                                        
                                                                                        goto label_ff52ec
                                                                                
                                                                                if (x9_73 != 0)
                                                                                    *fp_1 = x8_93.b
                                                                                    *(arg1 + 0x482c) = 1
                                                                                    break
                                                                                
                                                                                x8_86 = 0xff
                                                                    
                                                                    i_5 = *x23_1
                                                                    arg1[0x904].d |= x8_86 << (0x18 - i_5)
                                                                    *x23_1 = i_5 + 8
                                                                while (i_5 s< 0x11)
                                                            
                                                            if (*(arg1 + 0x483c) == 0)
                                                                __builtin_memset(x20_5, 0, 0x80)
                                                                int32_t x0_64
                                                                x0_64, v0, v1, v2 = sub_ff88e0(x15_1, 
                                                                    x15_1 + x26_8 * 0x690 + 8)
                                                                int32_t x8_205
                                                                
                                                                if (x0_64 == 0)
                                                                    x15_1 = arg1
                                                                    x8_205 = 0
                                                                else
                                                                    x15_1 = arg1
                                                                    
                                                                    if (*x23_1 s< x0_64)
                                                                        int32_t i_6
                                                                        
                                                                        do
                                                                            uint32_t x8_193
                                                                            
                                                                            if (*(arg1 + 0x482c) != 0)
                                                                                x8_193 = 0
                                                                            else
                                                                                void* x19_22 = *x15_1
                                                                                char* x8_197 = *(x19_22 + 0xb8)
                                                                                
                                                                                if (x8_197 u>= *(x19_22 + 0xc0))
                                                                                    x8_193 = *(x19_22 + 0x30)
                                                                                    
                                                                                    if (x8_193 != 0)
                                                                                        int32_t x0_66
                                                                                        x0_66, v0, v1, v2 = (*(x19_22 + 0x10))(
                                                                                            *(x19_22 + 0x28), x19_22 + 0x38, 
                                                                                            zx.q(*(x19_22 + 0x34)))
                                                                                        void* x9_195
                                                                                        
                                                                                        if (x0_66 == 0)
                                                                                            x8_193 = 0
                                                                                            *(x19_22 + 0x30) = 0
                                                                                            x9_195 = x19_22 + 0x39
                                                                                            *(x19_22 + 0x38) = 0
                                                                                        else
                                                                                            x8_193 = zx.d(*(x19_22 + 0x38))
                                                                                            x9_195 = &(x19_22 + 0x38)[sx.q(x0_66)]
                                                                                        
                                                                                        x15_1 = arg1
                                                                                        *(x19_22 + 0xb8) = x19_22 + 0x39
                                                                                        *(x19_22 + 0xc0) = x9_195
                                                                                        goto label_ff6178
                                                                                else
                                                                                    *(x19_22 + 0xb8) = &x8_197[1]
                                                                                    x8_193 = zx.d(*x8_197)
                                                                                label_ff6178:
                                                                                    
                                                                                    if (x8_193 == 0xff)
                                                                                        void* x19_23 = *x15_1
                                                                                        char* x8_199 = *(x19_23 + 0xb8)
                                                                                        uint32_t x8_200
                                                                                        
                                                                                        if (x8_199 u>= *(x19_23 + 0xc0))
                                                                                            x8_200 = *(x19_23 + 0x30)
                                                                                            
                                                                                            if (x8_200 == 0)
                                                                                                goto label_ff61ec
                                                                                            
                                                                                        label_ff61b8:
                                                                                            int32_t x0_68
                                                                                            x0_68, v0, v1, v2 = (*(x19_23 + 0x10))(
                                                                                                *(x19_23 + 0x28), x19_23 + 0x38, 
                                                                                                zx.q(*(x19_23 + 0x34)))
                                                                                            void* x9_200
                                                                                            
                                                                                            if (x0_68 == 0)
                                                                                                x8_200 = 0
                                                                                                *(x19_23 + 0x30) = 0
                                                                                                x9_200 = x19_23 + 0x39
                                                                                                *(x19_23 + 0x38) = 0
                                                                                            else
                                                                                                x8_200 = zx.d(*(x19_23 + 0x38))
                                                                                                x9_200 = x19_23 + 0x38 + sx.q(x0_68)
                                                                                            
                                                                                            x15_1 = arg1
                                                                                            *(x19_23 + 0xb8) = x19_23 + 0x39
                                                                                            *(x19_23 + 0xc0) = x9_200
                                                                                            goto label_ff61ec
                                                                                        
                                                                                        int32_t x9_201
                                                                                        
                                                                                        while (true)
                                                                                            *(x19_23 + 0xb8) = &x8_199[1]
                                                                                            x8_200 = zx.d(*x8_199)
                                                                                        label_ff61ec:
                                                                                            x9_201 = x8_200 & 0xff
                                                                                            
                                                                                            if (x9_201 != 0xff)
                                                                                                break
                                                                                            
                                                                                            x19_23 = *x15_1
                                                                                            x8_199 = *(x19_23 + 0xb8)
                                                                                            
                                                                                            if (x8_199 u>= *(x19_23 + 0xc0))
                                                                                                x8_200 = 0
                                                                                                
                                                                                                if (*(x19_23 + 0x30) != 0)
                                                                                                    goto label_ff61b8
                                                                                                
                                                                                                goto label_ff61ec
                                                                                        
                                                                                        if (x9_201 != 0)
                                                                                            *fp_1 = x8_200.b
                                                                                            *(arg1 + 0x482c) = 1
                                                                                            break
                                                                                        
                                                                                        x8_193 = 0xff
                                                                            
                                                                            i_6 = *x23_1
                                                                            arg1[0x904].d |= x8_193 << (0x18 - i_6)
                                                                            *x23_1 = i_6 + 8
                                                                        while (i_6 s< 0x11)
                                                                    
                                                                    if (x0_64 u>= 0x11)
                                                                        return __assert2(
                                                                            "C:\x\ax2017\Engine\android\A"
                                                                        "ndroidEngine\..\..\ExternalCode\s"
                                                                        "tb/stb_image.h", 
                                                                            0x773, 
                                                                            "int stbi__extend_receive(stbi__jpeg *, "
                                                                        "int)", 
                                                                            "n >= 0 && n < (int) (sizeof(stbi__bmask)/sizeof(*stbi__bmask))")
                                                                    
                                                                    int32_t x8_206 = arg1[0x904].d
                                                                    uint64_t x9_207 = zx.q(x0_64) << 2
                                                                    int32_t x10_58 =
                                                                        *(&data_868654 + x9_207)
                                                                    int32_t x11_19 =
                                                                        ror.d(x8_206, neg.d(x0_64))
                                                                    arg1[0x904].d = x11_19 & not.d(x10_58)
                                                                    x8_205 = (*(&data_868698 + x9_207)
                                                                        & not.d(x8_206 s>> 0x1f))
                                                                        + (x10_58 & x11_19)
                                                                    *x23_1 -= x0_64
                                                                
                                                                int32_t x8_208 =
                                                                    *(x8_69 + 0x46b8) + x8_205
                                                                *(x8_69 + 0x46b8) = x8_208
                                                                *x20_5 = (x8_208 << arg1[0x908].d).w
                                                            else
                                                                int32_t x9_177 = *x23_1
                                                                int32_t x8_184
                                                                
                                                                if (x9_177 s> 0)
                                                                label_ff6234:
                                                                    x8_184 = arg1[0x904].d
                                                                else
                                                                    int32_t i_7
                                                                    
                                                                    do
                                                                        uint32_t x8_182
                                                                        
                                                                        if (*(arg1 + 0x482c) != 0)
                                                                            x8_182 = 0
                                                                        else
                                                                            void* x19_20 = *x15_1
                                                                            char* x8_186 = *(x19_20 + 0xb8)
                                                                            
                                                                            if (x8_186 u>= *(x19_20 + 0xc0))
                                                                                x8_182 = *(x19_20 + 0x30)
                                                                                
                                                                                if (x8_182 != 0)
                                                                                    int32_t x0_60
                                                                                    x0_60, v0, v1, v2 = (*(x19_20 + 0x10))(
                                                                                        *(x19_20 + 0x28), x19_20 + 0x38, 
                                                                                        zx.q(*(x19_20 + 0x34)))
                                                                                    void* x9_182
                                                                                    
                                                                                    if (x0_60 == 0)
                                                                                        x8_182 = 0
                                                                                        *(x19_20 + 0x30) = 0
                                                                                        x9_182 = x19_20 + 0x39
                                                                                        *(x19_20 + 0x38) = 0
                                                                                    else
                                                                                        x8_182 = zx.d(*(x19_20 + 0x38))
                                                                                        x9_182 = &(x19_20 + 0x38)[sx.q(x0_60)]
                                                                                    
                                                                                    x15_1 = arg1
                                                                                    *(x19_20 + 0xb8) = x19_20 + 0x39
                                                                                    *(x19_20 + 0xc0) = x9_182
                                                                                    goto label_ff5fe4
                                                                            else
                                                                                *(x19_20 + 0xb8) = &x8_186[1]
                                                                                x8_182 = zx.d(*x8_186)
                                                                            label_ff5fe4:
                                                                                
                                                                                if (x8_182 == 0xff)
                                                                                    void* x19_21 = *x15_1
                                                                                    char* x8_188 = *(x19_21 + 0xb8)
                                                                                    uint32_t x8_189
                                                                                    
                                                                                    if (x8_188 u>= *(x19_21 + 0xc0))
                                                                                        x8_189 = *(x19_21 + 0x30)
                                                                                        
                                                                                        if (x8_189 == 0)
                                                                                            goto label_ff6058
                                                                                        
                                                                                    label_ff6024:
                                                                                        int32_t x0_62
                                                                                        x0_62, v0, v1, v2 = (*(x19_21 + 0x10))(
                                                                                            *(x19_21 + 0x28), x19_21 + 0x38, 
                                                                                            zx.q(*(x19_21 + 0x34)))
                                                                                        void* x9_187
                                                                                        
                                                                                        if (x0_62 == 0)
                                                                                            x8_189 = 0
                                                                                            *(x19_21 + 0x30) = 0
                                                                                            x9_187 = x19_21 + 0x39
                                                                                            *(x19_21 + 0x38) = 0
                                                                                        else
                                                                                            x8_189 = zx.d(*(x19_21 + 0x38))
                                                                                            x9_187 = x19_21 + 0x38 + sx.q(x0_62)
                                                                                        
                                                                                        x15_1 = arg1
                                                                                        *(x19_21 + 0xb8) = x19_21 + 0x39
                                                                                        *(x19_21 + 0xc0) = x9_187
                                                                                        goto label_ff6058
                                                                                    
                                                                                    int32_t x9_188
                                                                                    
                                                                                    while (true)
                                                                                        *(x19_21 + 0xb8) = &x8_188[1]
                                                                                        x8_189 = zx.d(*x8_188)
                                                                                    label_ff6058:
                                                                                        x9_188 = x8_189 & 0xff
                                                                                        
                                                                                        if (x9_188 != 0xff)
                                                                                            break
                                                                                        
                                                                                        x19_21 = *x15_1
                                                                                        x8_188 = *(x19_21 + 0xb8)
                                                                                        
                                                                                        if (x8_188 u>= *(x19_21 + 0xc0))
                                                                                            x8_189 = 0
                                                                                            
                                                                                            if (*(x19_21 + 0x30) != 0)
                                                                                                goto label_ff6024
                                                                                            
                                                                                            goto label_ff6058
                                                                                    
                                                                                    if (x9_188 != 0)
                                                                                        *fp_1 = x8_189.b
                                                                                        *(arg1 + 0x482c) = 1
                                                                                        x9_177 = *x23_1
                                                                                        goto label_ff6234
                                                                                    
                                                                                    x8_182 = 0xff
                                                                        
                                                                        i_7 = *x23_1
                                                                        x9_177 = i_7 + 8
                                                                        x8_184 =
                                                                            x8_182 << (0x18 - i_7) | arg1[0x904].d
                                                                        arg1[0x904].d = x8_184
                                                                        *x23_1 = x9_177
                                                                    while (i_7 s< 0x11)
                                                                
                                                                arg1[0x904].d = x8_184 << 1
                                                                *x23_1 = x9_177 - 1
                                                                
                                                                if ((x8_184 & 0x80000000) != 0)
                                                                    *x20_5 +=
                                                                        (0x10000 << arg1[0x908].d u>> 0x10).w
                                                        else
                                                            int32_t x28_1 = arg1[0x908].d
                                                            int64_t x26_6 = sx.q(*(x8_69 + 0x46b4))
                                                            int32_t* x22_5 =
                                                                x15_1 + x26_6 * 0x690 + 0x1a48
                                                            var_100 = x22_5
                                                            
                                                            if (*(arg1 + 0x483c) == 0)
                                                                int32_t x8_95 = *(arg1 + 0x4844)
                                                                
                                                                if (x8_95 == 0)
                                                                    while (true)
                                                                        if (*x23_1 s<= 0xf)
                                                                            int32_t i_8
                                                                            
                                                                            do
                                                                                uint32_t x8_102
                                                                                
                                                                                if (*(arg1 + 0x482c) != 0)
                                                                                    x8_102 = 0
                                                                                else
                                                                                    void* x19_8 = *x15_1
                                                                                    char* x8_106 = *(x19_8 + 0xb8)
                                                                                    
                                                                                    if (x8_106 u>= *(x19_8 + 0xc0))
                                                                                        x8_102 = *(x19_8 + 0x30)
                                                                                        
                                                                                        if (x8_102 != 0)
                                                                                            int32_t x0_32
                                                                                            x0_32, v0, v1, v2 = (*(x19_8 + 0x10))(
                                                                                                *(x19_8 + 0x28), x19_8 + 0x38, 
                                                                                                zx.q(*(x19_8 + 0x34)))
                                                                                            void* x9_82
                                                                                            
                                                                                            if (x0_32 == 0)
                                                                                                x8_102 = 0
                                                                                                *(x19_8 + 0x30) = 0
                                                                                                x9_82 = x19_8 + 0x39
                                                                                                *(x19_8 + 0x38) = 0
                                                                                            else
                                                                                                x8_102 = zx.d(*(x19_8 + 0x38))
                                                                                                x9_82 = &(x19_8 + 0x38)[sx.q(x0_32)]
                                                                                            
                                                                                            x15_1 = arg1
                                                                                            *(x19_8 + 0xb8) = x19_8 + 0x39
                                                                                            *(x19_8 + 0xc0) = x9_82
                                                                                            
                                                                                            if (x8_102 == 0xff)
                                                                                                goto label_ff5444
                                                                                    else
                                                                                        *(x19_8 + 0xb8) = &x8_106[1]
                                                                                        x8_102 = zx.d(*x8_106)
                                                                                        
                                                                                        if (x8_102 == 0xff)
                                                                                        label_ff5444:
                                                                                            void* x19_9 = *x15_1
                                                                                            char* x8_108 = *(x19_9 + 0xb8)
                                                                                            uint32_t x8_109
                                                                                            
                                                                                            if (x8_108 u>= *(x19_9 + 0xc0))
                                                                                                x8_109 = *(x19_9 + 0x30)
                                                                                                
                                                                                                if (x8_109 == 0)
                                                                                                    goto label_ff54b0
                                                                                                
                                                                                            label_ff547c:
                                                                                                int32_t x0_34
                                                                                                x0_34, v0, v1, v2 = (*(x19_9 + 0x10))(
                                                                                                    *(x19_9 + 0x28), x19_9 + 0x38, 
                                                                                                    zx.q(*(x19_9 + 0x34)))
                                                                                                void* x9_87
                                                                                                
                                                                                                if (x0_34 == 0)
                                                                                                    x8_109 = 0
                                                                                                    *(x19_9 + 0x30) = 0
                                                                                                    x9_87 = x19_9 + 0x39
                                                                                                    *(x19_9 + 0x38) = 0
                                                                                                else
                                                                                                    x8_109 = zx.d(*(x19_9 + 0x38))
                                                                                                    x9_87 = x19_9 + 0x38 + sx.q(x0_34)
                                                                                                
                                                                                                x15_1 = arg1
                                                                                                *(x19_9 + 0xb8) = x19_9 + 0x39
                                                                                                *(x19_9 + 0xc0) = x9_87
                                                                                                goto label_ff54b0
                                                                                            
                                                                                            int32_t x9_88
                                                                                            
                                                                                            while (true)
                                                                                                *(x19_9 + 0xb8) = &x8_108[1]
                                                                                                x8_109 = zx.d(*x8_108)
                                                                                            label_ff54b0:
                                                                                                x9_88 = x8_109 & 0xff
                                                                                                
                                                                                                if (x9_88 != 0xff)
                                                                                                    break
                                                                                                
                                                                                                x19_9 = *x15_1
                                                                                                x8_108 = *(x19_9 + 0xb8)
                                                                                                
                                                                                                if (x8_108 u>= *(x19_9 + 0xc0))
                                                                                                    x8_109 = 0
                                                                                                    
                                                                                                    if (*(x19_9 + 0x30) != 0)
                                                                                                        goto label_ff547c
                                                                                                    
                                                                                                    goto label_ff54b0
                                                                                            
                                                                                            if (x9_88 != 0)
                                                                                                *fp_1 = x8_109.b
                                                                                                *(arg1 + 0x482c) = 1
                                                                                                break
                                                                                            
                                                                                            x8_102 = 0xff
                                                                                
                                                                                i_8 = *x23_1
                                                                                arg1[0x904].d |= x8_102 << (0x18 - i_8)
                                                                                *x23_1 = i_8 + 8
                                                                            while (i_8 s< 0x11)
                                                                        
                                                                        uint64_t x8_111 = zx.q(arg1[0x904].d)
                                                                        uint64_t x9_94 = zx.q(sx.d(*(
                                                                            &x15_1[x26_6 * 0x80]
                                                                            + (x8_111 u>> 0x16 & 0x3fe) + 0x3688)))
                                                                        
                                                                        if (x9_94.d != 0)
                                                                            int32_t x11_5 = x9_94.d & 0xf
                                                                            arg1[0x904].d = x8_111.d << x11_5
                                                                            int64_t x10_30 =
                                                                                (x9_94 u>> 4 & 0xf) + sx.q(x27_3)
                                                                            uint64_t x12_5 =
                                                                                zx.q(*(&data_8685ff + x10_30))
                                                                            x27_3 = x10_30.d + 1
                                                                            *x23_1 -= x11_5
                                                                            x20_5[x12_5] =
                                                                                (x9_94.d s>> 8 << x28_1).w
                                                                            
                                                                            if (x27_3 s> arg1[0x907].d)
                                                                                goto label_ff62ec
                                                                        else
                                                                            int32_t x0_36
                                                                            x0_36, v0, v1, v2 =
                                                                                sub_ff88e0(x15_1, x22_5)
                                                                            
                                                                            if ((x0_36 & 0x80000000) != 0)
                                                                                break
                                                                            
                                                                            void* x22_7 = fp_1
                                                                            int32_t fp_2 = x0_36 & 0xf
                                                                            uint32_t x12_7 = x0_36 u>> 4
                                                                            
                                                                            if (fp_2 == 0)
                                                                                x15_1 = arg1
                                                                                
                                                                                if (x0_36 s<= 0xef)
                                                                                    fp_1 = x22_7
                                                                                    *(arg1 + 0x4844) = 1 << x12_7
                                                                                    
                                                                                    if (x12_7 == 0)
                                                                                        *(arg1 + 0x4844) = 0
                                                                                    else
                                                                                        int32_t x9_226 = *x23_1
                                                                                        
                                                                                        if (x9_226 s< x12_7)
                                                                                            int32_t i_9
                                                                                            
                                                                                            do
                                                                                                uint32_t x8_224
                                                                                                
                                                                                                if (*(arg1 + 0x482c) != 0)
                                                                                                    x8_224 = 0
                                                                                                else
                                                                                                    void* x19_26 = *x15_1
                                                                                                    char* x8_228 = *(x19_26 + 0xb8)
                                                                                                    
                                                                                                    if (x8_228 u>= *(x19_26 + 0xc0))
                                                                                                        x8_224 = *(x19_26 + 0x30)
                                                                                                        
                                                                                                        if (x8_224 != 0)
                                                                                                            int32_t x0_74
                                                                                                            x0_74, v0, v1, v2 = (*(x19_26 + 0x10))(
                                                                                                                *(x19_26 + 0x28), x19_26 + 0x38, 
                                                                                                                zx.q(*(x19_26 + 0x34)))
                                                                                                            void* x9_231
                                                                                                            
                                                                                                            if (x0_74 == 0)
                                                                                                                x8_224 = 0
                                                                                                                *(x19_26 + 0x30) = 0
                                                                                                                x9_231 = x19_26 + 0x39
                                                                                                                *(x19_26 + 0x38) = 0
                                                                                                            else
                                                                                                                x8_224 = zx.d(*(x19_26 + 0x38))
                                                                                                                x9_231 = &(x19_26 + 0x38)[sx.q(x0_74)]
                                                                                                            
                                                                                                            x15_1 = arg1
                                                                                                            *(x19_26 + 0xb8) = x19_26 + 0x39
                                                                                                            *(x19_26 + 0xc0) = x9_231
                                                                                                            goto label_ff658c
                                                                                                    else
                                                                                                        *(x19_26 + 0xb8) = &x8_228[1]
                                                                                                        x8_224 = zx.d(*x8_228)
                                                                                                    label_ff658c:
                                                                                                        
                                                                                                        if (x8_224 == 0xff)
                                                                                                            void* x19_27 = *x15_1
                                                                                                            char* x8_230 = *(x19_27 + 0xb8)
                                                                                                            uint32_t x8_231
                                                                                                            
                                                                                                            if (x8_230 u>= *(x19_27 + 0xc0))
                                                                                                                x8_231 = *(x19_27 + 0x30)
                                                                                                                
                                                                                                                if (x8_231 != 0)
                                                                                                                label_ff65cc:
                                                                                                                    int32_t x0_76
                                                                                                                    x0_76, v0, v1, v2 = (*(x19_27 + 0x10))(
                                                                                                                        *(x19_27 + 0x28), x19_27 + 0x38, 
                                                                                                                        zx.q(*(x19_27 + 0x34)))
                                                                                                                    void* x9_236
                                                                                                                    
                                                                                                                    if (x0_76 == 0)
                                                                                                                        x8_231 = 0
                                                                                                                        *(x19_27 + 0x30) = 0
                                                                                                                        x9_236 = x19_27 + 0x39
                                                                                                                        *(x19_27 + 0x38) = 0
                                                                                                                    else
                                                                                                                        x8_231 = zx.d(*(x19_27 + 0x38))
                                                                                                                        x9_236 = &(x19_27 + 0x38)[sx.q(x0_76)]
                                                                                                                    
                                                                                                                    *(x19_27 + 0xb8) = x19_27 + 0x39
                                                                                                                    *(x19_27 + 0xc0) = x9_236
                                                                                                            else
                                                                                                                *(x19_27 + 0xb8) = &x8_230[1]
                                                                                                                x8_231 = zx.d(*x8_230)
                                                                                                            
                                                                                                            x15_1 = arg1
                                                                                                            int32_t x9_238
                                                                                                            
                                                                                                            while (true)
                                                                                                                x9_238 = x8_231 & 0xff
                                                                                                                
                                                                                                                if (x9_238 != 0xff)
                                                                                                                    break
                                                                                                                
                                                                                                                x19_27 = *x15_1
                                                                                                                char* x8_233 = *(x19_27 + 0xb8)
                                                                                                                
                                                                                                                if (x8_233 u< *(x19_27 + 0xc0))
                                                                                                                    *(x19_27 + 0xb8) = &x8_233[1]
                                                                                                                    x8_231 = zx.d(*x8_233)
                                                                                                                else
                                                                                                                    x8_231 = 0
                                                                                                                    
                                                                                                                    if (*(x19_27 + 0x30) != 0)
                                                                                                                        goto label_ff65cc
                                                                                                            
                                                                                                            if (x9_238 != 0)
                                                                                                                *x22_7 = x8_231.b
                                                                                                                *(arg1 + 0x482c) = 1
                                                                                                                x9_226 = *x23_1
                                                                                                                break
                                                                                                            
                                                                                                            x8_224 = 0xff
                                                                                                
                                                                                                i_9 = *x23_1
                                                                                                x9_226 = i_9 + 8
                                                                                                arg1[0x904].d |= x8_224 << (0x18 - i_9)
                                                                                                *x23_1 = x9_226
                                                                                            while (i_9 s< 0x11)
                                                                                            fp_1 = x22_7
                                                                                        
                                                                                        int32_t x11_22 =
                                                                                            *(&data_868654 + (zx.q(x12_7) << 2))
                                                                                        int32_t x12_23 = *(arg1 + 0x4844)
                                                                                        int32_t x8_236 =
                                                                                            ror.d(arg1[0x904].d, neg.d(x12_7))
                                                                                        *(arg1 + 0x4824) = x9_226 - x12_7
                                                                                        arg1[0x904].d = x8_236 & not.d(x11_22)
                                                                                        *(arg1 + 0x4844) =
                                                                                            (x8_236 & x11_22) + x12_23 - 1
                                                                                    
                                                                                    goto label_ff62ec
                                                                                
                                                                                x27_3 += 0x10
                                                                            else
                                                                                int32_t x9_95 = *x23_1
                                                                                x15_1 = arg1
                                                                                uint64_t x8_112 = zx.q(x12_7)
                                                                                
                                                                                if (x9_95 s< fp_2)
                                                                                    var_f8.q = x8_112
                                                                                    
                                                                                    while (true)
                                                                                        uint32_t x8_113
                                                                                        
                                                                                        if (*(arg1 + 0x482c) != 0)
                                                                                            x8_113 = 0
                                                                                        label_ff5554:
                                                                                            int32_t x10_35 = *x23_1
                                                                                            x9_95 = x10_35 + 8
                                                                                            arg1[0x904].d |=
                                                                                                x8_113 << (0x18 - x10_35)
                                                                                            *x23_1 = x9_95
                                                                                            
                                                                                            if (x10_35 s< 0x11)
                                                                                                continue
                                                                                        else
                                                                                            void* x19_10 = *x15_1
                                                                                            char* x8_117 = *(x19_10 + 0xb8)
                                                                                            
                                                                                            if (x8_117 u>= *(x19_10 + 0xc0))
                                                                                                x8_113 = *(x19_10 + 0x30)
                                                                                                
                                                                                                if (x8_113 == 0)
                                                                                                    goto label_ff5554
                                                                                                
                                                                                                int32_t x0_38
                                                                                                x0_38, v0, v1, v2 = (*(x19_10 + 0x10))(
                                                                                                    *(x19_10 + 0x28), x19_10 + 0x38, 
                                                                                                    zx.q(*(x19_10 + 0x34)))
                                                                                                void* x9_100
                                                                                                
                                                                                                if (x0_38 == 0)
                                                                                                    x8_113 = 0
                                                                                                    *(x19_10 + 0x30) = 0
                                                                                                    x9_100 = x19_10 + 0x39
                                                                                                    *(x19_10 + 0x38) = 0
                                                                                                else
                                                                                                    x8_113 = zx.d(*(x19_10 + 0x38))
                                                                                                    x9_100 = &(x19_10 + 0x38)[sx.q(x0_38)]
                                                                                                
                                                                                                x15_1 = arg1
                                                                                                *(x19_10 + 0xb8) = x19_10 + 0x39
                                                                                                *(x19_10 + 0xc0) = x9_100
                                                                                            else
                                                                                                *(x19_10 + 0xb8) = &x8_117[1]
                                                                                                x8_113 = zx.d(*x8_117)
                                                                                            
                                                                                            if (x8_113 != 0xff)
                                                                                                goto label_ff5554
                                                                                            
                                                                                            void* x19_11 = *x15_1
                                                                                            char* x8_119 = *(x19_11 + 0xb8)
                                                                                            uint32_t x8_120
                                                                                            
                                                                                            if (x8_119 u>= *(x19_11 + 0xc0))
                                                                                                x8_120 = *(x19_11 + 0x30)
                                                                                                
                                                                                                if (x8_120 == 0)
                                                                                                    goto label_ff5668
                                                                                                
                                                                                            label_ff5634:
                                                                                                int32_t x0_40
                                                                                                x0_40, v0, v1, v2 = (*(x19_11 + 0x10))(
                                                                                                    *(x19_11 + 0x28), x19_11 + 0x38, 
                                                                                                    zx.q(*(x19_11 + 0x34)))
                                                                                                void* x9_105
                                                                                                
                                                                                                if (x0_40 == 0)
                                                                                                    x8_120 = 0
                                                                                                    *(x19_11 + 0x30) = 0
                                                                                                    x9_105 = x19_11 + 0x39
                                                                                                    *(x19_11 + 0x38) = 0
                                                                                                else
                                                                                                    x8_120 = zx.d(*(x19_11 + 0x38))
                                                                                                    x9_105 = x19_11 + 0x38 + sx.q(x0_40)
                                                                                                
                                                                                                x15_1 = arg1
                                                                                                *(x19_11 + 0xb8) = x19_11 + 0x39
                                                                                                *(x19_11 + 0xc0) = x9_105
                                                                                                goto label_ff5668
                                                                                            
                                                                                            int32_t x9_106
                                                                                            
                                                                                            while (true)
                                                                                                *(x19_11 + 0xb8) = &x8_119[1]
                                                                                                x8_120 = zx.d(*x8_119)
                                                                                            label_ff5668:
                                                                                                x9_106 = x8_120 & 0xff
                                                                                                
                                                                                                if (x9_106 != 0xff)
                                                                                                    break
                                                                                                
                                                                                                x19_11 = *x15_1
                                                                                                x8_119 = *(x19_11 + 0xb8)
                                                                                                
                                                                                                if (x8_119 u>= *(x19_11 + 0xc0))
                                                                                                    x8_120 = 0
                                                                                                    
                                                                                                    if (*(x19_11 + 0x30) != 0)
                                                                                                        goto label_ff5634
                                                                                                    
                                                                                                    goto label_ff5668
                                                                                            
                                                                                            if (x9_106 == 0)
                                                                                                x8_113 = 0xff
                                                                                                goto label_ff5554
                                                                                            
                                                                                            *x22_7 = x8_120.b
                                                                                            *(arg1 + 0x482c) = 1
                                                                                            x9_95 = *x23_1
                                                                                        x8_112 = var_f8.q
                                                                                        break
                                                                                
                                                                                int64_t x8_122 = x8_112 + sx.q(x27_3)
                                                                                x27_3 = x8_122.d + 1
                                                                                uint64_t x8_123 =
                                                                                    zx.q(*(&data_8685ff + x8_122))
                                                                                int32_t x10_38 = arg1[0x904].d
                                                                                uint64_t x12_10 = zx.q(fp_2) << 2
                                                                                int32_t x13_1 = *(&data_868654 + x12_10)
                                                                                int32_t x11_9 =
                                                                                    ror.d(x10_38, neg.d(fp_2))
                                                                                int32_t x10_39 =
                                                                                    *(&data_868698 + x12_10)
                                                                                    & not.d(x10_38 s>> 0x1f)
                                                                                arg1[0x904].d = x11_9 & not.d(x13_1)
                                                                                *x23_1 = x9_95 - fp_2
                                                                                x20_5[x8_123] =
                                                                                    ((x10_39 + (x13_1 & x11_9)) << x28_1).w
                                                                            
                                                                            fp_1 = x22_7
                                                                            x22_5 = var_100
                                                                            
                                                                            if (x27_3 s> arg1[0x907].d)
                                                                                goto label_ff62ec
                                                                    
                                                                    x9_386 = "bad huffman code"
                                                                    goto label_ff7b70
                                                                
                                                                *(arg1 + 0x4844) = x8_95 - 1
                                                            else
                                                                int32_t x8_82 = *(arg1 + 0x4844)
                                                                int32_t x9_60 = 1 << x28_1
                                                                
                                                                if (x8_82 == 0)
                                                                    int32_t x8_125 = sx.d(x9_60.w)
                                                                    void* var_108
                                                                    var_108.d = x9_60
                                                                    int64_t var_138
                                                                    var_138.d = neg.d(x8_125)
                                                                    
                                                                    while (true)
                                                                        int32_t x0_42
                                                                        x0_42, v0, v1, v2 =
                                                                            sub_ff88e0(x15_1, x22_5)
                                                                        
                                                                        if ((x0_42 & 0x80000000) != 0)
                                                                            break
                                                                        
                                                                        int32_t x8_129 = x0_42 & 0xf
                                                                        uint32_t x28_2 = x0_42 u>> 4
                                                                        int64_t x8_128
                                                                        int32_t x13_2
                                                                        
                                                                        if (x8_129 == 1)
                                                                            int32_t x9_126 = *x23_1
                                                                            x15_1 = arg1
                                                                            
                                                                            if (x9_126 s<= 0)
                                                                                int32_t i_10
                                                                                
                                                                                do
                                                                                    uint32_t x8_141
                                                                                    
                                                                                    if (*(arg1 + 0x482c) != 0)
                                                                                        x8_141 = 0
                                                                                    else
                                                                                        void* x19_14 = *x15_1
                                                                                        char* x8_145 = *(x19_14 + 0xb8)
                                                                                        
                                                                                        if (x8_145 u>= *(x19_14 + 0xc0))
                                                                                            x8_141 = *(x19_14 + 0x30)
                                                                                            
                                                                                            if (x8_141 != 0)
                                                                                                int32_t x0_48
                                                                                                x0_48, v0, v1, v2 = (*(x19_14 + 0x10))(
                                                                                                    *(x19_14 + 0x28), x19_14 + 0x38, 
                                                                                                    zx.q(*(x19_14 + 0x34)))
                                                                                                void* x9_131
                                                                                                
                                                                                                if (x0_48 == 0)
                                                                                                    x8_141 = 0
                                                                                                    *(x19_14 + 0x30) = 0
                                                                                                    x9_131 = x19_14 + 0x39
                                                                                                    *(x19_14 + 0x38) = 0
                                                                                                else
                                                                                                    x8_141 = zx.d(*(x19_14 + 0x38))
                                                                                                    x9_131 = &(x19_14 + 0x38)[sx.q(x0_48)]
                                                                                                
                                                                                                x15_1 = arg1
                                                                                                *(x19_14 + 0xb8) = x19_14 + 0x39
                                                                                                *(x19_14 + 0xc0) = x9_131
                                                                                                goto label_ff59d8
                                                                                        else
                                                                                            *(x19_14 + 0xb8) = &x8_145[1]
                                                                                            x8_141 = zx.d(*x8_145)
                                                                                        label_ff59d8:
                                                                                            
                                                                                            if (x8_141 == 0xff)
                                                                                                void* x19_15 = *x15_1
                                                                                                char* x8_147 = *(x19_15 + 0xb8)
                                                                                                uint32_t x8_148
                                                                                                
                                                                                                if (x8_147 u>= *(x19_15 + 0xc0))
                                                                                                    x8_148 = *(x19_15 + 0x30)
                                                                                                    
                                                                                                    if (x8_148 == 0)
                                                                                                        goto label_ff5a4c
                                                                                                    
                                                                                                label_ff5a18:
                                                                                                    int32_t x0_50
                                                                                                    x0_50, v0, v1, v2 = (*(x19_15 + 0x10))(
                                                                                                        *(x19_15 + 0x28), x19_15 + 0x38, 
                                                                                                        zx.q(*(x19_15 + 0x34)))
                                                                                                    void* x9_136
                                                                                                    
                                                                                                    if (x0_50 == 0)
                                                                                                        x8_148 = 0
                                                                                                        *(x19_15 + 0x30) = 0
                                                                                                        x9_136 = x19_15 + 0x39
                                                                                                        *(x19_15 + 0x38) = 0
                                                                                                    else
                                                                                                        x8_148 = zx.d(*(x19_15 + 0x38))
                                                                                                        x9_136 = x19_15 + 0x38 + sx.q(x0_50)
                                                                                                    
                                                                                                    x15_1 = arg1
                                                                                                    *(x19_15 + 0xb8) = x19_15 + 0x39
                                                                                                    *(x19_15 + 0xc0) = x9_136
                                                                                                    goto label_ff5a4c
                                                                                                
                                                                                                int32_t x9_137
                                                                                                
                                                                                                while (true)
                                                                                                    *(x19_15 + 0xb8) = &x8_147[1]
                                                                                                    x8_148 = zx.d(*x8_147)
                                                                                                label_ff5a4c:
                                                                                                    x9_137 = x8_148 & 0xff
                                                                                                    
                                                                                                    if (x9_137 != 0xff)
                                                                                                        break
                                                                                                    
                                                                                                    x19_15 = *x15_1
                                                                                                    x8_147 = *(x19_15 + 0xb8)
                                                                                                    
                                                                                                    if (x8_147 u>= *(x19_15 + 0xc0))
                                                                                                        x8_148 = 0
                                                                                                        
                                                                                                        if (*(x19_15 + 0x30) != 0)
                                                                                                            goto label_ff5a18
                                                                                                        
                                                                                                        goto label_ff5a4c
                                                                                                
                                                                                                if (x9_137 != 0)
                                                                                                    *fp_1 = x8_148.b
                                                                                                    *(arg1 + 0x482c) = 1
                                                                                                    x9_126 = *x23_1
                                                                                                    break
                                                                                                
                                                                                                x8_141 = 0xff
                                                                                    
                                                                                    i_10 = *x23_1
                                                                                    x9_126 = i_10 + 8
                                                                                    arg1[0x904].d |= x8_141 << (0x18 - i_10)
                                                                                    *x23_1 = x9_126
                                                                                while (i_10 s< 0x11)
                                                                            
                                                                            int32_t x8_150 = arg1[0x904].d
                                                                            arg1[0x904].d = x8_150 << 1
                                                                            *x23_1 = x9_126 - 1
                                                                            
                                                                            x13_2 =
                                                                                x8_150 s>= 0 ? var_138.d : x8_125
                                                                            
                                                                            x8_128 = zx.q(arg1[0x907].d)
                                                                            
                                                                            if (x27_3 s<= x8_128.d)
                                                                                goto label_ff5b44
                                                                        else
                                                                            x15_1 = arg1
                                                                            
                                                                            if (x8_129 != 0)
                                                                                break
                                                                            
                                                                            if (x0_42 s> 0xef)
                                                                                x13_2 = 0
                                                                                x8_128 = zx.q(arg1[0x907].d)
                                                                                
                                                                                if (x27_3 s<= x8_128.d)
                                                                                label_ff5b44:
                                                                                    int64_t x26_9 = sx.q(x27_3)
                                                                                    int64_t x27_5
                                                                                    
                                                                                    do
                                                                                        uint64_t fp_3 =
                                                                                            zx.q(*(&data_8685ff + x26_9))
                                                                                        x27_5 = x26_9
                                                                                        x26_9 += 1
                                                                                        
                                                                                        if (zx.d(x20_5[fp_3]) == 0)
                                                                                            if (x28_2 == 0)
                                                                                                x20_5[fp_3] = x13_2.w
                                                                                                x8_128 = zx.q(arg1[0x907].d)
                                                                                                break
                                                                                            
                                                                                            x28_2 -= 1
                                                                                        else
                                                                                            int32_t x9_145 = *x23_1
                                                                                            int32_t x8_160
                                                                                            
                                                                                            if (x9_145 s> 0)
                                                                                            label_ff5d08:
                                                                                                x8_160 = arg1[0x904].d
                                                                                            else
                                                                                                int32_t i_11
                                                                                                
                                                                                                do
                                                                                                    uint32_t x8_158
                                                                                                    
                                                                                                    if (*(arg1 + 0x482c) != 0)
                                                                                                        x8_158 = 0
                                                                                                    else
                                                                                                        void* x19_16 = *x15_1
                                                                                                        char* x8_162 = *(x19_16 + 0xb8)
                                                                                                        
                                                                                                        if (x8_162 u>= *(x19_16 + 0xc0))
                                                                                                            x8_158 = *(x19_16 + 0x30)
                                                                                                            
                                                                                                            if (x8_158 != 0)
                                                                                                                int32_t x0_52
                                                                                                                x0_52, v0, v1, v2 = (*(x19_16 + 0x10))(
                                                                                                                    *(x19_16 + 0x28), x19_16 + 0x38, 
                                                                                                                    zx.q(*(x19_16 + 0x34)))
                                                                                                                void* x9_150
                                                                                                                
                                                                                                                if (x0_52 == 0)
                                                                                                                    x8_158 = 0
                                                                                                                    *(x19_16 + 0x30) = 0
                                                                                                                    x9_150 = x19_16 + 0x39
                                                                                                                    *(x19_16 + 0x38) = 0
                                                                                                                else
                                                                                                                    x8_158 = zx.d(*(x19_16 + 0x38))
                                                                                                                    x9_150 = &(x19_16 + 0x38)[sx.q(x0_52)]
                                                                                                                
                                                                                                                x15_1 = arg1
                                                                                                                *(x19_16 + 0xb8) = x19_16 + 0x39
                                                                                                                *(x19_16 + 0xc0) = x9_150
                                                                                                                
                                                                                                                if (x8_158 == 0xff)
                                                                                                                    goto label_ff5c48
                                                                                                        else
                                                                                                            *(x19_16 + 0xb8) = &x8_162[1]
                                                                                                            x8_158 = zx.d(*x8_162)
                                                                                                            
                                                                                                            if (x8_158 == 0xff)
                                                                                                            label_ff5c48:
                                                                                                                void* x19_17 = *x15_1
                                                                                                                char* x8_164 = *(x19_17 + 0xb8)
                                                                                                                uint32_t x8_165
                                                                                                                
                                                                                                                if (x8_164 u>= *(x19_17 + 0xc0))
                                                                                                                    x8_165 = *(x19_17 + 0x30)
                                                                                                                    
                                                                                                                    if (x8_165 == 0)
                                                                                                                        goto label_ff5cb4
                                                                                                                    
                                                                                                                label_ff5c80:
                                                                                                                    int32_t x0_54
                                                                                                                    x0_54, v0, v1, v2 = (*(x19_17 + 0x10))(
                                                                                                                        *(x19_17 + 0x28), x19_17 + 0x38, 
                                                                                                                        zx.q(*(x19_17 + 0x34)))
                                                                                                                    void* x9_155
                                                                                                                    
                                                                                                                    if (x0_54 == 0)
                                                                                                                        x8_165 = 0
                                                                                                                        *(x19_17 + 0x30) = 0
                                                                                                                        x9_155 = x19_17 + 0x39
                                                                                                                        *(x19_17 + 0x38) = 0
                                                                                                                    else
                                                                                                                        x8_165 = zx.d(*(x19_17 + 0x38))
                                                                                                                        x9_155 = x19_17 + 0x38 + sx.q(x0_54)
                                                                                                                    
                                                                                                                    x15_1 = arg1
                                                                                                                    *(x19_17 + 0xb8) = x19_17 + 0x39
                                                                                                                    *(x19_17 + 0xc0) = x9_155
                                                                                                                    goto label_ff5cb4
                                                                                                                
                                                                                                                int32_t x9_156
                                                                                                                
                                                                                                                while (true)
                                                                                                                    *(x19_17 + 0xb8) = &x8_164[1]
                                                                                                                    x8_165 = zx.d(*x8_164)
                                                                                                                label_ff5cb4:
                                                                                                                    x9_156 = x8_165 & 0xff
                                                                                                                    
                                                                                                                    if (x9_156 != 0xff)
                                                                                                                        break
                                                                                                                    
                                                                                                                    x19_17 = *x15_1
                                                                                                                    x8_164 = *(x19_17 + 0xb8)
                                                                                                                    
                                                                                                                    if (x8_164 u>= *(x19_17 + 0xc0))
                                                                                                                        x8_165 = 0
                                                                                                                        
                                                                                                                        if (*(x19_17 + 0x30) != 0)
                                                                                                                            goto label_ff5c80
                                                                                                                        
                                                                                                                        goto label_ff5cb4
                                                                                                                
                                                                                                                if (x9_156 != 0)
                                                                                                                    *fp_1 = x8_165.b
                                                                                                                    *(arg1 + 0x482c) = 1
                                                                                                                    x9_145 = *x23_1
                                                                                                                    goto label_ff5d08
                                                                                                                
                                                                                                                x8_158 = 0xff
                                                                                                    
                                                                                                    i_11 = *x23_1
                                                                                                    x9_145 = i_11 + 8
                                                                                                    x8_160 =
                                                                                                        x8_158 << (0x18 - i_11) | arg1[0x904].d
                                                                                                    arg1[0x904].d = x8_160
                                                                                                    *x23_1 = x9_145
                                                                                                while (i_11 s< 0x11)
                                                                                            
                                                                                            arg1[0x904].d = x8_160 << 1
                                                                                            *x23_1 = x9_145 - 1
                                                                                            
                                                                                            if ((x8_160 & 0x80000000) != 0)
                                                                                                int32_t x8_167 = sx.d(x20_5[fp_3])
                                                                                                
                                                                                                if ((x8_125 & x8_167) == 0)
                                                                                                    int16_t x8_156
                                                                                                    
                                                                                                    if (x8_167 s< 1)
                                                                                                        x8_156 = x8_167.w - var_108.w
                                                                                                    else
                                                                                                        x8_156 = x8_167.w + var_108.w
                                                                                                    
                                                                                                    x20_5[fp_3] = x8_156
                                                                                        
                                                                                        x8_128 = sx.q(arg1[0x907].d)
                                                                                    while (x27_5 s< x8_128)
                                                                                    x22_5 = var_100
                                                                                    x27_3 = x26_9.d
                                                                            else
                                                                                *(arg1 + 0x4844) =
                                                                                    not.d(0xffffffff << x28_2)
                                                                                
                                                                                if (x28_2 == 0)
                                                                                    x13_2 = 0
                                                                                else
                                                                                    int32_t x9_112 = *x23_1
                                                                                    
                                                                                    if (x9_112 s< x28_2)
                                                                                        int32_t i_12
                                                                                        
                                                                                        do
                                                                                            uint32_t x8_132
                                                                                            
                                                                                            if (*(arg1 + 0x482c) != 0)
                                                                                                x8_132 = 0
                                                                                            else
                                                                                                void* x19_12 = *x15_1
                                                                                                char* x8_136 = *(x19_12 + 0xb8)
                                                                                                
                                                                                                if (x8_136 u>= *(x19_12 + 0xc0))
                                                                                                    x8_132 = *(x19_12 + 0x30)
                                                                                                    
                                                                                                    if (x8_132 != 0)
                                                                                                        int32_t x0_44
                                                                                                        x0_44, v0, v1, v2 = (*(x19_12 + 0x10))(
                                                                                                            *(x19_12 + 0x28), x19_12 + 0x38, 
                                                                                                            zx.q(*(x19_12 + 0x34)))
                                                                                                        void* x9_117
                                                                                                        
                                                                                                        if (x0_44 == 0)
                                                                                                            x8_132 = 0
                                                                                                            *(x19_12 + 0x30) = 0
                                                                                                            x9_117 = x19_12 + 0x39
                                                                                                            *(x19_12 + 0x38) = 0
                                                                                                        else
                                                                                                            x8_132 = zx.d(*(x19_12 + 0x38))
                                                                                                            x9_117 = &(x19_12 + 0x38)[sx.q(x0_44)]
                                                                                                        
                                                                                                        x15_1 = arg1
                                                                                                        *(x19_12 + 0xb8) = x19_12 + 0x39
                                                                                                        *(x19_12 + 0xc0) = x9_117
                                                                                                        goto label_ff5874
                                                                                                else
                                                                                                    *(x19_12 + 0xb8) = &x8_136[1]
                                                                                                    x8_132 = zx.d(*x8_136)
                                                                                                label_ff5874:
                                                                                                    
                                                                                                    if (x8_132 == 0xff)
                                                                                                        void* x19_13 = *x15_1
                                                                                                        char* x8_138 = *(x19_13 + 0xb8)
                                                                                                        uint32_t x8_139
                                                                                                        
                                                                                                        if (x8_138 u>= *(x19_13 + 0xc0))
                                                                                                            x8_139 = *(x19_13 + 0x30)
                                                                                                            
                                                                                                            if (x8_139 == 0)
                                                                                                                goto label_ff58e8
                                                                                                            
                                                                                                        label_ff58b4:
                                                                                                            int32_t x0_46
                                                                                                            x0_46, v0, v1, v2 = (*(x19_13 + 0x10))(
                                                                                                                *(x19_13 + 0x28), x19_13 + 0x38, 
                                                                                                                zx.q(*(x19_13 + 0x34)))
                                                                                                            void* x9_122
                                                                                                            
                                                                                                            if (x0_46 == 0)
                                                                                                                x8_139 = 0
                                                                                                                *(x19_13 + 0x30) = 0
                                                                                                                x9_122 = x19_13 + 0x39
                                                                                                                *(x19_13 + 0x38) = 0
                                                                                                            else
                                                                                                                x8_139 = zx.d(*(x19_13 + 0x38))
                                                                                                                x9_122 = x19_13 + 0x38 + sx.q(x0_46)
                                                                                                            
                                                                                                            x15_1 = arg1
                                                                                                            *(x19_13 + 0xb8) = x19_13 + 0x39
                                                                                                            *(x19_13 + 0xc0) = x9_122
                                                                                                            goto label_ff58e8
                                                                                                        
                                                                                                        int32_t x9_123
                                                                                                        
                                                                                                        while (true)
                                                                                                            *(x19_13 + 0xb8) = &x8_138[1]
                                                                                                            x8_139 = zx.d(*x8_138)
                                                                                                        label_ff58e8:
                                                                                                            x9_123 = x8_139 & 0xff
                                                                                                            
                                                                                                            if (x9_123 != 0xff)
                                                                                                                break
                                                                                                            
                                                                                                            x19_13 = *x15_1
                                                                                                            x8_138 = *(x19_13 + 0xb8)
                                                                                                            
                                                                                                            if (x8_138 u>= *(x19_13 + 0xc0))
                                                                                                                x8_139 = 0
                                                                                                                
                                                                                                                if (*(x19_13 + 0x30) != 0)
                                                                                                                    goto label_ff58b4
                                                                                                                
                                                                                                                goto label_ff58e8
                                                                                                        
                                                                                                        if (x9_123 != 0)
                                                                                                            *fp_1 = x8_139.b
                                                                                                            *(arg1 + 0x482c) = 1
                                                                                                            x9_112 = *x23_1
                                                                                                            break
                                                                                                        
                                                                                                        x8_132 = 0xff
                                                                                            
                                                                                            i_12 = *x23_1
                                                                                            x9_112 = i_12 + 8
                                                                                            arg1[0x904].d |= x8_132 << (0x18 - i_12)
                                                                                            *x23_1 = x9_112
                                                                                        while (i_12 s< 0x11)
                                                                                    
                                                                                    int32_t x11_13 =
                                                                                        *(&data_868654 + (zx.q(x28_2) << 2))
                                                                                    int32_t x12_14 = *(arg1 + 0x4844)
                                                                                    int32_t x8_153 =
                                                                                        ror.d(arg1[0x904].d, neg.d(x28_2))
                                                                                    *(arg1 + 0x4824) = x9_112 - x28_2
                                                                                    x13_2 = 0
                                                                                    arg1[0x904].d = x8_153 & not.d(x11_13)
                                                                                    *(arg1 + 0x4844) =
                                                                                        x12_14 + (x8_153 & x11_13)
                                                                                
                                                                                x28_2 = 0x40
                                                                                x8_128 = zx.q(arg1[0x907].d)
                                                                                
                                                                                if (x27_3 s<= x8_128.d)
                                                                                    goto label_ff5b44
                                                                        
                                                                        if (x27_3 s> x8_128.d)
                                                                            goto label_ff62ec
                                                                    
                                                                    x9_386 = "bad huffman code"
                                                                    goto label_ff7b70
                                                                
                                                                int16_t x22_6 = x9_60.w
                                                                int32_t x9_61 = arg1[0x907].d
                                                                *(arg1 + 0x4844) = x8_82 - 1
                                                                
                                                                if (x27_3 s<= x9_61)
                                                                    int64_t x26_7 = sx.q(x27_3)
                                                                    bool cond:26_1
                                                                    
                                                                    do
                                                                        uint64_t x28_3 =
                                                                            zx.q(*(&data_8685ff + x26_7))
                                                                        
                                                                        if (zx.d(x20_5[x28_3]) != 0)
                                                                            int32_t x9_162 = *x23_1
                                                                            int32_t x8_173
                                                                            
                                                                            if (x9_162 s> 0)
                                                                            label_ff5ee8:
                                                                                x8_173 = arg1[0x904].d
                                                                            else
                                                                                int32_t i_13
                                                                                
                                                                                do
                                                                                    uint32_t x8_171
                                                                                    
                                                                                    if (*(arg1 + 0x482c) != 0)
                                                                                        x8_171 = 0
                                                                                    else
                                                                                        void* x19_18 = *x15_1
                                                                                        char* x8_175 = *(x19_18 + 0xb8)
                                                                                        
                                                                                        if (x8_175 u>= *(x19_18 + 0xc0))
                                                                                            x8_171 = *(x19_18 + 0x30)
                                                                                            
                                                                                            if (x8_171 != 0)
                                                                                                int32_t x0_56
                                                                                                x0_56, v0, v1, v2 = (*(x19_18 + 0x10))(
                                                                                                    *(x19_18 + 0x28), x19_18 + 0x38, 
                                                                                                    zx.q(*(x19_18 + 0x34)))
                                                                                                void* x9_167
                                                                                                
                                                                                                if (x0_56 == 0)
                                                                                                    x8_171 = 0
                                                                                                    *(x19_18 + 0x30) = 0
                                                                                                    x9_167 = x19_18 + 0x39
                                                                                                    *(x19_18 + 0x38) = 0
                                                                                                else
                                                                                                    x8_171 = zx.d(*(x19_18 + 0x38))
                                                                                                    x9_167 = &(x19_18 + 0x38)[sx.q(x0_56)]
                                                                                                
                                                                                                x15_1 = arg1
                                                                                                *(x19_18 + 0xb8) = x19_18 + 0x39
                                                                                                *(x19_18 + 0xc0) = x9_167
                                                                                                
                                                                                                if (x8_171 == 0xff)
                                                                                                    goto label_ff5e34
                                                                                        else
                                                                                            *(x19_18 + 0xb8) = &x8_175[1]
                                                                                            x8_171 = zx.d(*x8_175)
                                                                                            
                                                                                            if (x8_171 == 0xff)
                                                                                            label_ff5e34:
                                                                                                void* x19_19 = *x15_1
                                                                                                char* x8_177 = *(x19_19 + 0xb8)
                                                                                                uint32_t x8_178
                                                                                                
                                                                                                if (x8_177 u>= *(x19_19 + 0xc0))
                                                                                                    x8_178 = *(x19_19 + 0x30)
                                                                                                    
                                                                                                    if (x8_178 == 0)
                                                                                                        goto label_ff5ea0
                                                                                                    
                                                                                                label_ff5e6c:
                                                                                                    int32_t x0_58
                                                                                                    x0_58, v0, v1, v2 = (*(x19_19 + 0x10))(
                                                                                                        *(x19_19 + 0x28), x19_19 + 0x38, 
                                                                                                        zx.q(*(x19_19 + 0x34)))
                                                                                                    void* x9_172
                                                                                                    
                                                                                                    if (x0_58 == 0)
                                                                                                        x8_178 = 0
                                                                                                        *(x19_19 + 0x30) = 0
                                                                                                        x9_172 = x19_19 + 0x39
                                                                                                        *(x19_19 + 0x38) = 0
                                                                                                    else
                                                                                                        x8_178 = zx.d(*(x19_19 + 0x38))
                                                                                                        x9_172 = x19_19 + 0x38 + sx.q(x0_58)
                                                                                                    
                                                                                                    x15_1 = arg1
                                                                                                    *(x19_19 + 0xb8) = x19_19 + 0x39
                                                                                                    *(x19_19 + 0xc0) = x9_172
                                                                                                    goto label_ff5ea0
                                                                                                
                                                                                                int32_t x9_173
                                                                                                
                                                                                                while (true)
                                                                                                    *(x19_19 + 0xb8) = &x8_177[1]
                                                                                                    x8_178 = zx.d(*x8_177)
                                                                                                label_ff5ea0:
                                                                                                    x9_173 = x8_178 & 0xff
                                                                                                    
                                                                                                    if (x9_173 != 0xff)
                                                                                                        break
                                                                                                    
                                                                                                    x19_19 = *x15_1
                                                                                                    x8_177 = *(x19_19 + 0xb8)
                                                                                                    
                                                                                                    if (x8_177 u>= *(x19_19 + 0xc0))
                                                                                                        x8_178 = 0
                                                                                                        
                                                                                                        if (*(x19_19 + 0x30) != 0)
                                                                                                            goto label_ff5e6c
                                                                                                        
                                                                                                        goto label_ff5ea0
                                                                                                
                                                                                                if (x9_173 != 0)
                                                                                                    *fp_1 = x8_178.b
                                                                                                    *(arg1 + 0x482c) = 1
                                                                                                    x9_162 = *x23_1
                                                                                                    goto label_ff5ee8
                                                                                                
                                                                                                x8_171 = 0xff
                                                                                    
                                                                                    i_13 = *x23_1
                                                                                    x9_162 = i_13 + 8
                                                                                    x8_173 =
                                                                                        x8_171 << (0x18 - i_13) | arg1[0x904].d
                                                                                    arg1[0x904].d = x8_173
                                                                                    *x23_1 = x9_162
                                                                                while (i_13 s< 0x11)
                                                                            
                                                                            arg1[0x904].d = x8_173 << 1
                                                                            *x23_1 = x9_162 - 1
                                                                            
                                                                            if ((x8_173 & 0x80000000) != 0)
                                                                                int32_t x8_180 = sx.d(x20_5[x28_3])
                                                                                
                                                                                if ((sx.d(x22_6) & x8_180) == 0)
                                                                                    int16_t x8_168
                                                                                    
                                                                                    if (x8_180 s< 1)
                                                                                        x8_168 = x8_180.w - x22_6
                                                                                    else
                                                                                        x8_168 = x8_180.w + x22_6
                                                                                    
                                                                                    x20_5[x28_3] = x8_168
                                                                        
                                                                        cond:26_1 =
                                                                            x26_7 s>= sx.q(arg1[0x907].d)
                                                                        x26_7 += 1
                                                                    while (not(cond:26_1))
                                                        
                                                    label_ff62ec:
                                                        int32_t x8_209 = *(arg1 + 0x486c)
                                                        x20_4 = var_13c_1
                                                        *(arg1 + 0x486c) = x8_209 - 1
                                                        
                                                        if (x8_209 s<= 1)
                                                            if (*x23_1 s<= 0x17)
                                                                int32_t i_14
                                                                
                                                                do
                                                                    uint32_t x8_212
                                                                    
                                                                    if (*(arg1 + 0x482c) != 0)
                                                                        x8_212 = 0
                                                                    else
                                                                        void* x19_24 = *x15_1
                                                                        char* x8_216 = *(x19_24 + 0xb8)
                                                                        
                                                                        if (x8_216 u>= *(x19_24 + 0xc0))
                                                                            x8_212 = *(x19_24 + 0x30)
                                                                            
                                                                            if (x8_212 != 0)
                                                                                int32_t x0_70
                                                                                x0_70, v0, v1, v2 = (*(x19_24 + 0x10))(
                                                                                    *(x19_24 + 0x28), x19_24 + 0x38, 
                                                                                    zx.q(*(x19_24 + 0x34)))
                                                                                void* x9_216
                                                                                
                                                                                if (x0_70 == 0)
                                                                                    x8_212 = 0
                                                                                    *(x19_24 + 0x30) = 0
                                                                                    x9_216 = x19_24 + 0x39
                                                                                    *(x19_24 + 0x38) = 0
                                                                                else
                                                                                    x8_212 = zx.d(*(x19_24 + 0x38))
                                                                                    x9_216 = &(x19_24 + 0x38)[sx.q(x0_70)]
                                                                                
                                                                                x15_1 = arg1
                                                                                *(x19_24 + 0xb8) = x19_24 + 0x39
                                                                                *(x19_24 + 0xc0) = x9_216
                                                                                goto label_ff63bc
                                                                        else
                                                                            *(x19_24 + 0xb8) = &x8_216[1]
                                                                            x8_212 = zx.d(*x8_216)
                                                                        label_ff63bc:
                                                                            
                                                                            if (x8_212 == 0xff)
                                                                                void* x19_25 = *x15_1
                                                                                char* x8_218 = *(x19_25 + 0xb8)
                                                                                uint32_t x8_219
                                                                                
                                                                                if (x8_218 u>= *(x19_25 + 0xc0))
                                                                                    x8_219 = *(x19_25 + 0x30)
                                                                                    
                                                                                    if (x8_219 == 0)
                                                                                        goto label_ff6430
                                                                                    
                                                                                label_ff63fc:
                                                                                    int32_t x0_72
                                                                                    x0_72, v0, v1, v2 = (*(x19_25 + 0x10))(
                                                                                        *(x19_25 + 0x28), x19_25 + 0x38, 
                                                                                        zx.q(*(x19_25 + 0x34)))
                                                                                    void* x9_221
                                                                                    
                                                                                    if (x0_72 == 0)
                                                                                        x8_219 = 0
                                                                                        *(x19_25 + 0x30) = 0
                                                                                        x9_221 = x19_25 + 0x39
                                                                                        *(x19_25 + 0x38) = 0
                                                                                    else
                                                                                        x8_219 = zx.d(*(x19_25 + 0x38))
                                                                                        x9_221 = x19_25 + 0x38 + sx.q(x0_72)
                                                                                    
                                                                                    x15_1 = arg1
                                                                                    *(x19_25 + 0xb8) = x19_25 + 0x39
                                                                                    *(x19_25 + 0xc0) = x9_221
                                                                                    goto label_ff6430
                                                                                
                                                                                int32_t x9_222
                                                                                
                                                                                while (true)
                                                                                    *(x19_25 + 0xb8) = &x8_218[1]
                                                                                    x8_219 = zx.d(*x8_218)
                                                                                label_ff6430:
                                                                                    x9_222 = x8_219 & 0xff
                                                                                    
                                                                                    if (x9_222 != 0xff)
                                                                                        break
                                                                                    
                                                                                    x19_25 = *x15_1
                                                                                    x8_218 = *(x19_25 + 0xb8)
                                                                                    
                                                                                    if (x8_218 u>= *(x19_25 + 0xc0))
                                                                                        x8_219 = 0
                                                                                        
                                                                                        if (*(x19_25 + 0x30) != 0)
                                                                                            goto label_ff63fc
                                                                                        
                                                                                        goto label_ff6430
                                                                                
                                                                                if (x9_222 != 0)
                                                                                    *fp_1 = x8_219.b
                                                                                    *(arg1 + 0x482c) = 1
                                                                                    break
                                                                                
                                                                                x8_212 = 0xff
                                                                    
                                                                    i_14 = *x23_1
                                                                    arg1[0x904].d |= x8_212 << (0x18 - i_14)
                                                                    *x23_1 = i_14 + 8
                                                                while (i_14 s< 0x11)
                                                            
                                                            x8_1 = zx.d(*fp_1)
                                                            
                                                            if ((x8_1 & 0xf8) != 0xd0)
                                                                break
                                                            
                                                            int32_t x8_221 = arg1[0x90d].d
                                                            arg1[0x905].b = 0xff
                                                            int32_t x8_222
                                                            
                                                            x8_222 =
                                                                x8_221 == 0 ? 0x7fffffff : x8_221
                                                            
                                                            arg1[0x904] = 0
                                                            *(arg1 + 0x482c) = 0
                                                            arg1[0x8fb].d = 0
                                                            arg1[0x8ef].d = 0
                                                            arg1[0x8e3].d = 0
                                                            arg1[0x8d7].d = 0
                                                            *(arg1 + 0x486c) = x8_222
                                                            *(arg1 + 0x4844) = 0
                                                        
                                                        x22_4 = var_110.d + 1
                                                        
                                                        if (x22_4 == x8_73)
                                                            goto label_ff66b8
                                                    
                                                    break
                                                
                                            label_ff66b8:
                                                bool cond:14_1 = var_118.d + 1 != x8_74
                                                var_118.d += 1
                                                
                                                if (not(cond:14_1))
                                                    goto label_ff7654
                                        
                                        if (x8_1 != 0xff)
                                            break
                                        
                                        while (true)
                                            void* x19_44 = *x15_1
                                            
                                            if (*(x19_44 + 0x10) == 0)
                                            label_ff76a0:
                                                
                                                if (*(x19_44 + 0xb8) u>= *(x19_44 + 0xc0))
                                                    goto label_ff4e90
                                            else
                                                int32_t x0_110
                                                x0_110, v0, v1, v2 =
                                                    (*(x19_44 + 0x20))(*(x19_44 + 0x28))
                                                x15_1 = arg1
                                                
                                                if (x0_110 != 0)
                                                    if (*(x19_44 + 0x30) == 0)
                                                        goto label_ff4e90
                                                    
                                                    goto label_ff76a0
                                            
                                            void* x19_45 = *x15_1
                                            char* x8_366 = *(x19_45 + 0xb8)
                                            uint32_t x8_361
                                            
                                            if (x8_366 u< *(x19_45 + 0xc0))
                                                *(x19_45 + 0xb8) = &x8_366[1]
                                                x8_361 = zx.d(*x8_366)
                                            else
                                                x8_361 = *(x19_45 + 0x30)
                                                
                                                if (x8_361 != 0)
                                                    int32_t x0_112
                                                    x0_112, v0, v1, v2 = (*(x19_45 + 0x10))(
                                                        *(x19_45 + 0x28), x19_45 + 0x38, 
                                                        zx.q(*(x19_45 + 0x34)))
                                                    void* x9_364
                                                    
                                                    if (x0_112 == 0)
                                                        x8_361 = 0
                                                        *(x19_45 + 0x30) = 0
                                                        x9_364 = x19_45 + 0x39
                                                        *(x19_45 + 0x38) = 0
                                                    else
                                                        x8_361 = zx.d(*(x19_45 + 0x38))
                                                        x9_364 = x19_45 + 0x38 + sx.q(x0_112)
                                                    
                                                    x15_1 = arg1
                                                    *(x19_45 + 0xb8) = x19_45 + 0x39
                                                    *(x19_45 + 0xc0) = x9_364
                                            
                                            if (x8_361 == 0xff)
                                                void* x19_46 = *x15_1
                                                char* x8_368 = *(x19_46 + 0xb8)
                                                
                                                if (x8_368 u>= *(x19_46 + 0xc0))
                                                    x8_1 = *(x19_46 + 0x30)
                                                    
                                                    if (x8_1 != 0)
                                                        int32_t x0_114
                                                        x0_114, v0, v1, v2 = (*(x19_46 + 0x10))(
                                                            *(x19_46 + 0x28), x19_46 + 0x38, 
                                                            zx.q(*(x19_46 + 0x34)))
                                                        void* x9_369
                                                        
                                                        if (x0_114 == 0)
                                                            x8_1 = 0
                                                            *(x19_46 + 0x30) = 0
                                                            x9_369 = x19_46 + 0x39
                                                            *(x19_46 + 0x38) = 0
                                                        else
                                                            x8_1 = zx.d(*(x19_46 + 0x38))
                                                            x9_369 = x19_46 + 0x38 + sx.q(x0_114)
                                                        
                                                        x15_1 = arg1
                                                        *(x19_46 + 0xb8) = x19_46 + 0x39
                                                        *(x19_46 + 0xc0) = x9_369
                                                else
                                                    *(x19_46 + 0xb8) = &x8_368[1]
                                                    x8_1 = zx.d(*x8_368)
                                                
                                                *fp_1 = x8_1.b
                                                
                                                if (x8_1 != 0xff)
                                                    break
                                                
                                                goto label_ff7780
                                        
                                        break
                                    
                                    int32_t x11_45
                                    int16_t var_e0[0x40]
                                    
                                    if (x10_19 != 1)
                                        int32_t x10_98 = *(arg1 + 0x4694)
                                        
                                        if (x10_98 s< 1)
                                        label_ff7624:
                                            x11_45 = 1
                                        else
                                            int32_t x9_318 = arg1[0x8d2].d
                                            var_f8 = 0
                                            int32_t x11_44
                                            
                                            do
                                                if (x9_318 s>= 1)
                                                    var_100.d = 0
                                                    
                                                    while (true)
                                                        int32_t x9_319 = *(arg1 + 0x4854)
                                                        
                                                        if (x9_319 s>= 1)
                                                            int64_t x11_39 = 0
                                                            void* var_168_1 = fp_1
                                                            
                                                            while (true)
                                                                int64_t x5_1 =
                                                                    sx.q(*(x15_1 + (x11_39 << 2) + 0x4858))
                                                                void* x8_310 =
                                                                    x15_1 + x5_1 * 0x60 + 0x46a8
                                                                int32_t x19_36 = *x8_310
                                                                
                                                                if (x19_36 s>= 1)
                                                                    void* x8_311 = x15_1 + x5_1 * 0x60
                                                                    int32_t x27_7 = *(x8_311 + 0x46a4)
                                                                    var_120.q = x8_311 + 0x46a4
                                                                    int32_t x28_5 = 0
                                                                    
                                                                    while (true)
                                                                        if (x27_7 s>= 1)
                                                                            while (true)
                                                                                int64_t x9_324 =
                                                                                    sx.q(*(x8_311 + 0x46b4))
                                                                                int32_t x0_96
                                                                                int32_t x19_37
                                                                                int64_t x20_11
                                                                                int32_t x22_14
                                                                                x0_96, x19_37, x20_11, x22_14, x23_1, 
                                                                                    v0, v1, v2 = sub_ff8020(x15_1, &var_e0, 
                                                                                    x15_1 + sx.q(*(x8_311 + 0x46b0)) * 0x690
                                                                                        + 8, 
                                                                                    x15_1 + x9_324 * 0x690 + 0x1a48, 
                                                                                    &x15_1[x9_324 * 0x80 + 0x6d1], x5_1.d, 
                                                                                    &x15_1[sx.q(*(x8_311 + 0x46ac)) * 0x10
                                                                                        + 0x691])
                                                                                
                                                                                if (x0_96 == 0)
                                                                                    fp_1 = var_168_1
                                                                                    x11_45 = 0
                                                                                    break
                                                                                
                                                                                int32_t x1_50 = *(x8_311 + 0x46c4)
                                                                                v0, v1, v2 = x15_1[0x90e](
                                                                                    *(x8_311 + 0x46d0) + sx.q(((x28_5
                                                                                        + x19_37 * var_f8) * x1_50) << 3) + sx
                                                                                        .q((x22_14 + var_100.d * x27_7) << 3), 
                                                                                    x1_50, &var_e0)
                                                                                x5_1 = x20_11
                                                                                x27_7 = *var_120.q
                                                                                x19_36 = *x8_310
                                                                                
                                                                                if (x22_14 + 1 s>= x27_7)
                                                                                    goto label_ff70ac
                                                                            
                                                                            break
                                                                        
                                                                    label_ff70ac:
                                                                        x28_5 += 1
                                                                        
                                                                        if (x28_5 s>= x19_36)
                                                                            x9_319 = *(arg1 + 0x4854)
                                                                            fp_1 = var_168_1
                                                                            goto label_ff7194
                                                                    
                                                                    break
                                                                
                                                            label_ff7194:
                                                                x11_39 += 1
                                                                
                                                                if (x11_39 s>= sx.q(x9_319))
                                                                    x8_67 = *(arg1 + 0x486c)
                                                                    goto label_ff71a4
                                                            
                                                            break
                                                        
                                                    label_ff71a4:
                                                        int32_t temp0_1 = x8_67
                                                        x8_67 -= 1
                                                        *(arg1 + 0x486c) = x8_67
                                                        
                                                        if (temp0_1 s<= 1)
                                                            if (*x23_1 s<= 0x17)
                                                                int32_t i_15
                                                                
                                                                do
                                                                    uint32_t x8_324
                                                                    
                                                                    if (*(arg1 + 0x482c) != 0)
                                                                        x8_324 = 0
                                                                    else
                                                                        void* x19_38 = *x15_1
                                                                        char* x8_328 = *(x19_38 + 0xb8)
                                                                        
                                                                        if (x8_328 u>= *(x19_38 + 0xc0))
                                                                            x8_324 = *(x19_38 + 0x30)
                                                                            
                                                                            if (x8_324 != 0)
                                                                                int32_t x0_99
                                                                                x0_99, v0, v1, v2 = (*(x19_38 + 0x10))(
                                                                                    *(x19_38 + 0x28), x19_38 + 0x38, 
                                                                                    zx.q(*(x19_38 + 0x34)))
                                                                                void* x9_333
                                                                                
                                                                                if (x0_99 == 0)
                                                                                    x8_324 = 0
                                                                                    *(x19_38 + 0x30) = 0
                                                                                    x9_333 = x19_38 + 0x39
                                                                                    *(x19_38 + 0x38) = 0
                                                                                else
                                                                                    x8_324 = zx.d(*(x19_38 + 0x38))
                                                                                    x9_333 = &(x19_38 + 0x38)[sx.q(x0_99)]
                                                                                
                                                                                x15_1 = arg1
                                                                                *(x19_38 + 0xb8) = x19_38 + 0x39
                                                                                *(x19_38 + 0xc0) = x9_333
                                                                                goto label_ff7264
                                                                        else
                                                                            *(x19_38 + 0xb8) = &x8_328[1]
                                                                            x8_324 = zx.d(*x8_328)
                                                                        label_ff7264:
                                                                            
                                                                            if (x8_324 == 0xff)
                                                                                void* x19_39 = *x15_1
                                                                                char* x8_330 = *(x19_39 + 0xb8)
                                                                                uint32_t x8_331
                                                                                
                                                                                if (x8_330 u>= *(x19_39 + 0xc0))
                                                                                    x8_331 = *(x19_39 + 0x30)
                                                                                    
                                                                                    if (x8_331 == 0)
                                                                                        goto label_ff72d8
                                                                                    
                                                                                label_ff72a4:
                                                                                    int32_t x0_101
                                                                                    x0_101, v0, v1, v2 = (*(x19_39 + 0x10))(
                                                                                        *(x19_39 + 0x28), x19_39 + 0x38, 
                                                                                        zx.q(*(x19_39 + 0x34)))
                                                                                    void* x9_338
                                                                                    
                                                                                    if (x0_101 == 0)
                                                                                        x8_331 = 0
                                                                                        *(x19_39 + 0x30) = 0
                                                                                        x9_338 = x19_39 + 0x39
                                                                                        *(x19_39 + 0x38) = 0
                                                                                    else
                                                                                        x8_331 = zx.d(*(x19_39 + 0x38))
                                                                                        x9_338 = x19_39 + 0x38 + sx.q(x0_101)
                                                                                    
                                                                                    x15_1 = arg1
                                                                                    *(x19_39 + 0xb8) = x19_39 + 0x39
                                                                                    *(x19_39 + 0xc0) = x9_338
                                                                                    goto label_ff72d8
                                                                                
                                                                                int32_t x9_339
                                                                                
                                                                                while (true)
                                                                                    *(x19_39 + 0xb8) = &x8_330[1]
                                                                                    x8_331 = zx.d(*x8_330)
                                                                                label_ff72d8:
                                                                                    x9_339 = x8_331 & 0xff
                                                                                    
                                                                                    if (x9_339 != 0xff)
                                                                                        break
                                                                                    
                                                                                    x19_39 = *x15_1
                                                                                    x8_330 = *(x19_39 + 0xb8)
                                                                                    
                                                                                    if (x8_330 u>= *(x19_39 + 0xc0))
                                                                                        x8_331 = 0
                                                                                        
                                                                                        if (*(x19_39 + 0x30) != 0)
                                                                                            goto label_ff72a4
                                                                                        
                                                                                        goto label_ff72d8
                                                                                
                                                                                if (x9_339 != 0)
                                                                                    *fp_1 = x8_331.b
                                                                                    *(arg1 + 0x482c) = 1
                                                                                    break
                                                                                
                                                                                x8_324 = 0xff
                                                                    
                                                                    i_15 = *x23_1
                                                                    arg1[0x904].d |= x8_324 << (0x18 - i_15)
                                                                    *x23_1 = i_15 + 8
                                                                while (i_15 s< 0x11)
                                                            
                                                            if ((zx.d(*fp_1) & 0xf8) != 0xd0)
                                                                goto label_ff7624_1
                                                            
                                                            int32_t x8_335 = arg1[0x90d].d
                                                            arg1[0x905].b = 0xff
                                                            
                                                            x8_67 =
                                                                x8_335 == 0 ? 0x7fffffff : x8_335
                                                            
                                                            arg1[0x904] = 0
                                                            *(arg1 + 0x482c) = 0
                                                            arg1[0x8fb].d = 0
                                                            arg1[0x8ef].d = 0
                                                            arg1[0x8e3].d = 0
                                                            arg1[0x8d7].d = 0
                                                            *(arg1 + 0x486c) = x8_67
                                                            *(arg1 + 0x4844) = 0
                                                        
                                                        x9_318 = arg1[0x8d2].d
                                                        bool cond:17_1 = var_100.d + 1 s< x9_318
                                                        var_100.d += 1
                                                        
                                                        if (not(cond:17_1))
                                                            x10_98 = *(arg1 + 0x4694)
                                                            goto label_ff7384
                                                    
                                                    break
                                                
                                            label_ff7384:
                                                x11_44 = var_f8 + 1
                                                var_f8 = x11_44
                                                x11_45 = 1
                                            while (x11_44 s< x10_98)
                                    else
                                        int64_t x20_7 = sx.q(arg1[0x90b].d)
                                        void* x9_244 = x15_1 + x20_7 * 0x60
                                        int32_t x8_242 = *(x9_244 + 0x46c0)
                                        
                                        if (x8_242 s< 1)
                                        label_ff7624_1:
                                            x11_45 = 1
                                        else
                                            int32_t x11_23 = *(x9_244 + 0x46bc)
                                            void* x9_245 = x15_1 + x20_7 * 0x60
                                            var_f8.q = x9_245 + 0x46b4
                                            int32_t x9_248 = (x11_23 + 7) s>> 3
                                            int32_t x8_244 = (x8_242 + 7) s>> 3
                                            void* x9_249
                                            
                                            if (x9_248 s> 1)
                                                x9_249 = zx.q(x9_248)
                                            else
                                                x9_249 = 1
                                            
                                            int32_t x22_11 = 0
                                            int32_t x8_245
                                            
                                            x8_245 = x8_244 s> 1 ? x8_244 : 1
                                            
                                            void* var_128
                                            var_128.d = x8_245
                                            var_120 = x11_23
                                            
                                            while (true)
                                                if (x11_23 s>= 1)
                                                    int64_t x28_6 = 0
                                                    int32_t x27_8 = x22_11 << 3
                                                    
                                                    while (true)
                                                        int64_t x9_343 = sx.q(*var_f8.q)
                                                        int32_t x0_103
                                                        int64_t* x19_41
                                                        x0_103, x19_41, x20_7, x22_11, x23_1, v0, 
                                                            v1, v2 = sub_ff8020(x15_1, &var_e0, 
                                                            x15_1 + sx.q(*(x9_245 + 0x46b0)) * 0x690
                                                                + 8, 
                                                            x15_1 + x9_343 * 0x690 + 0x1a48, 
                                                            &x15_1[x9_343 * 0x80 + 0x6d1], x20_7.d, 
                                                            &x15_1[sx.q(*(x9_245 + 0x46ac)) * 0x10
                                                                + 0x691])
                                                        
                                                        if (x0_103 == 0)
                                                            x11_45 = 0
                                                            x15_1 = x19_41
                                                            break
                                                        
                                                        int32_t x1_54 = *(x9_245 + 0x46c4)
                                                        v0, v1, v2 = x19_41[0x90e](
                                                            *(x9_245 + 0x46d0) + sx.q(x27_8 * x1_54)
                                                                + (x28_6 << 3), 
                                                            x1_54, &var_e0)
                                                        int32_t x8_349 = *(arg1 + 0x486c)
                                                        x15_1 = x19_41
                                                        *(arg1 + 0x486c) = x8_349 - 1
                                                        
                                                        if (x8_349 s<= 1)
                                                            if (*x23_1 s<= 0x17)
                                                                int32_t i_16
                                                                
                                                                do
                                                                    uint32_t x8_352
                                                                    
                                                                    if (*(arg1 + 0x482c) != 0)
                                                                        x8_352 = 0
                                                                    else
                                                                        void* x19_42 = *x15_1
                                                                        char* x8_356 = *(x19_42 + 0xb8)
                                                                        
                                                                        if (x8_356 u>= *(x19_42 + 0xc0))
                                                                            x8_352 = *(x19_42 + 0x30)
                                                                            
                                                                            if (x8_352 != 0)
                                                                                int32_t x0_106
                                                                                x0_106, v0, v1, v2 = (*(x19_42 + 0x10))(
                                                                                    *(x19_42 + 0x28), x19_42 + 0x38, 
                                                                                    zx.q(*(x19_42 + 0x34)))
                                                                                void* x9_350
                                                                                
                                                                                if (x0_106 == 0)
                                                                                    x8_352 = 0
                                                                                    *(x19_42 + 0x30) = 0
                                                                                    x9_350 = x19_42 + 0x39
                                                                                    *(x19_42 + 0x38) = 0
                                                                                else
                                                                                    x8_352 = zx.d(*(x19_42 + 0x38))
                                                                                    x9_350 = &(x19_42 + 0x38)[sx.q(x0_106)]
                                                                                
                                                                                x15_1 = arg1
                                                                                *(x19_42 + 0xb8) = x19_42 + 0x39
                                                                                *(x19_42 + 0xc0) = x9_350
                                                                                
                                                                                if (x8_352 == 0xff)
                                                                                    goto label_ff7580
                                                                        else
                                                                            *(x19_42 + 0xb8) = &x8_356[1]
                                                                            x8_352 = zx.d(*x8_356)
                                                                            
                                                                            if (x8_352 == 0xff)
                                                                            label_ff7580:
                                                                                void* x19_43 = *x15_1
                                                                                char* x8_358 = *(x19_43 + 0xb8)
                                                                                uint32_t x8_359
                                                                                
                                                                                if (x8_358 u>= *(x19_43 + 0xc0))
                                                                                    x8_359 = *(x19_43 + 0x30)
                                                                                    
                                                                                    if (x8_359 == 0)
                                                                                        goto label_ff75ec
                                                                                    
                                                                                label_ff75b8:
                                                                                    int32_t x0_108
                                                                                    x0_108, v0, v1, v2 = (*(x19_43 + 0x10))(
                                                                                        *(x19_43 + 0x28), x19_43 + 0x38, 
                                                                                        zx.q(*(x19_43 + 0x34)))
                                                                                    void* x9_355
                                                                                    
                                                                                    if (x0_108 == 0)
                                                                                        x8_359 = 0
                                                                                        *(x19_43 + 0x30) = 0
                                                                                        x9_355 = x19_43 + 0x39
                                                                                        *(x19_43 + 0x38) = 0
                                                                                    else
                                                                                        x8_359 = zx.d(*(x19_43 + 0x38))
                                                                                        x9_355 = x19_43 + 0x38 + sx.q(x0_108)
                                                                                    
                                                                                    x15_1 = arg1
                                                                                    *(x19_43 + 0xb8) = x19_43 + 0x39
                                                                                    *(x19_43 + 0xc0) = x9_355
                                                                                    goto label_ff75ec
                                                                                
                                                                                int32_t x9_356
                                                                                
                                                                                while (true)
                                                                                    *(x19_43 + 0xb8) = &x8_358[1]
                                                                                    x8_359 = zx.d(*x8_358)
                                                                                label_ff75ec:
                                                                                    x9_356 = x8_359 & 0xff
                                                                                    
                                                                                    if (x9_356 != 0xff)
                                                                                        break
                                                                                    
                                                                                    x19_43 = *x15_1
                                                                                    x8_358 = *(x19_43 + 0xb8)
                                                                                    
                                                                                    if (x8_358 u>= *(x19_43 + 0xc0))
                                                                                        x8_359 = 0
                                                                                        
                                                                                        if (*(x19_43 + 0x30) != 0)
                                                                                            goto label_ff75b8
                                                                                        
                                                                                        goto label_ff75ec
                                                                                
                                                                                if (x9_356 != 0)
                                                                                    *fp_1 = x8_359.b
                                                                                    *(arg1 + 0x482c) = 1
                                                                                    break
                                                                                
                                                                                x8_352 = 0xff
                                                                    
                                                                    i_16 = *x23_1
                                                                    arg1[0x904].d |= x8_352 << (0x18 - i_16)
                                                                    *x23_1 = i_16 + 8
                                                                while (i_16 s< 0x11)
                                                            
                                                            if ((zx.d(*fp_1) & 0xf8) != 0xd0)
                                                                goto label_ff7648
                                                            
                                                            int32_t x8_339 = arg1[0x90d].d
                                                            arg1[0x905].b = 0xff
                                                            int32_t x8_340
                                                            
                                                            x8_340 =
                                                                x8_339 == 0 ? 0x7fffffff : x8_339
                                                            
                                                            arg1[0x904] = 0
                                                            *(arg1 + 0x482c) = 0
                                                            arg1[0x8fb].d = 0
                                                            arg1[0x8ef].d = 0
                                                            arg1[0x8e3].d = 0
                                                            arg1[0x8d7].d = 0
                                                            *(arg1 + 0x486c) = x8_340
                                                            *(arg1 + 0x4844) = 0
                                                        
                                                        x28_6 += 1
                                                        
                                                        if (x28_6 == x9_249)
                                                            goto label_ff73a0
                                                    
                                                    break
                                                
                                            label_ff73a0:
                                                x11_23 = var_120
                                                x22_11 += 1
                                                
                                                if (x22_11 == var_128.d)
                                                label_ff7648:
                                                    x11_45 = 1
                                                    break
                                    
                                    if (x11_45 != 0)
                                        goto label_ff7654
                            
                            return 0
                        
                        *fp_1 = 0xff
                        continue
        else
            if (x9_7 != 0xdc)
                if (x9_7 != 0xd9)
                    result, v0, v1, v2 = sub_ff2e9c(x15_1, x8_1 & 0xff)
                    x15_1 = arg1
                    
                    if (result == 0)
                        break
                    
                    goto label_ff4e90
                
                void* x8_379
                
                if (arg1[0x906].d != 0)
                    x8_379 = *x15_1
                
                if (arg1[0x906].d == 0 || *(x8_379 + 8) s< 1)
                    return 1
                
                int64_t i_17 = 0
                
                do
                    void* x10_121 = x15_1 + i_17 * 0x60
                    int32_t x9_390 = *(x10_121 + 0x46c0)
                    
                    if (x9_390 s>= 1)
                        int32_t x10_122 = *(x10_121 + 0x46bc)
                        
                        if (x10_122 s>= 1)
                            void* x10_123 = x15_1 + i_17 * 0x60
                            int32_t x8_381 = (x10_122 + 7) s>> 3
                            int32_t j = 0
                            uint64_t x28_7
                            
                            if (x8_381 s> 1)
                                x28_7 = zx.q(x8_381)
                            else
                                x28_7 = 1
                            
                            do
                                int64_t x19_50 = 0
                                
                                do
                                    int32_t x9_394 = *(x10_123 + 0x46f8)
                                    int64_t x10_125 = sx.q(*(x10_123 + 0x46ac))
                                    int64_t x11_48 = *(x10_123 + 0x46f0)
                                    void* x8_386 = &x15_1[x10_125 * 0x10]
                                    int128_t* x2_57 =
                                        x11_48 + (sx.q((x19_50.d + x9_394 * j) << 6) << 1)
                                    
                                    if (x2_57 u>= x8_386 + 0x3508 || x8_386 + 0x3488 u>= &x2_57[8])
                                        v2 = x2_57[1]
                                        *x2_57 = vmulq_s16(*x2_57, *(x8_386 + 0x3488))
                                        x2_57[1] = vmulq_s16(v2, *(x8_386 + 0x3498))
                                        v2 = x2_57[3]
                                        x2_57[2] = vmulq_s16(x2_57[2], *(x8_386 + 0x34a8))
                                        x2_57[3] = vmulq_s16(v2, *(x8_386 + 0x34b8))
                                        v2 = x2_57[5]
                                        x2_57[4] = vmulq_s16(x2_57[4], *(x8_386 + 0x34c8))
                                        x2_57[5] = vmulq_s16(v2, *(x8_386 + 0x34d8))
                                        v2 = x2_57[7]
                                        x2_57[6] = vmulq_s16(x2_57[6], *(x8_386 + 0x34e8))
                                        x2_57[7] = vmulq_s16(v2, *(x8_386 + 0x34f8))
                                    else
                                        int16_t* x9_397 =
                                            x11_48 + (sx.q((x19_50.d + j * x9_394) << 6) << 1)
                                        
                                        for (int64_t k = 0; k != 0x80; k += 2)
                                            *(x9_397 + k) *= *(&x15_1[0x691 + x10_125 * 0x10] + k)
                                    
                                    v0, v1, v2 = x15_1[0x90e](*(x10_123 + 0x46d0)
                                        + sx.q((j << 3) * *(x10_123 + 0x46c4)) + (x19_50 << 3))
                                    x15_1 = arg1
                                    x19_50 += 1
                                while (x19_50 != x28_7)
                                
                                j += 1
                            while (j s< (x9_390 + 7) s>> 3)
                            
                            x8_379 = *x15_1
                    
                    i_17 += 1
                    result = 1
                while (i_17 s< sx.q(*(x8_379 + 8)))
                
                break
            
            void* x27_1 = *x15_1
            char* x9_11 = *(x27_1 + 0xb8)
            int64_t x8_11 = *(x27_1 + 0xc0)
            char x20_2
            
            if (x9_11 u>= x8_11)
                if (*(x27_1 + 0x30) == 0)
                    x20_2 = 0
                    
                    if (x9_11 u< x8_11)
                        goto label_ff4984
                    
                    goto label_ff4ad8
                
                int32_t x0_6
                x0_6, v0, v1, v2 =
                    (*(x27_1 + 0x10))(*(x27_1 + 0x28), x27_1 + 0x38, zx.q(*(x27_1 + 0x34)))
                void* x8_23
                
                if (x0_6 == 0)
                    x20_2 = 0
                    *(x27_1 + 0x30) = 0
                    x8_23 = x27_1 + 0x39
                    *(x27_1 + 0x38) = 0
                else
                    x20_2 = *(x27_1 + 0x38)
                    x8_23 = x27_1 + 0x38 + sx.q(x0_6)
                
                x15_1 = arg1
                x9_11 = x27_1 + 0x39
                *(x27_1 + 0xb8) = x9_11
                *(x27_1 + 0xc0) = x8_23
                
                if (x9_11 u< x8_23)
                    goto label_ff4984
                
                goto label_ff4ad8
            
            *(x27_1 + 0xb8) = &x9_11[1]
            x20_2 = *x9_11
            x9_11 = &x9_11[1]
            int64_t x8_13
            char* x9_12
            uint32_t x26_2
            void* x27_2
            
            if (x9_11 u>= x8_11)
            label_ff4ad8:
                
                if (*(x27_1 + 0x30) == 0)
                    x26_2 = 0
                    x27_2 = *x15_1
                    x9_12 = *(x27_2 + 0xb8)
                    x8_13 = *(x27_2 + 0xc0)
                    
                    if (x9_12 u< x8_13)
                        goto label_ff49a0
                    
                    goto label_ff4db4
                
                int32_t x0_10
                x0_10, v0, v1, v2 =
                    (*(x27_1 + 0x10))(*(x27_1 + 0x28), x27_1 + 0x38, zx.q(*(x27_1 + 0x34)))
                void* x8_33
                
                if (x0_10 == 0)
                    x26_2 = 0
                    *(x27_1 + 0x30) = 0
                    x8_33 = x27_1 + 0x39
                    *(x27_1 + 0x38) = 0
                else
                    x26_2 = zx.d(*(x27_1 + 0x38))
                    x8_33 = &(x27_1 + 0x38)[sx.q(x0_10)]
                
                x15_1 = arg1
                *(x27_1 + 0xb8) = x27_1 + 0x39
                *(x27_1 + 0xc0) = x8_33
                x27_2 = *x15_1
                x9_12 = *(x27_2 + 0xb8)
                x8_13 = *(x27_2 + 0xc0)
                
                if (x9_12 u< x8_13)
                    goto label_ff49a0
                
                goto label_ff4db4
            
        label_ff4984:
            *(x27_1 + 0xb8) = &x9_11[1]
            x26_2 = zx.d(*x9_11)
            x27_2 = *x15_1
            x9_12 = *(x27_2 + 0xb8)
            x8_13 = *(x27_2 + 0xc0)
            char x22_2
            
            if (x9_12 u>= x8_13)
            label_ff4db4:
                
                if (*(x27_2 + 0x30) == 0)
                    x22_2 = 0
                    
                    if (x9_12 u< x8_13)
                        goto label_ff49b8
                    
                    goto label_ff4e14
                
                int32_t x0_18
                x0_18, v0, v1, v2 =
                    (*(x27_2 + 0x10))(*(x27_2 + 0x28), x27_2 + 0x38, zx.q(*(x27_2 + 0x34)))
                void* x8_55
                
                if (x0_18 == 0)
                    x22_2 = 0
                    *(x27_2 + 0x30) = 0
                    x8_55 = x27_2 + 0x39
                    *(x27_2 + 0x38) = 0
                else
                    x22_2 = *(x27_2 + 0x38)
                    x8_55 = x27_2 + 0x38 + sx.q(x0_18)
                
                x15_1 = arg1
                x9_12 = x27_2 + 0x39
                *(x27_2 + 0xb8) = x9_12
                *(x27_2 + 0xc0) = x8_55
                
                if (x9_12 u< x8_55)
                    goto label_ff49b8
                
                goto label_ff4e14
            
        label_ff49a0:
            *(x27_2 + 0xb8) = &x9_12[1]
            x22_2 = *x9_12
            x9_12 = &x9_12[1]
            uint32_t x8_15
            
            if (x9_12 u>= x8_13)
            label_ff4e14:
                x8_15 = *(x27_2 + 0x30)
                
                if (x8_15 == 0)
                    goto label_ff4e48
                
                int32_t x0_20
                x0_20, v0, v1, v2 =
                    (*(x27_2 + 0x10))(*(x27_2 + 0x28), x27_2 + 0x38, zx.q(*(x27_2 + 0x34)))
                void* x9_37
                
                if (x0_20 == 0)
                    x8_15 = 0
                    *(x27_2 + 0x30) = 0
                    x9_37 = x27_2 + 0x39
                    *(x27_2 + 0x38) = 0
                else
                    x8_15 = zx.d(*(x27_2 + 0x38))
                    x9_37 = x27_2 + 0x38 + sx.q(x0_20)
                
                x15_1 = arg1
                *(x27_2 + 0xb8) = x27_2 + 0x39
                *(x27_2 + 0xc0) = x9_37
                
                if (((0xffff00ff & x26_2) | zx.d(x20_2) << 8) == 4)
                    goto label_ff4e88
                
                x9_386 = "bad DNL len"
            else
            label_ff49b8:
                *(x27_2 + 0xb8) = &x9_12[1]
                x8_15 = zx.d(*x9_12)
            label_ff4e48:
                
                if (((0xffff00ff & x26_2) | zx.d(x20_2) << 8) == 4)
                label_ff4e88:
                    
                    if (((0xffff00ff & x8_15) | zx.d(x22_2) << 8) != *(*x15_1 + 4))
                        x9_386 = "bad DNL height"
                    else
                    label_ff4e90:
                        x8_1 = zx.d(*fp_1)
                        
                        if (x8_1 != 0xff)
                            *fp_1 = 0xff
                            continue
                        
                    label_ff7780:
                        void* x19_47 = *x15_1
                        char* x8_370 = *(x19_47 + 0xb8)
                        
                        if (x8_370 u>= *(x19_47 + 0xc0))
                            x8_1 = 0xff
                            
                            if (*(x19_47 + 0x30) == 0)
                                continue
                            else
                                int32_t x0_116
                                x0_116, v0, v1, v2 = (*(x19_47 + 0x10))(*(x19_47 + 0x28), 
                                    x19_47 + 0x38, zx.q(*(x19_47 + 0x34)))
                                uint32_t x8_373
                                void* x9_375
                                
                                if (x0_116 == 0)
                                    x8_373 = 0
                                    *(x19_47 + 0x30) = 0
                                    x9_375 = x19_47 + 0x39
                                    *(x19_47 + 0x38) = 0
                                else
                                    x8_373 = zx.d(*(x19_47 + 0x38))
                                    x9_375 = x19_47 + 0x38 + sx.q(x0_116)
                                
                                x15_1 = arg1
                                *(x19_47 + 0xb8) = x19_47 + 0x39
                                *(x19_47 + 0xc0) = x9_375
                                x8_1 = 0xff
                                
                                if (x8_373 != 0xff)
                                    continue
                        else
                            *(x19_47 + 0xb8) = &x8_370[1]
                            x8_1 = 0xff
                            
                            if (zx.d(*x8_370) != 0xff)
                                continue
                        
                        while (true)
                            void* x19_48 = *x15_1
                            char* x8_374 = *(x19_48 + 0xb8)
                            
                            if (x8_374 u< *(x19_48 + 0xc0))
                                *(x19_48 + 0xb8) = &x8_374[1]
                                x8_1 = zx.d(*x8_374)
                                
                                if (x8_1 != 0xff)
                                    break
                            else
                                x8_1 = *(x19_48 + 0x30)
                                
                                if (x8_1 == 0)
                                    break
                                
                                int32_t x0_118
                                x0_118, v0, v1, v2 = (*(x19_48 + 0x10))(*(x19_48 + 0x28), 
                                    x19_48 + 0x38, zx.q(*(x19_48 + 0x34)))
                                void* x9_380
                                
                                if (x0_118 == 0)
                                    x8_1 = 0
                                    *(x19_48 + 0x30) = 0
                                    x9_380 = x19_48 + 0x39
                                    *(x19_48 + 0x38) = 0
                                else
                                    x8_1 = zx.d(*(x19_48 + 0x38))
                                    x9_380 = x19_48 + 0x38 + sx.q(x0_118)
                                
                                x15_1 = arg1
                                *(x19_48 + 0xb8) = x19_48 + 0x39
                                *(x19_48 + 0xc0) = x9_380
                                
                                if (x8_1 != 0xff)
                                    break
                        
                        continue
                else
                    x9_386 = "bad DNL len"
        
    label_ff7b70:
        result = 0
        data_2423720 = x9_386
        break

return result
