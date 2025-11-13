// 函数: _Z18CampaignKingdomAdd11DomCardEnumPKci23CampaignMissionPileFlag
// 地址: 0xa2e45c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d != 0)
    int32_t x19_1 = arg4
    int32_t x20_1 = arg1.d
    void* x0 = PregameContextGet()
    int32_t x0_2 = IsLandscape(zx.q(x20_1))
    int64_t x24_1 = *(gCampaignSetup + 0x19a0)
    
    if ((x0_2 & 1) == 0)
        int64_t x22_2 = sx.q(*(gCampaignSetup + 0x19a8))
        int32_t* x23_2 = x24_1 + (x22_2 << 0xb) + 0xc
        int32_t x8_2 = *x23_2
        
        if (x8_2 != x20_1)
            int64_t x25_2
            
            if (x8_2 == 0)
                x25_2 = 0
            label_a2ea1c:
                *x23_2 = x20_1
                
                if ((RollKingdom_SetupPile(zx.q(x20_1), 0) & 1) == 0)
                    *x23_2 = 0
                else
                    *x23_2 = x20_1
                    *(x24_1 + (x22_2 << 0xb) + (x25_2 << 2) + 0x554) = x19_1
                    *(x0 + 4) += 1
            else
                x23_2 = x24_1 + (x22_2 << 0xb) + 0x10
                int32_t x8_3 = *x23_2
                
                if (x8_3 != x20_1)
                    if (x8_3 == 0)
                        x25_2 = 1
                        goto label_a2ea1c
                    
                    x23_2 = x24_1 + (x22_2 << 0xb) + 0x14
                    int32_t x8_4 = *x23_2
                    
                    if (x8_4 != x20_1)
                        if (x8_4 == 0)
                            x25_2 = 2
                            goto label_a2ea1c
                        
                        x23_2 = x24_1 + (x22_2 << 0xb) + 0x18
                        int32_t x8_5 = *x23_2
                        
                        if (x8_5 != x20_1)
                            if (x8_5 == 0)
                                x25_2 = 3
                                goto label_a2ea1c
                            
                            x23_2 = x24_1 + (x22_2 << 0xb) + 0x1c
                            int32_t x8_6 = *x23_2
                            
                            if (x8_6 != x20_1)
                                if (x8_6 == 0)
                                    x25_2 = 4
                                    goto label_a2ea1c
                                
                                x23_2 = x24_1 + (x22_2 << 0xb) + 0x20
                                int32_t x8_7 = *x23_2
                                
                                if (x8_7 != x20_1)
                                    if (x8_7 == 0)
                                        x25_2 = 5
                                        goto label_a2ea1c
                                    
                                    x23_2 = x24_1 + (x22_2 << 0xb) + 0x24
                                    int32_t x8_8 = *x23_2
                                    
                                    if (x8_8 != x20_1)
                                        if (x8_8 == 0)
                                            x25_2 = 6
                                            goto label_a2ea1c
                                        
                                        x23_2 = x24_1 + (x22_2 << 0xb) + 0x28
                                        int32_t x8_9 = *x23_2
                                        
                                        if (x8_9 != x20_1)
                                            if (x8_9 == 0)
                                                x25_2 = 7
                                                goto label_a2ea1c
                                            
                                            x23_2 = x24_1 + (x22_2 << 0xb) + 0x2c
                                            int32_t x8_10 = *x23_2
                                            
                                            if (x8_10 != x20_1)
                                                if (x8_10 == 0)
                                                    x25_2 = 8
                                                    goto label_a2ea1c
                                                
                                                x23_2 = x24_1 + (x22_2 << 0xb) + 0x30
                                                
                                                if (*x23_2 == 0 && x20_1 != 0)
                                                    x25_2 = 9
                                                    goto label_a2ea1c
    else
        int64_t x25_1 = sx.q(*(gCampaignSetup + 0x19a8))
        struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignForceAdd(DomCardType)::$_0, std::__ndk1::allocator<CampaignForceAdd(DomCardType)::$_0>, bool (DomCardEnum)>::VTable
            * const var_90
        int64_t x27_1
        
        if ((zx.d(*(DomDefGet(zx.q(x20_1), 0x17) + 0xcd)) & 8) != 0)
            if ((CampaignKingdomHas(0x40000000000) & 1) == 0)
                var_90 = &_vtable_for_std::__ndk1::__function::__func<CampaignForceAdd(DomCardType)::$_0, std::__ndk1::allocator<CampaignForceAdd(DomCardType)::$_0>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
                int64_t var_88_1 = 0x40000000000
                struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignForceAdd(DomCardType)::$_0, std::__ndk1::allocator<CampaignForceAdd(DomCardType)::$_0>, bool (DomCardEnum)>::VTable
                    * const* var_70_1 = &var_90
                int32_t x0_7
                char* x1_1
                x0_7, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
                
                if (&var_90 == var_70_1)
                    x1_1 = (*var_70_1)->vFunc_4(var_70_1)
                else if (var_70_1 != 0)
                    x1_1 = (*var_70_1)->j_operator delete(var_70_1)
                
                CampaignKingdomAdd(zx.q(x0_7), x1_1, 0, 1)
            
            CampaignKingdomHas(0x40000000000)
            x27_1 = 0x80000000000
        else
            x27_1 = 0
        
        if ((zx.d(*(DomDefGet(zx.q(x20_1), 0x17) + 0xcc)) & 0x40) != 0)
            if ((CampaignKingdomHas(0x80000000) & 1) == 0)
                var_90 = &_vtable_for_std::__ndk1::__function::__func<CampaignForceAdd(DomCardType)::$_0, std::__ndk1::allocator<CampaignForceAdd(DomCardType)::$_0>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
                int64_t var_88_2 = 0x80000000
                struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignForceAdd(DomCardType)::$_0, std::__ndk1::allocator<CampaignForceAdd(DomCardType)::$_0>, bool (DomCardEnum)>::VTable
                    * const* var_70_2 = &var_90
                int32_t x0_14
                char* x1_3
                x0_14, x1_3 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_90, 0)
                
                if (&var_90 == var_70_2)
                    x1_3 = (*var_70_2)->vFunc_4(var_70_2)
                else if (var_70_2 != 0)
                    x1_3 = (*var_70_2)->j_operator delete(var_70_2)
                
                CampaignKingdomAdd(zx.q(x0_14), x1_3, 0, 1)
            
            CampaignKingdomHas(0x80000000)
            x27_1 = 0x4000000000
        
        int64_t x23_14 = *(DomDefGet(zx.q(x20_1), 0x17) + 0xc8) & 0x10000000
        int64_t x27_2
        
        x27_2 = x23_14 == 0 ? x27_1 : 0x10000000
        
        void* x8_28
        
        if ((x19_1 & 1) == 0 || x27_2 == 0)
        label_a2e868:
            void* x8_27 = x24_1 + (x25_1 << 0xb)
            uint64_t x0_29 = zx.q(*(x8_27 + 0x34))
            
            if (x0_29.d == x20_1)
                *(x8_27 + 0x57c) |= x19_1
            else if (*(x8_27 + 0x70) != x20_1)
                void* x9_11 = x24_1 + (x25_1 << 0xb)
                
                if (*(x9_11 + 0xac) == x20_1)
                    x8_28 = x8_27 + (2 << 2)
                    *(x8_28 + 0x57c) |= x19_1
                else if (*(x9_11 + 0xe8) == x20_1)
                    x8_28 = x8_27 + (3 << 2)
                    *(x8_28 + 0x57c) |= x19_1
                else if (arg3 s> 0)
                    int64_t x27_3 = 0
                    
                    if (x0_29.d == 0)
                    label_a2e920:
                        void* x8_31 = x24_1 + (x25_1 << 0xb)
                        (x8_31 + 0x34)[x27_3 * 0xf] = x20_1
                        ClearReferenceCards(x8_31 + 0x34 + (x27_3 & 0xffffffff) * 0x3c + 4)
                        *(x8_31 + (zx.q(x27_3.d) << 2) + 0x57c) = x19_1
                        *(x0 + 8) += 1
                    label_a2e7b0:
                        RollKingdom_SetupPile(zx.q(x20_1), 0)
                    else
                        uint64_t x26_6 = zx.q(arg3)
                        int32_t* x28_2 = x24_1 + (x25_1 << 0xb) + 0x70
                        
                        while (true)
                            if ((x23_14 & *(DomDefGet(x0_29, 0x17) + 0xc8)) != 0)
                                if ((x19_1 & 1) == 0)
                                    goto label_a2e984
                                
                                x28_2[-0xf] = x20_1
                                *(x24_1 + (x25_1 << 0xb) + (x27_3 << 2) + 0x57c) = x19_1
                                goto label_a2e7b0_2
                            
                            if (x26_6 - 1 == x27_3)
                                break
                            
                            x0_29 = zx.q(*x28_2)
                            x28_2 = &x28_2[0xf]
                            x27_3 += 1
                            
                            if (x0_29.d == 0)
                                goto label_a2e920
                        
                        if ((x19_1 & 1) != 0)
                            if (arg3 s< 1)
                                goto label_a2ea5c
                            
                            void* x8_38 = x24_1 + (x25_1 << 0xb)
                            int32_t* x21_3 = x8_38 + 0x57c
                            int32_t* x22_5 = x8_38 + 0x34
                            
                            while (true)
                                if ((zx.d(*(DomDefGet(zx.q(*x22_5), 0x17) + 0xcd)) & 8) == 0
                                        && (zx.d(*(DomDefGet(zx.q(*x22_5), 0x17) + 0xcc)) & 0x40)
                                        == 0)
                                    *x22_5 = x20_1
                                    *x21_3 = x19_1
                                    break
                                
                                x21_3 = &x21_3[1]
                                uint64_t temp0_1 = x26_6
                                x26_6 -= 1
                                x22_5 = &x22_5[0xf]
                                
                                if (temp0_1 == 1)
                                    goto label_a2ea5c
                            
                        label_a2e7b0_1:
                            RollKingdom_SetupPile(zx.q(x20_1), 0)
                else if ((x19_1 & 1) != 0)
                label_a2ea5c:
                    pthread_kill(pthread_self(), 6)
                    return CampaignForceAdd(XNoReturn()) __tailcall
            else
                x8_28 = x8_27 + (1 << 2)
                *(x8_28 + 0x57c) |= x19_1
        else
            void* x28_1 = x24_1 + (x25_1 << 0xb)
            int32_t* x26_2 = x28_1 + 0x34
            uint64_t x0_19 = zx.q(*x26_2)
            
            if (x0_19.d != x20_1)
                if (x0_19.d == 0)
                    goto label_a2e868
                
                int64_t x21_2
                
                if ((*(DomDefGet(x0_19, 0x17) + 0xc8) & x27_2) == 0)
                    x26_2 = x24_1 + (x25_1 << 0xb) + 0x70
                    uint64_t x0_21 = zx.q(*x26_2)
                    
                    if (x0_21.d != x20_1)
                        if (x0_21.d == 0)
                            goto label_a2e868
                        
                        if ((*(DomDefGet(x0_21, 0x17) + 0xc8) & x27_2) != 0)
                            x21_2 = 1
                            goto label_a2e720
                        
                        x26_2 = x24_1 + (x25_1 << 0xb) + 0xac
                        uint64_t x0_25 = zx.q(*x26_2)
                        
                        if (x0_25.d != x20_1)
                            if (x0_25.d == 0)
                                goto label_a2e868
                            
                            if ((*(DomDefGet(x0_25, 0x17) + 0xc8) & x27_2) != 0)
                                x21_2 = 2
                                goto label_a2e720
                            
                            x26_2 = x24_1 + (x25_1 << 0xb) + 0xe8
                            uint64_t x0_27 = zx.q(*x26_2)
                            
                            if (x0_27.d != x20_1)
                                if (x0_27.d == 0)
                                    goto label_a2e868
                                
                                if ((*(DomDefGet(x0_27, 0x17) + 0xc8) & x27_2) == 0)
                                    goto label_a2e868
                                
                                x21_2 = 3
                                goto label_a2e720
                            
                            x8_28 = x28_1 + (3 << 2)
                            *(x8_28 + 0x57c) |= x19_1
                        else
                            x8_28 = x28_1 + (2 << 2)
                            *(x8_28 + 0x57c) |= x19_1
                    else
                        x8_28 = x28_1 + (1 << 2)
                        *(x8_28 + 0x57c) |= x19_1
                else
                    x21_2 = 0
                label_a2e720:
                    int32_t x8_18 = *x26_2
                    
                    if (x8_18 == 0x121a)
                        *(x24_1 + (x25_1 << 0xb) + 0x17c) = 0
                    else if (x8_18 == 0x121c)
                        __builtin_memset(x24_1 + (0x13c | (0x1fffffffffffff & x25_1) << 0xb), 0, 
                            0x3c)
                    
                    *x26_2 = x20_1
                    ClearReferenceCards(x24_1 + (x25_1 << 0xb) + 0xc + x21_2 * 0x3c + 0x2c)
                    *(x24_1 + (x25_1 << 0xb) + 0xc + (x21_2 << 2) + 0x570) = x19_1
                label_a2e7b0_2:
                    RollKingdom_SetupPile(zx.q(x20_1), 0)
            else
                x8_28 = x28_1 + (0 << 2)
                *(x8_28 + 0x57c) |= x19_1

label_a2e984:
