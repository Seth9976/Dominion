// 函数: _Z13UIStateUpdatejRK11UITransformRK4Vec2bfPiPK14UIStateElementPK5Vec2I
// 地址: 0x1056250
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t x9_1
uint64_t x10_1
UIState* x11_1

if (arg1 != 0)
    x10_1 = zx.q(arg1) & 0xffff
    x9_1 = *(gUISystem + 0x28)
    x11_1 = x9_1 + mulu.dp.d(x10_1.d, 0x458)
    *(x11_1 + 0x2c) = 1

int32_t* entry_x8

if (arg1 == 0 || zx.d(*(x11_1 + 0x10)) != 0)
    __builtin_memset(entry_x8, 0, 0x14)
    return 

int64_t* x20_1 = *(x9_1 + x10_1 * 0x458 + 8)
int64_t* x8_2 = *x20_1
v8 = arg5.q
int32_t x25_1 = arg4.d

if (x8_2 == 0)
    if (x20_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20_1, false, true)
    x8_2 = *x20_1

int64_t* x20_2 = *x8_2
void var_194c
int128_t v0
int128_t v1_1
int128_t v2_1
int128_t v3_1
v0, v1_1, v2_1, v3_1 = memset(&var_194c, 0, 0x189c)
int32_t var_b0_1 = 1
v0 = *(arg2 + 0x10)
int128_t var_19b0 = *arg2
int128_t var_19a0_1 = v0
v0 = *(arg2 + 0x40)
v1_1 = *(arg2 + 0x50)
v2_1 = *(arg2 + 0x20)
v3_1 = *(arg2 + 0x30)
int32_t var_1950_1 = 0xffffffff
int32_t i_1 = 0
int128_t var_1970_1 = v0
int128_t var_1960_1 = v1_1
int128_t var_1990_1 = v2_1
int128_t var_1980_1 = v3_1
int64_t x8_60
int32_t x9_20
int32_t x28_3

if (x20_2[1].d s<= 0)
    x8_60 = 0
    arg1 = 0
    x9_20 = 0
    x28_3 = 0
else
    int64_t* x27_2 = x20_2
    UIState* x21_2 = x11_1
    int64_t var_1ac0_1 = 0
    UIStateElement* var_1b20_1 = nullptr
    x28_3 = 0
    int32_t i = 0
    v13.d = fneg(v8.d)
    v14.d = 0f
    int32_t var_1b0c_1 = 0
    uint32_t i_3 = 0
    int64_t var_1ab8_1 = 0
    UIElement* var_1b28_1 = nullptr
    int128_t var_1a20
    
    do
        int64_t x20_3 = *x27_2
        int64_t i_2 = sx.q(i)
        UIElement* x24_2 = x20_3 + muls.dp.d(i, 0x178)
        UIStateElement* x0_5
        int128_t v0_1
        int128_t v1_3
        int128_t v2_2
        int128_t v3_2
        int128_t v4_1
        int128_t v5_1
        x0_5, v0_1, v1_3, v2_2, v3_2, v4_1, v5_1 = UIStateElementGet(x21_2, i, *(x24_2 + 8))
        int128_t var_1a80
        int128_t var_1a10
        int128_t var_1a00
        int128_t var_19f0
        int128_t var_19e0
        int128_t var_19d0
        
        if (*(x24_2 + 4) != 6)
            void* x8_17 = &var_19b0 + sx.q(var_b0_1) * 0x64
            v0_1 = *(x8_17 - 0x54)
            v2_2 = *(x8_17 - 0x24)
            v3_2 = *(x8_17 - 0x14)
            v4_1 = *(x8_17 - 0x44)
            var_1a20 = *(x8_17 - 0x64)
            var_1a10 = v0_1
            var_19e0 = v2_2
            var_19d0 = v3_2
            var_1a00 = v4_1
            var_19f0 = *(x8_17 - 0x34)
            v0_1.d = *(x0_5 + 0x18)
            void* __offset(UIStateElement, 0x14) x8_19
            
            if (not(v0_1.d f!= 0f))
                if (*(x0_5 + 0x10) s> *x0_5)
                    x8_19 = x0_5 + 0x14
                else
                    x8_19 = x20_3 + i_2 * 0x178 + 0x44
            
            if (v0_1.d f!= 0f || zx.d(*x8_19) == 0)
                uint64_t x8_22 = zx.q(*(x24_2 + 4) - 2)
                
                if (x8_22.d u<= 7)
                    switch (x8_22)
                        case 0
                            int32_t x8_23 = *(x0_5 + 0x148)
                            int32_t x9_10 = *x0_5
                            int64_t x8_26
                            int64_t x19_2
                            uint64_t x9_13
                            
                            if (x8_23 s<= x9_10)
                                uint64_t x10_8 = zx.q(*(x20_3 + i_2 * 0x178 + 0xac))
                                x19_2 = zx.q(*(x10_8 + 0xb0)) | (0xffffffff & x10_8) << 0x20
                                
                                if (x8_23 s<= x9_10)
                                    x9_13 = zx.q(*(x20_3 + i_2 * 0x178 + 0xac))
                                    x8_26 = zx.q(*(x9_13 + 0xb0)) | (0xffffffff & x9_13) << 0x20
                                else
                                    XString::operator char const*()
                                    x8_26 = *(x0_5 + 0x14c)
                            else
                                XString::operator char const*()
                                x19_2 = *(x0_5 + 0x154)
                                
                                if (*(x0_5 + 0x148) s> *x0_5)
                                    XString::operator char const*()
                                    x8_26 = *(x0_5 + 0x14c)
                                else
                                    x9_13 = zx.q(*(x20_3 + i_2 * 0x178 + 0xac))
                                    x8_26 = zx.q(*(x9_13 + 0xb0)) | (0xffffffff & x9_13) << 0x20
                            int32_t i_4 = i_1
                            uint64_t x21_4 = x19_2 u>> 0x20
                            int64_t var_1a88 = x8_26
                            int64_t v0_4
                            int64_t v1_4
                            int64_t v2_4
                            int64_t v3_4
                            v0_4, v1_4, v2_4, v3_4 = UIStateRect(arg1, i_4, &var_1a20)
                            
                            if (x21_4.d s>= 1 && x19_2.d s>= 1)
                                int64_t x27_3 = 0
                                
                                do
                                    int64_t j = 0
                                    
                                    do
                                        int64_t var_1a90 = x27_3 << 0x20 | j
                                        void* x0_30 = UIStateSubstate(x24_2, x0_5, &var_1a90)
                                        
                                        if (*(x0_30 + 0x30) != 0)
                                            var_1a90 = *(x0_30 + 0x34)
                                        
                                        int128_t v0_5
                                        int128_t v1_5
                                        v0_5, v1_5 = UIStateTableTransform(x24_2, x0_5, &var_1a20, 
                                            &var_1a90, &var_1a88, nullptr)
                                        v0_5.q = *(x0_5 + 0x180)
                                        v1_5.q = var_1a80.q
                                        var_1a80.q = vadd_f32(v0_5, v1_5)
                                        int64_t x8_37 = *arg3
                                        int64_t var_1a98 = x8_37
                                        
                                        if (zx.d(*(x20_3 + i_2 * 0x178 + 0xda)) != 0)
                                            double v0_6
                                            v0_6.d = float.s(x8_37.d)
                                            
                                            if (not(v0_4.d f> v0_6.d))
                                                v1_5.d = *(arg3 + 4)
                                            
                                            if (v0_4.d f> v0_6.d || v3_4.d f< v1_5.d
                                                    || v2_4.d f< v0_6.d || not(v1_4.d f<= v1_5.d))
                                                var_1a98 = -0x39e3bfff39e3c000
                                        
                                        UIStateUpdate(*(x0_30 + 0x450), &var_1a80, &var_1a98, 
                                            x25_1.b & 1, &i_1, x0_5, &var_1a90, v8.d)
                                        
                                        if (*(x0_30 + 0x2c) == 2)
                                            *(x11_1 + 0x2c) = 2
                                        
                                        int32_t var_1ab0
                                        
                                        if (var_1ab0 != 0)
                                            x28_3 = var_1ab0
                                            int64_t var_1aa8
                                            var_1ac0_1 = var_1aa8
                                            int32_t var_1aac
                                            var_1ab8_1.d = var_1aac
                                            int32_t var_1aa0
                                            var_1ab8_1:4.d = var_1aa0
                                        
                                        j += 1
                                    while ((x19_2 & 0xffffffff) != j)
                                    
                                    x27_3 += 1
                                while (x27_3 != x21_4)
                            
                            x27_2 = x20_2
                            x21_2 = x11_1
                        case 1
                            if (zx.d(*(x0_5 + 0x188)) != 0)
                                UITextBox::Update(x0_5.b - 0x70, nullptr)
                        case 3
                            int32_t x0_10 = UIRectContains(x24_2, &var_1a20, arg3)
                            
                            if ((x0_10 & 1) == 0 || zx.d(*(x0_5 + 0x2d)) != 0)
                                if (ButtonStateUpdate(x24_2, x0_5 + 0x2c, x0_5 + 0x34, x0_10.b & 1, 
                                        x25_1.b & 1, 0xffffffff) == 1)
                                    int64_t x8_30 = *(x9_1 + x10_1 * 0x458 + 0x40)
                                    
                                    if (x8_30 == 0)
                                        int64_t x8_50
                                        
                                        if (arg7 != 0)
                                            x8_50 = *(arg7 + 0x140)
                                        
                                        if (arg7 == 0 || x8_50 == 0)
                                            var_1ab8_1:4.d = i_1
                                            
                                            if (arg6 != 0)
                                                var_1ab8_1.d = *arg6
                                                var_1ac0_1 = *arg8
                                            
                                            x28_3 = 2
                                        else
                                            var_1a80.d = 0
                                            var_1ab8_1:4.d =
                                                x8_50(zx.q(arg1), arg8, zx.q(i_1), &var_1a80)
                                            x28_3 = 3
                                    else
                                        var_1a80.d = 0
                                        var_1ab8_1:4.d = x8_30(zx.q(arg1), zx.q(i_1), &var_1a80)
                                        x28_3 = 3
                            else
                                if ((var_1b0c_1 & 1) != 0)
                                    char x8_45 = *(var_1b20_1 + 0x35)
                                    char x9_18 = *(var_1b20_1 + 0x37)
                                    uint32_t x10_12 = zx.d(*(var_1b20_1 + 0x2d))
                                    *(var_1b20_1 + 0x35) = 0
                                    *(var_1b20_1 + 0x34) = x8_45
                                    *(var_1b20_1 + 0x37) = x25_1.b & 1
                                    *(var_1b20_1 + 0x36) = x9_18
                                    *(var_1b20_1 + 0x3c) = 0xffffffff
                                    
                                    if (x10_12 != 0 || zx.d(*(var_1b20_1 + 0x2f)) != 0
                                            || zx.d(*(var_1b20_1 + 0x2e)) != 0)
                                        *(var_1b20_1 + 0x35) = 0
                                    else if ((x25_1 & 1) == 0)
                                        *(var_1b20_1 + 0x38) = 0
                                
                                var_1b28_1 = x24_2
                                var_1b20_1 = x0_5
                                i_3 = i_1
                                var_1b0c_1 = 1
                        case 4
                            pthread_kill(pthread_self(), 6)
                            uint32_t x0_42
                            UITransform* x1_14
                            Vec2* x2_14
                            bool x3_5
                            float v0_8
                            x0_42, x1_14, x2_14, x3_5, v0_8 = XNoReturn()
                            return UIStateUpdate(x0_42, x1_14, x2_14, x3_5, v0_8) __tailcall
                        case 6
                            Flanim* x0_16 = FlanimTryToGet(zx.q(*(x0_5 + 0xc0)))
                            
                            if (x0_16 != 0)
                                FlanimUpdate(x0_16, v8.d)
                        case 7
                            ParticleSystem* x0_18 = ParticleTryToGet(zx.q(*(x0_5 + 0xc4)))
                            XAsset* x8_31 = *(x20_3 + i_2 * 0x178 + 0x60)
                            ParticleSystem* x20_4 = x0_18
                            
                            if (x8_31 != 0)
                                if (x20_4 == 0)
                                    ParticleSystem* x0_20 = ParticleCreate(x8_31, V20)
                                    x20_4 = x0_20
                                    *(x0_20 + 0x40) = 1
                                    *(x0_5 + 0xc4) = ParticleGetID(x0_20)
                                    x8_31 = *(x20_3 + i_2 * 0x178 + 0x60)
                                
                                if (*x20_4 != x8_31)
                                    ParticleDestroy(x20_4)
                                    ParticleSystem* x0_24 =
                                        ParticleCreate(*(x20_3 + i_2 * 0x178 + 0x60), V20)
                                    x20_4 = x0_24
                                    *(x0_24 + 0x40) = 1
                                    *(x0_5 + 0xc4) = ParticleGetID(x0_24)
                                
                                ParticleUpdate(x20_4)
                            else if (x20_4 != 0)
                                ParticleDestroy(x20_4)
                                *(x0_5 + 0xc4) = 0
                
                ParticleSystem* x0_34 = ParticleTryToGet(zx.q(*(x0_5 + 0xc4)))
                
                if (x0_34 != 0 && *(x24_2 + 4) != 9)
                    ParticleDestroy(x0_34)
                    *(x0_5 + 0xc4) = 0
            
            uint64_t x8_43 = zx.q(var_b0_1)
            
            if (x8_43.d s>= 1)
                int64_t j_1 = x8_43 + 1
                int32_t* x10_11 = &i_1 + x8_43 * 0x64
                
                do
                    int32_t x11_8 = *x10_11
                    
                    if ((x11_8 & 0x80000000) == 0)
                        if (x11_8 != 1)
                            *x10_11 = x11_8 - 1
                        else
                            x8_43 = zx.q(x8_43.d - 1)
                    
                    j_1 -= 1
                    x10_11 -= 0x64
                while (j_1 s> 1)
                
                var_b0_1 = x8_43.d
        else
            int64_t x19_1 = sx.q(var_b0_1)
            void* x8_11 = &var_19b0 + muls.dp.d(x19_1.d - 1, 0x64)
            v0_1 = *(x8_11 + 0x10)
            v2_2 = *(x8_11 + 0x40)
            v3_2 = *(x8_11 + 0x50)
            v5_1 = *(x8_11 + 0x20)
            v4_1 = *(x8_11 + 0x30)
            var_1a80 = *x8_11
            int128_t var_1a70_1 = v0_1
            int128_t var_1a40_1 = v2_2
            int128_t var_1a30_1 = v3_2
            int128_t var_1a60_1 = v5_1
            int128_t var_1a50_1 = v4_1
            int128_t v0_2
            int128_t v1_2
            int128_t v2_3
            int128_t v3_3
            int128_t v4_2
            int128_t v5_2
            v0_2, v1_2, v2_3, v3_3, v4_2, v5_2 = UIElementGroupTransform(x24_2, x0_5, &var_1a80)
            void* x8_12 = x20_3 + i_2 * 0x178
            int32_t x11_3 = *(x8_12 + 0x68)
            int128_t* x10_3 = &var_19b0 + x19_1 * 0x64
            var_b0_1 = x19_1.d + 1
            *x10_3 = var_1a20
            x10_3[1] = var_1a10
            x10_3[2] = var_1a00
            x10_3[3] = var_19f0
            x10_3[4] = var_19e0
            x10_3[5] = var_19d0
            x10_3[6].d = x11_3
            int32_t x10_4 = *x0_5
            v0_2.d = *(x0_5 + 0x1c)
            void* __offset(UIStateElement, 0x14) x9_5
            
            if (*(x0_5 + 0x10) s> x10_4)
                x9_5 = x0_5 + 0x14
            else
                x9_5 = x8_12 + 0x44
            
            v2_3.d = *(x0_5 + 0x74)
            
            if (zx.d(*x9_5) == 0)
                v1_2.d = v8.d
            else
                v1_2.d = v13.d
            
            v1_2.d = v0_2.d f+ v1_2.d
            *(x0_5 + 0x1c) = v1_2.d
            v0_2.d = *(x8_12 + 0x70)
            v0_2.d = float.s(v0_2.d)
            
            if (*(x0_5 + 0x70) == 0)
                v0_2.d = v0_2.d
            else
                v0_2.d = v2_3.d
            
            void* x8_14
            
            if (*(x0_5 + 0x15c) s> x10_4)
                x8_14 = x0_5 + 0x160
            else
                x8_14 = x8_12 + 0x6c
            
            int32_t x8_15 = *x8_14
            
            if (not(v1_2.d f>= 0f))
                v1_2.d = 0f
                *(x0_5 + 0x1c) = 0
            
            v2_3.d = float.s(x8_15)
            v3_3.d = float.s(0x447a0000)
            v1_2.d = v1_2.d f* v3_3.d
            v2_3.d = v0_2.d f+ v2_3.d
            v1_2.d = v1_2.d f- v0_2.d
            v0_2.d = v2_3.d f- v0_2.d
            v0_2.d = v1_2.d f/ v0_2.d
            v1_2.d = 0f
            
            if (not(v0_2.d f<= 0f))
                v1_2.d = fconvert.s(1f)
                
                if (not(v0_2.d f>= v1_2.d))
                    v1_2.d = v0_2.d f+ v14.d
            
            x27_2 = x20_2
            x21_2 = x11_1
            *(x0_5 + 0x18) = v1_2.d
        i = i_1 + 1
        i_1 = i
    while (i s< x27_2[1].d)
    
    if ((var_1b0c_1 & 1) == 0)
    label_1056ae8:
        arg1 = var_1ab8_1:4.d
        x9_20 = var_1ab8_1.d
        x8_60 = var_1ac0_1
    else if (ButtonStateUpdate(var_1b28_1, var_1b20_1 + 0x2c, var_1b20_1 + 0x34, true, x25_1.b & 1, 
            0xffffffff) != 1)
        if (zx.d(*(var_1b20_1 + 0x2d)) != 0)
            goto label_1056ae8
        
        x9_20 = var_1ab8_1.d
        
        if (zx.d(*(var_1b20_1 + 0x2f)) != 0 || zx.d(*(var_1b20_1 + 0x2e)) != 0)
            arg1 = var_1ab8_1:4.d
            x8_60 = var_1ac0_1
        else
            *(x11_1 + 0x2c) = 2
            
            if (arg6 == 0)
                x8_60 = var_1ac0_1
                x28_3 = 1
            else
                x9_20 = *arg6
                x28_3 = 1
                x8_60 = *arg8
            
            arg1 = i_3
    else
        int64_t x8_59 = *(x9_1 + x10_1 * 0x458 + 0x40)
        
        if (x8_59 == 0)
            int64_t x8_63
            
            if (arg7 != 0)
                x8_63 = *(arg7 + 0x140)
            
            if (arg7 != 0 && x8_63 != 0)
                var_1a20.d = 0
                arg1 = x8_63(zx.q(arg1), arg8, zx.q(i_3), &var_1a20)
                x28_3 = 3
                x9_20 = var_1ab8_1.d
                x8_60 = var_1ac0_1
            else if (arg6 == 0)
                x9_20 = var_1ab8_1.d
                x8_60 = var_1ac0_1
                x28_3 = 2
                arg1 = i_3
            else
                x9_20 = *arg6
                x8_60 = *arg8
                x28_3 = 2
                arg1 = i_3
        else
            var_1a20.d = 0
            arg1 = x8_59(zx.q(arg1), zx.q(i_3), &var_1a20)
            x28_3 = 3
            x9_20 = var_1ab8_1.d
            x8_60 = var_1ac0_1

*entry_x8 = x28_3
entry_x8[1] = x9_20
*(entry_x8 + 8) = x8_60
entry_x8[4] = arg1
