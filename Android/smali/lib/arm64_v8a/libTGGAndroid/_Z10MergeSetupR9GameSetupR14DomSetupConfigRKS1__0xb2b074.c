// 函数: _Z10MergeSetupR9GameSetupR14DomSetupConfigRKS1_
// 地址: 0xb2b074
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
int128_t v2

if (*arg3 != 0)
    int32_t x0_1
    x0_1, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(*(arg3 + 4)))
    
    if ((x0_1 & 1) == 0)
        v0, v1, v2 = GameCreateAddCard(arg1, arg2, arg3)
    
    if (*(arg3 + 0x10) != 0)
        int32_t x0_4
        x0_4, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(*(arg3 + 0x14)))
        
        if ((x0_4 & 1) == 0)
            v0, v1, v2 = GameCreateAddCard(arg1, arg2, arg3 + 0x10)
        
        if (*(arg3 + 0x20) != 0)
            int32_t x0_7
            x0_7, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(*(arg3 + 0x24)))
            
            if ((x0_7 & 1) == 0)
                v0, v1, v2 = GameCreateAddCard(arg1, arg2, arg3 + 0x20)
            
            if (*(arg3 + 0x30) != 0)
                int32_t x0_10
                x0_10, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(*(arg3 + 0x34)))
                
                if ((x0_10 & 1) == 0)
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, arg3 + 0x30)
                
                if (*(arg3 + 0x40) != 0)
                    int32_t x0_13
                    x0_13, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(*(arg3 + 0x44)))
                    
                    if ((x0_13 & 1) == 0)
                        v0, v1, v2 = GameCreateAddCard(arg1, arg2, arg3 + 0x40)
                    
                    if (*(arg3 + 0x50) != 0)
                        int32_t x0_16
                        x0_16, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(*(arg3 + 0x54)))
                        
                        if ((x0_16 & 1) == 0)
                            v0, v1, v2 = GameCreateAddCard(arg1, arg2, arg3 + 0x50)
                        
                        if (*(arg3 + 0x60) != 0)
                            int32_t x0_19
                            x0_19, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(*(arg3 + 0x64)))
                            
                            if ((x0_19 & 1) == 0)
                                v0, v1, v2 = GameCreateAddCard(arg1, arg2, arg3 + 0x60)
                            
                            if (*(arg3 + 0x70) != 0)
                                int32_t x0_22
                                x0_22, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(*(arg3 + 0x74)))
                                
                                if ((x0_22 & 1) == 0)
                                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, arg3 + 0x70)
                                
                                if (*(arg3 + 0x80) != 0)
                                    int32_t x0_25
                                    x0_25, v0, v1, v2 =
                                        SetupHasKingdomCard(arg2, zx.q(*(arg3 + 0x84)))
                                    
                                    if ((x0_25 & 1) == 0)
                                        v0, v1, v2 = GameCreateAddCard(arg1, arg2, arg3 + 0x80)
                                    
                                    if (*(arg3 + 0x90) != 0)
                                        int32_t x0_28
                                        x0_28, v0, v1, v2 =
                                            SetupHasKingdomCard(arg2, zx.q(*(arg3 + 0x94)))
                                        
                                        if ((x0_28 & 1) == 0)
                                            v0, v1, v2 = GameCreateAddCard(arg1, arg2, arg3 + 0x90)

int32_t x23_1

if (*(arg2 + 0xa0) == 0)
    x23_1 = 0
label_b2b288:
    int64_t x25_1 = 0
    void* __offset(DomSetupConfig, 0xa0) x24_1 = arg3 + 0xa0
    bool cond:0_1
    
    do
        int32_t x8_14 = *x24_1
        
        if (x8_14 == 1)
            int32_t x22_19 = *(x24_1 + 0x10)
            int32_t var_60
            
            if (x22_19 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_31
                x0_31, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_19))
                
                if ((x0_31 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_1 = x22_19
                    int32_t var_58_1 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_20 = *(x24_1 + 0x14)
            
            if (x22_20 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_34
                x0_34, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_20))
                
                if ((x0_34 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_2 = x22_20
                    int32_t var_58_2 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_21 = *(x24_1 + 0x18)
            
            if (x22_21 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_37
                x0_37, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_21))
                
                if ((x0_37 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_3 = x22_21
                    int32_t var_58_3 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_22 = *(x24_1 + 0x1c)
            
            if (x22_22 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_40
                x0_40, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_22))
                
                if ((x0_40 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_4 = x22_22
                    int32_t var_58_4 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_23 = *(x24_1 + 0x20)
            
            if (x22_23 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_43
                x0_43, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_23))
                
                if ((x0_43 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_5 = x22_23
                    int32_t var_58_5 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_24 = *(x24_1 + 0x24)
            
            if (x22_24 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_46
                x0_46, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_24))
                
                if ((x0_46 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_6 = x22_24
                    int32_t var_58_6 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_25 = *(x24_1 + 0x28)
            
            if (x22_25 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_49
                x0_49, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_25))
                
                if ((x0_49 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_7 = x22_25
                    int32_t var_58_7 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_26 = *(x24_1 + 0x2c)
            
            if (x22_26 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_52
                x0_52, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_26))
                
                if ((x0_52 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_8 = x22_26
                    int32_t var_58_8 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_27 = *(x24_1 + 0x30)
            
            if (x22_27 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_55
                x0_55, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_27))
                
                if ((x0_55 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_9 = x22_27
                    int32_t var_58_9 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_28 = *(x24_1 + 0x34)
            
            if (x22_28 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_58
                x0_58, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_28))
                
                if ((x0_58 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_10 = x22_28
                    int32_t var_58_10 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_29 = *(x24_1 + 0x38)
            
            if (x22_29 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_61
                x0_61, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_29))
                
                if ((x0_61 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_11 = x22_29
                    int32_t var_58_11 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_30 = *(x24_1 + 0x3c)
            
            if (x22_30 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_64
                x0_64, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_30))
                
                if ((x0_64 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_12 = x22_30
                    int32_t var_58_12 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_31 = *(x24_1 + 0x40)
            
            if (x22_31 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_67
                x0_67, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_31))
                
                if ((x0_67 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_13 = x22_31
                    int32_t var_58_13 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            int32_t x22_32 = *(x24_1 + 0x44)
            
            if (x22_32 != 0 && *(x24_1 + 4) != 0xf3a)
                int32_t x0_70
                x0_70, v0, v1, v2 = SetupHasKingdomCard(arg2, zx.q(x22_32))
                
                if ((x0_70 & 1) == 0)
                    var_60 = 1
                    int32_t var_5c_14 = x22_32
                    int32_t var_58_14 = 0
                    v0, v1, v2 = GameCreateAddCard(arg1, arg2, &var_60)
            
            void* x8_29 = arg2 + muls.dp.d(x23_1, 0x48)
            x23_1 += 1
            *(x8_29 + 0xa0) = *x24_1
            v0 = *(x24_1 + 0x30)
            int64_t x9_1 = *(x24_1 + 0x40)
            v1 = *(x24_1 + 0x10)
            *(x8_29 + 0xc0) = *(x24_1 + 0x20)
            *(x8_29 + 0xd0) = v0
            *(x8_29 + 0xe0) = x9_1
            *(x8_29 + 0xb0) = v1
            
            if (x23_1 s> 3)
                break
        else
            if (x8_14 == 0)
                break
            
            if (x23_1 s> 3)
                break
        
        cond:0_1 = x25_1 u< 3
        x25_1 += 1
        x24_1 += 0x48
    while (cond:0_1)
else
    if (*(arg2 + 0xe8) == 0)
        x23_1 = 1
        goto label_b2b288
    
    if (*(arg2 + 0x130) == 0)
        x23_1 = 2
        goto label_b2b288
    
    if (*(arg2 + 0x178) == 0)
        x23_1 = 3
        goto label_b2b288

for (int64_t i = 0x1c0; i != 0x870; i += 0x10)
    if (*(arg3 + i) != 0)
        *(arg2 + i) = *(arg3 + i)

for (int64_t i_1 = 0; i_1 != 0x280; i_1 += 0x14)
    CampaignMissionExtra* x21_1 = arg3 + 0x1710 + i_1
    
    if (*x21_1 == 0)
        break
    
    if ((SetupHasExtra(arg2, x21_1) & 1) == 0)
        GameCreateAddExtra(arg2, x21_1)

SaveSetupData(arg1, arg2)
return ValidateOwnership(arg1, 4, 0) __tailcall
