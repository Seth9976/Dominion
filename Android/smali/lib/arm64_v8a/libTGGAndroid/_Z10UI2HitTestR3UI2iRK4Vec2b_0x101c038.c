// 函数: _Z10UI2HitTestR3UI2iRK4Vec2b
// 地址: 0x101c038
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = data_24b4c40
int32_t x11 = data_24b4c50
void* __offset(vtable_for_UI2HitResult, 0x10) var_80 = _vtable_for_UI2HitResult + 0x10
int128_t var_78 = v0
int32_t var_68 = x11
v0.d = *(arg1 + 0x1710)
void** entry_x8

if (not(v0.d f!= 0f))
    int32_t x11_1 = data_24b4c50
    v0 = data_24b4c40
    *entry_x8 = _vtable_for_UI2HitResult + 0x10
    entry_x8[3].d = x11_1
    *(entry_x8 + 8) = v0
    return 

int128_t v1
v1.d = fconvert.s(1f)
int32_t x25_1 = arg4.d
UI2& x21_1 = arg1
void* __offset(UI2, 0x15f0) x28_1 = arg1 + 0x15f0

if (not(v0.d f== v1.d) && zx.d(*x28_1) == 0)
    int32_t x10_2 = data_24b4c50
    v0 = data_24b4c40
    *entry_x8 = _vtable_for_UI2HitResult + 0x10
    entry_x8[3].d = x10_2
    *(entry_x8 + 8) = v0
    return 

uint64_t x12_1 = zx.q(*(x21_1 + 0x1450))

if (x12_1.d u> 5)
label_101c910:
    pthread_kill(pthread_self(), 6)
    int64_t x0_52
    Vec2* x1_9
    x0_52, x1_9 = XNoReturn()
    return UI2HitTest(x0_52, x1_9) __tailcall

bool var_a4_1
float128 var_a0
int128_t v2
int128_t v4

switch (x12_1)
    case 0
        if ((x25_1 & 1) == 0)
            goto label_101c1e4
        
        var_a4_1 = true
    case 1, 3, 4, 5
        float128 v0_1
        float128 v1_1
        int128_t v2_1
        float128 v3_1
        v0_1, v1_1, v2_1, v3_1 = GameGetTimeSimulation()
        v1_1.d = *(x21_1 + 0x674)
        v2_1.d = *(x21_1 + 0x664)
        v3_1.d = *(x21_1 + 0x660)
        v1_1.d = v0_1.d f- v1_1.d
        v2_1.d = v2_1.d f+ v3_1.d
        
        if (v1_1.d f< v2_1.d || *(x21_1 + 0x654) s> 1)
            v2_1.d = *(x21_1 + 0x670)
            v0_1.d = v0_1.d f- v2_1.d
            v0_1, v1_1, v2_1, v3_1 =
                PropEval<RectF>(x21_1 + 0x558, x21_1 + 0x5dc, x21_1 + 0x660, v0_1.d, v1_1.d, v1_1.d)
            v0_1:4.d = v1_1.d
            v0_1:8.d = v2_1.d
            v0_1:0xc.d = v3_1.d
        else
            v0_1 = *(x21_1 + 0x5dc)
        
        v1_1.q = *V20
        v2_1.q = *(x28_1 + 0x16c)
        v3_1 = *(x21_1 + 0x15c8)
        float128 v2_3
        v2_3:8.q = vsub_f32(v2_1, v1_1).q
        v1_1:8.q = v1_1.q
        var_a0 = vaddq_f32(vaddq_f32(v1_1, vmulq_f32(v0_1, v2_3, 0)), v3_1)
        arg1, v0, v1, v2, v4 = ScreenPickRect(arg3, x21_1 + 0x16b0, &var_a0, nullptr)
        var_a4_1 = true
        
        if ((arg1.d & 1) != 0 && (x25_1 & 1) == 0)
            goto label_101c1e4
    case 2
    label_101c1e4:
        v1.q = *(x21_1 + 0x15c8)
        v2.d = *(x21_1 + 0x1468)
        int64_t v3 = *(x21_1 + 0x15d0)
        v0.q = *V20
        v4.q = *(x28_1 + 0x16c)
        v1.d = v1.d f* v2.d
        v1:4.d = v1:4.d f* v2.d
        v2.d = v3.d f* v2.d
        v2:4.d = v3:4.d f* v2.d
        int128_t v1_2 = vadd_f32(v0, v1)
        int128_t v2_4 = vadd_f32(v4, v2)
        int128_t v3_2 = vcle_f32(v1_2, v2_4)
        int32_t x8_5
        
        if (((vdup_laneq_s32(not.o(v3_2), 1) & not.o(v3_2)).d & 1) != 0)
            x8_5 = -1
        else
            x8_5 = 0
        
        int128_t v3_3
        v3_3.d = x8_5
        v3_3:4.d = x8_5
        v0 = vbsl_s8(v3_3, v1_2, v0)
        v1_2.q = v3_3.q
        uint64_t v1_3 = vbsl_s8(v1_2, v2_4, v4)
        var_a0.q = v0.q
        var_a0:8.q = v1_3
        int32_t x8_6 = *(x21_1 + 0x15ec)
        
        if (x8_6 u> 6)
            goto label_101c910
        
        if ((1 << x8_6 & 0x6e) != 0)
        label_101c26c:
            arg1, v0 = ScreenPickRect(arg3, x21_1 + 0x16b0, &var_a0, nullptr)
            
            if ((arg1.d & 1) != 0)
                var_78.d = *(x21_1 + 0x19a0)
                int32_t x8_8 = *(x21_1 + 0x144c)
                int32_t x8_9
                
                if (x8_8 == 0)
                    x8_9 = *(x21_1 + 0x1724)
                else
                    x8_9 = x8_8
                
                var_78:8.d = arg2
                var_78:0xc.d = x8_9
                uint64_t x8_10 = zx.q(*(x21_1 + 0x15ec))
                
                if (x8_10.d u> 6)
                    goto label_101c910
                
                int32_t x8_16
                
                switch (x8_10)
                    case 0
                        int32_t x8_13 = *(x21_1 + 0x167c)
                        
                        if (x8_13 == 5)
                            x8_16 = 1
                        else if (x8_13 == 3)
                            if (zx.d(*(x21_1 + 0x15b4)) == 0)
                                x8_16 = 3
                            else
                                x8_16 = 1
                        else if (x8_13 != 2 || *(x21_1 + 0x1528) == 0)
                            x8_16 = 3
                        else
                            x8_16 = 1
                    case 1, 3, 4
                        x8_16 = 3
                    case 2
                        x8_16 = 1
                    case 5
                        if (zx.d(*(gUI2 + 0x70)) == 0)
                            x8_16 = 3
                        else
                            x8_16 = 4
                    case 6
                        x8_16 = 2
                
                int32_t var_68_1 = x8_16
        else if (x8_6 == 0)
            int32_t x8_11 = *(x21_1 + 0x167c)
            
            if (x8_11 == 5)
                goto label_101c26c
            
            if (x8_11 == 3)
                if (zx.d(*(x21_1 + 0x15b4)) != 0)
                    goto label_101c26c
            else if (x8_11 == 2 && *(x21_1 + 0x1528) != 0)
                goto label_101c26c
        
        var_a4_1 = false

int32_t x23_2 = arg2 << 8
int128_t* var_b0_1 = &var_78
int32_t var_8c
int32_t var_88

if (*(x21_1 + 0x15ec) != 4)
    int32_t x28_2 = *(x21_1 + 0x1970)
    
    if (x28_2 != 0)
        int32_t fp_1 = 0
        uint64_t x26_1 = 0
        bool cond:2_1
        
        do
            UI2HitTest(*gUI2 + zx.q(*(x21_1 + (x26_1 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8, 
                fp_1 | x23_2, arg3, var_a4_1)
            int64_t x0_5 = (*var_a0.q)(&var_a0)
            int64_t x0_6 = (*data_24b4c38)(&data_24b4c38)
            
            if (x0_5 == x0_6)
                arg1, v0 = x0_5(&var_a0, &data_24b4c38)
            
            if (x0_5 != x0_6 || (arg1.d & 1) == 0)
                int64_t x0_9 = (*var_80)(&var_80)
                arg1, v0 = (*data_24b4c38)(&data_24b4c38)
                
                if (x0_9 == arg1)
                    arg1, v0 = x0_9(&var_80, &data_24b4c38)
                    
                    if ((arg1.d & 1) != 0 || var_8c u>= var_78:0xc.d)
                    label_101c3a0:
                        var_b0_1[1].d = var_88
                        *var_b0_1 = var_a0
                else if (var_8c u>= var_78:0xc.d)
                    goto label_101c3a0
            
            fp_1 += 1
            cond:2_1 = x28_2 == x26_1.d + 1
            x26_1 = zx.q(x26_1.d + 1)
        while (not(cond:2_1))

if (*(x21_1 + 0x1530) != 0 || *(x21_1 + 0x15f8) != 0)
    int32_t x8_36 = *(x21_1 + 0x1978)
    
    if (x8_36 != 0)
        int64_t x9_8 = *gUI2
        
        if (x9_8 != 0)
            UI2HitTest(x9_8 + zx.q(x8_36.w) * 0x19a8, x23_2, arg3, var_a4_1)
            int64_t x0_13 = (*var_a0.q)(&var_a0)
            int64_t x0_14 = (*data_24b4c38)(&data_24b4c38)
            
            if (x0_13 == x0_14)
                arg1, v0 = x0_13(&var_a0, &data_24b4c38)
            
            if (x0_13 != x0_14 || (arg1.d & 1) == 0)
                int64_t x0_17 = (*var_80)(&var_80)
                arg1, v0 = (*data_24b4c38)(&data_24b4c38)
                
                if (x0_17 == arg1)
                    arg1, v0 = x0_17(&var_80, &data_24b4c38)
                    
                    if ((arg1.d & 1) != 0 || var_8c u>= var_78:0xc.d)
                    label_101c564:
                        var_b0_1[1].d = var_88
                        *var_b0_1 = var_a0
                else if (var_8c u>= var_78:0xc.d)
                    goto label_101c564
            
            int32_t x8_48 = *(x21_1 + 0x197c)
            
            if (x8_48 != 0)
                int64_t x9_11 = *gUI2
                
                if (x9_11 != 0)
                    UI2HitTest(x9_11 + zx.q(x8_48.w) * 0x19a8, x23_2 | 1, arg3, var_a4_1)
                    int64_t x0_21 = (*var_a0.q)(&var_a0)
                    int64_t x0_22 = (*data_24b4c38)(&data_24b4c38)
                    
                    if (x0_21 == x0_22)
                        arg1, v0 = x0_21(&var_a0, &data_24b4c38)
                    
                    if (x0_21 != x0_22 || (arg1.d & 1) == 0)
                        int64_t x0_25 = (*var_80)(&var_80)
                        arg1, v0 = (*data_24b4c38)(&data_24b4c38)
                        
                        if (x0_25 == arg1)
                            arg1, v0 = x0_25(&var_80, &data_24b4c38)
                            
                            if ((arg1.d & 1) != 0 || var_8c u>= var_78:0xc.d)
                            label_101c638:
                                var_b0_1[1].d = var_88
                                *var_b0_1 = var_a0
                        else if (var_8c u>= var_78:0xc.d)
                            goto label_101c638
                    
                    int32_t x8_60 = *(x21_1 + 0x1980)
                    
                    if (x8_60 != 0)
                        int64_t x9_14 = *gUI2
                        
                        if (x9_14 != 0)
                            UI2HitTest(x9_14 + zx.q(x8_60.w) * 0x19a8, x23_2 | 2, arg3, var_a4_1)
                            int64_t x0_29 = (*var_a0.q)(&var_a0)
                            int64_t x0_30 = (*data_24b4c38)(&data_24b4c38)
                            
                            if (x0_29 == x0_30)
                                arg1, v0 = x0_29(&var_a0, &data_24b4c38)
                            
                            if (x0_29 != x0_30 || (arg1.d & 1) == 0)
                                int64_t x0_33 = (*var_80)(&var_80)
                                arg1, v0 = (*data_24b4c38)(&data_24b4c38)
                                
                                if (x0_33 == arg1)
                                    arg1, v0 = x0_33(&var_80, &data_24b4c38)
                                    
                                    if ((arg1.d & 1) != 0 || var_8c u>= var_78:0xc.d)
                                    label_101c70c:
                                        var_b0_1[1].d = var_88
                                        *var_b0_1 = var_a0
                                else if (var_8c u>= var_78:0xc.d)
                                    goto label_101c70c
                            
                            int32_t x8_72 = *(x21_1 + 0x1984)
                            
                            if (x8_72 != 0)
                                int64_t x9_17 = *gUI2
                                
                                if (x9_17 != 0)
                                    UI2HitTest(x9_17 + zx.q(x8_72.w) * 0x19a8, x23_2 | 3, arg3, 
                                        var_a4_1)
                                    int64_t x0_37 = (*var_a0.q)(&var_a0)
                                    int64_t x0_38 = (*data_24b4c38)(&data_24b4c38)
                                    
                                    if (x0_37 == x0_38)
                                        arg1, v0 = x0_37(&var_a0, &data_24b4c38)
                                    
                                    if (x0_37 != x0_38 || (arg1.d & 1) == 0)
                                        int64_t x0_41 = (*var_80)(&var_80)
                                        arg1, v0 = (*data_24b4c38)(&data_24b4c38)
                                        
                                        if (x0_41 == arg1)
                                            arg1, v0 = x0_41(&var_80, &data_24b4c38)
                                            
                                            if ((arg1.d & 1) != 0 || var_8c u>= var_78:0xc.d)
                                            label_101c7e0:
                                                var_b0_1[1].d = var_88
                                                *var_b0_1 = var_a0
                                        else if (var_8c u>= var_78:0xc.d)
                                            goto label_101c7e0
                                    
                                    int32_t x8_84 = *(x21_1 + 0x1988)
                                    
                                    if (x8_84 != 0)
                                        int64_t x9_20 = *gUI2
                                        
                                        if (x9_20 != 0)
                                            UI2HitTest(x9_20 + zx.q(x8_84.w) * 0x19a8, x23_2 | 4, 
                                                arg3, var_a4_1)
                                            int64_t x0_45 = (*var_a0.q)(&var_a0)
                                            int64_t x0_46 = (*data_24b4c38)(&data_24b4c38)
                                            
                                            if (x0_45 == x0_46)
                                                arg1, v0 = x0_45(&var_a0, &data_24b4c38)
                                            
                                            if (x0_45 != x0_46 || (arg1.d & 1) == 0)
                                                int64_t x0_49 = (*var_80)(&var_80)
                                                arg1, v0 = (*data_24b4c38)(&data_24b4c38)
                                                
                                                if (x0_49 == arg1)
                                                    arg1, v0 = x0_49(&var_80, &data_24b4c38)
                                                    
                                                    if ((arg1.d & 1) != 0
                                                        || var_8c u>= var_78:0xc.d)
                                                    label_101c8b4:
                                                        var_b0_1[1].d = var_88
                                                        *var_b0_1 = var_a0
                                                else if (var_8c u>= var_78:0xc.d)
                                                    goto label_101c8b4

entry_x8[3].d = var_b0_1[1].d
*(entry_x8 + 8) = *var_b0_1
*entry_x8 = _vtable_for_UI2HitResult + 0x10
