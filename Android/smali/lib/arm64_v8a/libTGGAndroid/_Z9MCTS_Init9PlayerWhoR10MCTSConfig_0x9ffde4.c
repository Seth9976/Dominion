// 函数: _Z9MCTS_Init9PlayerWhoR10MCTSConfig
// 地址: 0x9ffde4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(muls.dp.d(arg1, 0x84) + 0x14a76a0) = *arg2
int128_t v1 = *(arg2 + 0x30)
int128_t v3 = *(arg2 + 0x10)
int128_t v2 = *(arg2 + 0x20)
uint64_t i = 0
int128_t* x20 = &data_14a79b8:8
*(muls.dp.d(arg1, 0x84) + 0x14a76e0) = *(arg2 + 0x40)
*(muls.dp.d(arg1, 0x84) + 0x14a76d0) = v1
*(muls.dp.d(arg1, 0x84) + 0x14a76c0) = v2
*(muls.dp.d(arg1, 0x84) + 0x14a76b0) = v3
v1 = *(arg2 + 0x60)
int128_t v0 = *(arg2 + 0x70)
v2 = *(arg2 + 0x50)
*(muls.dp.d(arg1, 0x84) + 0x14a7720) = *(arg2 + 0x80)
*(muls.dp.d(arg1, 0x84) + 0x14a7710) = v0
*(muls.dp.d(arg1, 0x84) + 0x14a7700) = v1
*(muls.dp.d(arg1, 0x84) + 0x14a76f0) = v2
int32_t* result

do
    int64_t x1
    int128_t v0_1
    result, x1, v0_1 = RandomPCGSet(i, 1)
    i += 1
    *(x20 - 8) = result
    *x20 = x1
    x20 = &x20[1]
while (i != 0x64)

uint32_t x9_1 = zx.d(data_14a71b2)
data_14a71e8 = data_14a79b8

if ((x9_1 & 1) == 0)
    uint64_t x20_1 = zx.q(*EXP_STANDARD_COUNT)
    data_14a71b2 = 1
    
    if (x20_1.d s>= 1)
        int64_t x21_1 = 0
        uint64_t x22_1 = *EXP_STANDARD_DEFS
        
        do
            int32_t x26_1 = *(x22_1 + x21_1 * 0x780 + 0xc0)
            
            if (x21_1 == zx.q(x26_1 - 0x100))
                int32_t x8_8 = x26_1 s% 0x2717
                int32_t* i_21 = *(&data_13db978 + (sx.q(x8_8) << 3))
                int32_t* i_1 = i_21
                
                if (i_21 != 0)
                    do
                        if (*i_1 == x26_1)
                        label_a01cc8:
                            pthread_kill(pthread_self(), 6)
                            XNoReturn()
                            return MCTS_DumpMap() __tailcall
                        
                        i_1 = *(i_1 + 0x1b8)
                    while (i_1 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_21
                *(&data_13db978 + (sx.q(x8_8) << 3)) = result
                *result = x26_1
                int64_t x8_2 = *(x22_1 + x21_1 * 0x780 + 0xc8)
                result[1] = x26_1
                *(result + 8) = x8_2
            
            x21_1 += 1
        while (x21_1 != x20_1)
    
    uint64_t x20_2 = zx.q(*EXP_BASE_COUNT)
    
    if (x20_2.d s>= 1)
        int64_t x21_2 = 0
        uint64_t x22_2 = *EXP_BASE_DEFS
        
        do
            int32_t x26_2 = *(x22_2 + x21_2 * 0x780 + 0xc0)
            
            if (x21_2 == zx.q(x26_2 - 0x200))
                int32_t x8_16 = x26_2 s% 0x2717
                int32_t* i_22 = *(&data_13db978 + (sx.q(x8_16) << 3))
                int32_t* i_2 = i_22
                
                if (i_22 != 0)
                    do
                        if (*i_2 == x26_2)
                            goto label_a01cc8
                        
                        i_2 = *(i_2 + 0x1b8)
                    while (i_2 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_22
                *(&data_13db978 + (sx.q(x8_16) << 3)) = result
                *result = x26_2
                int64_t x8_10 = *(x22_2 + x21_2 * 0x780 + 0xc8)
                result[1] = x26_2
                *(result + 8) = x8_10
            
            x21_2 += 1
        while (x21_2 != x20_2)
    
    uint64_t x20_3 = zx.q(*EXP_INTRIGUE_COUNT)
    
    if (x20_3.d s>= 1)
        int64_t x21_3 = 0
        uint64_t x22_3 = *EXP_INTRIGUE_DEFS
        
        do
            int32_t x26_3 = *(x22_3 + x21_3 * 0x780 + 0xc0)
            
            if (x21_3 == zx.q(x26_3 - 0x300))
                int32_t x8_24 = x26_3 s% 0x2717
                int32_t* i_23 = *(&data_13db978 + (sx.q(x8_24) << 3))
                int32_t* i_3 = i_23
                
                if (i_23 != 0)
                    do
                        if (*i_3 == x26_3)
                            goto label_a01cc8
                        
                        i_3 = *(i_3 + 0x1b8)
                    while (i_3 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_23
                *(&data_13db978 + (sx.q(x8_24) << 3)) = result
                *result = x26_3
                int64_t x8_18 = *(x22_3 + x21_3 * 0x780 + 0xc8)
                result[1] = x26_3
                *(result + 8) = x8_18
            
            x21_3 += 1
        while (x21_3 != x20_3)
    
    uint64_t x20_4 = zx.q(*EXP_SEASIDE_COUNT)
    
    if (x20_4.d s>= 1)
        int64_t x21_4 = 0
        uint64_t x22_4 = *EXP_SEASIDE_DEFS
        
        do
            int32_t x26_4 = *(x22_4 + x21_4 * 0x780 + 0xc0)
            
            if (x21_4 == zx.q(x26_4 - 0x400))
                int32_t x8_32 = x26_4 s% 0x2717
                int32_t* i_24 = *(&data_13db978 + (sx.q(x8_32) << 3))
                int32_t* i_4 = i_24
                
                if (i_24 != 0)
                    do
                        if (*i_4 == x26_4)
                            goto label_a01cc8
                        
                        i_4 = *(i_4 + 0x1b8)
                    while (i_4 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_24
                *(&data_13db978 + (sx.q(x8_32) << 3)) = result
                *result = x26_4
                int64_t x8_26 = *(x22_4 + x21_4 * 0x780 + 0xc8)
                result[1] = x26_4
                *(result + 8) = x8_26
            
            x21_4 += 1
        while (x21_4 != x20_4)
    
    uint64_t x20_5 = zx.q(*EXP_ALCHEMY_COUNT)
    
    if (x20_5.d s>= 1)
        int64_t x21_5 = 0
        uint64_t x22_5 = *EXP_ALCHEMY_DEFS
        
        do
            int32_t x26_5 = *(x22_5 + x21_5 * 0x780 + 0xc0)
            
            if (x21_5 == zx.q(x26_5 - 0x500))
                int32_t x8_40 = x26_5 s% 0x2717
                int32_t* i_25 = *(&data_13db978 + (sx.q(x8_40) << 3))
                int32_t* i_5 = i_25
                
                if (i_25 != 0)
                    do
                        if (*i_5 == x26_5)
                            goto label_a01cc8
                        
                        i_5 = *(i_5 + 0x1b8)
                    while (i_5 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_25
                *(&data_13db978 + (sx.q(x8_40) << 3)) = result
                *result = x26_5
                int64_t x8_34 = *(x22_5 + x21_5 * 0x780 + 0xc8)
                result[1] = x26_5
                *(result + 8) = x8_34
            
            x21_5 += 1
        while (x21_5 != x20_5)
    
    uint64_t x20_6 = zx.q(*EXP_PROSPERITY_COUNT)
    
    if (x20_6.d s>= 1)
        int64_t x21_6 = 0
        uint64_t x22_6 = *EXP_PROSPERITY_DEFS
        
        do
            int32_t x26_6 = *(x22_6 + x21_6 * 0x780 + 0xc0)
            
            if (x21_6 == zx.q(x26_6 - 0x600))
                int32_t x8_48 = x26_6 s% 0x2717
                int32_t* i_26 = *(&data_13db978 + (sx.q(x8_48) << 3))
                int32_t* i_6 = i_26
                
                if (i_26 != 0)
                    do
                        if (*i_6 == x26_6)
                            goto label_a01cc8
                        
                        i_6 = *(i_6 + 0x1b8)
                    while (i_6 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_26
                *(&data_13db978 + (sx.q(x8_48) << 3)) = result
                *result = x26_6
                int64_t x8_42 = *(x22_6 + x21_6 * 0x780 + 0xc8)
                result[1] = x26_6
                *(result + 8) = x8_42
            
            x21_6 += 1
        while (x21_6 != x20_6)
    
    uint64_t x20_7 = zx.q(*EXP_CORNUCOPIA_COUNT)
    
    if (x20_7.d s>= 1)
        int64_t x21_7 = 0
        uint64_t x22_7 = *EXP_CORNUCOPIA_DEFS
        
        do
            int32_t x26_7 = *(x22_7 + x21_7 * 0x780 + 0xc0)
            
            if (x21_7 == zx.q(x26_7 - 0x700))
                int32_t x8_56 = x26_7 s% 0x2717
                int32_t* i_27 = *(&data_13db978 + (sx.q(x8_56) << 3))
                int32_t* i_7 = i_27
                
                if (i_27 != 0)
                    do
                        if (*i_7 == x26_7)
                            goto label_a01cc8
                        
                        i_7 = *(i_7 + 0x1b8)
                    while (i_7 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_27
                *(&data_13db978 + (sx.q(x8_56) << 3)) = result
                *result = x26_7
                int64_t x8_50 = *(x22_7 + x21_7 * 0x780 + 0xc8)
                result[1] = x26_7
                *(result + 8) = x8_50
            
            x21_7 += 1
        while (x21_7 != x20_7)
    
    uint64_t x20_8 = zx.q(*EXP_HINTERLANDS_COUNT)
    
    if (x20_8.d s>= 1)
        int64_t x21_8 = 0
        uint64_t x22_8 = *EXP_HINTERLANDS_DEFS
        
        do
            int32_t x26_8 = *(x22_8 + x21_8 * 0x780 + 0xc0)
            
            if (x21_8 == zx.q(x26_8 - 0x800))
                int32_t x8_64 = x26_8 s% 0x2717
                int32_t* i_28 = *(&data_13db978 + (sx.q(x8_64) << 3))
                int32_t* i_8 = i_28
                
                if (i_28 != 0)
                    do
                        if (*i_8 == x26_8)
                            goto label_a01cc8
                        
                        i_8 = *(i_8 + 0x1b8)
                    while (i_8 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_28
                *(&data_13db978 + (sx.q(x8_64) << 3)) = result
                *result = x26_8
                int64_t x8_58 = *(x22_8 + x21_8 * 0x780 + 0xc8)
                result[1] = x26_8
                *(result + 8) = x8_58
            
            x21_8 += 1
        while (x21_8 != x20_8)
    
    uint64_t x20_9 = zx.q(*EXP_DARK_AGES_COUNT)
    
    if (x20_9.d s>= 1)
        int64_t x21_9 = 0
        uint64_t x22_9 = *EXP_DARK_AGES_DEFS
        
        do
            int32_t x26_9 = *(x22_9 + x21_9 * 0x780 + 0xc0)
            
            if (x21_9 == zx.q(x26_9 - 0x900))
                int32_t x8_72 = x26_9 s% 0x2717
                int32_t* i_29 = *(&data_13db978 + (sx.q(x8_72) << 3))
                int32_t* i_9 = i_29
                
                if (i_29 != 0)
                    do
                        if (*i_9 == x26_9)
                            goto label_a01cc8
                        
                        i_9 = *(i_9 + 0x1b8)
                    while (i_9 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_29
                *(&data_13db978 + (sx.q(x8_72) << 3)) = result
                *result = x26_9
                int64_t x8_66 = *(x22_9 + x21_9 * 0x780 + 0xc8)
                result[1] = x26_9
                *(result + 8) = x8_66
            
            x21_9 += 1
        while (x21_9 != x20_9)
    
    uint64_t x20_10 = zx.q(*EXP_GUILDS_COUNT)
    
    if (x20_10.d s>= 1)
        int64_t x21_10 = 0
        uint64_t x22_10 = *EXP_GUILDS_DEFS
        
        do
            int32_t x26_10 = *(x22_10 + x21_10 * 0x780 + 0xc0)
            
            if (x21_10 == zx.q(x26_10 - 0xa00))
                int32_t x8_80 = x26_10 s% 0x2717
                int32_t* i_30 = *(&data_13db978 + (sx.q(x8_80) << 3))
                int32_t* i_10 = i_30
                
                if (i_30 != 0)
                    do
                        if (*i_10 == x26_10)
                            goto label_a01cc8
                        
                        i_10 = *(i_10 + 0x1b8)
                    while (i_10 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_30
                *(&data_13db978 + (sx.q(x8_80) << 3)) = result
                *result = x26_10
                int64_t x8_74 = *(x22_10 + x21_10 * 0x780 + 0xc8)
                result[1] = x26_10
                *(result + 8) = x8_74
            
            x21_10 += 1
        while (x21_10 != x20_10)
    
    uint64_t x20_11 = zx.q(*EXP_ADVENTURES_COUNT)
    
    if (x20_11.d s>= 1)
        int64_t x21_11 = 0
        uint64_t x22_11 = *EXP_ADVENTURES_DEFS
        
        do
            int32_t x26_11 = *(x22_11 + x21_11 * 0x780 + 0xc0)
            
            if (x21_11 == zx.q(x26_11 - 0xb00))
                int32_t x8_88 = x26_11 s% 0x2717
                int32_t* i_31 = *(&data_13db978 + (sx.q(x8_88) << 3))
                int32_t* i_11 = i_31
                
                if (i_31 != 0)
                    do
                        if (*i_11 == x26_11)
                            goto label_a01cc8
                        
                        i_11 = *(i_11 + 0x1b8)
                    while (i_11 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_31
                *(&data_13db978 + (sx.q(x8_88) << 3)) = result
                *result = x26_11
                int64_t x8_82 = *(x22_11 + x21_11 * 0x780 + 0xc8)
                result[1] = x26_11
                *(result + 8) = x8_82
            
            x21_11 += 1
        while (x21_11 != x20_11)
    
    uint64_t x20_12 = zx.q(*EXP_EMPIRES_COUNT)
    
    if (x20_12.d s>= 1)
        int64_t x21_12 = 0
        uint64_t x22_12 = *EXP_EMPIRES_DEFS
        
        do
            int32_t x26_12 = *(x22_12 + x21_12 * 0x780 + 0xc0)
            
            if (x21_12 == zx.q(x26_12 - 0xc00))
                int32_t x8_96 = x26_12 s% 0x2717
                int32_t* i_32 = *(&data_13db978 + (sx.q(x8_96) << 3))
                int32_t* i_12 = i_32
                
                if (i_32 != 0)
                    do
                        if (*i_12 == x26_12)
                            goto label_a01cc8
                        
                        i_12 = *(i_12 + 0x1b8)
                    while (i_12 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_32
                *(&data_13db978 + (sx.q(x8_96) << 3)) = result
                *result = x26_12
                int64_t x8_90 = *(x22_12 + x21_12 * 0x780 + 0xc8)
                result[1] = x26_12
                *(result + 8) = x8_90
            
            x21_12 += 1
        while (x21_12 != x20_12)
    
    uint64_t x20_13 = zx.q(*EXP_NOCTURNE_COUNT)
    
    if (x20_13.d s>= 1)
        int64_t x21_13 = 0
        uint64_t x22_13 = *EXP_NOCTURNE_DEFS
        
        do
            int32_t x26_13 = *(x22_13 + x21_13 * 0x780 + 0xc0)
            
            if (x21_13 == zx.q(x26_13 - 0xd00))
                int32_t x8_104 = x26_13 s% 0x2717
                int32_t* i_33 = *(&data_13db978 + (sx.q(x8_104) << 3))
                int32_t* i_13 = i_33
                
                if (i_33 != 0)
                    do
                        if (*i_13 == x26_13)
                            goto label_a01cc8
                        
                        i_13 = *(i_13 + 0x1b8)
                    while (i_13 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_33
                *(&data_13db978 + (sx.q(x8_104) << 3)) = result
                *result = x26_13
                int64_t x8_98 = *(x22_13 + x21_13 * 0x780 + 0xc8)
                result[1] = x26_13
                *(result + 8) = x8_98
            
            x21_13 += 1
        while (x21_13 != x20_13)
    
    uint64_t x20_14 = zx.q(*EXP_RENAISSANCE_COUNT)
    
    if (x20_14.d s>= 1)
        int64_t x21_14 = 0
        uint64_t x22_14 = *EXP_RENAISSANCE_DEFS
        
        do
            int32_t x26_14 = *(x22_14 + x21_14 * 0x780 + 0xc0)
            
            if (x21_14 == zx.q(x26_14 - 0xe00))
                int32_t x8_112 = x26_14 s% 0x2717
                int32_t* i_34 = *(&data_13db978 + (sx.q(x8_112) << 3))
                int32_t* i_14 = i_34
                
                if (i_34 != 0)
                    do
                        if (*i_14 == x26_14)
                            goto label_a01cc8
                        
                        i_14 = *(i_14 + 0x1b8)
                    while (i_14 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_34
                *(&data_13db978 + (sx.q(x8_112) << 3)) = result
                *result = x26_14
                int64_t x8_106 = *(x22_14 + x21_14 * 0x780 + 0xc8)
                result[1] = x26_14
                *(result + 8) = x8_106
            
            x21_14 += 1
        while (x21_14 != x20_14)
    
    uint64_t x20_15 = zx.q(*EXP_MENAGERIE_COUNT)
    
    if (x20_15.d s>= 1)
        int64_t x21_15 = 0
        uint64_t x22_15 = *EXP_MENAGERIE_DEFS
        
        do
            int32_t x26_15 = *(x22_15 + x21_15 * 0x780 + 0xc0)
            
            if (x21_15 == zx.q(x26_15 - 0xf00))
                int32_t x8_120 = x26_15 s% 0x2717
                int32_t* i_35 = *(&data_13db978 + (sx.q(x8_120) << 3))
                int32_t* i_15 = i_35
                
                if (i_35 != 0)
                    do
                        if (*i_15 == x26_15)
                            goto label_a01cc8
                        
                        i_15 = *(i_15 + 0x1b8)
                    while (i_15 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_35
                *(&data_13db978 + (sx.q(x8_120) << 3)) = result
                *result = x26_15
                int64_t x8_114 = *(x22_15 + x21_15 * 0x780 + 0xc8)
                result[1] = x26_15
                *(result + 8) = x8_114
            
            x21_15 += 1
        while (x21_15 != x20_15)
    
    uint64_t x20_16 = zx.q(*EXP_ALLIES_COUNT)
    
    if (x20_16.d s>= 1)
        int64_t x21_16 = 0
        uint64_t x22_16 = *EXP_ALLIES_DEFS
        
        do
            int32_t x26_16 = *(x22_16 + x21_16 * 0x780 + 0xc0)
            
            if (x21_16 == zx.q(x26_16 - 0x1000))
                int32_t x8_128 = x26_16 s% 0x2717
                int32_t* i_36 = *(&data_13db978 + (sx.q(x8_128) << 3))
                int32_t* i_16 = i_36
                
                if (i_36 != 0)
                    do
                        if (*i_16 == x26_16)
                            goto label_a01cc8
                        
                        i_16 = *(i_16 + 0x1b8)
                    while (i_16 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_36
                *(&data_13db978 + (sx.q(x8_128) << 3)) = result
                *result = x26_16
                int64_t x8_122 = *(x22_16 + x21_16 * 0x780 + 0xc8)
                result[1] = x26_16
                *(result + 8) = x8_122
            
            x21_16 += 1
        while (x21_16 != x20_16)
    
    uint64_t x20_17 = zx.q(*EXP_PLUNDER_COUNT)
    
    if (x20_17.d s>= 1)
        int64_t x21_17 = 0
        uint64_t x23_1 = *EXP_PLUNDER_DEFS
        
        do
            int32_t x27_1 = *(x23_1 + x21_17 * 0x780 + 0xc0)
            
            if (x21_17 == zx.q(x27_1 - 0x1100))
                int32_t x8_136 = x27_1 s% 0x2717
                int32_t* i_37 = *(&data_13db978 + (sx.q(x8_136) << 3))
                int32_t* i_17 = i_37
                
                if (i_37 != 0)
                    do
                        if (*i_17 == x27_1)
                            goto label_a01cc8
                        
                        i_17 = *(i_17 + 0x1b8)
                    while (i_17 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_37
                *(&data_13db978 + (sx.q(x8_136) << 3)) = result
                *result = x27_1
                int64_t x8_130 = *(x23_1 + x21_17 * 0x780 + 0xc8)
                result[1] = x27_1
                *(result + 8) = x8_130
            
            x21_17 += 1
        while (x21_17 != x20_17)
    
    uint64_t x20_18 = zx.q(*EXP_RISING_SUN_COUNT)
    
    if (x20_18.d s>= 1)
        int64_t x21_18 = 0
        uint64_t x23_2 = *EXP_RISING_SUN_DEFS
        
        do
            int32_t x27_2 = *(x23_2 + x21_18 * 0x780 + 0xc0)
            
            if (x21_18 == zx.q(x27_2 - 0x1200))
                int32_t x8_144 = x27_2 s% 0x2717
                int32_t* i_38 = *(&data_13db978 + (sx.q(x8_144) << 3))
                int32_t* i_18 = i_38
                
                if (i_38 != 0)
                    do
                        if (*i_18 == x27_2)
                            goto label_a01cc8
                        
                        i_18 = *(i_18 + 0x1b8)
                    while (i_18 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_38
                *(&data_13db978 + (sx.q(x8_144) << 3)) = result
                *result = x27_2
                int64_t x8_138 = *(x23_2 + x21_18 * 0x780 + 0xc8)
                result[1] = x27_2
                *(result + 8) = x8_138
            
            x21_18 += 1
        while (x21_18 != x20_18)
    
    uint64_t x20_19 = zx.q(*EXP_CAMPAIGNCARDS_COUNT)
    
    if (x20_19.d s>= 1)
        int64_t x21_19 = 0
        uint64_t x23_3 = *EXP_CAMPAIGNCARDS_DEFS
        
        do
            int32_t x27_3 = *(x23_3 + x21_19 * 0x780 + 0xc0)
            
            if (x21_19 == zx.q(x27_3 - 0x1500))
                int32_t x8_152 = x27_3 s% 0x2717
                int32_t* i_39 = *(&data_13db978 + (sx.q(x8_152) << 3))
                int32_t* i_19 = i_39
                
                if (i_39 != 0)
                    do
                        if (*i_19 == x27_3)
                            goto label_a01cc8
                        
                        i_19 = *(i_19 + 0x1b8)
                    while (i_19 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_39
                *(&data_13db978 + (sx.q(x8_152) << 3)) = result
                *result = x27_3
                int64_t x8_146 = *(x23_3 + x21_19 * 0x780 + 0xc8)
                result[1] = x27_3
                *(result + 8) = x8_146
            
            x21_19 += 1
        while (x21_19 != x20_19)
    
    uint64_t x20_20 = zx.q(*EXP_PROMOS_COUNT)
    
    if (x20_20.d s>= 1)
        int64_t x21_20 = 0
        uint64_t x23_4 = *EXP_PROMOS_DEFS
        
        do
            int32_t x27_4 = *(x23_4 + x21_20 * 0x780 + 0xc0)
            
            if (x21_20 == zx.q(x27_4 - 0x1300))
                int32_t x8_160 = x27_4 s% 0x2717
                int32_t* i_40 = *(&data_13db978 + (sx.q(x8_160) << 3))
                int32_t* i_20 = i_40
                
                if (i_40 != 0)
                    do
                        if (*i_20 == x27_4)
                            goto label_a01cc8
                        
                        i_20 = *(i_20 + 0x1b8)
                    while (i_20 != 0)
                
                result = malloc(0x1c0)
                __builtin_memset(&result[4], 0, 0x1a8)
                *(result + 0x1b8) = i_40
                *(&data_13db978 + (sx.q(x8_160) << 3)) = result
                *result = x27_4
                int64_t x8_154 = *(x23_4 + x21_20 * 0x780 + 0xc8)
                result[1] = x27_4
                *(result + 8) = x8_154
            
            x21_20 += 1
        while (x21_20 != x20_20)
    
    int32_t* x8_161 = data_13e02f0
    
    if (x8_161 == 0)
    label_a011ec:
        result, x8_161 = printf("Couldn't lookup %d\n", 0x92f)
    else
        while (*x8_161 != 0x92f)
            x8_161 = *(x8_161 + 0x1b8)
            
            if (x8_161 == 0)
                goto label_a011ec
    
    x8_161[1] = 0x91c
    int32_t* x8_162 = data_13e02f8
    
    if (x8_162 == 0)
    label_a01224:
        result, x8_162 = printf("Couldn't lookup %d\n", 0x930)
    else
        while (*x8_162 != 0x930)
            x8_162 = *(x8_162 + 0x1b8)
            
            if (x8_162 == 0)
                goto label_a01224
    
    x8_162[1] = 0x91c
    int32_t* x8_163 = data_13e0300
    
    if (x8_163 == 0)
    label_a0125c:
        result, x8_163 = printf("Couldn't lookup %d\n", 0x931)
    else
        while (*x8_163 != 0x931)
            x8_163 = *(x8_163 + 0x1b8)
            
            if (x8_163 == 0)
                goto label_a0125c
    
    x8_163[1] = 0x91c
    int32_t* x8_164 = data_13e0308
    
    if (x8_164 == 0)
    label_a01294:
        result, x8_164 = printf("Couldn't lookup %d\n", 0x932)
    else
        while (*x8_164 != 0x932)
            x8_164 = *(x8_164 + 0x1b8)
            
            if (x8_164 == 0)
                goto label_a01294
    
    x8_164[1] = 0x91c
    int32_t* x8_165 = data_13e0310
    
    if (x8_165 == 0)
    label_a012cc:
        result, x8_165 = printf("Couldn't lookup %d\n", 0x933)
    else
        while (*x8_165 != 0x933)
            x8_165 = *(x8_165 + 0x1b8)
            
            if (x8_165 == 0)
                goto label_a012cc
    
    x8_165[1] = 0x91c
    int32_t* x8_166 = data_13e0318
    
    if (x8_166 == 0)
    label_a01304:
        result, x8_166 = printf("Couldn't lookup %d\n", 0x934)
    else
        while (*x8_166 != 0x934)
            x8_166 = *(x8_166 + 0x1b8)
            
            if (x8_166 == 0)
                goto label_a01304
    
    x8_166[1] = 0x91c
    int32_t* x8_167 = data_13e0320
    
    if (x8_167 == 0)
    label_a0133c:
        result, x8_167 = printf("Couldn't lookup %d\n", 0x935)
    else
        while (*x8_167 != 0x935)
            x8_167 = *(x8_167 + 0x1b8)
            
            if (x8_167 == 0)
                goto label_a0133c
    
    x8_167[1] = 0x91c
    int32_t* x8_168 = data_13e0328
    
    if (x8_168 == 0)
    label_a01374:
        result, x8_168 = printf("Couldn't lookup %d\n", 0x936)
    else
        while (*x8_168 != 0x936)
            x8_168 = *(x8_168 + 0x1b8)
            
            if (x8_168 == 0)
                goto label_a01374
    
    x8_168[1] = 0x91c
    int32_t* x8_169 = data_13e0330
    
    if (x8_169 == 0)
    label_a013ac:
        result, x8_169 = printf("Couldn't lookup %d\n", 0x937)
    else
        while (*x8_169 != 0x937)
            x8_169 = *(x8_169 + 0x1b8)
            
            if (x8_169 == 0)
                goto label_a013ac
    
    x8_169[1] = 0x91c
    int32_t* x8_170 = data_13e0338
    
    if (x8_170 == 0)
    label_a013e4:
        result, x8_170 = printf("Couldn't lookup %d\n", 0x938)
    else
        while (*x8_170 != 0x938)
            x8_170 = *(x8_170 + 0x1b8)
            
            if (x8_170 == 0)
                goto label_a013e4
    
    x8_170[1] = 0x91c
    int32_t* x8_171 = data_13e1ac8
    
    if (x8_171 == 0)
    label_a0141c:
        result, x8_171 = printf("Couldn't lookup %d\n", 0xc2a)
    else
        while (*x8_171 != 0xc2a)
            x8_171 = *(x8_171 + 0x1b8)
            
            if (x8_171 == 0)
                goto label_a0141c
    
    x8_171[1] = 0xc0a
    int32_t* x8_172 = data_13e1ad0
    
    if (x8_172 == 0)
    label_a01454:
        result, x8_172 = printf("Couldn't lookup %d\n", 0xc2b)
    else
        while (*x8_172 != 0xc2b)
            x8_172 = *(x8_172 + 0x1b8)
            
            if (x8_172 == 0)
                goto label_a01454
    
    x8_172[1] = 0xc0a
    int32_t* x8_173 = data_13e1ad8
    
    if (x8_173 == 0)
    label_a0148c:
        result, x8_173 = printf("Couldn't lookup %d\n", 0xc2c)
    else
        while (*x8_173 != 0xc2c)
            x8_173 = *(x8_173 + 0x1b8)
            
            if (x8_173 == 0)
                goto label_a0148c
    
    x8_173[1] = 0xc0a
    int32_t* x8_174 = data_13e1ae0
    
    if (x8_174 == 0)
    label_a014c4:
        result, x8_174 = printf("Couldn't lookup %d\n", 0xc2d)
    else
        while (*x8_174 != 0xc2d)
            x8_174 = *(x8_174 + 0x1b8)
            
            if (x8_174 == 0)
                goto label_a014c4
    
    x8_174[1] = 0xc0a
    int32_t* x8_175 = data_13e1ae8
    
    if (x8_175 == 0)
    label_a014fc:
        result, x8_175 = printf("Couldn't lookup %d\n", 0xc2e)
    else
        while (*x8_175 != 0xc2e)
            x8_175 = *(x8_175 + 0x1b8)
            
            if (x8_175 == 0)
                goto label_a014fc
    
    x8_175[1] = 0xc0a
    int32_t* x8_176 = data_13e1af0
    
    if (x8_176 == 0)
    label_a01534:
        result, x8_176 = printf("Couldn't lookup %d\n", 0xc2f)
    else
        while (*x8_176 != 0xc2f)
            x8_176 = *(x8_176 + 0x1b8)
            
            if (x8_176 == 0)
                goto label_a01534
    
    x8_176[1] = 0xc0a
    int32_t* x8_177 = data_13e1af8
    
    if (x8_177 == 0)
    label_a0156c:
        result, x8_177 = printf("Couldn't lookup %d\n", 0xc30)
    else
        while (*x8_177 != 0xc30)
            x8_177 = *(x8_177 + 0x1b8)
            
            if (x8_177 == 0)
                goto label_a0156c
    
    x8_177[1] = 0xc0a
    int32_t* x8_178 = data_13e1b00
    
    if (x8_178 == 0)
    label_a015a4:
        result, x8_178 = printf("Couldn't lookup %d\n", 0xc31)
    else
        while (*x8_178 != 0xc31)
            x8_178 = *(x8_178 + 0x1b8)
            
            if (x8_178 == 0)
                goto label_a015a4
    
    x8_178[1] = 0xc0a
    int32_t* x8_179 = data_13e19a0
    
    if (x8_179 == 0)
    label_a015dc:
        result, x8_179 = printf("Couldn't lookup %d\n", 0xc05)
    else
        while (*x8_179 != 0xc05)
            x8_179 = *(x8_179 + 0x1b8)
            
            if (x8_179 == 0)
                goto label_a015dc
    
    x8_179[1] = 0xc04
    int32_t* x8_180 = data_13e19b0
    
    if (x8_180 == 0)
    label_a01614:
        result, x8_180 = printf("Couldn't lookup %d\n", 0xc07)
    else
        while (*x8_180 != 0xc07)
            x8_180 = *(x8_180 + 0x1b8)
            
            if (x8_180 == 0)
                goto label_a01614
    
    x8_180[1] = 0xc06
    int32_t* x8_181 = data_13e19c0
    
    if (x8_181 == 0)
    label_a0164c:
        result, x8_181 = printf("Couldn't lookup %d\n", 0xc09)
    else
        while (*x8_181 != 0xc09)
            x8_181 = *(x8_181 + 0x1b8)
            
            if (x8_181 == 0)
                goto label_a0164c
    
    x8_181[1] = 0xc08
    int32_t* x8_182 = data_13e19d8
    
    if (x8_182 == 0)
    label_a01684:
        result, x8_182 = printf("Couldn't lookup %d\n", 0xc0c)
    else
        while (*x8_182 != 0xc0c)
            x8_182 = *(x8_182 + 0x1b8)
            
            if (x8_182 == 0)
                goto label_a01684
    
    x8_182[1] = 0xc0b
    int32_t* x8_183 = data_13e1a00
    
    if (x8_183 == 0)
    label_a016bc:
        result, x8_183 = printf("Couldn't lookup %d\n", 0xc11)
    else
        while (*x8_183 != 0xc11)
            x8_183 = *(x8_183 + 0x1b8)
            
            if (x8_183 == 0)
                goto label_a016bc
    
    x8_183[1] = 0xc10
    int32_t* x8_184 = data_13e51a8
    
    if (x8_184 == 0)
    label_a016f8:
        result, x8_184 = printf("Couldn't lookup %d\n", 0x1306)
    else
        while (*x8_184 != 0x1306)
            x8_184 = *(x8_184 + 0x1b8)
            
            if (x8_184 == 0)
                goto label_a016f8
    
    x8_184[1] = 0x1305
    int32_t* x8_185 = data_13e3a48
    
    if (x8_185 == 0)
    label_a01734:
        result, x8_185 = printf("Couldn't lookup %d\n", 0x101a)
    else
        while (*x8_185 != 0x101a)
            x8_185 = *(x8_185 + 0x1b8)
            
            if (x8_185 == 0)
                goto label_a01734
    
    x8_185[1] = 0x1019
    int32_t* x8_186 = data_13e3a50
    
    if (x8_186 == 0)
    label_a01770:
        result, x8_186 = printf("Couldn't lookup %d\n", 0x101b)
    else
        while (*x8_186 != 0x101b)
            x8_186 = *(x8_186 + 0x1b8)
            
            if (x8_186 == 0)
                goto label_a01770
    
    x8_186[1] = 0x1019
    int32_t* x8_187 = data_13e3a58
    
    if (x8_187 == 0)
    label_a017ac:
        result, x8_187 = printf("Couldn't lookup %d\n", 0x101c)
    else
        while (*x8_187 != 0x101c)
            x8_187 = *(x8_187 + 0x1b8)
            
            if (x8_187 == 0)
                goto label_a017ac
    
    x8_187[1] = 0x1019
    int32_t* x8_188 = data_13e3a60
    
    if (x8_188 == 0)
    label_a017e8:
        result, x8_188 = printf("Couldn't lookup %d\n", 0x101d)
    else
        while (*x8_188 != 0x101d)
            x8_188 = *(x8_188 + 0x1b8)
            
            if (x8_188 == 0)
                goto label_a017e8
    
    x8_188[1] = 0x1019
    int32_t* x8_189 = data_13e3a70
    
    if (x8_189 == 0)
    label_a01824:
        result, x8_189 = printf("Couldn't lookup %d\n", 0x101f)
    else
        while (*x8_189 != 0x101f)
            x8_189 = *(x8_189 + 0x1b8)
            
            if (x8_189 == 0)
                goto label_a01824
    
    x8_189[1] = 0x101e
    int32_t* x8_190 = data_13e3a78
    
    if (x8_190 == 0)
    label_a01860:
        result, x8_190 = printf("Couldn't lookup %d\n", 0x1020)
    else
        while (*x8_190 != 0x1020)
            x8_190 = *(x8_190 + 0x1b8)
            
            if (x8_190 == 0)
                goto label_a01860
    
    x8_190[1] = 0x101e
    int32_t* x8_191 = data_13e3a80
    
    if (x8_191 == 0)
    label_a0189c:
        result, x8_191 = printf("Couldn't lookup %d\n", 0x1021)
    else
        while (*x8_191 != 0x1021)
            x8_191 = *(x8_191 + 0x1b8)
            
            if (x8_191 == 0)
                goto label_a0189c
    
    x8_191[1] = 0x101e
    int32_t* x8_192 = data_13e3a88
    
    if (x8_192 == 0)
    label_a018d8:
        result, x8_192 = printf("Couldn't lookup %d\n", 0x1022)
    else
        while (*x8_192 != 0x1022)
            x8_192 = *(x8_192 + 0x1b8)
            
            if (x8_192 == 0)
                goto label_a018d8
    
    x8_192[1] = 0x101e
    int32_t* x8_193 = data_13e3a98
    
    if (x8_193 == 0)
    label_a01914:
        result, x8_193 = printf("Couldn't lookup %d\n", 0x1024)
    else
        while (*x8_193 != 0x1024)
            x8_193 = *(x8_193 + 0x1b8)
            
            if (x8_193 == 0)
                goto label_a01914
    
    x8_193[1] = 0x1023
    int32_t* x8_194 = data_13e3aa0
    
    if (x8_194 == 0)
    label_a01950:
        result, x8_194 = printf("Couldn't lookup %d\n", 0x1025)
    else
        while (*x8_194 != 0x1025)
            x8_194 = *(x8_194 + 0x1b8)
            
            if (x8_194 == 0)
                goto label_a01950
    
    x8_194[1] = 0x1023
    int32_t* x8_195 = data_13e3aa8
    
    if (x8_195 == 0)
    label_a0198c:
        result, x8_195 = printf("Couldn't lookup %d\n", 0x1026)
    else
        while (*x8_195 != 0x1026)
            x8_195 = *(x8_195 + 0x1b8)
            
            if (x8_195 == 0)
                goto label_a0198c
    
    x8_195[1] = 0x1023
    int32_t* x8_196 = data_13e3ab0
    
    if (x8_196 == 0)
    label_a019c8:
        result, x8_196 = printf("Couldn't lookup %d\n", 0x1027)
    else
        while (*x8_196 != 0x1027)
            x8_196 = *(x8_196 + 0x1b8)
            
            if (x8_196 == 0)
                goto label_a019c8
    
    x8_196[1] = 0x1023
    int32_t* x8_197 = data_13e3ac0
    
    if (x8_197 == 0)
    label_a01a04:
        result, x8_197 = printf("Couldn't lookup %d\n", 0x1029)
    else
        while (*x8_197 != 0x1029)
            x8_197 = *(x8_197 + 0x1b8)
            
            if (x8_197 == 0)
                goto label_a01a04
    
    x8_197[1] = 0x1028
    int32_t* x8_198 = data_13e3ac8
    
    if (x8_198 == 0)
    label_a01a40:
        result, x8_198 = printf("Couldn't lookup %d\n", 0x102a)
    else
        while (*x8_198 != 0x102a)
            x8_198 = *(x8_198 + 0x1b8)
            
            if (x8_198 == 0)
                goto label_a01a40
    
    x8_198[1] = 0x1028
    int32_t* x8_199 = data_13e3ad0
    
    if (x8_199 == 0)
    label_a01a7c:
        result, x8_199 = printf("Couldn't lookup %d\n", 0x102b)
    else
        while (*x8_199 != 0x102b)
            x8_199 = *(x8_199 + 0x1b8)
            
            if (x8_199 == 0)
                goto label_a01a7c
    
    x8_199[1] = 0x1028
    int32_t* x8_200 = data_13e3ad8
    
    if (x8_200 == 0)
    label_a01ab8:
        result, x8_200 = printf("Couldn't lookup %d\n", 0x102c)
    else
        while (*x8_200 != 0x102c)
            x8_200 = *(x8_200 + 0x1b8)
            
            if (x8_200 == 0)
                goto label_a01ab8
    
    x8_200[1] = 0x1028
    int32_t* x8_201 = data_13e3ae8
    
    if (x8_201 == 0)
    label_a01af4:
        result, x8_201 = printf("Couldn't lookup %d\n", 0x102e)
    else
        while (*x8_201 != 0x102e)
            x8_201 = *(x8_201 + 0x1b8)
            
            if (x8_201 == 0)
                goto label_a01af4
    
    x8_201[1] = 0x102d
    int32_t* x8_202 = data_13e3af0
    
    if (x8_202 == 0)
    label_a01b30:
        result, x8_202 = printf("Couldn't lookup %d\n", 0x102f)
    else
        while (*x8_202 != 0x102f)
            x8_202 = *(x8_202 + 0x1b8)
            
            if (x8_202 == 0)
                goto label_a01b30
    
    x8_202[1] = 0x102d
    int32_t* x8_203 = data_13e3af8
    
    if (x8_203 == 0)
    label_a01b6c:
        result, x8_203 = printf("Couldn't lookup %d\n", 0x1030)
    else
        while (*x8_203 != 0x1030)
            x8_203 = *(x8_203 + 0x1b8)
            
            if (x8_203 == 0)
                goto label_a01b6c
    
    x8_203[1] = 0x102d
    int32_t* x8_204 = data_13e3b00
    
    if (x8_204 == 0)
    label_a01ba8:
        result, x8_204 = printf("Couldn't lookup %d\n", 0x1031)
    else
        while (*x8_204 != 0x1031)
            x8_204 = *(x8_204 + 0x1b8)
            
            if (x8_204 == 0)
                goto label_a01ba8
    
    x8_204[1] = 0x102d
    int32_t* x8_205 = data_13e3b10
    
    if (x8_205 == 0)
    label_a01be4:
        result, x8_205 = printf("Couldn't lookup %d\n", 0x1033)
    else
        while (*x8_205 != 0x1033)
            x8_205 = *(x8_205 + 0x1b8)
            
            if (x8_205 == 0)
                goto label_a01be4
    
    x8_205[1] = 0x1032
    int32_t* x8_206 = data_13e3b18
    
    if (x8_206 == 0)
    label_a01c20:
        result, x8_206 = printf("Couldn't lookup %d\n", 0x1034)
    else
        while (*x8_206 != 0x1034)
            x8_206 = *(x8_206 + 0x1b8)
            
            if (x8_206 == 0)
                goto label_a01c20
    
    x8_206[1] = 0x1032
    int32_t* x8_207 = data_13e3b20
    
    if (x8_207 == 0)
    label_a01c5c:
        result, x8_207 = printf("Couldn't lookup %d\n", 0x1035)
    else
        while (*x8_207 != 0x1035)
            x8_207 = *(x8_207 + 0x1b8)
            
            if (x8_207 == 0)
                goto label_a01c5c
    
    x8_207[1] = 0x1032
    int32_t* x8_208 = data_13e3b28
    
    if (x8_208 == 0)
    label_a01c98:
        result, x8_208 = printf("Couldn't lookup %d\n", 0x1036)
    else
        while (*x8_208 != 0x1036)
            x8_208 = *(x8_208 + 0x1b8)
            
            if (x8_208 == 0)
                goto label_a01c98
    
    x8_208[1] = 0x1032

return result
