// 函数: _Z19ExtraPileSourceCardR14DomKingdomData11DomCardEnum14DomGameVersion
// 地址: 0xbf7af0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
int32_t x20 = arg2
int64_t i = 0
int32_t x24 = arg3 << 0x10
DomCardEnum var_ce0
int32_t x22_1

do
    x22_1 = *(arg1 + (i << 2))
    
    if (x22_1 == 0)
        break
    
    int32_t x8_2 = (x22_1 + x24) s% 0x3e5
    int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_2) << 3))
    DomCardDef* x0_3
    
    if (x9_5 != 0)
        while (*x9_5 != x22_1 || x9_5[1] != x19)
            x9_5 = *(x9_5 + 0x10)
            
            if (x9_5 == 0)
                goto label_bf7b7c
        
        x0_3 = *(x9_5 + 8)
    else
    label_bf7b7c:
        DomDefGetSlow(zx.q(x22_1), zx.q(x19))
        int32_t* x0_1 = malloc(0x18)
        int64_t x8_3 = sx.q(x8_2) << 3
        int64_t x9_6 = *(&data_1838a20 + x8_3)
        *x0_1 = x22_1
        x0_1[1] = x19
        *(&data_1838a20 + x8_3) = x0_1
        *(x0_1 + 0x10) = x9_6
        x0_3 = DomDefGetSlow(zx.q(x22_1), zx.q(x19))
        *(x0_1 + 8) = x0_3
    
    int32_t j_4 = GetRefCards(x0_3, arg1, &var_ce0)
    
    if (j_4 s>= 1)
        uint64_t j_2 = zx.q(j_4)
        DomCardEnum* x9_7 = &var_ce0
        uint64_t j
        
        do
            if (*x9_7 == x20)
                return zx.q(x22_1)
            
            j = j_2
            j_2 -= 1
            x9_7 += 4
        while (j != 1)
    
    i += 1
while (i != 0xa)

x22_1 = *(arg1 + 0x28)

if (x22_1 != 0)
    int32_t x8_5 = (x22_1 + x24) s% 0x3e5
    int32_t* x9_12 = *(&data_1838a20 + (sx.q(x8_5) << 3))
    DomCardDef* x0_7
    
    if (x9_12 != 0)
        while (*x9_12 != x22_1 || x9_12[1] != x19)
            x9_12 = *(x9_12 + 0x10)
            
            if (x9_12 == 0)
                goto label_bf7c54
        
        x0_7 = *(x9_12 + 8)
    else
    label_bf7c54:
        DomDefGetSlow(zx.q(x22_1), zx.q(x19))
        int32_t* x0_5 = malloc(0x18)
        int64_t x8_6 = sx.q(x8_5) << 3
        int64_t x9_13 = *(&data_1838a20 + x8_6)
        *x0_5 = x22_1
        x0_5[1] = x19
        *(&data_1838a20 + x8_6) = x0_5
        *(x0_5 + 0x10) = x9_13
        x0_7 = DomDefGetSlow(zx.q(x22_1), zx.q(x19))
        *(x0_5 + 8) = x0_7
    
    int32_t i_10 = GetRefCards(x0_7, arg1, &var_ce0)
    
    if (i_10 s>= 1)
        uint64_t i_6 = zx.q(i_10)
        DomCardEnum* x9_14 = &var_ce0
        uint64_t i_1
        
        do
            if (*x9_14 == x20)
                return zx.q(x22_1)
            
            i_1 = i_6
            i_6 -= 1
            x9_14 += 4
        while (i_1 != 1)
    
    x22_1 = *(arg1 + 0x64)
    
    if (x22_1 != 0)
        int32_t x8_8 = (x22_1 + x24) s% 0x3e5
        int32_t* x9_19 = *(&data_1838a20 + (sx.q(x8_8) << 3))
        DomCardDef* x0_11
        
        if (x9_19 != 0)
            while (*x9_19 != x22_1 || x9_19[1] != x19)
                x9_19 = *(x9_19 + 0x10)
                
                if (x9_19 == 0)
                    goto label_bf7d28
            
            x0_11 = *(x9_19 + 8)
        else
        label_bf7d28:
            DomDefGetSlow(zx.q(x22_1), zx.q(x19))
            int32_t* x0_9 = malloc(0x18)
            int64_t x8_9 = sx.q(x8_8) << 3
            int64_t x9_20 = *(&data_1838a20 + x8_9)
            *x0_9 = x22_1
            x0_9[1] = x19
            *(&data_1838a20 + x8_9) = x0_9
            *(x0_9 + 0x10) = x9_20
            x0_11 = DomDefGetSlow(zx.q(x22_1), zx.q(x19))
            *(x0_9 + 8) = x0_11
        
        int32_t i_11 = GetRefCards(x0_11, arg1, &var_ce0)
        
        if (i_11 s>= 1)
            uint64_t i_7 = zx.q(i_11)
            DomCardEnum* x9_21 = &var_ce0
            uint64_t i_2
            
            do
                if (*x9_21 == x20)
                    return zx.q(x22_1)
                
                i_2 = i_7
                i_7 -= 1
                x9_21 += 4
            while (i_2 != 1)
        
        x22_1 = *(arg1 + 0xa0)
        
        if (x22_1 != 0)
            int32_t x8_11 = (x22_1 + x24) s% 0x3e5
            int32_t* x9_26 = *(&data_1838a20 + (sx.q(x8_11) << 3))
            DomCardDef* x0_15
            
            if (x9_26 != 0)
                while (*x9_26 != x22_1 || x9_26[1] != x19)
                    x9_26 = *(x9_26 + 0x10)
                    
                    if (x9_26 == 0)
                        goto label_bf7dfc
                
                x0_15 = *(x9_26 + 8)
            else
            label_bf7dfc:
                DomDefGetSlow(zx.q(x22_1), zx.q(x19))
                int32_t* x0_13 = malloc(0x18)
                int64_t x8_12 = sx.q(x8_11) << 3
                int64_t x9_27 = *(&data_1838a20 + x8_12)
                *x0_13 = x22_1
                x0_13[1] = x19
                *(&data_1838a20 + x8_12) = x0_13
                *(x0_13 + 0x10) = x9_27
                x0_15 = DomDefGetSlow(zx.q(x22_1), zx.q(x19))
                *(x0_13 + 8) = x0_15
            
            int32_t i_12 = GetRefCards(x0_15, arg1, &var_ce0)
            
            if (i_12 s>= 1)
                uint64_t i_8 = zx.q(i_12)
                DomCardEnum* x9_28 = &var_ce0
                uint64_t i_3
                
                do
                    if (*x9_28 == x20)
                        return zx.q(x22_1)
                    
                    i_3 = i_8
                    i_8 -= 1
                    x9_28 += 4
                while (i_3 != 1)
            
            x22_1 = *(arg1 + 0xdc)
            
            if (x22_1 != 0)
                int32_t x8_14 = (x22_1 + x24) s% 0x3e5
                int32_t* x9_33 = *(&data_1838a20 + (sx.q(x8_14) << 3))
                DomCardDef* x0_19
                
                if (x9_33 != 0)
                    while (*x9_33 != x22_1 || x9_33[1] != x19)
                        x9_33 = *(x9_33 + 0x10)
                        
                        if (x9_33 == 0)
                            goto label_bf7ed0
                    
                    x0_19 = *(x9_33 + 8)
                else
                label_bf7ed0:
                    DomDefGetSlow(zx.q(x22_1), zx.q(x19))
                    int32_t* x0_17 = malloc(0x18)
                    int64_t x8_15 = sx.q(x8_14) << 3
                    int64_t x9_34 = *(&data_1838a20 + x8_15)
                    *x0_17 = x22_1
                    x0_17[1] = x19
                    *(&data_1838a20 + x8_15) = x0_17
                    *(x0_17 + 0x10) = x9_34
                    x0_19 = DomDefGetSlow(zx.q(x22_1), zx.q(x19))
                    *(x0_17 + 8) = x0_19
                
                int32_t i_13 = GetRefCards(x0_19, arg1, &var_ce0)
                
                if (i_13 s>= 1)
                    uint64_t i_9 = zx.q(i_13)
                    DomCardEnum* x9_35 = &var_ce0
                    uint64_t i_4
                    
                    do
                        if (*x9_35 == x20)
                            return zx.q(x22_1)
                        
                        i_4 = i_9
                        i_9 -= 1
                        x9_35 += 4
                    while (i_4 != 1)

for (int64_t i_5 = 0; i_5 != 0x6b; i_5 += 1)
    x22_1 = *(arg1 + (i_5 << 2) + 0x118)
    
    if (x22_1 != 0)
        int32_t x8_18 = (x22_1 + x24) s% 0x3e5
        int32_t* x9_40 = *(&data_1838a20 + (sx.q(x8_18) << 3))
        DomCardDef* x0_23
        
        if (x9_40 != 0)
            while (*x9_40 != x22_1 || x9_40[1] != x19)
                x9_40 = *(x9_40 + 0x10)
                
                if (x9_40 == 0)
                    goto label_bf7fc0
            
            x0_23 = *(x9_40 + 8)
        else
        label_bf7fc0:
            DomDefGetSlow(zx.q(x22_1), zx.q(x19))
            int32_t* x0_21 = malloc(0x18)
            int64_t x8_19 = sx.q(x8_18) << 3
            int64_t x9_41 = *(&data_1838a20 + x8_19)
            *x0_21 = x22_1
            x0_21[1] = x19
            *(&data_1838a20 + x8_19) = x0_21
            *(x0_21 + 0x10) = x9_41
            x0_23 = DomDefGetSlow(zx.q(x22_1), zx.q(x19))
            *(x0_21 + 8) = x0_23
        
        int32_t j_5 = GetRefCards(x0_23, arg1, &var_ce0)
        
        if (j_5 s>= 1)
            uint64_t j_3 = zx.q(j_5)
            DomCardEnum* x9_42 = &var_ce0
            uint64_t j_1
            
            do
                if (*x9_42 == x20)
                    return zx.q(x22_1)
                
                j_1 = j_3
                j_3 -= 1
                x9_42 += 4
            while (j_1 != 1)

return 0
