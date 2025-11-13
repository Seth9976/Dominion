// 函数: _Z14CalcCanBuyInfoR7DomGame9PlayerWhoR10CanBuyInfo
// 地址: 0xbc98fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = arg1 + muls.dp.d(arg2.d, 0x5a30)
*arg3 = *(x22 + 0x18194)
*(arg3 + 4) = GetCoffers(arg1, arg2)
*(arg3 + 8) = *(x22 + 0x181a0)
int32_t var_468[0x100]
int64_t x1_1 = CollectAllOngoing(arg1, zx.q(arg2.d), &var_468, 0)
int32_t i_11
uint64_t i_10 = zx.q(i_11)
uint64_t i_9 = i_10
int64_t x1_2

if ((i_10.d & 0x80000000) != 0)
    void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_4 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
    *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_5 = *(x8_4 - 0x90)
    *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    *(arg3 + 0xc) =
        (CountOngoing(arg1, XTrace("game thread resume (error)"), &var_468, 9, 0, 0) s> 0 ? 1 : 0).b
    i_10 = i_9
    void* x8_8 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
    *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_9 = *(x8_8 - 0x90)
    *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    x1_2 = XTrace("game thread resume (error)")
else
    int32_t x0_3
    x0_3, x1_2 = CountOngoing(arg1, x1_1, &var_468, 9, 0, 0)
    *(arg3 + 0xc) = (x0_3 s> 0 ? 1 : 0).b

*(arg3 + 0xd) = (CountOngoing(arg1, x1_2, &var_468, 0xe, 0, 0) s> 0 ? 1 : 0).b
*(arg3 + 0xc90) = 0

if (i_10.d s<= 0)
    *(arg3 + 0xe48) = 0
else
    int32_t (* x27_1)[0x100] = &var_468
    uint64_t i_8 = i_10
    uint64_t i
    
    do
        uint64_t x24_1 = zx.q(*x27_1)
        int32_t* x8_11
        
        if ((x24_1 & 0x30) == 0)
            void* x0_14 = AbilityGetRegistered(arg1, x24_1)
            
            if (*(x0_14 + 0x4c) != 3)
                void* x0_16 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_17 = x0_16 + sx.q(*(x0_16 + 0x13000)) * 0x98
                *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_18 = *(x8_17 - 0x90)
                *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if (*(x0_14 + 0x50) == 8)
                void* x0_18 = AbilityGetRegistered(arg1, x24_1)
                
                if (*(x0_18 + 0x4c) != 3)
                    void* x0_20 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_23 = x0_20 + sx.q(*(x0_20 + 0x13000)) * 0x98
                    *(*(x8_23 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_24 = *(x8_23 - 0x90)
                    *(x8_24 + 0x1a2c) = *(x8_24 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                x8_11 = x0_18 + 0x54
                goto label_bc9aac
        else if (*(AbilityGetStatic(arg1, x24_1) + 0x18) == 8)
            x8_11 = AbilityGetStatic(arg1, x24_1) + 0xa0
        label_bc9aac:
            int64_t x9_5 = sx.q(*(arg3 + 0xc90))
            int32_t x8_12 = *x8_11
            *(arg3 + 0xc90) = x9_5.d + 1
            *(arg3 + (x9_5 << 2) + 0x10) = x8_12
        i = i_8
        i_8 -= 1
        x27_1 = &(*x27_1)[1]
    while (i != 1)
    *(arg3 + 0xe48) = 0
    
    if (i_10.d s>= 1)
        int32_t (* x27_2)[0x100] = &var_468
        uint64_t i_6 = i_10
        uint64_t i_1
        
        do
            uint64_t x24_3 = zx.q(*x27_2)
            int16_t* x8_25
            
            if ((x24_3 & 0x30) == 0)
                void* x0_25 = AbilityGetRegistered(arg1, x24_3)
                
                if (*(x0_25 + 0x4c) != 3)
                    void* x0_27 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_31 = x0_27 + sx.q(*(x0_27 + 0x13000)) * 0x98
                    *(*(x8_31 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_32 = *(x8_31 - 0x90)
                    *(x8_32 + 0x1a2c) = *(x8_32 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                if (*(x0_25 + 0x50) == 0x2c)
                    void* x0_29 = AbilityGetRegistered(arg1, x24_3)
                    
                    if (*(x0_29 + 0x4c) != 3)
                        void* x0_31 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_37 = x0_31 + sx.q(*(x0_31 + 0x13000)) * 0x98
                        *(*(x8_37 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_38 = *(x8_37 - 0x90)
                        *(x8_38 + 0x1a2c) = *(x8_38 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    x8_25 = x0_29 + 0x54
                    goto label_bc9c04
            else if (*(AbilityGetStatic(arg1, x24_3) + 0x18) == 0x2c)
                x8_25 = AbilityGetStatic(arg1, x24_3) + 0xa0
            label_bc9c04:
                int64_t x9_11 = sx.q(*(arg3 + 0xe48))
                uint32_t x8_26 = zx.d(*x8_25)
                *(arg3 + 0xe48) = x9_11.d + 1
                *(arg3 + (x9_11 << 2) + 0xde0) = x8_26
            i_1 = i_6
            i_6 -= 1
            x27_2 = &(*x27_2)[1]
        while (i_1 != 1)

if (*(arg1 + 0x19ec) s/ *(arg1 + 0xd40) s<= 4 && i_9.d s>= 1)
    uint64_t i_7 = i_9
    int32_t (* x27_3)[0x100] = &var_468
    uint64_t i_2
    
    do
        uint64_t x24_5 = zx.q(*x27_3)
        int32_t* x8_42
        
        if ((x24_5 & 0x30) == 0)
            void* x0_36 = AbilityGetRegistered(arg1, x24_5)
            
            if (*(x0_36 + 0x4c) != 3)
                void* x0_38 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_48 = x0_38 + sx.q(*(x0_38 + 0x13000)) * 0x98
                *(*(x8_48 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_49 = *(x8_48 - 0x90)
                *(x8_49 + 0x1a2c) = *(x8_49 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if (*(x0_36 + 0x50) == 0x26)
                void* x0_40 = AbilityGetRegistered(arg1, x24_5)
                
                if (*(x0_40 + 0x4c) != 3)
                    void* x0_42 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_54 = x0_42 + sx.q(*(x0_42 + 0x13000)) * 0x98
                    *(*(x8_54 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_55 = *(x8_54 - 0x90)
                    *(x8_55 + 0x1a2c) = *(x8_55 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                x8_42 = x0_40 + 0x54
                goto label_bc9d74
        else if (*(AbilityGetStatic(arg1, x24_5) + 0x18) == 0x26)
            x8_42 = AbilityGetStatic(arg1, x24_5) + 0xa0
        label_bc9d74:
            int64_t x9_18 = sx.q(*(arg3 + 0xc90))
            int32_t x8_43 = *x8_42
            *(arg3 + 0xc90) = x9_18.d + 1
            *(arg3 + (x9_18 << 2) + 0x10) = x8_43
        i_2 = i_7
        i_7 -= 1
        x27_3 = &(*x27_3)[1]
    while (i_2 != 1)

*(arg3 + 0xc94) = 0
int32_t x9_24 = *(arg1 + 0x19ac)
int32_t x21_2 = *(arg1 + 0x19d4)

if (x9_24 s>= 0x100)
    void* x0_44 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_58 = x0_44 + sx.q(*(x0_44 + 0x13000)) * 0x98
    *(*(x8_58 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_59 = *(x8_58 - 0x90)
    *(x8_59 + 0x1a2c) = *(x8_59 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x9_24 = *(arg1 + 0x19ac)

if (x9_24 s>= 1)
    int64_t i_3 = 0
    void* __offset(DomGame, 0x15f6c) x11_1 = arg1 + 0x15f6c
    int64_t x9_27 = 0
    
    do
        if (*(x11_1 - 4) == 0xb07 && *x11_1 == x21_2)
            if (i_3.d != 1)
                int64_t x21_3 = sx.q(*(arg1 + (x9_27 s>> 0x1b) + 0x15f70))
                
                if (x21_3.d != 0x3f1)
                    if (x21_3.d s>= 0x48)
                        void* x0_46 = __emutls_get_address(__emutls_v.gContextStack_tl)
                        void* x8_63 = x0_46 + sx.q(*(x0_46 + 0x13000)) * 0x98
                        *(*(x8_63 - 0x90) + 0x1a28) = 0xffffffff
                        void* x8_64 = *(x8_63 - 0x90)
                        *(x8_64 + 0x1a2c) = *(x8_64 + 0x1a24)
                        XTrace("game thread yield (error)")
                        xco_yield()
                        XTrace("game thread resume (error)")
                    
                    *(arg3 + 0xc94) = *(arg1 + (x21_3 << 4) + 0x152c)
            
            break
        
        i_3 -= 1
        x9_27 += 0x100000000
        x11_1 += 0x20
    while (0 - zx.q(x9_24) != i_3)

*(arg3 + 0xc9c) = SumOngoingParam(arg1, &var_468, 3)
*(arg3 + 0xc98) = SumOngoingParam(arg1, &var_468, 2)
void* result = SumOngoingParam(arg1, &var_468, 0x33)
int32_t x8_67 = *(arg3 + 0xc98)
*(arg3 + 0xd70) = 0
*(arg3 + 0xc98) = x8_67 + result.d

if (*(arg1 + 0x19ac) s>= 1)
    int64_t i_4 = 0
    
    do
        void* x8_73 = arg1 + (i_4 << 5)
        
        if (*(x8_73 + 0x15f68) == 0x1000)
            uint64_t x21_4 = zx.q(*(x8_73 + 0x15f70))
            
            if (x21_4.d - 1 u<= 0x47)
                if (x21_4.d s>= 0x48)
                    void* x0_53 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_77 = x0_53 + sx.q(*(x0_53 + 0x13000)) * 0x98
                    *(*(x8_77 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_78 = *(x8_77 - 0x90)
                    *(x8_78 + 0x1a2c) = *(x8_78 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    result = XTrace("game thread resume (error)")
                
                int32_t j = *(arg1 + (x21_4 << 4) + 0x152c)
                
                if (j != 0)
                    uint64_t x9_35 = zx.q(*(arg3 + 0xd70))
                    int64_t x10_6
                    int64_t x11_2
                    
                    if (x9_35.d s>= 1)
                        x10_6 = 0
                        x11_2 = 0
                        
                        while (*(arg3 + 0xca0 + (x11_2 << 2)) != j)
                            x11_2 += 1
                            x10_6 += 0x100000000
                            
                            if (x9_35 == x11_2)
                                goto label_bca064
                    
                    int32_t x8_71
                    void* x9_31
                    
                    if (x9_35.d s< 1 || x11_2.d == 0xffffffff)
                    label_bca064:
                        *(arg3 + 0xd70) = x9_35.d + 1
                        x9_31 = arg3 + (sx.q(x9_35.d) << 2)
                        *(x9_31 + 0xca0) = j
                        x8_71 = *(arg1 + (i_4 << 5) + 0x15f7c)
                    else
                        x9_31 = arg3 + (x10_6 s>> 0x1e)
                        x8_71 = *(x9_31 + 0xd08) + *(arg1 + (i_4 << 5) + 0x15f7c)
                    
                    *(x9_31 + 0xd08) = x8_71
        
        i_4 += 1
    while (i_4 s< sx.q(*(arg1 + 0x19ac)))

if (i_9.d s>= 1)
    int64_t x27_4 = 0
    
    do
        uint64_t x24_7 = zx.q(var_468[x27_4])
        void* x8_83
        
        if ((x24_7 & 0x30) == 0)
            result = AbilityGetRegistered(arg1, x24_7)
            void* result_2 = result
            
            if (*(result + 0x4c) != 3)
                void* x0_57 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_87 = x0_57 + sx.q(*(x0_57 + 0x13000)) * 0x98
                *(*(x8_87 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_88 = *(x8_87 - 0x90)
                *(x8_88 + 0x1a2c) = *(x8_88 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                result = XTrace("game thread resume (error)")
            
            if (*(result_2 + 0x50) == 0x20)
                result = AbilityGetRegistered(arg1, x24_7)
                void* result_1 = result
                
                if (*(result + 0x4c) != 3)
                    void* x0_60 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_93 = x0_60 + sx.q(*(x0_60 + 0x13000)) * 0x98
                    *(*(x8_93 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_94 = *(x8_93 - 0x90)
                    *(x8_94 + 0x1a2c) = *(x8_94 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    result = XTrace("game thread resume (error)")
                
                x8_83 = result_1 + 0x54
                goto label_bca2b8
        else
            result = AbilityGetStatic(arg1, x24_7)
            
            if (*(result + 0x18) == 0x20)
                result = AbilityGetStatic(arg1, x24_7)
                x8_83 = result + 0xa0
            label_bca2b8:
                int32_t x8_95 = *x8_83
                uint64_t x10_10 = zx.q(*(arg3 + 0xd70))
                int32_t i_5 = x8_95 & 0xffff
                int32_t x8_96 = x8_95 s>> 0x10
                int64_t x11_4
                int64_t x12_2
                
                if (x10_10.d s>= 1)
                    x11_4 = 0
                    x12_2 = 0
                    
                    while (*(arg3 + 0xca0 + (x12_2 << 2)) != i_5)
                        x12_2 += 1
                        x11_4 += 0x100000000
                        
                        if (x10_10 == x12_2)
                            goto label_bca194
                
                if (x10_10.d s< 1 || x12_2.d == 0xffffffff)
                label_bca194:
                    *(arg3 + 0xd70) = x10_10.d + 1
                    void* x10_9 = arg3 + (sx.q(x10_10.d) << 2)
                    *(x10_9 + 0xca0) = i_5
                    *(x10_9 + 0xd08) = x8_96
                else
                    void* x9_40 = arg3 + (x11_4 s>> 0x1e)
                    *(x9_40 + 0xd08) += x8_96
        x27_4 += 1
    while (x27_4 != i_9)

*(arg3 + 0xddc) = 0
int64_t x8_98
int32_t x9_43

if (*(arg1 + 0xd7c) == 0x1147)
    x8_98 = 0
    x9_43 = *(arg1 + 0xd80)
    
    if (x9_43 != 0)
    label_bca3b0:
        *(arg3 + 0xd74) = x9_43
        *(arg3 + 0xddc) = 1
        int32_t x9_51 = *(arg1 + x8_98 * 0x3c + 0xd84)
        
        if (x9_51 != 0)
            *(arg3 + 0xd78) = x9_51
            *(arg3 + 0xddc) = 2
            int32_t x9_53 = *(arg1 + x8_98 * 0x3c + 0xd88)
            
            if (x9_53 != 0)
                *(arg3 + 0xd7c) = x9_53
                *(arg3 + 0xddc) = 3
                int32_t x9_55 = *(arg1 + x8_98 * 0x3c + 0xd8c)
                
                if (x9_55 != 0)
                    *(arg3 + 0xd80) = x9_55
                    *(arg3 + 0xddc) = 4
                    int32_t x9_57 = *(arg1 + x8_98 * 0x3c + 0xd90)
                    
                    if (x9_57 != 0)
                        *(arg3 + 0xd84) = x9_57
                        *(arg3 + 0xddc) = 5
                        int32_t x9_59 = *(arg1 + x8_98 * 0x3c + 0xd94)
                        
                        if (x9_59 != 0)
                            *(arg3 + 0xd88) = x9_59
                            *(arg3 + 0xddc) = 6
                            int32_t x9_61 = *(arg1 + x8_98 * 0x3c + 0xd98)
                            
                            if (x9_61 != 0)
                                *(arg3 + 0xd8c) = x9_61
                                *(arg3 + 0xddc) = 7
                                int32_t x9_63 = *(arg1 + x8_98 * 0x3c + 0xd9c)
                                
                                if (x9_63 != 0)
                                    *(arg3 + 0xd90) = x9_63
                                    *(arg3 + 0xddc) = 8
                                    int32_t x9_65 = *(arg1 + x8_98 * 0x3c + 0xda0)
                                    
                                    if (x9_65 != 0)
                                        *(arg3 + 0xd94) = x9_65
                                        *(arg3 + 0xddc) = 9
                                        int32_t x9_67 = *(arg1 + x8_98 * 0x3c + 0xda4)
                                        
                                        if (x9_67 != 0)
                                            *(arg3 + 0xd98) = x9_67
                                            *(arg3 + 0xddc) = 0xa
                                            int32_t x9_69 = *(arg1 + x8_98 * 0x3c + 0xda8)
                                            
                                            if (x9_69 != 0)
                                                *(arg3 + 0xd9c) = x9_69
                                                *(arg3 + 0xddc) = 0xb
                                                int32_t x9_71 = *(arg1 + x8_98 * 0x3c + 0xdac)
                                                
                                                if (x9_71 != 0)
                                                    *(arg3 + 0xda0) = x9_71
                                                    *(arg3 + 0xddc) = 0xc
                                                    int32_t x9_73 = *(arg1 + x8_98 * 0x3c + 0xdb0)
                                                    
                                                    if (x9_73 != 0)
                                                        *(arg3 + 0xda4) = x9_73
                                                        *(arg3 + 0xddc) = 0xd
                                                        int32_t x8_100 =
                                                            *(arg1 + x8_98 * 0x3c + 0xdb4)
                                                        
                                                        if (x8_100 != 0)
                                                            *(arg3 + 0xddc) = 0xe
                                                            *(arg3 + 0xda8) = x8_100
else if (*(arg1 + 0xdb8) == 0x1147)
    x8_98 = 1
    x9_43 = *(arg1 + 0xdbc)
    
    if (x9_43 != 0)
        goto label_bca3b0
else if (*(arg1 + 0xdf4) == 0x1147)
    x8_98 = 2
    x9_43 = *(arg1 + 0xdf8)
    
    if (x9_43 != 0)
        goto label_bca3b0
else if (*(arg1 + 0xe30) == 0x1147)
    x8_98 = 3
    x9_43 = *(arg1 + 0xe34)
    
    if (x9_43 != 0)
        goto label_bca3b0
return result
