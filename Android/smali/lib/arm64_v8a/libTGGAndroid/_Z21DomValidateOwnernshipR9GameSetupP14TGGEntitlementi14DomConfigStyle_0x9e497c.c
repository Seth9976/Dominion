// 函数: _Z21DomValidateOwnernshipR9GameSetupP14TGGEntitlementi14DomConfigStyle
// 地址: 0x9e497c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(arg1 + 0x11ac)
int32_t x23

x23 = x19 s< 6 ? x19 : 6

*(arg1 + 0x11ac) = x23

if (arg3 s>= 1)
    uint64_t i_3 = zx.q(arg3)
    TGGEntitlement* x25_1 = arg2
    uint64_t i
    
    do
        if ((DomEntitlementGrantsExpansion(zx.q(*x25_1), 3) & 1) != 0)
            goto label_9e4a14
        
        i = i_3
        i_3 -= 1
        x25_1 += 4
    while (i != 1)

int32_t x8_1

x8_1 = x23 s< 4 ? x19 : 4

*(arg1 + 0x11ac) = x8_1
label_9e4a14:
DomSetupConfigFromString(XString::operator char const*(), *(arg1 + 0x28))
void var_1028
DomValidateExpansions(&var_1028, arg2, arg3)

if (arg3 s< 1)
label_9e4a54:
    int32_t var_df4_1 = 0
else
    uint64_t x19_1 = zx.q(arg3)
    TGGEntitlement* x23_1 = arg2
    
    while ((DomEntitlementGrantsExpansion(zx.q(*x23_1), 6) & 1) == 0)
        uint64_t temp1_1 = x19_1
        x19_1 -= 1
        x23_1 += 4
        
        if (temp1_1 == 1)
            goto label_9e4a54

if (arg3 s< 1)
label_9e4a84:
    int32_t var_df0_1 = 0
else
    uint64_t x19_2 = zx.q(arg3)
    TGGEntitlement* x23_2 = arg2
    
    while ((DomEntitlementGrantsExpansion(zx.q(*x23_2), 9) & 1) == 0)
        uint64_t temp2_1 = x19_2
        x19_2 -= 1
        x23_2 += 4
        
        if (temp2_1 == 1)
            goto label_9e4a84

int32_t x19_3 = 0
DomSetupConfig var_19f0
bool cond:7_1

do
    DomKingdomEntry* x24_1 = &var_19f0 + (sx.q(x19_3) << 4)
    
    if (*x24_1 == 0)
        break
    
    DomValidateEntryOwnership(x24_1, arg2, arg3)
    
    if (*x24_1 == 0)
        memmove(x24_1, &var_19f0 + (sx.q(x19_3) << 4) + 0x10, zx.q(9 - x19_3) << 0x20 s>> 0x1c)
        x19_3 -= 1
        int32_t var_1960_1 = 0
    
    cond:7_1 = x19_3 s>= 9
    x19_3 += 1
while (not(cond:7_1))

if (arg3 s<= 0)
    int32_t x19_4 = 0
    
    while (*(&var_19f0 + muls.dp.d(x19_4, 0x48) + 0xa0) != 0)
        int64_t x27_2 = sx.q(x19_4)
        DomValidateEntryOwnership(&var_19f0 + muls.dp.d(x19_4, 0x48) + 0xa0, arg2, arg3)
        int32_t x9_2 = *(&var_19f0 + x27_2 * 0x48 + 0xb0)
        
        if (x9_2 != 0)
            if ((x9_2 & 0xffffff00) != 0x200)
                *(&var_19f0 + x27_2 * 0x48 + 0xb0) = 0
            
            int32_t x9_4 = *(&var_19f0 + x27_2 * 0x48 + 0xb4)
            
            if (x9_4 != 0)
                if ((x9_4 & 0xffffff00) != 0x200)
                    *(&var_19f0 + x27_2 * 0x48 + 0xb4) = 0
                
                int32_t x9_6 = *(&var_19f0 + x27_2 * 0x48 + 0xb8)
                
                if (x9_6 != 0)
                    if ((x9_6 & 0xffffff00) != 0x200)
                        *(&var_19f0 + x27_2 * 0x48 + 0xb8) = 0
                    
                    int32_t x9_8 = *(&var_19f0 + x27_2 * 0x48 + 0xbc)
                    
                    if (x9_8 != 0)
                        if ((x9_8 & 0xffffff00) != 0x200)
                            *(&var_19f0 + x27_2 * 0x48 + 0xbc) = 0
                        
                        int32_t x9_10 = *(&var_19f0 + x27_2 * 0x48 + 0xc0)
                        
                        if (x9_10 != 0)
                            if ((x9_10 & 0xffffff00) != 0x200)
                                *(&var_19f0 + x27_2 * 0x48 + 0xc0) = 0
                            
                            int32_t x9_12 = *(&var_19f0 + x27_2 * 0x48 + 0xc4)
                            
                            if (x9_12 != 0)
                                if ((x9_12 & 0xffffff00) != 0x200)
                                    *(&var_19f0 + x27_2 * 0x48 + 0xc4) = 0
                                
                                int32_t x9_14 = *(&var_19f0 + x27_2 * 0x48 + 0xc8)
                                
                                if (x9_14 != 0)
                                    if ((x9_14 & 0xffffff00) != 0x200)
                                        *(&var_19f0 + x27_2 * 0x48 + 0xc8) = 0
                                    
                                    int32_t x9_16 = *(&var_19f0 + x27_2 * 0x48 + 0xcc)
                                    
                                    if (x9_16 != 0)
                                        if ((x9_16 & 0xffffff00) != 0x200)
                                            *(&var_19f0 + x27_2 * 0x48 + 0xcc) = 0
                                        
                                        int32_t x9_18 = *(&var_19f0 + x27_2 * 0x48 + 0xd0)
                                        
                                        if (x9_18 != 0)
                                            if ((x9_18 & 0xffffff00) != 0x200)
                                                *(&var_19f0 + x27_2 * 0x48 + 0xd0) = 0
                                            
                                            int32_t x9_20 = *(&var_19f0 + x27_2 * 0x48 + 0xd4)
                                            
                                            if (x9_20 != 0)
                                                if ((x9_20 & 0xffffff00) != 0x200)
                                                    *(&var_19f0 + x27_2 * 0x48 + 0xd4) = 0
                                                
                                                int32_t x9_22 = *(&var_19f0 + x27_2 * 0x48 + 0xd8)
                                                
                                                if (x9_22 != 0)
                                                    if ((x9_22 & 0xffffff00) != 0x200)
                                                        *(&var_19f0 + x27_2 * 0x48 + 0xd8) = 0
                                                    
                                                    int32_t x9_24 =
                                                        *(&var_19f0 + x27_2 * 0x48 + 0xdc)
                                                    
                                                    if (x9_24 != 0)
                                                        if ((x9_24 & 0xffffff00) != 0x200)
                                                            *(&var_19f0 + x27_2 * 0x48 + 0xdc) = 0
                                                        
                                                        int32_t x9_26 =
                                                            *(&var_19f0 + x27_2 * 0x48 + 0xe0)
                                                        
                                                        if (x9_26 != 0)
                                                            if ((x9_26 & 0xffffff00) != 0x200)
                                                                *(&var_19f0 + x27_2 * 0x48 + 0xe0) = 0
                                                            
                                                            int32_t x9_28 =
                                                                *(&var_19f0 + x27_2 * 0x48 + 0xe4)
                                                            
                                                            if (x9_28 != 0
                                                                    && (x9_28 & 0xffffff00) != 0x200)
                                                                *(&var_19f0 + x27_2 * 0x48 + 0xe4) = 0
        
        if (*(&var_19f0 + muls.dp.d(x19_4, 0x48) + 0xa0) == 0)
            memmove(&var_19f0 + muls.dp.d(x19_4, 0x48) + 0xa0, &var_19f0 + x27_2 * 0x48 + 0xe8, 
                muls.dp.d(3 - x19_4, 0x48))
            int32_t var_1878_1 = 0
            
            if (x19_4 - 1 s> 2)
                break
        else
            bool cond:9_1 = x19_4 s> 2
            x19_4 += 1
            
            if (cond:9_1)
                break
else
    int32_t x27_1 = 0
    uint64_t x8_7 = zx.q(arg3)
    
    while (*(&var_19f0 + muls.dp.d(x27_1, 0x48) + 0xa0) != 0)
        int64_t x23_3 = sx.q(x27_1)
        DomValidateEntryOwnership(&var_19f0 + muls.dp.d(x27_1, 0x48) + 0xa0, arg2, arg3)
        int32_t x25_2 = *(&var_19f0 + x23_3 * 0x48 + 0xb0)
        
        if (x25_2 != 0)
            if ((x25_2 & 0xffffff00) != 0x200)
                uint64_t x26_1 = x8_7
                TGGEntitlement* x22_1 = arg2
                
                while ((DomEntitlementGrantsCard(zx.q(*x22_1), zx.q(x25_2)) & 1) == 0)
                    uint64_t temp3_1 = x26_1
                    x26_1 -= 1
                    x22_1 += 4
                    
                    if (temp3_1 == 1)
                        *(&var_19f0 + x23_3 * 0x48 + 0xb0) = 0
                        break
            
            int32_t x25_3 = *(&var_19f0 + x23_3 * 0x48 + 0xb4)
            
            if (x25_3 != 0)
                if ((x25_3 & 0xffffff00) != 0x200)
                    uint64_t x26_2 = x8_7
                    TGGEntitlement* x22_2 = arg2
                    
                    while ((DomEntitlementGrantsCard(zx.q(*x22_2), zx.q(x25_3)) & 1) == 0)
                        uint64_t temp4_1 = x26_2
                        x26_2 -= 1
                        x22_2 += 4
                        
                        if (temp4_1 == 1)
                            *(&var_19f0 + x23_3 * 0x48 + 0xb4) = 0
                            break
                
                int32_t x25_4 = *(&var_19f0 + x23_3 * 0x48 + 0xb8)
                
                if (x25_4 != 0)
                    if ((x25_4 & 0xffffff00) != 0x200)
                        uint64_t x26_3 = x8_7
                        TGGEntitlement* x22_3 = arg2
                        
                        while ((DomEntitlementGrantsCard(zx.q(*x22_3), zx.q(x25_4)) & 1) == 0)
                            uint64_t temp5_1 = x26_3
                            x26_3 -= 1
                            x22_3 += 4
                            
                            if (temp5_1 == 1)
                                *(&var_19f0 + x23_3 * 0x48 + 0xb8) = 0
                                break
                    
                    int32_t x25_5 = *(&var_19f0 + x23_3 * 0x48 + 0xbc)
                    
                    if (x25_5 != 0)
                        if ((x25_5 & 0xffffff00) != 0x200)
                            uint64_t x26_4 = x8_7
                            TGGEntitlement* x22_4 = arg2
                            
                            while ((DomEntitlementGrantsCard(zx.q(*x22_4), zx.q(x25_5)) & 1) == 0)
                                uint64_t temp6_1 = x26_4
                                x26_4 -= 1
                                x22_4 += 4
                                
                                if (temp6_1 == 1)
                                    *(&var_19f0 + x23_3 * 0x48 + 0xbc) = 0
                                    break
                        
                        int32_t x25_6 = *(&var_19f0 + x23_3 * 0x48 + 0xc0)
                        
                        if (x25_6 != 0)
                            if ((x25_6 & 0xffffff00) != 0x200)
                                uint64_t x26_5 = x8_7
                                TGGEntitlement* x22_5 = arg2
                                
                                while ((DomEntitlementGrantsCard(zx.q(*x22_5), zx.q(x25_6)) & 1)
                                        == 0)
                                    uint64_t temp7_1 = x26_5
                                    x26_5 -= 1
                                    x22_5 += 4
                                    
                                    if (temp7_1 == 1)
                                        *(&var_19f0 + x23_3 * 0x48 + 0xc0) = 0
                                        break
                            
                            int32_t x25_7 = *(&var_19f0 + x23_3 * 0x48 + 0xc4)
                            
                            if (x25_7 != 0)
                                if ((x25_7 & 0xffffff00) != 0x200)
                                    uint64_t x26_6 = x8_7
                                    TGGEntitlement* x22_6 = arg2
                                    
                                    while ((DomEntitlementGrantsCard(zx.q(*x22_6), zx.q(x25_7)) & 1)
                                            == 0)
                                        uint64_t temp8_1 = x26_6
                                        x26_6 -= 1
                                        x22_6 += 4
                                        
                                        if (temp8_1 == 1)
                                            *(&var_19f0 + x23_3 * 0x48 + 0xc4) = 0
                                            break
                                
                                int32_t x25_8 = *(&var_19f0 + x23_3 * 0x48 + 0xc8)
                                
                                if (x25_8 != 0)
                                    if ((x25_8 & 0xffffff00) != 0x200)
                                        uint64_t x26_7 = x8_7
                                        TGGEntitlement* x22_7 = arg2
                                        
                                        while ((DomEntitlementGrantsCard(zx.q(*x22_7), zx.q(x25_8))
                                                & 1) == 0)
                                            uint64_t temp9_1 = x26_7
                                            x26_7 -= 1
                                            x22_7 += 4
                                            
                                            if (temp9_1 == 1)
                                                *(&var_19f0 + x23_3 * 0x48 + 0xc8) = 0
                                                break
                                    
                                    int32_t x25_9 = *(&var_19f0 + x23_3 * 0x48 + 0xcc)
                                    
                                    if (x25_9 != 0)
                                        if ((x25_9 & 0xffffff00) != 0x200)
                                            uint64_t x26_8 = x8_7
                                            TGGEntitlement* x22_8 = arg2
                                            
                                            while ((DomEntitlementGrantsCard(zx.q(*x22_8), 
                                                    zx.q(x25_9)) & 1) == 0)
                                                uint64_t temp10_1 = x26_8
                                                x26_8 -= 1
                                                x22_8 += 4
                                                
                                                if (temp10_1 == 1)
                                                    *(&var_19f0 + x23_3 * 0x48 + 0xcc) = 0
                                                    break
                                        
                                        int32_t x25_10 = *(&var_19f0 + x23_3 * 0x48 + 0xd0)
                                        
                                        if (x25_10 != 0)
                                            if ((x25_10 & 0xffffff00) != 0x200)
                                                uint64_t x26_9 = x8_7
                                                TGGEntitlement* x22_9 = arg2
                                                
                                                while ((DomEntitlementGrantsCard(zx.q(*x22_9), 
                                                        zx.q(x25_10)) & 1) == 0)
                                                    uint64_t temp11_1 = x26_9
                                                    x26_9 -= 1
                                                    x22_9 += 4
                                                    
                                                    if (temp11_1 == 1)
                                                        *(&var_19f0 + x23_3 * 0x48 + 0xd0) = 0
                                                        break
                                            
                                            int32_t x25_11 = *(&var_19f0 + x23_3 * 0x48 + 0xd4)
                                            
                                            if (x25_11 != 0)
                                                if ((x25_11 & 0xffffff00) != 0x200)
                                                    uint64_t x26_10 = x8_7
                                                    TGGEntitlement* x22_10 = arg2
                                                    
                                                    while ((DomEntitlementGrantsCard(zx.q(*x22_10), 
                                                            zx.q(x25_11)) & 1) == 0)
                                                        uint64_t temp12_1 = x26_10
                                                        x26_10 -= 1
                                                        x22_10 += 4
                                                        
                                                        if (temp12_1 == 1)
                                                            *(&var_19f0 + x23_3 * 0x48 + 0xd4) = 0
                                                            break
                                                
                                                int32_t x25_12 = *(&var_19f0 + x23_3 * 0x48 + 0xd8)
                                                
                                                if (x25_12 != 0)
                                                    if ((x25_12 & 0xffffff00) != 0x200)
                                                        uint64_t x26_11 = x8_7
                                                        TGGEntitlement* x22_11 = arg2
                                                        
                                                        while ((DomEntitlementGrantsCard(
                                                                zx.q(*x22_11), zx.q(x25_12)) & 1) == 0)
                                                            uint64_t temp13_1 = x26_11
                                                            x26_11 -= 1
                                                            x22_11 += 4
                                                            
                                                            if (temp13_1 == 1)
                                                                *(&var_19f0 + x23_3 * 0x48 + 0xd8) = 0
                                                                break
                                                    
                                                    int32_t x25_13 =
                                                        *(&var_19f0 + x23_3 * 0x48 + 0xdc)
                                                    
                                                    if (x25_13 != 0)
                                                        if ((x25_13 & 0xffffff00) != 0x200)
                                                            uint64_t x26_12 = x8_7
                                                            TGGEntitlement* x22_12 = arg2
                                                            
                                                            while ((DomEntitlementGrantsCard(
                                                                    zx.q(*x22_12), zx.q(x25_13)) & 1) == 0)
                                                                uint64_t temp14_1 = x26_12
                                                                x26_12 -= 1
                                                                x22_12 += 4
                                                                
                                                                if (temp14_1 == 1)
                                                                    *(&var_19f0 + x23_3 * 0x48 + 0xdc) = 0
                                                                    break
                                                        
                                                        int32_t x25_14 =
                                                            *(&var_19f0 + x23_3 * 0x48 + 0xe0)
                                                        
                                                        if (x25_14 != 0)
                                                            if ((x25_14 & 0xffffff00) != 0x200)
                                                                uint64_t x26_13 = x8_7
                                                                TGGEntitlement* x22_13 = arg2
                                                                
                                                                while ((DomEntitlementGrantsCard(
                                                                        zx.q(*x22_13), zx.q(x25_14)) & 1) == 0)
                                                                    uint64_t temp15_1 = x26_13
                                                                    x26_13 -= 1
                                                                    x22_13 += 4
                                                                    
                                                                    if (temp15_1 == 1)
                                                                        *(&var_19f0 + x23_3 * 0x48 + 0xe0) = 0
                                                                        break
                                                            
                                                            int32_t x25_15 =
                                                                *(&var_19f0 + x23_3 * 0x48 + 0xe4)
                                                            
                                                            if (x25_15 != 0
                                                                    && (x25_15 & 0xffffff00) != 0x200)
                                                                uint64_t x26_14 = x8_7
                                                                TGGEntitlement* x22_14 = arg2
                                                                
                                                                while ((DomEntitlementGrantsCard(
                                                                        zx.q(*x22_14), zx.q(x25_15)) & 1) == 0)
                                                                    uint64_t temp16_1 = x26_14
                                                                    x26_14 -= 1
                                                                    x22_14 += 4
                                                                    
                                                                    if (temp16_1 == 1)
                                                                        *(&var_19f0 + x23_3 * 0x48 + 0xe4) = 0
                                                                        break
        
        if (*(&var_19f0 + muls.dp.d(x27_1, 0x48) + 0xa0) == 0)
            memmove(&var_19f0 + muls.dp.d(x27_1, 0x48) + 0xa0, &var_19f0 + x23_3 * 0x48 + 0xe8, 
                muls.dp.d(3 - x27_1, 0x48))
            int32_t var_1878_2 = 0
            
            if (x27_1 - 1 s>= 3)
                break
        else
            bool cond:11_1 = x27_1 s>= 3
            x27_1 += 1
            
            if (cond:11_1)
                break

for (int64_t i_1 = 0x1c0; i_1 != 0x870; i_1 += 0x10)
    DomKingdomEntry* x0_43 = &var_19f0 + i_1
    
    if (*x0_43 == 0)
        break
    
    DomValidateEntryOwnership(x0_43, arg2, arg3)

for (int64_t i_2 = 0; i_2 != 0x280; i_2 += 0x14)
    void var_2e0
    CampaignMissionExtra* x24_6 = &var_2e0 + i_2
    
    if (*x24_6 == 0)
        break
    
    if ((DomValidateCampaignEntryOwnership(x24_6, arg2, arg3) & 1) == 0)
        *x24_6 = 0

DomSetupConfigToString(&var_19f0, *(arg1 + 0x28), zx.q(arg4))
XString::operator=(arg1 + 0x30)
return XString::~XString()
