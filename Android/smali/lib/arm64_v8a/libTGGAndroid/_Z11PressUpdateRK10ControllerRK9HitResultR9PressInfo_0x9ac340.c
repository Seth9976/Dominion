// 函数: _Z11PressUpdateRK10ControllerRK9HitResultR9PressInfo
// 地址: 0x9ac340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_8

if (*arg3 == 0)
    x0_8 = 0
else
    ControllerClickState(arg1, 0)
    char var_368
    
    if (zx.d(var_368) == 0)
        x0_8 = PressEnd(arg1, arg3)
    else if (*arg3 != 1)
    label_9ac480:
        int64_t var_378 = *(arg3 + 0x98)
        int128_t v0_1
        int128_t v1_1
        v0_1, v1_1 = ControllerCursorPosition(arg1, &var_378)
        *(arg3 + 0x50) = *(arg2 + 8)
        v0_1 = *(arg2 + 0x18)
        *(arg3 + 0x70) = *(arg2 + 0x28)
        *(arg3 + 0x60) = v0_1
        int32_t x8_20 = *arg3
        *(arg3 + 0x78) = *(arg2 + 0x30)
        
        if (x8_20 != 1)
            goto label_9ac56c
        
        v0_1.q = *(arg3 + 0x90)
        v1_1.q = var_378
        float v2_1 = fconvert.s(20f)
        double v1_2 = vabd_f32(v1_1, v0_1)
        v0_1.d = v1_2:4.d
        int32_t v3_1
        
        if (v1_2.d f> v0_1.d)
            v3_1 = v1_2.d
        else
            v3_1 = v0_1.d
        
        if (not(v3_1 f<= v2_1))
            if (v1_2.d f<= v2_1 || (zx.d(*(arg3 + 4)) & 0x10) == 0)
                v2_1 = fconvert.s(20f)
                
                if (not(v0_1.d f<= v2_1) && (zx.d(*(arg3 + 4)) & 0x20) != 0)
                    *arg3 = 5
                    PressDragUpdate(arg1, arg3, &var_378)
                    *(arg3 + 0x98) = var_378
                else if (v1_2.d f<= v2_1 || (zx.d(*(arg3 + 4)) & 0x40) == 0)
                    int32_t x8_24 = *(arg3 + 4)
                    
                    if ((x8_24 & 0x80) != 0)
                        v1_2.d = fconvert.s(20f)
                    
                    if ((x8_24 & 0x80) != 0 && not(v0_1.d f<= v1_2.d))
                        *arg3 = 3
                        *(arg3 + 0x98) = var_378
                    else if ((x8_24 & 8) == 0)
                        *(arg3 + 0x98) = var_378
                    else
                        *arg3 = 6
                        GameSpecific_DragUpdateAction(arg1, arg3 + 8, 0, V20, V20, &var_378)
                        x8_20 = *arg3
                    label_9ac56c:
                        
                        if (x8_20 - 4 u>= 3)
                            *(arg3 + 0x98) = var_378
                        else
                            PressDragUpdate(arg1, arg3, &var_378)
                            *(arg3 + 0x98) = var_378
                else
                    *arg3 = 2
                    *(arg3 + 0x98) = var_378
            else
                *arg3 = 4
                PressDragUpdate(arg1, arg3, &var_378)
                *(arg3 + 0x98) = var_378
        
        x0_8 = 0
    else if ((zx.d(*(arg3 + 4)) & 6) == 0)
    label_9ac404:
        
        if (*arg3 != 1)
            goto label_9ac480
        
        int64_t x0_10 = (**(arg3 + 0x48))(arg3 + 0x48)
        int64_t x0_12 = (**(arg3 + 8))(arg3 + 8)
        int32_t x0_14
        
        if (x0_10 == x0_12)
            x0_14 = x0_10(arg3 + 0x48, arg3 + 8)
        
        if (x0_10 == x0_12 && (x0_14 & 1) != 0)
            goto label_9ac480
        
        if (*GetClient() - *(arg3 + 0x88) s< 0x1f5)
            goto label_9ac480
        
        x0_8 = 0
        *arg3 = 0
    else
        int64_t x0_1 = (**(arg3 + 0x48))(arg3 + 0x48)
        
        if (x0_1 != (**(arg3 + 8))(arg3 + 8))
            goto label_9ac404
        
        if ((x0_1(arg3 + 0x48, arg3 + 8) & 1) == 0)
            goto label_9ac404
        
        if (*GetClient() - *(arg3 + 0x88) s< 0x1f5)
            goto label_9ac404
        
        x0_8 = PressEnd(arg1, arg3)

return zx.q(x0_8) & 1
