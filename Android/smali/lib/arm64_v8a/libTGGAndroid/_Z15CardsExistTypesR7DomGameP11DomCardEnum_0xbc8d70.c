// 函数: _Z15CardsExistTypesR7DomGameP11DomCardEnum
// 地址: 0xbc8d70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x165c)
int32_t x21

if (x8 == 0)
    x21 = 0
else
    *arg2 = x8
    int32_t x8_1 = *(arg1 + 0x166c)
    
    if (x8_1 == 0)
        x21 = 1
    else
        *(arg2 + 4) = x8_1
        int32_t x8_2 = *(arg1 + 0x167c)
        
        if (x8_2 == 0)
            x21 = 2
        else
            *(arg2 + 8) = x8_2
            int32_t x8_3 = *(arg1 + 0x168c)
            
            if (x8_3 == 0)
                x21 = 3
            else
                *(arg2 + 0xc) = x8_3
                int32_t x8_4 = *(arg1 + 0x169c)
                
                if (x8_4 == 0)
                    x21 = 4
                else
                    *(arg2 + 0x10) = x8_4
                    int32_t x8_5 = *(arg1 + 0x16ac)
                    
                    if (x8_5 == 0)
                        x21 = 5
                    else
                        *(arg2 + 0x14) = x8_5
                        int32_t x8_6 = *(arg1 + 0x16bc)
                        
                        if (x8_6 == 0)
                            x21 = 6
                        else
                            *(arg2 + 0x18) = x8_6
                            int32_t x8_7 = *(arg1 + 0x16cc)
                            
                            if (x8_7 == 0)
                                x21 = 7
                            else
                                *(arg2 + 0x1c) = x8_7
                                int32_t x8_8 = *(arg1 + 0x16dc)
                                
                                if (x8_8 == 0)
                                    x21 = 8
                                else
                                    *(arg2 + 0x20) = x8_8
                                    int32_t x8_9 = *(arg1 + 0x16ec)
                                    
                                    if (x8_9 == 0)
                                        x21 = 9
                                    else
                                        *(arg2 + 0x24) = x8_9
                                        int32_t x8_10 = *(arg1 + 0x16fc)
                                        
                                        if (x8_10 == 0)
                                            x21 = 0xa
                                        else
                                            *(arg2 + 0x28) = x8_10
                                            int32_t x8_11 = *(arg1 + 0x170c)
                                            
                                            if (x8_11 == 0)
                                                x21 = 0xb
                                            else
                                                *(arg2 + 0x2c) = x8_11
                                                int32_t x8_12 = *(arg1 + 0x171c)
                                                
                                                if (x8_12 == 0)
                                                    x21 = 0xc
                                                else
                                                    *(arg2 + 0x30) = x8_12
                                                    int32_t x8_13 = *(arg1 + 0x172c)
                                                    
                                                    if (x8_13 == 0)
                                                        x21 = 0xd
                                                    else
                                                        *(arg2 + 0x34) = x8_13
                                                        x21 = 0xe

int32_t x8_14 = *(arg1 + 0x174c)

if (x8_14 == 0)
    goto label_bc9214

*(arg2 + (zx.q(x21) << 2)) = x8_14
int32_t x22_1 = x21 + 1
int16_t var_cc0

if (*(arg1 + 0x174c) == 0xf3a)
    int32_t x0_1 = CardsWhere(arg1, 0xffffffff, 5, &var_cc0)
    
    if (x0_1 == 1)
        goto label_bc8f3c
    
    uint32_t x23_1
    
    if (x0_1 != 0)
        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_18 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        *(*(x8_18 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_19 = *(x8_18 - 0x90)
        *(x8_19 + 0x1a2c) = *(x8_19 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    label_bc8f3c:
        x23_1 = zx.d(var_cc0)
        
        if (x23_1 u>= 0x320)
            void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_22 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
            *(*(x8_22 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_23 = *(x8_22 - 0x90)
            *(x8_23 + 0x1a2c) = *(x8_23 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
    else
        x23_1 = 0
    
    *(arg2 + (zx.q(x22_1) << 2)) = *(arg1 + mulu.dp.d(x23_1, 0x68) + 0x1a70)
    x22_1 = x21 + 2

int32_t x8_26 = *(arg1 + 0x175c)
uint64_t x8_52
int32_t x10

if (x8_26 != 0)
    *(arg2 + (zx.q(x22_1) << 2)) = x8_26
    x21 = x22_1 + 1
    
    if (*(arg1 + 0x175c) == 0xf3a)
        int32_t x0_7 = CardsWhere(arg1, 0xffffffff, 5, &var_cc0)
        
        if (x0_7 == 1)
            goto label_bc9044
        
        uint32_t x23_2
        
        if (x0_7 != 0)
            void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_30 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
            *(*(x8_30 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_31 = *(x8_30 - 0x90)
            *(x8_31 + 0x1a2c) = *(x8_31 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        label_bc9044:
            x23_2 = zx.d(var_cc0)
            
            if (x23_2 u>= 0x320)
                void* x0_11 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_34 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
                *(*(x8_34 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_35 = *(x8_34 - 0x90)
                *(x8_35 + 0x1a2c) = *(x8_35 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
        else
            x23_2 = 0
        
        *(arg2 + (zx.q(x21) << 2)) = *(arg1 + mulu.dp.d(x23_2, 0x68) + 0x1a70)
        x21 = x22_1 + 2
    
    int32_t x8_38 = *(arg1 + 0x176c)
    
    if (x8_38 == 0)
        goto label_bc9214
    
    *(arg2 + (zx.q(x21) << 2)) = x8_38
    int32_t x22_2 = x21 + 1
    int32_t x8_40
    
    if (*(arg1 + 0x176c) != 0xf3a)
        x21 = x22_2
        x8_40 = *(arg1 + 0x177c)
        
        if (x8_40 == 0)
            goto label_bc9214
    else
        int32_t x0_13 = CardsWhere(arg1, 0xffffffff, 5, &var_cc0)
        
        if (x0_13 == 1)
            goto label_bc915c
        
        uint32_t x23_3
        
        if (x0_13 != 0)
            void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_43 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
            *(*(x8_43 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_44 = *(x8_43 - 0x90)
            *(x8_44 + 0x1a2c) = *(x8_44 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        label_bc915c:
            x23_3 = zx.d(var_cc0)
            
            if (x23_3 u>= 0x320)
                void* x0_17 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_47 = x0_17 + sx.q(*(x0_17 + 0x13000)) * 0x98
                *(*(x8_47 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_48 = *(x8_47 - 0x90)
                *(x8_48 + 0x1a2c) = *(x8_48 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
        else
            x23_3 = 0
        
        x21 += 2
        *(arg2 + (zx.q(x22_2) << 2)) = *(arg1 + mulu.dp.d(x23_3, 0x68) + 0x1a70)
        x8_40 = *(arg1 + 0x177c)
        
        if (x8_40 == 0)
            goto label_bc9214
    
    *(arg2 + (zx.q(x21) << 2)) = x8_40
    x22_1 = x21 + 1
    
    if (*(arg1 + 0x177c) != 0xf3a)
        goto label_bc9210
    
    int32_t x0_19 = CardsWhere(arg1, 0xffffffff, 5, &var_cc0)
    
    if (x0_19 == 1)
        goto label_bc946c
    
    uint32_t x23_4
    
    if (x0_19 != 0)
        void* x0_24 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_59 = x0_24 + sx.q(*(x0_24 + 0x13000)) * 0x98
        *(*(x8_59 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_60 = *(x8_59 - 0x90)
        *(x8_60 + 0x1a2c) = *(x8_60 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    label_bc946c:
        x23_4 = zx.d(var_cc0)
        
        if (x23_4 u>= 0x320)
            void* x0_26 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_63 = x0_26 + sx.q(*(x0_26 + 0x13000)) * 0x98
            *(*(x8_63 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_64 = *(x8_63 - 0x90)
            *(x8_64 + 0x1a2c) = *(x8_64 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
    else
        x23_4 = 0
    
    x21 += 2
    *(arg2 + (zx.q(x22_1) << 2)) = *(arg1 + mulu.dp.d(x23_4, 0x68) + 0x1a70)
    x10 = *(arg1 + 0x179c)
    x8_52 = zx.q(x21)
    
    if (x10 != 0)
        goto label_bc9224
    
    goto label_bc9260

label_bc9210:
x21 = x22_1
label_bc9214:
x10 = *(arg1 + 0x179c)
x8_52 = zx.q(x21)
int32_t i_7

if (x10 == 0)
label_bc9260:
    i_7 = x8_52.d
    
    if (x10 != 0)
    label_bc9280:
        
        for (int64_t i = 0; i != 0xf4; i += 4)
            int32_t x10_3 = *(arg1 + 0xecc + i)
            
            if (x10_3 != 0)
                *(arg2 + (sx.q(i_7) << 2)) = x10_3
                i_7 += 1
else
label_bc9224:
    int64_t x9_15 = 0
    i_7 = x21 + 0x20
    void* __offset(DomGame, 0x17ac) x12_1 = arg1 + 0x17ac
    
    while (true)
        *(arg2 + (x8_52 << 2) + (x9_15 << 2)) = x10
        
        if (x9_15 == 0x1f)
            break
        
        x10 = *x12_1
        x12_1 += 0x10
        x9_15 += 1
        
        if (x10 == 0)
            x8_52 += x9_15
            x10 = *(x12_1 - 0x20) == 0x1301 ? 1 : 0
            goto label_bc9260
    
    if (*(x12_1 - 0x10) == 0x1301)
        goto label_bc9280

if ((AfterTsunami(arg1) & 1) != 0)
    int32_t x9_17 = *(arg1 + 0xd54)
    
    if (x9_17 == 0)
        goto label_bc9370
    
    int64_t i_8 = sx.q(i_7)
    *(arg2 + (i_8 << 2)) = x9_17
    int32_t x10_4 = *(arg1 + 0xd58)
    int64_t x9_18 = i_8 + 1
    int32_t x8_55
    
    if (x10_4 == 0)
    label_bc936c:
        i_7 = x9_18.d
    label_bc9370:
        x8_55 = *(arg1 + 0xe6c)
        
        if (x8_55 != 0)
        label_bc937c:
            uint64_t i_5
            
            if (i_7 s<= 0)
                i_5 = sx.q(i_7)
            else
                i_5 = zx.q(i_7)
                DomCardEnum* x10_12 = arg2
                uint64_t i_3 = i_5
                uint64_t i_1
                
                do
                    if (*x10_12 == x8_55)
                        goto label_bc93b8
                    
                    i_1 = i_3
                    i_3 -= 1
                    x10_12 += 4
                while (i_1 != 1)
            
            i_7 += 1
            *(arg2 + (i_5 << 2)) = x8_55
    else
        *(arg2 + (x9_18 << 2)) = x10_4
        int32_t x10_5 = *(arg1 + 0xd5c)
        x9_18 = i_8 + 2
        
        if (x10_5 == 0)
            goto label_bc936c
        
        *(arg2 + (x9_18 << 2)) = x10_5
        int32_t x10_6 = *(arg1 + 0xd60)
        x9_18 = i_8 + 3
        
        if (x10_6 == 0)
            goto label_bc936c
        
        *(arg2 + (x9_18 << 2)) = x10_6
        int32_t x10_7 = *(arg1 + 0xd64)
        x9_18 = i_8 + 4
        
        if (x10_7 == 0)
            goto label_bc936c
        
        *(arg2 + (x9_18 << 2)) = x10_7
        int32_t x10_8 = *(arg1 + 0xd68)
        x9_18 = i_8 + 5
        
        if (x10_8 == 0)
            goto label_bc936c
        
        *(arg2 + (x9_18 << 2)) = x10_8
        int32_t x10_9 = *(arg1 + 0xd6c)
        x9_18 = i_8 + 6
        
        if (x10_9 == 0)
            goto label_bc936c
        
        *(arg2 + (x9_18 << 2)) = x10_9
        int32_t x10_10 = *(arg1 + 0xd70)
        x9_18 = i_8 + 7
        
        if (x10_10 == 0)
            goto label_bc936c
        
        *(arg2 + (x9_18 << 2)) = x10_10
        int32_t x10_11 = *(arg1 + 0xd74)
        x9_18 = i_8 + 8
        
        if (x10_11 == 0)
            goto label_bc936c
        
        *(arg2 + (x9_18 << 2)) = x10_11
        int32_t x9_19 = *(arg1 + 0xd78)
        
        if (x9_19 == 0)
            i_7 = (i_8 + 9).d
            x8_55 = *(arg1 + 0xe6c)
            
            if (x8_55 != 0)
                goto label_bc937c
        else
            i_7 += 0xa
            *(arg2 + ((i_8 + 9) << 2)) = x9_19
            x8_55 = *(arg1 + 0xe6c)
            
            if (x8_55 != 0)
                goto label_bc937c
label_bc93b8:
    int32_t x8_56 = *(arg1 + 0xec4)
    
    if (x8_56 != 0)
        uint64_t i_6
        
        if (i_7 s<= 0)
            i_6 = sx.q(i_7)
        else
            i_6 = zx.q(i_7)
            DomCardEnum* x10_13 = arg2
            uint64_t i_4 = i_6
            uint64_t i_2
            
            do
                if (*x10_13 == x8_56)
                    return zx.q(i_7)
                
                i_2 = i_4
                i_4 -= 1
                x10_13 += 4
            while (i_2 != 1)
        
        i_7 += 1
        *(arg2 + (i_6 << 2)) = x8_56

return zx.q(i_7)
