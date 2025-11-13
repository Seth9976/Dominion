// 函数: _Z18stbi_zlib_compressPhiPii
// 地址: 0xfdd4b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x26 = arg1
int32_t i_6 = arg2
int64_t* x0 = malloc(0x20000)

if (x0 == 0)
    return nullptr

int32_t x8_1

x8_1 = arg4 s> 5 ? arg4 : 5

int64_t* oldmem = malloc(0xa)

if (oldmem != 0)
    oldmem[1].b = 0x78
    *oldmem = 0x100000002
    int32_t* x0_1 = realloc(oldmem, 0xd)
    
    if (x0_1 != 0)
        int64_t x8_2 = sx.q(x0_1[1])
        void* x23_1 = &x0_1[2]
        *x0_1 = 5
        x0_1[1] = x8_2.d + 1
        *(x23_1 + x8_2) = 0x5e
        memset(x0, 0, 0x20000)
        int32_t x11_2
        int32_t x20_2
        int32_t x27_1
        
        if (i_6 s< 4)
            x11_2 = 0
            x27_1 = 3
            x20_2 = 3
        else
            int32_t x8_3 = i_6 - 3
            int32_t i_11 = i_6
            x11_2 = 0
            x20_2 = 3
            x27_1 = 3
            uint64_t x8_5 = zx.q(x8_1)
            uint8_t* var_78_1 = x26
            
            do
                void* x22_1 = &x26[sx.q(x11_2)]
                int32_t x9_3 = (0xff00ffff & zx.d(*x22_1)) | zx.d(*(x22_1 + 2)) << 0x10
                int32_t x8_9 = x9_3 ^ x9_3 << 3
                int32_t x8_10 = x8_9 + (x8_9 u>> 5)
                int32_t x8_11 = x8_10 ^ x8_10 << 4
                int32_t x8_12 = x8_11 + (x8_11 u>> 0x11)
                uint64_t x28_1 = zx.q(x8_12 + (x8_12 u>> 6)) & 0x3fff
                int32_t* oldmem_13 = x0[zx.q(x28_1.d)]
                int32_t x8_17
                int32_t x9_7
                int64_t* x11_6
                int32_t x19_1
                void* const x24_1
                void* x26_1
                int32_t x21_1
                int32_t fp
                
                if (oldmem_13 == 0)
                    x24_1 = nullptr
                    x21_1 = 1
                    x19_1 = 3
                label_fdd738:
                    fp = 2
                label_fdd74c:
                    void* x0_5 = realloc(oldmem_13, sx.q(fp << 3) + 8)
                    
                    if (x0_5 == 0)
                        goto label_fde420
                    
                    x26_1 = x0_5
                    
                    if ((x21_1 & 1) == 0)
                        x8_17 = *(x26_1 + 4)
                    else
                        x8_17 = 0
                        *(x26_1 + 4) = 0
                    
                    *x26_1 = fp
                    x11_6 = x0
                    i_6 = i_11
                    oldmem_13 = x26_1 + 8
                    x9_7 = x8_17 + 1
                    x11_6[x28_1] = oldmem_13
                else
                    uint64_t x8_15 = zx.q(oldmem_13[-1])
                    
                    if (x8_15.d s< 1)
                        x24_1 = nullptr
                        x19_1 = 3
                    else
                        int32_t x10_1 = i_6 - x11_2
                        uint64_t x9_5
                        
                        if (x10_1 - 1 u< 0x101)
                            x9_5 = zx.q(x10_1)
                        else
                            x9_5 = 0x102
                        
                        if (x10_1 s< 1)
                            int64_t i_16
                            
                            if (x8_15.d u>= 2)
                                i_16 = x8_15 & 0xfffffffe
                                int64_t i_14 = i_16
                                int64_t i
                                
                                do
                                    i = i_14
                                    i_14 -= 2
                                while (i != 2)
                                
                                if (i_16 != x8_15)
                                    goto label_fdd6c4
                            else
                                i_16 = 0
                            label_fdd6c4:
                                int64_t i_12 = x8_15 - i_16
                                int64_t i_1
                                
                                do
                                    i_1 = i_12
                                    i_12 -= 1
                                while (i_1 != 1)
                            x24_1 = nullptr
                            x19_1 = 3
                        else
                            int64_t x10_2 = 0
                            x24_1 = nullptr
                            x19_1 = 3
                            
                            do
                                void* x12_1 = *(oldmem_13 + (x10_2 << 3))
                                
                                if (x12_1 - x26 s> sx.q(x11_2 - 0x8000))
                                    uint64_t x13_1 = 0
                                    
                                    while (zx.d(*(x12_1 + x13_1)) == zx.d(*(x22_1 + x13_1)))
                                        x13_1 += 1
                                        
                                        if (x9_5 == x13_1)
                                            x13_1 = zx.q(x9_5.d)
                                            break
                                    
                                    bool cond:9_1 = x13_1.d s< x19_1
                                    
                                    if (x13_1.d s>= x19_1)
                                        x19_1 = x13_1.d
                                    
                                    if (not(cond:9_1))
                                        x24_1 = x12_1
                                
                                x10_2 += 1
                            while (x10_2 != x8_15)
                        
                        if (oldmem_13 == 0)
                            x21_1 = 1
                            goto label_fdd738
                    
                    x8_17 = oldmem_13[-1]
                    x26_1 = oldmem_13 - 8
                    
                    if (x8_17 == x8_1 << 1)
                        memmove(oldmem_13, &oldmem_13[x8_5 * 2], x8_5 << 3)
                        x8_17 = x8_1
                        oldmem_13[-1] = x8_17
                    
                    x9_7 = x8_17 + 1
                    
                    if (x9_7 s>= *x26_1)
                        oldmem_13 = &oldmem_13[-2]
                        x21_1 = 0
                        fp = 1 | (0x7fffffff & *oldmem_13) << 1
                        goto label_fdd74c
                    
                    x11_6 = x0
                *(x26_1 + 4) = x9_7
                x26 = var_78_1
                *(oldmem_13 + (sx.q(x8_17) << 3)) = x22_1
                
                if (x24_1 == 0)
                label_fdd87c:
                    uint32_t x8_29 = zx.d(*x22_1)
                    int32_t i_2
                    
                    if (x8_29 u> 0x8f)
                        x27_1 |= ((__rbit(x8_29) u>> 0x17 & 0x1fc) | x8_29 u>> 6 | 1) << x20_2
                        
                        if (x20_2 s< 0xffffffff)
                            x20_2 += 9
                        else
                            i_2 = x20_2 + 0x11
                            
                            do
                                void* x8_53
                                int32_t x9_37
                                int32_t x10_25
                                int32_t x20_4
                                
                                if (x23_1 == 0)
                                    x20_4 = 2
                                label_fddbc8:
                                    void* oldmem_4
                                    
                                    if (x23_1 == 0)
                                        oldmem_4 = nullptr
                                    else
                                        oldmem_4 = x23_1 - 8
                                    
                                    int32_t* x0_13 = realloc(oldmem_4, sx.q(x20_4) + 8)
                                    
                                    if (x0_13 == 0)
                                        goto label_fde420
                                    
                                    x8_53 = &x0_13[1]
                                    
                                    if (x23_1 == 0)
                                        x9_37 = 0
                                        *x8_53 = 0
                                    else
                                        x9_37 = *x8_53
                                    
                                    *x0_13 = x20_4
                                    x10_25 = x9_37 + 1
                                    x23_1 = &x0_13[2]
                                else
                                    x8_53 = x23_1 - 4
                                    x9_37 = *x8_53
                                    int32_t x11_14 = *(x8_53 - 4)
                                    x10_25 = x9_37 + 1
                                    
                                    if (x10_25 s>= x11_14)
                                        x20_4 = 1 | (0x7fffffff & x11_14) << 1
                                        goto label_fddbc8
                                i_2 -= 8
                                *x8_53 = x10_25
                                *(x23_1 + sx.q(x9_37)) = x27_1.b
                                x27_1 u>>= 8
                            while (i_2 s> 0xf)
                            
                            x20_2 = i_2 - 8
                    else
                        int32_t x10_9 = ((x8_29 + 0x30) u>> 4 & 2) | (0x1f & ((((
                            __rbit(x8_29) u>> 0x1b & 0xfffffffc) | ((x8_29 + 0x30) & 0xc) u>> 2)
                            & 0xfffffffe) | ((x8_29 + 0x30) & 0x10) u>> 4)) << 2
                        x27_1 |= ((((x10_9 & 0xfffffffe) | ((x8_29 + 0x30) & 0x40) u>> 6) << 1
                            & 0xfffffffe) | ((x8_29 + 0x30) & 0x80) u>> 7) << x20_2
                        
                        if ((x20_2 & 0x80000000) != 0)
                            x20_2 += 8
                        else
                            i_2 = x20_2 + 0x10
                            
                            do
                                void* x8_37
                                int32_t x9_11
                                int32_t x10_11
                                int32_t x20_3
                                
                                if (x23_1 == 0)
                                    x20_3 = 2
                                label_fdd92c:
                                    void* oldmem_1
                                    
                                    if (x23_1 == 0)
                                        oldmem_1 = nullptr
                                    else
                                        oldmem_1 = x23_1 - 8
                                    
                                    int32_t* x0_7 = realloc(oldmem_1, sx.q(x20_3) + 8)
                                    
                                    if (x0_7 == 0)
                                        goto label_fde420
                                    
                                    x8_37 = &x0_7[1]
                                    
                                    if (x23_1 == 0)
                                        x9_11 = 0
                                        *x8_37 = 0
                                    else
                                        x9_11 = *x8_37
                                    
                                    *x0_7 = x20_3
                                    x10_11 = x9_11 + 1
                                    x23_1 = &x0_7[2]
                                else
                                    x8_37 = x23_1 - 4
                                    x9_11 = *x8_37
                                    int32_t x11_11 = *(x8_37 - 4)
                                    x10_11 = x9_11 + 1
                                    
                                    if (x10_11 s>= x11_11)
                                        x20_3 = 1 | (0x7fffffff & x11_11) << 1
                                        goto label_fdd92c
                                i_2 -= 8
                                *x8_37 = x10_11
                                *(x23_1 + sx.q(x9_11)) = x27_1.b
                                x27_1 u>>= 8
                            while (i_2 s> 0xf)
                            
                            x20_2 = i_2 - 8
                    x19_1 = 1
                else
                    int32_t x9_9 = (0xff00ffff & zx.d(*(x22_1 + 1))) | zx.d(*(x22_1 + 3)) << 0x10
                    int32_t x8_22 = x9_9 ^ x9_9 << 3
                    int32_t x8_23 = x8_22 + (x8_22 u>> 5)
                    int32_t x8_24 = x8_23 ^ x8_23 << 4
                    int32_t x8_25 = x8_24 + (x8_24 u>> 0x11)
                    void* x8_28 = x11_6[zx.q(x8_25 + (x8_25 u>> 6)) & 0x3fff]
                    
                    if (x8_28 != 0)
                        uint64_t i_13 = zx.q(*(x8_28 - 4))
                        
                        if (i_13.d s>= 1)
                            int32_t x11_8 = not.d(x11_2) + i_6
                            uint64_t x12_3
                            
                            if (x11_8 - 1 u< 0x101)
                                x12_3 = zx.q(x11_8)
                            else
                                x12_3 = 0x102
                            
                            int64_t x11_10 = sx.q(x11_2 - 0x7fff)
                            
                            if (x11_8 s< 1)
                                uint64_t i_3
                                
                                do
                                    if (*x8_28 - x26 s> x11_10 && (x19_1 & 0x80000000) != 0)
                                        goto label_fdd87c
                                    
                                    i_3 = i_13
                                    i_13 -= 1
                                    x8_28 += 8
                                while (i_3 != 1)
                            else
                                int64_t x13_4 = 0
                                
                                do
                                    int64_t x14_2 = *(x8_28 + (x13_4 << 3))
                                    
                                    if (x14_2 - x26 s> x11_10)
                                        uint64_t x15_2 = 0
                                        
                                        while (zx.d(*(x14_2 + x15_2)) == zx.d(*(x22_1 + 1 + x15_2)))
                                            x15_2 += 1
                                            
                                            if (x12_3 == x15_2)
                                                x15_2 = zx.q(x12_3.d)
                                                break
                                        
                                        if (x15_2.d s> x19_1)
                                            goto label_fdd87c
                                    
                                    x13_4 += 1
                                while (x13_4 != i_13)
                    
                    if (x19_1 s> 0x102)
                        goto label_fde440
                    
                    int32_t x25_1 = x22_1.d - x24_1.d
                    
                    if (x25_1 s>= 0x8000)
                        goto label_fde440
                    
                    int64_t x8_40 = 0
                    int32_t x9_13 = 0x2a0
                    uint32_t x10_13
                    
                    do
                        x10_13 = zx.d(*((x8_40 << 1) + 0x8666d8))
                        x8_40 += 1
                        x9_13 += 4
                    while (x19_1 s>= x10_13)
                    int32_t x8_56
                    uint32_t x22_2
                    uint64_t x9_33
                    int32_t i_4
                    
                    if (x8_40.d - 1 u> 0x16)
                        int32_t x10_22 = ((((x8_40.d + 0xa8) u>> 4 & 2) | (0x3fffffff & ((((((
                            ((x9_13 & 4) | ((x8_40.d + 0xa8) & 3)) << 2 & 0xfffffff8)
                            | ((x8_40.d + 0xa8) & 7)) & 0xfffffffc) | ((x8_40.d + 0xa8) & 0xc) u>> 2)
                            & 0xfffffffe) | ((x8_40.d + 0xa8) & 0x10) u>> 4)) << 2) & 0xfffffffe)
                            | ((x8_40.d + 0xa8) & 0x40) u>> 6
                        x22_2 =
                            ((x10_22 << 1 & 0xfffffffe) | ((x8_40.d + 0xa8) & 0x80) u>> 7) << x20_2
                            | x27_1
                        
                        if ((x20_2 & 0x80000000) != 0)
                            x8_56 = x20_2 + 8
                            x9_33 = zx.q(x8_40.d - 1)
                            
                            if (x9_33 - 8 u<= 0x13)
                            label_fddc30:
                                int32_t x20_5 = x8_56 + zx.d(*(&data_866712 + x9_33))
                                x22_2 |= (x19_1 - zx.d(*(&data_8666d6 + (x9_33 << 1)))) << x8_56
                                
                                if (x20_5 s>= 8)
                                    bool cond:28_1
                                    
                                    do
                                        void* x8_61
                                        int32_t x9_50
                                        int32_t x10_32
                                        int32_t x21_5
                                        
                                        if (x23_1 == 0)
                                            x21_5 = 2
                                        label_fddd8c:
                                            void* oldmem_6
                                            
                                            if (x23_1 == 0)
                                                oldmem_6 = nullptr
                                            else
                                                oldmem_6 = x23_1 - 8
                                            
                                            int32_t* x0_17 = realloc(oldmem_6, sx.q(x21_5) + 8)
                                            
                                            if (x0_17 == 0)
                                                goto label_fde420
                                            
                                            x8_61 = &x0_17[1]
                                            
                                            if (x23_1 == 0)
                                                x9_50 = 0
                                                *x8_61 = 0
                                            else
                                                x9_50 = *x8_61
                                            
                                            *x0_17 = x21_5
                                            x10_32 = x9_50 + 1
                                            x23_1 = &x0_17[2]
                                        else
                                            x8_61 = x23_1 - 4
                                            x9_50 = *x8_61
                                            int32_t x11_17 = *(x8_61 - 4)
                                            x10_32 = x9_50 + 1
                                            
                                            if (x10_32 s>= x11_17)
                                                x21_5 = 1 | (0x7fffffff & x11_17) << 1
                                                goto label_fddd8c
                                        *x8_61 = x10_32
                                        x8_56 = x20_5 - 8
                                        *(x23_1 + sx.q(x9_50)) = x22_2.b
                                        cond:28_1 = x20_5 s<= 0xf
                                        x22_2 u>>= 8
                                        x20_5 = x8_56
                                    while (not(cond:28_1))
                                else
                                    x8_56 = x20_5
                        else
                            i_4 = x20_2 + 0x10
                            
                            do
                                void* x8_47
                                int32_t x9_31
                                int32_t x10_23
                                int32_t x21_3
                                
                                if (x23_1 == 0)
                                    x21_3 = 2
                                label_fddafc:
                                    void* oldmem_3
                                    
                                    if (x23_1 == 0)
                                        oldmem_3 = nullptr
                                    else
                                        oldmem_3 = x23_1 - 8
                                    
                                    int32_t* x0_11 = realloc(oldmem_3, sx.q(x21_3) + 8)
                                    
                                    if (x0_11 == 0)
                                        goto label_fde420
                                    
                                    x8_47 = &x0_11[1]
                                    
                                    if (x23_1 != 0)
                                        x9_31 = *x8_47
                                    else
                                        x9_31 = 0
                                        *x8_47 = 0
                                    
                                    *x0_11 = x21_3
                                    x10_23 = x9_31 + 1
                                    x23_1 = &x0_11[2]
                                else
                                    x8_47 = x23_1 - 4
                                    x9_31 = *x8_47
                                    int32_t x11_13 = *(x8_47 - 4)
                                    x10_23 = x9_31 + 1
                                    
                                    if (x10_23 s>= x11_13)
                                        x21_3 = 1 | (0x7fffffff & x11_13) << 1
                                        goto label_fddafc
                                i_4 -= 8
                                *x8_47 = x10_23
                                *(x23_1 + sx.q(x9_31)) = x22_2.b
                                x22_2 u>>= 8
                            while (i_4 s> 0xf)
                            
                        label_fddb20:
                            x8_56 = i_4 - 8
                            x9_33 = zx.q(x8_40.d - 1)
                            
                            if (x9_33 - 8 u<= 0x13)
                                goto label_fddc30
                    else
                        int32_t x10_17 = ((((x8_40 u>> 4).d & 2) | (0x3fffffff & ((((((
                            (((x9_13 - 0x2a0) & 4) | (x8_40.d & 3)) << 2 & 0xfffffff8) | (x8_40.d & 7))
                            & 0xfffffffc) | (x8_40.d & 0xc) u>> 2) & 0xfffffffe)
                            | (x8_40.d & 0x10) u>> 4)) << 2) & 0xfffffffe) | (x8_40.d & 0x40) u>> 6
                        x22_2 = x10_17 << x20_2 | x27_1
                        
                        if (x20_2 s>= 1)
                            i_4 = x20_2 + 0xf
                            
                            do
                                void* x8_42
                                int32_t x9_21
                                int32_t x10_18
                                int32_t x21_2
                                
                                if (x23_1 == 0)
                                    x21_2 = 2
                                label_fdda30:
                                    void* oldmem_2
                                    
                                    if (x23_1 == 0)
                                        oldmem_2 = nullptr
                                    else
                                        oldmem_2 = x23_1 - 8
                                    
                                    int32_t* x0_9 = realloc(oldmem_2, sx.q(x21_2) + 8)
                                    
                                    if (x0_9 == 0)
                                        goto label_fde420
                                    
                                    x8_42 = &x0_9[1]
                                    
                                    if (x23_1 != 0)
                                        x9_21 = *x8_42
                                    else
                                        x9_21 = 0
                                        *x8_42 = 0
                                    
                                    *x0_9 = x21_2
                                    x10_18 = x9_21 + 1
                                    x23_1 = &x0_9[2]
                                else
                                    x8_42 = x23_1 - 4
                                    x9_21 = *x8_42
                                    int32_t x11_12 = *(x8_42 - 4)
                                    x10_18 = x9_21 + 1
                                    
                                    if (x10_18 s>= x11_12)
                                        x21_2 = 1 | (0x7fffffff & x11_12) << 1
                                        goto label_fdda30
                                i_4 -= 8
                                *x8_42 = x10_18
                                *(x23_1 + sx.q(x9_21)) = x22_2.b
                                x22_2 u>>= 8
                            while (i_4 s> 0xf)
                            
                            goto label_fddb20
                        
                        x8_56 = x20_2 + 7
                        x9_33 = zx.q(x8_40.d - 1)
                        
                        if (x9_33 - 8 u<= 0x13)
                            goto label_fddc30
                    int32_t x9_40 = -4
                    int64_t x10_30 = 1
                    uint32_t x11_15
                    
                    do
                        x11_15 = zx.d(*(&data_866730 + (x10_30 << 1)))
                        x10_30 += 1
                        x9_40 += 4
                    while (x11_15 s<= x25_1)
                    x27_1 = ((((((((x9_40 & 4) | ((x10_30.d - 2) & 3)) << 2 & 0xfffffff8)
                        | ((x10_30.d - 2) & 7)) & 0xfffffffc) | ((x10_30.d - 2) & 0xc) u>> 2)
                        & 0xfffffffe) | ((x10_30.d - 2) & 0x10) u>> 4) << x8_56 | x22_2
                    
                    if (x8_56 s< 3)
                        x20_2 = x8_56 + 5
                        
                        if (x10_30.d - 2 u>= 4)
                        label_fdddcc:
                            uint64_t x8_64 = zx.q(x10_30.d - 2)
                            int32_t x9_54 = (x25_1 - zx.d(*(&data_866730 + (x8_64 << 1)))) << x20_2
                            x20_2 += zx.d(*(&data_86676e + x8_64))
                            x27_1 |= x9_54
                            
                            if (x20_2 s>= 8)
                                int32_t x8_67
                                bool cond:35_1
                                
                                do
                                    void* x8_66
                                    int32_t x9_55
                                    int32_t x10_33
                                    int32_t x21_6
                                    
                                    if (x23_1 == 0)
                                        x21_6 = 2
                                    label_fdde68:
                                        void* oldmem_7
                                        
                                        if (x23_1 == 0)
                                            oldmem_7 = nullptr
                                        else
                                            oldmem_7 = x23_1 - 8
                                        
                                        int32_t* x0_19 = realloc(oldmem_7, sx.q(x21_6) + 8)
                                        
                                        if (x0_19 == 0)
                                            goto label_fde420
                                        
                                        x8_66 = &x0_19[1]
                                        
                                        if (x23_1 == 0)
                                            x9_55 = 0
                                            *x8_66 = 0
                                        else
                                            x9_55 = *x8_66
                                        
                                        *x0_19 = x21_6
                                        x10_33 = x9_55 + 1
                                        x23_1 = &x0_19[2]
                                    else
                                        x8_66 = x23_1 - 4
                                        x9_55 = *x8_66
                                        int32_t x11_18 = *(x8_66 - 4)
                                        x10_33 = x9_55 + 1
                                        
                                        if (x10_33 s>= x11_18)
                                            x21_6 = 1 | (0x7fffffff & x11_18) << 1
                                            goto label_fdde68
                                    *x8_66 = x10_33
                                    x8_67 = x20_2 - 8
                                    *(x23_1 + sx.q(x9_55)) = x27_1.b
                                    cond:35_1 = x20_2 s<= 0xf
                                    x27_1 u>>= 8
                                    x20_2 = x8_67
                                while (not(cond:35_1))
                                x20_2 = x8_67
                    else
                        int32_t i_5 = x8_56 + 0xd
                        
                        do
                            void* x8_58
                            int32_t x9_48
                            int32_t x10_31
                            int32_t x21_4
                            
                            if (x23_1 == 0)
                                x21_4 = 2
                            label_fddd04:
                                void* oldmem_5
                                
                                if (x23_1 == 0)
                                    oldmem_5 = nullptr
                                else
                                    oldmem_5 = x23_1 - 8
                                
                                int32_t* x0_15 = realloc(oldmem_5, sx.q(x21_4) + 8)
                                
                                if (x0_15 == 0)
                                    goto label_fde420
                                
                                x8_58 = &x0_15[1]
                                
                                if (x23_1 == 0)
                                    x9_48 = 0
                                    *x8_58 = 0
                                else
                                    x9_48 = *x8_58
                                
                                *x0_15 = x21_4
                                x10_31 = x9_48 + 1
                                x23_1 = &x0_15[2]
                            else
                                x8_58 = x23_1 - 4
                                x9_48 = *x8_58
                                int32_t x11_16 = *(x8_58 - 4)
                                x10_31 = x9_48 + 1
                                
                                if (x10_31 s>= x11_16)
                                    x21_4 = 1 | (0x7fffffff & x11_16) << 1
                                    goto label_fddd04
                            i_5 -= 8
                            *x8_58 = x10_31
                            *(x23_1 + sx.q(x9_48)) = x27_1.b
                            x27_1 u>>= 8
                        while (i_5 s> 0xf)
                        
                        x20_2 = i_5 - 8
                        
                        if (x10_30.d - 2 u>= 4)
                            goto label_fdddcc
                
                x11_2 += x19_1
            while (x11_2 s< x8_3)
        
        int64_t* x22_3
        
        if (x11_2 s>= i_6)
            x22_3 = x0
        else
            x22_3 = x0
            int64_t x19_2 = sx.q(x11_2)
            
            do
                uint32_t x8_70 = zx.d(x26[x19_2])
                int32_t j
                
                if (x8_70 u> 0x8f)
                    x27_1 |= ((__rbit(x8_70) u>> 0x17 & 0x1fc) | x8_70 u>> 6 | 1) << x20_2
                    
                    if (x20_2 s< 0xffffffff)
                        x20_2 += 9
                    else
                        j = x20_2 + 0x11
                        
                        do
                            void* x8_84
                            int32_t x9_63
                            int32_t x10_39
                            int32_t x21_8
                            
                            if (x23_1 == 0)
                                x21_8 = 2
                            label_fde02c:
                                void* oldmem_9
                                
                                if (x23_1 == 0)
                                    oldmem_9 = nullptr
                                else
                                    oldmem_9 = x23_1 - 8
                                
                                int32_t* x0_23 = realloc(oldmem_9, sx.q(x21_8) + 8)
                                
                                if (x0_23 == 0)
                                    goto label_fde420
                                
                                x8_84 = &x0_23[1]
                                
                                if (x23_1 != 0)
                                    x9_63 = *x8_84
                                else
                                    x9_63 = 0
                                    *x8_84 = 0
                                
                                *x0_23 = x21_8
                                x10_39 = x9_63 + 1
                                x23_1 = &x0_23[2]
                            else
                                x8_84 = x23_1 - 4
                                x9_63 = *x8_84
                                int32_t x11_20 = *(x8_84 - 4)
                                x10_39 = x9_63 + 1
                                
                                if (x10_39 s>= x11_20)
                                    x21_8 = 1 | (0x7fffffff & x11_20) << 1
                                    goto label_fde02c
                            j -= 8
                            *x8_84 = x10_39
                            *(x23_1 + sx.q(x9_63)) = x27_1.b
                            x27_1 u>>= 8
                        while (j s> 0xf)
                        
                        x20_2 = j - 8
                else
                    int32_t x10_36 = ((x8_70 + 0x30) u>> 4 & 2) | (0x1f & ((((__rbit(x8_70) u>> 0x1b
                        & 0xfffffffc) | ((x8_70 + 0x30) & 0xc) u>> 2) & 0xfffffffe)
                        | ((x8_70 + 0x30) & 0x10) u>> 4)) << 2
                    x27_1 |= ((((x10_36 & 0xfffffffe) | ((x8_70 + 0x30) & 0x40) u>> 6) << 1
                        & 0xfffffffe) | ((x8_70 + 0x30) & 0x80) u>> 7) << x20_2
                    
                    if ((x20_2 & 0x80000000) != 0)
                        x20_2 += 8
                    else
                        j = x20_2 + 0x10
                        
                        do
                            void* x8_78
                            int32_t x9_58
                            int32_t x10_38
                            int32_t x21_7
                            
                            if (x23_1 == 0)
                                x21_7 = 2
                            label_fddf80:
                                void* oldmem_8
                                
                                if (x23_1 == 0)
                                    oldmem_8 = nullptr
                                else
                                    oldmem_8 = x23_1 - 8
                                
                                int32_t* x0_21 = realloc(oldmem_8, sx.q(x21_7) + 8)
                                
                                if (x0_21 == 0)
                                    goto label_fde420
                                
                                x8_78 = &x0_21[1]
                                
                                if (x23_1 == 0)
                                    x9_58 = 0
                                    *x8_78 = 0
                                else
                                    x9_58 = *x8_78
                                
                                *x0_21 = x21_7
                                x10_38 = x9_58 + 1
                                x23_1 = &x0_21[2]
                            else
                                x8_78 = x23_1 - 4
                                x9_58 = *x8_78
                                int32_t x11_19 = *(x8_78 - 4)
                                x10_38 = x9_58 + 1
                                
                                if (x10_38 s>= x11_19)
                                    x21_7 = 1 | (0x7fffffff & x11_19) << 1
                                    goto label_fddf80
                            j -= 8
                            *x8_78 = x10_38
                            *(x23_1 + sx.q(x9_58)) = x27_1.b
                            x27_1 u>>= 8
                        while (j s> 0xf)
                        
                        x20_2 = j - 8
                x19_2 += 1
            while (x19_2.d != i_6)
        
        int32_t x8_90
        
        if (x20_2 s< 1)
            x8_90 = x20_2 + 7
            
            if (x8_90 != 0)
            label_fde11c:
                
                while (true)
                    if (x8_90 s< 7)
                        x8_90 += 1
                        
                        if (x8_90 == 0)
                            break
                    else
                        int32_t i_7 = x8_90 + 9
                        
                        do
                            void* x8_91
                            int32_t x9_67
                            int32_t x10_41
                            int32_t x20_7
                            
                            if (x23_1 == 0)
                                x20_7 = 2
                            label_fde18c:
                                void* oldmem_11
                                
                                if (x23_1 == 0)
                                    oldmem_11 = nullptr
                                else
                                    oldmem_11 = x23_1 - 8
                                
                                int32_t* x0_27 = realloc(oldmem_11, sx.q(x20_7) + 8)
                                
                                if (x0_27 == 0)
                                    goto label_fde420
                                
                                x8_91 = &x0_27[1]
                                
                                if (x23_1 == 0)
                                    x9_67 = 0
                                    *x8_91 = 0
                                else
                                    x9_67 = *x8_91
                                
                                *x0_27 = x20_7
                                x10_41 = x9_67 + 1
                                x23_1 = &x0_27[2]
                            else
                                x8_91 = x23_1 - 4
                                x9_67 = *x8_91
                                int32_t x11_22 = *(x8_91 - 4)
                                x10_41 = x9_67 + 1
                                
                                if (x10_41 s>= x11_22)
                                    x20_7 = 1 | (0x7fffffff & x11_22) << 1
                                    goto label_fde18c
                            i_7 -= 8
                            *x8_91 = x10_41
                            *(x23_1 + sx.q(x9_67)) = x27_1.b
                            x27_1 u>>= 8
                        while (i_7 s> 0xf)
                        
                        x8_90 = i_7 - 8
                        
                        if (x8_90 == 0)
                            break
        else
            int32_t i_8 = x20_2 + 0xf
            
            do
                void* x8_87
                int32_t x9_65
                int32_t x10_40
                int32_t x20_6
                
                if (x23_1 == 0)
                    x20_6 = 2
                label_fde0d8:
                    void* oldmem_10
                    
                    if (x23_1 == 0)
                        oldmem_10 = nullptr
                    else
                        oldmem_10 = x23_1 - 8
                    
                    int32_t* x0_25 = realloc(oldmem_10, sx.q(x20_6) + 8)
                    
                    if (x0_25 == 0)
                        goto label_fde420
                    
                    x8_87 = &x0_25[1]
                    
                    if (x23_1 == 0)
                        x9_65 = 0
                        *x8_87 = 0
                    else
                        x9_65 = *x8_87
                    
                    *x0_25 = x20_6
                    x10_40 = x9_65 + 1
                    x23_1 = &x0_25[2]
                else
                    x8_87 = x23_1 - 4
                    x9_65 = *x8_87
                    int32_t x11_21 = *(x8_87 - 4)
                    x10_40 = x9_65 + 1
                    
                    if (x10_40 s>= x11_21)
                        x20_6 = 1 | (0x7fffffff & x11_21) << 1
                        goto label_fde0d8
                i_8 -= 8
                *x8_87 = x10_40
                *(x23_1 + sx.q(x9_65)) = x27_1.b
                x27_1 u>>= 8
            while (i_8 s> 0xf)
            
            x8_90 = i_8 - 8
            
            if (x8_90 != 0)
                goto label_fde11c
        
        for (int64_t i_9 = 0; i_9 != 0x20000; i_9 += 8)
            int64_t x8_94 = *(x22_3 + i_9)
            
            if (x8_94 != 0)
                free(x8_94 - 8)
        
        free(x22_3)
        int32_t x19_3
        int32_t x20_8
        
        if (i_6 s< 1)
            x20_8 = 0
            x19_3 = 1
        else
            x20_8 = 0
            int32_t x8_95 = 0
            x19_3 = 1
            int32_t i_17 = i_6 u% 0x15b0
            
            do
                if (i_17 != 0)
                    uint64_t i_15 = zx.q(i_17)
                    void* x13_6 = &x26[zx.q(x8_95)]
                    uint64_t i_10
                    
                    do
                        uint32_t x14_3 = zx.d(*x13_6)
                        x13_6 += 1
                        i_10 = i_15
                        i_15 -= 1
                        x19_3 += x14_3
                        x20_8 += x19_3
                    while (i_10 != 1)
                
                x8_95 += i_17
                x19_3 = x19_3 u% 0xfff1
                x20_8 = x20_8 u% 0xfff1
                i_17 = 0x15b0
            while (x8_95 s< i_6)
        
        int32_t* x0_31
        int32_t x8_96
        int32_t x9_69
        int32_t x21_9
        
        if (x23_1 == 0)
            x21_9 = 2
        label_fde2ac:
            void* oldmem_12
            
            if (x23_1 == 0)
                oldmem_12 = nullptr
            else
                oldmem_12 = x23_1 - 8
            
            int32_t* x0_32 = realloc(oldmem_12, sx.q(x21_9) + 8)
            
            if (x0_32 != 0)
                if (x23_1 == 0)
                    x9_69 = 0
                    x0_32[1] = 0
                else
                    x9_69 = x0_32[1]
                
                x23_1 = &x0_32[2]
                *x0_32 = x21_9
                x0_31 = &x0_32[1]
                x8_96 = x9_69 + 1
                goto label_fde2e0
        else
            x0_31 = x23_1 - 4
            x9_69 = *x0_31
            int32_t x10_44 = x0_31[-1]
            x8_96 = x9_69 + 1
            
            if (x8_96 s>= x10_44)
                x21_9 = 1 | (0x7fffffff & x10_44) << 1
                goto label_fde2ac
            
        label_fde2e0:
            *x0_31 = x8_96
            *(x23_1 + sx.q(x9_69)) = (x20_8 u>> 8).b
            int64_t x11_24 = sx.q(*(x23_1 - 8))
            int32_t x9_71 = *x0_31
            int32_t x10_46 = x9_71 + 1
            
            if (x10_46 s< x11_24.d)
                goto label_fde328
            
            int64_t x21_10 = x11_24 << 1
            int32_t* x0_34 = realloc(x23_1 - 8, x21_10 + 9)
            
            if (x0_34 != 0)
                *x0_34 = x21_10.d | 1
                x23_1 = &x0_34[2]
                x0_31 = &x0_34[1]
                x9_71 = *x0_31
                x10_46 = x9_71 + 1
            label_fde328:
                *x0_31 = x10_46
                *(x23_1 + sx.q(x9_71)) = x20_8.b
                int64_t x11_25 = sx.q(*(x23_1 - 8))
                int32_t x9_72 = *x0_31
                int32_t x10_47 = x9_72 + 1
                
                if (x10_47 s< x11_25.d)
                    goto label_fde374
                
                int64_t x20_9 = x11_25 << 1
                int32_t* x0_36 = realloc(x23_1 - 8, x20_9 + 9)
                
                if (x0_36 != 0)
                    *x0_36 = x20_9.d | 1
                    x23_1 = &x0_36[2]
                    x0_31 = &x0_36[1]
                    x9_72 = *x0_31
                    x10_47 = x9_72 + 1
                label_fde374:
                    *x0_31 = x10_47
                    *(x23_1 + sx.q(x9_72)) = (x19_3 u>> 8).b
                    int64_t x11_27 = sx.q(*(x23_1 - 8))
                    int32_t x9_73 = *x0_31
                    int32_t x10_48 = x9_73 + 1
                    
                    if (x10_48 s< x11_27.d)
                        goto label_fde3bc
                    
                    int64_t x20_10 = x11_27 << 1
                    int32_t* x0_38 = realloc(x23_1 - 8, x20_10 + 9)
                    
                    if (x0_38 != 0)
                        *x0_38 = x20_10.d | 1
                        x23_1 = &x0_38[2]
                        x0_31 = &x0_38[1]
                        x9_73 = *x0_31
                        x10_48 = x9_73 + 1
                    label_fde3bc:
                        *x0_31 = x10_48
                        *(x23_1 + sx.q(x9_73)) = x19_3.b
                        size_t x2_1 = sx.q(*x0_31)
                        void* result = x23_1 - 8
                        *arg3 = x2_1.d
                        memmove(result, x23_1, x2_1)
                        return result

label_fde420:
__assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_write.h", 
    0x2eb, "void *stbiw__sbgrowf(void **, int, int)", &data_774d4b)
label_fde440:
uint8_t* x0_41
int32_t x1_18
int32_t x2_2
int32_t x3
int32_t x4
int32_t* x5
x0_41, x1_18, x2_2, x3, x4, x5 = __assert2(
    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_write.h", 0x36c, 
    "unsigned char *stbi_zlib_compress(unsigned char *, int, int *, int)", 
    "d <= 32767 && best <= 258")
return stbi_write_png_to_mem(x0_41, x1_18, x2_2, x3, x4, x5) __tailcall
