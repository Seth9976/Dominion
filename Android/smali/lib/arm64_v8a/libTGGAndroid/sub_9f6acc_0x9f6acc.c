// 函数: sub_9f6acc
// 地址: 0x9f6acc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x48)
DomGame* x20 = arg1

if (x8 == 2)
    uint64_t i_19 = zx.q(*(arg2 + 0x74))
    int32_t x9_1 = 1
    
    if (i_19.d s>= 1)
        int32_t x8_1 = 0
        void* x11_1 = arg2 + 0x78
        uint64_t i_16 = i_19
        uint64_t i
        
        do
            uint64_t x5_1 = zx.q(*x11_1)
            int32_t x4_3 = x8_1
            
            if (*(x20 + x5_1 * 0x68 + 0x1a74) != 0x3ea)
                x8_1 = x4_3
            else
                int32_t x5_2 = *(x20 + x5_1 * 0x68 + 0x1a70)
                x8_1 = 1
                
                if (x5_2 s> 0xaff)
                    if (x5_2 s> 0xe00)
                        if (x5_2 s> 0x1102)
                            uint64_t x6_3 = zx.q(x5_2 - 0x1103)
                            
                            if ((x6_3.d u<= 0x27 && (1 << x6_3 & 0x8000020001) != 0)
                                    || x5_2 == 0x1309)
                                x8_1 = x4_3
                        else if (x5_2 == 0xe01 || x5_2 == 0xe15 || x5_2 == 0xf02)
                            x8_1 = x4_3
                    else if (x5_2 s<= 0xd20)
                        uint64_t x6_1 = zx.q(x5_2 - 0xc05)
                        
                        if ((x6_1.d u<= 0x25 && (1 << x6_1 & 0x2000020081) != 0) || x5_2 == 0xb00
                                || x5_2 == 0xb17)
                            x8_1 = x4_3
                    else if (x5_2 - 0xd21 u<= 6 && (1 << (x5_2 - 0xd21) & 0x79) != 0)
                        x8_1 = x4_3
                else if (x5_2 s<= 0x5ff)
                    if (x5_2 s> 0x317)
                        if (x5_2 == 0x500 || x5_2 == 0x509)
                            x8_1 = x4_3
                        
                        if (x5_2 == 0x318 || x5_2 == 0x41a)
                            x8_1 = x4_3
                    else if (x5_2 - 0x100 u<= 6 && (1 << (x5_2 - 0x100) & 0x71) != 0)
                        x8_1 = x4_3
                else if (x5_2 s<= 0x70e)
                    uint64_t x5_3 = zx.q(x5_2 - 0x600)
                    
                    if (x5_3.d u<= 0x20 && (1 << x5_3 & 0x100210181) != 0)
                        x8_1 = x4_3
                else
                    if (x5_2 == 0x92e || x5_2 == 0xa03)
                        x8_1 = x4_3
                    
                    if (x5_2 == 0x70f || x5_2 == 0x80e)
                        x8_1 = x4_3
            
            i = i_16
            i_16 -= 1
            x11_1 += 4
        while (i != 1)
        bool cond:3_1
        
        do
            if ((*(x20 + zx.q(*(arg2 + 0x74 + (i_19 << 2))) * 0x68 + 0x1a74) & 0xfffffffe) != 0x3ea)
                int64_t x13_2 = sx.q(*(arg2 + 0x74)) - 1
                *(arg2 + 0x74) = x13_2.d
                *(arg2 + 0x74 + (i_19 << 2)) = *(arg2 + (x13_2 << 2) + 0x78)
            
            cond:3_1 = i_19 s<= 1
            i_19 -= 1
        while (not(cond:3_1))
        uint64_t x11_2 = zx.q(*(arg2 + 0x74))
        
        if (x11_2.d s< 2)
            x9_1 = 1
        else
            int32_t x10_2 = *(x20 + zx.q(*(arg2 + 0x78)) * 0x68 + 0x1a70)
            int64_t x12_6
            
            if (x11_2 - 1 u>= 2)
                int64_t i_20 = (x11_2 - 1) & 0xfffffffffffffffe
                x12_6 = (x11_2 - 1) | 1
                void* x15_1 = arg2 + 0x80
                int32_t x14_1 = 1
                int64_t i_15 = i_20
                arg1 = 1
                int64_t i_1
                
                do
                    uint64_t x2_1 = zx.q(*(x15_1 - 4))
                    uint64_t x3_1 = zx.q(*x15_1)
                    x15_1 += 8
                    x14_1 &= *(x20 + 0x1a68 + x2_1 * 0x68 + 8) == x10_2 ? 1 : 0
                    i_1 = i_15
                    i_15 -= 2
                    arg1 = zx.q(arg1.d) & zx.q(*(x20 + 0x1a68 + x3_1 * 0x68 + 8) == x10_2 ? 1 : 0)
                while (i_1 != 2)
                x9_1 = arg1.d & x14_1
                
                if (x11_2 - 1 != i_20)
                    goto label_9f6de4
            else
                x12_6 = 1
                x9_1 = 1
            label_9f6de4:
                int64_t i_18 = x11_2 - x12_6
                void* x12_8 = arg2 + (x12_6 << 2) + 0x78
                int64_t i_2
                
                do
                    uint64_t x14_2 = zx.q(*x12_8)
                    x12_8 += 4
                    i_2 = i_18
                    i_18 -= 1
                    x9_1 &= *(x20 + x14_2 * 0x68 + 0x1a70) == x10_2 ? 1 : 0
                while (i_2 != 1)
        
        if ((x8_1 & 1) != 0)
            *(arg2 + 0x64) = 1
    
    uint64_t i_17 = zx.q(*(x20 + 0x19c0))
    
    if (i_17.d s>= 1)
        int64_t x10_3 = sx.q(*(arg2 + 0x54))
        void* x11_3 = x20 + 0x3c21c
        uint64_t i_3
        
        do
            if (*(x11_3 + 0x38) == 2 && *(x11_3 + 0x3c) == 9)
                int32_t x12_11 = *x11_3
                
                if (x12_11 == x10_3.d || x12_11 == 0xffffffff)
                    int32_t x12_12 = *(x11_3 + 0x80)
                    int32_t x8_5
                    
                    if (x12_12 == 0x21)
                        x8_5 = 0
                    label_9f6eb8:
                        
                        if (((x9_1 | x8_5) & 1) != 0)
                            break
                        
                        *(arg2 + 0x64) = 1
                        break
                    
                    if (x12_12 == 0x54)
                        x8_5 = *(x20 + x10_3 * 0x5a30 + 0x181cc) != 0 ? 1 : 0
                        goto label_9f6eb8
            
            i_3 = i_17
            i_17 -= 1
            x11_3 += 0xb8
        while (i_3 != 1)
    
    x8 = *(arg2 + 0x48)

if (x8 == 3)
    int32_t x8_7 = *(arg2 + 0x74)
    
    if (x8_7 s>= 1)
        int32_t x24_1 = 0
        
        do
            void* x26_2 = arg2 + (sx.q(x24_1) << 2) + 0x78
            int32_t x21_1 = *x26_2
            
            if (x21_1 != 0)
                int32_t x22_1 = *(arg2 + 0x54)
                arg1 = DomDefGet(x20, zx.q(x21_1))
                
                if ((zx.d(*(arg1 + 0xc9)) & 4) != 0)
                    int32_t x8_9 = *(arg1 + 0x720)
                    
                    if (x8_9 != 0)
                        int64_t x27_1
                        
                        if (x8_9 != 0x1d)
                            int32_t x8_10 = *(arg1 + 0x738)
                            
                            if (x8_10 != 0)
                                if (x8_10 == 0x1d)
                                    x27_1 = 1
                                    goto label_9f6f84
                                
                                int32_t x8_11 = *(arg1 + 0x750)
                                
                                if (x8_11 != 0)
                                    if (x8_11 == 0x1d)
                                        x27_1 = 2
                                        goto label_9f6f84
                                    
                                    if (*(arg1 + 0x768) == 0x1d)
                                        x27_1 = 3
                                        goto label_9f6f84
                        else
                            x27_1 = 0
                        label_9f6f84:
                            DomPushHintContext(x20, zx.q(x22_1), zx.q(x21_1))
                            int32_t x0_2 = (*(arg1 + x27_1 * 0x18 + 0x728))()
                            DomPopContext()
                            
                            if (x0_2 != 0)
                                x24_1 -= 1
                                int64_t x8_16 = sx.q(*(arg2 + 0x74)) - 1
                                *(arg2 + 0x74) = x8_16.d
                                *x26_2 = *(arg2 + (x8_16 << 2) + 0x78)
            
            x8_7 = *(arg2 + 0x74)
            x24_1 += 1
        while (x24_1 s< x8_7)
    
    if (x8_7 s>= 1)
        int64_t x8_19 = sx.q(*(arg2 + 0x58))
        uint64_t x2_6 = zx.q(*(x8_19 * 0x84 + 0x14a76f4))
        
        if (x2_6.d != 0)
            int32_t x21_3 = 0
            void* fp_2 = arg2 + 0x78
            uint64_t x8_22 = zx.q(*fp_2)
            
            if (x2_6.d == 0)
                goto label_9f71b0
            
            do
                uint64_t x1_2 = zx.q(*(x20 + x8_22 * 0x68 + 0x1a70))
                
                if (x1_2.d == x2_6.d)
                label_9f7194:
                    x21_3 -= 1
                    int64_t x8_31 = sx.q(*(arg2 + 0x74)) - 1
                    *(arg2 + 0x74) = x8_31.d
                    *fp_2 = *(arg2 + (x8_31 << 2) + 0x78)
                else
                    if ((IsPileSubtype(x20, x1_2, x2_6).d & 1) != 0)
                        goto label_9f7194
                    
                    uint64_t x2_7 = zx.q(*(x8_19 * 0x84 + 0x14a76f8))
                    
                    if (x2_7.d != 0)
                        uint64_t x1_3 = zx.q(*(x20 + x8_22 * 0x68 + 0x1a70))
                        
                        if (x1_3.d == x2_7.d)
                            goto label_9f7194
                        
                        if ((IsPileSubtype(x20, x1_3, x2_7).d & 1) != 0)
                            goto label_9f7194
                        
                        uint64_t x2_8 = zx.q(*(x8_19 * 0x84 + 0x14a76fc))
                        
                        if (x2_8.d != 0)
                            uint64_t x1_4 = zx.q(*(x20 + x8_22 * 0x68 + 0x1a70))
                            
                            if (x1_4.d == x2_8.d)
                                goto label_9f7194
                            
                            if ((IsPileSubtype(x20, x1_4, x2_8).d & 1) != 0)
                                goto label_9f7194
                            
                            uint64_t x2_9 = zx.q(*(x8_19 * 0x84 + 0x14a7700))
                            
                            if (x2_9.d != 0)
                                uint64_t x1_5 = zx.q(*(x20 + x8_22 * 0x68 + 0x1a70))
                                
                                if (x1_5.d == x2_9.d)
                                    goto label_9f7194
                                
                                if ((IsPileSubtype(x20, x1_5, x2_9).d & 1) != 0)
                                    goto label_9f7194
                                
                                uint64_t x2_10 = zx.q(*(x8_19 * 0x84 + 0x14a7704))
                                
                                if (x2_10.d != 0)
                                    uint64_t x1_6 = zx.q(*(x20 + x8_22 * 0x68 + 0x1a70))
                                    
                                    if (x1_6.d == x2_10.d)
                                        goto label_9f7194
                                    
                                    if ((IsPileSubtype(x20, x1_6, x2_10).d & 1) != 0)
                                        goto label_9f7194
                                    
                                    uint64_t x2_11 = zx.q(*(x8_19 * 0x84 + 0x14a7708))
                                    
                                    if (x2_11.d != 0)
                                        uint64_t x1_7 = zx.q(*(x20 + x8_22 * 0x68 + 0x1a70))
                                        
                                        if (x1_7.d == x2_11.d)
                                            goto label_9f7194
                                        
                                        if ((IsPileSubtype(x20, x1_7, x2_11).d & 1) != 0)
                                            goto label_9f7194
                                        
                                        uint64_t x2_12 = zx.q(*(x8_19 * 0x84 + 0x14a770c))
                                        
                                        if (x2_12.d != 0)
                                            uint64_t x1_8 = zx.q(*(x20 + x8_22 * 0x68 + 0x1a70))
                                            
                                            if (x1_8.d == x2_12.d)
                                                goto label_9f7194
                                            
                                            if ((IsPileSubtype(x20, x1_8, x2_12).d & 1) != 0)
                                                goto label_9f7194
                                            
                                            uint64_t x2_13 = zx.q(*(x8_19 * 0x84 + 0x14a7710))
                                            
                                            if (x2_13.d != 0)
                                                uint64_t x1_9 = zx.q(*(x20 + x8_22 * 0x68 + 0x1a70))
                                                
                                                if (x1_9.d == x2_13.d)
                                                    goto label_9f7194
                                                
                                                if ((IsPileSubtype(x20, x1_9, x2_13).d & 1) != 0)
                                                    goto label_9f7194
                                                
                                                uint64_t x2_14 = zx.q(*(x8_19 * 0x84 + 0x14a7714))
                                                
                                                if (x2_14.d != 0)
                                                    uint64_t x1_10 =
                                                        zx.q(*(x20 + x8_22 * 0x68 + 0x1a70))
                                                    
                                                    if (x1_10.d == x2_14.d)
                                                        goto label_9f7194
                                                    
                                                    if ((IsPileSubtype(x20, x1_10, x2_14).d & 1)
                                                            != 0)
                                                        goto label_9f7194
                                                    
                                                    uint64_t x2_15 =
                                                        zx.q(*(x8_19 * 0x84 + 0x14a7718))
                                                    
                                                    if (x2_15.d != 0)
                                                        uint64_t x1_11 =
                                                            zx.q(*(x20 + x8_22 * 0x68 + 0x1a70))
                                                        
                                                        if (x1_11.d == x2_15.d)
                                                            goto label_9f7194
                                                        
                                                        if ((IsPileSubtype(x20, x1_11, x2_15).d & 1)
                                                                != 0)
                                                            goto label_9f7194
                
            label_9f71b0:
                x21_3 += 1
                
                if (x21_3 s>= *(arg2 + 0x74))
                    break
                
                x2_6 = zx.q(*(x8_19 * 0x84 + 0x14a76f4))
                fp_2 = arg2 + (sx.q(x21_3) << 2) + 0x78
                x8_22 = zx.q(*fp_2)
            while (x2_6.d != 0)

int32_t x8_43 = *(arg2 + 0x48)

if (x8_43 == 1)
    int64_t x10_8 = sx.q(*(arg2 + 0x58))
    
    if (x10_8.d == *(arg2 + 0x54))
        int32_t i_4 = *(x20 + x10_8 * 0x5a30 + 0x17f6c)
        int32_t x8_37
        
        if (i_4 == 0)
            x8_37 = 0
        else
            x8_37 = 0
            
            do
                i_4 = *(x20 + mulu.dp.d(i_4, 0x68) + 0x1ac8)
                x8_37 += 1
            while (i_4 != 0)
        
        int32_t i_7 = *(x20 + x10_8 * 0x5a30 + 0x17f70)
        int32_t x11_4
        
        if (i_7 == 0)
            x11_4 = 0
        else
            x11_4 = 0
            int32_t i_5 = i_7
            
            do
                i_5 = *(x20 + mulu.dp.d(i_5, 0x68) + 0x1ac8)
                x11_4 += 1
            while (i_5 != 0)
        
        int32_t i_6 = *(x20 + x10_8 * 0x5a30 + 0x17f74)
        int32_t x12_14
        
        if (i_6 == 0)
            x12_14 = 0
        else
            x12_14 = 0
            
            do
                i_6 = *(x20 + mulu.dp.d(i_6, 0x68) + 0x1ac8)
                x12_14 += 1
            while (i_6 != 0)
        
        int32_t i_8 = *(x20 + x10_8 * 0x5a30 + 0x17f78)
        int32_t x10_10
        
        if (i_8 == 0)
            x10_10 = 0
            
            if (i_7 != 0)
            label_9f72e4:
                
                if (x11_4 + x8_37 + x12_14 + x10_10 s<= 5)
                    int32_t x8_41 = 1
                    
                    do
                        i_7 = *(x20 + mulu.dp.d(i_7, 0x68) + 0x1ac8)
                        x8_41 -= 1
                    while (i_7 != 0)
                    
                    if (x8_41 != 0)
                        int32_t x10_11 = *(arg2 + 0x74)
                        
                        if (x10_11 s>= 1)
                            int32_t x8_42 = 0
                            
                            do
                                void* x3_6 = arg2 + (sx.q(x8_42) << 2) + 0x78
                                int32_t x4_6 = *(x20 + zx.q(*x3_6) * 0x68 + 0x1a70)
                                
                                if (x4_6 s> 0xc0a)
                                    if (x4_6 s> 0x1005)
                                        if (x4_6 == 0x1211 || x4_6 == 0x1111)
                                            goto label_9f7454
                                        
                                        if (x4_6 == 0x1006 || x4_6 == 0x1033)
                                            goto label_9f7454
                                    else if (x4_6 - 0xe08 u<= 8
                                        && (1 << (x4_6 - 0xe08) & 0x131) != 0)
                                    label_9f7454:
                                        *(arg2 + 0x74) = x10_11 - 1
                                        x8_42 -= 1
                                        *x3_6 = *(arg2 + ((sx.q(x10_11) - 1) << 2) + 0x78)
                                        x10_11 = *(arg2 + 0x74)
                                    else if (x4_6 - 0xc0b u<= 8
                                            && (1 << (x4_6 - 0xc0b) & 0x181) != 0)
                                        goto label_9f7454
                                else if (x4_6 s<= 0x602)
                                    if (x4_6 == 0x316 || x4_6 == 0x407)
                                        goto label_9f7454
                                    
                                    if (x4_6 == 0x40f || x4_6 == 0x501 || x4_6 == 0x50b)
                                        goto label_9f7454
                                else if (x4_6 s> 0x903)
                                    if (x4_6 == 0x904 || x4_6 == 0x91b || x4_6 == 0xb04)
                                        goto label_9f7454
                                else if (x4_6 - 0x603 u<= 0x1a
                                        && (1 << (x4_6 - 0x603) & 0x4000005) != 0)
                                    goto label_9f7454
                                
                                x8_42 += 1
                            while (x8_42 s< x10_11)
                            
                            x8_43 = *(arg2 + 0x48)
                            goto label_9f747c
        else
            x10_10 = 0
            
            do
                i_8 = *(x20 + mulu.dp.d(i_8, 0x68) + 0x1ac8)
                x10_10 += 1
            while (i_8 != 0)
            
            if (i_7 != 0)
                goto label_9f72e4
    
    return 

label_9f747c:

if (x8_43 == 0x32)
    int32_t* x0_14 = DomBoardPile(x20, 7)
    int32_t var_ce0[0x320]
    int32_t x21_4
    
    if (x0_14[2] == 0)
        x21_4 = 0
    else
        x21_4 = 1
        var_ce0[0] = *x0_14
    
    int32_t* x0_16 = DomBoardPile(x20, 8)
    
    if (x0_16[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_16
        x21_4 += 1
    
    int32_t* x0_18 = DomBoardPile(x20, 9)
    
    if (x0_18[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_18
        x21_4 += 1
    
    int32_t* x0_20 = DomBoardPile(x20, 0xa)
    
    if (x0_20[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_20
        x21_4 += 1
    
    int32_t* x0_22 = DomBoardPile(x20, 0xb)
    
    if (x0_22[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_22
        x21_4 += 1
    
    int32_t* x0_24 = DomBoardPile(x20, 0xc)
    
    if (x0_24[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_24
        x21_4 += 1
    
    int32_t* x0_26 = DomBoardPile(x20, 0xd)
    
    if (x0_26[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_26
        x21_4 += 1
    
    int32_t* x0_28 = DomBoardPile(x20, 0xe)
    
    if (x0_28[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_28
        x21_4 += 1
    
    int32_t* x0_30 = DomBoardPile(x20, 0xf)
    
    if (x0_30[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_30
        x21_4 += 1
    
    int32_t* x0_32 = DomBoardPile(x20, 0x10)
    
    if (x0_32[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_32
        x21_4 += 1
    
    int32_t* x0_34 = DomBoardPile(x20, 0x11)
    
    if (x0_34[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_34
        x21_4 += 1
    
    int32_t* x0_36 = DomBoardPile(x20, 0x12)
    
    if (x0_36[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_36
        x21_4 += 1
    
    int32_t* x0_38 = DomBoardPile(x20, 0x13)
    
    if (x0_38[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_38
        x21_4 += 1
    
    int32_t* x0_40 = DomBoardPile(x20, 0x14)
    
    if (x0_40[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_40
        x21_4 += 1
    
    int32_t* x0_42 = DomBoardPile(x20, 0x15)
    
    if (x0_42[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_42
        x21_4 += 1
    
    int32_t* x0_44 = DomBoardPile(x20, 0x16)
    
    if (x0_44[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_44
        x21_4 += 1
    
    int32_t* x0_46 = DomBoardPile(x20, 0x17)
    
    if (x0_46[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_46
        x21_4 += 1
    
    int32_t* x0_48 = DomBoardPile(x20, 0x18)
    
    if (x0_48[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_48
        x21_4 += 1
    
    int32_t* x0_50 = DomBoardPile(x20, 0x19)
    
    if (x0_50[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_50
        x21_4 += 1
    
    int32_t* x0_52 = DomBoardPile(x20, 0x1a)
    
    if (x0_52[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_52
        x21_4 += 1
    
    int32_t* x0_54 = DomBoardPile(x20, 0x1b)
    
    if (x0_54[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_54
        x21_4 += 1
    
    int32_t* x0_56 = DomBoardPile(x20, 0x1c)
    
    if (x0_56[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_56
        x21_4 += 1
    
    int32_t* x0_58 = DomBoardPile(x20, 0x1d)
    
    if (x0_58[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_58
        x21_4 += 1
    
    int32_t* x0_60 = DomBoardPile(x20, 0x1e)
    
    if (x0_60[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_60
        x21_4 += 1
    
    int32_t* x0_62 = DomBoardPile(x20, 0x1f)
    
    if (x0_62[2] != 0)
        var_ce0[zx.q(x21_4)] = *x0_62
        x21_4 += 1
    
    arg1 = DomBoardPile(x20, 0x20)
    
    if (*(arg1 + 8) != 0)
        var_ce0[zx.q(x21_4)] = *arg1
        x21_4 += 1
    
    if (*(arg2 + 0x74) s> 0)
        if (x21_4 s<= 0)
            arg1 = zx.q(*(arg2 + 0x78))
            int32_t i_9
            
            do
                CardCostParse(zx.q(*(DomDefGet(arg1, zx.q(*(x20 + 0xd50))) + 0xc4)))
                i_9 = *(arg2 + 0x74)
                *(arg2 + 0x74) = i_9 - 1
                arg1 = zx.q(*(arg2 + 0x78 + (sx.q(i_9 - 1) << 2)))
                *(arg2 + 0x78) = arg1.d
            while (i_9 s> 1)
        else
            int32_t i_10 = 0
            uint64_t x21_5 = zx.q(x21_4)
            
            do
                void* x25_3 = arg2 + (sx.q(i_10) << 2) + 0x78
                uint64_t x0_66 = zx.q(*x25_3)
                int32_t x26_4
                uint64_t j_1
                
                if (x0_66.d != var_ce0[0])
                    int64_t x9_39 = 1
                    int64_t x8_107
                    
                    do
                        x8_107 = x9_39
                        
                        if (x21_5 == x9_39)
                            break
                        
                        x9_39 = x8_107 + 1
                    while (x0_66.d != var_ce0[x8_107])
                    
                    j_1 = zx.q(*(x20 + 0x19c0))
                    x26_4 = (x8_107 u< x21_5 ? 1 : 0) ^ 1
                    
                    if (j_1.d s> 0)
                        goto label_9f79c0
                else
                    j_1 = zx.q(*(x20 + 0x19c0))
                    x26_4 = 0
                    
                    if (j_1.d s> 0)
                    label_9f79c0:
                        void* __offset(DomGame, 0x3c25c) x9_42 = x20 + 0x3c25c
                        uint64_t j
                        
                        do
                            if (*(x9_42 - 8) == 3 && *(x9_42 - 4) == 0x1e && *x9_42 == x0_66.d)
                                x26_4 = 1
                                break
                            
                            j = j_1
                            j_1 -= 1
                            x9_42 += 0xb8
                        while (j != 1)
                CardCostParse(zx.q(*(DomDefGet(x0_66, zx.q(*(x20 + 0xd50))) + 0xc4)))
                int32_t var_cf4
                int32_t var_cf0
                
                if (var_cf4 s> 0 || ((var_cf0 s< 1 ? 1 : 0) & not.d(x26_4) & 1) == 0)
                    i_10 -= 1
                    int64_t x8_102 = sx.q(*(arg2 + 0x74)) - 1
                    *(arg2 + 0x74) = x8_102.d
                    *x25_3 = *(arg2 + (x8_102 << 2) + 0x78)
                
                i_10 += 1
            while (i_10 s< *(arg2 + 0x74))
else if (x8_43 == 7)
    int64_t x9_13 = sx.q(*(arg2 + 0x58))
    
    if (x9_13.d == *(arg2 + 0x54))
        int32_t i_11 = *(x20 + x9_13 * 0x5a30 + 0x17f6c)
        int32_t x8_46
        
        if (i_11 == 0)
            x8_46 = -5
        else
            x8_46 = -5
            
            do
                i_11 = *(x20 + mulu.dp.d(i_11, 0x68) + 0x1ac8)
                x8_46 += 1
            while (i_11 != 0)
        
        int32_t i_12 = *(x20 + x9_13 * 0x5a30 + 0x17f70)
        int32_t x10_21
        
        if (i_12 == 0)
            x10_21 = 0
        else
            x10_21 = 0
            
            do
                i_12 = *(x20 + mulu.dp.d(i_12, 0x68) + 0x1ac8)
                x10_21 += 1
            while (i_12 != 0)
        
        int32_t i_13 = *(x20 + x9_13 * 0x5a30 + 0x17f74)
        int32_t x11_7
        
        if (i_13 == 0)
            x11_7 = 0
        else
            x11_7 = 0
            
            do
                i_13 = *(x20 + mulu.dp.d(i_13, 0x68) + 0x1ac8)
                x11_7 += 1
            while (i_13 != 0)
        
        int32_t i_14 = *(x20 + x9_13 * 0x5a30 + 0x17f78)
        int32_t x9_45
        
        if (i_14 == 0)
            x9_45 = 0
        else
            x9_45 = 0
            
            do
                i_14 = *(x20 + mulu.dp.d(i_14, 0x68) + 0x1ac8)
                x9_45 += 1
            while (i_14 != 0)
        
        int32_t x10_22 = *(arg2 + 0x68)
        int32_t x8_114 = x10_21 + x8_46 + x11_7 + x9_45
        int32_t x8_115
        
        x8_115 = x10_22 s> x8_114 ? x10_22 : x8_114
        
        if (*(arg2 + 0x64) s> x8_115)
            *(arg2 + 0x64) = x8_115
