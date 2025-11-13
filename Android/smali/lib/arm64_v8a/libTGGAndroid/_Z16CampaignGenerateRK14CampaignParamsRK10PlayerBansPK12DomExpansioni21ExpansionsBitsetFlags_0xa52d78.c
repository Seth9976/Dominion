// 函数: _Z16CampaignGenerateRK14CampaignParamsRK10PlayerBansPK12DomExpansioni21ExpansionsBitsetFlags
// 地址: 0xa52d78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomExpansion const* x23 = arg3
int32_t i_4 = arg4
memset(gCampaignSetup, 0, 0x5c58)
int64_t* entry_x8
memset(entry_x8 + 0xc, 0, 0x5014)
int32_t x9 = *(arg1 + 8)
*entry_x8 = *arg1
entry_x8[1].d = x9
int64_t x0_3
int64_t x1
x0_3, x1 = RandomPCGSet(sx.q(*(arg1 + 8)), 0x3e8)
*gCampaignSetup = x0_3
*(gCampaignSetup + 8) = x1
*(gCampaignSetup + 0x19a0) = entry_x8
int32_t i = RollBlueprint(arg1)
*(entry_x8 + 0x500c) = i
int64_t* x8_3 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(i) | zx.q(i s>> 4))) << 3)
int32_t* x9_2

do
    x9_2 = *x8_3
    x8_3 = &x9_2[4]
while (*x9_2 != i)

void* x8_5 = *(x9_2 + 8)
void* var_c8
int32_t x19_1
int64_t x9_4

if (*(x8_5 + 0x18) != 3)
    if (*(x8_5 + 0x288) == 3)
        x9_4 = 1
        goto label_a52e90
    
    if (*(x8_5 + 0x4f8) == 3)
        x9_4 = 2
        goto label_a52e90
    
    if (*(x8_5 + 0x768) == 3)
        x9_4 = 3
        goto label_a52e90
    
    x19_1 = 0
else
    x9_4 = 0
label_a52e90:
    void* x8_6 = x8_5 + x9_4 * 0x270
    x19_1 = *(x8_6 + 0x280)
    var_c8 = x8_6 + 0x20
int64_t result = memset(gCampaignSetup + 0x10, 0, 0x1990)

if (*arg1 == 1)
    result = memcpy(gCampaignSetup + 0xc14, arg2, sx.q(*(arg2 + 0xaf0)) << 2)

int32_t i_5

if (*arg1 != 1 || *arg1 != 1)
    *(gCampaignSetup + 0x9e0) = 0xa00000000
    *(gCampaignSetup + 0x9d8) = -0xfffffffe
    *(gCampaignSetup + 0x9e8) = *(arg1 + 4)
    i_5 = 0xffffffff
    *(gCampaignSetup + 0x9ec) = 0xffffffff
    *(gCampaignSetup + 0x9f0) = 0xa00000000
    
    if (x19_1 s>= 1)
    label_a52f9c:
        int64_t i_1 = 0
        
        do
            RandomizerDeck_Clear(gCampaignSetup + 0x19b8)
            int64_t x8_25 = *(gCampaignSetup + 0x19a0)
            *(gCampaignSetup + 0x19a8) = i_1.d
            void* x0_17 = PregameContextPush(gCampaignSetup + 0x10, x8_25 + (i_1 << 0xb) + 0xc, 
                0x17, gCampaignSetup)
            memset(gCampaignSetup + 0x19b8, 0, 0x3e90)
            RandomizerDeck_Generate(gCampaignSetup + 0x19b8, gCampaignSetup + 0x10, 
                x8_25 + (i_1 << 0xb) + 0xc, 0x17, 3)
            *(x0_17 + 0x18) = gCampaignSetup + 0x19b8
            void* x8_27 = *(gCampaignSetup + 0x19a0)
            
            if (*(x8_27 + 0x5010) == 0x3e8)
                RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(*(x8_27 + 0x5014)))
                x8_27 = *(gCampaignSetup + 0x19a0)
            
            if (*(x8_27 + 0x5018) == 0x3e8)
                RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(*(x8_27 + 0x501c)))
            
            if (i_5 != 0xffffffff)
                *(gCampaignSetup + (sx.q(i_5) << 4) + 0x9d8) = 0
            
            int32_t j = *(var_c8 + (i_1 << 2))
            int64_t* x9_16 =
                *gCampaignData + (((zx.q(j) | zx.q(j s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
            int32_t* x10_5
            
            do
                x10_5 = *x9_16
                x9_16 = &x10_5[4]
            while (*x10_5 != j)
            
            void* x8_32 = *(x10_5 + 8)
            int32_t x25_3
            int64_t x9_19
            
            if (*(x8_32 + 0x18) != 3)
                if (*(x8_32 + 0x288) == 3)
                    x9_19 = 1
                    goto label_a531a0
                
                if (*(x8_32 + 0x4f8) == 3)
                    x9_19 = 2
                    goto label_a531a0
                
                if (*(x8_32 + 0x768) == 3)
                    x9_19 = 3
                    goto label_a531a0
                
                x25_3 = 0
                
                if (*arg1 == 0)
                    goto label_a531cc
            else
                x9_19 = 0
            label_a531a0:
                void* x8_33 = x8_32 + x9_19 * 0x270
                x25_3 = *(x8_33 + 0x280)
                x23 = x8_33 + 0x20
                
                if (*arg1 == 0)
                label_a531cc:
                    int64_t x8_38 = *(sx.q(*(arg1 + 4)) * 0xa8 + 0x1135118)
                    
                    if (x8_38 != 0)
                        x8_38()
            
            if (x25_3 s>= 1)
                int64_t j_1 = 0
                
                do
                    int32_t k = *(x23 + (j_1 << 2))
                    int64_t* x9_26 = *gCampaignData
                        + (((zx.q(k) | zx.q(k s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
                    int32_t* x10_7
                    
                    do
                        x10_7 = *x9_26
                        x9_26 = &x10_7[4]
                    while (*x10_7 != k)
                    
                    void* x8_41 = *(x10_7 + 8)
                    int64_t x9_23
                    
                    if (*(x8_41 + 0x18) == 1)
                        x9_23 = 0
                    else if (*(x8_41 + 0x288) == 1)
                        x9_23 = 1
                    else if (*(x8_41 + 0x4f8) != 1)
                        if (*(x8_41 + 0x768) != 1)
                            pthread_kill(pthread_self(), 6)
                            uint64_t x0_47
                            DomExpansion* x1_10
                            x0_47, x1_10 = XNoReturn()
                            return ToCampaignExpansionsFromDisabled(x0_47, x1_10) __tailcall
                        
                        x9_23 = 3
                    else
                        x9_23 = 2
                    
                    (*(x8_41 + x9_23 * 0x270 + 0x20))()
                    j_1 += 1
                while (j_1 != zx.q(x25_3))
            
            int32_t x8_42 = *(gCampaignSetup + 0x5c50)
            
            if (x8_42 s>= 1)
                int64_t j_2 = 0
                int64_t (* x25_5)() = gCampaignSetup + 0x5964
                
                do
                    if (*(x25_5 - 0xc) == 0 && zx.d(*(x25_5 - 4)) == 0)
                        int32_t fp_2 = *(gCampaignSetup + 0x5c54)
                        int32_t x19_4 = *(gCampaignSetup + 0x19b4)
                        *(gCampaignSetup + 0x5c54) = *x25_5
                        *(gCampaignSetup + 0x19b4) = *(x25_5 - 8)
                        (*(x25_5 - 0x14))()
                        *(gCampaignSetup + 0x5c54) = fp_2
                        *(gCampaignSetup + 0x19b4) = x19_4
                        *(x25_5 - 4) = 1
                        x8_42 = *(gCampaignSetup + 0x5c50)
                    
                    j_2 += 1
                    x25_5 += 0x18
                while (j_2 s< sx.q(x8_42))
                
                if (x8_42 s>= 1)
                    int64_t j_3 = 0
                    int64_t (* x25_6)() = gCampaignSetup + 0x5964
                    
                    do
                        if (*(x25_6 - 0xc) == 1 && zx.d(*(x25_6 - 4)) == 0)
                            int32_t x19_5 = *(gCampaignSetup + 0x5c54)
                            int32_t fp_3 = *(gCampaignSetup + 0x19b4)
                            *(gCampaignSetup + 0x5c54) = *x25_6
                            *(gCampaignSetup + 0x19b4) = *(x25_6 - 8)
                            (*(x25_6 - 0x14))()
                            *(gCampaignSetup + 0x5c54) = x19_5
                            *(gCampaignSetup + 0x19b4) = fp_3
                            *(x25_6 - 4) = 1
                            x8_42 = *(gCampaignSetup + 0x5c50)
                        
                        j_3 += 1
                        x25_6 += 0x18
                    while (j_3 s< sx.q(x8_42))
                    
                    if (x8_42 s>= 1)
                        int64_t j_4 = 0
                        int64_t (* x25_7)() = gCampaignSetup + 0x5964
                        
                        do
                            if (*(x25_7 - 0xc) == 0 && zx.d(*(x25_7 - 4)) == 0)
                                int32_t x19_6 = *(gCampaignSetup + 0x5c54)
                                int32_t fp_4 = *(gCampaignSetup + 0x19b4)
                                *(gCampaignSetup + 0x5c54) = *x25_7
                                *(gCampaignSetup + 0x19b4) = *(x25_7 - 8)
                                (*(x25_7 - 0x14))()
                                *(gCampaignSetup + 0x5c54) = x19_6
                                *(gCampaignSetup + 0x19b4) = fp_4
                                *(x25_7 - 4) = 1
                                x8_42 = *(gCampaignSetup + 0x5c50)
                            
                            j_4 += 1
                            x25_7 += 0x18
                        while (j_4 s< sx.q(x8_42))
                        
                        if (x8_42 s>= 1)
                            int64_t j_5 = 0
                            int64_t (* x25_8)() = gCampaignSetup + 0x5964
                            
                            do
                                if (*(x25_8 - 0xc) == 2 && zx.d(*(x25_8 - 4)) == 0)
                                    int32_t x19_7 = *(gCampaignSetup + 0x5c54)
                                    int32_t fp_5 = *(gCampaignSetup + 0x19b4)
                                    *(gCampaignSetup + 0x5c54) = *x25_8
                                    *(gCampaignSetup + 0x19b4) = *(x25_8 - 8)
                                    (*(x25_8 - 0x14))()
                                    *(gCampaignSetup + 0x5c54) = x19_7
                                    *(gCampaignSetup + 0x19b4) = fp_5
                                    *(x25_8 - 4) = 1
                                    x8_42 = *(gCampaignSetup + 0x5c50)
                                
                                j_5 += 1
                                x25_8 += 0x18
                            while (j_5 s< sx.q(x8_42))
                            
                            if (x8_42 s>= 1)
                                int64_t j_6 = 0
                                int64_t (* x25_9)() = gCampaignSetup + 0x5964
                                
                                do
                                    if (*(x25_9 - 0xc) == 3 && zx.d(*(x25_9 - 4)) == 0)
                                        int32_t x19_8 = *(gCampaignSetup + 0x5c54)
                                        int32_t fp_6 = *(gCampaignSetup + 0x19b4)
                                        *(gCampaignSetup + 0x5c54) = *x25_9
                                        *(gCampaignSetup + 0x19b4) = *(x25_9 - 8)
                                        (*(x25_9 - 0x14))()
                                        *(gCampaignSetup + 0x5c54) = x19_8
                                        *(gCampaignSetup + 0x19b4) = fp_6
                                        *(x25_9 - 4) = 1
                                        x8_42 = *(gCampaignSetup + 0x5c50)
                                    
                                    j_6 += 1
                                    x25_9 += 0x18
                                while (j_6 s< sx.q(x8_42))
            
            RollKingdom_AddRandomCards(gCampaignSetup + 0x10)
            int32_t x24_3 = *(x8_25 + (i_1 << 0xb) + 0x34)
            int32_t j_9
            
            if (x24_3 == 0)
                j_9 = 2
            label_a5367c:
                int32_t j_7
                
                do
                    if (RandomInt(gCampaignSetup, 2) == 0)
                        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignGenerate(CampaignParams const&, PlayerBans const&, DomExpansion const*, int32_t, ExpansionsBitsetFlags)::$_135, std::__ndk1::allocator<CampaignGenerate(CampaignParams const&, PlayerBans const&, DomExpansion const*, int32_t, ExpansionsBitsetFlags)::$_135>, bool (DomCardEnum)>::VTable
                            * const var_a0 = &_vtable_for_std::__ndk1::__function::__func<CampaignGenerate(CampaignParams const&, PlayerBans const&, DomExpansion const*, int32_t, ExpansionsBitsetFlags)::$_135, std::__ndk1::allocator<CampaignGenerate(CampaignParams const&, PlayerBans const&, DomExpansion const*, int32_t, ExpansionsBitsetFlags)::$_135>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
                        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignGenerate(CampaignParams const&, PlayerBans const&, DomExpansion const*, int32_t, ExpansionsBitsetFlags)::$_135, std::__ndk1::allocator<CampaignGenerate(CampaignParams const&, PlayerBans const&, DomExpansion const*, int32_t, ExpansionsBitsetFlags)::$_135>, bool (DomCardEnum)>::VTable
                            * const* var_80_1 = &var_a0
                        int32_t x0_43
                        char* x1_9
                        x0_43, x1_9 =
                            RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_a0, 0)
                        
                        if (&var_a0 == var_80_1)
                            x1_9 = (*var_80_1)->vFunc_4(var_80_1)
                        else if (var_80_1 != 0)
                            x1_9 = (*var_80_1)->j_operator delete(var_80_1)
                        
                        if (x0_43 == 0)
                            break
                        
                        CampaignKingdomAdd(zx.q(x0_43), x1_9, 4, 0)
                    
                    j_7 = j_9
                    j_9 -= 1
                while (j_7 != 1)
            else
                int32_t x24_4
                
                if ((PregameCardIs(zx.q(x24_3), 0x4000000000) & 1) == 0)
                    if ((PregameCardIs(zx.q(x24_3), 0x80000000000) & 1) != 0)
                        j_9 = 2
                    else
                        j_9 = 1
                    
                    x24_4 = *(x8_25 + (i_1 << 0xb) + 0x70)
                    
                    if (x24_4 == 0)
                        goto label_a5367c
                else
                    j_9 = 2
                    x24_4 = *(x8_25 + (i_1 << 0xb) + 0x70)
                    
                    if (x24_4 == 0)
                        goto label_a5367c
                
                if ((PregameCardIs(zx.q(x24_4), 0x4000000000) & 1) == 0)
                    j_9 -= not.d(PregameCardIs(zx.q(x24_4), 0x80000000000)) & 1
                
                int32_t x24_5 = *(x8_25 + (i_1 << 0xb) + 0xac)
                
                if (x24_5 != 0)
                    if ((PregameCardIs(zx.q(x24_5), 0x4000000000) & 1) == 0)
                        j_9 -= not.d(PregameCardIs(zx.q(x24_5), 0x80000000000)) & 1
                    
                    int32_t x24_6 = *(x8_25 + (i_1 << 0xb) + 0xe8)
                    
                    if (x24_6 != 0 && (PregameCardIs(zx.q(x24_6), 0x4000000000) & 1) == 0)
                        j_9 -= not.d(PregameCardIs(zx.q(x24_6), 0x80000000000)) & 1
                
                if (j_9 s>= 1)
                    goto label_a5367c
            RollKingdom_DeferredSetup()
            RollKingdom_LandscapeTargetSetup(x8_25 + (i_1 << 0xb) + 0xc)
            RollKingdom_ColoniesShelters()
            int32_t x8_74 = *(gCampaignSetup + 0x5c50)
            
            if (x8_74 s>= 1)
                int64_t j_8 = 0
                int64_t (* x25_10)() = gCampaignSetup + 0x5964
                
                do
                    if (*(x25_10 - 0xc) == 4 && zx.d(*(x25_10 - 4)) == 0)
                        int32_t x19_9 = *(gCampaignSetup + 0x5c54)
                        int32_t fp_7 = *(gCampaignSetup + 0x19b4)
                        *(gCampaignSetup + 0x5c54) = *x25_10
                        *(gCampaignSetup + 0x19b4) = *(x25_10 - 8)
                        (*(x25_10 - 0x14))()
                        *(gCampaignSetup + 0x5c54) = x19_9
                        *(gCampaignSetup + 0x19b4) = fp_7
                        *(x25_10 - 4) = 1
                        x8_74 = *(gCampaignSetup + 0x5c50)
                    
                    j_8 += 1
                    x25_10 += 0x18
                while (j_8 s< sx.q(x8_74))
            
            *(gCampaignSetup + 0x5c50) = 0
            RandomizerDeck_ReturnRejects(gCampaignSetup + 0x19b8)
            void* x19_2 = x8_25 + (i_1 << 0xb)
            int32_t var_64
            int32_t x0_11 = DomCardExp(
                zx.q(*(x19_2 + 0xc + (sx.q(RandomInt(gCampaignSetup, 0xa)) << 2))), &var_64)
            *(x19_2 + 0x328) |= (x0_11 == 6 ? 1 : 0).b
            result = DomCardExp(zx.q(*(x19_2 + 0xc + (sx.q(RandomInt(gCampaignSetup, 0xa)) << 2))), 
                &var_64)
            i_1 += 1
            *(x19_2 + 0x329) |= (result.d == 9 ? 1 : 0).b
        while (i_1 != zx.q(x19_1))
else
    if (i_4 s< 1)
        i_4 = 0
    else
        int64_t (* x8_11)() = gCampaignSetup + 0x9e0
        uint64_t i_3 = zx.q(i_4)
        uint64_t i_2
        
        do
            *(x8_11 - 8) = *x23
            int32_t x11_2 = *x23
            x23 += 4
            *x8_11 = 0xa00000000
            int32_t x11_3
            
            x11_3 = x11_2 == 0x13 ? arg5 : -1
            
            i_2 = i_3
            i_3 -= 1
            *(x8_11 - 4) = x11_3
            x8_11 += 0x10
        while (i_2 != 1)
    
    void* x8_14 = gCampaignSetup + (zx.q(i_4) << 4)
    i_5 = i_4
    *(x8_14 + 0x9d8) = -0xfffffffe
    *(x8_14 + 0x9e0) = 0xa00000000
    
    if (x19_1 s>= 1)
        goto label_a52f9c
return result
