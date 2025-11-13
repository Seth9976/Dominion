// 函数: _Z15WrapperDoEscapeR11WrapperDataPK15FancyStringDatafS3_
// 地址: 0xf6d530
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_70 = v12
int64_t v11
int64_t var_60 = v11
int64_t v10
int64_t var_58 = v10
int64_t v9
int64_t var_50 = v9
float v8 = arg3

if (*(arg2 + 0x10) == 0 && *(arg2 + 0x60) == 0)
    arg3 = *(arg2 + 0x2c)
    
    if (not(arg3 == 0f))
        *(arg1 + 0x2c) = arg3
    
    if (zx.d(*(arg1 + 0x20)) != 0)
        if (zx.d(*(arg2 + 0x23)) != 0 && zx.d(*(arg1 + 0xcc)) == 0)
            *(arg1 + 0x54) = *(arg2 + 0x20)
        
        if (zx.d(*(arg2 + 0x27)) != 0 && zx.d(*(arg1 + 0xcc)) == 0)
            *(arg1 + 0x58) = *(arg2 + 0x24)

int32_t x8_2 = *(arg2 + 0x70)

if (x8_2 != 0)
    *(arg1 + 0xc0) = x8_2

int32_t x8_3 = *(arg2 + 0x1c)

if (x8_3 != 0)
    *(arg1 + 0x68) = x8_3

int64_t* x8_4 = *(arg2 + 8)
int64_t* x8_6
void* __offset(WrapperData, 0x40) x8_7

if (x8_4 == 0)
    x8_6 = *(arg2 + 0x78)
    
    if (x8_6 != 0)
    label_f6d5b0:
        *(arg1 + 0x40) = *x8_6
        x8_7 = arg1 + 0x38
        *(arg1 + 0x48) = *(arg2 + 0x80)
        *(arg1 + 0x4c) = *(arg2 + 0x84)
        goto label_f6d5c8
else
    *(arg1 + 0x38) = *x8_4
    x8_6 = *(arg2 + 0x78)
    
    if (x8_6 != 0)
        goto label_f6d5b0
    
    x8_7 = arg1 + 0x40
label_f6d5c8:
    *x8_7 = 0
    *(arg1 + 0x50) = *(arg2 + 0x18)
    *(arg1 + 0x14) = *(arg2 + 0x30)
    *(arg1 + 0xb8) = *(arg2 + 0x38)
    *(arg1 + 0xbc) = *(arg2 + 0x3c)

if (zx.d(*(arg1 + 0x20)) != 0)
    int64_t var_110
    int32_t var_100
    int32_t var_f0
    float var_b0
    int32_t var_64
    
    if (*(arg2 + 0x10) != 0)
        XAsset* x8_12 = *(arg1 + 0x38)
        XAsset* x0 = *(arg1 + 0x40)
        int64_t* x8_14
        int64_t* x21_1
        
        if (x8_12 != 0)
            if (x0 != 0)
                goto label_f6d638
            
            v9.d = float.s(*(FontGetDef(x8_12) + 4))
            x21_1 = **(arg2 + 0x10)
            x8_14 = *x21_1
            
            if (x8_14 == 0)
                goto label_f6d654
        else if (x0 == 0)
            v9.d = 0f
            x21_1 = **(arg2 + 0x10)
            x8_14 = *x21_1
            
            if (x8_14 == 0)
            label_f6d654:
                
                if (x21_1[1].d == 0x15)
                    XString::GetString()
                    XTrace("Unpreloaded sound %s")
                
                AssetCatalogLoadAsset(x21_1, false, true)
                x8_14 = *x21_1
        else
        label_f6d638:
            v9 = TTFontAscent(x0, *(arg1 + 0x48)).q
            x21_1 = **(arg2 + 0x10)
            x8_14 = *x21_1
            
            if (x8_14 == 0)
                goto label_f6d654
        uint16_t x10_2 = zx.w(*(arg1 + 0x65))
        int64_t* x12_2 = **x8_14
        uint32_t x13_5 = zx.d(0x80 + zx.w(*(arg1 + 0x60)) * zx.w(*(arg2 + 0x20))) u/ 0xff
        uint16_t x11_1 = zx.w(*(arg1 + 0x64))
        uint16_t x15_2 = zx.w(*(arg1 + 0x66))
        uint16_t x17_2 = zx.w(*(arg1 + 0x67))
        uint32_t x16_5 = zx.d(0x80 + zx.w(*(arg1 + 0x62)) * zx.w(*(arg2 + 0x22))) u/ 0xff
        arg3 = (*x12_2).d
        float v2 = x12_2[1].d
        float v1 = *(x12_2 + 0xc)
        uint32_t x14_9 = zx.d(0x80 + (((x13_5 | (
            mulu.dp.d(zx.d(0x80 + zx.w(*(arg1 + 0x61)) * zx.w(*(arg2 + 0x21))), 0x80808081)
            u>> 0x20).d << 1) u>> 8).w & 0xff) * x10_2)
        int32_t x13_11 = (0xfe00ffff & (((mulu.dp.d(x14_9, 0x80808081) u>> 0x20).d << 1 & 0xff00)
            | (zx.d(0x80 + x13_5.w * x11_1) u/ 0xff)))
            | (0x1ff & (zx.d(0x80 + x16_5.w * x15_2) u/ 0xff)) << 0x10
        var_64 = x13_11 | (zx.d(0x80 + x17_2 * ((x16_5 << 0x10
            | (zx.d(0x80 + zx.w(*(arg1 + 0x63)) * zx.w(*(arg2 + 0x23))) u/ 0xff) << 0x18) u>> 0x18).w)
            u/ 0xff) << 0x18
        uint32_t x12_15 = zx.d(0x80 + zx.w(*(arg1 + 0x5c)) * zx.w(*(arg2 + 0x28))) u/ 0xff
        uint32_t x16_14 = zx.d(0x80 + zx.w(*(arg1 + 0x5e)) * zx.w(*(arg2 + 0x2a))) u/ 0xff
        uint32_t x10_4 = zx.d(0x80 + (((x12_15 | (
            mulu.dp.d(zx.d(0x80 + zx.w(*(arg1 + 0x5d)) * zx.w(*(arg2 + 0x29))), 0x80808081)
            u>> 0x20).d << 1) u>> 8).w & 0xff) * x10_2)
        uint32_t x8_18 = zx.d(0x80 + ((x16_14 << 0x10
            | (zx.d(0x80 + zx.w(*(arg1 + 0x5f)) * zx.w(*(arg2 + 0x2b))) u/ 0xff) << 0x18) u>> 0x18).w
            * x17_2)
        int32_t x9_4 = (0xfe00ffff & (((mulu.dp.d(x10_4, 0x80808081) u>> 0x20).d << 1 & 0xff00)
            | (zx.d(0x80 + x12_15.w * x11_1) u/ 0xff)))
            | (0x1ff & (zx.d(0x80 + x16_14.w * x15_2) u/ 0xff)) << 0x10
        double v0 = vcvt_f32_u32(arg3)
        v1 = v1 * v2
        v10.d = v0.d f* v1
        v10:4.d = v0:4.d f* v1
        int32_t var_68 = x9_4 | (x8_18 u/ 0xff) << 0x18
        int64_t x0_15
        int64_t v5_1
        x0_15, v5_1 = SpriteColorSet(&var_64, &var_68)
        var_100.q = x0_15
        float v0_1 = *(arg1 + 0x2c)
        float v1_1 = *(arg2 + 0x2c)
        v5_1.d = *(arg2 + 0x44)
        var_f0.q = 0x3f800000
        float v6_1 = v9.d f* v0_1
        
        if (v1_1 != 0f)
            v0_1 = v0_1 * v1_1
        
        float v4_1 = float.s(v5_1.d)
        v5_1.d = v10.d f* v0_1
        v5_1:4.d = v10:4.d f* v0_1
        int32_t var_c8_1 = 0x3f800000
        float v2_1 = *(arg1 + 0x24) + *(arg1 + 0x10) + v0_1 * v4_1
        v0_1 = v6_1 + *(arg1 + 0x28) - v5_1:4.d + v0_1 * float.s(*(arg2 + 0x18))
        int32_t var_b4_1 = 0x3f800000
        int64_t var_e0_1 = 0x3f80000000000000
        int32_t var_e8_1 = 0
        int32_t var_d8_1 = 0
        int64_t var_d0_1 = 0
        int64_t var_bc_1 = 0
        int64_t var_c4_1 = 0
        var_110 = v5_1
        float var_e4_1 = v2_1
        float var_d4_1 = v0_1
        Mat4Multiply(arg1 + 0x78, &var_f0)
        char var_130_1 = 0
        int64_t (* const var_128_1)() = RECT1
        int64_t var_120_1 = 0
        int32_t* var_140_1 = &var_b0
        int32_t* var_138_1 = &var_100
        DrawImageNew(**(arg2 + 0x10), nullptr, V21, &var_110, 0, RECT0, 0, &data_23eef68)
    
    if (*(arg2 + 0x60) != 0)
        XAsset* x8_24 = *(arg1 + 0x38)
        XAsset* x0_18 = *(arg1 + 0x40)
        
        if (x8_24 == 0)
            if (x0_18 != 0)
                TTFontAscent(x0_18, *(arg1 + 0x48))
        else if (x0_18 != 0)
            TTFontAscent(x0_18, *(arg1 + 0x48))
        else
            FontGetDef(x8_24)
        
        int32_t v0_2
        int32_t v1_2
        int32_t v2_2
        int32_t v3_2
        v0_2, v1_2, v2_2, v3_2 = RectScreen()
        var_f0 = v0_2
        int32_t var_ec_1 = v1_2
        int32_t var_e8_2 = v2_2
        int32_t var_e4_2 = v3_2
        int32_t v0_3
        int32_t v1_3
        int32_t v2_3
        int32_t v3_3
        v0_3, v1_3, v2_3, v3_3 = RectScreenSafe()
        var_100 = v0_3
        int32_t var_fc_1 = v1_3
        int32_t var_f8_1 = v2_3
        int32_t var_f4_1 = v3_3
        uint32_t x10_11 = zx.d(0x80 + zx.w(*(arg1 + 0x60)) * zx.w(*(arg2 + 0x20))) u/ 0xff
        uint32_t x14_25 = zx.d(0x80 + zx.w(*(arg1 + 0x62)) * zx.w(*(arg2 + 0x22))) u/ 0xff
        int16_t x12_27 = 0x80 + (((x10_11 | (
            mulu.dp.d(zx.d(0x80 + zx.w(*(arg1 + 0x61)) * zx.w(*(arg2 + 0x21))), 0x80808081)
            u>> 0x20).d << 1) u>> 8).w & 0xff) * zx.w(*(arg1 + 0x65))
        int16_t x9_5 = 0x80 + ((
            (zx.d(0x80 + zx.w(*(arg1 + 0x63)) * zx.w(*(arg2 + 0x23))) u/ 0xff) << 0x18
            | x14_25 << 0x10) u>> 0x18).w * zx.w(*(arg1 + 0x67))
        uint32_t x22_1 = zx.d(0x80 + x10_11.w * zx.w(*(arg1 + 0x64))) u/ 0xff
        uint32_t x21_2 = zx.d(0x80 + x14_25.w * zx.w(*(arg1 + 0x66))) u/ 0xff
        UI2Begin("font", &var_64, **(arg2 + 0x60), &var_f0, &var_100, 0, 0, true)
        UI2StateDecl* x1_6 = *(arg2 + 0x68)
        
        if (x1_6 != 0)
            UI2SetState(zx.q(var_64), x1_6, 0xffffffff, 1)
        
        float v0_4 = *(arg1 + 0x2c)
        float v1_4 = *(arg2 + 0x2c)
        
        if (v1_4 != 0f)
            v0_4 = v0_4 * v1_4
        
        if (*(arg2 + 0x1c) == 0)
            v9.d = v0_4
        else
            v9.d = fconvert.s(1f)
        
        float v0_5
        float v2_5
        v0_5, v2_5 = UI2SubBoundary(**(arg2 + 0x60))
        float v5_2 = *(arg1 + 0x2c)
        float v4_2 = v5_2 * float.s(*(arg2 + 0x44))
        v0_5 = *(arg1 + 0x1c) - v9.d f* (v2_5 - v0_5)
        v5_2 = *(arg1 + 0x28) + v5_2 * float.s(*(arg2 + 0x18))
        v2_5 = 0f
        
        if (*(arg2 + 0x1c) == 5)
            v0_5 = v0_5 * fconvert.s(0.5f)
        else
            v0_5 = *(arg1 + 0x10)
        
        v0_5 = v4_2 + *(arg1 + 0x24) + v0_5
        v10.d =
            *(arg1 + 0x84) + *(arg1 + 0x80) * v2_5 + *(arg1 + 0x78) * v0_5 + *(arg1 + 0x7c) * v5_2
        v11.d =
            *(arg1 + 0x94) + v0_5 * *(arg1 + 0x88) + v5_2 * *(arg1 + 0x8c) + *(arg1 + 0x90) * v2_5
        v12.d =
            *(arg1 + 0xa4) + v0_5 * *(arg1 + 0x98) + v5_2 * *(arg1 + 0x9c) + *(arg1 + 0xa0) * v2_5
        TransformFromMat4(arg1 + 0x78)
        uint64_t x0_24 = zx.q(var_64)
        int32_t var_98_1 = v11.d
        int32_t var_94_1 = v12.d
        int32_t var_9c_1 = v10.d
        var_b0 = v9.d f* var_b0
        int128_t v0_7
        float128 v1_6
        v0_7, v1_6 = UI2SetTransform(x0_24, &var_b0)
        v0_7.d = float.s(x22_1)
        v0_7:2.w =
            (((mulu.dp.d(zx.d(x12_27), 0x80808081) u>> 0x20).d << 1 & 0x1ff00) | x22_1) u>> 8 & 0xff
        v0_7:4.w = x21_2
        v0_7:6.w = (((mulu.dp.d(zx.d(x9_5), 0x80808081) u>> 0xf & 0x1ff000000)
            | (zx.q(x21_2 << 0x10) & 0x1000000)) u>> 0x18).d
        uint64_t x0_25 = zx.q(var_64)
        uint128_t v0_8
        v0_8.d = zx.d((v0_7 & true).w)
        v0_8:4.d = zx.d(v0_8:2.w)
        v0_8:8.d = zx.d(v0_8:4.w)
        v0_8:0xc.d = zx.d(v0_8:6.w)
        v1_6.d = 0x437f0000
        v1_6:4.d = 0x437f0000
        v1_6:8.d = 0x437f0000
        v1_6:0xc.d = 0x437f0000
        var_110.o = vdivq_f32(vcvtq_f32_u32(v0_8), v1_6)
        UI2SetColorRoot(x0_25, &var_110)
        UI2UpdateRoot(zx.q(var_64), false, 0f)
        UI2Draw(zx.q(var_64))
        UI2Free(&var_64)

*(arg1 + 0x10) = *(arg1 + 0x10) + v8
