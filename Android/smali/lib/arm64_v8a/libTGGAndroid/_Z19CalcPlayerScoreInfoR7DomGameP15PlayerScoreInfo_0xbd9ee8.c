// 函数: _Z19CalcPlayerScoreInfoR7DomGameP15PlayerScoreInfo
// 地址: 0xbd9ee8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x150c) == 3)
    return 

uint64_t x8_1 = zx.q(*(arg1 + 0xd40))

if (x8_1.d s>= 1)
    int64_t x9_1 = 0
    void* __offset(PlayerScoreInfo, 0x5788) x10_1 = arg2 + 0x5788
    PlayerScoreInfo* x12_1 = arg2
    
    do
        *x10_1 = 0
        *x12_1 = 0
        x8_1 = sx.q(*(arg1 + 0xd40))
        x9_1 += 1
        x10_1 += 0x5dd4
        x12_1 += 0x5dd4
    while (x9_1 s< x8_1)

int32_t entry_x5
int32_t entry_x16
int32_t entry_x17

if (*(arg1 + 0x1528) s> 1)
    int32_t i = 1
    
    do
        int32_t x23_1 = i & 0xffff
        void* x20_1 = arg1 + mulu.dp.d(x23_1, 0x68)
        void* x23_2
        uint64_t x26_1
        
        if (x23_1 u<= 0x31f)
            x26_1 = zx.q(x23_1)
            
            if (*(x20_1 + 0x1a94) == 0xffffffff)
                goto label_bda18c
            
            x23_2 = x20_1 + 0x1a94
            goto label_bda0a0
        
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_7 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_8 = *(x8_7 - 0x90)
        *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        entry_x5, entry_x16, entry_x17 = XTrace("game thread resume (error)")
        x26_1 = zx.q(x23_1)
        
        if (*(x20_1 + 0x1a94) == 0xffffffff)
        label_bda18c:
            
            if (*(arg1 + 0xd40) s>= 1)
                void* __offset(DomGame, 0x60cbc) x24_1 = arg1 + 0x60cbc
                PlayerScoreInfo* x26_3 = arg2
                int64_t j = 0
                
                do
                    int32_t x0_13
                    int64_t x2_4
                    x0_13, x2_4 = CalcPlayerCardTypeScore(arg1, zx.q(j.d), zx.q(i))
                    entry_x5, entry_x16, entry_x17 = SetScoreInfo(arg1, x26_3, x2_4, zx.q(i), x0_13)
                    
                    if (x0_13 != 0)
                        int32_t x0_16
                        x0_16, entry_x5, entry_x16, entry_x17 = IsLandscape(arg1, zx.q(i))
                        
                        if ((x0_16 & 1) != 0)
                            *(x24_1 + (sx.q(*(arg1 + x26_1 * 0x68 + 0x1a74)) << 2) - 0x88) = x0_13
                    
                    j += 1
                    x26_3 += 0x5dd4
                    x24_1 += 0x10
                while (j s< sx.q(*(arg1 + 0xd40)))
        else
            x23_2 = x20_1 + 0x1a94
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_12 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_13 = *(x8_12 - 0x90)
            *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            entry_x5, entry_x16, entry_x17 = XTrace("game thread resume (error)")
        label_bda0a0:
            int32_t x25_1 = *(arg1 + x26_1 * 0x68 + 0x1a70)
            int32_t x26_2 = *(arg1 + 0xd50)
            int32_t x8_16 = (x25_1 + (x26_2 << 0x10)) s% 0x3e5
            int32_t* x9_11 = *(&data_1838a20 + (sx.q(x8_16) << 3))
            int32_t x0_10
            int64_t x2_2
            
            if (x9_11 != 0)
                while (*x9_11 != x25_1 || x9_11[1] != x26_2)
                    x9_11 = *(x9_11 + 0x10)
                    
                    if (x9_11 == 0)
                        goto label_bda0e4
                
                if ((zx.d(*(*(x9_11 + 8) + 0xcb)) & 1) == 0)
                    x0_10, x2_2 = CalcPlayerCardTypeScore(arg1, zx.q(*x23_2), zx.q(i))
                    entry_x5, entry_x16, entry_x17 =
                        SetScoreInfo(arg1, arg2 + sx.q(*x23_2) * 0x5dd4, x2_2, zx.q(i), x0_10)
            else
            label_bda0e4:
                DomDefGetSlow(zx.q(x25_1), zx.q(x26_2))
                int32_t* x0_5 = malloc(0x18)
                int64_t x8_17 = sx.q(x8_16) << 3
                int64_t x9_12 = *(&data_1838a20 + x8_17)
                *x0_5 = x25_1
                x0_5[1] = x26_2
                *(&data_1838a20 + x8_17) = x0_5
                *(x0_5 + 0x10) = x9_12
                void* x0_7
                x0_7, entry_x5, entry_x16, entry_x17 = DomDefGetSlow(zx.q(x25_1), zx.q(x26_2))
                *(x0_5 + 8) = x0_7
                
                if ((zx.d(*(x0_7 + 0xcb)) & 1) == 0)
                    x0_10, x2_2 = CalcPlayerCardTypeScore(arg1, zx.q(*x23_2), zx.q(i))
                    entry_x5, entry_x16, entry_x17 =
                        SetScoreInfo(arg1, arg2 + sx.q(*x23_2) * 0x5dd4, x2_2, zx.q(i), x0_10)
        
        i += 1
    while (i s< *(arg1 + 0x1528))
    
    x8_1 = zx.q(*(arg1 + 0xd40))

int32_t* var_c8

if (x8_1.d s>= 1)
    int64_t i_1 = 0
    void* __offset(PlayerScoreInfo, 0x20) x23_4 = arg2 + 0x20
    void* __offset(PlayerScoreInfo, 0x8) x24_2 = arg2 + 8
    
    do
        uint64_t x8_31 = zx.q(*(arg1 + 0x19ac))
        int32_t* var_e8_2
        
        if (x8_31.d s<= 0)
            var_e8_2 = arg2 + i_1 * 0x5dd4
        else
            int32_t x10_6
            int64_t j_6
            
            if (x8_31.d u>= 3)
                void* __offset(DomGame, 0x15f88) x12_2 = arg1 + 0x15f88
                j_6 = x8_31 & 0xfffffffe
                int32_t x10_7 = 0
                int32_t x11_1 = 0
                int64_t j_5 = j_6
                int64_t j_1
                
                do
                    int32_t x14_5 = *(x12_2 - 0x18)
                    
                    if (x14_5 == 0x3f1)
                        entry_x16 = *(x12_2 - 0x1c)
                    
                    int32_t x15_3 = *(x12_2 + 8)
                    
                    if (x15_3 == 0x3f1)
                        entry_x17 = *(x12_2 + 4)
                    
                    uint64_t x16_1 = zx.q(entry_x16)
                    uint64_t x0_20 = zx.q(entry_x17)
                    int32_t x2_8 = i_1 == x16_1 ? 1 : 0
                    int32_t x17_2 = x2_8 & (x14_5 == 0x3f1 ? 1 : 0)
                    
                    if (x17_2 == 1)
                        x2_8 = *(x12_2 - 0x20)
                    
                    int32_t x1_11 = (i_1 == x0_20 ? 1 : 0) & (x15_3 == 0x3f1 ? 1 : 0)
                    
                    if (x1_11 != 0)
                        entry_x5 = *x12_2
                    
                    int32_t x3_4 = x2_8 != 0x601 ? 1 : 0
                    int32_t x4_3 = entry_x5 == 0x601 ? 1 : 0
                    
                    if (((x3_4 | (x17_2 ^ 1)) & 1) == 0)
                        x3_4 = *(x12_2 - 0xc)
                    
                    if ((x4_3 & x1_11) != 0)
                        x4_3 = *(x12_2 + 0x14)
                    
                    int32_t x0_18 = x1_11 & (entry_x5 != 0x601 ? 1 : 0)
                    entry_x5 = x14_5 == 0x3f1 ? 1 : 0
                    entry_x17 = entry_x5 & (i_1 != x16_1 ? 1 : 0)
                    entry_x16 = entry_x17 | (x17_2 & (x2_8 != 0x601 ? 1 : 0))
                    int32_t x14_3
                    
                    if ((entry_x16 | (x14_5 != 0x3f1 ? 1 : 0)) != 0)
                        x14_3 = 0
                    else
                        x14_3 = x3_4
                    
                    x10_7 += x14_3
                    int32_t x14_4
                    
                    if ((((x15_3 == 0x3f1 ? 1 : 0) & (i_1 != x0_20 ? 1 : 0)) | x0_18
                            | (x15_3 != 0x3f1 ? 1 : 0)) != 0)
                        x14_4 = 0
                    else
                        x14_4 = x4_3
                    
                    j_1 = j_5
                    j_5 -= 2
                    x11_1 += x14_4
                    x12_2 += 0x40
                while (j_1 != 2)
                x10_6 = x11_1 + x10_7
                
                if (j_6 != x8_31)
                    goto label_bda4d4
            else
                j_6 = 0
                x10_6 = 0
            label_bda4d4:
                int64_t j_4 = x8_31 - j_6
                void* x11_4 = arg1 + 0x15f68 + (j_6 << 5)
                int64_t j_2
                
                do
                    if (*(x11_4 + 8) == 0x3f1 && i_1 == zx.q(*(x11_4 + 4)) && *x11_4 == 0x601)
                        x10_6 += *(x11_4 + 0x14)
                    
                    j_2 = j_4
                    j_4 -= 1
                    x11_4 += 0x20
                while (j_2 != 1)
            int32_t* x9_15 = arg2 + i_1 * 0x5dd4
            var_e8_2 = x9_15
            *x9_15 += x10_6
            
            if (x10_6 != 0)
                void* x8_35 = arg2 + i_1 * 0x5dd4
                int64_t x9_16 = sx.q(*(x8_35 + 0x5788))
                void* x9_17 = x8_35 + x9_16 * 0x1c
                *(x8_35 + 0x5788) = x9_16.d + 1
                *(x9_17 + 8) = 0
                *(x9_17 + 0xc) = x10_6
                __builtin_memset(x9_17 + 0x10, 0, 0x14)
        
        int32_t* x26_4 = arg2 + i_1 * 0x5dd4 + 0x5788
        int32_t x20_3 = *x26_4
        int64_t x8_38
        
        if (x20_3 s<= 0)
            x8_38 = sx.q(x20_3)
        else
            int64_t x28_1 = 0
            void* __offset(PlayerScoreInfo, 0x20) x22_2 = x23_4
            
            do
                if (*(x22_2 - 0x18) - 1 u<= 1)
                    void* x0_23 = LookupBannerDef(zx.q(*(x22_2 - 0x14)))
                    
                    if (x0_23 != 0)
                        (*(x0_23 + 8))(arg1, zx.q(i_1.d), x22_2 - 8, x22_2 - 4, x22_2)
                        x20_3 = *x26_4
                    else
                        *(x22_2 - 8) = 0
                        *x22_2 = 0
                
                x28_1 += 1
                x8_38 = sx.q(x20_3)
                x22_2 += 0x1c
            while (x28_1 s< x8_38)
        
        void* x20_4 = arg2 + i_1 * 0x5dd4
        var_c8 = SortScoreEntries
        std::__ndk1::__sort<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(
            x20_4 + 8, x20_4 + 8 + x8_38 * 0x1c, &var_c8)
        uint64_t x8_41 = zx.q(*x26_4)
        *(x20_4 + 0x578c) = x8_41.d
        int32_t x8_28
        
        if (x8_41.d s<= 0)
            x8_28 = 0
            *(arg2 + i_1 * 0x5dd4 + 0x5dd0) = 0
        else
            int64_t x10_8 = 0
            void* __offset(PlayerScoreInfo, 0x8) x11_5 = x24_2
            
            do
                if (*x11_5 == 3)
                    *(x20_4 + 0x578c) = x10_8.d
                    break
                
                x10_8 += 1
                x11_5 += 0x1c
            while (x8_41 != x10_8)
            
            *(arg2 + i_1 * 0x5dd4 + 0x5dd0) = 0
            
            if (x8_41.d s< 1)
                x8_28 = 0
            else
                int64_t x10_9 = 0
                int64_t j_3 = 0
                
                do
                    uint64_t x12_4 = zx.q(*(x24_2 + x10_9))
                    
                    if (x12_4.d u> 3)
                        pthread_kill(pthread_self(), 6)
                        CardRef* x0_28
                        CardRef* x1_16
                        x0_28, x1_16 = XNoReturn()
                        return operator!=(x0_28, x1_16) __tailcall
                    
                    switch (x12_4)
                        case 1, 3
                            int64_t x8_42 = sx.q(*(arg2 + i_1 * 0x5dd4 + 0x5dd0))
                            *(arg2 + i_1 * 0x5dd4 + 0x5dd0) = x8_42.d + 1
                            *(arg2 + i_1 * 0x5dd4 + (x8_42 << 1) + 0x5790) = (j_3.d).w
                            x8_41 = zx.q(*x26_4)
                    
                    j_3 += 1
                    x10_9 += 0x1c
                while (j_3 s< sx.q(x8_41.d))
                
                x8_28 = *(arg2 + i_1 * 0x5dd4 + 0x5dd0)
        
        uint64_t x10_5 = zx.q(*(arg1 + 0xd50))
        var_c8 = var_e8_2
        uint64_t var_c0_1 = x10_5
        entry_x5, entry_x16, entry_x17 = std::__ndk1::__sort<SortCardDisplayEntries&, int16_t*>(
            arg2 + i_1 * 0x5dd4 + 0x5790, &(arg2 + i_1 * 0x5dd4 + 0x5790)[sx.q(x8_28)], &var_c8)
        i_1 += 1
        x23_4 += 0x5dd4
        x24_2 += 0x5dd4
    while (i_1 s< sx.q(*(arg1 + 0xd40)))

int32_t var_e0[0x6]
PlayerScores(arg1, &var_e0)
int64_t x8_44 = sx.q(*(arg1 + 0xd40))

if (x8_44.d s>= 1)
    int64_t x9_26
    
    if (x8_44.d != 1)
        int64_t x10_10 = 0
        x9_26 = x8_44 & 0xfffffffffffffffe
        void* __offset(PlayerScoreInfo, 0x5dd4) x11_6 = arg2 + 0x5dd4
        void var_b4
        void* x12_6 = &var_b4
        PlayerScoreInfo* x14_7 = arg2
        
        do
            *(x12_6 - 0x10) = x10_10.d
            *x12_6 = x10_10.d + 1
            int32_t x15_5 = *x14_7
            int32_t x16_2 = *x11_6
            x10_10 += 2
            x11_6 += 0xbba8
            x14_7 += 0xbba8
            *(x12_6 - 0x14) = x15_5
            *(x12_6 - 4) = x16_2
            x12_6 += 0x20
        while (x9_26 != x10_10)
        
        if (x9_26 != x8_44)
            goto label_bda6b0
    else
        x9_26 = 0
    label_bda6b0:
        int32_t* x11_8 = &(&var_c8)[x9_26 * 2] | 4
        int32_t* x12_7 = arg2 + x9_26 * 0x5dd4
        
        do
            *x11_8 = x9_26.d
            int32_t x13_3 = *x12_7
            x9_26 += 1
            x12_7 = &x12_7[0x1775]
            x11_8[-1] = x13_3
            x11_8 = &x11_8[4]
        while (x9_26 s< x8_44)

bool (* var_68)(PlayerRank&, PlayerRank&) = SortRanks
std::__ndk1::__sort<bool (*&)(PlayerRank&, PlayerRank&), PlayerRank*>(&var_c8, 
    &(&var_c8)[x8_44 * 2], &var_68)
int64_t x8_45 = sx.q(*(arg1 + 0xd40))

if (x8_45.d s< 1)
    return 

int32_t var_bc_1 = 0

if (x8_45.d s> 1)
    int32_t x9_28 = *(arg1 + 0x19e8) - 1
    void var_ac
    void* x10_11 = &var_ac
    int64_t x11_9 = 1
    
    do
        int32_t x13_6
        
        if (*(x10_11 - 0xc) == *(x10_11 - 0x1c))
            x13_6 = x9_28 s% x8_45.d
        
        if (*(x10_11 - 0xc) != *(x10_11 - 0x1c)
                || (x13_6 s< *(x10_11 - 8) ? 1 : 0) == (x13_6 s>= *(x10_11 - 0x18) ? 1 : 0))
            *x10_11 = x11_9.d
        else
            *x10_11 = *(x10_11 - 0x10)
        
        x11_9 += 1
        x10_11 += 0x10
    while (x11_9 s< x8_45)

if (x8_45.d s< 1)
    return 

int64_t i_2 = 0
int32_t* x9_29 = &var_c8 | 4

do
    int64_t x11_10 = sx.q(*x9_29)
    x9_29 = &x9_29[4]
    *(arg2 + x11_10 * 0x5dd4 + 4) = i_2.d
    i_2 += 1
while (i_2 s< sx.q(*(arg1 + 0xd40)))
