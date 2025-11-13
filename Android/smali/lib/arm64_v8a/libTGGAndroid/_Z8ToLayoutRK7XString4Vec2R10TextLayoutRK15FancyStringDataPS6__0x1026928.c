// 函数: _Z8ToLayoutRK7XString4Vec2R10TextLayoutRK15FancyStringDataPS6_
// 地址: 0x1026928
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
TextLayout* x19 = arg2
float entry_v0
float var_88 = entry_v0
float entry_v1
float var_84 = entry_v1
int64_t result = XString::operator==(arg2)

if ((result.d & 1) == 0 || *(x19 + 8) f!= entry_v0 || *(x19 + 0xc) f!= entry_v1
        || not(*(x19 + 0x10) f== *(arg3 + 0x2c)))
    int32_t x8_1 = *(x19 + 0x28)
    
    if (x8_1 s>= 1)
        int64_t x23_1 = 0
        int64_t i = 0
        
        do
            int32_t* x9_1 = *(x19 + 0x20)
            
            if (*(x9_1 + x23_1) == 2)
                UI2Free(x9_1 + x23_1 + 0x20)
                x8_1 = *(x19 + 0x28)
            
            i += 1
            x23_1 += 0x40
        while (i s< sx.q(x8_1))
    
    *(x19 + 0x28) = 0
    XString::operator=(x19)
    *(x19 + 8) = var_88.q
    int32_t v0_1 = *(arg3 + 0x2c)
    *(x19 + 0x18) = arg3
    *(x19 + 0x10) = v0_1
    int128_t v0_2
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    result, v0_2, v1_1, v2_1, v3_1 = XString::IsEmpty()
    
    if ((result.d & 1) == 0)
        v0_2 = *(arg3 + 0x10)
        int128_t var_120 = *arg3
        int96_t var_110_1 = v0_2.12
        int128_t var_e0_1 = *(arg3 + 0x40)
        char var_d0_1 = (*(arg3 + 0x50)).b
        int128_t var_100_1 = *(arg3 + 0x20)
        int128_t var_f0_1 = *(arg3 + 0x30)
        v0_2 = *(arg3 + 0x60)
        v1_1 = *(arg3 + 0x70)
        v2_1 = *(arg3 + 0x80)
        int32_t x10_2 = (*(arg3 + 0x90)).d
        int64_t var_160 = -1
        int32_t var_158_1 = -1
        int128_t var_150
        __builtin_memset(&var_150, 0, 0x2c)
        int128_t var_b0 = v1_1
        int104_t var_a0_1 = v2_1.13
        int128_t var_c0_1 = v0_2
        char* x0_5 = XString::operator char const*()
        char* var_168 = x0_5
        
        while (true)
            char* x24_1 = x0_5
            
            while (true)
                uint32_t x8_7 = zx.d(*x24_1)
                int96_t var_140
                
                if (x8_7 != 0x7b)
                    if (x8_7 == 0)
                    label_1027238:
                        FinalizeCurrentEntry(x19, &var_120, &var_88, &var_160)
                        FinalizeCurrentLine(x19, &var_120, &var_88, &var_160)
                        float var_130
                        float var_12c
                        result =
                            FinalizeLayout(x19, &var_88, &var_120, var_140:8.d - var_130 + var_12c)
                        *(x19 + 0x18) = 0
                        return result
                    
                    if (x8_7 == 0xd)
                        FinalizeCurrentEntry(x19, &var_120, &var_88, &var_160)
                        FinalizeCurrentLine(x19, &var_120, &var_88, &var_160)
                        x0_5 = &x24_1[1]
                        var_168 = x0_5
                        
                        if (zx.d(x24_1[1]) != 0xa)
                            break
                        
                        x0_5 = &x24_1[2]
                        var_168 = x0_5
                        break
                    
                    goto label_1026b14
                
                if (zx.d(var_b0:4.b) != 0)
                label_1026b14:
                    int64_t x9_3 = sx.q(var_158_1)
                    
                    if (x9_3.d == 0xffffffff)
                        void* x0_8 = TextEntryAlloc(x19, 0, &var_120, &var_160)
                        *(x0_8 + 0x28) = x24_1
                        int64_t* x8_11 = var_b0:8.q
                        XAsset* x0_9
                        
                        if (x8_11 != 0)
                            x0_9 = *x8_11
                        
                        float v0_3
                        float v2_2
                        
                        if (x8_11 == 0 || x0_9 == 0)
                            XAsset* x23_2 = *var_120:8.q
                            void** x8_13
                            
                            if (x23_2 == 0)
                                x23_2 = AssetPtrGetNull(0x12)
                                x8_13 = *x23_2
                                
                                if (x8_13 == 0)
                                    AssetCatalogLoadAsset(x23_2, false, true)
                                    x8_13 = *x23_2
                            else
                                x8_13 = *x23_2
                                
                                if (x8_13 == 0)
                                    AssetCatalogLoadAsset(x23_2, false, true)
                                    x8_13 = *x23_2
                            
                            int32_t x9_7 = *(x23_2 + 0x24)
                            *(x23_2 + 0x24) = x9_7 + 1
                            v2_2 = var_100_1:0xc.d
                            float v1_2 = *(*x8_13 + 4)
                            *(x23_2 + 0x24) = x9_7
                            v0_3 = float.s(v1_2) - float.s(var_110_1:8.d)
                        else
                            v2_2 = var_100_1:0xc.d
                            v0_3 = TTFontAscent(x0_9, var_a0_1.d) - float.s(var_110_1:8.d)
                        
                        *(x0_8 + 0x20) = v2_2 * v0_3
                        uint64_t x8_16 = zx.q(zx.d(*x24_1) - 0x22)
                        
                        if (x8_16.d u> 0x3b || (1 << x8_16 & 0x800000001001ca1) == 0)
                            *(x0_8 + 0x3c) = 0
                        else
                            int32_t x8_18 = *(x0_8 + 4)
                            *(x0_8 + 0x3c) = 1
                            *(x0_8 + 4) = x8_18 | 1
                    else if (zx.d(*(*(x19 + 0x20) + (x9_3 << 6) + 0x3c)) != 0)
                        uint64_t x8_8 = zx.q(x8_7 - 0x22)
                        
                        if (x8_8.d u> 0x3b || (1 << x8_8 & 0x800000001001ca1) == 0)
                            FinalizeCurrentEntry(x19, &var_120, &var_88, &var_160)
                            continue
                    
                    int32_t x11_1 = sx.d(*x24_1)
                    
                    if ((x11_1 & 0x80000000) != 0)
                        int32_t x10_4 = x11_1 & 0xff
                        
                        if ((x10_4 & 0xe0) == 0xc0)
                            x24_1 = &x24_1[1]
                        else if ((x11_1 & 0xf0) == 0xe0)
                            x24_1 = &x24_1[2]
                        else if ((x10_4 & 0xf8) == 0xf0)
                            x24_1 = &x24_1[3]
                    
                    x0_5 = &x24_1[1]
                    void* x8_6 = *(x19 + 0x20) + (sx.q(var_158_1) << 6)
                    var_168 = x0_5
                    *(x8_6 + 0x30) = x0_5
                    break
                
                if ((FinalizeCurrentEntry(x19, &var_120, &var_88, &var_160) & 1) == 0)
                    void* x0_15
                    int64_t v0_4
                    x0_15, v0_4 = ParseEscape(arg4, &var_168)
                    
                    if (zx.d(*(x0_15 + 0x40)) != 0)
                        FinalizeCurrentLine(x19, &var_120, &var_88, &var_160)
                        float var_128_1 = *(x0_15 + 0x30) * var_100_1:0xc.d
                    else if (*(x0_15 + 0x60) != 0)
                        void* x0_20 = TextEntryAlloc(x19, 2, &var_120, &var_160)
                        int64_t x8_24 = **(x0_15 + 0x60)
                        *(x0_20 + 0x20) = 0
                        *(x0_20 + 0x28) = x8_24
                        *(x0_20 + 0x30) = x0_15
                        int64_t* x8_25 = var_b0:8.q
                        XAsset* x0_21
                        
                        if (x8_25 != 0)
                            x0_21 = *x8_25
                        
                        float v0_6
                        
                        if (x8_25 == 0 || x0_21 == 0)
                            XAsset* x25_1 = *var_120:8.q
                            
                            if (x25_1 == 0)
                                x25_1 = AssetPtrGetNull(0x12)
                            
                            void** x8_27 = *x25_1
                            
                            if (x8_27 == 0)
                                AssetCatalogLoadAsset(x25_1, false, true)
                                x8_27 = *x25_1
                            
                            int32_t x9_8 = *(x25_1 + 0x24)
                            *(x25_1 + 0x24) = x9_8 + 1
                            float v1_6 = *(*x8_27 + 4)
                            *(x25_1 + 0x24) = x9_8
                            v0_6 = var_100_1:0xc.d * (float.s(v1_6) - float.s(var_110_1:8.d))
                        else
                            v0_6 = var_100_1:0xc.d
                                * (TTFontAscent(x0_21, var_a0_1.d) - float.s(var_110_1:8.d))
                        
                        int32_t x8_29 = *(x0_20 + 4)
                        *(x0_20 + 0x24) = v0_6
                        *(x0_20 + 4) = x8_29 | 1
                        int32_t v0_7
                        int32_t v1_8
                        int32_t v2_5
                        int32_t v3_2
                        v0_7, v1_8, v2_5, v3_2 = RectScreen()
                        int32_t var_178 = v0_7
                        int32_t var_174_1 = v1_8
                        int32_t var_170_1 = v2_5
                        int32_t var_16c_1 = v3_2
                        int32_t v0_8
                        int32_t v1_9
                        int32_t v2_6
                        int32_t v3_3
                        v0_8, v1_9, v2_6, v3_3 = RectScreenSafe()
                        int32_t var_188 = v0_8
                        int32_t var_184_1 = v1_9
                        int32_t var_180_1 = v2_6
                        int32_t var_17c_1 = v3_3
                        int128_t v0_9
                        int128_t v1_10
                        v0_9, v1_10 = UI2Begin("font", x0_20 + 0x20, *(x0_20 + 0x28), &var_178, 
                            &var_188, 0, 0, true)
                        UI2StateDecl* x1_9 = *(x0_15 + 0x68)
                        
                        if (x1_9 != 0)
                            v0_9.d = fconvert.s(1f)
                            v0_9, v1_10 = UI2SetState(*gUI2 + zx.q(*(x0_20 + 0x20)) * 0x19a8, x1_9, 
                                0xffffffff, 1, v0_9.d)
                        
                        float v9 = *(x0_15 + 0x2c)
                        int64_t* x8_32 = var_b0:8.q
                        v10.d = var_100_1:0xc.d
                        XAsset* x0_25
                        
                        if (x8_32 != 0)
                            x0_25 = *x8_32
                        
                        if (x8_32 == 0 || x0_25 == 0)
                            XAsset* x25_2 = *var_120:8.q
                            
                            if (x25_2 == 0)
                                XAsset* x0_26
                                x0_26, v0_9, v1_10 = AssetPtrGetNull(0x12)
                                x25_2 = x0_26
                            
                            int64_t* x8_34 = *x25_2
                            
                            if (x8_34 == 0)
                                v0_9, v1_10 = AssetCatalogLoadAsset(x25_2, false, true)
                                x8_34 = *x25_2
                            
                            int32_t x9_10 = *(x25_2 + 0x24)
                            *(x25_2 + 0x24) = x9_10 + 1
                            v0_9.d = var_110_1:8.d
                            v1_10.d = *(*x8_34 + 4)
                            v0_9.d = float.s(v0_9.d)
                            *(x25_2 + 0x24) = x9_10
                            v1_10.d = float.s(v1_10.d)
                            v0_9.d = v1_10.d f- v0_9.d
                            v0_9.d = var_100_1:0xc.d f* v0_9.d
                        else
                            v0_9.d = var_a0_1.d
                            v0_9, v1_10 = TTFontAscent(x0_25, v0_9.d)
                            v1_10.d = var_110_1:8.d
                            v1_10.d = float.s(v1_10.d)
                            v0_9.d = v0_9.d f- v1_10.d
                            v0_9.d = var_100_1:0xc.d f* v0_9.d
                        
                        v1_10.d = *(x0_20 + 0x14)
                        float v2_7 = v9 f* v10.d
                        v0_9.d = v1_10.d f- v0_9.d
                        *(x0_20 + 0x14) = v0_9.d
                        v1_10.d = *(x0_15 + 0x44)
                        float v3_4 = *(x0_15 + 0x18)
                        float var_1a8 = v2_7
                        *(&var_1a8 | 4) = *QI
                        v0_9.d = float.s(v1_10.d)
                        v1_10.d = float.s(v3_4)
                        v0_9.d = v2_7 f* v0_9.d
                        v1_10.d = v2_7 f* v1_10.d
                        v0_9.d = v0_9.d f+ 0f
                        int32_t var_18c_1 = 0
                        int32_t var_194_1 = v0_9.d
                        uint64_t x0_28 = zx.q(*(x0_20 + 0x20))
                        int64_t x8_37 = *gUI2
                        int64_t x9_11 = x0_28 & 0xffff
                        void* x10_9 = x8_37 + x9_11 * 0x19a8
                        int64_t var_1a0
                        int64_t var_198
                        
                        if (((*(x10_9 + 0x16b0) ^ var_1a8.q) | (*(x10_9 + 0x16b8) ^ var_1a0)
                                | (*(x10_9 + 0x16c0) ^ var_198) | (*(x10_9 + 0x16c8) ^ v1_10.d.q)) != 0)
                            void* i_1 = x8_37 + x9_11 * 0x19a8
                            *(x10_9 + 0x16b0) = var_1a8.o
                            *(x10_9 + 0x16c0) = var_198.o
                            
                            do
                                *(i_1 + 0x1378) = 2
                                i_1 = *(i_1 + 0x17d0)
                            while (i_1 != 0)
                            
                            x0_28 = zx.q(*(x0_20 + 0x20))
                            x8_37 = *gUI2
                            x9_11 = x0_28 & 0xffff
                        
                        v2_7 = float.s(0x437f0000)
                        void* i_2 = x8_37 + x9_11 * 0x19a8
                        uint64_t x11_11 = mulu.dp.d(
                            zx.d(0x80 + zx.w(var_e0_1:0xd.b) * zx.w(*(x0_15 + 0x20))), 0x80808081)
                        uint64_t x13_6 = mulu.dp.d(
                            zx.d(0x80 + zx.w(var_e0_1:0xf.b) * zx.w(*(x0_15 + 0x22))), 0x80808081)
                        v0_9.d = float.s((x11_11 u>> 0x27).d & 0xff)
                        v1_10.d = v0_9.d f/ v2_7
                        v0_9.d = float.s((x13_6 u>> 0x27).d & 0xff) / v2_7
                        v3_4 = float.s(((x11_11 u>> 0x27).d | (mulu.dp.d(
                            zx.d(0x80 + zx.w(var_e0_1:0xe.b) * zx.w(*(x0_15 + 0x21))), 0x80808081)
                            u>> 0x20).d << 1) u>> 8 & 0xff) / v2_7
                        v2_7 = float.s(((x13_6 u>> 0x27).d << 0x10
                            | (zx.d(0x80 + zx.w(var_d0_1) * zx.w(*(x0_15 + 0x23))) u/ 0xff)
                            << 0x18) u>> 0x18) / v2_7
                        
                        if (*(i_2 + 0x1704) f!= v1_10.d
                                || *(x8_37 + x9_11 * 0x19a8 + 0x1708) != v3_4
                                || *(x8_37 + x9_11 * 0x19a8 + 0x170c) f!= v0_9.d
                                || not(*(x8_37 + x9_11 * 0x19a8 + 0x1710) == v2_7))
                            void* x8_38 = x8_37 + x9_11 * 0x19a8
                            *(i_2 + 0x1704) = v1_10.d
                            *(x8_38 + 0x1708) = v3_4
                            *(x8_38 + 0x170c) = v0_9.d
                            *(x8_38 + 0x1710) = v2_7
                            
                            do
                                *(i_2 + 0x1378) = 2
                                i_2 = *(i_2 + 0x17d0)
                            while (i_2 != 0)
                            
                            x0_28 = zx.q(*(x0_20 + 0x20))
                        
                        v0_9.d = 0f
                        UI2UpdateRoot(x0_28, false, v0_9.d)
                    else if (*(x0_15 + 0x10) == 0)
                        v0_4.d = *(x0_15 + 0x2c)
                        
                        if (not(v0_4.d f== 0f))
                            v0_4.d = v0_4.d f* x10_2
                            var_100_1:0xc.d = v0_4.d
                        
                        uint32_t x8_43 = zx.d(var_a0_1:0xc.b)
                        
                        if (zx.d(*(x0_15 + 0x23)) != 0 && x8_43 == 0)
                            var_100_1.d = *(x0_15 + 0x20)
                        
                        if (zx.d(*(x0_15 + 0x27)) != 0 && x8_43 == 0)
                            var_100_1:4.d = *(x0_15 + 0x24)
                        
                        int32_t x8_45 = *(x0_15 + 0x70)
                        
                        if (x8_45 != 0)
                            var_b0.d = x8_45
                        
                        int32_t x8_46 = *(x0_15 + 0x1c)
                        
                        if (x8_46 != 0)
                            var_110_1:0xc.d = x8_46
                        
                        int64_t x8_47 = *(x0_15 + 8)
                        int64_t x8_48
                        void* x9_16
                        
                        if (x8_47 != 0)
                            var_120:8.q = x8_47
                            x8_48 = *(x0_15 + 0x78)
                            x9_16 = &var_b0:8
                            
                            if (x8_48 != 0)
                                goto label_10271c4
                            
                            goto label_10271d4
                        
                        x8_48 = *(x0_15 + 0x78)
                        
                        if (x8_48 != 0)
                        label_10271c4:
                            var_b0:8.q = x8_48
                            x9_16 = &var_120 | 8
                            var_a0_1.q = *(x0_15 + 0x80)
                        label_10271d4:
                            *x9_16 = 0
                            var_110_1:8.d = *(x0_15 + 0x18)
                            v0_4.d = *(x0_15 + 0x30)
                            var_f0_1.d = v0_4.d
                            var_f0_1:8.q = *(x0_15 + 0x38)
                        
                        *(TextEntryAlloc(x19, 1, &var_120, &var_160) + 0x20) = x0_15
                    else
                        void* x0_30 = TextEntryAlloc(x19, 3, &var_120, &var_160)
                        int32_t x9_12 = *(x0_30 + 4)
                        *(x0_30 + 0x20) = **(x0_15 + 0x10)
                        *(x0_30 + 0x30) = x0_15
                        *(x0_30 + 4) = x9_12 | 1
                        *(x0_30 + 0x28) = var_140.d
                    
                    if ((FinalizeCurrentEntry(x19, &var_120, &var_88, &var_160) & 1) == 0)
                        x0_5 = var_168
                        break
                
                goto label_1027238

return result
