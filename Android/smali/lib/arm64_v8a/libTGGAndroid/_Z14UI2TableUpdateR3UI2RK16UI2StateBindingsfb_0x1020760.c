// 函数: _Z14UI2TableUpdateR3UI2RK16UI2StateBindingsfb
// 地址: 0x1020760
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x14fc)
int32_t x10 = *(arg1 + 0x1538)
int32_t x12 = *(arg1 + 0x1504)
int32_t x9_1 = *(arg1 + 0x1500) * x8
bool z

if (x9_1 s>= x10)
    z = x10 == 0xffffffff
else
    z = true

int32_t x9_2

x9_2 = z ? x9_1 : x10

int32_t x8_2

if (x12 == 0)
    x8_2 = 0
else
    x8_2 = x12 - x8

int32_t i_1 = x9_2 + x8_2
UI2& x19 = arg1
void* __offset(UI2, 0x167a) x8_3 = arg1 + 0x167a
int32_t var_1b4 = arg4.d
UI2StateBindings const& var_1c0 = arg2

if (i_1 == *(arg1 + 0x1970) && (var_1b4 & 1) == 0 && *(x19 + 0x1378) == 0 && zx.d(*x8_3) == 0)
    return 

int32_t x20_1 = 0
int32_t entry_x3
int32_t i

if (i_1 == 1)
    i = i_1
else
    i = i_1
    
    if (*(x19 + 0x1528) != 0)
        if (*(x19 + 0x1450) == 0)
            x20_1 = 0
            i = i_1
        else
            arg1, arg2, arg4, entry_x3 = UI2TableGetRangeInt(x19, i_1)
            x20_1 = arg1.d
            i = (arg1 u>> 0x20).d
            
            if (x20_1 == 0 && i_1 s<= i)
                i = i_1

int32_t var_1a0[0x4]

if (i s> x20_1)
    int64_t x24_1 = sx.q(x20_1)
    int32_t var_1a4_1 = 0
    
    do
        int32_t i_2 = *(x19 + 0x1970)
        
        if ((((i_1 != i_2 ? 1 : 0) | not.d(var_1b4 ^ 1)) & 1) != 0)
        label_10209d4:
            
            if (i_2 != 0x3f)
                goto label_1020a4c
            
            int32_t x23_1 = 0
            int32_t x8_23 = 0x3f
            
            do
                void* x9_11 = x19 + (sx.q(x23_1) << 2)
                int32_t x10_7 = *(*gUI2 + zx.q(*(x9_11 + 0x1870)) * 0x19a8 + 0x1658)
                
                if (x10_7 s< x20_1 || x10_7 s> i)
                    arg1, arg2, arg4, entry_x3 = UI2Free(x9_11 + 0x1870)
                    x23_1 -= 1
                    int64_t x8_25 = sx.q(*(x19 + 0x1970)) - 1
                    *(x19 + 0x1970) = x8_25.d
                    *(x9_11 + 0x1870) = *(x19 + (x8_25 << 2) + 0x1870)
                    x8_23 = *(x19 + 0x1970)
                
                x23_1 += 1
            while (x23_1 s< x8_23)
            
            goto label_1020a4c
        
        int64_t x10_15
        int64_t x28_1
        
        if (i_1 == 0)
        label_1020a4c:
            void* x8_28 = *(x19 + 0x1520)
            
            if (x8_28 == 0)
                UI2* x25_2 = *gUI2 + zx.q(*(x19 + 0x1974)) * 0x19a8
                UI2* x0_7
                int128_t v0_2
                int128_t v1_3
                x0_7, v0_2, v1_3 = UI2GetOrAllocChild(x19, x24_1.d)
                v0_2.q = 0
                v0_2:8.q = 0
                *(x0_7 + 0x17d8) = (x24_1 != 0 ? 1 : 0).b
                *(x0_7 + 0x1374) = 0
                __builtin_memset(x0_7 + 0x16d0, 0, 0xc8)
                int32_t x23_3 = *(x0_7 + 0x1378)
                v1_3 = *(TI + 0x10)
                *(x0_7 + 0x16b0) = *TI
                *(x0_7 + 0x16c0) = v1_3
                *(x0_7 + 0x173c) = 0
                v0_2 = *gRgbaWhite
                *(x0_7 + 0x1724) = 0
                *(x0_7 + 0x1704) = v0_2
                *(x0_7 + 0x1740) = x24_1.d
                arg1, arg2, arg4, entry_x3 = UI2MergeRec(x0_7, x0_7, x25_2, var_1c0, true)
                int64_t x8_35 = sx.q(*(x19 + 0x1970))
                uint64_t x10_13
                
                if (x8_35.d == 0)
                label_1020c90:
                    x10_13 = 0
                    x28_1 = *gUI2
                else
                    int64_t j_10 = x8_35 & 0xffffffff
                    
                    if (x24_1 s< x8_35)
                        x10_13 = zx.q(*(x19 + (x24_1 << 2) + 0x1870))
                        x28_1 = *gUI2
                    
                    if (x24_1 s>= x8_35
                            || *(x28_1 + (x10_13 & 0xffff) * 0x19a8 + 0x1658) != x24_1.d)
                        if (j_10.d s< 1)
                            goto label_1020c90
                        
                        x28_1 = *gUI2
                        void* __offset(UI2, 0x1870) x10_14 = x19 + 0x1870
                        int64_t j_7 = j_10
                        int64_t j
                        
                        do
                            int32_t x12_2 = *x10_14
                            
                            if (*(x28_1 + zx.q(x12_2.w) * 0x19a8 + 0x1658) == x24_1.d)
                                x10_13 = zx.q(x12_2)
                                goto label_1020c48
                            
                            j = j_7
                            j_7 -= 1
                            x10_14 += 4
                        while (j != 1)
                        goto label_1020c4c
                    
                label_1020c48:
                    
                    if (x10_13.d == 0)
                    label_1020c4c:
                        
                        if (j_10.d s< 1)
                            goto label_1020c90
                        
                        x10_13 = zx.q(*(x19 + 0x1870))
                        
                        if (*(x28_1 + x10_13 * 0x19a8 + 0x1658) != 0)
                            void* __offset(UI2, 0x1874) x9_16 = x19 + 0x1874
                            int64_t x8_37 = (x8_35 & 0xffffffff) - 1
                            
                            do
                                if (x8_37 == 0)
                                    goto label_1020c90
                                
                                x10_13 = zx.q(*x9_16)
                                x9_16 += 4
                                x8_37 -= 1
                            while (*(x28_1 + x10_13 * 0x19a8 + 0x1658) != 0)
                        
                        x28_1 = *gUI2
                
                *(x28_1 + mulu.dp.d(x10_13.d & 0xffff, 0x19a8) + 0x1378) = x23_3
                var_1a4_1 = 1
                goto label_1020cac
            
            if (*(x8_28 + 8) == 0x22)
                UI2* x0_4 = UI2GetOrAllocChild(x19, x24_1.d)
                *(x0_4 + 0x17d8) = 1
                *(x0_4 + 0x1740) = x24_1.d
                *(x0_4 + 0x1790) = *(x8_3 + 0x116)
                int32_t x23_2 = *(x0_4 + 0x1378)
                var_1a0[0] = 0
                arg1, arg2, arg4, entry_x3 = UI2MergeRecFromSublayout(*(x8_3 + 0x116), x0_4, 
                    *(x19 + 0x1520), var_1c0, &var_1a0, 0)
                int64_t x8_31 = sx.q(*(x19 + 0x1970))
                uint64_t x10_10
                
                if (x8_31.d == 0)
                label_1020d04:
                    x10_10 = 0
                    x28_1 = *gUI2
                else
                    int64_t j_9 = x8_31 & 0xffffffff
                    
                    if (x24_1 s< x8_31)
                        x10_10 = zx.q(*(x19 + (x24_1 << 2) + 0x1870))
                        x28_1 = *gUI2
                    
                    if (x24_1 s>= x8_31
                            || *(x28_1 + (x10_10 & 0xffff) * 0x19a8 + 0x1658) != x24_1.d)
                        if (j_9.d s< 1)
                            goto label_1020d04
                        
                        x28_1 = *gUI2
                        void* __offset(UI2, 0x1870) x10_11 = x19 + 0x1870
                        int64_t j_6 = j_9
                        int64_t j_1
                        
                        do
                            int32_t x12_1 = *x10_11
                            
                            if (*(x28_1 + zx.q(x12_1.w) * 0x19a8 + 0x1658) == x24_1.d)
                                x10_10 = zx.q(x12_1)
                                goto label_1020cbc
                            
                            j_1 = j_6
                            j_6 -= 1
                            x10_11 += 4
                        while (j_1 != 1)
                        goto label_1020cc0
                    
                label_1020cbc:
                    
                    if (x10_10.d == 0)
                    label_1020cc0:
                        
                        if (j_9.d s< 1)
                            goto label_1020d04
                        
                        x10_10 = zx.q(*(x19 + 0x1870))
                        
                        if (*(x28_1 + x10_10 * 0x19a8 + 0x1658) != 0)
                            void* __offset(UI2, 0x1874) x9_19 = x19 + 0x1874
                            int64_t x8_41 = (x8_31 & 0xffffffff) - 1
                            
                            do
                                if (x8_41 == 0)
                                    goto label_1020d04
                                
                                x10_10 = zx.q(*x9_19)
                                x9_19 += 4
                                x8_41 -= 1
                            while (*(x28_1 + x10_10 * 0x19a8 + 0x1658) != 0)
                        
                        x28_1 = *gUI2
                
                *(x28_1 + mulu.dp.d(x10_10.d & 0xffff, 0x19a8) + 0x1378) = x23_2
                x10_15 = sx.q(*(x19 + 0x1970))
                
                if (x10_15.d == 0)
                    goto label_1020dcc
                
                goto label_1020d24
        else
            int32_t x8_19
            
            if (x24_1 s< sx.q(i_1))
                x8_19 = *(x19 + (x24_1 << 2) + 0x1870)
                x28_1 = *gUI2
            
            if (x24_1 s>= sx.q(i_1) || *(x28_1 + zx.q(x8_19.w) * 0x19a8 + 0x1658) != x24_1.d)
                if (i_1 s< 1)
                    goto label_1020a4c
                
                x28_1 = *gUI2
                void* __offset(UI2, 0x1870) x8_21 = x19 + 0x1870
                uint64_t j_4 = zx.q(i_1)
                uint64_t j_2
                
                do
                    int32_t x10_4 = *x8_21
                    
                    if (*(x28_1 + zx.q(x10_4.w) * 0x19a8 + 0x1658) == x24_1.d)
                        x8_19 = x10_4
                        goto label_10209cc
                    
                    j_2 = j_4
                    j_4 -= 1
                    x8_21 += 4
                while (j_2 != 1)
                i_2 = i_1
                goto label_10209d4
            
        label_10209cc:
            i_2 = i_1
            
            if (x8_19 == 0)
                goto label_10209d4
            
        label_1020cac:
            x10_15 = sx.q(*(x19 + 0x1970))
            uint64_t x9_21
            
            if (x10_15.d != 0)
            label_1020d24:
                int64_t j_8 = x10_15 & 0xffffffff
                
                if (x24_1 s< x10_15)
                    x9_21 = zx.q(*(x19 + (x24_1 << 2) + 0x1870))
                
                if (x24_1 s>= x10_15 || *(x28_1 + (x9_21 & 0xffff) * 0x19a8 + 0x1658) != x24_1.d)
                    if (x10_15.d s< 1)
                        goto label_1020dcc
                    
                    void* __offset(UI2, 0x1870) x9_22 = x19 + 0x1870
                    int64_t j_5 = j_8
                    int64_t j_3
                    
                    do
                        int32_t x11_19 = *x9_22
                        
                        if (*(x28_1 + zx.q(x11_19.w) * 0x19a8 + 0x1658) == x24_1.d)
                            x9_21 = zx.q(x11_19)
                            goto label_1020d84
                        
                        j_3 = j_5
                        j_5 -= 1
                        x9_22 += 4
                    while (j_3 != 1)
                    goto label_1020d88
                
            label_1020d84:
                
                if (x9_21.d == 0)
                label_1020d88:
                    
                    if (j_8.d s< 1)
                        goto label_1020dcc
                    
                    x9_21 = zx.q(*(x19 + 0x1870))
                    
                    if (*(x28_1 + x9_21 * 0x19a8 + 0x1658) != 0)
                        void* __offset(UI2, 0x1874) x9_23 = x19 + 0x1874
                        int64_t x8_44 = j_8 - 1
                        uint64_t x10_18
                        
                        do
                            if (x8_44 == 0)
                                goto label_1020dcc
                            
                            x10_18 = zx.q(*x9_23)
                            x9_23 += 4
                            x8_44 -= 1
                        while (*(x28_1 + x10_18 * 0x19a8 + 0x1658) != 0)
                        
                        x9_21 = zx.q(x10_18.d)
            else
            label_1020dcc:
                x9_21 = 0
            
            uint64_t x23_4 = zx.q(x9_21.d) & 0xffff
            
            if (((var_1a4_1 | var_1b4) & 1) != 0 || *(x28_1 + x23_4 * 0x19a8 + 0x1378) != 0)
                UI2* x25_3 = x28_1 + mulu.dp.d(x23_4.d, 0x19a8)
                int128_t var_190
                int128_t var_b0
                int128_t var_a0
                int64_t var_90
                int64_t var_88
                int64_t var_80
                int64_t var_78
                int128_t v0
                int128_t v1_1
                int128_t v2_1
                int128_t v3_1
                int128_t v4_1
                int128_t v5_1
                
                if (zx.d(*x8_3) == 0)
                    void* x8_57
                    
                    if (not(*(x19 + 0x1710) != 0f))
                        x8_57 = x28_1 + x23_4 * 0x19a8
                    
                    int128_t var_110_2
                    
                    if (*(x19 + 0x1710) != 0f || *(x8_57 + 0x1710) != 0f)
                        int32_t x8_59 = *(x28_1 + x23_4 * 0x19a8 + 0x1370)
                        
                        if (x8_59 == 0 || *(x19 + 0x1370) != x8_59)
                            int128_t v0_6
                            int128_t v1_6
                            int128_t v2_3
                            int128_t v3_3
                            int128_t v4_3
                            int128_t v5_3
                            int128_t v6_2
                            int128_t v7_2
                            v0_6, v1_6, v2_3, v3_3, v4_3, v5_3, v6_2, v7_2 =
                                UI2TableTransform(x19, x24_1.d, &var_80, &var_90, false)
                            v6_2.q = var_80
                            v7_2.q = var_78
                            v4_3 = var_b0
                            int128_t var_190_4 = *(x19 + 0x16c0)
                            int128_t var_180_4 = *(x19 + 0x16d0)
                            var_1a0 = *(x19 + 0x16b0)
                            int128_t var_150_4 = *(x19 + 0x1700)
                            int128_t var_140_4 = *(x19 + 0x1710)
                            int128_t var_170_4 = *(x19 + 0x16e0)
                            int128_t var_160_4 = *(x19 + 0x16f0)
                            int128_t var_110_3 = *(x19 + 0x1740)
                            int128_t var_100_4 = *(x19 + 0x1750)
                            int128_t var_130_4 = *(x19 + 0x1720)
                            int128_t var_120_4 = *(x19 + 0x1730)
                            v0_6 = *(x19 + 0x1760)
                            v1_6 = *(x19 + 0x1770)
                            v2_3 = *(x19 + 0x1780)
                            int64_t x8_64 = *(x19 + 0x1790)
                            var_1a0 = v4_3
                            var_190 = var_a0
                            int128_t var_f0_4 = v0_6
                            int128_t var_e0_4 = v1_6
                            int128_t var_d0_4 = v2_3
                            v2_3.q = var_90
                            v3_3.q = var_88
                            int64_t var_c0_4 = x8_64
                            var_110_3.d = x24_1.d
                            var_110_3:4.q = v6_2.q
                            var_110_3:0xc.q = vsub_f32(v7_2, v6_2)
                            var_100_4:4.q = v2_3.q
                            var_100_4:0xc.q = vsub_f32(v3_3, v2_3)
                            arg1, arg2, arg4, entry_x3 =
                                UI2Update(x25_3, x19, &var_1a0, false, arg3)
                        else
                            int128_t v0_3
                            int128_t v1_4
                            int128_t v2_2
                            int128_t v3_2
                            int128_t v4_2
                            int128_t v5_2
                            int128_t v6_1
                            int128_t v7_1
                            v0_3, v1_4, v2_2, v3_2, v4_2, v5_2, v6_1, v7_1 =
                                UI2TableTransform(x19, x24_1.d, &var_80, &var_90, false)
                            v6_1.q = var_80
                            v7_1.q = var_78
                            v4_2 = var_b0
                            int128_t var_190_2 = *(x19 + 0x16c0)
                            int128_t var_180_2 = *(x19 + 0x16d0)
                            var_1a0 = *(x19 + 0x16b0)
                            int128_t var_150_2 = *(x19 + 0x1700)
                            int128_t var_140_2 = *(x19 + 0x1710)
                            int128_t var_170_2 = *(x19 + 0x16e0)
                            int128_t var_160_2 = *(x19 + 0x16f0)
                            var_110_2 = *(x19 + 0x1740)
                            int128_t var_100_2 = *(x19 + 0x1750)
                            int128_t var_130_2 = *(x19 + 0x1720)
                            int128_t var_120_2 = *(x19 + 0x1730)
                            v0_3 = *(x19 + 0x1760)
                            v1_4 = *(x19 + 0x1770)
                            v2_2 = *(x19 + 0x1780)
                            int64_t x8_60 = *(x19 + 0x1790)
                            var_1a0 = v4_2
                            var_190 = var_a0
                            int128_t var_f0_2 = v0_3
                            int128_t var_e0_2 = v1_4
                            int128_t var_d0_2 = v2_2
                            v2_2.q = var_90
                            v3_2.q = var_88
                            int64_t var_c0_2 = x8_60
                            var_110_2:4.q = v6_1.q
                            var_110_2:0xc.q = vsub_f32(v7_1, v6_1)
                            var_100_2:4.q = v2_2.q
                            var_100_2:0xc.q = vsub_f32(v3_2, v2_2)
                            var_110_2.d = x24_1.d
                            arg1, arg2, arg4, entry_x3 =
                                UI2Update(x25_3, x19, &var_1a0, false, arg3)
                    else if (*(x28_1 + x23_4 * 0x19a8 + 0x1378) s< 1)
                        int128_t v0_8
                        int128_t v1_8
                        arg1, arg2, arg4, entry_x3, v0_8, v1_8 =
                            UI2TableTransform(x19, x24_1.d, &var_b0, &var_80, false)
                        void* x9_30 = x28_1 + x23_4 * 0x19a8
                        *(x8_57 + 0x16b0) = var_1a0
                        *(x8_57 + 0x16c0) = var_190
                        *(x9_30 + 0x1724) = *(x19 + 0x1724)
                        v0_8.q = var_b0.q
                        *(x9_30 + 0x1744) = v0_8.q
                        v1_8.q = var_b0:8.q
                        *(x9_30 + 0x174c) = vsub_f32(v1_8, v0_8).q
                        int128_t v0_9
                        v0_9.q = var_80
                        *(x9_30 + 0x1754) = v0_9.q
                        v1_8.q = var_78
                        *(x9_30 + 0x175c) = vsub_f32(v1_8, v0_9).q
                    else
                        v0, v1_1, v2_1, v3_1, v4_1, v5_1 =
                            UI2TableTransform(x19, x24_1.d, &var_80, &var_90, false)
                    label_1020fdc:
                        v4_1 = var_b0
                        int128_t var_190_3 = *(x19 + 0x16c0)
                        int128_t var_180_3 = *(x19 + 0x16d0)
                        var_1a0 = *(x19 + 0x16b0)
                        int128_t var_150_3 = *(x19 + 0x1700)
                        int128_t var_140_3 = *(x19 + 0x1710)
                        int128_t var_170_3 = *(x19 + 0x16e0)
                        int128_t var_160_3 = *(x19 + 0x16f0)
                        var_110_2 = *(x19 + 0x1740)
                        int128_t var_100_3 = *(x19 + 0x1750)
                        int128_t var_130_3 = *(x19 + 0x1720)
                        int128_t var_120_3 = *(x19 + 0x1730)
                        v0 = *(x19 + 0x1760)
                        v1_1 = *(x19 + 0x1770)
                        int64_t x8_63 = *(x19 + 0x1790)
                        v2_1 = *(x19 + 0x1780)
                        var_1a0 = v4_1
                        var_190 = var_a0
                        int128_t var_f0_3 = v0
                        int64_t var_c0_3 = x8_63
                        int128_t var_e0_3 = v1_1
                        int128_t var_d0_3 = v2_1
                        var_110_2.d = x24_1.d
                        arg1, arg2, arg4, entry_x3 = UI2Update(x25_3, x19, &var_1a0, false, arg3)
                else
                    arg1, arg2, arg4, entry_x3, v0, v1_1, v2_1, v3_1, v4_1, v5_1 =
                        UI2TableTransform(x19, x24_1.d, &var_80, &var_90, false)
                    
                    if (*(x28_1 + x23_4 * 0x19a8 + 0x1374) == 0)
                        v4_1 = var_b0
                        int128_t var_190_1 = *(x19 + 0x16c0)
                        int128_t var_180_1 = *(x19 + 0x16d0)
                        var_1a0 = *(x19 + 0x16b0)
                        int128_t var_150_1 = *(x19 + 0x1700)
                        int128_t var_140_1 = *(x19 + 0x1710)
                        int128_t var_170_1 = *(x19 + 0x16e0)
                        int128_t var_160_1 = *(x19 + 0x16f0)
                        int128_t var_110_1 = *(x19 + 0x1740)
                        int128_t var_100_1 = *(x19 + 0x1750)
                        int128_t var_130_1 = *(x19 + 0x1720)
                        int128_t var_120_1 = *(x19 + 0x1730)
                        v0 = *(x19 + 0x1760)
                        v1_1 = *(x19 + 0x1770)
                        int64_t x8_13 = *(x19 + 0x1790)
                        v2_1 = *(x19 + 0x1780)
                        var_1a0 = v4_1
                        var_190 = var_a0
                        int128_t var_f0_1 = v0
                        int64_t var_c0_1 = x8_13
                        int128_t var_e0_1 = v1_1
                        int128_t var_d0_1 = v2_1
                        var_110_1.d = x24_1.d
                        int128_t v1_2
                        arg1, arg2, arg4, entry_x3, v1_2 =
                            UI2Update(x25_3, x19, &var_1a0, false, arg3)
                        v1_2 = var_b0
                        void* x8_14 = x28_1 + x23_4 * 0x19a8
                        *(x8_14 + 0x16c0) = var_a0.d.o
                        *(x8_14 + 0x16b0) = v1_2
                    else
                        int32_t x8_53 = *(x19 + 0x1370)
                        int32_t x9_25 = *(x28_1 + x23_4 * 0x19a8 + 0x1370)
                        void* x8_56
                        
                        if (*(x19 + 0x1520) != 0)
                            if (x8_53 != x9_25 || *(x28_1 + x23_4 * 0x19a8 + 0x1378) != 0)
                                goto label_1020fdc
                            
                            v1_1 = *(x19 + 0x16c0)
                            v2_1 = *(x19 + 0x16b0)
                            x8_56 = x28_1 + x23_4 * 0x19a8
                            *(x8_56 + 0x16d0) = *(x19 + 0x16d0)
                            *(x8_56 + 0x16c0) = v1_1
                            *(x8_56 + 0x16b0) = v2_1
                            v1_1 = *(x19 + 0x1700)
                            v3_1 = *(x19 + 0x16e0)
                            v2_1 = *(x19 + 0x16f0)
                            *(x8_56 + 0x1710) = *(x19 + 0x1710)
                            *(x8_56 + 0x1700) = v1_1
                            *(x8_56 + 0x16f0) = v2_1
                            *(x8_56 + 0x16e0) = v3_1
                            v1_1 = *(x19 + 0x1740)
                            v3_1 = *(x19 + 0x1720)
                            v2_1 = *(x19 + 0x1730)
                            *(x8_56 + 0x1750) = *(x19 + 0x1750)
                            *(x8_56 + 0x1740) = v1_1
                            *(x8_56 + 0x1730) = v2_1
                            *(x8_56 + 0x1720) = v3_1
                            v1_1 = *(x19 + 0x1770)
                            v0 = *(x19 + 0x1780)
                            v2_1 = *(x19 + 0x1760)
                            *(x8_56 + 0x1790) = *(x19 + 0x1790)
                            *(x8_56 + 0x1780) = v0
                            *(x8_56 + 0x1770) = v1_1
                            *(x8_56 + 0x1760) = v2_1
                            v1_1 = var_b0
                            v0 = var_a0
                            goto label_1021164
                        
                        if (x8_53 != x9_25 || *(x28_1 + x23_4 * 0x19a8 + 0x1378) != 0)
                            goto label_1020fdc
                        
                        v1_1 = var_b0
                        v0 = var_a0
                        x8_56 = x28_1 + x23_4 * 0x19a8
                    label_1021164:
                        *(x8_56 + 0x16c0) = v0
                        *(x8_56 + 0x16b0) = v1_1
                        *(x8_56 + 0x1724) = *(x19 + 0x1724)
                        v0.q = var_80
                        *(x8_56 + 0x1744) = v0.q
                        v1_1.q = var_78
                        *(x8_56 + 0x174c) = vsub_f32(v1_1, v0).q
                        int128_t v0_10
                        v0_10.q = var_90
                        *(x8_56 + 0x1754) = v0_10.q
                        v1_1.q = var_88
                        *(x8_56 + 0x175c) = vsub_f32(v1_1, v0_10).q
            else
                var_1a4_1 = 0
        x24_1 += 1
    while (i != x24_1.d)

int32_t x8_70 = *(x19 + 0x1970)

if (x8_70 s> i - x20_1 && x8_70 != 0)
    int32_t x9_33 = 0
    uint64_t x22_1 = 0
    
    do
        void* x11_22 = x19 + (x22_1 << 0x20 s>> 0x1e)
        int32_t x10_22 = *(x11_22 + 0x1870)
        int32_t x12_8 = *(*gUI2 + zx.q(x10_22.w) * 0x19a8 + 0x1658)
        
        if (x12_8 s< x20_1 || x12_8 s>= i)
            var_1a0[0] = x10_22
            memmove(x11_22 + 0x1870, x11_22 + 0x1874, zx.q(x8_70 + not.d(x9_33)) << 0x20 s>> 0x1e)
            x22_1 = zx.q(x22_1.d - 1)
            *(x19 + 0x1970) -= 1
            arg1, arg2, arg4, entry_x3 = UI2Free(&var_1a0)
            x8_70 = *(x19 + 0x1970)
        
        x9_33 = x22_1.d + 1
        x22_1 = zx.q(x9_33)
    while (x8_70 != x9_33)

if (*(x19 + 0x1528) != 0)
    UI2TableUpdateScrollbar(x19, arg2, arg4, entry_x3, arg3)
