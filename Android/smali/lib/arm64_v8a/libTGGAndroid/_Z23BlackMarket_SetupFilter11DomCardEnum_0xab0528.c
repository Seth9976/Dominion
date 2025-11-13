// 函数: _Z23BlackMarket_SetupFilter11DomCardEnum
// 地址: 0xab0528
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t* x0 = PregameContextGet()

if ((PregameIsLandscape(zx.q(x19)) & 1) == 0)
    if (*x0 s< 0x12)
        return 1
    
    DomCardDef* x0_5 = DomDefGet(zx.q(x19), zx.q(*PregameContextGet()))
    int32_t var_98[0x1a]
    
    if ((HasSetupFn(x0_5) & 1) == 0 && HasRandomExtraPileSetup(x0_5, &var_98, nullptr, nullptr) == 0
            && HasGenerateExtraPileSetup(x0_5, &var_98, nullptr, nullptr) == 0
            && (HasWhileExistsFn(DomDefGet(zx.q(x19), zx.q(*PregameContextGet())), &var_98) & 1)
            == 0 && (PregameHasHeirloom(zx.q(x19)) & 1) == 0
            && HasArtifacts(DomDefGet(zx.q(x19), zx.q(*PregameContextGet())), &var_98) s<= 0)
        if ((PregameCardIs(zx.q(x19), 0x20000) & 1) != 0 || x19 == 0xd1e)
            return 0
        
        if (x19 - 0xb01 u> 1)
            if ((zx.d(*(DomDefGet(zx.q(x19), zx.q(*PregameContextGet())) + 0xc6)) & 1) == 0)
            label_ab06dc:
                
                if ((PregameCardIs(zx.q(x19), 0x1000) & 1) == 0)
                label_ab074c:
                    
                    if ((PregameCardIs(zx.q(x19), 0x80000000) & 1) == 0)
                    label_ab07bc:
                        
                        if ((PregameCardIs(zx.q(x19), 0x40000000000) & 1) == 0)
                            return 1
                        
                        int32_t x0_58 = KingdomSupplyPiles(*(PregameContextGet() + 0x20), &var_98)
                        
                        if (x0_58 s>= 1)
                            if ((PregameCardIs(zx.q(var_98[0]), 0x40000000000) & 1) != 0)
                                return 1
                            
                            uint64_t x19_2 = zx.q(x0_58)
                            int64_t x8_9 = 1
                            int64_t x21_3
                            int32_t x0_62
                            
                            do
                                x21_3 = x8_9
                                
                                if (x19_2 == x8_9)
                                    break
                                
                                x0_62 = PregameCardIs(zx.q(var_98[x21_3]), 0x40000000000)
                                x8_9 = x21_3 + 1
                            while ((x0_62 & 1) == 0)
                            
                            if (x21_3 u< x19_2)
                                return 1
                    else
                        int32_t x0_49 = KingdomSupplyPiles(*(PregameContextGet() + 0x20), &var_98)
                        
                        if (x0_49 s>= 1)
                            if ((PregameCardIs(zx.q(var_98[0]), 0x80000000) & 1) != 0)
                                goto label_ab07bc
                            
                            uint64_t x20_7 = zx.q(x0_49)
                            int64_t x8_8 = 1
                            int64_t x22_2
                            int32_t x0_53
                            
                            do
                                x22_2 = x8_8
                                
                                if (x20_7 == x8_8)
                                    break
                                
                                x0_53 = PregameCardIs(zx.q(var_98[x22_2]), 0x80000000)
                                x8_8 = x22_2 + 1
                            while ((x0_53 & 1) == 0)
                            
                            if (x22_2 u< x20_7)
                                goto label_ab07bc
                else
                    int32_t x0_40 = KingdomSupplyPiles(*(PregameContextGet() + 0x20), &var_98)
                    
                    if (x0_40 s> 0)
                        if ((PregameCardIs(zx.q(var_98[0]), 0x1000) & 1) != 0)
                            goto label_ab074c
                        
                        uint64_t x20_5 = zx.q(x0_40)
                        int64_t x8_7 = 1
                        int64_t x22_1
                        int32_t x0_44
                        
                        do
                            x22_1 = x8_7
                            
                            if (x20_5 == x8_7)
                                break
                            
                            x0_44 = PregameCardIs(zx.q(var_98[x22_1]), 0x1000)
                            x8_7 = x22_1 + 1
                        while ((x0_44 & 1) == 0)
                        
                        if (x22_1 u< x20_5)
                            goto label_ab074c
            else
                int32_t x0_29 = KingdomSupplyPiles(*(PregameContextGet() + 0x20), &var_98)
                
                if (x0_29 s> 0)
                    if ((zx.d(*(DomDefGet(zx.q(var_98[0]), zx.q(*PregameContextGet())) + 0xc6)) & 1)
                            != 0)
                        goto label_ab06dc
                    
                    uint64_t x21_2 = zx.q(x0_29)
                    int64_t x8_6 = 1
                    int64_t x23_1
                    uint32_t x9_1
                    
                    do
                        x23_1 = x8_6
                        
                        if (x21_2 == x8_6)
                            break
                        
                        x9_1 = zx.d(
                            *(DomDefGet(zx.q(var_98[x23_1]), zx.q(*PregameContextGet())) + 0xc6))
                        x8_6 = x23_1 + 1
                    while ((x9_1 & 1) == 0)
                    
                    if (x23_1 u< x21_2)
                        goto label_ab06dc

return 0
