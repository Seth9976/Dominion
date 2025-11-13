// 函数: _Z21RollKingdom_SetupPile11DomCardEnum11AbilityFlag
// 地址: 0xbf8c4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_78 = arg2
int32_t x20 = arg1
RandomizerDeck* x19 = *(gPregameContext + 0x18)
RandomizerDeck_ReturnRejects(x19)

for (void* const i = &data_802418; i != &data_802448; i += 0x18)
    int64_t x22_1 = *i
    int64_t x23_1 = *(i + 8)
    int32_t x25_1 = *gPregameContext
    int32_t x24_1 = *(i + 0x10)
    int32_t x8_2 = (x20 + (x25_1 << 0x10)) s% 0x3e5
    int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_2) << 3))
    
    if (x9_5 != 0)
        while (*x9_5 != x20 || x9_5[1] != x25_1)
            x9_5 = *(x9_5 + 0x10)
            
            if (x9_5 == 0)
                goto label_bf8cfc
        
        if ((*(*(x9_5 + 8) + 0xc8) & x22_1) == 0)
            goto label_bf8e40
        
        goto label_bf8d70
    
label_bf8cfc:
    DomDefGetSlow(zx.q(x20), zx.q(x25_1))
    int32_t* x0_2 = malloc(0x18)
    int64_t x8_3 = sx.q(x8_2) << 3
    int64_t x9_6 = *(&data_1838a20 + x8_3)
    *x0_2 = x20
    x0_2[1] = x25_1
    *(&data_1838a20 + x8_3) = x0_2
    *(x0_2 + 0x10) = x9_6
    void* x0_4 = DomDefGetSlow(zx.q(x20), zx.q(x25_1))
    *(x0_2 + 8) = x0_4
    
    if ((*(x0_4 + 0xc8) & x22_1) != 0)
    label_bf8d70:
        
        if (x23_1 == 0)
            if ((PregameHaveLandscapeCard(zx.q(x24_1), zx.q(var_78)) & 1) != 0)
                goto label_bf8f54
            
            if ((RollKingdom_AddLandscape(zx.q(x24_1), zx.q(var_78)) & 1) == 0)
                return 0
            
            goto label_bf8f54
        
        if ((PregameHaveLandscapeType(x23_1, zx.q(var_78)) & 1) != 0)
            goto label_bf8e54
        
        int32_t x0_9 = RollKingdom_DrawRandomType(x23_1)
        int32_t x26_2 = *gPregameContext
        int32_t x8_7 = (x0_9 + (x26_2 << 0x10)) s% 0x3e5
        int32_t* x9_11 = *(&data_1838a20 + (sx.q(x8_7) << 3))
        
        if (x9_11 != 0)
            while (*x9_11 != x0_9 || x9_11[1] != x26_2)
                x9_11 = *(x9_11 + 0x10)
                
                if (x9_11 == 0)
                    goto label_bf8dd4
        else
        label_bf8dd4:
            DomDefGetSlow(zx.q(x0_9), zx.q(x26_2))
            int32_t* x0_11 = malloc(0x18)
            int64_t x8_8 = sx.q(x8_7) << 3
            int64_t x9_12 = *(&data_1838a20 + x8_8)
            *x0_11 = x0_9
            x0_11[1] = x26_2
            *(&data_1838a20 + x8_8) = x0_11
            *(x0_11 + 0x10) = x9_12
            *(x0_11 + 8) = DomDefGetSlow(zx.q(x0_9), zx.q(x26_2))
        
        if ((RollKingdom_AddLandscape(zx.q(x0_9), zx.q(var_78)) & 1) == 0)
            return 0
        
        goto label_bf8e40
    
label_bf8e40:
    
    if (x23_1 == 0)
    label_bf8f54:
        
        if (x24_1 == x20 && (PregameHaveCardType(x22_1, zx.q(var_78)) & 1) == 0)
            int64_t x0_33 = RollKingdom_DrawRandomType(x22_1)
            
            if (x0_33.d != 0 && (RollKingdom_AddCard(x0_33) & 1) == 0)
                return 0
    else
    label_bf8e54:
        int32_t x24_2 = *gPregameContext
        int32_t x8_10 = (x20 + (x24_2 << 0x10)) s% 0x3e5
        int32_t* x9_17 = *(&data_1838a20 + (sx.q(x8_10) << 3))
        
        if (x9_17 != 0)
            while (*x9_17 != x20 || x9_17[1] != x24_2)
                x9_17 = *(x9_17 + 0x10)
                
                if (x9_17 == 0)
                    goto label_bf8e88
            
            if ((*(*(x9_17 + 8) + 0xc8) & x23_1) != 0)
                goto label_bf8f08
        else
        label_bf8e88:
            DomDefGetSlow(zx.q(x20), zx.q(x24_2))
            int32_t* x0_17 = malloc(0x18)
            int64_t x8_11 = sx.q(x8_10) << 3
            int64_t x9_18 = *(&data_1838a20 + x8_11)
            *x0_17 = x20
            x0_17[1] = x24_2
            *(&data_1838a20 + x8_11) = x0_17
            *(x0_17 + 0x10) = x9_18
            void* x0_19 = DomDefGetSlow(zx.q(x20), zx.q(x24_2))
            *(x0_17 + 8) = x0_19
            
            if ((*(x0_19 + 0xc8) & x23_1) != 0)
            label_bf8f08:
                
                if ((PregameHaveCardType(x22_1, zx.q(var_78)) & 1) == 0)
                    int64_t x0_24 = RollKingdom_DrawRandomType(x22_1)
                    
                    if (x0_24.d != 0
                            && (RollKingdom_ForceAddCard(x0_24, gPregameContext + 0x30) & 1) == 0)
                        return 0

int32_t x22_2 = *gPregameContext
int32_t x8_18 = (x20 + (x22_2 << 0x10)) s% 0x3e5
int32_t* x9_20 = *(&data_1838a20 + (sx.q(x8_18) << 3))
DomCardDef* x0_38

if (x9_20 != 0)
    while (*x9_20 != x20 || x9_20[1] != x22_2)
        x9_20 = *(x9_20 + 0x10)
        
        if (x9_20 == 0)
            goto label_bf8fd0
    
    x0_38 = *(x9_20 + 8)
else
label_bf8fd0:
    DomDefGetSlow(zx.q(x20), zx.q(x22_2))
    int32_t* x0_36 = malloc(0x18)
    int64_t x8_19 = sx.q(x8_18) << 3
    int64_t x9_21 = *(&data_1838a20 + x8_19)
    *x0_36 = x20
    x0_36[1] = x22_2
    *(&data_1838a20 + x8_19) = x0_36
    *(x0_36 + 0x10) = x9_21
    x0_38 = DomDefGetSlow(zx.q(x20), zx.q(x22_2))
    *(x0_36 + 8) = x0_38

int32_t var_74
bool (* var_70)(DomCardEnum)
int32_t var_64
int32_t x0_39 = HasRandomExtraPileSetup(x0_38, &var_64, &var_74, &var_70)

if (x0_39 != 0)
    if ((var_78 & 0x4000) == 0 && (var_74 & 0x4000) != 0)
        int64_t x8_22 = sx.q(*(gPregameContext + 0x38))
        *(gPregameContext + 0x38) = x8_22.d + 1
        *(gPregameContext + (x8_22 << 2) + 0x34) = x20
    else if (x0_39 s>= 1)
        int64_t x21_4 = 0
        uint64_t x10_13 = zx.q(x0_39)
        int64_t x8_26 = *(gPregameContext + 0x20) + (zx.q(var_64) << 2) + 0x118
        
        while (true)
            uint64_t x0_41 = zx.q(*(x8_26 + (x21_4 << 2)))
            
            if (x0_41.d == 0)
                while (true)
                    int32_t x1_17 = *(x19 + 0xc80)
                    int32_t x8_33 = *(x19 + 0x1904)
                    
                    if ((x8_33 | x1_17) == 0)
                        break
                    
                    RandomPCG* x0_42 = *(gPregameContext + 0x10)
                    int32_t x22_3
                    int64_t x23_3
                    uint64_t x25_4
                    void* x8_34
                    void* x9_30
                    
                    if (x1_17 == 0)
                        if (x8_33 != 0)
                            x8_34 = x19 + 0xc84 + (sx.q(RandomInt(x0_42, x8_33)) << 2)
                            x25_4 = zx.q(*x8_34)
                            int64_t x9_32 = sx.q(*(x19 + 0x1904)) - 1
                            *(x19 + 0x1904) = x9_32.d
                            x9_30 = x19 + 0xc84 + (x9_32 << 2)
                            x23_3 = 2
                            goto label_bf9184
                        
                        x23_3 = 0
                        x25_4 = 0
                        x22_3 = 0
                        
                        if ((zx.d(var_74:1.b) & 0x80) != 0)
                        label_bf91a4:
                            
                            if (x25_4.d s> 0x1018)
                                uint64_t x8_37 = zx.q(x25_4.d - 0x1019)
                                
                                if (x8_37.d u> 0x19)
                                    x22_3 = x25_4.d
                                    
                                    if (x25_4.d == 0x1305)
                                        x22_3 = *(&data_80245c + 7 * 0x48
                                            + (sx.q(RandomInt(*(gPregameContext + 0x10), 2)) << 2)
                                            + 8)
                                else
                                    x22_3 = x25_4.d
                                    
                                    switch (x8_37)
                                        case 0
                                            x22_3 = *(&data_80245c + 8 * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 4)) << 2) + 8)
                                        case 5
                                            x22_3 = *(&data_80245c + 9 * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 4)) << 2) + 8)
                                        case 0xa
                                            x22_3 = *(&data_80245c + 0xa * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 4)) << 2) + 8)
                                        case 0xf
                                            x22_3 = *(&data_80245c + 0xb * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 4)) << 2) + 8)
                                        case 0x14
                                            x22_3 = *(&data_80245c + 0xc * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 4)) << 2) + 8)
                                        case 0x19
                                            x22_3 = *(&data_80245c + 0xd * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 4)) << 2) + 8)
                            else
                                uint64_t x8_36 = zx.q(x25_4.d - 0xc04)
                                
                                if (x8_36.d u> 0xc)
                                    x22_3 = x25_4.d
                                    
                                    if (x25_4.d == 0x91c)
                                        x22_3 = *((sx.q(RandomInt(*(gPregameContext + 0x10), 0xa))
                                            << 2) + 0x802464)
                                else
                                    x22_3 = x25_4.d
                                    
                                    switch (x8_36)
                                        case 0
                                            x22_3 = *(&data_80245c + 2 * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 2)) << 2) + 8)
                                        case 2
                                            x22_3 = *(&data_80245c + 3 * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 2)) << 2) + 8)
                                        case 4
                                            x22_3 = *(&data_80245c + 4 * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 2)) << 2) + 8)
                                        case 6
                                            x22_3 = *(&data_80245c + 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 8)) << 2) + 8)
                                        case 7
                                            x22_3 = *(&data_80245c + 5 * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 2)) << 2) + 8)
                                        case 0xc
                                            x22_3 = *(&data_80245c + 6 * 0x48 + (
                                                sx.q(RandomInt(*(gPregameContext + 0x10), 2)) << 2) + 8)
                    else
                        x8_34 = x19 + (sx.q(RandomInt(x0_42, x1_17)) << 2)
                        x25_4 = zx.q(*x8_34)
                        x23_3 = 1
                        int64_t x9_29 = sx.q(*(x19 + 0xc80)) - 1
                        *(x19 + 0xc80) = x9_29.d
                        x9_30 = x19 + (x9_29 << 2)
                    label_bf9184:
                        *x8_34 = *x9_30
                        x22_3 = x25_4.d
                        
                        if ((zx.d(var_74:1.b) & 0x80) != 0)
                            goto label_bf91a4
                    
                    if ((var_70(zx.q(x22_3)) & 1) != 0)
                        *(x8_26 + (x21_4 << 2)) = x22_3
                        RollKingdom_SetupPile(zx.q(x22_3), zx.q(var_74) | zx.q(var_78))
                        break
                    
                    int64_t x8_31 = sx.q(*(x19 + 0x3e8c))
                    *(x19 + 0x3e8c) = x8_31.d + 1
                    *(x19 + (x8_31 << 3) + 0x258c) = x25_4 << 0x20 | x23_3
                
                RandomizerDeck_ReturnRejects(x19)
                x21_4 += 1
                
                if (x21_4 == x10_13)
                    break
            else
                RollKingdom_SetupPile(x0_41, zx.q(var_74) | zx.q(var_78))
                x21_4 += 1
                
                if (x21_4 == x10_13)
                    break

int32_t x22_4 = *gPregameContext
int32_t x8_48 = (x20 + (x22_4 << 0x10)) s% 0x3e5
int32_t* x9_38 = *(&data_1838a20 + (sx.q(x8_48) << 3))
DomCardDef* x0_53

if (x9_38 != 0)
    while (*x9_38 != x20 || x9_38[1] != x22_4)
        x9_38 = *(x9_38 + 0x10)
        
        if (x9_38 == 0)
            goto label_bf9404
    
    x0_53 = *(x9_38 + 8)
else
label_bf9404:
    DomDefGetSlow(zx.q(x20), zx.q(x22_4))
    int32_t* x0_51 = malloc(0x18)
    int64_t x8_49 = sx.q(x8_48) << 3
    int64_t x9_39 = *(&data_1838a20 + x8_49)
    *x0_51 = x20
    x0_51[1] = x22_4
    *(&data_1838a20 + x8_49) = x0_51
    *(x0_51 + 0x10) = x9_39
    x0_53 = DomDefGetSlow(zx.q(x20), zx.q(x22_4))
    *(x0_51 + 8) = x0_53

int32_t x0_54 = HasGenerateExtraPileSetup(x0_53, &var_64, &var_74, &var_70)

if (x0_54 != 0)
    if ((var_78 & 0x4000) != 0 || (var_74 & 0x4000) == 0)
        int32_t* x20_1 = *(gPregameContext + 0x20) + (zx.q(var_64) << 2) + 0x118
        int32_t i_3 = var_70(x19, x20_1, zx.q(x0_54))
        
        if (i_3 s>= 1)
            uint64_t i_2 = zx.q(i_3)
            uint64_t i_1
            
            do
                uint64_t x0_56 = zx.q(*x20_1)
                x20_1 = &x20_1[1]
                RollKingdom_SetupPile(x0_56, 0)
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        int64_t x8_52 = sx.q(*(gPregameContext + 0x38))
        *(gPregameContext + 0x38) = x8_52.d + 1
        *(gPregameContext + (x8_52 << 2) + 0x34) = x20

return 1
