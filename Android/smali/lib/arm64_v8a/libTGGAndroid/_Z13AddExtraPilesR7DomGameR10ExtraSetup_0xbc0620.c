// 函数: _Z13AddExtraPilesR7DomGameR10ExtraSetup
// 地址: 0xbc0620
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGame& x19 = arg1
int32_t entry_x5
int64_t entry_x7
int32_t entry_x15
int32_t entry_x16
int32_t entry_x17

if (zx.d(*(arg2 + 2)) != 0)
    int64_t x8_1 = -0x410
    
    while (true)
        void* x9_1 = x19 + x8_1
        
        if (*(x9_1 + 0x19ac) != 0xd30 && *(x9_1 + 0x19b0) != 0xd30)
            int64_t temp0_1 = x8_1
            x8_1 += 0x10
            
            if (temp0_1 != -0x10)
                continue
        else if (x8_1.d != 0xfffffb80)
            break
        
        AddPileNoSetup(x19, zx.q(NextAvailableNonSupplyPile(x19)), 0xd30, arg2, 0, 0)
        arg1, entry_x5, entry_x7, entry_x15, entry_x16, entry_x17 =
            RunPileSetup(x19, 0xd30, arg2, 0)
        break

if (zx.d(*(arg2 + 3)) != 0)
    int64_t x8_3 = -0x410
    
    while (true)
        void* x9_3 = x19 + x8_3
        
        if (*(x9_3 + 0x19ac) != 0xd3d && *(x9_3 + 0x19b0) != 0xd3d)
            int64_t temp1_1 = x8_3
            x8_3 += 0x10
            
            if (temp1_1 != -0x10)
                continue
        else if (x8_3.d != 0xfffffb80)
            break
        
        AddPileNoSetup(x19, zx.q(NextAvailableNonSupplyPile(x19)), 0xd3d, arg2, 0, 0)
        arg1, entry_x5, entry_x7, entry_x15, entry_x16, entry_x17 =
            RunPileSetup(x19, 0xd3d, arg2, 0)
        break

if (zx.d(*arg2) != 0)
    int64_t x8_5 = -0x410
    
    while (true)
        void* x9_5 = x19 + x8_5
        
        if (*(x9_5 + 0x19ac) != 0x500 && *(x9_5 + 0x19b0) != 0x500)
            int64_t temp2_1 = x8_5
            x8_5 += 0x10
            
            if (temp2_1 != -0x10)
                continue
        else if (x8_5.d != 0xfffffb80)
            break
        
        arg1, entry_x5, entry_x7, entry_x15, entry_x16, entry_x17 = AddStandardPile(x19, 0x500)
        break

if (zx.d(*(arg2 + 1)) != 0)
    int64_t x8_7 = -0x410
    
    while (true)
        void* x9_7 = x19 + x8_7
        
        if (*(x9_7 + 0x19ac) != 0x923 && *(x9_7 + 0x19b0) != 0x923)
            int64_t temp3_1 = x8_7
            x8_7 += 0x10
            
            if (temp3_1 != -0x10)
                continue
        else if (x8_7.d != 0xfffffb80)
            break
        
        arg1, entry_x5, entry_x7, entry_x15, entry_x16, entry_x17 = AddStandardPile(x19, 0x923)
        break

int32_t x8_8 = *(arg2 + 0x4c)

if (x8_8 == 0)
    return 

int32_t x10_5 = *(x19 + 0x1288)

if (x10_5 != 0)
    if (x10_5 == 0x14b6)
        x8_8 = 2
        *(arg2 + 0x4c) = 2
    else
        int32_t x10_6 = *(x19 + 0x129c)
        
        if (x10_6 == 0x14b6)
            x8_8 = 2
            *(arg2 + 0x4c) = 2
        else if (x10_6 != 0)
            int32_t x9_9 = *(x19 + 0x12b0)
            
            if (x9_9 != 0)
                if (x9_9 == 0x14b6)
                    x8_8 = 2
                    *(arg2 + 0x4c) = 2
                else
                    int32_t x9_10 = *(x19 + 0x12c4)
                    
                    if (x9_10 != 0)
                        if (x9_10 == 0x14b6)
                            x8_8 = 2
                            *(arg2 + 0x4c) = 2
                        else
                            int32_t x9_11 = *(x19 + 0x12d8)
                            
                            if (x9_11 != 0)
                                if (x9_11 == 0x14b6)
                                    x8_8 = 2
                                    *(arg2 + 0x4c) = 2
                                else
                                    int32_t x9_12 = *(x19 + 0x12ec)
                                    
                                    if (x9_12 != 0)
                                        if (x9_12 == 0x14b6)
                                            x8_8 = 2
                                            *(arg2 + 0x4c) = 2
                                        else
                                            int32_t x9_13 = *(x19 + 0x1300)
                                            
                                            if (x9_13 != 0)
                                                if (x9_13 == 0x14b6)
                                                    x8_8 = 2
                                                    *(arg2 + 0x4c) = 2
                                                else
                                                    int32_t x9_14 = *(x19 + 0x1314)
                                                    
                                                    if (x9_14 != 0)
                                                        if (x9_14 == 0x14b6)
                                                            x8_8 = 2
                                                            *(arg2 + 0x4c) = 2
                                                        else
                                                            int32_t x9_15 = *(x19 + 0x1328)
                                                            
                                                            if (x9_15 != 0)
                                                                if (x9_15 == 0x14b6)
                                                                    x8_8 = 2
                                                                    *(arg2 + 0x4c) = 2
                                                                else
                                                                    int32_t x9_16 = *(x19 + 0x133c)
                                                                    
                                                                    if (x9_16 != 0)
                                                                        if (x9_16 == 0x14b6)
                                                                            x8_8 = 2
                                                                            *(arg2 + 0x4c) = 2
                                                                        else
                                                                            int32_t x9_17 = *(x19 + 0x1350)
                                                                            
                                                                            if (x9_17 != 0)
                                                                                if (x9_17 == 0x14b6)
                                                                                    x8_8 = 2
                                                                                    *(arg2 + 0x4c) = 2
                                                                                else
                                                                                    int32_t x9_18 = *(x19 + 0x1364)
                                                                                    
                                                                                    if (x9_18 != 0)
                                                                                        if (x9_18 == 0x14b6)
                                                                                            x8_8 = 2
                                                                                            *(arg2 + 0x4c) = 2
                                                                                        else
                                                                                            int32_t x9_19 = *(x19 + 0x1378)
                                                                                            
                                                                                            if (x9_19 != 0)
                                                                                                if (x9_19 == 0x14b6)
                                                                                                    x8_8 = 2
                                                                                                    *(arg2 + 0x4c) = 2
                                                                                                else
                                                                                                    int32_t x9_20 = *(x19 + 0x138c)
                                                                                                    
                                                                                                    if (x9_20 != 0)
                                                                                                        if (x9_20 == 0x14b6)
                                                                                                            x8_8 = 2
                                                                                                            *(arg2 + 0x4c) = 2
                                                                                                        else
                                                                                                            int32_t x9_21 = *(x19 + 0x13a0)
                                                                                                            
                                                                                                            if (x9_21 != 0)
                                                                                                                if (x9_21 == 0x14b6)
                                                                                                                    x8_8 = 2
                                                                                                                    *(arg2 + 0x4c) = 2
                                                                                                                else
                                                                                                                    int32_t x9_22 = *(x19 + 0x13b4)
                                                                                                                    
                                                                                                                    if (x9_22 != 0)
                                                                                                                        if (x9_22 == 0x14b6)
                                                                                                                            x8_8 = 2
                                                                                                                            *(arg2 + 0x4c) = 2
                                                                                                                        else
                                                                                                                            int32_t x9_23 = *(x19 + 0x13c8)
                                                                                                                            
                                                                                                                            if (x9_23 != 0)
                                                                                                                                if (x9_23 == 0x14b6)
                                                                                                                                    x8_8 = 2
                                                                                                                                    *(arg2 + 0x4c) = 2
                                                                                                                                else
                                                                                                                                    int32_t x9_24 = *(x19 + 0x13dc)
                                                                                                                                    
                                                                                                                                    if (x9_24 != 0)
                                                                                                                                        if (x9_24 == 0x14b6)
                                                                                                                                            x8_8 = 2
                                                                                                                                            *(arg2 + 0x4c) = 2
                                                                                                                                        else
                                                                                                                                            int32_t x9_25 = *(x19 + 0x13f0)
                                                                                                                                            
                                                                                                                                            if (x9_25 != 0)
                                                                                                                                                if (x9_25 == 0x14b6)
                                                                                                                                                    x8_8 = 2
                                                                                                                                                    *(arg2 + 0x4c) = 2
                                                                                                                                                else
                                                                                                                                                    int32_t x9_26 = *(x19 + 0x1404)
                                                                                                                                                    
                                                                                                                                                    if (x9_26 != 0)
                                                                                                                                                        if (x9_26 == 0x14b6)
                                                                                                                                                            x8_8 = 2
                                                                                                                                                            *(arg2 + 0x4c) = 2
                                                                                                                                                        else
                                                                                                                                                            int32_t x9_27 = *(x19 + 0x1418)
                                                                                                                                                            
                                                                                                                                                            if (x9_27 != 0)
                                                                                                                                                                if (x9_27 == 0x14b6)
                                                                                                                                                                    x8_8 = 2
                                                                                                                                                                    *(arg2 + 0x4c) = 2
                                                                                                                                                                else
                                                                                                                                                                    int32_t x9_28 = *(x19 + 0x142c)
                                                                                                                                                                    
                                                                                                                                                                    if (x9_28 != 0)
                                                                                                                                                                        if (x9_28 == 0x14b6)
                                                                                                                                                                            x8_8 = 2
                                                                                                                                                                            *(arg2 + 0x4c) = 2
                                                                                                                                                                        else
                                                                                                                                                                            int32_t x9_29 = *(x19 + 0x1440)
                                                                                                                                                                            
                                                                                                                                                                            if (x9_29 != 0)
                                                                                                                                                                                if (x9_29 == 0x14b6)
                                                                                                                                                                                    x8_8 = 2
                                                                                                                                                                                    *(arg2 + 0x4c) = 2
                                                                                                                                                                                else
                                                                                                                                                                                    int32_t x9_30 = *(x19 + 0x1454)
                                                                                                                                                                                    
                                                                                                                                                                                    if (x9_30 != 0)
                                                                                                                                                                                        if (x9_30 == 0x14b6)
                                                                                                                                                                                            x8_8 = 2
                                                                                                                                                                                            *(arg2 + 0x4c) = 2
                                                                                                                                                                                        else
                                                                                                                                                                                            int32_t x9_31 = *(x19 + 0x1468)
                                                                                                                                                                                            
                                                                                                                                                                                            if (x9_31 != 0)
                                                                                                                                                                                                if (x9_31 == 0x14b6)
                                                                                                                                                                                                    x8_8 = 2
                                                                                                                                                                                                    *(arg2 + 0x4c) = 2
                                                                                                                                                                                                else
                                                                                                                                                                                                    int32_t x9_32 = *(x19 + 0x147c)
                                                                                                                                                                                                    
                                                                                                                                                                                                    if (x9_32 != 0)
                                                                                                                                                                                                        if (x9_32 == 0x14b6)
                                                                                                                                                                                                            x8_8 = 2
                                                                                                                                                                                                            *(arg2 + 0x4c) = 2
                                                                                                                                                                                                        else
                                                                                                                                                                                                            int32_t x9_33 = *(x19 + 0x1490)
                                                                                                                                                                                                            
                                                                                                                                                                                                            if (x9_33 != 0)
                                                                                                                                                                                                                if (x9_33 == 0x14b6)
                                                                                                                                                                                                                    x8_8 = 2
                                                                                                                                                                                                                    *(arg2 + 0x4c) = 2
                                                                                                                                                                                                                else
                                                                                                                                                                                                                    int32_t x9_34 = *(x19 + 0x14a4)
                                                                                                                                                                                                                    
                                                                                                                                                                                                                    if (x9_34 != 0)
                                                                                                                                                                                                                        if (x9_34 == 0x14b6)
                                                                                                                                                                                                                            x8_8 = 2
                                                                                                                                                                                                                            *(arg2 + 0x4c) = 2
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                            int32_t x9_35 = *(x19 + 0x14b8)
                                                                                                                                                                                                                            
                                                                                                                                                                                                                            if (x9_35 != 0)
                                                                                                                                                                                                                                if (x9_35 == 0x14b6)
                                                                                                                                                                                                                                    x8_8 = 2
                                                                                                                                                                                                                                    *(arg2 + 0x4c) = 2
                                                                                                                                                                                                                                else
                                                                                                                                                                                                                                    int32_t x9_36 = *(x19 + 0x14cc)
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                    if (x9_36 != 0)
                                                                                                                                                                                                                                        if (x9_36 == 0x14b6)
                                                                                                                                                                                                                                            x8_8 = 2
                                                                                                                                                                                                                                            *(arg2 + 0x4c) = 2
                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                            int32_t x10_7 = *(x19 + 0x14e0)
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                            if (x10_7 != 0 && (x10_7 == 0x14b6
                                                                                                                                                                                                                                                    || *(x19 + 0x14f4) == 0x14b6))
                                                                                                                                                                                                                                                x8_8 = 2
                                                                                                                                                                                                                                                *(arg2 + 0x4c) = 2

uint64_t x9_37 = zx.q(*(x19 + 0x19ac))
int32_t x11_1

if (x9_37.d s< 1)
    x11_1 = 0
else
    int64_t i_9
    
    if (x9_37.d u>= 3)
        i_9 = x9_37 & 0xfffffffe
        int32_t x11_2 = 0
        int32_t x12_1 = 0
        void* __offset(DomGame, 0x15f88) x13_1 = x19 + 0x15f88
        int64_t i_7 = i_9
        int64_t i
        
        do
            int32_t x15_2 = *(x13_1 - 0x20)
            
            if (x15_2 == 0xe01)
                entry_x16 = *(x13_1 - 0x1c)
            
            int32_t x0_10 = *x13_1
            
            if (x0_10 == 0xe01)
                entry_x17 = *(x13_1 + 4)
            
            entry_x16 = entry_x16 == 0 ? 1 : 0
            entry_x17 = entry_x17 == 0 ? 1 : 0
            x11_2 += (x15_2 == 0xe01 ? 1 : 0) & entry_x16
            entry_x15 = (x0_10 == 0xe01 ? 1 : 0) & entry_x17
            i = i_7
            i_7 -= 2
            x12_1 += entry_x15
            x13_1 += 0x40
        while (i != 2)
        x11_1 = x12_1 + x11_2
        
        if (i_9 != x9_37)
            goto label_bc0d6c
    else
        i_9 = 0
        x11_1 = 0
    label_bc0d6c:
        void* x12_4 = x19 + (i_9 << 5) + 0x15f6c
        int64_t i_5 = x9_37 - i_9
        int64_t i_1
        
        do
            if (*(x12_4 - 4) == 0xe01 && *x12_4 == 0)
                x11_1 += 1
            
            i_1 = i_5
            i_5 -= 1
            x12_4 += 0x20
        while (i_1 != 1)

int32_t x20_1

if (2 - x11_1 s< x8_8)
    x20_1 = 2 - x11_1
else
    x20_1 = x8_8

if (x20_1 s< 1 || *(x19 + 0xd40) s< 1)
    return 

int32_t x21_1 = 0

while (x9_37.d s>= 1)
    uint64_t x8_10 = zx.q(x9_37.d)
    int32_t x10_10
    int64_t i_8
    
    if (x9_37.d u>= 3)
        i_8 = x8_10 & 0xfffffffe
        int32_t x10_11 = 0
        int32_t x11_3 = 0
        void* __offset(DomGame, 0x15f88) x12_2 = x19 + 0x15f88
        int64_t i_6 = i_8
        int64_t i_2
        
        do
            int32_t x14_5 = *(x12_2 - 0x18)
            
            if (x14_5 == 0x3f1)
                entry_x15 = *(x12_2 - 0x1c)
            
            int32_t x16_2 = *(x12_2 + 8)
            
            if (x16_2 == 0x3f1)
                entry_x17 = *(x12_2 + 4)
            
            int32_t x2_5 = entry_x15 == x21_1 ? 1 : 0
            int32_t x0_14 = x2_5 & (x14_5 == 0x3f1 ? 1 : 0)
            
            if (x0_14 == 1)
                x2_5 = *(x12_2 - 0x20)
            
            int32_t x1_5 = (entry_x17 == x21_1 ? 1 : 0) & (x16_2 == 0x3f1 ? 1 : 0)
            
            if (x1_5 != 0)
                entry_x5 = *x12_2
            
            int32_t x3_4 = x2_5 != 0xe01 ? 1 : 0
            int32_t x4_1 = entry_x5 == 0xe01 ? 1 : 0
            
            if (((x3_4 | (x0_14 ^ 1)) & 1) == 0)
                x3_4 = *(x12_2 - 0xc)
            
            if ((x4_1 & x1_5) != 0)
                x4_1 = *(x12_2 + 0x14)
            
            int32_t x17 = x1_5 & (entry_x5 != 0xe01 ? 1 : 0)
            entry_x5 = x14_5 == 0x3f1 ? 1 : 0
            entry_x15 =
                (entry_x5 & (entry_x15 != x21_1 ? 1 : 0)) | (x0_14 & (x2_5 != 0xe01 ? 1 : 0))
            entry_x17 = ((x16_2 == 0x3f1 ? 1 : 0) & (entry_x17 != x21_1 ? 1 : 0)) | x17
            int32_t x14_3
            
            if ((entry_x15 | (x14_5 != 0x3f1 ? 1 : 0)) != 0)
                x14_3 = 0
            else
                x14_3 = x3_4
            
            x10_11 += x14_3
            int32_t x14_4
            
            if ((entry_x17 | (x16_2 != 0x3f1 ? 1 : 0)) != 0)
                x14_4 = 0
            else
                x14_4 = x4_1
            
            i_2 = i_6
            i_6 -= 2
            x11_3 += x14_4
            x12_2 += 0x40
        while (i_2 != 2)
        x10_10 = x11_3 + x10_11
        
        if (i_8 != x8_10)
            goto label_bc0d00
    else
        i_8 = 0
        x10_10 = 0
    label_bc0d00:
        void* x11_4 = x19 + 0x15f68 + (i_8 << 5)
        int64_t i_4 = x8_10 - i_8
        int64_t i_3
        
        do
            if (*(x11_4 + 8) == 0x3f1 && *(x11_4 + 4) == x21_1 && *x11_4 == 0xe01)
                x10_10 += *(x11_4 + 0x14)
            
            i_3 = i_4
            i_4 -= 1
            x11_4 += 0x20
        while (i_3 != 1)
    
    if (x10_10 == 0)
        break
    
    int32_t var_48_1 = 0
    int32_t var_50_1 = 0xffffffff
    arg1, entry_x5, entry_x7, entry_x15, entry_x17 =
        AddTokens(x19, zx.q(x21_1), 0xe01, zx.q(x20_1), 0x3f1, 0, 0, 0)
    x21_1 += 1
    
    if (x21_1 s>= *(x19 + 0xd40))
        return 
    
label_bc0cf0:
    x9_37 = zx.q(*(x19 + 0x19ac))

arg1, entry_x5, entry_x7, entry_x15, entry_x17 =
    CreateToken(x19, zx.q(x21_1), 0xe01, 0x3f1, 0, x20_1, 0, entry_x7)
x21_1 += 1

if (x21_1 s< *(x19 + 0xd40))
    goto label_bc0cf0
