// 函数: spSkeleton_updateCache
// 地址: 0xfb309c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = arg1[0x14]
*(arg1 + 0x9c) = arg1[7].d + arg1[1].d + arg1[9].d + arg1[0xb].d
_spFree(x0)
int64_t x0_2 =
    _spMalloc(sx.q(*(arg1 + 0x9c)) << 4, "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x15c)
int64_t x8_5 = arg1[0x16]
int32_t x9_1 = arg1[1].d
arg1[0x14] = x0_2
arg1[0x13].d = 0
*(arg1 + 0xac) = x9_1
_spFree(x8_5)
int64_t result =
    _spMalloc(sx.q(*(arg1 + 0xac)) << 3, "..\..\ExternalCode\spine-c\src\spine\Skeleton.c", 0x161)
int32_t x8_7 = arg1[1].d
arg1[0x16] = result
arg1[0x15].d = 0

if (x8_7 s>= 1)
    int64_t x8_8 = arg1[2]
    int64_t i = 0
    
    do
        int64_t* x10_1 = *(x8_8 + (i << 3))
        i += 1
        int32_t x11_2 = *(*x10_1 + 0x3c)
        *(x10_1 + 0x7c) = x11_2
        x10_1[0x10].d = x11_2 == 0 ? 1 : 0
    while (i s< sx.q(arg1[1].d))

void* x8_9 = arg1[0xd]

if (x8_9 != 0)
    int32_t* x8_10 = *(x8_9 + 8)
    
    if (*x8_10 s>= 1)
        int64_t i_1 = 0
        
        do
            void* j = *(arg1[2] + (sx.q(**(*(x8_10 + 8) + (i_1 << 3))) << 3))
            
            do
                *(j + 0x7c) = -0x100000000
                j = *(j + 0x10)
            while (j != 0)
            
            i_1 += 1
        while (i_1 s< sx.q(*x8_10))

uint64_t x26 = zx.q(arg1[7].d)
uint64_t fp = zx.q(arg1[9].d)
uint64_t i_14 = zx.q(arg1[0xb].d)
int32_t x21 = fp.d + x26.d + i_14.d

if (x21 s>= 1)
    int64_t* x24_1 = arg1[8]
    int64_t* x9_3 = arg1[0xa]
    int64_t* x8_12 = arg1[0xc]
    int32_t x25_1 = 0
    int32_t var_8c_1 = x21
    int64_t* var_88_1 = x24_1
    uint64_t var_b0_1 = fp
    uint64_t var_a8_1 = x26
    uint64_t i_15 = i_14
    
    do
        uint64_t x8_13 = x26
        int64_t* x9_4 = x24_1
        
        if (x26.d s< 1)
        label_fb3250:
            int64_t* x9_5 = x9_3
            uint64_t x8_14 = fp
            
            if (fp.d s< 1)
            label_fb3280:
                int64_t* x9_6 = x8_12
                uint64_t i_9 = i_14
                
                if (i_14.d s>= 1)
                    uint64_t i_2
                    
                    do
                        int64_t* x28_1 = *x9_6
                        void* x1_3 = *x28_1
                        
                        if (*(x1_3 + 8) == x25_1)
                            int64_t* x20_2 = x28_1[3]
                            void* x8_22 = x20_2[1]
                            
                            if (*(x8_22 + 0x80) == 0)
                                x28_1[0x15].d = 0
                            else
                                int32_t x23_3 = **x20_2
                                int64_t* var_a0_1
                                void* x8_27
                                
                                if (*(x1_3 + 0xc) == 0)
                                    x28_1[0x15].d = 1
                                    x8_27 = arg1[0xd]
                                    var_a0_1 = x20_2
                                    
                                    if (x8_27 != 0)
                                    label_fb3528:
                                        int32_t* j_1 = *(x8_27 + 0x28)
                                        
                                        if (j_1 != 0)
                                            do
                                                if (*j_1 == x23_3)
                                                    void* x8_38 = *(j_1 + 0x10)
                                                    
                                                    if (*(x8_38 + 8) == 4)
                                                        int64_t x26_1 = *(x8_38 + 0x30)
                                                        
                                                        if (x26_1 == 0)
                                                            sub_fb3b98(arg1, x8_22)
                                                        else
                                                            int32_t k = *(x8_38 + 0x28)
                                                            
                                                            if (k s>= 1)
                                                                int64_t x27_3 = arg1[2]
                                                                uint64_t x21_1 = 0
                                                                
                                                                do
                                                                    int32_t x8_39 =
                                                                        *(x26_1 + (sx.q(x21_1.d) << 2))
                                                                    x21_1 = zx.q(x21_1.d + 1)
                                                                    
                                                                    if (x8_39 s>= 1)
                                                                        int32_t x8_40 = x8_39 + x21_1.d
                                                                        x21_1 = sx.q(x21_1.d)
                                                                        
                                                                        do
                                                                            sub_fb3b98(arg1, 
                                                                                *(x27_3 +
                                                                                    (sx.q(*(x26_1 + (x21_1 << 2))) << 3)))
                                                                            x21_1 += 1
                                                                        while (x21_1 s< sx.q(x8_40))
                                                                while (x21_1.d s< k)
                                                
                                                j_1 = *(j_1 + 0x18)
                                            while (j_1 != 0)
                                        
                                        goto label_fb3530
                                    
                                label_fb3530:
                                    void* x8_64 = *arg1
                                    void* x9_21 = *(x8_64 + 0x60)
                                    
                                    if (x9_21 != 0 && x9_21 != arg1[0xd])
                                        int32_t* j_2 = *(x9_21 + 0x28)
                                        
                                        if (j_2 != 0)
                                            do
                                                if (*j_2 == x23_3)
                                                    void* x8_43 = *(j_2 + 0x10)
                                                    
                                                    if (*(x8_43 + 8) == 4)
                                                        int64_t x26_2 = *(x8_43 + 0x30)
                                                        
                                                        if (x26_2 == 0)
                                                            sub_fb3b98(arg1, x8_22)
                                                        else
                                                            int32_t k_1 = *(x8_43 + 0x28)
                                                            
                                                            if (k_1 s>= 1)
                                                                int64_t x27_4 = arg1[2]
                                                                uint64_t x21_2 = 0
                                                                
                                                                do
                                                                    int32_t x8_44 =
                                                                        *(x26_2 + (sx.q(x21_2.d) << 2))
                                                                    x21_2 = zx.q(x21_2.d + 1)
                                                                    
                                                                    if (x8_44 s>= 1)
                                                                        int32_t x8_45 = x8_44 + x21_2.d
                                                                        x21_2 = sx.q(x21_2.d)
                                                                        
                                                                        do
                                                                            sub_fb3b98(arg1, 
                                                                                *(x27_4 +
                                                                                    (sx.q(*(x26_2 + (x21_2 << 2))) << 3)))
                                                                            x21_2 += 1
                                                                        while (x21_2 s< sx.q(x8_45))
                                                                while (x21_2.d s< k_1)
                                                
                                                j_2 = *(j_2 + 0x18)
                                            while (j_2 != 0)
                                            
                                            x8_64 = *arg1
                                    
                                    uint64_t x9_28 = zx.q(*(x8_64 + 0x50))
                                    
                                    if (x9_28.d s>= 1)
                                        int64_t x24_5 = 0
                                        int32_t* x27_5 = *(**(x8_64 + 0x58) + 0x28)
                                        
                                        if (x27_5 == 0)
                                            goto label_fb37f0
                                        
                                        while (true)
                                            if (*x27_5 == x23_3)
                                                void* x8_72 = *(x27_5 + 0x10)
                                                
                                                if (*(x8_72 + 8) == 4)
                                                    int64_t x22 = *(x8_72 + 0x30)
                                                    
                                                    if (x22 == 0)
                                                        sub_fb3b98(arg1, x8_22)
                                                    else
                                                        int32_t j_3 = *(x8_72 + 0x28)
                                                        
                                                        if (j_3 s>= 1)
                                                            int64_t x21_3 = arg1[2]
                                                            uint64_t k_2 = 0
                                                            
                                                            do
                                                                int32_t x8_73 =
                                                                    *(x22 + (sx.q(k_2.d) << 2))
                                                                k_2 = zx.q(k_2.d + 1)
                                                                
                                                                if (x8_73 s>= 1)
                                                                    int32_t x8_74 = x8_73 + k_2.d
                                                                    k_2 = sx.q(k_2.d)
                                                                    
                                                                    do
                                                                        sub_fb3b98(arg1, 
                                                                            *(x21_3
                                                                                + (sx.q(*(x22 + (k_2 << 2))) << 3)))
                                                                        k_2 += 1
                                                                    while (k_2 s< sx.q(x8_74))
                                                            while (k_2.d s< j_3)
                                            
                                            x27_5 = *(x27_5 + 0x18)
                                            
                                            if (x27_5 == 0)
                                            label_fb37f0:
                                                x24_5 += 1
                                                
                                                if (x24_5 == x9_28)
                                                    break
                                                
                                                x27_5 = *(*(*(*arg1 + 0x58) + (x24_5 << 3)) + 0x28)
                                                
                                                if (x27_5 == 0)
                                                    break
                                    
                                    x26 = var_a8_1
                                    fp = var_b0_1
                                    x24_1 = var_88_1
                                    void* x8_77 = var_a0_1[5]
                                    
                                    if (x8_77 != 0 && *(x8_77 + 8) == 4)
                                        int64_t x22_1 = *(x8_77 + 0x30)
                                        
                                        if (x22_1 == 0)
                                            sub_fb3b98(arg1, x8_22)
                                        else
                                            int32_t x20_9 = *(x8_77 + 0x28)
                                            
                                            if (x20_9 s>= 1)
                                                int64_t x21_4 = arg1[2]
                                                uint64_t j_4 = 0
                                                
                                                while (true)
                                                    int32_t x8_78 = *(x22_1 + (sx.q(j_4.d) << 2))
                                                    j_4 = zx.q(j_4.d + 1)
                                                    
                                                    if (x8_78 s< 1)
                                                        if (j_4.d s>= x20_9)
                                                            break
                                                    else
                                                        int32_t x8_79 = x8_78 + j_4.d
                                                        j_4 = sx.q(j_4.d)
                                                        
                                                        do
                                                            sub_fb3b98(arg1, 
                                                                *(x21_4
                                                                    + (sx.q(*(x22_1 + (j_4 << 2))) << 3)))
                                                            j_4 += 1
                                                        while (j_4 s< sx.q(x8_79))
                                                        
                                                        x24_1 = var_88_1
                                                        
                                                        if (j_4.d s>= x20_9)
                                                            break
                                    
                                    uint64_t j_8 = zx.q(x28_1[1].d)
                                    void** x23_4 = x28_1[2]
                                    
                                    if (j_8.d s>= 1)
                                        void** x21_5 = x23_4
                                        uint64_t j_9 = j_8
                                        uint64_t j_5
                                        
                                        do
                                            void* x1_23 = *x21_5
                                            x21_5 = &x21_5[1]
                                            sub_fb3b98(arg1, x1_23)
                                            j_5 = j_9
                                            j_9 -= 1
                                        while (j_5 != 1)
                                    
                                    int32_t x8_82 = arg1[0x13].d
                                    
                                    if (x8_82 != *(arg1 + 0x9c))
                                        result = arg1[0x14]
                                    else
                                        int64_t oldmem_4 = arg1[0x14]
                                        int64_t x8_81 = sx.q(x8_82)
                                        *(arg1 + 0x9c) = x8_81.d << 1
                                        result = realloc(oldmem_4, x8_81 << 5)
                                        x8_82 = arg1[0x13].d
                                        arg1[0x14] = result
                                    
                                    int32_t* x8_83 = result + (sx.q(x8_82) << 4)
                                    *x8_83 = 2
                                    *(x8_83 + 8) = x28_1
                                    i_14 = i_15
                                    x21 = var_8c_1
                                    arg1[0x13].d += 1
                                    
                                    if (j_8.d s>= 1)
                                        void** x21_6 = x23_4
                                        uint64_t j_10 = j_8
                                        uint64_t j_6
                                        
                                        do
                                            void* x8_86 = *x21_6
                                            x21_6 = &x21_6[1]
                                            result = sub_fb4508(*(x8_86 + 0x20), *(x8_86 + 0x18))
                                            j_6 = j_10
                                            j_10 -= 1
                                        while (j_6 != 1)
                                        i_14 = i_15
                                        x21 = var_8c_1
                                        uint64_t j_7
                                        
                                        do
                                            void* x8_87 = *x23_4
                                            x23_4 = &x23_4[1]
                                            j_7 = j_8
                                            j_8 -= 1
                                            *(x8_87 + 0x7c) = 1
                                        while (j_7 != 1)
                                else
                                    void* x8_25 = arg1[0xd]
                                    
                                    if (x8_25 == 0)
                                        x28_1[0x15].d = 0
                                    else
                                        result = spPathConstraintDataArray_contains(*(x8_25 + 0x20))
                                        x28_1[0x15].d = result.d != 0 ? 1 : 0
                                        
                                        if (result.d != 0)
                                            x8_27 = arg1[0xd]
                                            var_a0_1 = x20_2
                                            
                                            if (x8_27 != 0)
                                                goto label_fb3528
                                            
                                            goto label_fb3530
                            
                            break
                        
                        i_2 = i_9
                        i_9 -= 1
                        x9_6 = &x9_6[1]
                    while (i_2 != 1)
            else
                while (true)
                    int64_t* x23_2 = *x9_5
                    void* x1_2 = *x23_2
                    
                    if (*(x1_2 + 8) == x25_1)
                        void* x8_19 = x23_2[3]
                        
                        if (*(x8_19 + 0x80) == 0)
                            x23_2[6].d = 0
                        else if (*(x1_2 + 0xc) == 0)
                            x23_2[6].d = 1
                        label_fb3430:
                            sub_fb3b98(arg1, x8_19)
                            uint64_t i_13 = zx.q(x23_2[1].d)
                            void** x27_2 = x23_2[2]
                            
                            if (*(*x23_2 + 0x54) == 0)
                                void** x20_7 = x27_2
                                uint64_t i_11 = i_13
                                
                                if (i_13.d s>= 1)
                                    uint64_t i_3
                                    
                                    do
                                        void* x1_14 = *x20_7
                                        x20_7 = &x20_7[1]
                                        sub_fb3b98(arg1, x1_14)
                                        i_3 = i_11
                                        i_11 -= 1
                                    while (i_3 != 1)
                            else if (i_13.d s>= 1)
                                int32_t i_4 = 0
                                
                                do
                                label_fb3494:
                                    void* x20_4 = x27_2[sx.q(i_4)]
                                    sub_fb3b98(arg1, x20_4)
                                    uint64_t x24_3 = zx.q(arg1[0x13].d)
                                    int64_t x0_12
                                    int32_t x8_32
                                    
                                    if (x24_3.d s< 1)
                                        x24_3 = 0
                                        x8_32 = arg1[0x15].d
                                        
                                        if (x8_32 == *(arg1 + 0xac))
                                        label_fb3458:
                                            int64_t oldmem_1 = arg1[0x16]
                                            int64_t x8_33 = sx.q(x8_32)
                                            *(arg1 + 0xac) = x8_33.d << 1
                                            x0_12 = realloc(oldmem_1, x8_33 << 4)
                                            x8_32 = arg1[0x15].d
                                            arg1[0x16] = x0_12
                                        else
                                            x0_12 = arg1[0x16]
                                    else
                                        int64_t x8_36 = 0
                                        int64_t* x9_18 = arg1[0x14] + 8
                                        
                                        do
                                            if (*x9_18 == x20_4)
                                                i_4 = x8_36.d + 1
                                                
                                                if (i_4 s< i_13.d)
                                                    goto label_fb3494
                                                
                                                goto label_fb369c
                                            
                                            x8_36 += 1
                                            x9_18 = &x9_18[2]
                                        while (x24_3 != x8_36)
                                        
                                        x8_32 = arg1[0x15].d
                                        
                                        if (x8_32 == *(arg1 + 0xac))
                                            goto label_fb3458
                                        
                                        x0_12 = arg1[0x16]
                                    
                                    *(x0_12 + (sx.q(x8_32) << 3)) = x20_4
                                    arg1[0x15].d += 1
                                    i_4 = x24_3.d + 1
                                while (i_4 s< i_13.d)
                            
                        label_fb369c:
                            int32_t x8_48 = arg1[0x13].d
                            x21 = var_8c_1
                            
                            if (x8_48 != *(arg1 + 0x9c))
                                result = arg1[0x14]
                            else
                                int64_t oldmem_2 = arg1[0x14]
                                int64_t x8_47 = sx.q(x8_48)
                                *(arg1 + 0x9c) = x8_47.d << 1
                                result = realloc(oldmem_2, x8_47 << 5)
                                x8_48 = arg1[0x13].d
                                arg1[0x14] = result
                            
                            int32_t* x8_49 = result + (sx.q(x8_48) << 4)
                            *x8_49 = 3
                            *(x8_49 + 8) = x23_2
                            x24_1 = var_88_1
                            arg1[0x13].d += 1
                            
                            if (i_13.d s>= 1)
                                void** x20_8 = x27_2
                                uint64_t i_12 = i_13
                                uint64_t i_5
                                
                                do
                                    void* x8_52 = *x20_8
                                    x20_8 = &x20_8[1]
                                    result = sub_fb4508(*(x8_52 + 0x20), *(x8_52 + 0x18))
                                    i_5 = i_12
                                    i_12 -= 1
                                while (i_5 != 1)
                                x21 = var_8c_1
                                uint64_t i_6
                                
                                do
                                    void* x8_53 = *x27_2
                                    x27_2 = &x27_2[1]
                                    i_6 = i_13
                                    i_13 -= 1
                                    *(x8_53 + 0x7c) = 1
                                while (i_6 != 1)
                        else
                            void* x8_20 = arg1[0xd]
                            
                            if (x8_20 == 0)
                                x23_2[6].d = 0
                            else
                                result = spTransformConstraintDataArray_contains(*(x8_20 + 0x18))
                                x23_2[6].d = result.d != 0 ? 1 : 0
                                
                                if (result.d != 0)
                                    x8_19 = x23_2[3]
                                    goto label_fb3430
                        
                        break
                    
                    uint64_t temp1_1 = x8_14
                    x8_14 -= 1
                    x9_5 = &x9_5[1]
                    
                    if (temp1_1 == 1)
                        goto label_fb3280
        else
            while (true)
                int64_t* x23_1 = *x9_4
                void* x1_1 = *x23_1
                
                if (*(x1_1 + 8) == x25_1)
                    void* x20_1 = x23_1[3]
                    
                    if (*(x20_1 + 0x80) == 0)
                        *(x23_1 + 0x34) = 0
                    else if (*(x1_1 + 0xc) == 0)
                        *(x23_1 + 0x34) = 1
                    label_fb339c:
                        sub_fb3b98(arg1, x20_1)
                        void** x27_1 = x23_1[2]
                        void* x20_3 = *x27_1
                        sub_fb3b98(arg1, x20_3)
                        int32_t x9_10 = x23_1[1].d
                        
                        if (x9_10 s>= 2)
                            uint64_t i_10 = zx.q(arg1[0x13].d)
                            int64_t x24_2 = x27_1[zx.q(x9_10 - 1)]
                            
                            if (i_10.d s>= 1)
                                int64_t* x9_13 = arg1[0x14] + 8
                                uint64_t i_7
                                
                                do
                                    if (*x9_13 == x24_2)
                                        goto label_fb374c
                                    
                                    i_7 = i_10
                                    i_10 -= 1
                                    x9_13 = &x9_13[2]
                                while (i_7 != 1)
                            
                            int32_t x8_29 = arg1[0x15].d
                            int64_t x0_10
                            
                            if (x8_29 != *(arg1 + 0xac))
                                x0_10 = arg1[0x16]
                            else
                                int64_t oldmem = arg1[0x16]
                                int64_t x8_28 = sx.q(x8_29)
                                *(arg1 + 0xac) = x8_28.d << 1
                                x0_10 = realloc(oldmem, x8_28 << 4)
                                x8_29 = arg1[0x15].d
                                arg1[0x16] = x0_10
                            
                            *(x0_10 + (sx.q(x8_29) << 3)) = x24_2
                            arg1[0x15].d += 1
                        
                    label_fb374c:
                        int32_t x8_57 = arg1[0x13].d
                        int64_t x0_20
                        
                        if (x8_57 != *(arg1 + 0x9c))
                            x0_20 = arg1[0x14]
                        else
                            int64_t oldmem_3 = arg1[0x14]
                            int64_t x8_56 = sx.q(x8_57)
                            *(arg1 + 0x9c) = x8_56.d << 1
                            x0_20 = realloc(oldmem_3, x8_56 << 5)
                            x8_57 = arg1[0x13].d
                            arg1[0x14] = x0_20
                        
                        int32_t* x8_58 = x0_20 + (sx.q(x8_57) << 4)
                        *x8_58 = 1
                        *(x8_58 + 8) = x23_1
                        x24_1 = var_88_1
                        arg1[0x13].d += 1
                        result = sub_fb4508(*(x20_3 + 0x20), *(x20_3 + 0x18))
                        *(x27_1[sx.q(x23_1[1].d) - 1] + 0x7c) = 1
                    else
                        void* x8_17 = arg1[0xd]
                        
                        if (x8_17 == 0)
                            *(x23_1 + 0x34) = 0
                        else
                            result = spIkConstraintDataArray_contains(*(x8_17 + 0x10))
                            *(x23_1 + 0x34) = result.d != 0 ? 1 : 0
                            
                            if (result.d != 0)
                                goto label_fb339c
                    
                    break
                
                uint64_t temp0_1 = x8_13
                x8_13 -= 1
                x9_4 = &x9_4[1]
                
                if (temp0_1 == 1)
                    goto label_fb3250
        
        x25_1 += 1
    while (x25_1 s< x21)

if (arg1[1].d s>= 1)
    int64_t i_8 = 0
    
    do
        result = sub_fb3b98(arg1, *(arg1[2] + (i_8 << 3)))
        i_8 += 1
    while (i_8 s< sx.q(arg1[1].d))

return result
