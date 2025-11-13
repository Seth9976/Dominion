// 函数: sub_ff0cb0
// 地址: 0xff0cb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int64_t var_478
sub_1001a60(arg1, &var_478)
float* result

if (((var_478 ^ 0x4e41494441523f23) | (var_478 ^ 0x45434e41494441)) == 0
        || ((var_478.d ^ 0x47523f23) | (var_478:3.d ^ 0x454247)) == 0)
    sub_1001a60(arg1, &var_478)
    
    if (zx.d(var_478.b) == 0)
    label_ff0e84:
        result = nullptr
        data_2423720 = "unsupported format"
    else
        int32_t x21_1 = 0
        
        do
            int64_t var_470
            
            if (((var_478 ^ 0x333d54414d524f46) | (var_470 ^ 0x6c725f7469622d32)
                    | (var_470 ^ 0x656267725f656c)) == 0)
                x21_1 = 1
            
            sub_1001a60(arg1, &var_478)
        while (zx.d(var_478.b) != 0)
        
        if (x21_1 == 0)
            goto label_ff0e84
        
        sub_1001a60(arg1, &var_478)
        
        if (((zx.d(var_478.w) ^ 0x592d) | (zx.d(var_478:2.b) ^ 0x20)) != 0)
        label_ff0e74:
            result = nullptr
            data_2423720 = "unsupported data layout"
        else
            char* nptr = &var_478 | 3
            char* endptr = nptr
            int32_t x0_3 = strtol(nptr, &endptr, 0xa)
            char* endptr_1 = endptr
            
            if (zx.d(*endptr_1) == 0x20)
                do
                    endptr_1 = &endptr_1[1]
                while (zx.d(*endptr_1) == 0x20)
                
                endptr = endptr_1
            
            if (strncmp(endptr_1, 0x742778, 3) != 0)
                goto label_ff0e74
            
            endptr = &endptr_1[3]
            int32_t i_11 = strtol(&endptr_1[3], nullptr, 0xa)
            *arg2 = i_11
            *arg3 = x0_3
            
            if (arg4 != 0)
                *arg4 = 3
            
            uint64_t x27_1
            
            if (arg5 == 0)
                x27_1 = 3
            else
                x27_1 = zx.q(arg5)
            
            int32_t x8_20
            
            if (((i_11 | x0_3) & 0x80000000) == 0 && (x0_3 == 0 || 0x7fffffff s/ x0_3 s>= i_11))
                x8_20 = i_11 * x0_3
            
            if (((i_11 | x0_3) & 0x80000000) != 0 || (x0_3 != 0 && 0x7fffffff s/ x0_3 s< i_11)
                    || ((x8_20 | x27_1.d) & 0x80000000) != 0 || 0x7fffffff s/ x27_1.d s< x8_20
                    || (x8_20 * x27_1.d) u>> 0x1d != 0)
                result = nullptr
                data_2423720 = "too large"
            else
                if (x0_3 != 0 && 0x7fffffff s/ x0_3 s< i_11)
                    goto label_ff167c
                
                float* result_2 = malloc(sx.q((x27_1.d * x8_20) << 2))
                
                if (result_2 == 0)
                    goto label_ff167c
                
                result = result_2
                uint64_t var_498_1 = x27_1
                int32_t x24_1
                int32_t x25_5
                
                if ((i_11 - 8) u>> 3 u> 0xffe)
                    x24_1 = 0
                label_ff1784:
                    
                    if (x24_1 s< x0_3)
                        x25_5 = 0
                        goto label_ff1790
                else if (x0_3 s>= 1)
                    uint64_t i_9 = zx.q(i_11)
                    int32_t x9_16 = x27_1.d * i_11
                    int64_t x10_4 = (x27_1 & 0xffffffff) << 0x20 s>> 0x1e
                    int64_t x25_1 = 0
                    void* x23_1 = nullptr
                    v8.d = fconvert.s(3f)
                    int32_t var_4bc_1 = 0
                    float* result_1 = result
                label_ff0ff4:
                    void* x9_18 = *(arg1 + 0xb8)
                    void* x8_32 = *(arg1 + 0xc0)
                    uint32_t fp_1
                    
                    if (x9_18 u< x8_32)
                        *(arg1 + 0xb8) = x9_18 + 1
                        fp_1 = zx.d(*x9_18)
                        x9_18 += 1
                    else if (*(arg1 + 0x30) == 0)
                        fp_1 = 0
                    else
                        int32_t x0_10 =
                            (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                        
                        if (x0_10 == 0)
                            fp_1 = 0
                            *(arg1 + 0x30) = 0
                            *(arg1 + 0x38) = 0
                            x8_32 = arg1 + 0x39
                        else
                            fp_1 = zx.d(*(arg1 + 0x38))
                            x8_32 = &(arg1 + 0x38)[sx.q(x0_10)]
                        
                        x9_18 = arg1 + 0x39
                        *(arg1 + 0xb8) = arg1 + 0x39
                        *(arg1 + 0xc0) = x8_32
                    
                    uint32_t x24_2
                    
                    if (x9_18 u< x8_32)
                        *(arg1 + 0xb8) = x9_18 + 1
                        x24_2 = zx.d(*x9_18)
                        x9_18 += 1
                    else if (*(arg1 + 0x30) == 0)
                        x24_2 = 0
                    else
                        int32_t x0_12 =
                            (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                        
                        if (x0_12 == 0)
                            x24_2 = 0
                            *(arg1 + 0x30) = 0
                            *(arg1 + 0x38) = 0
                            x8_32 = arg1 + 0x39
                        else
                            x24_2 = zx.d(*(arg1 + 0x38))
                            x8_32 = &(arg1 + 0x38)[sx.q(x0_12)]
                        
                        x9_18 = arg1 + 0x39
                        *(arg1 + 0xb8) = arg1 + 0x39
                        *(arg1 + 0xc0) = x8_32
                    
                    uint32_t x25_2
                    
                    if (x9_18 u< x8_32)
                        *(arg1 + 0xb8) = x9_18 + 1
                        x25_2 = zx.d(*x9_18)
                        x9_18 += 1
                    else if (*(arg1 + 0x30) == 0)
                        x25_2 = 0
                    else
                        int32_t x0_14 =
                            (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                        
                        if (x0_14 == 0)
                            x25_2 = 0
                            *(arg1 + 0x30) = 0
                            *(arg1 + 0x38) = 0
                            x8_32 = arg1 + 0x39
                        else
                            x25_2 = zx.d(*(arg1 + 0x38))
                            x8_32 = &(arg1 + 0x38)[sx.q(x0_14)]
                        
                        x9_18 = arg1 + 0x39
                        *(arg1 + 0xb8) = arg1 + 0x39
                        *(arg1 + 0xc0) = x8_32
                    
                    float v0_1
                    
                    if (fp_1 != 2 || x24_2 != 2 || (x25_2 & 0x80) != 0)
                        uint32_t x8_72
                        
                        if (x9_18 u>= x8_32)
                            if (*(arg1 + 0x30) != 0)
                                int32_t x0_33 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, 
                                    zx.q(*(arg1 + 0x34)))
                                void* x9_39
                                
                                if (x0_33 == 0)
                                    x8_72 = 0
                                    *(arg1 + 0x30) = 0
                                    *(arg1 + 0x38) = 0
                                    x9_39 = arg1 + 0x39
                                else
                                    x8_72 = zx.d(*(arg1 + 0x38))
                                    x9_39 = &(arg1 + 0x38)[sx.q(x0_33)]
                                
                                *(arg1 + 0xb8) = arg1 + 0x39
                                *(arg1 + 0xc0) = x9_39
                                goto label_ff1698
                            
                        label_ff16d8:
                            uint64_t x8_79 = zx.q(var_498_1.d - 1)
                            
                            if (x8_79.d u<= 3)
                                switch (x8_79)
                                    case 1
                                        result[1] = 0x3f800000
                                    case 2
                                        result[1] = 0
                                        result[2] = 0
                                    case 3
                                        result[3] = 0x3f800000
                                        result[1] = 0
                                        result[2] = 0
                                
                                *result = 0f
                        else
                            *(arg1 + 0xb8) = x9_18 + 1
                            x8_72 = zx.d(*x9_18)
                        label_ff1698:
                            
                            if (x8_72 == 0)
                                goto label_ff16d8
                            
                            float v0_2 = ldexpf(x8_72 - 0x88, fconvert.s(1f))
                            
                            if (var_498_1.d s> 2)
                                *result = v0_2 * float.s(fp_1)
                                result[1] = v0_2 * float.s(x24_2)
                                result[2] = v0_2 * float.s(x25_2)
                            else
                                *result = v0_2 * float.s(x24_2 + fp_1 + x25_2) / fconvert.s(3f)
                            
                            if (var_498_1.d == 4)
                                result[3] = 0x3f800000
                            else if (var_498_1.d == 2)
                                result[1] = 0x3f800000
                        free(x23_1)
                        x27_1 = var_498_1
                        x24_1 = 0
                        x25_5 = 1
                        
                        do
                            int64_t x28_2 = *(arg1 + 0x10)
                            int32_t var_484
                            int32_t* x1_13
                            int64_t x8_82
                            
                            if (x28_2 == 0)
                                x1_13 = *(arg1 + 0xb8)
                                x8_82 = *(arg1 + 0xc0)
                            label_ff17f8:
                                
                                if (&x1_13[1] u<= x8_82)
                                    var_484 = *x1_13
                                    *(arg1 + 0xb8) = &x1_13[1]
                            else
                                x1_13 = *(arg1 + 0xb8)
                                x8_82 = *(arg1 + 0xc0)
                                int32_t fp_4 = x8_82.d - x1_13.d
                                
                                if (fp_4 s> 3)
                                    goto label_ff17f8
                                
                                int64_t x23_2 = sx.q(fp_4)
                                memcpy(&var_484, x1_13, x23_2)
                                x27_1 = var_498_1
                                x28_2(*(arg1 + 0x28), &var_484 + x23_2, zx.q(4 - fp_4))
                                *(arg1 + 0xb8) = *(arg1 + 0xc0)
                            char var_481
                            uint32_t x8_85 = zx.d(var_481)
                            void* x23_3 =
                                &result[sx.q(x27_1.d * i_11 * x24_1) + sx.q(x25_5 * x27_1.d)]
                            
                            if (x8_85 == 0)
                                uint64_t x8_89 = zx.q(x27_1.d - 1)
                                
                                if (x8_89.d u<= 3)
                                    switch (x8_89)
                                        case 1
                                            *(x23_3 + 4) = 0x3f800000
                                        case 2
                                            *(x23_3 + 4) = 0
                                            *(x23_3 + 8) = 0
                                        case 3
                                            *(x23_3 + 0xc) = 0x3f800000
                                            *(x23_3 + 4) = 0
                                            *(x23_3 + 8) = 0
                                    
                                    *x23_3 = 0
                                
                                x25_5 += 1
                            else
                                float v1_4
                                float v2_2
                                v0_1, v1_4, v2_2 = ldexpf(x8_85 - 0x88, fconvert.s(1f))
                                uint32_t x8_86 = zx.d(var_484.b)
                                
                                if (x27_1.d s> 2)
                                    v1_4.b = var_484:1.b
                                    v2_2.b = var_484:2.b
                                    *x23_3 = v0_1 * float.s(x8_86)
                                    *(x23_3 + 4) = v0_1 * float.s(v1_4)
                                    *(x23_3 + 8) = v0_1 * float.s(v2_2)
                                else
                                    *x23_3 = v0_1
                                        * float.s(zx.d(var_484:1.b) + x8_86 + zx.d(var_484:2.b))
                                        / fconvert.s(3f)
                                
                                if (x27_1.d == 4)
                                    *(x23_3 + 0xc) = 0x3f800000
                                    x25_5 += 1
                                else if (x27_1.d != 2)
                                    x25_5 += 1
                                else
                                    *(x23_3 + 4) = 0x3f800000
                                    x25_5 += 1
                            
                        label_ff1790:
                        while (x25_5 s< i_11)
                        
                        x24_1 += 1
                        goto label_ff1784
                    
                    uint32_t x8_40
                    
                    if (x9_18 u>= x8_32)
                        x8_40 = *(arg1 + 0x30)
                        
                        if (x8_40 != 0)
                            int32_t x0_16 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                            void* x9_21
                            
                            if (x0_16 == 0)
                                x8_40 = 0
                                *(arg1 + 0x30) = 0
                                *(arg1 + 0x38) = 0
                                x9_21 = arg1 + 0x39
                            else
                                x8_40 = zx.d(*(arg1 + 0x38))
                                x9_21 = &(arg1 + 0x38)[sx.q(x0_16)]
                            
                            *(arg1 + 0xb8) = arg1 + 0x39
                            *(arg1 + 0xc0) = x9_21
                    else
                        *(arg1 + 0xb8) = x9_18 + 1
                        x8_40 = zx.d(*x9_18)
                    
                    if ((x25_2 << 8 | x8_40) != i_11)
                        free(result)
                        free(x23_1)
                        result = nullptr
                        data_2423720 = "invalid decoded scanline length"
                    else if (x23_1 != 0)
                    label_ff11d4:
                        int32_t var_4a0_1 = 0
                        void* var_4a8_1 = x23_1
                    label_ff1200:
                        int32_t fp_2 = 0
                        int32_t i_12 = i_11
                        
                        while (true)
                            char* x10_11 = *(arg1 + 0xb8)
                            void* x8_51 = *(arg1 + 0xc0)
                            void* i
                            uint32_t x24_3
                            
                            if (x10_11 u< x8_51)
                                i = &x10_11[1]
                                *(arg1 + 0xb8) = i
                                x24_3 = zx.d(*x10_11)
                            label_ff1280:
                                
                                if (x24_3 u< 0x81)
                                    if (i_12 s< x24_3)
                                    label_ff15e8:
                                        free(result)
                                        free(x23_1)
                                        break
                                    
                                    if (x24_3 != 0)
                                        int32_t x25_3 = var_4a0_1 + (fp_2 << 2)
                                        fp_2 += 1
                                        int32_t x24_4 = x24_3 - 1
                                        uint32_t x8_56
                                        
                                        if (i u< x8_51)
                                            do
                                                *(arg1 + 0xb8) = i + 1
                                                x8_56 = zx.d(*i)
                                            label_ff1334:
                                                *(x23_1 + sx.q(x25_3)) = x8_56.b
                                                
                                                if (x24_4 == 0)
                                                    goto label_ff1210
                                                
                                                i = *(arg1 + 0xb8)
                                                x25_3 += 4
                                                fp_2 += 1
                                                x24_4 -= 1
                                            while (i u< *(arg1 + 0xc0))
                                        
                                        x8_56 = *(arg1 + 0x30)
                                        
                                        if (x8_56 == 0)
                                            goto label_ff1334
                                        
                                        int32_t x0_22 = (*(arg1 + 0x10))(*(arg1 + 0x28), 
                                            arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                                        void* x9_25
                                        
                                        if (x0_22 == 0)
                                            x8_56 = 0
                                            *(arg1 + 0x30) = 0
                                            *(arg1 + 0x38) = 0
                                            x9_25 = arg1 + 0x39
                                        else
                                            x8_56 = zx.d(*(arg1 + 0x38))
                                            x9_25 = arg1 + 0x38 + sx.q(x0_22)
                                        
                                        *(arg1 + 0xb8) = arg1 + 0x39
                                        *(arg1 + 0xc0) = x9_25
                                        goto label_ff1334
                                else
                                    uint32_t x8_53
                                    
                                    if (i u>= x8_51)
                                        x8_53 = *(arg1 + 0x30)
                                        
                                        if (x8_53 != 0)
                                            int32_t x0_24 = (*(arg1 + 0x10))(*(arg1 + 0x28), 
                                                arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                                            void* x9_28
                                            
                                            if (x0_24 == 0)
                                                x8_53 = 0
                                                *(arg1 + 0x30) = 0
                                                *(arg1 + 0x38) = 0
                                                x9_28 = arg1 + 0x39
                                            else
                                                x8_53 = zx.d(*(arg1 + 0x38))
                                                x9_28 = &(arg1 + 0x38)[sx.q(x0_24)]
                                            
                                            *(arg1 + 0xb8) = arg1 + 0x39
                                            *(arg1 + 0xc0) = x9_28
                                    else
                                        *(arg1 + 0xb8) = i + 1
                                        x8_53 = zx.d(*i)
                                    
                                    int32_t x9_29 = x24_3 ^ 0x80
                                    
                                    if (i_12 s< x9_29)
                                        goto label_ff15e8
                                    
                                    if (x9_29 != 0)
                                        int32_t i_10
                                        int32_t x11_1
                                        
                                        if (x9_29 != 1)
                                            i_10 = x9_29 & 0xfe
                                            x11_1 = fp_2 + i_10
                                            int32_t i_6 = i_10
                                            int32_t x12_2 = var_4a0_1 + (fp_2 << 2)
                                            int32_t i_1
                                            
                                            do
                                                int32_t x14_1 = x12_2 + 4
                                                *(x23_1 + sx.q(x12_2)) = x8_53.b
                                                i_1 = i_6
                                                i_6 -= 2
                                                x12_2 += 8
                                                *(x23_1 + sx.q(x14_1)) = x8_53.b
                                            while (i_1 != 2)
                                            
                                            if (i_10 != x9_29)
                                                goto label_ff13e4
                                        else
                                            i_10 = 0
                                            x11_1 = fp_2
                                        label_ff13e4:
                                            int32_t i_5 = x9_29 - i_10
                                            uint8_t* x11_3 = var_4a8_1 + sx.q(x11_1 << 2)
                                            int32_t i_2
                                            
                                            do
                                                i_2 = i_5
                                                i_5 -= 1
                                                *x11_3 = x8_53.b
                                                x11_3 = &x11_3[4]
                                            while (i_2 != 1)
                                        fp_2 += x9_29
                            else if (*(arg1 + 0x30) != 0)
                                int32_t x0_20 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, 
                                    zx.q(*(arg1 + 0x34)))
                                
                                if (x0_20 == 0)
                                    x24_3 = 0
                                    *(arg1 + 0x30) = 0
                                    *(arg1 + 0x38) = 0
                                    x8_51 = arg1 + 0x39
                                else
                                    x24_3 = zx.d(*(arg1 + 0x38))
                                    x8_51 = &(arg1 + 0x38)[sx.q(x0_20)]
                                
                                i = arg1 + 0x39
                                *(arg1 + 0xb8) = arg1 + 0x39
                                *(arg1 + 0xc0) = x8_51
                                goto label_ff1280
                        label_ff1210:
                            i_12 = i_11 - fp_2
                            
                            if (i_12 s<= 0)
                                int32_t x8_44 = var_4a0_1 + 1
                                var_4a0_1 = x8_44
                                var_4a8_1 += 1
                                
                                if (x8_44 != 4)
                                    goto label_ff1200
                                
                                void* x24_5 = x23_1 + 3
                                
                                if (x27_1.d s> 2)
                                    uint64_t i_7 = i_9
                                    int32_t fp_3 = var_4bc_1
                                    x27_1 = var_498_1
                                    uint64_t i_3
                                    
                                    do
                                        uint32_t x8_65 = zx.d(*x24_5)
                                        void* x12_4 = &result[sx.q(fp_3)]
                                        
                                        if (x8_65 == 0)
                                            uint64_t x8_66 = zx.q(x27_1.d - 1)
                                            
                                            if (x8_66.d u<= 3)
                                                switch (x8_66)
                                                    case 1
                                                        *(x12_4 + 4) = 0x3f800000
                                                    case 2
                                                        *(x12_4 + 4) = 0
                                                        *(x12_4 + 8) = 0
                                                    case 3
                                                        *(x12_4 + 0xc) = 0x3f800000
                                                        *(x12_4 + 4) = 0
                                                        *(x12_4 + 8) = 0
                                                
                                                *x12_4 = 0
                                        else
                                            var_4a0_1.q = x12_4
                                            float v1_2
                                            v0_1, v1_2 = ldexpf(x8_65 - 0x88, fconvert.s(1f))
                                            v1_2.b = *(x24_5 - 3)
                                            int32_t* x9_32 = var_4a0_1.q
                                            *x9_32 = v0_1 * float.s(v1_2)
                                            v1_2.b = *(x24_5 - 2)
                                            x9_32[1] = v0_1 * float.s(v1_2)
                                            v1_2.b = *(x24_5 - 1)
                                            x9_32[2] = v0_1 * float.s(v1_2)
                                            
                                            if (x27_1.d == 4)
                                                x9_32[3] = 0x3f800000
                                            else if (x27_1.d == 2)
                                                x9_32[1] = 0x3f800000
                                        
                                        fp_3 += x27_1.d
                                        i_3 = i_7
                                        i_7 -= 1
                                        x24_5 += 4
                                    while (i_3 != 1)
                                else
                                    float* result_3 = result_1
                                    uint64_t i_8 = i_9
                                    x27_1 = var_498_1
                                    uint64_t i_4
                                    
                                    do
                                        uint32_t x8_60 = zx.d(*x24_5)
                                        
                                        if (x8_60 == 0)
                                            uint64_t x8_64 = zx.q(x27_1.d - 1)
                                            
                                            if (x8_64.d u<= 3)
                                                switch (x8_64)
                                                    case 1
                                                        result_3[1] = 0x3f800000
                                                    case 2
                                                        result_3[1] = 0
                                                        result_3[2] = 0
                                                    case 3
                                                        result_3[3] = 0x3f800000
                                                        result_3[1] = 0
                                                        result_3[2] = 0
                                                
                                                *result_3 = 0f
                                        else
                                            *result_3 = ldexpf(x8_60 - 0x88, fconvert.s(1f)) * float
                                                .s(zx.d(*(x24_5 - 2)) + zx.d(*(x24_5 - 3))
                                                + zx.d(*(x24_5 - 1))) f/ v8.d
                                            
                                            if (x27_1.d == 2)
                                                result_3[1] = 0x3f800000
                                            else if (x27_1.d == 4)
                                                result_3[3] = 0x3f800000
                                        
                                        i_4 = i_8
                                        i_8 -= 1
                                        x24_5 += 4
                                        result_3 += x10_4
                                    while (i_4 != 1)
                                
                                var_4bc_1 += x9_16
                                x25_1 += 1
                                result_1 = &result_1[muls.dp.d(x27_1.d, i_11)]
                                
                                if (x25_1 != zx.q(x0_3))
                                    goto label_ff0ff4
                                
                                if (x23_1 != 0)
                                    free(x23_1)
                                
                                goto label_ff0e98
                        
                        result = nullptr
                        data_2423720 = "corrupt"
                    else
                        void* x0_18 = malloc(sx.q(i_11 << 2))
                        x23_1 = x0_18
                        
                        if (x0_18 != 0)
                            goto label_ff11d4
                        
                        free(result)
                    label_ff167c:
                        result = nullptr
                        data_2423720 = "outofmem"
else
    result = nullptr
    data_2423720 = "not HDR"

label_ff0e98:

if (*(x26 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
