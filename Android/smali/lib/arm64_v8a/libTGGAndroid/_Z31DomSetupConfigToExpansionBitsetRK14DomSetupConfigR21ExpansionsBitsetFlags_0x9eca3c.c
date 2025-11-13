// 函数: _Z31DomSetupConfigToExpansionBitsetRK14DomSetupConfigR21ExpansionsBitsetFlags
// 地址: 0x9eca3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_d0
int32_t i_22

if (*arg1 == 0)
    i_22 = 0
else
    int32_t x0_1 = GetExpansion(arg1)
    void* __offset(DomSetupConfig, 0x10) x0_3
    
    if (x0_1 != 0x13)
        i_22 = 1
        var_d0 = x0_1
        x0_3 = arg1 + 0x10
        
        if (*x0_3 != 0)
        label_9eca9c:
            int32_t x0_5 = GetExpansion(x0_3)
            
            if (x0_5 != 0x13)
                uint64_t i_23 = zx.q(i_22)
                
                if (x0_1 == 0x13)
                label_9ecab4:
                    i_22 += 1
                    (&var_d0)[i_23] = x0_5
                else if (x0_1 != x0_5)
                    int64_t x9_1 = i_23 - 1
                    void var_cc
                    void* x10_1 = &var_cc
                    int32_t x11_1
                    
                    do
                        if (x9_1 == 0)
                            goto label_9ecab4
                        
                        x11_1 = *x10_1
                        x10_1 += 4
                        x9_1 -= 1
                    while (x11_1 != x0_5)
            
            if (*(arg1 + 0x20) != 0)
                int32_t i = GetExpansion(arg1 + 0x20)
                
                if (i != 0x13)
                    uint64_t i_24 = zx.q(i_22)
                    
                    if (i_22 s< 1)
                    label_9ecb30:
                        i_22 += 1
                        (&var_d0)[i_24] = i
                    else
                        int32_t* x9_2 = &var_d0
                        uint64_t i_40 = i_24
                        
                        while (*x9_2 != i)
                            uint64_t i_58 = i_40
                            i_40 -= 1
                            x9_2 = &x9_2[1]
                            
                            if (i_58 == 1)
                                goto label_9ecb30
                
                if (*(arg1 + 0x30) != 0)
                    int32_t i_1 = GetExpansion(arg1 + 0x30)
                    
                    if (i_1 != 0x13)
                        uint64_t i_25 = zx.q(i_22)
                        
                        if (i_22 s< 1)
                        label_9ecb80:
                            i_22 += 1
                            (&var_d0)[i_25] = i_1
                        else
                            int32_t* x9_3 = &var_d0
                            uint64_t i_41 = i_25
                            
                            while (*x9_3 != i_1)
                                uint64_t i_61 = i_41
                                i_41 -= 1
                                x9_3 = &x9_3[1]
                                
                                if (i_61 == 1)
                                    goto label_9ecb80
                    
                    if (*(arg1 + 0x40) != 0)
                        int32_t i_2 = GetExpansion(arg1 + 0x40)
                        
                        if (i_2 != 0x13)
                            uint64_t i_26 = zx.q(i_22)
                            
                            if (i_22 s< 1)
                            label_9ecbd0:
                                i_22 += 1
                                (&var_d0)[i_26] = i_2
                            else
                                int32_t* x9_4 = &var_d0
                                uint64_t i_42 = i_26
                                
                                while (*x9_4 != i_2)
                                    uint64_t i_63 = i_42
                                    i_42 -= 1
                                    x9_4 = &x9_4[1]
                                    
                                    if (i_63 == 1)
                                        goto label_9ecbd0
                        
                        if (*(arg1 + 0x50) != 0)
                            int32_t i_3 = GetExpansion(arg1 + 0x50)
                            
                            if (i_3 != 0x13)
                                uint64_t i_27 = zx.q(i_22)
                                
                                if (i_22 s< 1)
                                label_9ecc20:
                                    i_22 += 1
                                    (&var_d0)[i_27] = i_3
                                else
                                    int32_t* x9_5 = &var_d0
                                    uint64_t i_43 = i_27
                                    
                                    while (*x9_5 != i_3)
                                        uint64_t i_65 = i_43
                                        i_43 -= 1
                                        x9_5 = &x9_5[1]
                                        
                                        if (i_65 == 1)
                                            goto label_9ecc20
                            
                            if (*(arg1 + 0x60) != 0)
                                int32_t i_4 = GetExpansion(arg1 + 0x60)
                                
                                if (i_4 != 0x13)
                                    uint64_t i_28 = zx.q(i_22)
                                    
                                    if (i_22 s< 1)
                                    label_9ecc70:
                                        i_22 += 1
                                        (&var_d0)[i_28] = i_4
                                    else
                                        int32_t* x9_6 = &var_d0
                                        uint64_t i_44 = i_28
                                        
                                        while (*x9_6 != i_4)
                                            uint64_t i_67 = i_44
                                            i_44 -= 1
                                            x9_6 = &x9_6[1]
                                            
                                            if (i_67 == 1)
                                                goto label_9ecc70
                                
                                if (*(arg1 + 0x70) != 0)
                                    int32_t i_5 = GetExpansion(arg1 + 0x70)
                                    
                                    if (i_5 != 0x13)
                                        uint64_t i_29 = zx.q(i_22)
                                        
                                        if (i_22 s< 1)
                                        label_9eccc0:
                                            i_22 += 1
                                            (&var_d0)[i_29] = i_5
                                        else
                                            int32_t* x9_7 = &var_d0
                                            uint64_t i_45 = i_29
                                            
                                            while (*x9_7 != i_5)
                                                uint64_t i_69 = i_45
                                                i_45 -= 1
                                                x9_7 = &x9_7[1]
                                                
                                                if (i_69 == 1)
                                                    goto label_9eccc0
                                    
                                    if (*(arg1 + 0x80) != 0)
                                        int32_t i_6 = GetExpansion(arg1 + 0x80)
                                        
                                        if (i_6 != 0x13)
                                            uint64_t i_30 = zx.q(i_22)
                                            
                                            if (i_22 s< 1)
                                            label_9ecd10:
                                                i_22 += 1
                                                (&var_d0)[i_30] = i_6
                                            else
                                                int32_t* x9_8 = &var_d0
                                                uint64_t i_46 = i_30
                                                
                                                while (*x9_8 != i_6)
                                                    uint64_t i_70 = i_46
                                                    i_46 -= 1
                                                    x9_8 = &x9_8[1]
                                                    
                                                    if (i_70 == 1)
                                                        goto label_9ecd10
                                        
                                        if (*(arg1 + 0x90) != 0)
                                            int32_t i_7 = GetExpansion(arg1 + 0x90)
                                            
                                            if (i_7 != 0x13)
                                                uint64_t i_31 = zx.q(i_22)
                                                
                                                if (i_22 s< 1)
                                                label_9ecd64:
                                                    i_22 += 1
                                                    (&var_d0)[i_31] = i_7
                                                else
                                                    int32_t* x9_9 = &var_d0
                                                    uint64_t i_47 = i_31
                                                    
                                                    while (*x9_9 != i_7)
                                                        uint64_t i_71 = i_47
                                                        i_47 -= 1
                                                        x9_9 = &x9_9[1]
                                                        
                                                        if (i_71 == 1)
                                                            goto label_9ecd64
    else
        i_22 = 0
        x0_3 = arg1 + 0x10
        
        if (*x0_3 != 0)
            goto label_9eca9c

if (*(arg1 + 0xa0) != 0)
    int32_t i_8 = GetExpansion(arg1 + 0xa0)
    
    if (i_8 != 0x13)
        uint64_t i_32 = zx.q(i_22)
        
        if (i_22 s< 1)
        label_9ecdb4:
            i_22 += 1
            (&var_d0)[i_32] = i_8
        else
            int32_t* x9_10 = &var_d0
            uint64_t i_48 = i_32
            
            while (*x9_10 != i_8)
                uint64_t i_56 = i_48
                i_48 -= 1
                x9_10 = &x9_10[1]
                
                if (i_56 == 1)
                    goto label_9ecdb4
        
        if (*(arg1 + 0xa0) == 1 && *(arg1 + 0xa4) == 0xf3a)
            int32_t x8_14 = *(arg1 + 0xb0)
            int32_t x8_15
            
            if (x8_14 s< 0)
                x8_15 = x8_14 + 0xff
            else
                x8_15 = x8_14
            
            if (x8_14 u>> 8 != 0x13)
                int32_t i_9 = x8_15 s>> 8
                uint64_t i_36 = zx.q(i_22)
                
                if (i_22 s< 1)
                label_9ece24:
                    i_22 += 1
                    (&var_d0)[i_36] = i_9
                else
                    int32_t* x10_3 = &var_d0
                    uint64_t i_52 = i_36
                    
                    while (*x10_3 != i_9)
                        uint64_t i_64 = i_52
                        i_52 -= 1
                        x10_3 = &x10_3[1]
                        
                        if (i_64 == 1)
                            goto label_9ece24
    
    if (*(arg1 + 0xe8) != 0)
        int32_t i_10 = GetExpansion(arg1 + 0xe8)
        
        if (i_10 != 0x13)
            uint64_t i_33
            
            if (i_22 s<= 0)
                i_33 = zx.q(i_22)
            label_9ece80:
                i_22 += 1
                (&var_d0)[i_33] = i_10
            else
                i_33 = zx.q(i_22)
                int32_t* x9_12 = &var_d0
                uint64_t i_49 = i_33
                
                while (*x9_12 != i_10)
                    uint64_t i_57 = i_49
                    i_49 -= 1
                    x9_12 = &x9_12[1]
                    
                    if (i_57 == 1)
                        goto label_9ece80
            
            if (*(arg1 + 0xe8) == 1 && *(arg1 + 0xec) == 0xf3a)
                int32_t x8_19 = *(arg1 + 0xf8)
                int32_t x8_20
                
                if (x8_19 s< 0)
                    x8_20 = x8_19 + 0xff
                else
                    x8_20 = x8_19
                
                if (x8_19 u>> 8 != 0x13)
                    int32_t i_11 = x8_20 s>> 8
                    uint64_t i_37 = zx.q(i_22)
                    
                    if (i_22 s<= 0)
                    label_9ecef0:
                        i_22 += 1
                        (&var_d0)[i_37] = i_11
                    else
                        int32_t* x10_5 = &var_d0
                        uint64_t i_53 = i_37
                        
                        while (*x10_5 != i_11)
                            uint64_t i_66 = i_53
                            i_53 -= 1
                            x10_5 = &x10_5[1]
                            
                            if (i_66 == 1)
                                goto label_9ecef0
        
        if (*(arg1 + 0x130) != 0)
            int32_t i_12 = GetExpansion(arg1 + 0x130)
            
            if (i_12 != 0x13)
                uint64_t i_34
                
                if (i_22 s<= 0)
                    i_34 = zx.q(i_22)
                label_9ecf4c:
                    i_22 += 1
                    (&var_d0)[i_34] = i_12
                else
                    i_34 = zx.q(i_22)
                    int32_t* x9_14 = &var_d0
                    uint64_t i_50 = i_34
                    
                    while (*x9_14 != i_12)
                        uint64_t i_60 = i_50
                        i_50 -= 1
                        x9_14 = &x9_14[1]
                        
                        if (i_60 == 1)
                            goto label_9ecf4c
                
                if (*(arg1 + 0x130) == 1 && *(arg1 + 0x134) == 0xf3a)
                    int32_t x8_24 = *(arg1 + 0x140)
                    int32_t x8_25
                    
                    if (x8_24 s< 0)
                        x8_25 = x8_24 + 0xff
                    else
                        x8_25 = x8_24
                    
                    if (x8_24 u>> 8 != 0x13)
                        int32_t i_13 = x8_25 s>> 8
                        uint64_t i_38 = zx.q(i_22)
                        
                        if (i_22 s<= 0)
                        label_9ecfbc:
                            i_22 += 1
                            (&var_d0)[i_38] = i_13
                        else
                            int32_t* x10_7 = &var_d0
                            uint64_t i_54 = i_38
                            
                            while (*x10_7 != i_13)
                                uint64_t i_68 = i_54
                                i_54 -= 1
                                x10_7 = &x10_7[1]
                                
                                if (i_68 == 1)
                                    goto label_9ecfbc
            
            if (*(arg1 + 0x178) != 0)
                int32_t i_14 = GetExpansion(arg1 + 0x178)
                
                if (i_14 != 0x13)
                    uint64_t i_35
                    
                    if (i_22 s<= 0)
                        i_35 = zx.q(i_22)
                    label_9ed018:
                        i_22 += 1
                        (&var_d0)[i_35] = i_14
                    else
                        i_35 = zx.q(i_22)
                        int32_t* x9_16 = &var_d0
                        uint64_t i_51 = i_35
                        
                        while (*x9_16 != i_14)
                            uint64_t i_62 = i_51
                            i_51 -= 1
                            x9_16 = &x9_16[1]
                            
                            if (i_62 == 1)
                                goto label_9ed018
                    
                    if (*(arg1 + 0x178) == 1 && *(arg1 + 0x17c) == 0xf3a)
                        int32_t x8_29 = *(arg1 + 0x188)
                        int32_t x8_30
                        
                        if (x8_29 s< 0)
                            x8_30 = x8_29 + 0xff
                        else
                            x8_30 = x8_29
                        
                        if (x8_29 u>> 8 != 0x13)
                            int32_t x8_31 = x8_30 s>> 8
                            uint64_t i_21 = zx.q(i_22)
                            
                            if (i_22 s> 0)
                                int32_t* x10_9 = &var_d0
                                uint64_t i_20 = i_21
                                uint64_t i_15
                                
                                do
                                    if (*x10_9 == x8_31)
                                        goto label_9ed094
                                    
                                    i_15 = i_20
                                    i_20 -= 1
                                    x10_9 = &x10_9[1]
                                while (i_15 != 1)
                            
                            i_22 += 1
                            (&var_d0)[i_21] = x8_31

label_9ed094:

for (int64_t i_16 = 0; i_16 != 0x6b; i_16 += 1)
    void* x8_32 = arg1 + (i_16 << 4)
    
    if (*(x8_32 + 0x1c0) == 0)
        break
    
    int32_t x0_27 = GetExpansion(x8_32 + 0x1c0)
    
    if (x0_27 != 0x13)
        uint64_t j_3
        
        if (i_22 s<= 0)
            j_3 = sx.q(i_22)
        else
            j_3 = zx.q(i_22)
            int32_t* x9_19 = &var_d0
            uint64_t j_2 = j_3
            uint64_t j
            
            do
                if (*x9_19 == x0_27)
                    goto label_9ed0ac
                
                j = j_2
                j_2 -= 1
                x9_19 = &x9_19[1]
            while (j != 1)
        
        i_22 += 1
        (&var_d0)[j_3] = x0_27
    
label_9ed0ac:

if (*(arg1 + 0x90) == 0)
    for (int64_t i_17 = 0; i_17 != 0x20; i_17 += 1)
        int32_t j_1 = *(arg1 + (i_17 << 4) + 0x9c8)
        
        if (j_1 == 0)
            break
        
        uint64_t i_39
        
        if (i_22 s<= 0)
            i_39 = sx.q(i_22)
        label_9ed164:
            i_22 += 1
            (&var_d0)[i_39] = j_1
        else
            i_39 = zx.q(i_22)
            int32_t* x12_5 = &var_d0
            uint64_t i_55 = i_39
            
            while (*x12_5 != j_1)
                uint64_t i_59 = i_55
                i_55 -= 1
                x12_5 = &x12_5[1]
                
                if (i_59 == 1)
                    goto label_9ed164

if (i_22 s< 1)
    return 0

uint64_t result = 0
uint64_t i_19 = zx.q(i_22)
int32_t* x9_20 = &var_d0
uint64_t i_18

do
    int32_t x11_16 = *x9_20 - 2
    
    if (x11_16 u<= 0x11)
        result = zx.q(*(&data_7ac038 + (sx.q(x11_16) << 2))) | zx.q(result.d)
    
    i_18 = i_19
    i_19 -= 1
    x9_20 = &x9_20[1]
while (i_18 != 1)
return result
