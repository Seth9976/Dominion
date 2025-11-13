// 函数: _Z24UIResultUpdateMouseStateRK10ClickStateji11UIClickOnly
// 地址: 0x105a0a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t fp = zx.q(arg2) & 0xffff
int64_t x28 = *(gUISystem + 0x28)
UIState* x22 = x28 + mulu.dp.d(fp.d, 0x458)
UIStateElement* x0_1 = UIStateElementGet(x22, arg3, &data_793a18)
int64_t* x23 = *(x22 + 8)
int64_t* x8 = *x23

if (x8 == 0)
    if (x23[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x23, false, true)
    x8 = *x23

int64_t x27 = sx.q(arg3)
int64_t x26 = **x8
UIElement* x23_1 = x26 + muls.dp.d(arg3, 0x178)
int32_t x8_3 = *(x23_1 + 4)
int32_t var_f0

if (x8_3 == 5)
    if (zx.d(*(x0_1 + 0x2d)) == 0 && zx.d(*(x0_1 + 0x2e)) == 0 && zx.d(*(x0_1 + 0x2f)) == 0)
        if (arg4 == 0)
            if ((**(arg1 + 0x214))(arg1 + 0x214) == InputHitResultNone::Comparator)
                int32_t* x0_26 =
                    UIStateElementGet(*(gUISystem + 0x28) + fp * 0x458, arg3, &data_793a18)
                x0_26[0x10] = *x0_26 + 1
                x0_26[0x11] = 1
                
                if (zx.d(*(arg1 + 0x328)) != 0)
                label_105a4e4:
                    XAsset* x0_27 = *(x26 + x27 * 0x178 + 0x158)
                    
                    if (x0_27 != 0)
                        SoundPlay(x0_27)
            else
                int64_t x0_16 = (**(arg1 + 0x114))(arg1 + 0x114)
                int64_t x0_18 = (**(arg1 + 0x214))(arg1 + 0x214)
                int32_t x0_20
                
                if (x0_16 == x0_18)
                    x0_20 = x0_16(arg1 + 0x114, arg1 + 0x214)
                
                if (x0_16 != x0_18 || (x0_20 & 1) == 0)
                    int32_t* x0_24 =
                        UIStateElementGet(*(gUISystem + 0x28) + fp * 0x458, arg3, &data_793a18)
                    x0_24[0x10] = *x0_24 + 1
                    x0_24[0x11] = 0
                    
                    if (zx.d(*(arg1 + 0x328)) != 0)
                        goto label_105a4e4
                else
                    uint32_t x23_3 = zx.d(*(arg1 + 8))
                    int32_t* x0_22 =
                        UIStateElementGet(*(gUISystem + 0x28) + fp * 0x458, arg3, &data_793a18)
                    x0_22[0x10] = *x0_22 + 1
                    
                    if (x23_3 == 0)
                        x0_22[0x11] = 1
                        
                        if (zx.d(*(arg1 + 0x328)) != 0)
                            goto label_105a4e4
                    else
                        x0_22[0x11] = 2
                        
                        if (zx.d(*(arg1 + 0x328)) != 0)
                            goto label_105a4e4
        
        if (zx.d(*(arg1 + 0x329)) != 0 && zx.d(*(x0_1 + 0x2c)) != 0)
            var_f0 = 0
        label_105a50c:
            void* x8_49 = *(x28 + fp * 0x458 + 0x18)
            
            if (x8_49 != 0)
                int64_t x8_50 = *(x8_49 + 0x140)
                
                if (x8_50 != 0)
                    x8_50(0, x28 + fp * 0x458 + 0x20, zx.q(arg3), &var_f0)
            
            int64_t x8_52 = *(x28 + fp * 0x458 + 0x40)
            
            if (x8_52 != 0)
                x8_52(zx.q(*(x22 + 0x450)), zx.q(arg3), &var_f0)
            
            XAsset* x0_29 = *(x26 + x27 * 0x178 + 0x150)
            
            if (x0_29 != 0)
                SoundPlay(x0_29)
            
            return 1
        
        if ((zx.d(*(arg1 + 0x32b)) != 0 || zx.d(*(arg1 + 0x32c)) != 0) && zx.d(*(x0_1 + 0x2c)) == 0)
            var_f0 = 0
            
            if (zx.d(*(arg1 + 0x32d)) != 0)
                var_f0 = 4
            else if (zx.d(*(arg1 + 0x32c)) != 0)
                var_f0 = 3
            
            goto label_105a50c
else if (x8_3 == 3)
    if (zx.d(*(arg1 + 0x329)) != 0)
        int32_t var_88 = 0
        void* x8_6 = *(x28 + fp * 0x458 + 0x18)
        
        if (x8_6 != 0)
            int64_t x8_7 = *(x8_6 + 0x140)
            
            if (x8_7 != 0)
                x8_7(0, x28 + fp * 0x458 + 0x20, zx.q(arg3), &var_88)
        
        int64_t x8_9 = *(x28 + fp * 0x458 + 0x40)
        
        if (x8_9 != 0)
            x8_9(zx.q(*(x22 + 0x450)), zx.q(arg3), &var_88)
        
        if (zx.d(*(x0_1 + 0x188)) == 0)
            void* x8_11 = x26 + x27 * 0x178
            *(x0_1 + 0x1d0) = *(x8_11 + 0xe8)
            *(x0_1 + 0x1e4) = *(x8_11 + 0xf0)
            int32_t x9_4 = *(x8_11 + 0xf4)
            *(x0_1 + 0x1f8) = -0x20294700878da0
            *(x0_1 + 0x1f4) = x9_4
            *(x0_1 + 0x200) = *(x8_11 + 0x114)
            *(x0_1 + 0x20c) = *(x8_11 + 0xfc)
            UIStateElementText(x0_1, x23_1)
            float128 v0_1
            float128 v1_1
            int128_t v2_1
            int128_t v3_1
            v0_1, v1_1, v2_1, v3_1 = XString::operator=(x0_1 + 0x190)
            
            if (zx.d(*(x0_1 + 0x188)) == 0)
                v0_1, v1_1, v2_1, v3_1 = UITextBox::SelectAll()
            
            *(x0_1 + 0x188) = 1
            void* x21_2 = x26 + x27 * 0x178
            var_f0.o = *(arg1 + 0x160)
            float128 var_e0_1 = *(arg1 + 0x170)
            v1_1 = *(arg1 + 0x1b0)
            v2_1 = *(arg1 + 0x180)
            v3_1 = *(arg1 + 0x190)
            float128 var_b0 = *(arg1 + 0x1a0)
            float128 var_a0_1 = v1_1
            int128_t var_d0 = v2_1
            int128_t var_c0 = v3_1
            v0_1.q = *(x21_2 + 0x148)
            v0_1:8.q = v0_1.q
            float128 var_100 = vaddq_f32(*(x21_2 + 0x10), v0_1)
            v1_1 = *(x21_2 + 0x30)
            float128 var_80 = *(x21_2 + 0x20)
            float128 var_70_1 = v1_1
            int128_t v0_3
            int128_t v1_2
            int128_t v2_2
            int128_t v3_2
            int128_t v6_1
            v0_3, v1_2, v2_2, v3_2, v6_1 =
                UIRectAligned(&var_100, &var_80, &var_b0:0xc, &var_d0:0xc, &var_c0:0xc)
            v0_3:4.d = v1_2.d
            v2_2:4.d = v3_2.d
            v1_2.q = var_e0_1.q
            v3_2.q = var_e0_1:8.q
            v6_1.d = fconvert.s(1f)
            v6_1:4.d = fconvert.s(1f)
            float var_e4
            float temp0_1 = vmax_f32(var_e4, 0f)
            int128_t v1_3 = vadd_f32(v1_2, v6_1)
            v6_1.q = var_f0.q
            v0_3.d = v0_3.d f* temp0_1
            v0_3:4.d = v0_3:4.d f* temp0_1
            v2_2.d = v2_2.d f* temp0_1
            v2_2:4.d = v2_2:4.d f* temp0_1
            int128_t v0_4 = vadd_f32(v6_1, v0_3)
            int128_t v2_3 = vadd_f32(v6_1, v2_2)
            int128_t v0_5 = vsub_f32(v0_4, v3_2)
            int128_t v2_4 = vsub_f32(v2_3, v3_2)
            int128_t v0_6 = vmul_f32(v1_3, v0_5, 0)
            int128_t v1_4 = vmul_f32(v1_3, v2_4, 0)
            int128_t v0_7 = vadd_f32(v3_2, v0_6)
            int128_t v1_5 = vadd_f32(v3_2, v1_4)
            *(x0_1 + 0x1a4) = v0_7.q
            *(x0_1 + 0x1ac) = vsub_f32(v1_5, v0_7)
            *(x0_1 + 0x1b4) = *V20
            double v0_8
            v0_8.d = *(x21_2 + 0xf8)
            v0_8.d = var_e4 f* v0_8.d
            *(x0_1 + 0x1e8) = v0_8.d
        
        *(x0_1 + 0x209) = 1
        UITextBox::Update(x0_1.b - 0x70, 1)
        return 0
    
    if (zx.d(*(arg1 + 8)) != 0)
        UITextBox::Update(x0_1.b - 0x70, 1)
return 0
