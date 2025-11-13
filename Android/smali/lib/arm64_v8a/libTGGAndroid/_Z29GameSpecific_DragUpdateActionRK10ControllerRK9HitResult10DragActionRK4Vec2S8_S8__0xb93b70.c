// 函数: _Z29GameSpecific_DragUpdateActionRK10ControllerRK9HitResult10DragActionRK4Vec2S8_S8_
// 地址: 0xb93b70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_50 = v8
float var_118

if (zx.d(*gKV) != 0)
    UI2GetTransform(GameMainUI())
    int32_t v2_1 = *(arg4 + 4)
    *(gKV + 1) = 1
    v8.d = fconvert.s(1f) / var_118 f* v2_1
    float v0_2
    v0_2, arg1 = expf((fabs(v8.d) + float.s(0xc47a0000)) / float.s(0x447a0000) * float.s(0x40935d8e)
        + float.s(0xc0135d8e))
    *(gKV + 0xc) = v8.d
    *(gKV + 0x14) = v0_2
else if (*(arg2 + 8) != 3)
    if (arg3 u> 4)
        pthread_kill(pthread_self(), 6)
        return CanDragPile(XNoReturn()) __tailcall
    
    switch (arg3)
        case 0
            int32_t x8_4 = *(arg2 + 0xc)
            uint64_t x25_1 = zx.q(x8_4.w)
            int64_t x24_1 = *(gDomClient + 0x205e0)
            DomGfx* x20_1 = x24_1 + x25_1 * 0x21d8
            int32_t x9_1 = *(x20_1 + 0x2c)
            int128_t var_108
            int128_t var_f8
            int128_t var_e8
            int128_t var_d8
            int128_t var_c8
            int128_t var_b8
            int128_t var_a8
            int128_t var_98
            int128_t var_70
            int128_t var_60
            int64_t x8_7
            
            if (x9_1 == 3)
                int32_t x0_8 = *(x24_1 + x25_1 * 0x21d8 + 0x70)
                
                if (x0_8 == 0 || *(gDomClient + 0x2074c) == 8)
                    x0_8 = FindOrCreatePileRep(x20_1)
                    x24_1 = *(gDomClient + 0x205e0)
                
                *(gDomClient + 0x1f8c0) = x0_8
                *(gDomClient + 0x1f8c4) = *arg5
                x8_7 = *arg6
                x20_1 = x24_1 + mulu.dp.d(x0_8 & 0xffff, 0x21d8)
            label_b93f34:
                *(gDomClient + 0x1f8cc) = x8_7
                UI2SetDragging(true)
                int32_t x0_11 = GetMouseoverStyle(x20_1)
                int32_t x10_9 = *(x20_1 + 0xa4)
                int32_t x8_17 = *(x20_1 + 0xb4)
                *(x20_1 + 0x2190) = *(x20_1 + 0xc8)
                int64_t x11_5 = 0xfffffffe | zx.q(x8_17) << 0x20
                int32_t x8_18
                
                if (x10_9 - 0x3ee u< 3)
                    x8_18 = x10_9 - 0x3ee
                else
                    x8_18 = 4
                
                *(x20_1 + 0x2130) = x0_11
                *(x20_1 + 0x21a0) = x8_18
                *(x20_1 + 0x2188) = x10_9
                *(x20_1 + 0x2198) = x11_5
                *(x20_1 + 0x21a4) = x11_5
                int128_t v0_5
                int128_t v1_4
                int128_t v2_4
                int128_t v3_3
                v0_5, v1_4, v2_4, v3_3 = CurrentTransformWithMouseover(x20_1)
                *(x20_1 + 0x308) = 0
                *(x20_1 + 0x32c) = var_f8
                *(x20_1 + 0x31c) = var_108
                *(x20_1 + 0x30c) = var_118.o
                *(x20_1 + 0x34c) = var_d8
                *(x20_1 + 0x35c) = var_c8
                *(x20_1 + 0x36c) = var_b8
                *(x20_1 + 0x33c) = var_e8
                *(x20_1 + 0x3ac) = var_60:0xc.d
                *(x20_1 + 0x38c) = var_98
                *(x20_1 + 0x39c) = var_70
                *(x20_1 + 0x37c) = var_a8
                *(x20_1 + 0x3b0) = 0
                *(x20_1 + 0x3c4) = var_108
                *(x20_1 + 0x3d4) = var_f8
                *(x20_1 + 0x3b4) = var_118.o
                *(x20_1 + 0x404) = var_c8
                *(x20_1 + 0x414) = var_b8
                *(x20_1 + 0x3e4) = var_e8
                *(x20_1 + 0x3f4) = var_d8
                *(x20_1 + 0x454) = var_60:0xc.d
                *(x20_1 + 0x434) = var_98
                *(x20_1 + 0x444) = var_70
                *(x20_1 + 0x424) = var_a8
                *(x20_1 + 0x1f78) = 0
            else
                if (x9_1 != 0)
                    pthread_kill(pthread_self(), 6)
                    return CanDragPile(XNoReturn()) __tailcall
                
                if (*(x24_1 + x25_1 * 0x21d8 + 0xc0) s>= 2)
                    int32_t i = *(x24_1 + x25_1 * 0x21d8 + 0x140)
                    
                    if (i != 0)
                        int32_t x10_2
                        
                        do
                            x10_2 = i & 0xffff
                            i = *(x24_1 + mulu.dp.d(x10_2, 0x21d8) + 0x140)
                        while (i != 0)
                        
                        x20_1 = x24_1 + mulu.dp.d(x10_2, 0x21d8)
                    
                    *(gDomClient + 0x1f8c0) = *(x20_1 + 0x21d0)
                    *(gDomClient + 0x1f8c4) = *arg5
                    x8_7 = *arg6
                    goto label_b93f34
                
                *(gDomClient + 0x1f8c0) = x8_4
                *(gDomClient + 0x1f8c4) = *arg5
                *(gDomClient + 0x1f8cc) = *arg6
                UI2SetDragging(true)
                int32_t x0_16 = GetMouseoverStyle(x20_1)
                void* x21_2 = x24_1 + x25_1 * 0x21d8
                int32_t x11_7 = *(x21_2 + 0xa4)
                int32_t x8_27 = *(x21_2 + 0xb4)
                *(x21_2 + 0x2190) = *(x21_2 + 0xc8)
                int64_t x9_21 = 0xfffffffe | zx.q(x8_27) << 0x20
                int32_t x8_28
                
                if (x11_7 - 0x3ee u< 3)
                    x8_28 = x11_7 - 0x3ee
                else
                    x8_28 = 4
                
                *(x21_2 + 0x2130) = x0_16
                *(x21_2 + 0x21a0) = x8_28
                *(x21_2 + 0x2188) = x11_7
                *(x21_2 + 0x2198) = x9_21
                *(x21_2 + 0x21a4) = x9_21
                int128_t v0_7
                int128_t v1_6
                int128_t v2_6
                int128_t v3_5
                v0_7, v1_6, v2_6, v3_5 = CurrentTransformWithMouseover(x20_1)
                *(x21_2 + 0x308) = 0
                *(x21_2 + 0x32c) = var_f8
                *(x21_2 + 0x31c) = var_108
                *(x21_2 + 0x30c) = var_118.o
                *(x21_2 + 0x34c) = var_d8
                *(x21_2 + 0x35c) = var_c8
                *(x21_2 + 0x36c) = var_b8
                *(x21_2 + 0x33c) = var_e8
                *(x21_2 + 0x3ac) = var_60:0xc.d
                *(x21_2 + 0x38c) = var_98
                *(x21_2 + 0x39c) = var_70
                *(x21_2 + 0x37c) = var_a8
                *(x21_2 + 0x3b0) = 0
                *(x21_2 + 0x3c4) = var_108
                *(x21_2 + 0x3d4) = var_f8
                *(x21_2 + 0x3b4) = var_118.o
                *(x21_2 + 0x404) = var_c8
                *(x21_2 + 0x414) = var_b8
                *(x21_2 + 0x3e4) = var_e8
                *(x21_2 + 0x3f4) = var_d8
                *(x21_2 + 0x454) = var_60:0xc.d
                *(x21_2 + 0x434) = var_98
                *(x21_2 + 0x444) = var_70
                *(x21_2 + 0x424) = var_a8
                *(x21_2 + 0x1f78) = 0
            int32_t x8_31 = *(gDomClient + 0x20758)
            
            if (x8_31 - 0x33 u< 2 || x8_31 == 0x101)
                *(gDomClient + 0x1f8e0) = *(x20_1 + 0x21d0)
            
            DomDragCardUpdate(x20_1, arg6)
        case 1
            uint64_t x9_6 = zx.q(*(gDomClient + 0x1f8c0))
            int64_t x11_2 = *(gDomClient + 0x205e0)
            *(gDomClient + 0x1f8c4) = *arg5
            *(gDomClient + 0x1f8cc) = *arg6
            return DomDragCardUpdate(x11_2 + x9_6 * 0x21d8, arg6) __tailcall
        case 2
            DomGfx* x20_2 = *(gDomClient + 0x205e0) + zx.q(*(gDomClient + 0x1f8c0)) * 0x21d8
            int32_t x8_10 = *(x20_2 + 0x2c)
            
            if (x8_10 == 3 || x8_10 == 1 || x8_10 == 0)
                DomDragCardUpdate(x20_2, arg6)
                return DomDragCardEnd(x20_2) __tailcall
            
            pthread_kill(pthread_self(), 6)
            return CanDragPile(XNoReturn()) __tailcall
        case 3
            arg1 = GameMainUI()
            
            if (*(arg2 + 8) == 1)
                uint64_t x8_13 = zx.q(*(arg2 + 0xc))
                int64_t x9_10 = *(gDomClient + 0x205e0)
                
                if (*(x9_10 + x8_13 * 0x21d8 + 0x2c) == 1)
                    return UI2ApplyScrollDelta(UI2GetHandle(arg1, "tbl_zoom_extra_expand"), arg4)
                        __tailcall
                
                int32_t x8_22 = *(x9_10 + x8_13 * 0x21d8 + 0xa4)
                int64_t x0_13
                
                if (x8_22 == 0x3e9)
                    x0_13 = UI2GetHandle(arg1, "tbl_global_play")
                    *(gDomClient + (-0x718 | 0x10000)) = 1
                    return UI2ApplyScrollDelta(x0_13, arg4) __tailcall
                
                if (x8_22 == 0x3ea)
                    x0_13 = UI2GetHandle(arg1, "tbl_player_hand")
                    *(gDomClient + (-0x717 | 0x10000)) = 1
                    return UI2ApplyScrollDelta(x0_13, arg4) __tailcall
            
            return UI2ApplyScrollDelta(UI2GetHandle(arg1, "tbl_player_reveal_slide"), arg4)
                __tailcall
        case 4
            UI2ApplyScrollDelta(UI2GetHandle(GameMainUI(), "tbl_abilityTriggers"), arg4)
            *(gDomClient + 0x1f8ea) = 1
else if (arg3 == 3)
    if (zx.d(*(gDomClient + 0x1f8d4)) != 0)
        return UI2ApplyScrollDelta(UI2GetHandle(GameDlgMangerGetUI(0x29, 5, true), "tblCards"), 
            arg4) __tailcall
    
    arg1 = GameDlgMangerGetUI(0x16, 5, true)
    
    if (arg1.d != 0)
        return UI2ApplyScrollDelta(UI2GetHandle(arg1, "tblCards"), arg4) __tailcall
