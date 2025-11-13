// 函数: _Z14UI2UpdateAnimsR3UI2iRK16UI2StateBindingsfRb
// 地址: 0x1018844
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_60 = v9
int32_t x20 = (*(arg1 + 0x1370) != arg2 ? 1 : 0) | (*(arg1 + 0x1688) != *(arg1 + 0x1368) ? 1 : 0)
float v8 = GameGetTimeSimulation()

if (x20 == 1)
    int64_t x8_2 = *(arg1 + 0x1688)
    int64_t x9_2 = *(arg1 + 0x1368)
    int32_t x10_1 = *(arg1 + 0x1358)
    *(arg1 + 0x1368) = x8_2
    int64_t x9_3 = sx.q(*(arg1 + 0x1360))
    *(arg1 + 0x1360) = x10_1
    *(arg1 + 0x1358) = x9_3.d
    *(arg1 + 0x1370) = arg2
    UI2ItemReset(arg1, arg1 + x9_3 * 0x88 + 0x1128, arg1 + 0x1438, (x8_2 != x9_2 ? 1 : 0).b)
    int64_t* x23_1 = *(arg1 + 0x1688)
    int64_t* x8_4 = *x23_1
    
    if (x8_4 == 0)
        if (x23_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x23_1, false, true)
        x8_4 = *x23_1
    
    int64_t x25_1 = sx.q(*(arg1 + 0x1358))
    AttribMap* x23_2 = **x8_4 + sx.q(*(arg1 + 0x1690)) * 0x18
    char x0_5 = AttribMapGetBool(*gUI2AttribTable, x23_2, 0x68)
    *(arg1 + 0x167c) = AttribMapGetInt(*gUI2AttribTable, x23_2, 0x66)
    AttribMap* x1_7
    
    if (*(gUI2 + 0x60) == 0)
        x1_7 = nullptr
    else
        char* x0_9 = AttribMapGetString(*gUI2AttribTable, x23_2, 0x67)
        XString::operator=(arg1 + 0x1680)
        char* x2_1
        
        if (zx.d(*x0_9) == 0)
            x2_1 = nullptr
        else
            x2_1 = x0_9
        
        x1_7 = UI2MergeStyle(arg1, arg1 + x25_1 * 0x88 + 0x1128, x2_1, arg3, x23_2, x0_5 & 1, false)
    
    UI2MergeAttribs(arg1, x1_7, arg1 + sx.q(*(arg1 + 0x1358)) * 0x88 + 0x1128, *(arg1 + 0x1688), 
        zx.q(*(arg1 + 0x1690)), arg3)
    int32_t var_68_1 = 0
    int64_t var_70 = 0
    int32_t var_78_1 = 0
    int64_t var_80 = 0
    int32_t var_88_1 = 0
    int64_t var_90 = 0
    int32_t var_98_1 = 0
    int64_t var_a0 = 0
    int32_t var_a8_1 = 0
    int64_t var_b0 = 0
    int32_t var_b8_1 = 0
    int64_t var_c0 = 0
    int32_t var_c8_1 = 0
    int64_t var_d0 = 0
    
    if (*(arg1 + 0x1694) != 0)
        UI2& i = arg1
        
        do
            void* x8_15 = *(i + 0x1620)
            
            if (x8_15 != 0)
                int64_t x9_5 = sx.q(*(x8_15 + 0x10))
                
                if (x9_5.d s>= 1)
                    int64_t x10_2 = 0
                    int64_t x11_1 = 0
                    
                    do
                        int32_t* x13_2 = *(x8_15 + 8)
                        int32_t x15_1 = *(x13_2 + x10_2)
                        uint64_t x14_2 = zx.q(x15_1 - 0x6d)
                        
                        if (x14_2.d u<= 0x21)
                            switch (x14_2)
                                case 0
                                    void* x13_3 = x13_2 + x10_2
                                    int32_t var_b8_2 = *(x13_3 + 0xc)
                                    var_c0:4.d = *(x13_3 + 8)
                                    var_c0.d = *(x13_3 + 4)
                                case 9
                                    void* x13_5 = x13_2 + x10_2
                                    int32_t var_78_2 = *(x13_5 + 0xc)
                                    var_80:4.d = *(x13_5 + 8)
                                    var_80.d = *(x13_5 + 4)
                                case 0x11
                                    void* x13_6 = x13_2 + x10_2
                                    int32_t var_68_2 = *(x13_6 + 0xc)
                                    var_70:4.d = *(x13_6 + 8)
                                    var_70.d = *(x13_6 + 4)
                                case 0x18
                                    void* x13_1 = x13_2 + x10_2
                                    int32_t var_c8_2 = *(x13_1 + 0xc)
                                    var_d0:4.d = *(x13_1 + 8)
                                    var_d0.d = *(x13_1 + 4)
                                case 0x21
                                    void* x13_7 = x13_2 + x10_2
                                    int32_t var_a8_2 = *(x13_7 + 0xc)
                                    var_b0:4.d = *(x13_7 + 8)
                                    var_b0.d = *(x13_7 + 4)
                        else if (x15_1 == 0xde)
                            void* x13_4 = x13_2 + x10_2
                            int32_t var_88_2 = *(x13_4 + 0xc)
                            var_90:4.d = *(x13_4 + 8)
                            var_90.d = *(x13_4 + 4)
                        
                        x11_1 += 1
                        x10_2 += 0x10
                    while (x11_1 s< x9_5)
                
                break
            
            i = *(i + 0x17d0)
        while (i != 0)
    
    v9.d = 0f
    
    if (not(PropDynamicSet<RectF>(arg1 + 0x558, arg1 + 0xd44, &var_80, v8) < 0f))
        v9 = PropDynamicSet<RectF>(arg1 + 0x558, arg1 + 0xd44, &var_80, v8)
    
    if (not(v9.d f> PropDynamicSet<float>(arg1 + 0x2e8, arg1 + 0xe40, &var_90, v8)))
        v9 = PropDynamicSet<float>(arg1 + 0x2e8, arg1 + 0xe40, &var_90, v8)
    
    if (not(v9.d f> PropDynamicSet<float>(arg1 + 0x258, arg1 + 0xc18, &var_70, v8)))
        v9 = PropDynamicSet<float>(arg1 + 0x258, arg1 + 0xc18, &var_70, v8)
    
    if (not(v9.d f> PropDynamicSet<float>(arg1 + 0x18, arg1 + 0xc54, &var_80, v8)))
        v9 = PropDynamicSet<float>(arg1 + 0x18, arg1 + 0xc54, &var_80, v8)
    
    if (not(v9.d f> PropDynamicSet<float>(arg1 + 0xa8, arg1 + 0xc90, &var_80, v8)))
        v9 = PropDynamicSet<float>(arg1 + 0xa8, arg1 + 0xc90, &var_80, v8)
    
    if (not(v9.d f> PropDynamicSet<float>(arg1 + 0x138, arg1 + 0xccc, &var_80, v8)))
        v9 = PropDynamicSet<float>(arg1 + 0x138, arg1 + 0xccc, &var_80, v8)
    
    if (not(v9.d f> PropDynamicSet<float>(arg1 + 0x1c8, arg1 + 0xd08, &var_80, v8)))
        v9 = PropDynamicSet<float>(arg1 + 0x1c8, arg1 + 0xd08, &var_80, v8)
    
    if (not(v9.d f> PropDynamicSet<Vec2>(arg1 + 0x498, arg1 + 0xef4, &var_80, v8)))
        v9 = PropDynamicSet<Vec2>(arg1 + 0x498, arg1 + 0xef4, &var_80, v8)
    
    if (not(v9.d f> PropDynamicSet<float>(arg1 + 0x378, arg1 + 0xdc8, &var_c0, v8)))
        v9 = PropDynamicSet<float>(arg1 + 0x378, arg1 + 0xdc8, &var_c0, v8)
    
    if (not(v9.d f> PropDynamicSet<float>(arg1 + 0x408, arg1 + 0xe04, &var_c0, v8)))
        v9 = PropDynamicSet<float>(arg1 + 0x408, arg1 + 0xe04, &var_c0, v8)
    
    if (not(v9.d f> PropDynamicSet<ColorRgbaI>(arg1 + 0x9d8, arg1 + 0xf48, &var_a0, v8)))
        v9 = PropDynamicSet<ColorRgbaI>(arg1 + 0x9d8, arg1 + 0xf48, &var_a0, v8)
    
    if (not(v9.d f> PropDynamicSet<ColorRgbaI>(arg1 + 0xa68, arg1 + 0xf84, &var_a0, v8)))
        v9 = PropDynamicSet<ColorRgbaI>(arg1 + 0xa68, arg1 + 0xf84, &var_a0, v8)
    
    if (not(v9.d f> PropDynamicSet<ColorRgbaI>(arg1 + 0x678, arg1 + 0xfc0, &var_b0, v8)))
        v9 = PropDynamicSet<ColorRgbaI>(arg1 + 0x678, arg1 + 0xfc0, &var_b0, v8)
    
    if (zx.d(*(arg1 + 0x1480)) != 0)
        if (not(v9.d f> PropDynamicSet<ColorRgbaI>(arg1 + 0x708, arg1 + 0xffc, &var_b0, v8)))
            v9 = PropDynamicSet<ColorRgbaI>(arg1 + 0x708, arg1 + 0xffc, &var_b0, v8)
        
        if (not(v9.d f> PropDynamicSet<ColorRgbaI>(arg1 + 0x798, arg1 + 0x1038, &var_b0, v8)))
            v9 = PropDynamicSet<ColorRgbaI>(arg1 + 0x798, arg1 + 0x1038, &var_b0, v8)
        
        if (not(v9.d f> PropDynamicSet<ColorRgbaI>(arg1 + 0x828, arg1 + 0x1074, &var_b0, v8)))
            v9 = PropDynamicSet<ColorRgbaI>(arg1 + 0x828, arg1 + 0x1074, &var_b0, v8)
        
        if (not(v9.d f> PropDynamicSet<ColorRgbaI>(arg1 + 0x8b8, arg1 + 0x10b0, &var_b0, v8)))
            v9 = PropDynamicSet<ColorRgbaI>(arg1 + 0x8b8, arg1 + 0x10b0, &var_b0, v8)
    
    if (not(v9.d f> PropDynamicSet<ColorRgbaI>(arg1 + 0x948, arg1 + 0x10ec, &var_b0, v8)))
        v9 = PropDynamicSet<ColorRgbaI>(arg1 + 0x948, arg1 + 0x10ec, &var_b0, v8)
    
    if (not(v9.d f> PropDynamicSet<int32_t>(arg1 + 0xaf8, arg1 + 0xe7c, &var_d0, v8)))
        v9 = PropDynamicSet<int32_t>(arg1 + 0xaf8, arg1 + 0xe7c, &var_d0, v8)
    
    int128_t v0_79
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    v0_79, v1_1, v2_1, v3_1 = PropDynamicSet<int32_t>(arg1 + 0xb88, arg1 + 0xeb8, &var_d0, v8)
    
    if (not(v9.d f> v0_79.d))
        v0_79, v1_1, v2_1, v3_1 = PropDynamicSet<int32_t>(arg1 + 0xb88, arg1 + 0xeb8, &var_d0, v8)
        v9 = v0_79.q
    
    *(arg1 + 0x1350) = v8
    
    if (zx.d(*(arg1 + 0x14f8)) != 0)
        v0_79, v1_1, v2_1, v3_1 = GameGetTimeSimulation()
        *(arg1 + 0x1348) = v0_79.d
    
    UI2& i_1 = arg1
    void* x9_6
    
    do
        x9_6 = *(i_1 + 0x1620)
        
        if (x9_6 != 0)
            break
        
        i_1 = *(i_1 + 0x17d0)
    while (i_1 != 0)
    
    char x8_19 = *(gUI2Editor + 0x88068) | *(gUI2Editor + 0x7054) | *(gUI2Editor + 0x88069)
        | *(gUI2Editor + 0x8806a) | *(gUI2Editor + 0x8806b)
    v0_79.d = 0f
    
    if (x9_6 != 0 && zx.d(x8_19) == 0)
        uint64_t i_4 = zx.q(*(x9_6 + 0x10))
        
        if (i_4.d s>= 1)
            v0_79.d = 0f
            void* x9_8 = *(x9_6 + 8) + 8
            uint64_t i_2
            
            do
                v2_1.d = *(x9_8 - 4)
                v1_1.d = *x9_8
                x9_8 += 0x10
                v1_1.d = v1_1.d f+ v2_1.d
                
                if (v1_1.d f> v0_79.d)
                    v0_79.d = v1_1.d
                else
                    v0_79.d = v0_79.d
                
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
    
    if (v9.d f<= v0_79.d)
        UI2& i_3 = arg1
        
        do
            void* x9_9 = *(i_3 + 0x1620)
            
            if (x9_9 != 0)
                v0_79.d = 0f
                
                if (zx.d(x8_19) != 0)
                    goto label_1019164
                
                uint64_t j_1 = zx.q(*(x9_9 + 0x10))
                
                if (j_1.d s< 1)
                    goto label_1019164
                
                v9.d = 0f
                void* x9_18 = *(x9_9 + 8) + 8
                uint64_t j
                
                do
                    v1_1.d = *(x9_18 - 4)
                    v0_79.d = *x9_18
                    x9_18 += 0x10
                    v0_79.d = v0_79.d f+ v1_1.d
                    
                    if (v0_79.d f> v9.d)
                        v9.d = v0_79.d
                    else
                        v9.d = v9.d
                    
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                goto label_1019128
            
            i_3 = *(i_3 + 0x17d0)
        while (i_3 != 0)
        
        v0_79.d = 0f
    else
    label_1019128:
        v0_79.d = 0f
        
        if (not(v9.d f== 0f))
            v0_79.d = *(arg1 + 0x1350)
            v0_79.d = v9.d f+ v0_79.d
    
label_1019164:
    int64_t x8_20 = sx.q(*(arg1 + 0x1358))
    *(arg1 + 0x134c) = v0_79.d
    int128_t* x8_21 = arg1 + 0x1128 + x8_20 * 0x88
    v0_79 = x8_21[7]
    int64_t x12_2 = x8_21[8].q
    v2_1 = x8_21[5]
    int128_t* x9_10 = arg1 + 0x1128 + sx.q(*(arg1 + 0x1354)) * 0x88
    x9_10[6] = x8_21[6]
    x9_10[7] = v0_79
    x9_10[8].q = x12_2
    x9_10[5] = v2_1
    v0_79 = x8_21[4]
    v2_1 = x8_21[1]
    v3_1 = x8_21[2]
    x9_10[3] = x8_21[3]
    x9_10[4] = v0_79
    x9_10[1] = v2_1
    x9_10[2] = v3_1
    *x9_10 = *x8_21
    XAsset* x0_54 = *(arg1 + 0x1618)
    
    if (x0_54 != *(arg1 + 0x1380))
        *(arg1 + 0x1380) = x0_54
        
        if (x0_54 != 0 && *(arg1 + 0x167c) == 5)
            SoundPlay(x0_54)
    
    char* x8_24 = *(arg1 + 0x14d8)
    int32_t x24_3
    
    if (x8_24 == 0)
        x24_3 = 1
    else
        x24_3 = zx.d(*x8_24) == 0 ? 1 : 0
    
    uint32_t x26_2 = zx.d(*XString::operator char const*())
    int32_t x0_60
    
    if (((x24_3 & 1) != 0 || x26_2 != 0) && ((x24_3 | (x26_2 == 0 ? 1 : 0)) & 1) == 0)
        x0_60 = strcmp(*(arg1 + 0x14d8), XString::operator char const*())
    
    int32_t x25_3
    
    if (((x24_3 & 1) != 0 || x26_2 != 0)
            && (((x24_3 | (x26_2 == 0 ? 1 : 0)) & 1) != 0 || x0_60 == 0))
        x25_3 = (*(arg1 + 0x1398) != *(arg1 + 0x14c0) ? 1 : 0) & (x24_3 ^ 1)
        
        if (x26_2 == 0 || x24_3 != 1)
            goto label_10192a0
        
        goto label_1019278
    
    x25_3 = 1
    int32_t x24_4
    int32_t x26_3
    char* x8_31
    
    if (x26_2 != 0 && x24_3 == 1)
    label_1019278:
        x26_3 = 1
        x8_31 = *(arg1 + 0x14c8)
        
        if (x8_31 == 0)
            x24_4 = 1
        else
            x24_4 = zx.d(*x8_31) == 0 ? 1 : 0
    else
    label_10192a0:
        x26_3 = *(arg1 + 0x1398) != *(arg1 + 0x14c0) ? 1 : 0
        x8_31 = *(arg1 + 0x14c8)
        
        if (x8_31 != 0)
            x24_4 = zx.d(*x8_31) == 0 ? 1 : 0
        else
            x24_4 = 1
    uint32_t x9_14 = zx.d(*XString::operator char const*())
    int32_t x8_34 = x24_4 ^ 1
    uint32_t x0_63
    int32_t x24_5
    
    if (x9_14 == 0 || x8_34 != 0)
        int32_t x9_15 = x9_14 == 0 ? 1 : 0
        
        if (((x24_4 | x9_15) & 1) == 0)
            x24_5 = strcmp(*(arg1 + 0x14c8), XString::operator char const*()) != 0 ? 1 : 0
            x0_63 = *(arg1 + 0x13c0)
            
            if (x0_63 != 0)
                goto label_1019328
        else
            x24_5 = x9_15 & x8_34
            x0_63 = *(arg1 + 0x13c0)
            
            if (x0_63 != 0)
                goto label_1019328
    else
        x24_5 = 1
        x0_63 = *(arg1 + 0x13c0)
        
        if (x0_63 != 0)
        label_1019328:
            
            if (x26_3 != 0)
                SpineStop(x0_63)
                
                if (x25_3 != 0)
                    goto label_10193e0
                
                goto label_1019334
            
            if (x25_3 == 0)
            label_1019334:
                
                if (x24_5 != 0)
                    SpineSetSkin(*(arg1 + 0x13c0), *(arg1 + 0x14c8))
            else
            label_10193e0:
                SpinePlay(*(arg1 + 0x13c0), *(arg1 + 0x14d8), zx.q(*(arg1 + 0x14c0)))
                
                if (x24_5 != 0)
                    SpineSetSkin(*(arg1 + 0x13c0), *(arg1 + 0x14c8))
            
            *(arg1 + 0x14d8)
            XString::operator=(arg1 + 0x1388)
            *(arg1 + 0x14c8)
            *(arg1 + 0x1398) = *(arg1 + 0x14c0)
            XString::operator=(arg1 + 0x1390)

float v0 = *(arg1 + 0x134c)

if (not(v0 == 0f))
    *arg5 = true
    v0 = *(arg1 + 0x134c)

if (not(v8 < v0))
    *(arg1 + 0x134c) = 0

*(arg1 + 0x1694) += 1
return zx.q(x20)
