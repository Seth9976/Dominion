// 函数: _Z14DomDeclareCardR7DomGameR6DomGfxb16DomPileShapePart
// 地址: 0xb131a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x2c)
int32_t x26 = arg4
uint64_t x24 = zx.q(arg3.d)

if (x8 == 0)
    CardIs(gDomClient + 0x20728, zx.q(*(arg2 + 0x98)), 0xd45)
    
    if (*(arg2 + 0x1f78) == 0)
        if ((*(arg2 + 0x3b8) & 0xfffffffe) == 6 && *(arg2 + 0x3b0) == 1)
            int32_t x8_10 = *(arg2 + 0x3bc)
            
            if (x8_10 u> 0x48 || *(arg2 + 0xa4) == 6)
                goto label_b1339c
            
            if (x8_10 != 2)
                goto label_b13390
            
            uint64_t x9_6 = zx.q(*(gDomClient + 0x205e8))
            
            if (x9_6.d == 0)
                goto label_b13390
            
            void* x8_12 = *(gDomClient + 0x205e0)
            int64_t x10_1 = x8_12 + x9_6 * 0x21d8
            void* x9_7 = x8_12
            
            while (zx.d(*(x9_7 + 0x21d2)) == 0)
                x9_7 += 0x21d8
                
                if (x9_7 u>= x10_1)
                    goto label_b13390
            
            if (x9_7 == 0xffffffff)
                goto label_b13390
            
            while (true)
                if (*(x9_7 + 0x2c) == 3 && *(x9_7 + 0x58) == 0xffffffff && *(x9_7 + 0x5c) == 2
                        && *(x9_7 + 0x60) == 0)
                    if (x9_7 == 0)
                        goto label_b13390
                    
                    if (*(x9_7 + 0x21d0) != *(gDomClient + 0x1f8e4))
                        goto label_b13390
                    
                    break
                
                if (x9_7 == 0)
                    x9_7 = x8_12
                else
                    x9_7 += 0x21d8
                
                if (x9_7 u>= x10_1)
                    goto label_b13390
                
                while (zx.d(*(x9_7 + 0x21d2)) == 0)
                    x9_7 += 0x21d8
                    
                    if (x9_7 u>= x10_1)
                        goto label_b13390
                
                if (x9_7 == 0xffffffff)
                    goto label_b13390
            
            goto label_b1339c
        
    label_b1339c:
        
        if (*(arg2 + 0x2c) != 3 || *(arg2 + 0x30) != 0)
            goto label_b133ac
    else
        if (*(arg2 + 0x3b0) != 1 || (*(arg2 + 0x3b8) & 0xfffffffe) != 6)
            goto label_b1339c
        
        int32_t x8_5 = *(arg2 + 0x3bc)
        
        if (x8_5 u> 0x48 || *(arg2 + 0x478) != 1 || (*(arg2 + 0x480) & 0xfffffffe) != 6
                || *(arg2 + 0x484) != x8_5 || *(arg2 + 0xa4) == 6)
            goto label_b1339c
        
    label_b13390:
        
        if (*(*(gDomClient + 0x205e0) + zx.q(*(arg2 + 0x9c)) * 0x21d8 + 0x21d0)
                == *(gDomClient + 0x1f8e4))
            goto label_b1339c
else if (x8 != 3 || *(arg2 + 0x30) != 0)
label_b133ac:
    int32_t v0_1
    int32_t v1_1
    int32_t v2_1
    int32_t v3_1
    v0_1, v1_1, v2_1, v3_1 = RectScreen()
    int32_t var_78 = v0_1
    int32_t var_74_1 = v1_1
    int32_t var_70_1 = v2_1
    int32_t var_6c_1 = v3_1
    int32_t v0_2
    int32_t v1_2
    int32_t v2_2
    int32_t v3_2
    v0_2, v1_2, v2_2, v3_2 = RectScreenSafe()
    int32_t var_88 = v0_2
    int32_t var_84_1 = v1_2
    int32_t var_80_1 = v2_2
    int32_t var_7c_1 = v3_2
    int128_t v0_3
    int128_t v1_3
    v0_3, v1_3 = CurrentTransformWithMouseover(arg2)
    int32_t x8_18 = *(arg2 + 0x2c)
    int128_t var_a8
    int128_t var_98
    
    if (x8_18 == 0)
        int32_t x9_11 = *(arg2 + 0x128)
        
        if (x9_11 != 0)
            if (x9_11 != 1)
                v0_3.d = float.s(0x3f19999a)
            else
                int32_t x10_2 = *(gDomClient + 0x38)
                int32_t x10_3
                
                x10_3 = x10_2 == 0xffffffff ? 0 : x10_2
                
                v0_3.d = float.s(0x3f19999a)
                v1_3.d = fconvert.s(4f)
                
                if (*(arg2 + 0xa0) == x10_3)
                    v0_3.d = v1_3.d
                else
                    v0_3.d = v0_3.d
            
            v1_3.d = *gSecondsPerUpdate
            v0_3.d = v0_3.d f* v1_3.d
            float v2_3 = *(arg2 + 0x12c) f+ v0_3.d
            v0_3.d = fconvert.s(1f)
            *(arg2 + 0x12c) = v2_3
            
            if (not(v2_3 f<= v0_3.d))
                *(arg2 + 0x128) = 0
            else if (x9_11 == 1)
                int32_t x9_14 = *(gDomClient + 0x38)
                int32_t x9_15
                
                x9_15 = x9_14 == 0xffffffff ? 0 : x9_14
                
                if (*(arg2 + 0xa0) != x9_15)
                    v0_3.d = var_a8.d
                    v1_3.d = float.s(0x3dcccccd)
                    float v3_3
                    
                    if (v2_3 f>= v1_3.d)
                        v1_3.d = float.s(0x3f666666)
                        bool cond:4_1 = v2_3 f<= v1_3.d
                        v1_3.d = fconvert.s(1f)
                        
                        if (not(cond:4_1))
                            v2_3 = (v2_3 + float.s(0xbf666666)) / float.s(0x3dccccd0)
                            
                            if (not(v2_3 <= 0f))
                                v3_3 = fconvert.s(1f)
                                v1_3.d = 0f
                                
                                if (not(v2_3 >= v3_3))
                                    v1_3.d = v2_3 * v2_3
                                    v1_3.d = v3_3 f- v1_3.d
                    else
                        v1_3.d = float.s(0x3dcccccd)
                        v2_3 = v2_3 f/ v1_3.d
                        v1_3.d = 0f
                        
                        if (not(v2_3 <= 0f))
                            v1_3.d = fconvert.s(1f)
                            
                            if (not(v2_3 f>= v1_3.d))
                                v1_3.d = fconvert.s(2f)
                                v1_3.d = v1_3.d f- v2_3
                                v1_3.d = v2_3 f* v1_3.d
                                v1_3.d = v1_3.d f+ 0f
                    
                    v2_3 = v0_3.d f* float.s(0x447a0000)
                    v3_3 = var_98:4.d + v0_3.d f* float.s(0xc42f0000) f* v1_3.d
                    float v6_1 = v2_3 * float.s((*(arg2 + 0x130) << 1) - *(arg2 + 0x134) + 1)
                    v0_3.d = v0_3.d f* (v1_3.d f* fconvert.s(3f) + fconvert.s(1f))
                    v2_3 = v2_3 f* v1_3.d
                    v1_3.d = v6_1 f* v1_3.d
                    v1_3.d = 0f f- v1_3.d
                    v2_3 = v2_3 + var_98:8.d
                    v1_3.d = v1_3.d f+ v3_3
                    var_a8.d = v0_3.d
                    var_98:4.d = v1_3.d
                    var_98:8.d = v2_3
                else
                    v1_3.d = 0f
                    
                    if (not(v2_3 <= 0f))
                        v0_3.d = fconvert.s(1f)
                        
                        if (not(v2_3 f>= v0_3.d))
                            v1_3.d = var_a8.d
                            v0_3.d = v0_3.d f- fabs(v0_3.d f- (v2_3 + v2_3))
                            v2_3 = v0_3.d f* v0_3.d
                            v0_3.d = v0_3.d f+ v0_3.d
                            v0_3.d = fconvert.s(3f) f- v0_3.d
                            v1_3.d = v1_3.d f* float.s(0xc2c80000)
                            v0_3.d = v2_3 f* v0_3.d
                            v0_3.d = v0_3.d f* v1_3.d
                            v1_3.d = 0f
                            v1_3.d = v0_3.d f+ v1_3.d
                    
                    v0_3.d = var_98:8.d
                    v0_3.d = v1_3.d f+ v0_3.d
                    var_98:8.d = v0_3.d
    
    v1_3 = var_a8
    int32_t* x23_1
    
    if (x8_18 == 0)
        x23_1 = zx.q(*(arg2 + 0xb0))
    else
        x23_1 = nullptr
    
    *(arg2 + 0x1c) = var_98
    *(arg2 + 0xc) = v1_3
    
    if (x8_18 == 1)
        if (*(arg2 + 0x174) != 3)
            x23_1 = zx.q(*(arg2 + 0x3c4))
        else
            x23_1 = nullptr
    
    int32_t i_8 = CardGetLayer(arg2)
    int32_t x8_20 = *(arg2 + 0x2c)
    uint64_t i_6 = zx.q(i_8)
    *arg2 = i_8
    
    if (x8_20 == 3)
        i_6 = zx.q(i_6.d - (not.d(IsPileInActiveSet(arg2, nullptr)) & 1))
    
    bool var_ac
    DomCardDef* x27_1 = zx.q(CalcCardFaceup(arg2, &var_ac)) ^ 1
    
    if (*(arg2 + 0x2c) == 0)
        if (*(arg2 + 0xa4) != 0x3eb)
        label_b136a4:
            
            if (*(arg2 + 0x2c) == 0 && *(arg2 + 0xa4) == 0x3eb)
                uint64_t x10_8 = zx.q(*(gDomClient + 0x205e8))
                void* x8_31
                void* x10_9
                int64_t x11_3
                
                if (x10_8.d != 0)
                    x8_31 = *(gDomClient + 0x205e0)
                    x11_3 = x8_31 + x10_8 * 0x21d8
                    x10_9 = x8_31
                    
                    while (zx.d(*(x10_9 + 0x21d2)) == 0)
                        x10_9 += 0x21d8
                        
                        if (x10_9 u>= x11_3)
                            goto label_b1377c
                
                if (x10_8.d == 0 || x10_9 == 0xffffffff)
                label_b1377c:
                    x27_1 = zx.q(*(arg2 + 0x1f78) == 0 ? 1 : 0) | zx.q(x27_1.d)
                else
                    while (true)
                        if (*(x10_9 + 0x2c) == 3 && *(x10_9 + 0x58) == *(arg2 + 0xa0)
                                && *(x10_9 + 0x5c) == 0x3eb && *(x10_9 + 0x60) == 0)
                            if (x10_9 == 0)
                                goto label_b1377c
                            
                            if (*(x10_9 + 0x21d0) != *(gDomClient + 0x1f8e4))
                                goto label_b1377c
                            
                            break
                        
                        if (x10_9 == 0)
                            x10_9 = x8_31
                        else
                            x10_9 += 0x21d8
                        
                        if (x10_9 u>= x11_3)
                            goto label_b1377c
                        
                        while (zx.d(*(x10_9 + 0x21d2)) == 0)
                            x10_9 += 0x21d8
                            
                            if (x10_9 u>= x11_3)
                                goto label_b1377c
                        
                        if (x10_9 == 0xffffffff)
                            goto label_b1377c
        else
            if ((CardIsShadow(arg2) & 1) == 0)
                goto label_b136a4
            
            int32_t x8_25 = *(gDomClient + 0x38)
            uint64_t x10_4 = zx.q(*(gDomClient + 0x205e8))
            int32_t x8_26
            
            x8_26 = x8_25 == 0xffffffff ? 0 : x8_25
            
            void* x9_13
            void* x10_5
            int64_t x11_2
            
            if (x10_4.d != 0)
                x9_13 = *(gDomClient + 0x205e0)
                x11_2 = x9_13 + x10_4 * 0x21d8
                x10_5 = x9_13
                
                while (zx.d(*(x10_5 + 0x21d2)) == 0)
                    x10_5 += 0x21d8
                    
                    if (x10_5 u>= x11_2)
                        goto label_b1369c
            
            if (x10_4.d != 0 && x10_5 != 0xffffffff)
                while (true)
                    if (*(x10_5 + 0x2c) == 3 && *(x10_5 + 0x58) == x8_26 && *(x10_5 + 0x5c) == 0x3eb
                            && *(x10_5 + 0x60) == 0)
                        if (x10_5 == 0)
                            goto label_b1369c
                        
                        if (*(x10_5 + 0x21d0) != *(gDomClient + 0x1f8e4))
                            goto label_b1369c
                        
                        break
                    
                    if (x10_5 == 0)
                        x10_5 = x9_13
                    else
                        x10_5 += 0x21d8
                    
                    if (x10_5 u>= x11_2)
                        goto label_b1369c
                    
                    while (zx.d(*(x10_5 + 0x21d2)) == 0)
                        x10_5 += 0x21d8
                        
                        if (x10_5 u>= x11_2)
                            goto label_b1369c
                    
                    if (x10_5 == 0xffffffff)
                        goto label_b1369c
                
                goto label_b136a4
            
        label_b1369c:
            
            if (*(arg2 + 0x1f78) != 0)
                goto label_b136a4
            
            x27_1 = 1
    
    int32_t x8_35
    
    if (x23_1.d == 0xffffffff)
        x8_35 = 0
    else
        x8_35 = x23_1.d << 1
    
    *(arg2 + 4) = x8_35
    int32_t x8_36
    
    if (zx.d(var_ac) != 0)
        x8_36 = *(arg2 + 0xa4)
        
        if (x8_36 == 0x3eb)
            goto label_b13814
        
        goto label_b137a4
    
    *(arg2 + 4) = 0x640 - (x8_35 << 1)
    x8_36 = *(arg2 + 0xa4)
    
    if (x8_36 != 0x3eb)
    label_b137a4:
        
        if (x8_36 == 0x3ec)
            int32_t x8_37 = *(gDomClient + 0x38)
            uint64_t x10_10 = zx.q(*(gDomClient + 0x205e8))
            int32_t x8_38
            
            x8_38 = x8_37 == 0xffffffff ? 0 : x8_37
            
            void* x9_20
            void* x10_11
            int64_t x11_4
            
            if (x10_10.d != 0)
                x9_20 = *(gDomClient + 0x205e0)
                x11_4 = x9_20 + x10_10 * 0x21d8
                x10_11 = x9_20
                
                while (zx.d(*(x10_11 + 0x21d2)) == 0)
                    x10_11 += 0x21d8
                    
                    if (x10_11 u>= x11_4)
                        goto label_b138d8
            
            if (x10_10.d == 0 || x10_11 == 0xffffffff)
            label_b138d8:
                *(arg2 + 4) = *(arg2 + 8) << 1
            else
                while (true)
                    if (*(x10_11 + 0x2c) == 3 && *(x10_11 + 0x58) == x8_38
                            && *(x10_11 + 0x5c) == 0x3ec && *(x10_11 + 0x60) == 0)
                        if (x10_11 == 0)
                            goto label_b138d8
                        
                        if (*(x10_11 + 0x21d0) != *(gDomClient + 0x1f8e4))
                            goto label_b138d8
                        
                        break
                    
                    if (x10_11 == 0)
                        x10_11 = x9_20
                    else
                        x10_11 += 0x21d8
                    
                    if (x10_11 u>= x11_4)
                        goto label_b138d8
                    
                    while (zx.d(*(x10_11 + 0x21d2)) == 0)
                        x10_11 += 0x21d8
                        
                        if (x10_11 u>= x11_4)
                            goto label_b138d8
                    
                    if (x10_11 == 0xffffffff)
                        goto label_b138d8
    else
    label_b13814:
        int32_t x8_40 = *(gDomClient + 0x38)
        uint64_t x10_12 = zx.q(*(gDomClient + 0x205e8))
        int32_t x8_41
        
        x8_41 = x8_40 == 0xffffffff ? 0 : x8_40
        
        void* x9_22
        void* x10_13
        int64_t x11_5
        
        if (x10_12.d != 0)
            x9_22 = *(gDomClient + 0x205e0)
            x11_5 = x9_22 + x10_12 * 0x21d8
            x10_13 = x9_22
            
            while (zx.d(*(x10_13 + 0x21d2)) == 0)
                x10_13 += 0x21d8
                
                if (x10_13 u>= x11_5)
                    goto label_b13960
        
        if (x10_12.d == 0 || x10_13 == 0xffffffff)
        label_b13960:
            int32_t x8_45 = 0x2710 - (*(arg2 + 8) << 1)
            *(arg2 + 4) = x8_45 & not.d(x8_45 s>> 0x1f)
        else
            while (true)
                if (*(x10_13 + 0x2c) == 3 && *(x10_13 + 0x58) == x8_41 && *(x10_13 + 0x5c) == 0x3eb
                        && *(x10_13 + 0x60) == 0)
                    if (x10_13 == 0)
                        goto label_b13960
                    
                    if (*(x10_13 + 0x21d0) != *(gDomClient + 0x1f8e4))
                        goto label_b13960
                    
                    break
                
                if (x10_13 == 0)
                    x10_13 = x9_22
                else
                    x10_13 += 0x21d8
                
                if (x10_13 u>= x11_5)
                    goto label_b13960
                
                while (zx.d(*(x10_13 + 0x21d2)) == 0)
                    x10_13 += 0x21d8
                    
                    if (x10_13 u>= x11_5)
                        goto label_b13960
                
                if (x10_13 == 0xffffffff)
                    goto label_b13960
    
    if (x26 != 0)
        goto label_b13aac
    
    int32_t x8_46 = *(arg2 + 0x2c)
    
    if (x8_46 != 3 || *(arg2 + 0x70) == 0 || *(arg2 + 0x38) == 0)
        x23_1 = nullptr
        x26 = 0
    else
        x26 = 2
        
        if (*(arg2 + 0x3c) == 0)
            x23_1 = 1
        else
            int32_t x9_26 = *(arg2 + 0x40)
            
            x23_1 = x9_26 != 0 ? 3 : 2
            
            x26 = x9_26 != 0 ? 4 : 3
    
    DomGfx& x9_27 = arg2
    int32_t x0_11
    
    if (x8_46 == 3)
        while (true)
            x0_11 = *(x9_27 + 0x30)
            
            if (x0_11 == 0x70d)
                break
            
            if (x0_11 == 0x718)
                break
            
            int32_t x8_47 = *(x9_27 + 0x70)
            
            if (x8_47 == 0)
                goto label_b13a3c
            
            x9_27 = *(gDomClient + 0x205e0) + zx.q(x8_47.w) * 0x21d8
            x8_46 = *(x9_27 + 0x2c)
            
            if (x8_46 != 3)
                goto label_b13a04
        
        goto label_b13a54
    
label_b13a04:
    
    if (x8_46 != 5)
        if (x8_46 == 1)
            if (*(x9_27 + 0x170) == 0xf3a)
                goto label_b13a80
            
            goto label_b13a54
        
        if (x8_46 != 0)
            goto label_b1593c
        
        if (CardWhat(gDomClient + 0x20728, zx.q(*(x9_27 + 0x98))) != 0xf3a)
            goto label_b13a54
        
        goto label_b13a80
    
    x0_11 = *(x9_27 + 0x204)
label_b13a3c:
    
    if (x0_11 != 0xf3a)
    label_b13a54:
        
        if (x23_1.d == 3)
            goto label_b13aac
        
        if (x23_1.d == 1)
            goto label_b13a80
        
        if (x23_1.d == 0)
            if (*(arg2 + 0x214c) != 0)
                UI2Free(arg2 + 0x214c)
            
            goto label_b13a80
    else
    label_b13a80:
        
        if (*(arg2 + 0x2150) != 0)
            UI2Free(arg2 + 0x2150)
    
    if (*(arg2 + 0x2154) == 0)
        goto label_b13aac
    
    UI2Free(arg2 + 0x2154)
label_b13aac:
    int32_t i_7 = x24.d
    DomGame& var_d8 = arg1
    DomCardDef* x0_17
    int128_t v0_4
    int128_t v2_4
    x0_17, v0_4, v2_4 = CardDef(arg1, arg2)
    DomCardDef* var_c8 = x0_17
    int32_t var_cc
    
    if (x26 u> 5)
    label_b1593c:
        pthread_kill(pthread_self(), 6)
        XNoReturn()
    label_b1594c:
        
        if (__cxa_guard_acquire(&data_182aa60) != 0)
            data_182dcc0 = _vtable_for_UI2StateDecl + 0x10
            void* x0_192 = UI2StateDeclTryLookup("ad_Estate_Inheritance")
            
            if (x0_192 == 0)
                (*data_182dcc0)(&data_182dcc0, "ad_Estate_Inheritance")
                uint32_t x10_30 = *UI2StateDeclI_counter
                uint64_t x11_18 = *UI2StateDeclI_head
                *UI2StateDeclI_head = &data_182dcc0
                *UI2StateDeclI_counter = x10_30 + 1
                data_182dcc8 = x11_18
            else
                (*data_182dcc0)(&data_182dcc0, *(x0_192 + 0x10))
            
            __cxa_guard_release(&data_182aa60)
            x24 = var_d8
            i_6 = zx.q(i_7)
            x26 = var_cc
            x27_1 = var_c8
        
        goto label_b14b58
    
    x23_1 = arg2 + 0x2148
    var_cc = x26
    int64_t x8_56
    
    switch (x26)
        case 0
            DomGfx& x8_53 = arg2
            int32_t x11_7 = *(x8_53 + 0x2c)
            int32_t x0_19
            
            if (x11_7 != 3)
            label_b13b40:
                
                if (x11_7 == 5)
                    x0_19 = *(x8_53 + 0x204)
                else if (x11_7 == 1)
                    x0_19 = *(x8_53 + 0x170)
                else
                    if (x11_7 != 0)
                        goto label_b1593c
                    
                    x0_19 = CardWhat(gDomClient + 0x20728, zx.q(*(x8_53 + 0x98)))
            else
                while (true)
                    x0_19 = *(x8_53 + 0x30)
                    
                    if (x0_19 == 0x70d)
                        goto label_b14da8
                    
                    if (x0_19 == 0x718)
                        goto label_b14da8
                    
                    int32_t x8_54 = *(x8_53 + 0x70)
                    
                    if (x8_54 == 0)
                        break
                    
                    x8_53 = *(gDomClient + 0x205e0) + zx.q(x8_54.w) * 0x21d8
                    x11_7 = *(x8_53 + 0x2c)
                    
                    if (x11_7 != 3)
                        goto label_b13b40
            
            if (x0_19 != 0xf3a)
            label_b14da8:
                UI2Free(arg2 + 0x214c)
                UI2Free(arg2 + 0x2150)
                UI2Free(arg2 + 0x2154)
            
            x23_1 = arg2 + 0x2148
        case 1
            goto label_b13b88
        case 2
            x8_56 = 0x214c
        label_b13b80:
            x23_1 = arg2 + x8_56
        label_b13b88:
            x24 = zx.q(*(arg2 + (sx.q(x26) << 2) + 0x30))
            uint64_t x1_5
            
            if (*(GetClient() + 0x5068) == 0)
                x1_5 = 0x18
            else
                x1_5 = zx.q(*(ActiveGame() + 0x30))
            
            DomCardDef* x0_23
            int128_t v0_5
            int128_t v4_2
            x0_23, v0_5, v4_2 = DomDefGet(zx.q(x24.d), x1_5)
            var_c8 = x0_23
            float v1_5
            
            if (*(arg2 + 0x2c) != 3 || *(arg2 + 0x70) == 0 || *(arg2 + 0x38) == 0)
                v1_5 = fconvert.s(1f)
                v0_5.q = *V20
            else
                int32_t x8_188
                
                if (*(arg2 + 0x3c) == 0)
                    if (x26 == 1)
                        v0_5.q = 0x429e000042a60000
                        x8_188 = 0x3f59999a
                    else
                        if (x26 != 2)
                            goto label_b1593c
                        
                        v0_5.q = *V20
                        x8_188 = 0x3f59999a
                else if (*(arg2 + 0x40) == 0)
                    if (x26 == 1)
                        v0_5.q = 0x431e000043260000
                    else if (x26 == 3)
                        v0_5.q = *V20
                    else
                        if (x26 != 2)
                            goto label_b1593c
                        
                        v0_5.q = 0x429e000042a60000
                    
                    x8_188 = 0x3f39999a
                else
                    if (x26 - 1 u>= 3)
                        v0_5.q = *V20
                    else
                        int64_t x8_65 = zx.q(x26 - 1) << 0x20 s>> 0x1e
                        v0_5.d = *(&data_801b84 + x8_65)
                        v0_5:4.d = *(&data_801b90 + x8_65)
                    
                    x8_188 = 0x3f266666
                
                v1_5 = float.s(x8_188)
            
            v4_2.q = var_98:4.q
            v1_5 = v1_5 * var_a8.d
            var_a8.d = v1_5
            v0_5.d = v0_5.d f* v1_5
            v0_5:4.d = v0_5:4.d f* v1_5
            v1_5 = v1_5 * 0f + var_98:0xc.d
            var_98:4.q = vadd_f32(v0_5, v4_2)
            var_98:0xc.d = v1_5
        case 3
            x8_56 = 0x2150
            goto label_b13b80
        case 4
            x8_56 = 0x2154
            goto label_b13b80
        case 5
            v0_4.d = var_a8.d
            v2_4.d = 0f
            v2_4.d = v0_4.d f* v2_4.d
            v0_4.d = 30f f* v0_4.d
            v0_4:4.d = 220f f* v0_4.d
            float v1_4 = v2_4.d f+ var_98:0xc.d
            v2_4.q = var_98:4.q
            int64_t x9_39 = *(gDomClient + 0x205e0)
            x23_1 = arg2 + 0x214c
            DomGfx& x8_117 = arg2
            var_98:0xc.d = v1_4
            var_98:4.q = vadd_f32(v0_4, v2_4)
            int32_t x11_8 = *(x8_117 + 0x2c)
            uint64_t x1_15
            
            if (x11_8 != 3)
            label_b14148:
                
                if (x11_8 != 5)
                    if (x11_8 == 1)
                        x1_15 = zx.q(*(x8_117 + 0x170))
                        
                        if (x1_15.d == 0xf3a)
                            goto label_b14df8
                        
                        goto label_b14e30
                    
                    if (x11_8 != 0)
                        goto label_b1593c
                    
                    x1_15 = zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x8_117 + 0x98))))
                    
                    if (x1_15.d == 0xf3a)
                        goto label_b14df8
                    
                    goto label_b14e30
                
                x1_15 = zx.q(*(x8_117 + 0x204))
            else
                while (true)
                    x1_15 = zx.q(*(x8_117 + 0x30))
                    
                    if (x1_15.d == 0x70d)
                        goto label_b14e30
                    
                    if (x1_15.d == 0x718)
                        goto label_b14e30
                    
                    int32_t x8_118 = *(x8_117 + 0x70)
                    
                    if (x8_118 == 0)
                        break
                    
                    x8_117 = x9_39 + zx.q(x8_118.w) * 0x21d8
                    x11_8 = *(x8_117 + 0x2c)
                    
                    if (x11_8 != 3)
                        goto label_b14148
            
            uint64_t x1_46
            
            if (x1_15.d != 0xf3a)
            label_b14e30:
                x24 = zx.q(*LandscapeRefPiles(gDomClient + 0x2147c, x1_15))
                
                if (*(GetClient() + 0x5068) == 0)
                    x1_46 = 0x18
                else
                    x1_46 = zx.q(*(ActiveGame() + 0x30))
            else
            label_b14df8:
                x24 = zx.q(CardWhat(gDomClient + 0x20728, zx.q(MouseCard(gDomClient + 0x20728))))
                
                if (*(GetClient() + 0x5068) != 0)
                    x1_46 = zx.q(*(ActiveGame() + 0x30))
                else
                    x1_46 = 0x18
            
            var_c8 = DomDefGet(zx.q(x24.d), x1_46)
            *(arg2 + 4) += 1
    
    XAsset* x21_1 = *UI2_CARD_LAYOUT
    int32_t x26_1 = *(var_c8 + 0xc0)
    uint64_t x1_6
    
    if (*(GetClient() + 0x5068) == 0)
        x1_6 = 0x18
    else
        x1_6 = zx.q(*(ActiveGame() + 0x30))
    
    XAsset* x26_2
    
    if ((IsLandscape(zx.q(x26_1), x1_6) & 1) != 0)
        x26_2 = *UI2_LANDSCAPE_LAYOUT
    else
        x26_2 = x21_1
    
    int32_t var_c0
    
    if (*(arg2 + 0x2c) == 0)
        if ((zx.d(*(CardDef(gDomClient + 0x20728, arg2) + 0xcb)) & 0x44444444) == 0)
            goto label_b13cd0
        
        if (*(arg2 + 0x1f78) == 0)
            if (*(arg2 + 0x3b0) == 1 && *(arg2 + 0x3b8) == 0x21)
                goto label_b13cd0
        else if ((*(arg2 + 0x308) == 1 && *(arg2 + 0x310) == 0x21)
                || (*(arg2 + 0x478) == 1 && *(arg2 + 0x480) == 0x21))
            goto label_b13cd0
        
        UI2Begin("card", x23_1, *UI2_POD_ICONS, &var_78, &var_88, i_6.d, *(arg2 + 4), false)
        UI2SetTransform(zx.q(*x23_1), &var_a8)
        
        if ((TutorialGlow(arg2) & 1) != 0)
            UI2SetState(zx.q(*x23_1), &data_182c580, 0xffffffff, 0)
        
        if (*(GetClient() + 0x5068) == 1)
            int32_t x0_57 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_c0)
            int64_t x8_128 = sx.q(*(gDomClient + 0x205cc))
            
            if (x8_128.d s< x0_57)
                int64_t x9_40 = var_c0.q
                
                if (x9_40 != 0)
                    UI2SetState(zx.q(*x23_1), x9_40 + x8_128 * 0xb0, 0xffffffff, 0)
        
        int32_t x9_41 = *(var_c8 + 0xc0)
        uint64_t x8_129 = zx.q(x9_41 - 0xd4a)
        UI2StateDecl* x1_20
        
        if (x8_129.d u<= 4)
            x1_20 = &data_182d660
            
            switch (x8_129)
                case 1
                    x1_20 = &data_182d6f0
                case 2
                    x1_20 = &data_182d708
                case 3
                    x1_20 = &data_182d750
                case 4
                    x1_20 = &data_182d768
            
            UI2SetState(zx.q(*x23_1), x1_20, 0xffffffff, 0)
        else
            uint64_t x8_130 = zx.q(x9_41 - 0xe19)
            
            if (x8_130.d u<= 4)
                switch (x8_130)
                    case 0
                        x1_20 = &data_182d6c0
                    case 1
                        x1_20 = &data_182d690
                    case 2
                        x1_20 = &data_182d6a8
                    case 3
                        x1_20 = &data_182d678
                    case 4
                        x1_20 = &data_182d6d8
                
                UI2SetState(zx.q(*x23_1), x1_20, 0xffffffff, 0)
        
        if (*(arg2 + 0xa4) != 0x3f1)
            UI2SetState(zx.q(*(arg2 + 0x2148)), &data_182c658, 0xffffffff, 0)
            UI2SetState(zx.q(*(arg2 + 0x2148)), &data_182c670, 0xffffffff, 0)
        
        UI2UpdateRoot(zx.q(*x23_1), false, *gSecondsPerUpdate)
    else
    label_b13cd0:
        UI2Begin("card", x23_1, x26_2, &var_78, &var_88, i_6.d, *(arg2 + 4), false)
        UI2SetHandler(zx.q(*x23_1), CardClick)
        UI2SetState(zx.q(*x23_1), UIS_GAME, 0xffffffff, 0)
        LanguageStateSet(zx.q(*x23_1))
        
        if (*(arg2 + 0x1f78) == 0)
            x26 = var_cc
            
            if ((*(arg2 + 0x3b8) & 0xfffffffe) == 6 && *(arg2 + 0x3b0) == 1
                && *(arg2 + 0x3bc) u<= 0x48)
            label_b13e00:
                UI2SetState(zx.q(*x23_1), &data_182d4f8, 0xffffffff, 0)
                
                if (*(arg2 + 0x1f78) == 0)
                    goto label_b13e64
                
                goto label_b13e10
            
        label_b13e64:
            
            if (*(arg2 + 0x3b0) != 1 || (*(arg2 + 0x3b8) & 0xfffffffe) != 6
                || *(arg2 + 0x3bc) != 0x3ec)
            label_b13e98:
                
                if (*(gDomClient + 0x1f8c0) != *(arg2 + 0x21d0))
                    UI2SetState(zx.q(*x23_1), &data_182d4c8, 0xffffffff, 0)
        else
            x26 = var_cc
            
            if (*(arg2 + 0x3b0) == 1 && (*(arg2 + 0x3b8) & 0xfffffffe) == 6)
                int32_t x8_74 = *(arg2 + 0x3bc)
                
                if (x8_74 u> 0x48 || *(arg2 + 0x478) != 1 || (*(arg2 + 0x480) & 0xfffffffe) != 6
                        || *(arg2 + 0x484) != x8_74)
                    goto label_b13e10
                
                goto label_b13e00
            
        label_b13e10:
            
            if ((*(arg2 + 0x308) != 1 || (*(arg2 + 0x310) & 0xfffffffe) != 6
                    || *(arg2 + 0x314) != 0x3eb) && (*(arg2 + 0x478) != 1
                    || (*(arg2 + 0x480) & 0xfffffffe) != 6 || *(arg2 + 0x484) != 0x3eb))
                goto label_b13e98
        
        bool var_b0 = false
        uint32_t x16_1 = 0
        
        if (*(arg2 + 0x2c) == 0)
            if (*(arg2 + 0xbc) s< 2)
            labelid_1b2:
                x16_1 = 0
            else if (*(arg2 + 0x1f78) == 0)
                if (*(arg2 + 0x128) == 0)
                    goto label_b14cbc
                
            labelid_1b2:
                x16_1 = 0
            else if (*(arg2 + 0x520) == 3 || *(arg2 + 0x128) != 0)
            labelid_1b2:
                x16_1 = 0
            else
            label_b14cbc:
                int32_t x8_189 = *(arg2 + 0xa4)
                
                if (x8_189 == 0x3ea)
                label_b158a8:
                    UI2SetState(zx.q(*x23_1), &data_182cc70, 0xffffffff, 0)
                label_b158b4:
                    i_6 = &data_182cbf8
                    UI2SetState(zx.q(*x23_1), &data_182cbf8, 0xffffffff, 0)
                    int32_t x26_5 = *x23_1
                    XStringFromInt(*(arg2 + 0xbc))
                    x26 = var_cc
                    UI2SetText(zx.q(x26_5), &data_182cc10, &var_c0, 0xffffffff)
                    XString::~XString()
                    x16_1 = 1
                else if (x8_189 == 0x3eb)
                    uint64_t x11_13 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (x11_13.d == 0)
                    labelid_1b2:
                        x16_1 = 0
                    else
                        void* x9_56 = *(gDomClient + 0x205e0)
                        int64_t x11_14 = x9_56 + x11_13 * 0x21d8
                        void* x12_4 = x9_56
                        
                        while (zx.d(*(x12_4 + 0x21d2)) == 0)
                            x12_4 += 0x21d8
                            x16_1 = 0
                            
                            if (x12_4 u>= x11_14)
                                goto label_b13f10
                        
                        if (x12_4 == 0xffffffff)
                        label_b13ef0:
                            x16_1 = 0
                        else
                            while (*(x12_4 + 0x2c) != 3 || *(x12_4 + 0x58) != *(arg2 + 0xa0)
                                    || *(x12_4 + 0x5c) != 0x3eb || *(x12_4 + 0x60) != 0)
                                if (x12_4 == 0)
                                    x12_4 = x9_56
                                else
                                    x12_4 += 0x21d8
                                
                                if (x12_4 u>= x11_14)
                                    goto label_b13ef0_3
                                
                                while (true)
                                    x16_1 = zx.d(*(x12_4 + 0x21d2))
                                    
                                    if (x16_1 != 0)
                                        break
                                    
                                    x12_4 += 0x21d8
                                    
                                    if (x12_4 u>= x11_14)
                                        goto label_b13f10
                                
                                x16_1 = 0
                                
                                if (x12_4 == 0xffffffff)
                                    goto label_b13f10
                            
                            if (x12_4 != 0 && *(x12_4 + 0x21d0) == *(gDomClient + 0x1f8e4))
                                if (x8_189 != 0x3ea)
                                    goto label_b158b4
                                
                                goto label_b158a8
                            
                            x26 = var_cc
                            x16_1 = 0
                else
                    if (x8_189 != 0x3ec)
                        goto label_b158b4
                    
                    uint64_t x10_19 = zx.q(*(gDomClient + 0x205e8))
                    
                    if (x10_19.d == 0)
                    label_b13ef0_1:
                        x16_1 = 0
                    else
                        void* x8_191 = *(gDomClient + 0x205e0)
                        int64_t x10_20 = x8_191 + x10_19 * 0x21d8
                        void* x11_12 = x8_191
                        
                        while (zx.d(*(x11_12 + 0x21d2)) == 0)
                            x11_12 += 0x21d8
                            x16_1 = 0
                            
                            if (x11_12 u>= x10_20)
                                goto label_b13f10
                        
                        if (x11_12 == 0xffffffff)
                        label_b13ef0_2:
                            x16_1 = 0
                        else
                            while (*(x11_12 + 0x2c) != 3 || *(x11_12 + 0x58) != *(arg2 + 0xa0)
                                    || *(x11_12 + 0x5c) != 0x3ec || *(x11_12 + 0x60) != 0)
                                if (x11_12 == 0)
                                    x11_12 = x8_191
                                else
                                    x11_12 += 0x21d8
                                
                                if (x11_12 u>= x10_20)
                                    goto label_b13ef0_3
                                
                                while (zx.d(*(x11_12 + 0x21d2)) == 0)
                                    x11_12 += 0x21d8
                                    x16_1 = 0
                                    
                                    if (x11_12 u>= x10_20)
                                        goto label_b13f10
                                
                                x16_1 = 0
                                
                                if (x11_12 == 0xffffffff)
                                    goto label_b13f10
                            
                            if (x11_12 == 0)
                                x26 = var_cc
                                x16_1 = 0
                            else
                                x26 = var_cc
                                
                                if (*(x11_12 + 0x21d0) == *(gDomClient + 0x1f8e4))
                                    goto label_b158b4
                                
                            label_b13ef0_3:
                                x16_1 = 0
        
    label_b13f10:
        uint32_t var_e0_1 = x16_1
        
        if (((x27_1.d | ((*(arg2 + 0x21d0) == *(gDomClient + 0x1d01c) ? 1 : 0)
                & (*(gDomClient + 0x1d008) f< 0f ? 1 : 0))) & 1) != 0)
            UI2SetState(zx.q(*x23_1), &data_182d510, 0xffffffff, 0)
        
        if ((TutorialGlow(arg2) & 1) != 0)
            UI2SetState(zx.q(*x23_1), &data_182c580, 0xffffffff, 0)
        
        UI2StateDecl* var_f0
        int32_t var_e4
        
        if (*(GetClient() + 0x5068) != 1)
            var_f0 = nullptr
            var_e4 = 1
        else
            int32_t x0_42 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_c0)
            int64_t x8_109 = sx.q(*(gDomClient + 0x205cc))
            var_f0 = nullptr
            var_e4 = 1
            
            if (x8_109.d s< x0_42)
                int64_t x9_38 = var_c0.q
                
                if (x9_38 != 0)
                    UI2StateDecl* x1_12 = x9_38 + x8_109 * 0xb0
                    var_f0 = x1_12
                    UI2SetState(zx.q(*x23_1), x1_12, 0xffffffff, 0)
                    var_e4 = 0
        
        int32_t x8_133 = *(arg2 + 0x2c)
        
        if (x8_133 == 3)
            int32_t x22_1 = *(arg2 + 0x70)
            
            if (x22_1 != 0)
                i_6 = *(gDomClient + 0x205e0)
                
                if (*(ActiveGame() + 0x11b4) s>= 1)
                    int64_t x21_2 = 0
                    int64_t (* x27_2)() = gDomClient + 0x40e8
                    int32_t* x28_2 = i_6 + zx.q(x22_1.w) * 0x21d8 + 0x98
                    i_6 = gDomClient + 0x20728
                    int64_t x8_113
                    
                    do
                        if (*(gDomClient + x21_2 * 0x4d48 + 0x4d68) s>= 1)
                            x24 = 0
                            
                            while (true)
                                if ((CardIs(i_6, zx.q(*x28_2), zx.q(*(x27_2 + (x24 << 2)))) & 1)
                                        != 0)
                                    int32_t x8_124
                                    
                                    if (*(arg2 + 0x1f78) == 0)
                                        if (*(arg2 + 0x3b0) != 1)
                                            UI2SetState(zx.q(*x23_1), &data_182d780, 0xffffffff, 0)
                                        else
                                            x8_124 = *(arg2 + 0x3b8)
                                        label_b14304:
                                            
                                            if (x8_124 != 0x21)
                                                UI2SetState(zx.q(*x23_1), &data_182d780, 
                                                    0xffffffff, 0)
                                    else if (*(arg2 + 0x308) != 1 || *(arg2 + 0x310) != 0x21)
                                        if (*(arg2 + 0x478) == 1)
                                            x8_124 = *(arg2 + 0x480)
                                            goto label_b14304
                                        
                                        UI2SetState(zx.q(*x23_1), &data_182d780, 0xffffffff, 0)
                                    break
                                
                                x24 += 1
                                
                                if (x24 s>= sx.q(*(gDomClient + x21_2 * 0x4d48 + 0x4d68)))
                                    goto label_b1405c
                            
                            break
                        
                    label_b1405c:
                        x21_2 += 1
                        x8_113 = sx.q(*(ActiveGame() + 0x11b4))
                        x27_2 += 0x4d48
                    while (x21_2 s< x8_113)
            
            x8_133 = *(arg2 + 0x2c)
            x26 = var_cc
            
            if (x8_133 == 3)
                if (zx.d(*(arg2 + 0x78)) == 0
                        && (CardIs(gDomClient + 0x20728, zx.q(*(arg2 + 0x30)), 0x80000000000) & 1)
                        != 0)
                    UI2SetState(zx.q(*x23_1), &data_182d7e0, 0xffffffff, 0)
                
                x8_133 = *(arg2 + 0x2c)
        
        if (x8_133 == 0 && *(arg2 + 0x100) s>= 2)
            UI2SetState(zx.q(*x23_1), &data_182d588, 0xffffffff, 0)
            i_6 = zx.q(*x23_1)
            
            if (*(arg2 + 0xfc) == 0)
                *(arg2 + 0x100)
                XFormatString("%dx")
            else
                *(arg2 + 0x100)
                XFormatString("%d/%d")
            
            UI2SetText(zx.q(i_6.d), &data_182d570, &var_c0, 0xffffffff)
            XString::~XString()
        
        int32_t x27_3
        
        if (*(arg2 + 0x2c) != 3)
            x27_3 = 0
        else
            x27_3 = 0
            
            if (x26 u<= 1 && *(arg2 + 0x30) == *(gDomClient + 0x21594))
                UI2SetState(zx.q(*x23_1), &data_182d5a0, 0, 0)
                x27_3 = 1
            
            if ((x26 u> 1 || *(arg2 + 0x30) != *(gDomClient + 0x21594) || *(arg2 + 0x2c) == 3)
                    && x26 u<= 1
                    && (PileHasTrait(gDomClient + 0x20728, zx.q(*(arg2 + 0x30)), 0xc3f) & 1) != 0)
                UI2SetState(zx.q(*x23_1), &data_182d5b8, x27_3, 0)
                x27_3 += 1
        
        int32_t var_f4 = x26 - 1
        
        if (x26 u<= 1 && *(arg2 + 0x2c) == 3)
            int32_t i_9 = LandscapeFromRefPile(gDomClient + 0x2147c, zx.q(*(arg2 + 0x30)), &var_c0)
            
            if (i_9 s>= 1)
                i_6 = zx.q(i_9)
                int32_t* x26_3 = &var_c0
                uint64_t i
                
                do
                    int32_t fp_2 = *x26_3
                    
                    if (*(GetClient() + 0x5068) == 0)
                        if ((zx.d(*(DomDefGet(zx.q(fp_2), 0x18) + 0xcd)) & 1) != 0)
                        label_b14508:
                            x24 = zx.q(x27_3 + 1)
                            UI2SetState(zx.q(*x23_1), &data_182d7f8, x27_3, 0)
                            void* x0_72 = DomDefGet(zx.q(*x26_3), zx.q(*(gDomClient + 0x21478)))
                            UI2SetState(zx.q(*x23_1), x0_72 + 0x90, x27_3, 0)
                            x27_3 = x24.d
                    else if ((zx.d(*(DomDefGet(zx.q(fp_2), zx.q(*(ActiveGame() + 0x30))) + 0xcd))
                            & 1) != 0)
                        goto label_b14508
                    
                    i = i_6
                    i_6 -= 1
                    x26_3 = &x26_3[1]
                while (i != 1)
            
            x26 = var_cc
        
        UI2SetInt(zx.q(*x23_1), &data_182dc00, x27_3, 0xffffffff)
        int32_t x8_144 = *(arg2 + 0x2c)
        
        if (x8_144 != 0)
            goto label_b145bc
        
        if (*(arg2 + 0x1f78) != 0)
            if ((*(arg2 + 0x308) != 1 || (*(arg2 + 0x310) & 0xfffffffe) != 6
                    || *(arg2 + 0x314) != 0x3e9) && (*(arg2 + 0x478) != 1
                    || (*(arg2 + 0x480) & 0xfffffffe) != 6 || *(arg2 + 0x484) != 0x3e9))
                goto label_b146d4
            
            goto label_b146c4
        
        if (*(arg2 + 0x3b0) == 1 && (*(arg2 + 0x3b8) & 0xfffffffe) == 6 && *(arg2 + 0x3bc) == 0x3e9)
        label_b146c4:
            UI2SetState(zx.q(*x23_1), &data_182d798, 0xffffffff, 0)
            x8_144 = *(arg2 + 0x2c)
            
            if (x8_144 != 0)
                goto label_b145bc
            
            goto label_b146d4
        
    label_b146d4:
        
        if (zx.d(*(arg2 + 0x104)) != 0)
            UI2SetState(zx.q(*x23_1), &data_182d528, 0xffffffff, 0)
            x8_144 = *(arg2 + 0x2c)
        
        if (zx.d(*(arg2 + 0x104)) != 0 && x8_144 != 0)
            goto label_b145bc
        
        if (zx.d(*(arg2 + 0x117)) != 0 && *(arg2 + 0x1f78) == 0
                && (IsBoardPile(zx.q(*(arg2 + 0xa4))) & 1) != 0)
            UI2SetState(zx.q(*x23_1), &data_182d540, 0xffffffff, 0)
        
        x8_144 = *(arg2 + 0x2c)
        
        if (x8_144 != 0)
            goto label_b145bc
        
        int32_t x27_5 = *(arg2 + 0x10c)
        uint64_t x0_91
        UI2StateDecl* x1_30
        
        if (x27_5 s> 0x1011)
            if (x27_5 == 0x1012)
                UI2SetState(zx.q(*x23_1), &data_182d5e8, 0xffffffff, 0)
                x0_91 = zx.q(*x23_1)
                x1_30 = &data_182d618
            label_b15420:
                UI2SetState(x0_91, x1_30, 0xffffffff, 0)
                x8_144 = *(arg2 + 0x2c)
                
                if (x8_144 != 0)
                    goto label_b145bc
                
                goto label_b15430
            
            if (x27_5 == 0x121d)
                UI2SetState(zx.q(*x23_1), &data_182d600, 0xffffffff, 0)
                x0_91 = zx.q(*x23_1)
                x1_30 = &data_182d618
                goto label_b15420
            
        label_b151b4:
            uint64_t x1_47
            
            if (*(GetClient() + 0x5068) == 0)
                x1_47 = 0x18
            else
                x1_47 = zx.q(*(ActiveGame() + 0x30))
            
            void* x0_172 = DomDefGet(zx.q(x27_5), x1_47)
            UI2SetState(zx.q(*x23_1), &data_182d618, 0xffffffff, 0)
            x0_91 = zx.q(*x23_1)
            x1_30 = x0_172 + 0x90
            goto label_b15420
        
        if (x27_5 != 0)
            if (x27_5 != 0xc0e)
                goto label_b151b4
            
            UI2SetState(zx.q(*x23_1), &data_182d5d0, 0xffffffff, 0)
            x0_91 = zx.q(*x23_1)
            x1_30 = &data_182d618
            goto label_b15420
        
    label_b15430:
        
        if (zx.d(*(arg2 + 0x115)) != 0)
            UI2SetState(zx.q(*x23_1), &data_182cc88, 0xffffffff, 0)
            x8_144 = *(arg2 + 0x2c)
        
        if (zx.d(*(arg2 + 0x115)) != 0 && x8_144 != 0)
            goto label_b145bc
        
        if (zx.d(*(arg2 + 0x116)) == 0)
            x27_1 = var_c8
        else
            UI2SetState(zx.q(*x23_1), &data_182cca0, 0xffffffff, 0)
            x8_144 = *(arg2 + 0x2c)
        label_b145bc:
            
            if (x8_144 != 3)
                x27_1 = var_c8
            else
                int32_t x9_43 = *(gDomClient + 0x1f8c0)
                int32_t x21_4 = *(arg2 + 0x70) == x9_43 ? 1 : 0
                
                if (*(arg2 + 0x21d0) == *(gDomClient + 0x1d01c))
                    x27_1 = var_c8
                else
                    i_6 = zx.q(*(arg2 + 0x6c))
                    int32_t x27_4 = *(arg2 + 0x30)
                    
                    if (*(GetClient() + 0x5068) == 0)
                        if ((IsLandscape(zx.q(x27_4), 0x18) & 1) == 0)
                        label_b14a08:
                            x27_1 = var_c8
                            
                            if ((*(arg2 + 0x2c) != 3 || *(arg2 + 0x30) != *(gDomClient + 0x215f0))
                                    && (zx.d(*(x27_1 + 0xce)) & 0x10) == 0)
                                int32_t x27_7 = i_6.d - (x21_4 & (x9_43 != 0 ? 1 : 0))
                                int32_t x0_119
                                
                                if (x27_7 == 0)
                                    x0_119 = IsSupplyPile(zx.q(*(arg2 + 0x5c)))
                                
                                if (x27_7 != 0 || (x0_119 & 1) == 0)
                                    UI2SetState(zx.q(*x23_1), &data_182cbf8, 0xffffffff, 0)
                                    int32_t fp_3 = *x23_1
                                    XStringFromInt(x27_7)
                                    UI2SetText(zx.q(fp_3), &data_182cc10, &var_c0, 0xffffffff)
                                    XString::~XString()
                                    
                                    if (var_f4 u<= 3)
                                        UI2SetState(zx.q(*x23_1), &data_182cbc8, 0xffffffff, 0)
                                        int32_t x28_4 = *x23_1
                                        XStringFromInt(*(arg2 + (zx.q(var_f4) << 2) + 0x44))
                                        UI2SetText(zx.q(x28_4), &data_182cbe0, &var_c0, 0xffffffff)
                                        XString::~XString()
                                    
                                    var_e0_1 = 1
                                else
                                    UI2SetState(zx.q(*x23_1), &data_182cc28, 0xffffffff, 0)
                                
                                x27_1 = var_c8
                        else
                            x27_1 = var_c8
                    else
                        if ((IsLandscape(zx.q(x27_4), zx.q(*(ActiveGame() + 0x30))) & 1) == 0)
                            goto label_b14a08
                        
                        x27_1 = var_c8
        
        int32_t var_68
        
        if (*(gDomClient + 0x1d01c) == *(arg2 + 0x21d0))
            if (*(arg2 + 0x2c) == 1)
                uint64_t x1_31 = zx.q(*(arg2 + 0x170))
                int32_t x0_95
                
                if (x1_31.d != 0x1309)
                    x0_95 = CardIs(gDomClient + 0x20728, x1_31, 0x100000000000)
                
                if (x1_31.d == 0x1309 || (x0_95 & 1) != 0)
                    UI2SetState(GameMainUI(), &data_182db40, 0xffffffff, 0)
            
            if (not(*(gDomClient + 0x1d004) f!= fconvert.s(1f))
                    && not(*(gDomClient + 0x1d008) f<= float.s(0x3e99999a)))
                int32_t x0_98 = GetSmartplayDefs(zx.q(*(x27_1 + 0xc0)), &var_c0)
                
                if (x0_98 != 0)
                    int32_t x8_165 = *(GetClient() + 0x5068)
                    int32_t x0_102
                    
                    if (x8_165 == 1)
                        x0_102 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_68)
                    
                    if (x8_165 != 1 || *(gDomClient + 0x205cc) s>= x0_102 || var_68.q == 0)
                        UI2SetState(zx.q(*x23_1), &data_182db58, 0xffffffff, 0)
                    
                    if (zx.d(*(gDomClient + 0x1d000)) != 0)
                        DeclareSmartplays(zx.q(*x23_1), x0_98, &var_c0)
                
                x27_1 = var_c8
        
        UI2StateDecl* x1_35
        
        if (*(GetLocalSettings() + 0xc) == 0)
            x1_35 = UIS_GFX_HIGH
        else
            x1_35 = UIS_GFX_LOW
        
        UI2SetState(zx.q(*x23_1), x1_35, 0xffffffff, 0)
        DomDeclareCardComponents(zx.q(*x23_1), x27_1, &var_b0, 0, zx.q(*(arg2 + 0x110)))
        DomDeclareType(zx.q(*x23_1), x27_1, 0)
        DomDeclareExpansion(zx.q(*x23_1), x27_1)
        int32_t x0_111 = CalcCardSize(arg2)
        uint64_t x28_3
        
        if (x26 == 5)
            x28_3 = 3
        else
            x28_3 = zx.q(x0_111)
        
        if (x28_3.d u> 3)
            goto label_b1593c
        
        uint64_t x0_113
        UI2StateDecl* x1_39
        
        switch (x28_3)
            case 0
            label_b149f4:
                
                if ((GetCurrentLanguage() & 0xfffffffc) != 0x10)
                label_b14a98:
                    
                    if (x28_3.d == 0)
                        int32_t x8_180 = *(GetLocalSettings() + 0x28)
                        
                        if (x8_180 != 0)
                            uint64_t x0_123
                            UI2StateDecl* x1_40
                            
                            if (x8_180 == 2)
                                x0_123 = zx.q(*x23_1)
                                x1_40 = UIS_TEXT_JUMBO
                            else
                                if (x8_180 != 1)
                                    goto label_b1593c
                                
                                x0_123 = zx.q(*x23_1)
                                x1_40 = UIS_TEXT_LARGE
                            
                            UI2SetState(x0_123, x1_40, 0xffffffff, 0)
                    
                    int32_t x8_181 = *(GetLocalSettings() + 0x28)
                    
                    if (x8_181 != 0)
                        if (x8_181 != 2 && x8_181 != 1)
                            goto label_b1593c
                        
                        UI2SetState(zx.q(*x23_1), &data_182c748, 0xffffffff, 0)
            case 1
                UI2SetState(zx.q(*x23_1), &data_182c6b8, 0xffffffff, 0)
                
                if ((zx.d(*(x27_1 + 0xc8)) & 0x20) == 0)
                    goto label_b149f4
                
                x0_113 = zx.q(*x23_1)
                x1_39 = &data_182c7a8
                goto label_b14a84
            case 2
                UI2SetState(zx.q(*x23_1), &data_182c6b8, 0xffffffff, 0)
                x0_113 = zx.q(*x23_1)
                x1_39 = &data_182c6d0
                x27_1 = var_c8
            label_b14a84:
                UI2SetState(x0_113, x1_39, 0xffffffff, 0)
                
                if ((GetCurrentLanguage() & 0xfffffffc) != 0x10)
                    goto label_b14a98
            case 3
                UI2SetState(zx.q(*x23_1), &data_182c6e8, 0xffffffff, 0)
                
                if ((var_e0_1 & 1) == 0)
                    UI2SetState(zx.q(*x23_1), &data_182c808, 0xffffffff, 0)
                
                if (zx.d(var_b0) != 0)
                    goto label_b149f4
                
                x0_113 = zx.q(*x23_1)
                x1_39 = &data_182c7f0
                goto label_b14a84
        
        if ((IsEstateInheritance(arg2) & 1) == 0)
            UI2SetState(zx.q(*x23_1), x27_1 + 0x90, 0xffffffff, 0)
            x24 = var_d8
            i_6 = zx.q(i_7)
            
            if (zx.d(*(gDomClient + 0x22134)) != 0)
                goto label_b156c0
            
            goto label_b14b9c
        
        x24 = var_d8
        i_6 = zx.q(i_7)
        
        if ((zx.d(data_182aa60) & 1) == 0)
            goto label_b1594c
        
    label_b14b58:
        UI2SetState(zx.q(*x23_1), &data_182dcc0, 0xffffffff, 0)
        
        if (zx.d(*(gDomClient + 0x22134)) == 0)
        label_b14b9c:
            void* x0_130 = ActiveGame()
            uint64_t i_5 = zx.q(*(x0_130 + 0x11b4))
            
            if (i_5.d s>= 1)
                void* x9_47 = x0_130 + 0x74
                uint64_t i_1
                
                do
                    int32_t x12_2 = *x9_47 - 0x3e9
                    
                    if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
                        goto label_b156c0
                    
                    i_1 = i_5
                    i_5 -= 1
                    x9_47 += 0x22c
                while (i_1 != 1)
            
            int32_t x8_185 = *(arg2 + 0x2c)
            
            if (x8_185 == 3)
                if ((IsPileInActiveSet(arg2, &var_c0) & 1) == 0)
                    int32_t x8_199
                    
                    if (*(arg2 + 0x1f78) != 0)
                        int32_t x8_197 = *(arg2 + 0x308)
                        
                        if (x8_197 != 1 || *(arg2 + 0x310) != 0x21)
                            int32_t x9_52 = *(arg2 + 0x478)
                            
                            if ((x9_52 != 1 || *(arg2 + 0x480) != 0x21)
                                    && (x8_197 != 1 || *(arg2 + 0x310) != 0x22))
                                if (x9_52 != 1)
                                    goto label_b151f0
                                
                                x8_199 = *(arg2 + 0x480)
                                goto label_b151e4
                    else if (*(arg2 + 0x3b0) != 1)
                    label_b151f0:
                        
                        if ((AnyPileSelectable(i_6.b & 1) & 1) != 0
                                && ((var_e4 & 1) != 0 || *(var_f0 + 0x1c) != 0))
                            UI2SetState(zx.q(*x23_1), &data_182b410, 0xffffffff, 0)
                    else if (*(arg2 + 0x3b8) != 0x21)
                        x8_199 = *(arg2 + 0x3b8)
                    label_b151e4:
                        
                        if (x8_199 != 0x22)
                            goto label_b151f0
                else if (x26 u<= 1)
                    *(arg2 + 0x21cc) = var_c0
                    UI2SetState(zx.q(*x23_1), &data_182b428, 0xffffffff, 0)
            else if (x8_185 == 0 && (IsCardInActiveSet(arg2, &var_68, false) & 1) != 0)
                int32_t x8_186 = var_68
                int32_t x21_5
                
                if (*(gDomClient + 0x207ac) != 1 || (x8_186 != 0x17 && x8_186 != 9))
                    x21_5 = 0
                else
                    int32_t x9_49 = *(gDomClient + 0x20758)
                    x21_5 = 0
                    
                    if (x9_49 != 0x36 && x9_49 != 0x133)
                        x21_5 = 1
                
                *(arg2 + 0x21cc) = x8_186
                UI2SetState(zx.q(*x23_1), &data_182b428, 0xffffffff, 0)
                uint64_t x8_202 = zx.q(*(gDomClient + 0x2056c))
                int32_t x22_3
                
                if (x8_202.d s< 1)
                    x22_3 = 0
                else
                    int32_t i_2 = *(arg2 + 0x98)
                    
                    if (*(gDomClient + 0x1f8ec) != i_2)
                        int64_t x13_2 = 0
                        int64_t x12_5
                        
                        do
                            x12_5 = x13_2
                            
                            if (x8_202 - 1 == x13_2)
                                break
                            
                            x13_2 = x12_5 + 1
                        while (*(gDomClient + (x12_5 << 2) + 0x1f8f0) != i_2)
                        
                        x22_3 = x12_5 + 1 u< x8_202 ? 1 : 0
                    else
                        x22_3 = 1
                
                if (x21_5 != 0)
                    UI2SetState(zx.q(*x23_1), &data_182b470, 0xffffffff, 0)
                
                if (x22_3 != 0)
                    UI2SetState(zx.q(*x23_1), &data_182b458, 0xffffffff, 0)
                    
                    if (*(arg2 + 0xc0) s>= 2)
                        int32_t x8_211 = *(gDomClient + 0x20758)
                        
                        if (x8_211 != 0x8d && x8_211 != 0x96)
                            int32_t x0_170 = CardWhat(gDomClient + 0x20728, zx.q(*(arg2 + 0x98)))
                            void* x8_212 = *(gDomClient + 0x205e0)
                            void* x11_15 = x8_212
                            int32_t i_3
                            
                            do
                                i_3 = *(x11_15 + 0x21d0)
                                x11_15 += 0x21d8
                            while (i_3 u< 0x10000)
                            void* x11_16 = x11_15 - 0x21d8
                            
                            while (*(x11_16 + 0x2c) != 3 || *(x11_16 + 0x58) != *(arg2 + 0xa0)
                                    || *(x11_16 + 0x5c) != *(arg2 + 0xa4) || *(x11_16 + 0x60) != 0)
                                void* x14_16 = x11_16 + 0x43a8
                                int32_t i_4
                                
                                do
                                    i_4 = *x14_16
                                    x11_16 += 0x21d8
                                    x14_16 += 0x21d8
                                while (i_4 u< 0x10000)
                            
                            int32_t fp_4 = *(x11_16 + 0x70)
                            int32_t x27_9
                            
                            if (fp_4 == 0)
                                x27_9 = 0
                            else
                                x27_9 = 0
                                
                                while (true)
                                    void* x21_8 = x8_212 + mulu.dp.d(fp_4 & 0xffff, 0x21d8) + 0x98
                                    fp_4 = *(x21_8 + 0x20a4)
                                    
                                    if ((CardIs(gDomClient + 0x20728, zx.q(*x21_8), zx.q(x0_170))
                                            & 1) != 0)
                                        uint64_t x8_216 = zx.q(*(gDomClient + 0x2056c))
                                        
                                        if (x8_216.d s>= 1)
                                            int32_t x9_60 = *x21_8
                                            int32_t x8_217
                                            
                                            if (*(gDomClient + 0x1f8ec) != x9_60)
                                                uint64_t x10_28 = 0
                                                int32_t x12_7
                                                
                                                do
                                                    if (x8_216 - 1 == x10_28)
                                                        x10_28 = x8_216
                                                        break
                                                    
                                                    x12_7 = *(gDomClient + (x10_28 << 2) + 0x1f8f0)
                                                    x10_28 += 1
                                                while (x12_7 != x9_60)
                                                x8_217 = x10_28 u< x8_216 ? 1 : 0
                                            else
                                                x8_217 = 1
                                            
                                            x27_9 += x8_217
                                    
                                    if (fp_4 == 0)
                                        break
                                    
                                    x8_212 = *(gDomClient + 0x205e0)
                            
                            UI2SetState(zx.q(*x23_1), &data_182d630, 0xffffffff, 0)
                            int32_t x28_6 = *x23_1
                            XStringFromInt(x27_9)
                            UI2SetText(zx.q(x28_6), &data_182d648, &var_c0, 0xffffffff)
                            XString::~XString()
                            x24 = var_d8
                            i_6 = zx.q(i_7)
                            x26 = var_cc
                            x27_1 = var_c8
            
            goto label_b156c0
        
    label_b156c0:
        uint64_t x1_50 = zx.q(*(arg2 + 0x21cc))
        
        if (x1_50.d u<= 0x1b && (1 << x1_50.d & 0xa845200) != 0
                && *(gDomClient + 0x1cffc) == *(arg2 + 0x21d0))
            x1_50 = zx.q(x1_50.d + 1)
            *(arg2 + 0x21cc) = x1_50.d
        
        SetHighlightState(zx.q(*x23_1), x1_50)
        UI2SetTransform(zx.q(*x23_1), &var_a8)
        UI2UpdateRoot(zx.q(*x23_1), false, *gSecondsPerUpdate)
        int32_t x8_220 = *(arg2 + 0x2c)
        
        if ((*(x27_1 + 0xc0) != 0xf3a || x8_220 == 1) && x8_220 != 1
                && (*(x27_1 + 0xc8) & 0x100) != 0)
            arg1 = HasDivineWindTriggered(gDomClient + 0x20728)
        
        if ((*(x27_1 + 0xc0) == 0xf3a && x8_220 != 1)
                || (x8_220 != 1 && (*(x27_1 + 0xc8) & 0x100) != 0 && (arg1.d & 1) != 0))
            DomDeclareCard(x24, arg2, i_6.b & 1, 5)
        else if (x26 - 2 u<= 2)
            DomDeclareCard(x24, arg2, i_6.b & 1, zx.q(var_f4))
