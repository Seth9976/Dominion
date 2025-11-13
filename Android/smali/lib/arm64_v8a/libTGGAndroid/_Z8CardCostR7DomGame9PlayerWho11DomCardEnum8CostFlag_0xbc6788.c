// 函数: _Z8CardCostR7DomGame9PlayerWho11DomCardEnum8CostFlag
// 地址: 0xbc6788
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg1 + 0xd50)
int32_t x8_4 = (arg3 + (x21 << 0x10)) s% 0x3e5
int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x26 = arg3
int32_t x24 = arg2
int32_t var_484 = arg4
void* x0_3

if (x9_1 != 0)
    while (*x9_1 != x26 || x9_1[1] != x21)
        x9_1 = *(x9_1 + 0x10)
        
        if (x9_1 == 0)
            goto label_bc67fc
    
    x0_3 = *(x9_1 + 8)
else
label_bc67fc:
    DomDefGetSlow(zx.q(x26), zx.q(x21))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_2 = *(&data_1838a20 + x8_5)
    *x0_1 = x26
    x0_1[1] = x21
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_2
    x0_3 = DomDefGetSlow(zx.q(x26), zx.q(x21))
    *(x0_1 + 8) = x0_3

uint64_t x23_2 = zx.q(*(x0_3 + 0xc4))
char var_74 = 0
int32_t x8_6 = *(x0_3 + 0xe0)
int32_t fp = x23_2.d & 0xff
int32_t x21_1 = x23_2.d u>> 0x10 & 1
uint64_t x25 = (zx.q(x23_2.d u>> 0x12) & 1) << 0x20

if (x8_6 == 0)
    goto label_bc69dc

int64_t x8_7

if (x8_6 != 3)
    int32_t x8_9 = *(x0_3 + 0x1a0)
    
    if (x8_9 == 0)
        goto label_bc69dc
    
    if (x8_9 == 3)
        x8_7 = 1
        goto label_bc6954
    
    int32_t x8_11 = *(x0_3 + 0x260)
    
    if (x8_11 == 0)
        goto label_bc69dc
    
    if (x8_11 == 3)
        x8_7 = 2
        goto label_bc6954
    
    int32_t x8_13 = *(x0_3 + 0x320)
    
    if (x8_13 == 0)
        goto label_bc69dc
    
    if (x8_13 == 3)
        x8_7 = 3
        goto label_bc6954
    
    int32_t x8_15 = *(x0_3 + 0x3e0)
    
    if (x8_15 == 0)
        goto label_bc69dc
    
    if (x8_15 == 3)
        x8_7 = 4
        goto label_bc6954
    
    int32_t x8_17 = *(x0_3 + 0x4a0)
    
    if (x8_17 == 0)
        goto label_bc69dc
    
    if (x8_17 == 3)
        x8_7 = 5
        goto label_bc6954
    
    int32_t x8_19 = *(x0_3 + 0x560)
    
    if (x8_19 == 0)
        goto label_bc69dc
    
    if (x8_19 == 3)
        x8_7 = 6
        goto label_bc6954
    
    if (*(x0_3 + 0x620) != 3)
        goto label_bc69dc
    
    x8_7 = 7
    goto label_bc6954

x8_7 = 0
label_bc6954:
int64_t x20_2 = *(x0_3 + x8_7 * 0xc0 + 0xf8)

if (x20_2 == 0 || (var_484 & 1) != 0)
    goto label_bc69dc

int64_t var_478 = 0
DomPushUIContext(arg1, zx.q(x24), &var_478)
x23_2 = x20_2(&var_74)
fp = x23_2.d & 0xff
x21_1 = x23_2.d u>> 0x10 & 1
int32_t* x8_24 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
uint32_t x10_4 = zx.d(var_74)
*x8_24 -= 1
int32_t x8_28

if (x10_4 == 0)
    x25 = (x23_2 & 0x100000) | (1 & x23_2 u>> 0x12) << 0x20
label_bc69dc:
    uint64_t x1_3 = zx.q(x26)
    int32_t x26_1 = x23_2.d s>> 0x18
    int32_t x0_10 = PileSource(arg1, x1_3)
    int32_t var_488_1
    
    if (x0_10 == 0)
    label_bc6a30:
        var_488_1 = 0
    else
        void* __offset(DomGame, 0x15a0) x9_8 = arg1 + 0x15a0
        int64_t x8_30 = -0x41
        
        while (true)
            if (*(x9_8 - 4) == x0_10 || *x9_8 == x0_10)
                var_488_1 = x8_30.d + 0x48
                break
            
            int64_t temp0_1 = x8_30
            x8_30 += 1
            x9_8 += 0x10
            
            if (temp0_1 u>= -1)
                goto label_bc6a30
            
            continue
    
    CollectAllOngoing(arg1, zx.q(x24), &var_478, 0)
    int32_t i_11
    uint64_t i_10 = zx.q(i_11)
    
    if (i_10.d s>= 1)
        int64_t* x20_3 = &var_478
        uint64_t i_8 = i_10
        uint64_t i
        
        do
            uint64_t x27_1 = zx.q(*x20_3)
            int16_t* x8_35
            
            if ((x27_1 & 0x30) == 0)
                void* x0_16 = AbilityGetRegistered(arg1, x27_1)
                
                if (*(x0_16 + 0x4c) != 3)
                    void* x0_18 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_39 = x0_18 + sx.q(*(x0_18 + 0x13000)) * 0x98
                    *(*(x8_39 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_40 = *(x8_39 - 0x90)
                    *(x8_40 + 0x1a2c) = *(x8_40 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                if (*(x0_16 + 0x50) == 0x2c)
                    void* x0_20 = AbilityGetRegistered(arg1, x27_1)
                    
                    if (*(x0_20 + 0x4c) != 3)
                        void* x0_22 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_45 = x0_22 + sx.q(*(x0_22 + 0x13000)) * 0x98
                        *(*(x8_45 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_46 = *(x8_45 - 0x90)
                        *(x8_46 + 0x1a2c) = *(x8_46 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    x8_35 = x0_20 + 0x54
                    goto label_bc6a80
            else if (*(AbilityGetStatic(arg1, x27_1) + 0x18) == 0x2c)
                x8_35 = AbilityGetStatic(arg1, x27_1) + 0xa0
            label_bc6a80:
                uint32_t x8_32 = zx.d(*x8_35)
                int32_t x8_33
                
                x8_33 = x8_32 == x0_10 ? fp : 0
                
                if (x8_32 == x0_10)
                    fp = 0
                
                x26_1 += x8_33
            i = i_8
            i_8 -= 1
            x20_3 += 4
        while (i != 1)
        
        if (i_10.d s>= 1)
            int64_t* x20_4 = &var_478
            uint64_t i_9 = i_10
            uint64_t i_1
            
            do
                uint64_t x27_3 = zx.q(*x20_4)
                int32_t x8_47
                int32_t x8_50
                
                if ((x27_3 & 0x30) == 0)
                    void* x0_27 = AbilityGetRegistered(arg1, x27_3)
                    
                    if (*(x0_27 + 0x4c) != 3)
                        void* x0_29 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_54 = x0_29 + sx.q(*(x0_29 + 0x13000)) * 0x98
                        *(*(x8_54 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_55 = *(x8_54 - 0x90)
                        *(x8_55 + 0x1a2c) = *(x8_55 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    if (*(x0_27 + 0x50) == 0x20)
                        void* x0_31 = AbilityGetRegistered(arg1, x27_3)
                        
                        if (*(x0_31 + 0x4c) != 3)
                            void* x0_33 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_60 = x0_33 + sx.q(*(x0_33 + 0x13000)) * 0x98
                            *(*(x8_60 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_61 = *(x8_60 - 0x90)
                            *(x8_61 + 0x1a2c) = *(x8_61 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        x8_50 = *(x0_31 + 0x54)
                        
                        if (x0_10 == zx.d(x8_50.w))
                            x8_47 = fp - (x8_50 s>> 0x10)
                            fp = x8_47 & not.d(x8_47 s>> 0x1f)
                else if (*(AbilityGetStatic(arg1, x27_3) + 0x18) == 0x20)
                    x8_50 = *(AbilityGetStatic(arg1, x27_3) + 0xa0)
                    
                    if (x0_10 == zx.d(x8_50.w))
                        x8_47 = fp - (x8_50 s>> 0x10)
                        fp = x8_47 & not.d(x8_47 s>> 0x1f)
                i_1 = i_9
                i_9 -= 1
                x20_4 += 4
            while (i_1 != 1)
            
            if (i_10.d s>= 1)
                int64_t* x20_5 = &var_478
                uint64_t i_2
                
                do
                    uint64_t x27_5 = zx.q(*x20_5)
                    int32_t x8_63
                    int32_t x8_66
                    
                    if ((x27_5 & 0x30) == 0)
                        void* x0_38 = AbilityGetRegistered(arg1, x27_5)
                        
                        if (*(x0_38 + 0x4c) != 3)
                            void* x0_40 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_70 = x0_40 + sx.q(*(x0_40 + 0x13000)) * 0x98
                            *(*(x8_70 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_71 = *(x8_70 - 0x90)
                            *(x8_71 + 0x1a2c) = *(x8_71 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        if (*(x0_38 + 0x50) == 0x2e)
                            void* x0_42 = AbilityGetRegistered(arg1, x27_5)
                            
                            if (*(x0_42 + 0x4c) != 3)
                                void* x0_44 = __emutls_get_address(__emutls_v.gContextStack_tl)
                                void* x8_76 = x0_44 + sx.q(*(x0_44 + 0x13000)) * 0x98
                                *(*(x8_76 - 0x90) + 0x1a28) = 0xffffffff
                                void* x8_77 = *(x8_76 - 0x90)
                                *(x8_77 + 0x1a2c) = *(x8_77 + 0x1a24)
                                XTrace("game thread yield (error)")
                                xco_yield()
                                XTrace("game thread resume (error)")
                            
                            x8_66 = *(x0_42 + 0x54)
                            
                            if (x0_10 == zx.d(x8_66.w))
                                x8_63 = x26_1 - (x8_66 s>> 0x10)
                                x26_1 = x8_63 & not.d(x8_63 s>> 0x1f)
                    else if (*(AbilityGetStatic(arg1, x27_5) + 0x18) == 0x2e)
                        x8_66 = *(AbilityGetStatic(arg1, x27_5) + 0xa0)
                        
                        if (x0_10 == zx.d(x8_66.w))
                            x8_63 = x26_1 - (x8_66 s>> 0x10)
                            x26_1 = x8_63 & not.d(x8_63 s>> 0x1f)
                    i_2 = i_10
                    i_10 -= 1
                    x20_5 += 4
                while (i_2 != 1)
    
    int32_t var_70[0x4]
    int32_t x0_46
    int32_t x6_1
    int32_t x16_1
    x0_46, x6_1, x16_1 = LandscapeFromRefPile(arg1 + 0xd54, zx.q(x0_10), &var_70)
    
    if (x0_46 s> 0)
        uint64_t x9_22
        int64_t x11_1
        
        if (var_70[0] != 0x1147)
            x9_22 = zx.q(x0_46)
            int64_t x12_1 = 1
            
            do
                x11_1 = x12_1
                
                if (x9_22 == x12_1)
                    break
                
                x12_1 = x11_1 + 1
            while (var_70[x11_1] != 0x1147)
        
        if (var_70[0] == 0x1147 || x11_1 u< x9_22)
            if (fp s> 0)
                fp -= 1
            else
                fp = 0
    
    uint64_t x9_23 = zx.q(*(arg1 + 0x19ac))
    int32_t x8_80
    
    x8_80 = var_488_1 == 0x476 ? 6 : var_488_1
    
    if (x9_23.d s>= 1)
        int32_t x11_2
        int64_t i_12
        
        if (x9_23.d u>= 3)
            i_12 = x9_23 & 0xfffffffe
            int32_t x11_3 = 0
            int32_t x12_3 = 0
            void* __offset(DomGame, 0x15f88) x13_1 = arg1 + 0x15f88
            int64_t i_7 = i_12
            int64_t i_3
            
            do
                int32_t x15_5 = *(x13_1 - 0x18)
                
                if (x15_5 == x8_80)
                    x16_1 = *(x13_1 - 0x1c)
                
                int32_t x17_3 = *(x13_1 + 8)
                
                if (x17_3 == x8_80)
                    x0_46 = *(x13_1 + 4)
                
                int32_t x3_2 = x16_1 == 0xffffffff ? 1 : 0
                int32_t x1_18 = x3_2 & (x15_5 == x8_80 ? 1 : 0)
                
                if (x1_18 == 1)
                    x3_2 = *(x13_1 - 0x20)
                
                int32_t x2_6 = (x0_46 == 0xffffffff ? 1 : 0) & (x17_3 == x8_80 ? 1 : 0)
                
                if (x2_6 != 0)
                    x6_1 = *x13_1
                
                int32_t x4_2 = x3_2 != 0x1000 ? 1 : 0
                int32_t x5_1 = x6_1 == 0x1000 ? 1 : 0
                
                if (((x4_2 | (x1_18 ^ 1)) & 1) == 0)
                    x4_2 = *(x13_1 - 0xc)
                
                if ((x5_1 & x2_6) != 0)
                    x5_1 = *(x13_1 + 0x14)
                
                int32_t x0_47 = x2_6 & (x6_1 != 0x1000 ? 1 : 0)
                x6_1 = x15_5 == x8_80 ? 1 : 0
                x16_1 = (x6_1 & (x16_1 != 0xffffffff ? 1 : 0)) | (x1_18 & (x3_2 != 0x1000 ? 1 : 0))
                x0_46 = ((x17_3 == x8_80 ? 1 : 0) & (x0_46 != 0xffffffff ? 1 : 0)) | x0_47
                int32_t x15_3
                
                if ((x16_1 | (x15_5 != x8_80 ? 1 : 0)) != 0)
                    x15_3 = 0
                else
                    x15_3 = x4_2
                
                x11_3 += x15_3
                int32_t x15_4
                
                if ((x0_46 | (x17_3 != x8_80 ? 1 : 0)) != 0)
                    x15_4 = 0
                else
                    x15_4 = x5_1
                
                i_3 = i_7
                i_7 -= 2
                x12_3 += x15_4
                x13_1 += 0x40
            while (i_3 != 2)
            x11_2 = x12_3 + x11_3
            
            if (i_12 != x9_23)
                goto label_bc7110
        else
            i_12 = 0
            x11_2 = 0
        label_bc7110:
            void* x12_5 = arg1 + (i_12 << 5) + 0x15f68
            int64_t i_6 = x9_23 - i_12
            int64_t i_4
            
            do
                if (*(x12_5 + 8) == x8_80 && *(x12_5 + 4) == 0xffffffff && *x12_5 == 0x1000)
                    x11_2 += *(x12_5 + 0x14)
                
                i_4 = i_6
                i_6 -= 1
                x12_5 += 0x20
            while (i_4 != 1)
        
        if (x11_2 s>= 1)
            int32_t x8_81 = fp - x11_2
            fp = x8_81 & not.d(x8_81 s>> 0x1f)
    
    int32_t x23_4 = *(x0_3 + 0xc0)
    int32_t x24_1 = *(arg1 + 0xd50)
    int32_t x8_86 = (x23_4 + (x24_1 << 0x10)) s% 0x3e5
    int32_t* x9_25 = *(&data_1838a20 + (sx.q(x8_86) << 3))
    void* x0_51
    
    if (x9_25 != 0)
        while (*x9_25 != x23_4 || x9_25[1] != x24_1)
            x9_25 = *(x9_25 + 0x10)
            
            if (x9_25 == 0)
                goto label_bc7080
        
        x0_51 = *(x9_25 + 8)
    else
    label_bc7080:
        DomDefGetSlow(zx.q(x23_4), zx.q(x24_1))
        int32_t* x0_49 = malloc(0x18)
        int64_t x8_87 = sx.q(x8_86) << 3
        int64_t x9_26 = *(&data_1838a20 + x8_87)
        *x0_49 = x23_4
        x0_49[1] = x24_1
        *(&data_1838a20 + x8_87) = x0_49
        *(x0_49 + 0x10) = x9_26
        x0_51 = DomDefGetSlow(zx.q(x23_4), zx.q(x24_1))
        *(x0_49 + 8) = x0_51
    
    if ((*(x0_51 + 0xc8) & 0x9407f000400) == 0)
        int32_t x8_90 = fp - SumOngoingParam(arg1, &var_478, 0x33)
        fp = x8_90 & not.d(x8_90 s>> 0x1f)
        
        if ((var_484 & 1) == 0)
        label_bc7178:
            int32_t x9_29 = *(arg1 + 0x19ac)
            int32_t x20_7 = *(arg1 + 0x19d4)
            
            if (x9_29 s>= 0x100)
                void* x0_55 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_94 = x0_55 + sx.q(*(x0_55 + 0x13000)) * 0x98
                *(*(x8_94 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_95 = *(x8_94 - 0x90)
                *(x8_95 + 0x1a2c) = *(x8_95 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                x9_29 = *(arg1 + 0x19ac)
            
            if (x9_29 s>= 1)
                int64_t i_5 = 0
                void* __offset(DomGame, 0x15f6c) x11_4 = arg1 + 0x15f6c
                int64_t x9_30 = 0
                
                do
                    if (*(x11_4 - 4) == 0xb07 && *x11_4 == x20_7)
                        if (i_5.d != 1 && *(arg1 + (x9_30 s>> 0x1b) + 0x15f70) == var_488_1)
                            int32_t x8_98
                            
                            x8_98 = fp s> 2 ? fp : 2
                            
                            fp = x8_98 - 2
                        
                        break
                    
                    i_5 -= 1
                    x9_30 += 0x100000000
                    x11_4 += 0x20
                while (0 - zx.q(x9_29) != i_5)
            
            uint64_t x1_22 = zx.q(x1_3.d)
            
            if (x1_22.d != 0 && (CardIsFast(arg1, x1_22, 4) & 1) != 0)
                int32_t x8_99 = fp - SumOngoingParam(arg1, &var_478, 3)
                fp = x8_99 & not.d(x8_99 s>> 0x1f)
            
            int32_t x20_8 = *(x0_3 + 0xc0)
            int32_t x21_3 = *(arg1 + 0xd50)
            int32_t x8_104 = (x20_8 + (x21_3 << 0x10)) s% 0x3e5
            int32_t* x9_33 = *(&data_1838a20 + (sx.q(x8_104) << 3))
            int32_t x8_107
            
            if (x9_33 != 0)
                while (*x9_33 != x20_8 || x9_33[1] != x21_3)
                    x9_33 = *(x9_33 + 0x10)
                    
                    if (x9_33 == 0)
                        goto label_bc72d8
                
                if ((*(*(x9_33 + 8) + 0xc8) & 0x9407f000400) == 0)
                    x8_107 = fp - SumOngoingParam(arg1, &var_478, 2)
                    fp = x8_107 & not.d(x8_107 s>> 0x1f)
            else
            label_bc72d8:
                DomDefGetSlow(zx.q(x20_8), zx.q(x21_3))
                int32_t* x0_61 = malloc(0x18)
                int64_t x8_105 = sx.q(x8_104) << 3
                int64_t x9_34 = *(&data_1838a20 + x8_105)
                *x0_61 = x20_8
                x0_61[1] = x21_3
                *(&data_1838a20 + x8_105) = x0_61
                *(x0_61 + 0x10) = x9_34
                void* x0_63 = DomDefGetSlow(zx.q(x20_8), zx.q(x21_3))
                *(x0_61 + 8) = x0_63
                
                if ((*(x0_63 + 0xc8) & 0x9407f000400) == 0)
                    x8_107 = fp - SumOngoingParam(arg1, &var_478, 2)
                    fp = x8_107 & not.d(x8_107 s>> 0x1f)
    else if ((var_484 & 1) == 0)
        goto label_bc7178
    
    int32_t x8_109
    
    if (x21_1 == 0)
        x8_109 = fp
    else
        x8_109 = fp | 0x10000
    
    int32_t x8_110 = x8_109 | x26_1 << 0x18
    
    if ((x25 & 0x100000000) == 0)
        x8_28 = x8_110
    else
        x8_28 = x8_110 | 0x40000
else
    x8_28 = (0xfffeffff & fp) | (1 & x21_1) << 0x10 | (x23_2.d & 0xff000000)
        | ((x23_2 << 0xe & 0x100000000) u>> 0xe).d

return zx.q(x8_28)
