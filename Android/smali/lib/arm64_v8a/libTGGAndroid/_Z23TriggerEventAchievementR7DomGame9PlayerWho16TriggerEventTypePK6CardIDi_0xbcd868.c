// 函数: _Z23TriggerEventAchievementR7DomGame9PlayerWho16TriggerEventTypePK6CardIDi
// 地址: 0xbcd868
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x150c) - 3 u< 4)
    return 

DomGame& x19_1 = arg1
int32_t x23_1 = arg3
int32_t x22_1 = arg2
int32_t x8_3 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000)

if (x23_1 - 0x1d u>= 2 && x8_3 == 0)
    return 

uint64_t x9_2 = zx.q(x23_1 - 4)

if (x9_2.d u> 0x1a)
    goto label_bce2d0

uint64_t x2_3
uint64_t x2_5
DomAchievementPlayerData* x3_3
int64_t x4_1

switch (x9_2)
    case 0
        void* x21_2 = x19_1 + 0x47a0c
        int64_t i_6 = 0x320
        int64_t i
        
        do
            uint64_t x2_2 = zx.q(*(x21_2 - 4))
            
            if (x2_2.d == 0)
                break
            
            CheckAchievement(x19_1, zx.q(x22_1), x2_2, x21_2 + muls.dp.d(x22_1, 0x84), 0x14, 
                nullptr, 0)
            i = i_6
            i_6 -= 1
            x21_2 += 0x31c
        while (i != 1)
    case 1, 2
        if (*(__emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x8_3 - 1, 0x98)) == 2)
            int64_t x25_2 = sx.q(x8_3 - 1)
            int32_t* x24_2 =
                *(__emutls_get_address(__emutls_v.gContextStack_tl) + x25_2 * 0x98 + 0x10)
            
            if (x24_2 == 0 || *x24_2 != 2)
                goto label_bce2d0
            
            int32_t x26_1 = x24_2[7]
            int32_t x27_1 =
                *(__emutls_get_address(__emutls_v.gContextStack_tl) + x25_2 * 0x98 + 0x1c)
            
            if (x26_1 == 0)
                if (x27_1 != 0)
                    goto label_bce2d0
            else if (x27_1 == 0)
                goto label_bce2d0
            
            if (x26_1 != x27_1 || x24_2[8]
                    != *(__emutls_get_address(__emutls_v.gContextStack_tl) + x25_2 * 0x98 + 0x20))
                goto label_bce2d0
            
            if (x24_2[6]
                    == *(__emutls_get_address(__emutls_v.gContextStack_tl) + x25_2 * 0x98 + 0x18))
                goto label_bce2d0
            
            uint64_t x26_4 = zx.q(x26_1.w)
            
            if (x26_4.d u>= 0x320)
                void* x8_65 = __emutls_get_address(__emutls_v.gContextStack_tl) + x25_2 * 0x98
                *(*(x8_65 + 8) + 0x1a28) = 0xffffffff
                void* x8_66 = *(x8_65 + 8)
                *(x8_66 + 0x1a2c) = *(x8_66 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            x2_3 = zx.q(*(x19_1 + x26_4 * 0x68 + 0x1a70))
            
            if (x2_3.d == 0)
                goto label_bce2d0
            
            if (x23_1 == 6)
                x4_1 = 0xd
            else
                if (x23_1 != 5)
                    goto label_bce2d0
                
                x4_1 = 0xe
            
            int64_t x8_68 = sx.q(x24_2[6])
            
            if (x8_68.d == x22_1)
                goto label_bce2d0
            
            uint64_t x11_13 = zx.q(*(x19_1 + 0x60808))
            int64_t x9_30
            
            if (x11_13.d s< 1)
            label_bce490:
                x9_30 = sx.q(x11_13.d)
                *(x19_1 + 0x60808) = x11_13.d + 1
                *(x19_1 + muls.dp.d(x11_13.d, 0x31c) + 0x47a08) = x2_3.d
            else
                x9_30 = 0
                void* __offset(DomGame, 0x47a08) x12_7 = x19_1 + 0x47a08
                
                while (true)
                    int32_t x13_3 = *x12_7
                    
                    if (x13_3 == 0)
                        goto label_bce490
                    
                    if (x13_3 == x2_3.d)
                        break
                    
                    x9_30 += 1
                    x12_7 += 0x31c
                    
                    if (x11_13 == x9_30)
                        goto label_bce490
            
            x3_3 = x19_1 + x9_30 * 0x31c + x8_68 * 0x84 + 0x47a0c
        label_bcdc6c:
            CheckAchievement(x19_1, zx.q(x22_1), x2_3, x3_3, x4_1, arg4, arg5)
        label_bce2d0:
            arg1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            int64_t x25_12 = sx.q(*(arg1 + 0x13000)) - 1
            
            if (*(arg1 + x25_12 * 0x98) == 2)
                uint64_t x24_13 = zx.q(
                    *(__emutls_get_address(__emutls_v.gContextStack_tl) + x25_12 * 0x98 + 0x1c))
                
                if (x24_13.d u>= 0x320)
                    void* x8_74 = __emutls_get_address(__emutls_v.gContextStack_tl) + x25_12 * 0x98
                    *(*(x8_74 + 8) + 0x1a28) = 0xffffffff
                    void* x8_75 = *(x8_74 + 8)
                    *(x8_75 + 0x1a2c) = *(x8_75 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                x2_5 = zx.q(*(x19_1 + x24_13 * 0x68 + 0x1a70))
                
                if (x2_5.d != 0)
                    uint64_t x4_2
                    
                    if (x23_1 - 5 u> 0x17)
                        x4_2 = 0
                    else
                        x4_2 = zx.q(*(&data_802d08 + (sx.q(x23_1 - 5) << 2)))
                    
                    uint64_t x10_9 = zx.q(*(x19_1 + 0x60808))
                    int64_t x8_78
                    
                    if (x10_9.d s< 1)
                    label_bce3dc:
                        x8_78 = sx.q(x10_9.d)
                        *(x19_1 + 0x60808) = x10_9.d + 1
                        *(x19_1 + muls.dp.d(x10_9.d, 0x31c) + 0x47a08) = x2_5.d
                    else
                        x8_78 = 0
                        void* __offset(DomGame, 0x47a08) x11_10 = x19_1 + 0x47a08
                        
                        while (true)
                            int32_t x12_5 = *x11_10
                            
                            if (x12_5 == 0)
                                goto label_bce3dc
                            
                            if (x12_5 == x2_5.d)
                                break
                            
                            x8_78 += 1
                            x11_10 += 0x31c
                            
                            if (x10_9 == x8_78)
                                goto label_bce3dc
                    
                    return CheckAchievement(x19_1, zx.q(x22_1), x2_5, 
                        x19_1 + x8_78 * 0x31c + muls.dp.d(x22_1, 0x84) + 0x47a0c, x4_2, arg4, arg5)
                        __tailcall
    case 3
        uint64_t x24_6 = zx.q(*arg4)
        
        if (x24_6.d u>= 0x320)
            void* x8_16 =
                __emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x8_3 - 1, 0x98)
            *(*(x8_16 + 8) + 0x1a28) = 0xffffffff
            void* x8_17 = *(x8_16 + 8)
            *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        x2_3 = zx.q(*(x19_1 + x24_6 * 0x68 + 0x1a70))
        
        if (x2_3.d != 0)
            uint64_t x10_2 = zx.q(*(x19_1 + 0x60808))
            int64_t x8_19
            
            if (x10_2.d s< 1)
            label_bcdc20:
                x8_19 = sx.q(x10_2.d)
                *(x19_1 + 0x60808) = x10_2.d + 1
                *(x19_1 + muls.dp.d(x10_2.d, 0x31c) + 0x47a08) = x2_3.d
            else
                x8_19 = 0
                void* __offset(DomGame, 0x47a08) x11_4 = x19_1 + 0x47a08
                
                while (true)
                    int32_t x12_3 = *x11_4
                    
                    if (x12_3 == 0)
                        goto label_bcdc20
                    
                    if (x12_3 == x2_3.d)
                        break
                    
                    x8_19 += 1
                    x11_4 += 0x31c
                    
                    if (x10_2 == x8_19)
                        goto label_bcdc20
            
            x3_3 = x19_1 + x8_19 * 0x31c + muls.dp.d(x22_1, 0x84) + 0x47a0c
            x4_1 = 4
            goto label_bcdc6c
    case 4
        uint64_t x24_7 = zx.q(*arg4)
        
        if (x24_7.d u>= 0x320)
            void* x8_22 =
                __emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x8_3 - 1, 0x98)
            *(*(x8_22 + 8) + 0x1a28) = 0xffffffff
            void* x8_23 = *(x8_22 + 8)
            *(x8_23 + 0x1a2c) = *(x8_23 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(x19_1 + x24_7 * 0x68 + 0x1a70) != 0)
            void* x25_8 = x19_1 + 0x47a0c
            int64_t i_8 = 0x320
            int64_t i_1
            
            do
                uint64_t x2_4 = zx.q(*(x25_8 - 4))
                
                if (x2_4.d == 0)
                    break
                
                CheckAchievement(x19_1, zx.q(x22_1), x2_4, x25_8 + muls.dp.d(x22_1, 0x84), 0x12, 
                    arg4, arg5)
                i_1 = i_8
                i_8 -= 1
                x25_8 += 0x31c
            while (i_1 != 1)
            goto label_bce2d0
    case 5, 6
        if (*(__emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x8_3 - 1, 0x98)) != 2)
            goto label_bce2d0
        
        uint64_t x25_4 = zx.q(*arg4)
        int64_t x24_4 = sx.q(x8_3 - 1)
        
        if (x25_4.d u>= 0x320)
            void* x8_9 = __emutls_get_address(__emutls_v.gContextStack_tl) + x24_4 * 0x98
            *(*(x8_9 + 8) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 + 8)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        uint64_t x2 = zx.q(*(x19_1 + x25_4 * 0x68 + 0x1a70))
        
        if (x2.d == 0)
            goto label_bce2d0
        
        uint64_t x10_1 = zx.q(*(x19_1 + 0x60808))
        int32_t x8_12
        
        x8_12 = x23_1 == 9 ? 0xb : 0
        
        uint64_t x4
        
        if (x23_1 == 0xa)
            x4 = 0xc
        else
            x4 = zx.q(x8_12)
        
        int64_t x8_13
        
        if (x10_1.d s< 1)
        label_bcda74:
            x8_13 = sx.q(x10_1.d)
            *(x19_1 + 0x60808) = x10_1.d + 1
            *(x19_1 + muls.dp.d(x10_1.d, 0x31c) + 0x47a08) = x2.d
        else
            x8_13 = 0
            void* __offset(DomGame, 0x47a08) x11_2 = x19_1 + 0x47a08
            
            while (true)
                int32_t x12_2 = *x11_2
                
                if (x12_2 == 0)
                    goto label_bcda74
                
                if (x12_2 == x2.d)
                    break
                
                x8_13 += 1
                x11_2 += 0x31c
                
                if (x10_1 == x8_13)
                    goto label_bcda74
        
        CheckAchievement(x19_1, zx.q(x22_1), x2, 
            x19_1 + x8_13 * 0x31c + muls.dp.d(x22_1, 0x84) + 0x47a0c, x4, arg4, arg5)
        
        if (x23_1 != 9)
            if (x23_1 == 0xa)
                void* x25_5 = x19_1 + 0x47a0c
                int64_t i_7 = 0x320
                int64_t i_2
                
                do
                    uint64_t x2_1 = zx.q(*(x25_5 - 4))
                    
                    if (x2_1.d == 0)
                        break
                    
                    CheckAchievement(x19_1, zx.q(x22_1), x2_1, x25_5 + muls.dp.d(x22_1, 0x84), 
                        0x11, arg4, arg5)
                    i_2 = i_7
                    i_7 -= 1
                    x25_5 += 0x31c
                while (i_2 != 1)
            
            goto label_bce2d0
        
        uint64_t x25_9 =
            zx.q(*(__emutls_get_address(__emutls_v.gContextStack_tl) + x24_4 * 0x98 + 0x1c))
        
        if (x25_9.d u>= 0x320)
            void* x0_31 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_50 = x0_31 + sx.q(*(x0_31 + 0x13000)) * 0x98
            *(*(x8_50 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_51 = *(x8_50 - 0x90)
            *(x8_51 + 0x1a2c) = *(x8_51 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x24_11 = *(x19_1 + 0xd50)
        int32_t x25_10 = *(x19_1 + x25_9 * 0x68 + 0x1a70)
        int32_t x8_57 = (x25_10 + (x24_11 << 0x10)) s% 0x3e5
        int32_t* x9_21 = *(&data_1838a20 + (sx.q(x8_57) << 3))
        
        if (x9_21 != 0)
            while (*x9_21 != x25_10 || x9_21[1] != x24_11)
                x9_21 = *(x9_21 + 0x10)
                
                if (x9_21 == 0)
                    goto label_bce0f0
            
            arg1 = *(x9_21 + 8)
        else
        label_bce0f0:
            DomDefGetSlow(zx.q(x25_10), zx.q(x24_11))
            int32_t* x0_33 = malloc(0x18)
            int64_t x8_58 = sx.q(x8_57) << 3
            int64_t x9_22 = *(&data_1838a20 + x8_58)
            *x0_33 = x25_10
            x0_33[1] = x24_11
            *(&data_1838a20 + x8_58) = x0_33
            *(x0_33 + 0x10) = x9_22
            arg1 = DomDefGetSlow(zx.q(x25_10), zx.q(x24_11))
            *(x0_33 + 8) = arg1
        
        if ((zx.d(*(arg1 + 0xc8)) & 0x20) == 0)
            goto label_bce2d0
        
        int32_t x8_60 = *(x19_1 + 0xd40)
        
        if (x8_60 s>= 1)
            int64_t x24_12 = 0
            int64_t i_3 = 0
            
            do
                if (i_3 != zx.q(x22_1))
                    int64_t j_3 = 0x320
                    void* x27_4 = x19_1 + 0x47a0c
                    int64_t j
                    
                    do
                        uint64_t x2_9 = zx.q(*(x27_4 - 4))
                        
                        if (x2_9.d == 0)
                            break
                        
                        CheckAchievement(x19_1, zx.q(i_3.d), x2_9, x27_4 + x24_12, 0xf, arg4, arg5)
                        j = j_3
                        j_3 -= 1
                        x27_4 += 0x31c
                    while (j != 1)
                    x8_60 = *(x19_1 + 0xd40)
                
                i_3 += 1
                x24_12 += 0x84
            while (i_3 s< sx.q(x8_60))
    case 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x18
        goto label_bce2d0
    case 0x17
        if (*(__emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x8_3 - 1, 0x98)) == 2)
            int64_t x23_3 = sx.q(x8_3 - 1)
            int32_t* x22_3 =
                *(__emutls_get_address(__emutls_v.gContextStack_tl) + x23_3 * 0x98 + 0x10)
            
            if (x22_3 != 0 && *x22_3 == 2)
                int32_t x24_9 = x22_3[7]
                
                if (x24_9 ==
                        *(__emutls_get_address(__emutls_v.gContextStack_tl) + x23_3 * 0x98 + 0x1c))
                    uint64_t x24_10 = zx.q(x24_9.w)
                    
                    if (x24_10.d u>= 0x320)
                        void* x8_31 =
                            __emutls_get_address(__emutls_v.gContextStack_tl) + x23_3 * 0x98
                        *(*(x8_31 + 8) + 0x1a28) = 0xffffffff
                        void* x8_32 = *(x8_31 + 8)
                        *(x8_32 + 0x1a2c) = *(x8_32 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    x2_5 = zx.q(*(x19_1 + x24_10 * 0x68 + 0x1a70))
                    
                    if (x2_5.d != 0)
                        uint64_t x10_3 = zx.q(*(x19_1 + 0x60808))
                        uint64_t x1_5 = zx.q(x22_3[6])
                        int64_t x8_34 = sx.q(x1_5.d)
                        DomAchievementPlayerData* x3_5
                        
                        if (x10_3.d s< 1)
                        label_bcde54:
                            *(x19_1 + 0x60808) = x10_3.d + 1
                            *(x19_1 + muls.dp.d(x10_3.d, 0x31c) + 0x47a08) = x2_5.d
                            x1_5 = zx.q(x22_3[6])
                            x3_5 = x19_1 + muls.dp.d(x10_3.d, 0x31c) + 0x47a08 + x8_34 * 0x84 + 4
                        else
                            void* __offset(DomGame, 0x47a0c) x11_6 = x19_1 + 0x47a0c
                            uint64_t x12_4 = x10_3
                            
                            while (true)
                                int32_t x13_1 = *(x11_6 - 4)
                                
                                if (x13_1 == 0)
                                    goto label_bcde54
                                
                                if (x13_1 == x2_5.d)
                                    x3_5 = x11_6 + x8_34 * 0x84
                                    break
                                
                                uint64_t temp2_1 = x12_4
                                x12_4 -= 1
                                x11_6 += 0x31c
                                
                                if (temp2_1 == 1)
                                    goto label_bcde54
                        
                        return CheckAchievement(x19_1, x1_5, x2_5, x3_5, 9, arg4, arg5) __tailcall
    case 0x19
        for (int64_t i_4 = 0x13; i_4 != 0x21; i_4 += 1)
            int32_t x20_3 = *(x19_1 + (i_4 << 4) + 0x152c)
            
            if (x20_3 == 0)
                break
            
            if (*(x19_1 + 0xd40) s>= 1)
                int64_t j_1 = 0
                
                do
                    uint64_t x8_42 = zx.q(*(x19_1 + 0x60808))
                    int64_t x9_18
                    
                    if (x8_42.d s< 1)
                    label_bcdee4:
                        x9_18 = sx.q(x8_42.d)
                        *(x19_1 + 0x60808) = x8_42.d + 1
                        *(x19_1 + muls.dp.d(x8_42.d, 0x31c) + 0x47a08) = x20_3
                    else
                        x9_18 = 0
                        void* __offset(DomGame, 0x47a08) x10_5 = x19_1 + 0x47a08
                        
                        while (true)
                            int32_t x11_8 = *x10_5
                            
                            if (x11_8 == 0)
                                goto label_bcdee4
                            
                            if (x11_8 == x20_3)
                                break
                            
                            x9_18 += 1
                            x10_5 += 0x31c
                            
                            if (x8_42 == x9_18)
                                goto label_bcdee4
                    
                    CheckAchievement(x19_1, zx.q(j_1.d), zx.q(x20_3), 
                        x19_1 + x9_18 * 0x31c + j_1 * 0x84 + 0x47a0c, 0x13, nullptr, 0)
                    j_1 += 1
                while (j_1 s< sx.q(*(x19_1 + 0xd40)))
    case 0x1a
        CalcPlayerScoreInfo(x19_1, 0x183a948)
        int64_t i_5 = 0
        void* __offset(DomGame, 0x47a0c) x27_3 = x19_1 + 0x47a0c
        
        do
            int32_t x20_4 = *(x19_1 + i_5 * 0x31c + 0x47a08)
            
            if (x20_4 == 0)
                break
            
            if (*(x19_1 + 0xd40) s>= 1)
                int64_t j_2 = 0
                void* fp_1 = &data_183a94c
                void* __offset(DomGame, 0x47a0c) x22_4 = x27_3
                
                do
                    CheckAchievement(x19_1, zx.q(j_2.d), zx.q(x20_4), x22_4, 0x15, nullptr, 0)
                    AchievementsEndOfGame(x19_1, zx.q(j_2.d), (*fp_1 == 0 ? 1 : 0).b)
                    j_2 += 1
                    x22_4 += 0x84
                    fp_1 += 0x5dd4
                while (j_2 s< sx.q(*(x19_1 + 0xd40)))
            
            i_5 += 1
            x27_3 += 0x31c
        while (i_5 != 0x320)
