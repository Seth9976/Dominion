// 函数: _Z37Bell_ImbalancedStart_AttackVsSameCostv
// 地址: 0xa35e5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_150
uint64_t x20 = zx.q(CampaignKingdomCardsForImbalancedStart(&var_150))
int64_t* x0_2
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
x0_2, v0, v1, v2, v3, v4, v5 = operator new(0x110)
x0_2[1].d = x20.d
*(x0_2 + 0xc) = var_150
int128_t var_120
*(x0_2 + 0x3c) = var_120
int128_t var_130
*(x0_2 + 0x2c) = var_130
int128_t var_140
*(x0_2 + 0x1c) = var_140
int128_t var_e0
*(x0_2 + 0x7c) = var_e0
int128_t var_f0
*(x0_2 + 0x6c) = var_f0
int128_t var_110
*(x0_2 + 0x4c) = var_110
int128_t var_100
*(x0_2 + 0x5c) = var_100
int128_t var_d0
*(x0_2 + 0x8c) = var_d0
int128_t var_a0
*(x0_2 + 0xbc) = var_a0
int128_t var_b0
*(x0_2 + 0xac) = var_b0
int128_t var_c0
*(x0_2 + 0x9c) = var_c0
int64_t* var_160 = x0_2
*x0_2 = &_vtable_for_std::__ndk1::__function::__func<Bell_ImbalancedStart_AttackVsSameCost()::$_39, std::__ndk1::allocator<Bell_ImbalancedStart_AttackVsSameCost()::$_39>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int128_t var_90
*(x0_2 + 0xcc) = var_90
int128_t var_60
*(x0_2 + 0xfc) = var_60
int128_t var_70
*(x0_2 + 0xec) = var_70
int128_t var_80
*(x0_2 + 0xdc) = var_80
void var_180
int32_t x19 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_180, 0)
(*(*x0_2 + 0x28))(x0_2)
int64_t x2_1
int32_t x20_1
int32_t x21_2
int32_t x8_5

if (x19 == 0)
    if (*(*(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x30) != 0)
        return XTrace("No attack/interact of same cost, no room to add")
    
    if (*(gCampaignSetup + 0x2638) s< 1)
    label_a3643c:
        RandomInt(gCampaignSetup, 0)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return Bell_ExoticStart_SpiritOrZombie_Test() __tailcall
    
    int64_t x20_2 = 0
    int32_t i_14 = 0
    void var_300
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    int128_t v4_1
    int128_t v5_1
    bool cond:1_1
    
    do
        int32_t i_1 = *(gCampaignSetup + (x20_2 << 2) + 0x19b8)
        void* x0_14
        x0_14, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1 = DomDefGet(zx.q(i_1), 0x17)
        int32_t* i_8 = *(*(gCampaignData + 0x50)
            + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(i_1) | zx.q(i_1 s>> 4))) << 3))
        int32_t i_3
        
        if (i_8 != 0)
            int32_t* i = i_8
            
            do
                if (*i == i_1)
                    uint64_t x9_5 = zx.q(i[4])
                    
                    if (x9_5.d s< 1)
                        goto label_a36124
                    
                    int32_t* x11_1 = *(i + 8)
                    
                    if (*x11_1 == 6)
                        goto label_a361a0
                    
                    int64_t x10_4 = 0
                    int32_t j
                    
                    do
                        if (x9_5 - 1 == x10_4)
                            goto label_a36124
                        
                        j = x11_1[1 + x10_4]
                        x10_4 += 1
                    while (j != 6)
                    
                    if (x10_4 u< x9_5)
                        goto label_a361a0
                    
                    goto label_a36124
                
                i = *(i + 0x18)
            while (i != 0)
            
        label_a36124:
            
            while (*i_8 != i_1)
                i_8 = *(i_8 + 0x18)
                
                if (i_8 == 0)
                    goto label_a36138
            
            uint64_t x9_9 = zx.q(i_8[4])
            
            if (x9_9.d s< 1)
                i_8 = nullptr
                i_3 = *(x0_14 + 0xc4) & 0xffff01ff
                
                if (i_14 s>= 1)
                    goto label_a36140
                
                goto label_a36160
            
            int32_t* x10_5 = *(i_8 + 8)
            
            if (*x10_5 == 0x15)
            label_a361a0:
                i_8 = 1
                i_3 = *(x0_14 + 0xc4) & 0xffff01ff
                
                if (i_14 s>= 1)
                    goto label_a36140
                
                goto label_a36160
            
            uint64_t x8_18 = 0
            int32_t i_2
            
            do
                if (x9_9 - 1 == x8_18)
                    x8_18 = x9_9
                    break
                
                i_2 = x10_5[1 + x8_18]
                x8_18 += 1
            while (i_2 != 0x15)
            i_8 = zx.q(x8_18 u< x9_9 ? 1 : 0)
            i_3 = *(x0_14 + 0xc4) & 0xffff01ff
            
            if (i_14 s>= 1)
                goto label_a36140
            
            goto label_a36160
        
    label_a36138:
        i_3 = *(x0_14 + 0xc4) & 0xffff01ff
        void* x9_8
        
        if (i_14 s< 1)
        label_a36160:
            x9_8 = &var_300 + muls.dp.d(i_14, 0xc)
            i_14 += 1
            *(x9_8 + 4) = 0
            *(x9_8 + 8) = 0
            *x9_8 = i_3
        else
        label_a36140:
            uint64_t i_15 = zx.q(i_14)
            x9_8 = &var_300
            
            while (*x9_8 != i_3)
                uint64_t i_16 = i_15
                i_15 -= 1
                x9_8 += 0xc
                
                if (i_16 == 1)
                    goto label_a36160
        
        if (i_8.d != 0)
            *(x9_8 + 4) += 1
        
        x20_2 += 1
        cond:1_1 = x20_2 s>= sx.q(*(gCampaignSetup + 0x2638))
        *(x9_8 + 8) += 1
    while (not(cond:1_1))
    
    if (i_14 s< 1)
        goto label_a3643c
    
    int32_t x8_19 = 0
    uint64_t i_11 = zx.q(i_14)
    int32_t* x10_7 = &var_300 | 4
    int32_t var_400[0x8]
    uint64_t i_4
    
    do
        int32_t x12_3 = *x10_7
        
        if (x12_3 != 0)
            int32_t x13_1 = x10_7[1]
            
            if (x13_1 != 1)
                int32_t x15_1 = x10_7[-1]
                void* x14_1 = &var_400[sx.q(x8_19) * 2]
                x8_19 += 1
                *x14_1 = (x13_1 - 1) * x12_3
                *(x14_1 + 4) = x15_1
        
        i_4 = i_11
        i_11 -= 1
        x10_7 = &x10_7[3]
    while (i_4 != 1)
    
    if (x8_19 s<= 0)
        goto label_a3643c
    
    uint64_t x19_1 = zx.q(x8_19)
    int32_t x1_4
    int64_t i_13
    
    if (x8_19 u> 8)
        int64_t x8_21
        
        if ((x19_1 & 7) == 0)
            x8_21 = 8
        else
            x8_21 = x19_1 & 7
        
        i_13 = x19_1 - x8_21
        v0_1.q = 0
        v0_1:8.q = 0
        void var_3e0
        void* x9_13 = &var_3e0
        int64_t i_12 = i_13
        v1_1.q = 0
        v1_1:8.q = 0
        int64_t i_5
        
        do
            v2_1.d = *x9_13
            v3_1.d = *(x9_13 + 4)
            v2_1:4.d = *(x9_13 + 8)
            v3_1:4.d = *(x9_13 + 0xc)
            v2_1:8.d = *(x9_13 + 0x10)
            v3_1:8.d = *(x9_13 + 0x14)
            v2_1:0xc.d = *(x9_13 + 0x18)
            v3_1:0xc.d = *(x9_13 + 0x1c)
            v4_1.d = *(x9_13 - 0x20)
            v5_1.d = *(x9_13 - 0x1c)
            v4_1:4.d = *(x9_13 - 0x18)
            v5_1:4.d = *(x9_13 - 0x14)
            v4_1:8.d = *(x9_13 - 0x10)
            v5_1:8.d = *(x9_13 - 0xc)
            v4_1:0xc.d = *(x9_13 - 8)
            v5_1:0xc.d = *(x9_13 - 4)
            i_5 = i_12
            i_12 -= 8
            x9_13 += 0x40
            v1_1 += v2_1
            v0_1 += v4_1
        while (i_5 != 8)
        uint128_t v0_2
        v0_2.d = vaddvq_u32(v1_1 + v0_1)
        x1_4 = v0_2.d
    else
        i_13 = 0
        x1_4 = 0
    
    void* x9_14 = &var_400[i_13 * 2]
    int64_t i_9 = x19_1 - i_13
    int64_t i_6
    
    do
        int32_t x10_8 = *x9_14
        x9_14 += 8
        i_6 = i_9
        i_9 -= 1
        x1_4 += x10_8
    while (i_6 != 1)
    int32_t x0_16 = RandomInt(gCampaignSetup, x1_4)
    int64_t x8_22 = 0
    int32_t x9_15 = 0
    int32_t (* x10_9)[0x8] = &var_400
    
    while (true)
        x9_15 += *x10_9
        
        if (x0_16 s< x9_15)
            break
        
        x8_22 += 1
        x10_9 = &(*x10_9)[2]
        
        if (x19_1 == x8_22)
            pthread_kill(pthread_self(), 6)
            x8_22 = XNoReturn()
            break
    
    int32_t x21_3 = var_400[zx.q(x8_22.d) * 2 + 1]
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Bell_ImbalancedStart_AttackVsSameCost()::$_40, std::__ndk1::allocator<Bell_ImbalancedStart_AttackVsSameCost()::$_40>, bool (DomCardEnum)>::VTable
        * const var_430 = &_vtable_for_std::__ndk1::__function::__func<Bell_ImbalancedStart_AttackVsSameCost()::$_40, std::__ndk1::allocator<Bell_ImbalancedStart_AttackVsSameCost()::$_40>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Bell_ImbalancedStart_AttackVsSameCost()::$_40, std::__ndk1::allocator<Bell_ImbalancedStart_AttackVsSameCost()::$_40>, bool (DomCardEnum)>::VTable
        * const* var_410_1 = &var_430
    int32_t var_428_1 = x21_3
    x19 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_430, 0)
    
    if (&var_430 == var_410_1)
        (*var_410_1)->vFunc_4(var_410_1)
    else if (var_410_1 != 0)
        (*var_410_1)->j_operator delete(var_410_1)
    
    int32_t var_458_1 = x21_3
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Bell_ImbalancedStart_AttackVsSameCost()::$_41, std::__ndk1::allocator<Bell_ImbalancedStart_AttackVsSameCost()::$_41>, bool (DomCardEnum)>::VTable
        * const var_460 = &_vtable_for_std::__ndk1::__function::__func<Bell_ImbalancedStart_AttackVsSameCost()::$_41, std::__ndk1::allocator<Bell_ImbalancedStart_AttackVsSameCost()::$_41>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
    struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Bell_ImbalancedStart_AttackVsSameCost()::$_41, std::__ndk1::allocator<Bell_ImbalancedStart_AttackVsSameCost()::$_41>, bool (DomCardEnum)>::VTable
        * const* var_440_1 = &var_460
    int32_t x0_22
    char* x1_7
    x0_22, x1_7 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_460, 0)
    x20_1 = x0_22
    
    if (&var_460 == var_440_1)
        x1_7 = (*var_440_1)->vFunc_4(var_440_1)
    else if (var_440_1 != 0)
        x1_7 = (*var_440_1)->j_operator delete(var_440_1)
    
    CampaignKingdomAdd(zx.q(x20_1), x1_7, 4, 0)
    x8_5 = *(gCampaignSetup + 0x19a8)
    
    if (x8_5 != 9 && x8_5 != 4)
        x2_1 = 0
        x21_2 = 1
    else
        x21_2 = 0
        x2_1 = 1
else
    if (x20.d s>= 1)
        int32_t i_7 = 0
        
        do
            void* x0_7 = DomDefGet(zx.q(*(&var_150 + (sx.q(i_7) << 2))), 0x17)
            void* x0_9 = DomDefGet(zx.q(x19), 0x17)
            
            if (*(x0_7 + 0xc4) != *(x0_9 + 0xc4))
                x20 = sx.q(x20.d) - 1
                int64_t i_10 = sx.q(i_7)
                i_7 -= 1
                *(&var_150 + (i_10 << 2)) = *(&var_150 + (x20 << 2))
            
            i_7 += 1
        while (i_7 s< x20.d)
    
    x20_1 = *(&var_150 + (sx.q(RandomInt(gCampaignSetup, x20.d)) << 2))
    x8_5 = *(gCampaignSetup + 0x19a8)
    
    if (x8_5 == 9 || x8_5 == 4)
        x21_2 = 0
        x2_1 = 1
    else
        x2_1 = 0
        x21_2 = 1
CampaignAddExtra(0xdb1, zx.q(x20_1), x2_1, 0, 0)
return CampaignAddExtra(0xdb1, zx.q(x19), zx.q(x21_2), 0, 0)
