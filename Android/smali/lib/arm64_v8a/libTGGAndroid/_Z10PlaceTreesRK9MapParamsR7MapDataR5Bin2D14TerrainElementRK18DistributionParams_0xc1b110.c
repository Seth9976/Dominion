// 函数: _Z10PlaceTreesRK9MapParamsR7MapDataR5Bin2D14TerrainElementRK18DistributionParams
// 地址: 0xc1b110
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v9
int64_t var_70 = entry_v9.q
int128_t entry_v8
int64_t var_68 = entry_v8.q
uint64_t x2 = zx.q(*(arg5 + 8))
int32_t x25 = arg4
int64_t var_110[0x14]

if (x2.d s>= 1)
    entry_v8.q = 0x3f7d70a43ffeb852
    int64_t x24_1 = 0
    entry_v9.d = 0x3ba3d70a
    entry_v9:4.d = 0x3ba3d70a
    
    do
        int32_t var_20130
        var_20130.q = RandomUnit(arg2)
        int32_t v0_2
        int128_t v1_1
        v0_2, v1_1 = RandomUnit(arg2)
        v1_1:4.d = v0_2
        var_110[x24_1] = vadd_f32(vmul_f32(v1_1, entry_v8, 0), entry_v9)
        x2 = sx.q(*(arg5 + 8))
        x24_1 += 1
    while (x24_1 s< x2)

ScoredIdx var_20110
int32_t x0_3 = BuildTreeScores(arg2 + 0x10, &var_110, x2.d, arg3, &var_20110)
int64_t result
int64_t v0_5
result, v0_5 = sub_c21804(&var_20110, &var_20110 + (sx.q(x0_3) << 3))
int32_t var_20130_1

if (*((sx.q(x25) - 1) * 0x1a0 + &data_11568a8) == 0)
    var_20130_1 = 0
else
    int32_t x10_32
    
    if (*((sx.q(x25) - 1) * 0x1a0 + &data_11568c0) == 0)
        x10_32 = 1
    else if (*((sx.q(x25) - 1) * 0x1a0 + &data_11568d8) == 0)
        x10_32 = 2
    else if (*((sx.q(x25) - 1) * 0x1a0 + &data_11568f0) == 0)
        x10_32 = 3
    else if (*((sx.q(x25) - 1) * 0x1a0 + &data_1156908) == 0)
        x10_32 = 4
    else if (*((sx.q(x25) - 1) * 0x1a0 + &data_1156920) == 0)
        x10_32 = 5
    else if (*((sx.q(x25) - 1) * 0x1a0 + &data_1156938) == 0)
        x10_32 = 6
    else if (*((sx.q(x25) - 1) * 0x1a0 + 0x1156950) == 0)
        x10_32 = 7
    else if (*((sx.q(x25) - 1) * 0x1a0 + 0x1156968) == 0)
        x10_32 = 8
    else if (*((sx.q(x25) - 1) * 0x1a0 + 0x1156980) == 0)
        x10_32 = 9
    else if (*((sx.q(x25) - 1) * 0x1a0 + 0x1156998) == 0)
        x10_32 = 0xa
    else if (*((sx.q(x25) - 1) * 0x1a0 + 0x11569b0) == 0)
        x10_32 = 0xb
    else if (*((sx.q(x25) - 1) * 0x1a0 + 0x11569c8) == 0)
        x10_32 = 0xc
    else if (*((sx.q(x25) - 1) * 0x1a0 + 0x11569e0) == 0)
        x10_32 = 0xd
    else if (*((sx.q(x25) - 1) * 0x1a0 + 0x11569f8) == 0)
        x10_32 = 0xe
    else if (*((sx.q(x25) - 1) * 0x1a0 + 0x1156a10) != 0)
        x10_32 = 0x10
    else
        x10_32 = 0xf
    
    var_20130_1 = x10_32

int32_t x10_33 = *arg5
int32_t x11 = *(arg1 + 0xc)
int32_t x12

if (x10_33 s< 0)
    x12 = x10_33 + 1
else
    x12 = x10_33

int32_t x10_34

if (x11 == 6)
    x10_34 = x12 s>> 1
else
    x10_34 = x10_33

int32_t x22_1 = x10_34 << (x11 == 1 ? 1 : 0)

if (x22_1 s>= 1)
    int64_t x23_1 = sx.q(x0_3)
    int64_t var_20118
    float v1_2
    
    if (x25 != 0xc)
        int32_t x28_2 = 0
        int32_t x27_1 = 0
        
        do
            if (x28_2 s< x23_1.d)
                int64_t x21_2 = x23_1 - sx.q(x28_2)
                int32_t x26_2 = x27_1 u% var_20130_1
                v0_5.d = *(&data_1156890 + (sx.q(x25) - 1) * 0x1a0 + mulu.dp.d(x26_2, 0x18) + 0x2c)
                v1_2 = float.s(0x3c23d70a)
                void* x24_4 = &var_20110 + (sx.q(x28_2) << 3)
                x28_2 += 1
                
                if (v0_5.d f== 0f)
                    entry_v8.d = v1_2
                else
                    entry_v8.d = v0_5.d f* v1_2
                
                while (true)
                    int64_t x25_2 = sx.q(*x24_4)
                    var_20118 = *(arg2 + x25_2 * 0xc + 0x10)
                    result = Bin2DQuery(arg3, &var_20118, 0, entry_v8.d)
                    
                    if ((result.d & 1) == 0)
                        if (not(RandomUnit(arg2) f> *((sx.q(x25) - 1) * 0x1a0 + 0x11568a4)))
                            int64_t x8_15 = sx.q(*(arg2 + 0x175fc8))
                            *(arg2 + 0x175fc8) = x8_15.d + 1
                            *(arg2 + x8_15 * 0xc + 0x16ffc8) = x25_2.d
                            *(arg2 + x8_15 * 0xc + 0x16ffcc) = x25
                            *(arg2 + x8_15 * 0xc + 0x16ffd0) = x26_2
                        
                        int32_t x2_1
                        
                        if (x25 u> 0xc || (1 << x25 & 0x1048) == 0)
                            x2_1 = 4
                        else
                            x2_1 = 5
                        
                        result, v0_5 = Bin2DAdd(arg3, &var_20118, x2_1, entry_v8.d)
                        break
                    
                    x28_2 += 1
                    int64_t temp0_1 = x21_2
                    x21_2 -= 1
                    x24_4 += 8
                    
                    if (temp0_1 == 1)
                        goto label_c1b62c
            
            if (x28_2 == x23_1.d)
                break
            
            x27_1 += 1
        while (x27_1 s< x22_1)
    else
        int32_t x24_3 = 0
        int32_t x21_1 = 0
        
        do
            if (x24_3 s< x23_1.d)
                int64_t fp_1 = x23_1 - sx.q(x24_3)
                int32_t x28_1 = x21_1 u% var_20130_1
                v0_5.d = *(&data_1156890 + (sx.q(x25) - 1) * 0x1a0 + mulu.dp.d(x28_1, 0x18) + 0x2c)
                v1_2 = float.s(0x3c23d70a)
                void* x26_1 = &var_20110 + (sx.q(x24_3) << 3)
                x24_3 += 1
                
                if (v0_5.d f== 0f)
                    entry_v8.d = v1_2
                else
                    entry_v8.d = v0_5.d f* v1_2
                
                while (true)
                    int64_t x25_1 = sx.q(*x26_1)
                    var_20118 = *(arg2 + x25_1 * 0xc + 0x10)
                    result = Bin2DQuery(arg3, &var_20118, 0, entry_v8.d)
                    
                    if ((result.d & 1) == 0)
                        if (not(RandomUnit(arg2) f> *((sx.q(x25) - 1) * 0x1a0 + 0x11568a4)))
                            int64_t x8_7 = sx.q(*(arg2 + 0x175fc8))
                            *(arg2 + 0x175fc8) = x8_7.d + 1
                            *(arg2 + x8_7 * 0xc + 0x16ffcc) = 0xc
                            *(arg2 + x8_7 * 0xc + 0x16ffd0) = x28_1
                            *(arg2 + x8_7 * 0xc + 0x16ffc8) = x25_1.d
                        
                        result, v0_5 = Bin2DAdd(arg3, &var_20118, 5, entry_v8.d)
                        break
                    
                    x24_3 += 1
                    int64_t temp1_1 = fp_1
                    fp_1 -= 1
                    x26_1 += 8
                    
                    if (temp1_1 == 1)
                        goto label_c1b62c
            
            if (x24_3 == x23_1.d)
                break
            
            x21_1 += 1
        while (x21_1 s< x22_1)

label_c1b62c:
entry_v9.q = var_70
entry_v8.q = var_68
return result
