// 函数: _Z8PressEndRK10ControllerR9PressInfo
// 地址: 0x9abf30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_40 = v8
int32_t x8 = *arg2
int32_t x9_2
int32_t x21_3

if (x8 == 7)
label_9ac0b0:
    x9_2 = 0
    x21_3 = *arg2 == 7 ? 1 : 0
else
    if (x8 != 1)
        goto label_9abfec
    
    int128_t v0
    int128_t v1
    
    if ((zx.d(*(arg2 + 4)) & 6) == 0)
    label_9abfe8:
        x8 = *arg2
    label_9abfec:
        uint64_t x8_8 = zx.q(x8 - 2)
        
        if (x8_8.d u> 4)
            if ((zx.d(*(arg2 + 4)) & 2) == 0)
                goto label_9ac0b0
            
            int64_t x0_12 = (**(arg2 + 0x48))(arg2 + 0x48)
            
            if (x0_12 != (**(arg2 + 8))(arg2 + 8))
                goto label_9ac0b0
            
            if ((x0_12(arg2 + 0x48, arg2 + 8) & 1) == 0)
                goto label_9ac0b0
            
            goto label_9ac0a8
        
        double var_370
        HitResult* x1_4
        int64_t x2_2
        
        switch (x8_8)
            case 0
                v0.d = *(arg2 + 0x98)
                v1.d = *(arg2 + 0x90)
                v8.d = v0.d f- v1.d
                int32_t x0_8 = GameDlgManagerDialogActive(5)
                double* x0_10
                int64_t x2_1
                
                if (not(v8.d f<= 0f))
                    if ((x0_8 & 1) == 0)
                        x1_4 = &var_370
                        x2_2 = 3
                        int32_t var_348_3 = 0
                        var_370 = _vtable_for_HitResult + 0x10
                        void* __offset(vtable_for_UI2HitResult, 0x10) var_360_3 =
                            _vtable_for_UI2HitResult + 0x10
                        int64_t var_358_3 = 0
                        int32_t var_368_3 = 0
                        goto label_9ac1ec
                    
                    ControllerClickState(arg1, 3)
                    x0_10 = &var_370
                    x2_1 = 0x40
                    goto label_9ac158
                
                if ((x0_8 & 1) != 0)
                    ControllerClickState(arg1, 4)
                    x0_10 = &var_370
                    x2_1 = 0x80
                label_9ac158:
                    UI2UpdateMouseState(x0_10, 0, x2_1, 0)
                    goto label_9ac1f0
                
                int32_t var_348_4 = 0
                int32_t var_368_4 = 0
                var_370 = _vtable_for_HitResult + 0x10
                void* __offset(vtable_for_UI2HitResult, 0x10) var_360_4 =
                    _vtable_for_UI2HitResult + 0x10
                int64_t var_358_4 = 0
                x1_4 = &var_370
                x2_2 = 4
            label_9ac1ec:
                GameSpecific_GeneralAction(arg1, x1_4, x2_2)
                goto label_9ac1f0
            case 1
                v0.d = *(arg2 + 0x9c)
                v1.d = *(arg2 + 0x94)
                v0.d = v0.d f- v1.d
                
                if (v0.d f<= 0f)
                    int32_t var_348_2 = 0
                    var_370 = _vtable_for_HitResult + 0x10
                    void* __offset(vtable_for_UI2HitResult, 0x10) var_360_2 =
                        _vtable_for_UI2HitResult + 0x10
                    int64_t var_358_2 = 0
                    int32_t var_368_2 = 0
                    x1_4 = &var_370
                    x2_2 = 5
                else
                    int32_t var_348_1 = 0
                    var_370 = _vtable_for_HitResult + 0x10
                    void* __offset(vtable_for_UI2HitResult, 0x10) var_360_1 =
                        _vtable_for_UI2HitResult + 0x10
                    int64_t var_358_1 = 0
                    int32_t var_368_1 = 0
                    x1_4 = &var_370
                    x2_2 = 6
                
                goto label_9ac1ec
            case 2, 3
                x9_2 = 0
                x21_3 = 1 | (*arg2 == 7 ? 1 : 0)
            case 4
                v0.q = *(arg2 + 0x98)
                v1.q = *(arg2 + 0x90)
                var_370 = vsub_f32(v0, v1)
                GameSpecific_DragUpdateAction(arg1, arg2 + 8, 2, V20, &var_370, arg2 + 0x98)
            label_9ac1f0:
                x9_2 = 0
                x21_3 = 1 | (*arg2 == 7 ? 1 : 0)
    else
        int64_t x0_1 = (**(arg2 + 0x48))(arg2 + 0x48)
        int64_t x0_3
        x0_3, v0, v1 = (**(arg2 + 8))(arg2 + 8)
        
        if (x0_1 != x0_3)
            goto label_9abfe8
        
        int32_t x0_5
        x0_5, v0, v1 = x0_1(arg2 + 0x48, arg2 + 8)
        
        if ((x0_5 & 1) == 0)
            goto label_9abfe8
        
        if (*GetClient() - *(arg2 + 0x88) s< 0x1f5)
        label_9ac0a8:
            PressAction(arg1, arg2, 0)
            goto label_9ac1f0
        
        x21_3 = 1
        PressAction(arg1, arg2, 1)
        x9_2 = 7

*arg2 = x9_2
return zx.q(x21_3)
