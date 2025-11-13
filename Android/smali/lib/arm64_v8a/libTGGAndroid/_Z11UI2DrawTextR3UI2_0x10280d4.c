// 函数: _Z11UI2DrawTextR3UI2
// 地址: 0x10280d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int128_t entry_v13
int64_t var_90 = entry_v13.q
int64_t v12
int64_t var_88 = v12
int128_t entry_v11
int64_t var_80 = entry_v11.q
int64_t v10
int64_t var_78 = v10
int128_t entry_v9
int64_t var_70 = entry_v9.q
int128_t entry_v8
int64_t var_68 = entry_v8.q

if (not(*(arg1 + 0x1710) f== 0f))
    int128_t v0_1 = GameGetTimeSimulation()
    UI2TextStr(arg1)
    
    if (zx.d(*XString::operator char const*()) != 0)
        XString::XString()
        XString var_a8
        
        if (zx.d(*(arg1 + 0x1590)) != 0)
            void var_b0
            XString::operator=(&var_b0)
            ToUpper(&var_b0)
            XString::operator=(&var_a8)
        
        entry_v8 = UI2PropDynamic<float>::Eval(v0_1.d)
        int128_t v0_3
        v0_3.d = *(arg1 + 0x16b0)
        v0_3.d = entry_v8.d f* v0_3.d
        
        if (not(v0_3.d f== 0f))
            v0_3.d = *(arg1 + 0xa64)
            float v1_1 = v0_1.d f- v0_3.d
            v0_3.d = *(arg1 + 0xa54) + *(arg1 + 0xa50)
            int32_t x20_1
            
            if (v1_1 f< v0_3.d || *(arg1 + 0xa44) s> 1)
                v0_3.d = *(arg1 + 0xa60)
                v0_3.d = v0_1.d f- v0_3.d
                int32_t x0_7
                x0_7, v0_3 = PropEval<ColorRgbaI>(arg1 + 0x9d8, arg1 + 0xa14, arg1 + 0xa50, v0_3.d, 
                    v1_1, v1_1)
                x20_1 = x0_7
            else
                x20_1 = *(arg1 + 0xa14)
            
            v0_3.d = *(arg1 + 0xaf4)
            v1_1 = v0_1.d f- v0_3.d
            v0_3.d = *(arg1 + 0xae4) + *(arg1 + 0xae0)
            int32_t x21_1
            
            if (v1_1 f< v0_3.d || *(arg1 + 0xad4) s> 1)
                v0_3.d = *(arg1 + 0xaf0)
                v0_3.d = v0_1.d f- v0_3.d
                int32_t x0_9
                x0_9, v0_3 = PropEval<ColorRgbaI>(arg1 + 0xa68, arg1 + 0xaa4, arg1 + 0xae0, v0_3.d, 
                    v1_1, v1_1)
                x21_1 = x0_9
            else
                x21_1 = *(arg1 + 0xaa4)
            
            float v3_1 = *(arg1 + 0x1704)
            v0_3.d = *(arg1 + 0x1708)
            int16_t x24_1
            
            if (not(v3_1 <= float.s(0x3f7fbe77)))
                x24_1 = 0xff
            else if (v3_1 >= float.s(0x3a83126f))
                x24_1 = vcvts_s32_f32(v3_1 * float.s(0x437f0000) + fconvert.s(0.5f))
            else
                x24_1 = 0
            
            v1_1 = *(arg1 + 0x170c)
            uint32_t x25_1
            
            if (not(v0_3.d f<= float.s(0x3f7fbe77)))
                x25_1 = 0xff00
            else if (v0_3.d f>= float.s(0x3a83126f))
                x25_1 = vcvts_s32_f32(v0_3.d f* float.s(0x437f0000) + fconvert.s(0.5f)) << 8
            else
                x25_1 = 0
            
            float v2_1 = *(arg1 + 0x1710)
            uint32_t x26_1
            
            if (not(v1_1 <= float.s(0x3f7fbe77)))
                x26_1 = 0xff0000
            else if (v1_1 >= float.s(0x3a83126f))
                x26_1 = vcvts_s32_f32(v1_1 * float.s(0x437f0000) + fconvert.s(0.5f)) << 0x10
            else
                x26_1 = 0
            
            uint32_t x22_1
            
            if (not(v2_1 <= float.s(0x3f7fbe77)))
                x22_1 = -0x1000000
            else if (v2_1 >= float.s(0x3a83126f))
                x22_1 = vcvts_s32_f32(v2_1 * float.s(0x437f0000) + fconvert.s(0.5f)) << 0x18
            else
                x22_1 = 0
            
            int16_t x23_1
            
            if (not(v3_1 <= float.s(0x3f7fbe77)))
                x23_1 = 0xff
            else if (v3_1 >= float.s(0x3a83126f))
                x23_1 = vcvts_s32_f32(v3_1 * float.s(0x437f0000) + fconvert.s(0.5f))
            else
                x23_1 = 0
            
            uint32_t x27_1
            
            if (not(v0_3.d f<= float.s(0x3f7fbe77)))
                x27_1 = 0xff00
            else if (v0_3.d f>= float.s(0x3a83126f))
                v0_3.d = v0_3.d f* float.s(0x437f0000)
                v0_3.d = v0_3.d f+ fconvert.s(0.5f)
                x27_1 = vcvts_s32_f32(v0_3.d) << 8
            else
                x27_1 = 0
            
            v0_3.d = float.s(0x3f7fbe77)
            uint32_t x28_1
            
            if (v1_1 f<= v0_3.d)
                v0_3.d = float.s(0x3a83126f)
                
                if (v1_1 f>= v0_3.d)
                    v0_3.d = float.s(0x437f0000)
                    v0_3.d = v1_1 f* v0_3.d
                    v0_3.d = v0_3.d f+ fconvert.s(0.5f)
                    x28_1 = vcvts_s32_f32(v0_3.d) << 0x10
                else
                    x28_1 = 0
            else
                x28_1 = 0xff0000
            
            v0_3.d = float.s(0x3f7fbe77)
            uint32_t fp_1
            
            if (v2_1 f<= v0_3.d)
                v0_3.d = float.s(0x3a83126f)
                
                if (v2_1 f>= v0_3.d)
                    v0_3.d = float.s(0x437f0000)
                    v0_3.d = v2_1 f* v0_3.d
                    v0_3.d = v0_3.d f+ fconvert.s(0.5f)
                    fp_1 = vcvts_s32_f32(v0_3.d) << 0x18
                else
                    fp_1 = 0
            else
                fp_1 = -0x1000000
            
            v0_3.d = *(arg1 + 0x9d4)
            v1_1 = v0_1.d f- v0_3.d
            v0_3.d = *(arg1 + 0x9c4) + *(arg1 + 0x9c0)
            int32_t x0_11
            
            if (v1_1 f< v0_3.d || *(arg1 + 0x9b4) s> 1)
                v0_3.d = *(arg1 + 0x9d0)
                v0_3.d = v0_1.d f- v0_3.d
                x0_11, v0_3 = PropEval<ColorRgbaI>(arg1 + 0x948, arg1 + 0x984, arg1 + 0x9c0, 
                    v0_3.d, v1_1, v1_1)
            else
                x0_11 = *(arg1 + 0x984)
            
            v1_1 = *(arg1 + 0x1714)
            v0_3.d = *(arg1 + 0x1718)
            uint32_t x8_13
            
            if (not(v1_1 <= float.s(0x3f7fbe77)))
                x8_13 = 0xff
            else if (v1_1 >= float.s(0x3a83126f))
                x8_13 = vcvts_s32_f32(v1_1 * float.s(0x437f0000) + fconvert.s(0.5f))
            else
                x8_13 = 0
            
            v1_1 = *(arg1 + 0x171c)
            uint32_t x9_1
            
            if (not(v0_3.d f<= float.s(0x3f7fbe77)))
                x9_1 = 0xff00
            else if (v0_3.d f>= float.s(0x3a83126f))
                v0_3.d = v0_3.d f* float.s(0x437f0000)
                v0_3.d = v0_3.d f+ fconvert.s(0.5f)
                x9_1 = vcvts_s32_f32(v0_3.d) << 8
            else
                x9_1 = 0
            
            v0_3.d = *(arg1 + 0x1720)
            uint32_t x12_1
            
            if (not(v1_1 <= float.s(0x3f7fbe77)))
                x12_1 = 0xff0000
            else if (v1_1 >= float.s(0x3a83126f))
                x12_1 = vcvts_s32_f32(v1_1 * float.s(0x437f0000) + fconvert.s(0.5f)) << 0x10
            else
                x12_1 = 0
            
            uint32_t x13_1 = -0x1000000
            
            if (not(v0_3.d f> float.s(0x3f7fbe77)))
                if (v0_3.d f>= float.s(0x3a83126f))
                    v0_3.d = v0_3.d f* float.s(0x437f0000)
                    v0_3.d = v0_3.d f+ fconvert.s(0.5f)
                    x13_1 = vcvts_s32_f32(v0_3.d) << 0x18
                else
                    x13_1 = 0
            
            uint32_t x8_14 = x8_13 + zx.d(x0_11.b)
            uint32_t x9_4 = (x9_1 u>> 8) + zx.d((x0_11 u>> 8).b)
            v0_3.d = *(arg1 + 0x175c)
            uint32_t x11_2 = (x0_11 u>> 0x18) + (x13_1 u>> 0x18)
            uint32_t x12_3 = (x12_1 u>> 0x10) + zx.d((x0_11 u>> 0x10).b)
            int32_t x17_1
            
            if (x8_14 u> 0xff)
                x17_1 = 0xff
            else
                x17_1 = x8_14 & 0xff
            
            int32_t x8_17
            
            if (x9_4 u> 0xff)
                x8_17 = 0xff00
            else
                x8_17 = (x9_4 & 0xff) << 8
            
            int32_t x8_18
            
            if (x12_3 u> 0xff)
                x8_18 = 0xff0000
            else
                x8_18 = (x12_3 & 0xff) << 0x10
            
            uint32_t x8_19
            
            if (x11_2 u> 0xff)
                x8_19 = -0x1000000
            else
                x8_19 = x11_2 << 0x18
            
            if (not(v0_3.d f== 0f))
                v0_3.d = *(arg1 + 0x1760)
                
                if (not(v0_3.d f== 0f))
                    TimerStart()
                    float v5_2 = *V20
                    float v6_1 = *(V20 + 4)
                    float v1_2 = *(arg1 + 0x1468)
                    float v3_2 = *(arg1 + 0x175c)
                    uint64_t x11_8 = (zx.q((mulu.dp.d(
                        zx.d(0x80 + ((x21_1 u>> 8).w & 0xff) * (x27_1 u>> 8).w), 0x80808081) u>> 0x20).d
                        << 1) & 0xff00) | zx.q(zx.d(0x80 + (x21_1.w & 0xff) * x23_1) u/ 0xff)
                    int64_t x22_2 = (mulu.dp.d(
                        zx.d(0x80 + (x28_1 u>> 0x10).w * ((x21_1 u>> 0x10).w & 0xff)), 0x80808081)
                        u>> 0x17 & 0x1ff0000) | x11_8
                    float v4_2 = *(arg1 + 0x1760)
                    float v0_4 = v5_2 + *(arg1 + 0x15a0) * v1_2
                    float v7_1 = v3_2 - *(arg1 + 0x15a8) * v1_2
                    int32_t x9_11 = ((mulu.dp.d(
                        zx.d(0x80 + ((x20_1 u>> 8).w & 0xff) * (x25_1 u>> 8).w), 0x80808081) u>> 0x20).d
                        << 1 & 0xff00) | (zx.d(0x80 + (x20_1.w & 0xff) * x24_1) u/ 0xff)
                    float v2_5
                    float v16_1
                    
                    if (not(v7_1 <= v0_4))
                        v16_1 = *(arg1 + 0x15ac) * v1_2
                        v1_2 = v6_1 + *(arg1 + 0x15a4) * v1_2
                        v2_5 = v4_2 - v16_1
                    
                    if (v7_1 <= v0_4 || not(v2_5 > v1_2))
                        v0_4 = v5_2
                        v1_2 = v6_1
                        v7_1 = v3_2
                        v2_5 = v4_2
                    
                    float x26_2 = (0xfe00ffff & x9_11) | (0x1ff
                        & (zx.d(0x80 + (x26_1 u>> 0x10).w * ((x20_1 u>> 0x10).w & 0xff)) u/ 0xff))
                        << 0x10
                        | (zx.d(0x80 + (x22_1 u>> 0x18).w * (x20_1 u>> 0x18).w) u/ 0xff) << 0x18
                    int64_t x27_2 = (
                        mulu.dp.d(zx.d(0x80 + (fp_1 u>> 0x18).w * (x21_1 u>> 0x18).w), 0x80808081)
                        u>> 0xf & 0x1ff000000) | x22_2
                    entry_v9.d = v7_1 - v0_4
                    
                    if (*(arg1 + 0x1530) != 0)
                        int32_t x10_6 = *(arg1 + 0x1978)
                        
                        if (x10_6 != 0)
                            entry_v9.d = entry_v9.d f- *(*gUI2 + zx.q(x10_6.w) * 0x19a8 + 0x175c)
                    
                    float var_364_2 = v2_5 - v1_2
                    int32_t x9_14 = x8_17 | x17_1 | x8_18 | x8_19
                    v6_1 = *(arg1 + 0x16b8)
                    v16_1 = *(arg1 + 0x16bc)
                    float v17_1 = *(arg1 + 0x16b4)
                    float v18_1 = *(arg1 + 0x16c0)
                    float v22_1 = *R2I
                    float v21_1 = *(R2I + 4)
                    float v23_1 = *V21
                    float v24_1 = *(V21 + 4)
                    v2_5 = *(arg1 + 0x16b0)
                    v3_2 = v6_1 + v6_1
                    float v26_1 = v17_1 + v17_1
                    v18_1 = v18_1 + v18_1
                    v5_2 = fconvert.s(1f)
                    v7_1 = *(arg1 + 0x16c4)
                    int32_t v19_1 = *(arg1 + 0x16c8)
                    int32_t v20_1 = *(arg1 + 0x16cc)
                    float v28_1 = v6_1 * v3_2
                    v4_2 = v16_1 * (v16_1 + v16_1)
                    float v29_1 = v6_1 * v26_1
                    float v30_1 = v16_1 * v18_1
                    v3_2 = v3_2 * v16_1
                    v16_1 = v16_1 * v26_1
                    v26_1 = v17_1 * v26_1
                    v6_1 = v6_1 * v18_1
                    v17_1 = v17_1 * v18_1
                    v18_1 = v5_2 - v28_1
                    v5_2 = v5_2 - v26_1
                    int128_t var_1a0_1 = data_71cfa0
                    float var_114_1 = v1_2 + *(arg1 + 0x1560)
                    int128_t v25_1
                    v25_1.d = v29_1 + v30_1
                    float var_124_1 = v0_4 + *(arg1 + 0x155c)
                    v0_4 = v18_1 - v4_2
                    int32_t var_128_1 = 0
                    int32_t var_118_1 = 0
                    int64_t var_110_1 = 0
                    int32_t var_108_1 = 0x3f800000
                    float var_120_1 = v23_1 * v22_1
                    float var_11c_1 = v21_1 * v24_1
                    v18_1 = v2_5 f* v25_1.d
                    float var_130 = v21_1 * v23_1
                    float var_12c_1 = v24_1 * fneg(v22_1)
                    int32_t var_fc_1 = 0
                    int32_t var_104_1 = 0
                    float var_1c8_1 = v2_5 * (v16_1 + v6_1)
                    float var_1c4_1 = v7_1
                    float var_1b8_1 = v2_5 * (v3_2 - v17_1)
                    int32_t var_1b4_1 = v19_1
                    float var_1b0_1 = v2_5 * (v16_1 - v6_1)
                    float var_1ac_1 = v2_5 * (v3_2 + v17_1)
                    float var_1d0 = v2_5 * v0_4
                    float var_1cc_1 = v2_5 * (v29_1 - v30_1)
                    float var_1bc_1 = v2_5 * (v5_2 - v4_2)
                    float var_1a8_1 = v2_5 * (v5_2 - v28_1)
                    int32_t var_1a4_1 = v20_1
                    int32_t var_f4_1 = 0x3f800000
                    FancyStringData* x4_2
                    int128_t v0_5
                    x4_2, v0_5 = Mat4Multiply(&var_1d0, &var_130)
                    int32_t x21_2 = *(arg1 + 0x15b0)
                    uint8_t x28_2 = (x27_2 u>> 0x18).b
                    uint8_t fp_2 = (x22_2.d u>> 0x10).b
                    int128_t var_220
                    int64_t var_1e0
                    int64_t var_1d8
                    
                    if (x21_2 != 0)
                        v0_5.q = 0
                        v0_5:8.q = 0
                        __builtin_memset(&var_1d0, 0, 0x98)
                        int64_t x10_10 = *(arg1 + 0x1548)
                        var_1c8_1.q = &var_1d8
                        int128_t var_160
                        var_160:8.q = &var_1e0
                        var_1e0 = *(arg1 + 0x1550)
                        var_1d8 = x10_10
                        v0_5.d = *(arg1 + 0x1558)
                        int128_t var_150
                        var_150.d = v0_5.d
                        int32_t var_1a4_2 = 0x3f800000
                        int32_t var_1b4_2 = *(arg1 + 0x1444)
                        v0_5.d = *(arg1 + 0x158c)
                        int128_t var_180
                        var_180:4.d = v0_5.d
                        v0_5.d = *(arg1 + 0x1594)
                        var_180:8.d = v0_5.d
                        v0_5.d = *(arg1 + 0x1598)
                        int128_t var_1a0_2
                        var_1a0_2.d = v0_5.d
                        int32_t x8_25 = *(arg1 + 0x1564)
                        
                        if (x8_25 u>= 3)
                            goto label_1028f38
                        
                        var_160.d = 1 | (0x7fffffff & x8_25) << 1
                        var_1b0_1 = x26_2
                        var_160:4.b = *(arg1 + 0x1568)
                        int128_t var_190
                        var_190:0xd.d = *gRgbaIWhite
                        int32_t var_1a8_2 = x9_14
                        var_1ac_1:2.b = fp_2
                        var_1ac_1.w = (x22_2.d).w
                        var_1ac_1:3.b = x28_2
                        int64_t var_140
                        var_140.d = entry_v8.d
                        
                        if (x21_2 != 3)
                            v0_5.d = float.s(0x461c4000)
                            x4_2, v0_5 = WrapperGetFancyHeight(&var_a8, *(gUI2 + 0x68), &var_1d0, 
                                &var_130, nullptr, v0_5.d)
                            float v1_3 = entry_v9.d f/ var_130
                            v0_5.d = var_364_2 f/ v0_5.d
                            
                            if (v1_3 f< v0_5.d)
                                v0_5.d = v1_3
                            else
                                v0_5.d = v0_5.d
                            
                            v0_5.d = v0_5.d f* float.s(0x3f7fff58)
                            
                            if (x21_2 != 1)
                                entry_v8 = v0_5
                            else if (not(v0_5.d f>= entry_v8.d))
                                bool z_1
                                
                                if ((zx.d(*(gUI2Editor + 0x8c3e4)) & 1) == 0)
                                    z_1 = zx.d(*(arg1 + 0x14)) == 0
                                else
                                    z_1 = true
                                
                                if (not(z_1))
                                    x26_2 = *gRgbaIMagenta
                                
                                entry_v8 = v0_5
                        else
                            int128_t* x24_2 = &var_220
                            int32_t var_380_1
                            var_380_1.q = x27_2
                            v12.d = fconvert.s(1f)
                            __builtin_memcpy(&var_220, 
                                "\x00\x00\x80\x3f\xcd\xcc\x8c\x3f\x00\x00\xa0\x3f\x00\x00\xc0\x3f\x00\x"
                            "00\xe0\x3f\x00\x00\x00\x40", 
                                0x18)
                            v14.d = fconvert.s(1f)
                            entry_v13 = entry_v8
                            
                            while (true)
                                FancyStringData* x4_3 = XString::XString()
                                int32_t* var_110_2 = nullptr
                                var_108_1.q = 0
                                entry_v11.d = var_364_2 * v12.d f/ v14.d
                                int32_t var_120_2 = 0
                                ToLayout(&var_a8, &var_130, &var_1d0, *(gUI2 + 0x68), x4_3)
                                int32_t x8_29 = var_108_1
                                
                                if (x8_29 s>= 1)
                                    int64_t x26_3 = 0
                                    int64_t i = 0
                                    
                                    do
                                        if (*(var_110_2 + x26_3) == 2)
                                            UI2Free(var_110_2 + x26_3 + 0x20)
                                            x8_29 = var_108_1
                                        
                                        i += 1
                                        x26_3 += 0x40
                                    while (i s< sx.q(x8_29))
                                
                                v15.d = var_f4_1
                                v10.d = var_fc_1
                                
                                if ((XPooledShutdown() & 1) == 0 && var_110_2 != 0)
                                    var_108_1 = 0
                                    XPooledFree(var_110_2, var_104_1 << 6)
                                    var_104_1 = 0
                                
                                v10.d = v15.d f- v10.d
                                x4_2, v0_5 = XString::~XString()
                                
                                if (v10.d f>= entry_v11.d)
                                    break
                                
                                x24_2 += 4
                                entry_v13.d = entry_v8.d f* v14.d
                                int32_t var_208
                                
                                if (x24_2 == &var_208)
                                    break
                                
                                v14.d = *x24_2
                            
                            x27_2 = var_380_1.q
                            entry_v8 = entry_v13
                        
                        goto label_1028cd8
                    
                label_1028cd8:
                    v0_5.q = 0
                    v0_5:8.q = 0
                    __builtin_memset(&var_1d0, 0, 0x98)
                    int64_t x10_13 = *(arg1 + 0x1548)
                    var_1c8_1.q = &var_1d8
                    int128_t var_160_1
                    var_160_1:8.q = &var_1e0
                    var_1e0 = *(arg1 + 0x1550)
                    var_1d8 = x10_13
                    v0_5.d = *(arg1 + 0x1558)
                    int128_t var_150_1
                    var_150_1.d = v0_5.d
                    int32_t var_1a4_3 = entry_v8.d
                    int32_t var_1b4_3 = *(arg1 + 0x1444)
                    v0_5.d = *(arg1 + 0x158c)
                    int128_t var_180_1
                    var_180_1:4.d = v0_5.d
                    v0_5.d = *(arg1 + 0x1594)
                    var_180_1:8.d = v0_5.d
                    v0_5.d = *(arg1 + 0x1598)
                    int128_t var_1a0_3
                    var_1a0_3.d = v0_5.d
                    int32_t x8_35 = *(arg1 + 0x1564)
                    
                    if (x8_35 u>= 3)
                        pthread_kill(pthread_self(), 6)
                        XNoReturn()
                    label_1028f38:
                        pthread_kill(pthread_self(), 6)
                        int64_t* x0_26 = XNoReturn()
                        XString::~XString()
                        XString::~XString()
                        sub_1101e04(x0_26)
                        noreturn
                    
                    var_160_1.d = 1 | (0x7fffffff & x8_35) << 1
                    float var_1b0_2 = x26_2
                    var_160_1:4.b = *(arg1 + 0x1568)
                    int128_t var_190_1
                    var_190_1:0xd.d = *gRgbaIWhite
                    var_1ac_1:2.b = fp_2
                    var_1ac_1.w = (x22_2.d).w
                    int32_t var_1a8_3 = x9_14
                    var_1ac_1:3.b = x28_2
                    int64_t var_140_1
                    var_140_1.d = entry_v8.d
                    
                    if (*(arg1 + 0x15b0) != 0)
                        var_160_1.d = 2
                    
                    int128_t v0_8
                    int128_t v1_6
                    int128_t v2_7
                    int128_t v3_3
                    int128_t v4_3
                    v0_8, v1_6, v2_7, v3_3, v4_3 =
                        ToLayout(&var_a8, arg1 + 0x13f8, &var_1d0, *(gUI2 + 0x68), x4_2)
                    int128_t var_170
                    Mat4 var_f0
                    
                    if ((x27_2 & 0xff000000) != 0 && *(arg1 + 0x1580) == 1)
                        v0_8.d = *(arg1 + 0x1584)
                        v1_6.d = *(arg1 + 0x1588)
                        var_220.q = 0x3f800000
                        v0_8.d = entry_v8.d f* v0_8.d
                        v1_6.d = entry_v8.d f* v1_6.d
                        var_220:8.d = 0
                        int32_t var_208_1 = 0
                        int64_t var_200_1 = 0
                        int32_t var_1f8_1 = 0x3f800000
                        var_220:0xc.d = v0_8.d
                        int64_t var_210_1 = 0x3f80000000000000
                        int32_t var_204_1 = v1_6.d
                        int64_t var_1ec_1 = 0
                        int64_t var_1f4_1 = 0
                        int32_t var_1e4_1 = 0x3f800000
                        int128_t v0_9
                        int128_t v1_7
                        int128_t v2_8
                        int128_t v3_4
                        int128_t v4_4
                        v0_9, v1_7, v2_8, v3_4, v4_4 = Mat4Multiply(&var_f0, &var_220)
                        var_1b0_2:2.b = fp_2
                        var_1b0_2.w = (x22_2.d).w
                        var_1b0_2:3.b = x28_2
                        var_150_1:0xc.b = 1
                        var_190_1:0xd.d = *gRgbaINone
                        int128_t var_260_1 = var_170
                        int128_t var_250_1 = var_160_1
                        int128_t var_2c0 = var_1d0.o
                        int128_t var_2b0_1 = v18_1.o
                        int128_t var_240_1 = var_150_1
                        int128_t var_2a0_1 = var_1b0_2.o
                        int128_t var_290_1 = var_1a0_3
                        int64_t var_230_1 = var_140_1
                        int128_t var_280_1 = var_190_1
                        int128_t var_270_1 = var_180_1
                        v0_8, v1_6, v2_7, v3_3, v4_3 = DrawLayout(&var_130, &var_2c0, arg1 + 0x13f8)
                        var_150_1:0xc.b = 0
                        var_1b0_2 = x26_2
                        var_190_1:0xd.d = *gRgbaIWhite
                    
                    int128_t var_300_1 = var_170
                    int128_t var_2f0_1 = var_160_1
                    int128_t var_2e0_1 = var_150_1
                    int128_t var_340_1 = var_1b0_2.o
                    int128_t var_330_1 = var_1a0_3
                    int64_t var_2d0_1 = var_140_1
                    int128_t var_320_1 = var_190_1
                    int128_t var_310_1 = var_180_1
                    int128_t var_360 = var_1d0.o
                    int128_t var_350_1 = v18_1.o
                    DrawLayout(&var_f0, &var_360, arg1 + 0x13f8)
        
        XString::~XString()
    
    XString::~XString()

entry_v9.q = var_70
entry_v8.q = var_68
entry_v11.q = var_80
entry_v13.q = var_90
