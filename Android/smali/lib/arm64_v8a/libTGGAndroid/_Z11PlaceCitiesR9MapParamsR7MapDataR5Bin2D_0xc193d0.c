// 函数: _Z11PlaceCitiesR9MapParamsR7MapDataR5Bin2D
// 地址: 0xc193d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = PlaceCity(arg2 + 0x10, arg2 + 0x175fd0, arg2 + 0x16ffa0, 0)
*(arg2 + 0x16ffa0) = x0_1
int64_t v8
v8.d = float.s(0x3d99999a)
int64_t var_98 = *(arg2 + 0x10 + muls.dp.d(x0_1, 0xc))
Bin2DAdd(arg3, &var_98, 2, v8.d)
int32_t x0_4 = PlaceCity(arg2 + 0x10, arg2 + 0x175fd0, arg2 + 0x16ffa0, 1)
*(arg2 + 0x16ffa4) = x0_4
var_98 = *(arg2 + 0x10 + muls.dp.d(x0_4, 0xc))
Bin2DAdd(arg3, &var_98, 2, v8.d)
int32_t x0_7 = PlaceCity(arg2 + 0x10, arg2 + 0x175fd0, arg2 + 0x16ffa0, 2)
*(arg2 + 0x16ffa8) = x0_7
var_98 = *(arg2 + 0x10 + muls.dp.d(x0_7, 0xc))
Bin2DAdd(arg3, &var_98, 2, v8.d)
int32_t x0_10 = PlaceCity(arg2 + 0x10, arg2 + 0x175fd0, arg2 + 0x16ffa0, 3)
*(arg2 + 0x16ffac) = x0_10
var_98 = *(arg2 + 0x10 + muls.dp.d(x0_10, 0xc))
Bin2DAdd(arg3, &var_98, 2, v8.d)
int32_t x0_13 = PlaceCity(arg2 + 0x10, arg2 + 0x175fd0, arg2 + 0x16ffa0, 4)
*(arg2 + 0x16ffb0) = x0_13
var_98 = *(arg2 + 0x10 + muls.dp.d(x0_13, 0xc))
Bin2DAdd(arg3, &var_98, 2, v8.d)
int32_t x0_16 = PlaceCity(arg2 + 0x10, arg2 + 0x175fd0, arg2 + 0x16ffa0, 5)
*(arg2 + 0x16ffb4) = x0_16
var_98 = *(arg2 + 0x10 + muls.dp.d(x0_16, 0xc))
Bin2DAdd(arg3, &var_98, 2, v8.d)
int32_t x0_19 = PlaceCity(arg2 + 0x10, arg2 + 0x175fd0, arg2 + 0x16ffa0, 6)
*(arg2 + 0x16ffb8) = x0_19
var_98 = *(arg2 + 0x10 + muls.dp.d(x0_19, 0xc))
Bin2DAdd(arg3, &var_98, 2, v8.d)
int32_t x0_22 = PlaceCity(arg2 + 0x10, arg2 + 0x175fd0, arg2 + 0x16ffa0, 7)
*(arg2 + 0x16ffbc) = x0_22
var_98 = *(arg2 + 0x10 + muls.dp.d(x0_22, 0xc))
Bin2DAdd(arg3, &var_98, 2, v8.d)
int32_t x0_25 = PlaceCity(arg2 + 0x10, arg2 + 0x175fd0, arg2 + 0x16ffa0, 8)
*(arg2 + 0x16ffc0) = x0_25
var_98 = *(arg2 + 0x10 + muls.dp.d(x0_25, 0xc))
Bin2DAdd(arg3, &var_98, 2, v8.d)
int32_t x0_28 = PlaceCity(arg2 + 0x10, arg2 + 0x175fd0, arg2 + 0x16ffa0, 9)
*(arg2 + 0x16ffc4) = x0_28
var_98 = *(arg2 + 0x10 + muls.dp.d(x0_28, 0xc))
uint128_t v0_20
uint128_t v1
int128_t v2
int128_t v4
int128_t v5
int128_t v6
v0_20, v1, v2, v4, v5, v6 = Bin2DAdd(arg3, &var_98, 2, v8.d)
int64_t i = 0
int32_t x8_10 = 0
int32_t x9 = 0
v0_20.d = float.s(0x4b18967f)
float v3_1

do
    if (i u<= 8)
        void* x11_3 = arg2 + sx.q(*(arg2 + (i << 2) + 0x16ffa0)) * 0xc
        v1.d = *(x11_3 + 0x10)
        v2.q = *(x11_3 + 0x14)
        int64_t j = i
        
        do
            int64_t x12_1 = sx.q(*(arg2 + 0x16ffa4 + (j << 2)))
            j += 1
            void* x12_2 = arg2 + x12_1 * 0xc
            v4.q = *(x12_2 + 0x14)
            v3_1 = v1.d f- *(x12_2 + 0x10)
            int128_t v4_1 = vsub_f32(v2, v4)
            v4 = vmul_f32(v4_1, v4_1, 0)
            v3_1 = v3_1 * v3_1 f+ v4.d
            v4.d = v4:4.d
            v3_1 = v3_1 f+ v4.d
            v3_1 f- v0_20.d
            bool cond:0_1 = v3_1 f< v0_20.d
            bool cond:1_1 = v3_1 f< v0_20.d
            
            if (v3_1 f< v0_20.d)
                v0_20.d = v3_1
            else
                v0_20.d = v0_20.d
            
            if (cond:0_1)
                x9 = i.d
            
            if (cond:1_1)
                x8_10 = j.d
        while (j != 9)
    
    i += 1
while (i != 0xa)

int32_t x9_1 = *(arg2 + 0x16ffa0 + (sx.q(x9) << 2))
int32_t x8_11 = *(arg2 + 0x16ffa0 + (sx.q(x8_10) << 2))
int32_t x10_1 = 2
var_98.d = x9_1
var_98:4.d = x8_11
int32_t x11_4 = *(arg2 + 0x16ffa0)
int32_t var_90

if (x11_4 != x9_1 && x11_4 != x8_11)
    x10_1 = 3
    var_90 = x11_4

int32_t x11_5 = *(arg2 + 0x16ffa4)

if (x11_5 != x9_1 && x11_5 != x8_11)
    *(&var_98 + (zx.q(x10_1) << 2)) = x11_5
    x10_1 += 1

int32_t x11_6 = *(arg2 + 0x16ffa8)

if (x11_6 != x9_1 && x11_6 != x8_11)
    *(&var_98 + (zx.q(x10_1) << 2)) = x11_6
    x10_1 += 1

int32_t x11_7 = *(arg2 + 0x16ffac)

if (x11_7 != x9_1 && x11_7 != x8_11)
    *(&var_98 + (zx.q(x10_1) << 2)) = x11_7
    x10_1 += 1

int32_t x11_8 = *(arg2 + 0x16ffb0)

if (x11_8 != x9_1 && x11_8 != x8_11)
    *(&var_98 + (zx.q(x10_1) << 2)) = x11_8
    x10_1 += 1

int32_t x11_9 = *(arg2 + 0x16ffb4)

if (x11_9 != x9_1 && x11_9 != x8_11)
    *(&var_98 + (zx.q(x10_1) << 2)) = x11_9
    x10_1 += 1

int32_t x11_10 = *(arg2 + 0x16ffb8)

if (x11_10 != x9_1 && x11_10 != x8_11)
    *(&var_98 + (zx.q(x10_1) << 2)) = x11_10
    x10_1 += 1

int32_t x11_11 = *(arg2 + 0x16ffbc)

if (x11_11 != x9_1 && x11_11 != x8_11)
    *(&var_98 + (zx.q(x10_1) << 2)) = x11_11
    x10_1 += 1

int32_t x12_10 = *(arg2 + 0x16ffc0)

if (x12_10 != x9_1 && x12_10 != x8_11)
    *(&var_98 + (zx.q(x10_1) << 2)) = x12_10
    x10_1 += 1

int32_t x12_11 = *(arg2 + 0x16ffc4)

if (x12_11 != x9_1 && x12_11 != x8_11)
    *(&var_98 + (zx.q(x10_1) << 2)) = x12_11

int64_t x24_1 = 2

while (true)
    int32_t* x9_6 = arg2 + 0x10 + sx.q(var_98.d) * 0xc
    v0_20.d = *x9_6
    v1.d = x9_6[1]
    v2.d = x9_6[2]
    int32_t* x9_7 = arg2 + 0x10 + sx.q(*(&var_98 + (x24_1 << 2) - 4)) * 0xc
    v0_20:4.d = *x9_7
    v2:4.d = x9_7[2]
    v1:4.d = x9_7[1]
    int32_t x8_14 = 0
    int32_t x9_2 = -1
    v3_1 = float.s(0x4b18967f)
    int64_t x10_5 = x24_1
    
    while (true)
        int32_t x0_31 = x10_5.d
        void* x11_16 = arg2 + sx.q(*(&var_98 + (x10_5 << 2))) * 0xc
        int32_t temp0_1 = *(x11_16 + 0x10)
        v4.d = temp0_1
        v4:4.d = temp0_1
        int32_t temp0_2 = *(x11_16 + 0x14)
        v5.d = temp0_2
        v5:4.d = temp0_2
        int32_t temp0_3 = *(x11_16 + 0x18)
        v6.d = temp0_3
        v6:4.d = temp0_3
        int128_t v4_2 = vsub_f32(v0_20, v4)
        int128_t v5_1 = vsub_f32(v1, v5)
        v6 = vsub_f32(v2, v6)
        v5 = vadd_f32(vadd_f32(vmul_f32(v4_2, v4_2, 0), vmul_f32(v5_1, v5_1, 0)), 
            vmul_f32(v6, v6, 0))
        v4.d = v5:4.d
        
        if (v5.d f>= v4.d || not(v5.d f< v3_1))
            if (v5.d f<= v4.d || v4.d f>= v3_1)
                goto label_c19948
            
            x10_5 += 1
            x8_14 = 1
            v3_1 = v4.d
            x9_2 = x0_31
            
            if (x10_5 != 0xa)
                continue
            else
                x9_2 = 9
            
            goto label_c19890
        
        x8_14 = 0
        x9_2 = x0_31
        v3_1 = v5.d
    label_c19948:
        x10_5 += 1
        
        if (x10_5 != 0xa)
            continue
        else if (x8_14 == 0)
            size_t x2_10 = x24_1 << 2
            int64_t x8_13 = zx.q(x9_2) << 0x20 s>> 0x1e
            int32_t x27_2 = *(&var_98 + x8_13)
            *(&var_98 + x8_13) = *(&var_98 + x2_10)
            v0_20, v1, v2, v4, v5, v6 = memmove(&var_98:4, &var_98, x2_10)
            var_98.d = x27_2
            x24_1 += 1
            
            if (x24_1 != 0xa)
                break
        else
        label_c19890:
            int64_t x8_12 = x24_1 << 2
            int64_t x9_3 = zx.q(x9_2) << 0x20 s>> 0x1e
            int32_t x11_12 = *(&var_98 + x8_12)
            *(&var_98 + x8_12) = *(&var_98 + x9_3)
            *(&var_98 + x9_3) = x11_12
            x24_1 += 1
            
            if (x24_1 != 0xa)
                break
        
        int64_t x8_15 = sx.q(var_98.d)
        int32_t var_74
        int64_t x9_9 = sx.q(var_74)
        v0_20.d = *(arg2 + 0x10 + x8_15 * 0xc)
        v1.d = *(arg2 + 0x10 + x9_9 * 0xc)
        uint128_t var_84
        
        if (not(v0_20.d f<= v1.d))
            v1 = var_98:4.o
            var_98.d = x9_9.d
            var_74 = x8_15.d
            uint128_t v0_21 = vrev64q_s32(var_84)
            uint128_t v1_1 = vrev64q_s32(v1)
            v0_20 = vextq_s8(v0_21, v0_21, 8)
            v1 = vextq_s8(v1_1, v1_1, 8)
            var_98:4.o = v0_20
            var_84 = v1
        
        int64_t x12_14 = 0
        int32_t x11_19 = 0
        int64_t i_2 = 2
        
        while (true)
            int64_t x13_3
            
            if (x12_14 u>= 7)
                x13_3 = x12_14 + 1
            else
                x13_3 = x12_14 + 1
                int64_t i_1 = i_2
                
                do
                    int64_t x15_1 = sx.q(*(&var_98 + (x13_3 << 2)))
                    void* x1_21 = &var_98 + (i_1 << 2)
                    int64_t x16_1 = *x1_21
                    int32_t* x17_2 = arg2 + 0x10 + sx.q(*(&var_98 + (x12_14 << 2))) * 0xc
                    v5.d = *x17_2
                    v4.d = x17_2[1]
                    int32_t* x17_3 = arg2 + 0x10 + x15_1 * 0xc
                    v1.d = *x17_3
                    v0_20.d = x17_3[1]
                    float* x17_4 = arg2 + 0x10 + x16_1 * 0xc
                    float* x0_33 = arg2 + 0x10 + *(x1_21 + 4) * 0xc
                    v3_1 = *x17_4
                    v2.d = x17_4[1]
                    float v7_1 = *x0_33
                    v6.d = x0_33[1]
                    float v17_1 = v0_20.d f- v4.d
                    float v16_1 = v1.d f- v5.d
                    
                    if (not((v17_1 * (v3_1 f- v5.d) - v16_1 * (v2.d f- v4.d))
                            * (v17_1 * (v7_1 f- v5.d) - v16_1 * (v6.d f- v4.d)) > 0f))
                        v7_1 = v7_1 - v3_1
                        v6.d = v6.d f- v2.d
                        v5.d = v5.d f- v3_1
                        v4.d = v4.d f- v2.d
                        v1.d = v1.d f- v3_1
                        v0_20.d = v0_20.d f- v2.d
                        v2.d = v5.d f* v6.d
                        v1.d = v1.d f* v6.d
                        v0_20.d = v0_20.d f* v7_1
                        v2.d = v2.d f- v4.d f* v7_1
                        v0_20.d = v1.d f- v0_20.d
                        v0_20.d = v2.d f* v0_20.d
                        
                        if (not(v0_20.d f> 0f))
                            x11_19 = 1
                            *(&var_98 + (x13_3 << 2)) = x16_1.d
                            *(&var_98 + (i_1 << 2)) = x15_1.d
                    
                    i_1 += 1
                while (i_1 != 9)
            
            int32_t x14_1 = x11_19
            i_2 += 1
            x12_14 = x13_3
            
            if (x13_3 == 0xa)
                x12_14 = 0
                x11_19 = 0
                i_2 = 2
                
                if ((x14_1 & 1) == 0)
                    break
        
        v1 = var_98.o
        *(arg2 + 0x16ffc0) = var_84:0xc.q
        *(arg2 + 0x16ffa0) = v1
        int128_t var_88
        *(arg2 + 0x16ffb0) = var_88
        int32_t x28 = *(arg1 + 0x30)
        int32_t var_a0
        int64_t var_68
        int32_t x8_21
        
        if (x28 - 0x3a u<= 0x13 && (1 << (x28 - 0x3a) & 0x80101) != 0)
            int64_t x9_10 = sx.q(var_98.d)
            v0_20.q = *(arg2 + x9_10 * 0xc + 0x10)
            var_68 = v0_20.q
            v0_20.d = float.s(0x3da147ae)
            var_a0 = x9_10.d
            int32_t x0_35
            x0_35, v0_20, v1, v2, v4 = Bin2DQuery(arg3, &var_68, 1, v0_20.d)
            
            if ((x0_35 & 1) == 0)
                x28 = 0x3d
                *(arg1 + 0x30) = 0x3d
            
            x8_21 = *(arg1 + 0x34) - 0x3a
            
            if (x8_21 u<= 0x13 && (1 << x8_21 & 0x80101) != 0)
                goto label_c19c0c
            
            goto label_c19c64
        
        var_a0 = var_98.d
        x8_21 = *(arg1 + 0x34) - 0x3a
        int32_t var_a8
        int32_t x8_27
        
        if (x8_21 u<= 0x13 && (1 << x8_21 & 0x80101) != 0)
        label_c19c0c:
            int64_t x9_11 = sx.q(var_98:4.d)
            v0_20.q = *(arg2 + x9_11 * 0xc + 0x10)
            var_68 = v0_20.q
            v0_20.d = float.s(0x3da147ae)
            var_a8 = x9_11.d
            int32_t x0_37
            x0_37, v0_20, v1, v2, v4 = Bin2DQuery(arg3, &var_68, 1, v0_20.d)
            
            if ((x0_37 & 1) == 0)
                *(arg1 + 0x34) = 0x3d
            
            x8_27 = *(arg1 + 0x38) - 0x3a
            
            if (x8_27 u<= 0x13 && (1 << x8_27 & 0x80101) != 0)
                goto label_c19c90
            
            goto label_c19ce8
        
    label_c19c64:
        var_a8 = var_98:4.d
        x8_27 = *(arg1 + 0x38) - 0x3a
        int32_t var_b0
        int32_t x8_33
        
        if (x8_27 u<= 0x13 && (1 << x8_27 & 0x80101) != 0)
        label_c19c90:
            int64_t x9_12 = sx.q(var_90)
            v0_20.q = *(arg2 + x9_12 * 0xc + 0x10)
            var_68 = v0_20.q
            v0_20.d = float.s(0x3da147ae)
            var_b0 = x9_12.d
            int32_t x0_39
            x0_39, v0_20, v1, v2, v4 = Bin2DQuery(arg3, &var_68, 1, v0_20.d)
            
            if ((x0_39 & 1) == 0)
                *(arg1 + 0x38) = 0x3d
            
            x8_33 = *(arg1 + 0x3c) - 0x3a
            
            if (x8_33 u<= 0x13 && (1 << x8_33 & 0x80101) != 0)
                goto label_c19d14
            
            goto label_c19d64
        
    label_c19ce8:
        var_b0 = var_90
        x8_33 = *(arg1 + 0x3c) - 0x3a
        int32_t var_8c
        int32_t x8_39
        uint64_t x25
        
        if (x8_33 u<= 0x13 && (1 << x8_33 & 0x80101) != 0)
        label_c19d14:
            x25 = sx.q(var_8c)
            v0_20.q = *(arg2 + x25 * 0xc + 0x10)
            var_68 = v0_20.q
            v0_20.d = float.s(0x3da147ae)
            int32_t x0_41
            x0_41, v0_20, v1, v2, v4 = Bin2DQuery(arg3, &var_68, 1, v0_20.d)
            
            if ((x0_41 & 1) == 0)
                *(arg1 + 0x3c) = 0x3d
            
            x8_39 = *(arg1 + 0x40) - 0x3a
            
            if (x8_39 u<= 0x13 && (1 << x8_39 & 0x80101) != 0)
                goto label_c19d90
            
            goto label_c19de0
        
    label_c19d64:
        x25 = zx.q(var_8c)
        x8_39 = *(arg1 + 0x40) - 0x3a
        int32_t x8_44
        int64_t x26
        
        if (x8_39 u<= 0x13 && (1 << x8_39 & 0x80101) != 0)
        label_c19d90:
            x26 = sx.q(var_88.d)
            v0_20.q = *(arg2 + x26 * 0xc + 0x10)
            var_68 = v0_20.q
            v0_20.d = float.s(0x3da147ae)
            int32_t x0_43
            x0_43, v0_20, v1, v2, v4 = Bin2DQuery(arg3, &var_68, 1, v0_20.d)
            
            if ((x0_43 & 1) == 0)
                *(arg1 + 0x40) = 0x3d
            
            x8_44 = *(arg1 + 0x44) - 0x3a
            
            if (x8_44 u<= 0x13 && (1 << x8_44 & 0x80101) != 0)
                goto label_c19e0c
            
            goto label_c19e5c
        
    label_c19de0:
        x26 = zx.q(var_88.d)
        x8_44 = *(arg1 + 0x44) - 0x3a
        int32_t x8_49
        int64_t x27_3
        
        if (x8_44 u<= 0x13 && (1 << x8_44 & 0x80101) != 0)
        label_c19e0c:
            x27_3 = sx.q(var_84.d)
            v0_20.q = *(arg2 + x27_3 * 0xc + 0x10)
            var_68 = v0_20.q
            v0_20.d = float.s(0x3da147ae)
            int32_t x0_45
            x0_45, v0_20, v1, v2, v4 = Bin2DQuery(arg3, &var_68, 1, v0_20.d)
            
            if ((x0_45 & 1) == 0)
                *(arg1 + 0x44) = 0x3d
            
            x8_49 = *(arg1 + 0x48) - 0x3a
            
            if (x8_49 u<= 0x13 && (1 << x8_49 & 0x80101) != 0)
                goto label_c19e88
            
            goto label_c19ed8
        
    label_c19e5c:
        x27_3 = zx.q(var_84.d)
        x8_49 = *(arg1 + 0x48) - 0x3a
        int32_t x8_54
        int64_t fp
        
        if (x8_49 u<= 0x13 && (1 << x8_49 & 0x80101) != 0)
        label_c19e88:
            fp = sx.q(var_84:4.d)
            v0_20.q = *(arg2 + fp * 0xc + 0x10)
            var_68 = v0_20.q
            v0_20.d = float.s(0x3da147ae)
            int32_t x0_47
            x0_47, v0_20, v1, v2, v4 = Bin2DQuery(arg3, &var_68, 1, v0_20.d)
            
            if ((x0_47 & 1) == 0)
                *(arg1 + 0x48) = 0x3d
            
            x8_54 = *(arg1 + 0x4c) - 0x3a
            
            if (x8_54 u<= 0x13 && (1 << x8_54 & 0x80101) != 0)
                goto label_c19f04
            
            goto label_c19f54
        
    label_c19ed8:
        fp = zx.q(var_84:4.d)
        x8_54 = *(arg1 + 0x4c) - 0x3a
        int32_t x8_59
        int64_t x22_1
        
        if (x8_54 u<= 0x13 && (1 << x8_54 & 0x80101) != 0)
        label_c19f04:
            x22_1 = sx.q(var_84:8.d)
            v0_20.q = *(arg2 + x22_1 * 0xc + 0x10)
            var_68 = v0_20.q
            v0_20.d = float.s(0x3da147ae)
            int32_t x0_49
            x0_49, v0_20, v1, v2, v4 = Bin2DQuery(arg3, &var_68, 1, v0_20.d)
            
            if ((x0_49 & 1) == 0)
                *(arg1 + 0x4c) = 0x3d
            
            x8_59 = *(arg1 + 0x50) - 0x3a
            
            if (x8_59 u<= 0x13 && (1 << x8_59 & 0x80101) != 0)
                goto label_c19f80
            
            goto label_c19fd0
        
    label_c19f54:
        x22_1 = zx.q(var_84:8.d)
        x8_59 = *(arg1 + 0x50) - 0x3a
        int64_t x23_2
        uint64_t x24_2
        int32_t x8_64
        
        if (x8_59 u> 0x13 || (1 << x8_59 & 0x80101) == 0)
        label_c19fd0:
            x23_2 = zx.q(var_84:0xc.d)
            x8_64 = *(arg1 + 0x54) - 0x3a
            
            if (x8_64 u> 0x13 || (1 << x8_64 & 0x80101) == 0)
                x24_2 = zx.q(var_74)
            else
            label_c19ffc:
                x24_2 = sx.q(var_74)
                v0_20.q = *(arg2 + x24_2 * 0xc + 0x10)
                var_68 = v0_20.q
                v0_20.d = float.s(0x3da147ae)
                int32_t x0_53
                x0_53, v0_20, v1, v2, v4 = Bin2DQuery(arg3, &var_68, 1, v0_20.d)
                
                if ((x0_53 & 1) == 0)
                    *(arg1 + 0x54) = 0x3d
        else
        label_c19f80:
            x23_2 = sx.q(var_84:0xc.d)
            v0_20.q = *(arg2 + x23_2 * 0xc + 0x10)
            var_68 = v0_20.q
            v0_20.d = float.s(0x3da147ae)
            int32_t x0_51
            x0_51, v0_20, v1, v2, v4 = Bin2DQuery(arg3, &var_68, 1, v0_20.d)
            
            if ((x0_51 & 1) == 0)
                *(arg1 + 0x50) = 0x3d
            
            x8_64 = *(arg1 + 0x54) - 0x3a
            
            if (x8_64 u<= 0x13 && (1 << x8_64 & 0x80101) != 0)
                goto label_c19ffc
            
            x24_2 = zx.q(var_74)
        float* x13_5 = arg2 + 0x10 + muls.dp.d(var_a0, 0xc)
        float* x14_3 = arg2 + 0x10 + muls.dp.d(var_a8, 0xc)
        float* x15_3 = arg2 + 0x10 + muls.dp.d(var_b0, 0xc)
        float* x16_2 = arg2 + 0x10 + muls.dp.d(x25.d, 0xc)
        float* x17_5 = arg2 + 0x10 + muls.dp.d(x26.d, 0xc)
        float* result = arg2 + 0x10 + muls.dp.d(x27_3.d, 0xc)
        float* x1_33 = arg2 + 0x10 + muls.dp.d(fp.d, 0xc)
        float* x2_11 = arg2 + 0x10 + muls.dp.d(x22_1.d, 0xc)
        float* x3 = arg2 + 0x10 + muls.dp.d(x23_2.d, 0xc)
        float* x4_1 = arg2 + 0x10 + muls.dp.d(x24_2.d, 0xc)
        int32_t* x8_68 = arg2 + 0x18
        int64_t x9_13 = 0x3fff
        
        while (true)
            int32_t fp_1 = 0
            v2.d = float.s(0x3bab2000)
            
            if (x28 - 0x3a u<= 0x13 && (1 << (x28 - 0x3a) & 0x80101) != 0)
                fp_1 = 1
                v2.d = float.s(0x3c005800)
            
            v4.d = x13_5[1]
            v0_20.d = x8_68[-2]
            v1.d = x8_68[-1]
            v3_1 = *x13_5 f- v0_20.d
            v4.d = v4.d f- v1.d
            v4.d = v4.d f* v4.d
            
            if (not(v3_1 * v3_1 f+ v4.d f>= v2.d))
                v2.d = *x8_68
                v2.d f- 0f
                
                if (fp_1 == 0)
                    if (not(v2.d f>= 0f))
                        *x8_68 = 0x3dcccccd
                else if (not(v2.d f< 0f))
                    *x8_68 = 0xbc23d70a
            
            int32_t x28_3 = 0
            int32_t fp_3 = *(arg1 + 0x34) - 0x3a
            v2.d = float.s(0x3bab2000)
            
            if (fp_3 u<= 0x13 && (1 << fp_3 & 0x80101) != 0)
                x28_3 = 1
                v2.d = float.s(0x3c005800)
            
            v4.d = x14_3[1]
            v3_1 = *x14_3 f- v0_20.d
            v4.d = v4.d f- v1.d
            v4.d = v4.d f* v4.d
            
            if (not(v3_1 * v3_1 f+ v4.d f>= v2.d))
                v2.d = *x8_68
                v2.d f- 0f
                
                if ((x28_3 & 1) == 0)
                    if (not(v2.d f>= 0f))
                        *x8_68 = 0x3dcccccd
                else if (not(v2.d f< 0f))
                    *x8_68 = 0xbc23d70a
            
            int32_t x28_4 = 0
            int32_t fp_6 = *(arg1 + 0x38) - 0x3a
            v2.d = float.s(0x3bab2000)
            
            if (fp_6 u<= 0x13 && (1 << fp_6 & 0x80101) != 0)
                x28_4 = 1
                v2.d = float.s(0x3c005800)
            
            v4.d = x15_3[1]
            v3_1 = *x15_3 f- v0_20.d
            v4.d = v4.d f- v1.d
            v4.d = v4.d f* v4.d
            
            if (not(v3_1 * v3_1 f+ v4.d f>= v2.d))
                v2.d = *x8_68
                v2.d f- 0f
                
                if ((x28_4 & 1) == 0)
                    if (not(v2.d f>= 0f))
                        *x8_68 = 0x3dcccccd
                else if (not(v2.d f< 0f))
                    *x8_68 = 0xbc23d70a
            
            int32_t x28_5 = 0
            int32_t fp_9 = *(arg1 + 0x3c) - 0x3a
            v2.d = float.s(0x3bab2000)
            
            if (fp_9 u<= 0x13 && (1 << fp_9 & 0x80101) != 0)
                x28_5 = 1
                v2.d = float.s(0x3c005800)
            
            v4.d = x16_2[1]
            v3_1 = *x16_2 f- v0_20.d
            v4.d = v4.d f- v1.d
            v4.d = v4.d f* v4.d
            
            if (not(v3_1 * v3_1 f+ v4.d f>= v2.d))
                v2.d = *x8_68
                v2.d f- 0f
                
                if ((x28_5 & 1) == 0)
                    if (not(v2.d f>= 0f))
                        *x8_68 = 0x3dcccccd
                else if (not(v2.d f< 0f))
                    *x8_68 = 0xbc23d70a
            
            int32_t x28_6 = 0
            int32_t fp_12 = *(arg1 + 0x40) - 0x3a
            v2.d = float.s(0x3bab2000)
            
            if (fp_12 u<= 0x13 && (1 << fp_12 & 0x80101) != 0)
                x28_6 = 1
                v2.d = float.s(0x3c005800)
            
            v4.d = x17_5[1]
            v3_1 = *x17_5 f- v0_20.d
            v4.d = v4.d f- v1.d
            v4.d = v4.d f* v4.d
            
            if (not(v3_1 * v3_1 f+ v4.d f>= v2.d))
                v2.d = *x8_68
                v2.d f- 0f
                
                if ((x28_6 & 1) == 0)
                    if (not(v2.d f>= 0f))
                        *x8_68 = 0x3dcccccd
                else if (not(v2.d f< 0f))
                    *x8_68 = 0xbc23d70a
            
            int32_t x28_7 = 0
            int32_t fp_15 = *(arg1 + 0x44) - 0x3a
            v2.d = float.s(0x3bab2000)
            
            if (fp_15 u<= 0x13 && (1 << fp_15 & 0x80101) != 0)
                x28_7 = 1
                v2.d = float.s(0x3c005800)
            
            v4.d = result[1]
            v3_1 = *result f- v0_20.d
            v4.d = v4.d f- v1.d
            v4.d = v4.d f* v4.d
            
            if (not(v3_1 * v3_1 f+ v4.d f>= v2.d))
                v2.d = *x8_68
                v2.d f- 0f
                
                if ((x28_7 & 1) == 0)
                    if (not(v2.d f>= 0f))
                        *x8_68 = 0x3dcccccd
                else if (not(v2.d f< 0f))
                    *x8_68 = 0xbc23d70a
            
            int32_t x28_8 = 0
            int32_t fp_18 = *(arg1 + 0x48) - 0x3a
            v2.d = float.s(0x3bab2000)
            
            if (fp_18 u<= 0x13 && (1 << fp_18 & 0x80101) != 0)
                x28_8 = 1
                v2.d = float.s(0x3c005800)
            
            v4.d = x1_33[1]
            v3_1 = *x1_33 f- v0_20.d
            v4.d = v4.d f- v1.d
            v4.d = v4.d f* v4.d
            
            if (not(v3_1 * v3_1 f+ v4.d f>= v2.d))
                v2.d = *x8_68
                v2.d f- 0f
                
                if ((x28_8 & 1) == 0)
                    if (not(v2.d f>= 0f))
                        *x8_68 = 0x3dcccccd
                else if (not(v2.d f< 0f))
                    *x8_68 = 0xbc23d70a
            
            int32_t x28_9 = 0
            int32_t fp_21 = *(arg1 + 0x4c) - 0x3a
            v2.d = float.s(0x3bab2000)
            
            if (fp_21 u<= 0x13 && (1 << fp_21 & 0x80101) != 0)
                x28_9 = 1
                v2.d = float.s(0x3c005800)
            
            v4.d = x2_11[1]
            v3_1 = *x2_11 f- v0_20.d
            v4.d = v4.d f- v1.d
            v4.d = v4.d f* v4.d
            
            if (not(v3_1 * v3_1 f+ v4.d f>= v2.d))
                v2.d = *x8_68
                v2.d f- 0f
                
                if ((x28_9 & 1) == 0)
                    if (not(v2.d f>= 0f))
                        *x8_68 = 0x3dcccccd
                else if (not(v2.d f< 0f))
                    *x8_68 = 0xbc23d70a
            
            int32_t x28_10 = 0
            int32_t fp_24 = *(arg1 + 0x50) - 0x3a
            v2.d = float.s(0x3bab2000)
            
            if (fp_24 u<= 0x13 && (1 << fp_24 & 0x80101) != 0)
                x28_10 = 1
                v2.d = float.s(0x3c005800)
            
            v4.d = x3[1]
            v3_1 = *x3 f- v0_20.d
            v4.d = v4.d f- v1.d
            v4.d = v4.d f* v4.d
            
            if (not(v3_1 * v3_1 f+ v4.d f>= v2.d))
                v2.d = *x8_68
                v2.d f- 0f
                
                if ((x28_10 & 1) == 0)
                    if (not(v2.d f>= 0f))
                        *x8_68 = 0x3dcccccd
                else if (not(v2.d f< 0f))
                    *x8_68 = 0xbc23d70a
            
            int32_t x28_11 = 0
            int32_t fp_27 = *(arg1 + 0x54) - 0x3a
            v2.d = float.s(0x3bab2000)
            
            if (fp_27 u<= 0x13 && (1 << fp_27 & 0x80101) != 0)
                x28_11 = 1
                v2.d = float.s(0x3c005800)
            
            v4.d = x4_1[1]
            v0_20.d = *x4_1 f- v0_20.d
            v1.d = v4.d f- v1.d
            v0_20.d = v0_20.d f* v0_20.d
            v1.d = v1.d f* v1.d
            v0_20.d = v0_20.d f+ v1.d
            
            if (not(v0_20.d f>= v2.d))
                v0_20.d = *x8_68
                v0_20.d f- 0f
                
                if ((x28_11 & 1) == 0)
                    if (not(v0_20.d f>= 0f))
                        *x8_68 = 0x3dcccccd
                else if (not(v0_20.d f< 0f))
                    *x8_68 = 0xbc23d70a
            
            if (x9_13 == 0)
                break
            
            x28 = *(arg1 + 0x30)
            x8_68 = &x8_68[3]
            x9_13 -= 1
        
        return result
