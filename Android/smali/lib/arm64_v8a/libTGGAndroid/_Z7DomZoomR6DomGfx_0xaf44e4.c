// 函数: _Z7DomZoomR6DomGfx
// 地址: 0xaf44e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGfx& x8 = arg1
int32_t i
int32_t x20_1

for (i = *(x8 + 0x2c); i == 3; i = *(x8 + 0x2c))
    x20_1 = *(x8 + 0x30)
    
    if (x20_1 == 0x70d)
        goto label_af45b0
    
    if (x20_1 == 0x718)
        goto label_af45b0
    
    int32_t x8_1 = *(x8 + 0x70)
    
    if (x8_1 == 0)
        goto label_af45b0
    
    x8 = *(gDomClient + 0x205e0) + zx.q(x8_1.w) * 0x21d8

if (i == 5)
    x20_1 = *(x8 + 0x204)
label_af45b0:
    DomGfx* var_18a0
    
    if (*(GetClient() + 0x5068) != 0)
    label_af45c0:
        
        if (*(GetClient() + 0x5068) == 1)
            int32_t x0_7 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18a0)
            int64_t x8_6 = sx.q(*(gDomClient + 0x205cc))
            
            if (x8_6.d s< x0_7)
                DomGfx* x9_1 = var_18a0
                
                if (x9_1 != 0 && *(x9_1 + x8_6 * 0xb0 + 0x18) == 0x11)
                    int32_t x8_8 = *(x9_1 + x8_6 * 0xb0 + 0x24)
                    
                    if (x8_8 == 0 || x20_1 == 0 || x8_8 == x20_1)
                        TutorialContinue()
        
        goto label_af4654
    
label_af4654:
    DomSoundUI_Zoom(0, true)
    DomGfx& x19_1 = arg1
    
    if (*(arg1 + 0x2c) != 1)
        x19_1 = DomCreateCardPlaceholder_Zoom(arg1)
    
    DomGfx& x8_11 = arg1
    int32_t i_1
    int32_t x21_1
    
    for (i_1 = *(x8_11 + 0x2c); i_1 == 3; i_1 = *(x8_11 + 0x2c))
        x21_1 = *(x8_11 + 0x30)
        
        if (x21_1 == 0x70d)
            goto label_af4718
        
        if (x21_1 == 0x718)
            goto label_af4718
        
        int32_t x8_12 = *(x8_11 + 0x70)
        
        if (x8_12 == 0)
            goto label_af4718
        
        x8_11 = *(gDomClient + 0x205e0) + zx.q(x8_12.w) * 0x21d8
    
    if (i_1 == 5)
        x21_1 = *(x8_11 + 0x204)
    label_af4718:
        uint64_t x1_4
        
        if (*(GetClient() + 0x5068) == 0)
        label_af4740:
            x1_4 = 0x18
        else
        label_af4724:
            x1_4 = zx.q(*(ActiveGame() + 0x30))
        
        bool cond:0_1 = (IsLandscape(zx.q(x21_1), x1_4) & 1) != 0
        int128_t var_880
        __builtin_memset(&var_880, 0, 0x20)
        int32_t x8_17
        
        x8_17 = cond:0_1 ? 0x22 : 0x21
        
        var_880.q = x19_1
        var_880:8.d = 2
        int128_t var_870
        var_870:8.d = 0
        var_18a0.d = 1
        int32_t var_1898_1 = x8_17
        int64_t var_1890_1 = -1
        int32_t x2_1
        int32_t x5_1
        x2_1, x5_1 = MoveComponent<DomLoc, DomMoveCallback>::Move(x19_1 + 0x258, &var_18a0, 6, 1)
        *(gDomClient + 0x1f0a8) = 0
        uint64_t x8_18 = zx.q(*(gDomClient + 0x205e8))
        
        if (x8_18.d != 0)
            DomGfx* i_3 = *(gDomClient + 0x205e0)
            DomGfx* i_2 = i_3
            
            do
                if (zx.d(*(i_2 + 0x21d2)) != 0)
                    while (i_2 != 0xffffffff)
                        if (i_2 != x19_1 && *(i_2 + 0x2c) - 1 u<= 1)
                            UI2Free(i_2 + 0x2148)
                            UI2Free(i_2 + 0x214c)
                            UI2Free(i_2 + 0x2150)
                            x2_1, x5_1 = UI2Free(i_2 + 0x2154)
                            uint32_t x0_24 = *(i_2 + 0x1f90)
                            
                            if (x0_24 != 0)
                                x2_1, x5_1 = SpineDestroy(x0_24)
                            
                            int32_t x9_6 = *(gDomClient + 0x205f0)
                            *(gDomClient + 0x205f0) = zx.d(*(i_2 + 0x21d0))
                            *(i_2 + 0x21d0) = x9_6
                            i_3 = *(gDomClient + 0x205e0)
                            x8_18 = zx.q(*(gDomClient + 0x205e8))
                            *(gDomClient + 0x205f4) -= 1
                        
                        if (i_2 == 0)
                            i_2 = i_3
                        else
                            i_2 += 0x21d8
                        
                        void* x9_10 = i_3 + mulu.dp.d(x8_18.d, 0x21d8)
                        
                        if (i_2 u>= x9_10)
                            break
                        
                        while (zx.d(*(i_2 + 0x21d2)) == 0)
                            i_2 += 0x21d8
                            
                            if (i_2 u>= x9_10)
                                goto label_af48e8
                    
                    break
                
                i_2 += 0x21d8
            while (i_2 u< i_3 + x8_18 * 0x21d8)
            
        label_af48e8:
            
            if (x8_18.d != 0)
                void* x8_20 = i_3 + mulu.dp.d(x8_18.d, 0x21d8)
                
                do
                    if (zx.d(*(i_3 + 0x21d2)) != 0)
                        while (i_3 != 0xffffffff)
                            if (*(i_3 + 0x2c) == 7)
                                int64_t x0_26
                                x0_26, x2_1, x5_1 = PodIconGetPile(i_3)
                                
                                if (x0_26 == arg1)
                                    PileRemoveToken(i_3, arg1)
                                    UI2Free(i_3 + 0x2148)
                                    UI2Free(i_3 + 0x214c)
                                    UI2Free(i_3 + 0x2150)
                                    x2_1, x5_1 = UI2Free(i_3 + 0x2154)
                                    uint32_t x0_32 = *(i_3 + 0x1f90)
                                    
                                    if (x0_32 != 0)
                                        x2_1, x5_1 = SpineDestroy(x0_32)
                                    
                                    int32_t x9_11 = *(gDomClient + 0x205f0)
                                    *(gDomClient + 0x205f0) = zx.d(*(i_3 + 0x21d0))
                                    *(i_3 + 0x21d0) = x9_11
                                    *(gDomClient + 0x205f4) -= 1
                            
                            DomGfx* i_11 = *(gDomClient + 0x205e0)
                            
                            if (i_3 == 0)
                                i_3 = i_11
                            else
                                i_3 += 0x21d8
                            
                            int64_t x8_25 = i_11 + zx.q(*(gDomClient + 0x205e8)) * 0x21d8
                            
                            if (i_3 u>= x8_25)
                                break
                            
                            while (zx.d(*(i_3 + 0x21d2)) == 0)
                                i_3 += 0x21d8
                                
                                if (i_3 u>= x8_25)
                                    goto label_af4a28
                        
                        break
                    
                    i_3 += 0x21d8
                while (i_3 u< x8_20)
        
    label_af4a28:
        *(gDomClient + 0x1d014) = *(arg1 + 0x21d0)
        *(gDomClient + 0x1d01c) = *(x19_1 + 0x21d0)
        *(gDomClient + 0x1d018) = *(x19_1 + 0x170)
        *(gDomClient + 0x1d00c) = 1
        *(gDomClient + 0x1f0b0) = 0
        int64_t v0_1
        v0_1.d = fconvert.s(1f)
        v0_1:4.d = fconvert.s(1f)
        *(gDomClient + 0x1d004) = v0_1
        int32_t i_15 = 0
        DomGfx* var_1920
        int32_t i_16 = ZoomAssociatedIcons(arg1, &var_18a0, x2_1, &var_1920, &i_15, x5_1)
        int128_t var_8a0
        int128_t var_890
        int64_t x26
        
        if (*(arg1 + 0x2c) == 3 && *(arg1 + 0x70) == 0)
            DomGfx& x8_43 = arg1
            
            while (true)
                int32_t x22_3 = *(x8_43 + 0x30)
                
                if (x22_3 == 0x70d)
                    goto label_af4de0
                
                if (x22_3 == 0x718)
                    goto label_af4de0
                
                int32_t x8_44 = *(x8_43 + 0x70)
                
                if (x8_44 == 0)
                    goto label_af4de0
                
                x8_43 = *(gDomClient + 0x205e0) + zx.q(x8_44.w) * 0x21d8
                int32_t x11_1 = *(x8_43 + 0x2c)
                
                if (x11_1 != 3)
                    if (x11_1 == 5)
                        x22_3 = *(x8_43 + 0x204)
                    else if (x11_1 == 1)
                        x22_3 = *(x8_43 + 0x170)
                    else
                        if (x11_1 != 0)
                            goto label_af530c
                        
                        x22_3 = CardWhat(gDomClient + 0x20728, zx.q(*(x8_43 + 0x98)))
                    
                label_af4de0:
                    uint64_t x19_3 = zx.q(*(gDomClient + 0x205f0))
                    int64_t x8_47
                    int32_t x9_26
                    
                    if (x19_3.d != *(gDomClient + 0x205e8))
                        x8_47 = *(gDomClient + 0x205e0)
                        x9_26 = *(x8_47 + x19_3 * 0x21d8 + 0x21d0)
                    else
                        x8_47 = *(gDomClient + 0x205e0)
                        x9_26 = x19_3.d + 1
                        *(gDomClient + 0x205e8) = x9_26
                    
                    void* x23_3 = x8_47 + x19_3 * 0x21d8
                    *(gDomClient + 0x205f0) = x9_26
                    memset(x23_3, 0, 0x21d0)
                    x26 = 1
                    *(x23_3 + 0x21d0) = x19_3.d | *(gDomClient + 0x205f8) << 0x10
                    int32_t x9_30 = *(gDomClient + 0x205f8)
                    int32_t x9_31
                    
                    if (x9_30 == 0xffff)
                        x9_31 = 1
                    else
                        x9_31 = x9_30 + 1
                    
                    *(gDomClient + 0x205f8) = x9_31
                    *(gDomClient + 0x205f4) += 1
                    *(x23_3 + 0x250) = x22_3
                    *(x23_3 + 0x2c) = 2
                    *(x23_3 + 0x24c) = 0
                    __builtin_memset(&var_8a0, 0, 0x20)
                    var_8a0.q = x23_3
                    var_8a0:8.d = 2
                    var_890:8.d = 0
                    var_880.d = 1
                    var_880:8.d = 0x25
                    var_870.q = 0xffffffff
                    MoveComponent<DomLoc, DomMoveCallback>::Move(x23_3 + 0x258, &var_880, 6, 1)
                    *(gDomClient + 0x1f0b8) = *(x23_3 + 0x21d0)
                    
                    if (i_16 s>= 1)
                        break
                    
                    goto label_af4f30
            
            goto label_af4ad4
        
        x26 = 0
        
        if (i_16 s>= 1)
        label_af4ad4:
            uint64_t i_14 = zx.q(i_16)
            DomGfx** x28_2 = &var_18a0
            uint64_t i_4
            
            do
                uint64_t x22_2 = zx.q(*(gDomClient + 0x205f0))
                int64_t x8_31
                int32_t x9_15
                
                if (x22_2.d != *(gDomClient + 0x205e8))
                    x8_31 = *(gDomClient + 0x205e0)
                    x9_15 = *(x8_31 + x22_2 * 0x21d8 + 0x21d0)
                else
                    x8_31 = *(gDomClient + 0x205e0)
                    x9_15 = x22_2.d + 1
                    *(gDomClient + 0x205e8) = x9_15
                
                DomGfx* x23_1 = *x28_2
                void* x21_3 = x8_31 + x22_2 * 0x21d8
                *(gDomClient + 0x205f0) = x9_15
                memset(x21_3, 0, 0x21d0)
                *(x21_3 + 0x21d0) = x22_2.d | *(gDomClient + 0x205f8) << 0x10
                int32_t x8_34 = *(gDomClient + 0x205f8)
                int32_t x8_35
                
                if (x8_34 == 0xffff)
                    x8_35 = 1
                else
                    x8_35 = x8_34 + 1
                
                *(gDomClient + 0x205f8) = x8_35
                *(gDomClient + 0x205f4) += 1
                *(x21_3 + 0x2c) = 2
                int32_t x9_17 = *(x21_3 + 0x21d0)
                *(x21_3 + 0x24c) = *(x23_1 + 0x21d0)
                *(x23_1 + 0x2134) = x9_17
                int128_t v0_2
                int128_t v1_1
                int128_t v2_1
                int128_t v3_1
                v0_2, v1_1, v2_1, v3_1 = CurrentTransformWithMouseover(x23_1)
                int128_t var_7fc_1 = var_8a0
                *(x21_3 + 0x308) = 0
                v2_1 = var_880
                int128_t var_860
                *(x21_3 + 0x32c) = var_860
                *(x21_3 + 0x31c) = var_870
                *(x21_3 + 0x30c) = v2_1
                int128_t var_840
                *(x21_3 + 0x34c) = var_840
                int128_t var_830
                *(x21_3 + 0x35c) = var_830
                int128_t var_820
                *(x21_3 + 0x36c) = var_820
                int128_t var_850
                *(x21_3 + 0x33c) = var_850
                *(x21_3 + 0x3ac) = var_890:0xc.d
                int128_t var_800
                *(x21_3 + 0x38c) = var_800
                *(x21_3 + 0x39c) = var_7fc_1
                int128_t var_810
                *(x21_3 + 0x37c) = var_810
                *(x21_3 + 0x3b0) = 0
                v2_1 = var_880
                *(x21_3 + 0x3c4) = var_870
                *(x21_3 + 0x3d4) = var_860
                *(x21_3 + 0x3b4) = v2_1
                *(x21_3 + 0x404) = var_830
                *(x21_3 + 0x414) = var_820
                *(x21_3 + 0x3e4) = var_850
                *(x21_3 + 0x3f4) = var_840
                *(x21_3 + 0x454) = var_890:0xc.d
                *(x21_3 + 0x424) = var_810
                *(x21_3 + 0x434) = var_800
                *(x21_3 + 0x444) = var_7fc_1
                *(x21_3 + 0x1f78) = 0
                var_880:8.d = 0x25
                __builtin_memset(&var_8a0, 0, 0x20)
                var_8a0.q = x21_3
                var_8a0:8.d = 2
                var_890:8.d = 0
                var_880.d = 1
                var_870.d = 0xffffffff
                var_870:4.d = x26.d
                MoveComponent<DomLoc, DomMoveCallback>::Move(x21_3 + 0x258, &var_880, 6, 1)
                void* x9_24 = gDomClient + (x26 << 2)
                i_4 = i_14
                i_14 -= 1
                x28_2 = &x28_2[1]
                x26 += 1
                *(x9_24 + 0x1f0b8) = *(x21_3 + 0x21d0)
            while (i_4 != 1)
        
    label_af4f30:
        uint64_t i_12 = zx.q(i_15)
        
        if (i_12.d s>= 1)
            DomGfx** x9_34 = &var_1920
            uint64_t i_5
            
            do
                DomGfx* x11_2 = *x9_34
                x9_34 = &x9_34[1]
                i_5 = i_12
                i_12 -= 1
                *(x11_2 + 0x2138) = *(x19_1 + 0x21d0)
            while (i_5 != 1)
        
        *(gDomClient + 0x1f0a0) = 0
        DomGame* x0_42 = ZoomAssociatedCards(gDomClient + 0x20728, arg1, &var_880)
        int32_t var_70
        uint64_t x8_49 = zx.q(var_70)
        
        if (x8_49.d s>= 1)
            int32_t x2_3 = *(gDomClient + 0x1f0a0)
            int64_t x9_35 = 0
            int32_t* x11_3 = &var_880 | 4
            x0_42 = &var_880
            
            do
                uint64_t x1_15 = zx.q(*(&var_880 + x9_35 * 0x408 + 0x400))
                int64_t x2_8 = sx.q(x2_3)
                *(gDomClient + 0x1f0a4) += 1
                
                if (x1_15.d s>= 1)
                    int64_t i_17
                    
                    if (x1_15.d != 1)
                        i_17 = x1_15 & 0xfffffffe
                        void* x4_3 = gDomClient + x2_8 + 0x1d034
                        int32_t* x5_2 = x11_3
                        int64_t i_10 = i_17
                        int64_t i_6
                        
                        do
                            int32_t x7_1 = x5_2[-1]
                            int32_t x20_3 = *x5_2
                            i_6 = i_10
                            i_10 -= 2
                            x5_2 = &x5_2[2]
                            *(x4_3 - 0xc) = x7_1
                            *(x4_3 - 8) = 0
                            *x4_3 = x20_3
                            *(x4_3 + 4) = 0
                            x4_3 += 0x18
                        while (i_6 != 2)
                        
                        if (i_17 != x1_15)
                            goto label_af5094
                    else
                        i_17 = 0
                    label_af5094:
                        int64_t i_9 = x1_15 - i_17
                        void* x5_5 = gDomClient + x2_8 + i_17 * 0xc + 0x1d02c
                        void* x3_6 = x0_42 + (i_17 << 2)
                        int64_t i_7
                        
                        do
                            *x5_5 = 0
                            int32_t x6_1 = *x3_6
                            x3_6 += 4
                            i_7 = i_9
                            i_9 -= 1
                            *(x5_5 - 4) = x6_1
                            x5_5 += 0xc
                        while (i_7 != 1)
                
                int32_t x3_3 = *(&var_880 + x9_35 * 0x408 + 0x404)
                x9_35 += 1
                *(gDomClient + x2_8 + 0x1d020) = x1_15.d
                *(gDomClient + x2_8 + 0x1d024) = x3_3
                int64_t x1_12 = sx.q(*(gDomClient + 0x1f0a0))
                x11_3 = &x11_3[0x102]
                x0_42 += 0x408
                x2_3 = x1_12.d + *(gDomClient + x1_12 + 0x1d020) * 0xc + 8
                *(gDomClient + 0x1f0a0) = x2_3
            while (x9_35 != x8_49)
        
        int64_t result = ZoomAssociatedCardPiles(x0_42, arg1, gDomClient + 0x1d020)
        int32_t x8_50 = *(gDomClient + 0x1f0a0)
        
        if (x8_50 != 0)
            int32_t x12_2 = 0
            int64_t (* i_8)() = gDomClient + 0x1d020
            
            do
                int64_t x9_41 = zx.q(*i_8)
                
                if (x9_41.d s>= 1)
                    int64_t x25_2 = 0
                    int64_t (* x24_1)() = i_8 + 0x10
                    DomGfx& var_1930_1
                    var_1930_1.d = x12_2
                    
                    do
                        uint64_t x22_5 = zx.q(*(gDomClient + 0x205f0))
                        int32_t x27_1 = *(x24_1 - 8)
                        int64_t x8_51
                        int32_t x9_38
                        
                        if (x22_5.d != *(gDomClient + 0x205e8))
                            x8_51 = *(gDomClient + 0x205e0)
                            x9_38 = *(x8_51 + x22_5 * 0x21d8 + 0x21d0)
                        else
                            x8_51 = *(gDomClient + 0x205e0)
                            x9_38 = x22_5.d + 1
                            *(gDomClient + 0x205e8) = x9_38
                        
                        void* x19_4 = x8_51 + x22_5 * 0x21d8
                        *(gDomClient + 0x205f0) = x9_38
                        memset(x19_4, 0, 0x21d0)
                        *(x19_4 + 0x21d0) = x22_5.d | *(gDomClient + 0x205f8) << 0x10
                        int32_t x8_54 = *(gDomClient + 0x205f8)
                        int32_t x8_55
                        
                        if (x8_54 == 0xffff)
                            x8_55 = 1
                        else
                            x8_55 = x8_54 + 1
                        
                        *(gDomClient + 0x205f8) = x8_55
                        *(gDomClient + 0x205f4) += 1
                        *(x19_4 + 0x2c) = 1
                        *(x19_4 + 0x170) = x27_1
                        *(x19_4 + 0x174) = 1
                        *(x19_4 + 0x17c) = x25_2.d
                        int32_t x9_40 = *(x19_4 + 0x21d0)
                        *(x19_4 + 0x178) = *x24_1
                        *(x24_1 - 4) = x9_40
                        int128_t var_8a0_1
                        __builtin_memset(&var_8a0_1, 0, 0x20)
                        var_8a0_1.q = x19_4
                        var_8a0_1:8.d = 2
                        var_880:8.d = 0x23
                        int128_t var_890_1
                        var_890_1:8.d = 0
                        var_880.d = 1
                        var_870.d = 0xffffffff
                        var_870:4.d = x25_2.d | x12_2 << 0x10
                        result = MoveComponent<DomLoc, DomMoveCallback>::Move(x19_4 + 0x258, 
                            &var_880, 6, 1)
                        x9_41 = sx.q(*i_8)
                        x25_2 += 1
                        x24_1 += 0xc
                    while (x25_2 s< x9_41)
                    
                    x8_50 = *(gDomClient + 0x1f0a0)
                    x12_2 = var_1930_1.d
                
                void* i_13 = i_8 + sx.q(8 + x9_41.d * 0xc)
                
                if (i_13 == gDomClient + sx.q(x8_50) + 0x1d020)
                    i_8 = nullptr
                else
                    i_8 = i_13
                
                x12_2 += 1
            while (i_8 != 0)
        
        return result
    
    if (i_1 == 1)
        x21_1 = *(x8_11 + 0x170)
        
        if (*(GetClient() + 0x5068) != 0)
            goto label_af4724
        
        goto label_af4740
    
    if (i_1 == 0)
        x21_1 = CardWhat(gDomClient + 0x20728, zx.q(*(x8_11 + 0x98)))
        
        if (*(GetClient() + 0x5068) != 0)
            goto label_af4724
        
        goto label_af4740
else
    if (i == 1)
        x20_1 = *(x8 + 0x170)
        
        if (*(GetClient() + 0x5068) != 0)
            goto label_af45c0
        
        goto label_af4654
    
    if (i == 0)
        x20_1 = CardWhat(gDomClient + 0x20728, zx.q(*(x8 + 0x98)))
        
        if (*(GetClient() + 0x5068) != 0)
            goto label_af45c0
        
        goto label_af4654

label_af530c:
pthread_kill(pthread_self(), 6)
return PodIconGetPile(XNoReturn()) __tailcall
