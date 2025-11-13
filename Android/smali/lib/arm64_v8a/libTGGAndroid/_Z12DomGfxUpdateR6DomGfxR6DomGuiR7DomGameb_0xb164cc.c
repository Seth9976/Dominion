// 函数: _Z12DomGfxUpdateR6DomGfxR6DomGuiR7DomGameb
// 地址: 0xb164cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGfx& x19 = arg1

if (*(arg1 + 0x2c) == 3)
    uint32_t x23_1 = zx.d(*(x19 + 0x90))
    arg1 = PileIsStacked(zx.q(*(x19 + 0x58)), zx.q(*(x19 + 0x5c)), *(x19 + 0x6c))
    
    if (x23_1 != (arg1.d & 1) && *(x19 + 0x5c) != 0x454)
        *(x19 + 0x84) = 0
        arg1 = PileAdjustCards(x19, nullptr, true)

int32_t x25 = *(x19 + 0x1f78)
int32_t x8_3 = *(x19 + 0x520)
int64_t v8
v8.d = 0f

if (x25 == 0)
    goto label_b16704

switch (x8_3)
    case 0, 3, 6, 7
        v8.d = fconvert.s(1f) - *(x19 + 0x1f84)
    label_b16704:
        void* __offset(DomGui, 0x1cfd0) x27_1
        
        if (*(x19 + 0x2c) == 0 && *(x19 + 0x128) != 0 && not(*(x19 + 0x12c) >= float.s(0x3f666666)))
            x27_1 = arg2 + 0x1cfd0
            
            if (x25 != 0 && x25 == 0)
                arg1 = PileAddMoveComplete(zx.q(*(x19 + 0x21d0)))
        else
            arg1 = MoveComponent<DomLoc, DomMoveCallback>::MoveUpdate(*gSecondsPerUpdate)
            x27_1 = arg2 + 0x1cfd0
            
            if (x25 != 0 && (*(x19 + 0x2c) | *(x19 + 0x1f78)) == 0)
                arg1 = PileAddMoveComplete(zx.q(*(x19 + 0x21d0)))
        
        int64_t v9
        v9.d = *gSecondsPerUpdate * fconvert.s(5f)
        
        if (*(x19 + 0x21d0) == *(gDomClient + 0x1f8c0))
            arg1 = CalcDropTarget(arg1)
        
        float v1
        
        if (*(x19 + 0x21d0) != *(gDomClient + 0x1f8c0) || arg1.d != 5)
            v1 = *(x19 + 0x217c) f- v9.d
        else
            v1 = v9.d f+ *(x19 + 0x217c)
        
        float v2 = fconvert.s(1f)
        float v0 = 0f
        float temp0_1 = vmin_f32(v1, v2)
        
        v1 = v1 < 0f ? v0 : temp0_1
        
        *(x19 + 0x217c) = v1
        int32_t x8_8 = *(x19 + 0x21d0)
        float v3
        
        if (x8_8 == *(gDomClient + 0x1f8c0))
            v3 = v9.d
        else
            v3 = fneg(v9.d)
        
        v1 = *(x19 + 0x2180) + v3
        float temp0_2 = vmin_f32(v1, v2)
        
        v1 = v1 < 0f ? v0 : temp0_2
        
        *(x19 + 0x2180) = v1
        
        if (x8_8 != *(x27_1 + 0x24))
            int32_t x9_8 = *(x27_1 + 0x28c8)
            
            if (x8_8 != x9_8 && (x9_8 != 0 || x8_8 != *x27_1))
                v0 = *gSecondsPerUpdate
                v1 = *(x19 + 0x2178)
                v2 = fconvert.s(-7.5f)
            else
                v0 = *gSecondsPerUpdate
                v1 = *(x19 + 0x2178)
                v2 = fconvert.s(7.5f)
            
            v0 = v1 + v0 * v2
        else if (*(x19 + 0x1f78) != 0)
            v0 = *(x19 + 0x2178)
        
        int32_t x9_10 = *(x19 + 0x1f78)
        float temp0_3 = vmin_f32(v0, fconvert.s(1f))
        bool cond:3_1 = v0 < 0f
        v0 = 0f
        
        v1 = cond:3_1 ? v0 : temp0_3
        
        *(x19 + 0x2178) = v1
        
        if (x9_10 == 0)
            goto label_b167b8
        
        uint64_t x9_11 = zx.q(*(x19 + 0x520))
        
        if (x9_11.d u<= 0xb)
            switch (x9_11)
                case 0, 3, 6, 7
                    v0 = fconvert.s(1f) - *(x19 + 0x1f84)
                    
                    if (v8.d f== 0f && not(v0 != 0f))
                        goto label_b167c8
                    
                    goto label_b167f8
                case 1, 2, 8
                    goto label_b167b8
                case 9
                    void* x9_12 = *(x19 + 0x258)
                    v0 = *(x9_12 + 0x98) - *(x9_12 + 0x9c)
                    
                    if (v8.d f== 0f && not(v0 != 0f))
                        goto label_b167c8
                    
                    goto label_b167f8
                case 0xa
                    v0 = *(x19 + 0x1f84)
                label_b167b8:
                    int32_t x28_1
                    
                    if (not(v8.d f!= 0f) && not(v0 != 0f))
                    label_b167c8:
                        x28_1 = 0
                        
                        if (*(x19 + 0x2c) == 3 && *(x19 + 0x5c) - 0x3ee u<= 2)
                            goto label_b16838
                        
                        goto label_b16a68
                    
                label_b167f8:
                    v1 = fconvert.s(1f)
                    x28_1 = (v8.d f== v1 ? 1 : 0) & (v0 != v1 ? 1 : 0)
                    
                    if (*(x19 + 0x2c) == 3 && *(x19 + 0x5c) - 0x3ee u<= 2)
                    label_b16838:
                        uint64_t x10_2 = zx.q(*(gDomClient + 0x205e8))
                        void* i_4 = *(gDomClient + 0x205e0)
                        int32_t x11_3
                        int32_t x16_1
                        int32_t x17_1
                        
                        if (x10_2.d == 0)
                            x16_1 = 0
                            x11_3 = 0
                        label_b16a50:
                            x17_1 = 0
                        else
                            int32_t x12_3 = *(x19 + 0x58)
                            int64_t x13_1 = *(x19 + 0x60)
                            void* i_2 = i_4
                            int64_t x15_1 = i_4 + x10_2 * 0x21d8
                            void* i = i_4
                            
                            while (true)
                                if (zx.d(*(i + 0x21d2)) == 0)
                                    i += 0x21d8
                                    
                                    if (i u< x15_1)
                                        continue
                                else if (i != 0xffffffff)
                                    x11_3 = 0
                                    
                                    do
                                        if (*(i + 0x2c) == 0 && *(i + 0xa0) == x12_3
                                                && *(i + 0xa4) == 0x3ee && *(i + 0xc8) == x13_1)
                                            x11_3 += 1
                                        
                                        if (i == 0)
                                            i = i_4
                                        else
                                            i += 0x21d8
                                        
                                        if (i u>= x15_1)
                                            break
                                        
                                        while (zx.d(*(i + 0x21d2)) == 0)
                                            i += 0x21d8
                                            
                                            if (i u>= x15_1)
                                                goto label_b16910
                                    while (i != 0xffffffff)
                                    
                                    break
                                
                                x11_3 = 0
                                break
                            
                        label_b16910:
                            void* i_1 = i_2
                            
                            while (true)
                                if (zx.d(*(i_1 + 0x21d2)) == 0)
                                    i_1 += 0x21d8
                                    
                                    if (i_1 u< x15_1)
                                        continue
                                else if (i_1 != 0xffffffff)
                                    x16_1 = 0
                                    
                                    do
                                        if (*(i_1 + 0x2c) == 0 && *(i_1 + 0xa0) == x12_3
                                                && *(i_1 + 0xa4) == 0x3ef
                                                && *(i_1 + 0xc8) == x13_1)
                                            x16_1 += 1
                                        
                                        if (i_1 == 0)
                                            i_1 = i_4
                                        else
                                            i_1 += 0x21d8
                                        
                                        if (i_1 u>= x15_1)
                                            break
                                        
                                        while (zx.d(*(i_1 + 0x21d2)) == 0)
                                            i_1 += 0x21d8
                                            
                                            if (i_1 u>= x15_1)
                                                goto label_b169bc
                                    while (i_1 != 0xffffffff)
                                    
                                    break
                                
                                x16_1 = 0
                                break
                            
                        label_b169bc:
                            
                            while (zx.d(*(i_2 + 0x21d2)) == 0)
                                i_2 += 0x21d8
                                
                                if (i_2 u>= x15_1)
                                    goto label_b16a50_1
                            
                            if (i_2 == 0xffffffff)
                            label_b16a50_1:
                                x17_1 = 0
                            else
                                x17_1 = 0
                                
                                do
                                    if (*(i_2 + 0x2c) == 0 && *(i_2 + 0xa0) == x12_3
                                            && *(i_2 + 0xa4) == 0x3f0 && *(i_2 + 0xc8) == x13_1)
                                        x17_1 += 1
                                    
                                    if (i_2 == 0)
                                        i_2 = i_4
                                    else
                                        i_2 += 0x21d8
                                    
                                    if (i_2 u>= x15_1)
                                        break
                                    
                                    while (zx.d(*(i_2 + 0x21d2)) == 0)
                                        i_2 += 0x21d8
                                        
                                        if (i_2 u>= x15_1)
                                            goto label_b16a5c
                                while (i_2 != 0xffffffff)
                        
                    label_b16a5c:
                        
                        if ((x11_3 | x16_1 | x17_1) != 0)
                            goto label_b16a68
                        
                        int32_t x11_6 = *(x27_1 + 0x28c8)
                        uint64_t x12_4
                        
                        if (x11_6 != 0)
                            x12_4 = zx.q(x11_6.w)
                        
                        if (x11_6 != 0 && x12_4.d u< x10_2.d
                                && *(i_4 + x12_4 * 0x21d8 + 0x21d0) == x11_6
                                && *(i_4 + x12_4 * 0x21d8 + 0x2188) - 0x3ee u< 3)
                            return 
                        
                        if (*(gDomClient + 0x1f8e4) != x8_8)
                            goto label_b16dd0
                        
                        DomMinimizePile(x19)
                        int32_t x0_10 = GameMainUI()
                        int32_t x0_12
                        
                        if (data_182ab70 == "tbl_player_reveal" && data_182a7c0 == x0_10
                                && zx.d(data_182a640) != 0)
                            x0_12 = UI2Exists(zx.q(data_182a7c8))
                        
                        uint64_t x0_13
                        
                        if (data_182ab70 != "tbl_player_reveal" || data_182a7c0 != x0_10
                                || zx.d(data_182a640) == 0 || (x0_12 & 1) == 0)
                            x0_13 = UI2GetHandle(zx.q(x0_10), "tbl_player_reveal")
                            data_182a7c8 = x0_13.d
                            
                            if (x0_13.d != 0)
                                data_182ab70 = "tbl_player_reveal"
                                data_182a7c0 = x0_10
                                data_182a640 = 1
                        else
                            x0_13 = zx.q(data_182a7c8)
                        
                        UI2SetScrollPos(x0_13, V20)
                        goto label_b16dd0
                    
                label_b16a68:
                    arg1 = GfxIsVisible(x19)
                    int32_t x23_3 = arg1.d
                    
                    if ((arg1.d & 1) == 0 && *(x19 + 0x2148) != 0)
                        UI2Free(x19 + 0x2148)
                    
                    int32_t i_3 = *(x19 + 0x2c)
                    
                    if (((((x25 != 0 ? 1 : 0) & (x8_3 == 0xa ? 1 : 0)) | (x28_1 ^ 1)
                            | (i_3 != 0 ? 1 : 0)) & 1) != 0 || *(x19 + 0x520) == 0)
                        goto label_b16bf8
                    
                    int32_t x24_3 = *(x19 + 0xa0)
                    DomGfx& x9_23 = x19
                    uint64_t x1_4
                    
                    for (; i_3 == 3; i_3 = *(x9_23 + 0x2c))
                        x1_4 = zx.q(*(x9_23 + 0x30))
                        
                        if (x1_4.d == 0x70d)
                            goto label_b16bf0
                        
                        if (x1_4.d == 0x718)
                            goto label_b16bf0
                        
                        int32_t x8_11 = *(x9_23 + 0x70)
                        
                        if (x8_11 == 0)
                            goto label_b16bf0
                        
                        x9_23 = *(gDomClient + 0x205e0) + zx.q(x8_11.w) * 0x21d8
                    
                    if (i_3 == 5)
                        x1_4 = zx.q(*(x9_23 + 0x204))
                    label_b16bf0:
                        DomSoundCardMove(zx.q(x24_3), x1_4, 0, zx.q(*(x19 + 0xa4)))
                        i_3 = *(x19 + 0x2c)
                    label_b16bf8:
                        int32_t x8_16
                        
                        if (i_3 != 1)
                            if (i_3 != 2 || *(x19 + 0x1f78) != 0 || *(x19 + 0x3b8) == 0x25)
                                goto label_b16c38
                            
                            x8_16 = *(x19 + 0x24c)
                            
                            if (x8_16 != 0)
                                goto label_b16ce4
                            
                            goto label_b16dd0
                        
                        if ((*(x19 + 0x1f78) | *(x19 + 0x174)) == 0)
                            if (*(x19 + 0x3b8) - 0x21 u>= 2)
                                x8_16 = *(x19 + 0x178)
                                
                                if (x8_16 == 0)
                                    goto label_b16dd0
                                
                            label_b16ce4:
                                DomGfxUpdate(*(gDomClient + 0x205e0) + zx.q(x8_16.w) * 0x21d8, 
                                    arg2, arg3, arg4 & 1)
                            label_b16dd0:
                                UI2Free(x19 + 0x2148)
                                UI2Free(x19 + 0x214c)
                                UI2Free(x19 + 0x2150)
                                UI2Free(x19 + 0x2154)
                                arg1 = zx.q(*(x19 + 0x1f90))
                                
                                if (arg1.d != 0)
                                    SpineDestroy(arg1.d)
                                
                                int32_t x10_9 = *(gDomClient + 0x205f0)
                                *(gDomClient + 0x205f0) = zx.d(*(x19 + 0x21d0))
                                *(x19 + 0x21d0) = x10_9
                                *(gDomClient + 0x205f4) -= 1
                                return 
                            
                            if ((x23_3 & 1) == 0)
                                return 
                            
                        label_b16d30:
                            DomDeclareCard(arg3, x19, arg4 & 1, 0)
                            arg1 = ParticleTryToGet(zx.q(*(x19 + 0x2184)))
                            
                            if (arg1 == 0)
                                return 
                            
                        label_b16e84:
                            int128_t v0_2
                            float v1_2
                            float v2_1
                            float v3_1
                            v0_2, v1_2, v2_1, v3_1 =
                                UI2GetRect(zx.q(*(x19 + 0x2148)), "itemCard", 0)
                            float v4 = v0_2.d f+ v2_1
                            v0_2.d = v2_1 f- v0_2.d
                            v0_2.d = v0_2.d f/ float.s(0x43480000)
                            *(arg1 + 0x54) = v0_2.d
                            float v5 = fconvert.s(0.5f)
                            v0_2 = *QI
                            *(arg1 + 0x68) = v4 * v5
                            *(arg1 + 0x6c) = (v1_2 + v3_1) * v5
                            *(arg1 + 0x58) = v0_2
                            *(arg1 + 0x70) = 0
                            return ParticleUpdate(arg1) __tailcall
                        
                    label_b16c38:
                        
                        if ((x23_3 & 1) == 0)
                            if (i_3 == 0 && (
                                    PileIsStacked(zx.q(*(x19 + 0xa0)), zx.q(*(x19 + 0xa4)), 0).d
                                    & 1) != 0)
                                int128_t v0_1
                                int128_t v1_1
                                arg1, v0_1, v1_1 = CurrentTransformWithMouseover(x19)
                                int128_t var_80
                                *(x19 + 0x1c) = var_80
                                int128_t var_90
                                *(x19 + 0xc) = var_90
                            
                            return 
                        
                        switch (i_3)
                            case 0, 1
                                goto label_b16d30
                            case 2
                                DomDeclareIconPlaceholder(x19)
                                arg1 = ParticleTryToGet(zx.q(*(x19 + 0x2184)))
                                
                                if (arg1 != 0)
                                    goto label_b16e84
                                
                                return 
                            case 3
                                int32_t x8_21 = *(x19 + 0x5c)
                                
                                if (x8_21 u<= 0x48 && x8_21 != 3)
                                    goto label_b16d30
                                
                                DomDeclarePile(x19, nullptr)
                                arg1 = ParticleTryToGet(zx.q(*(x19 + 0x2184)))
                                
                                if (arg1 == 0)
                                    return 
                                
                                goto label_b16e84
                            case 4, 6
                                DomDeclareToken(x19)
                                arg1 = ParticleTryToGet(zx.q(*(x19 + 0x2184)))
                                
                                if (arg1 != 0)
                                    goto label_b16e84
                                
                                return 
                            case 5
                                DomDeclareAbility(arg3, x19)
                                arg1 = ParticleTryToGet(zx.q(*(x19 + 0x2184)))
                                
                                if (arg1 != 0)
                                    goto label_b16e84
                                
                                return 
                            case 7
                                DomDeclareArrow(x19)
                                arg1 = ParticleTryToGet(zx.q(*(x19 + 0x2184)))
                                
                                if (arg1 != 0)
                                    goto label_b16e84
                                
                                return 
                            case 8
                                DomDeclareHint(x19)
                                arg1 = ParticleTryToGet(zx.q(*(x19 + 0x2184)))
                                
                                if (arg1 != 0)
                                    goto label_b16e84
                                
                                return 
                    else
                        if (i_3 == 1)
                            x1_4 = zx.q(*(x9_23 + 0x170))
                            goto label_b16bf0
                        
                        if (i_3 == 0)
                            x1_4 = zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x9_23 + 0x98))))
                            goto label_b16bf0
                case 0xb
                    v0 = float.s(*(x19 + 0x548)) / float.s(0x447a0000)
                    
                    if (v8.d f== 0f && not(v0 != 0f))
                        goto label_b167c8
                    
                    goto label_b167f8
    case 1, 2, 8
        goto label_b16704
    case 9
        void* x8_4 = *(x19 + 0x258)
        x8_3 = 9
        v8.d = *(x8_4 + 0x98) - *(x8_4 + 0x9c)
        goto label_b16704
    case 0xa
        v8.d = *(x19 + 0x1f84)
        x8_3 = 0xa
        goto label_b16704
    case 0xb
        x8_3 = 0xb
        v8.d = float.s(*(x19 + 0x548)) / float.s(0x447a0000)
        goto label_b16704

pthread_kill(pthread_self(), 6)
int64_t x0_41
DomClient* x1_11
DomGame* x2_10
x0_41, x1_11, x2_10 = XNoReturn()
return DomGfxUpdate(x0_41, x1_11, x2_10) __tailcall
