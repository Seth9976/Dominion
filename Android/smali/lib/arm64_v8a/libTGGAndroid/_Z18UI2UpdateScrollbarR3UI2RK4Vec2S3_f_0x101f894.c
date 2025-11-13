// 函数: _Z18UI2UpdateScrollbarR3UI2RK4Vec2S3_f
// 地址: 0x101f894
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_90 = v15
int64_t v14
int64_t var_88 = v14
int64_t v13
int64_t var_80 = v13
int64_t v12
int64_t var_78 = v12
int64_t v11
int64_t var_70 = v11
int64_t v10
int64_t var_68 = v10
int64_t v9
int64_t var_60 = v9
float v8 = arg4
int128_t v1 = *(arg1 + 0x1720)
int128_t v2 = *(arg1 + 0x1730)
int128_t var_f0 = (*(arg1 + 0x1740)).d.o
int128_t var_e0 = *(arg1 + 0x1750)
int128_t v4 = *(arg1 + 0x16c0)
int128_t v7 = *(arg1 + 0x16d0)
int128_t var_180 = *(arg1 + 0x16b0)
int128_t var_110 = v1
int128_t var_100 = v2
int128_t var_140 = *(arg1 + 0x16f0)
int128_t var_160 = v7
int128_t var_150 = (*(arg1 + 0x16e0)).d.o
int128_t var_130 = *(arg1 + 0x1700)
int128_t var_120 = *(arg1 + 0x1710)
int64_t var_a0 = *(arg1 + 0x1790)
int128_t var_c0 = *(arg1 + 0x1770)
int128_t var_b0 = (*(arg1 + 0x1780)).d.o
int128_t var_d0 = *(arg1 + 0x1760)
var_f0.d = 0
int32_t x8 = *(arg1 + 0x1528)

if (x8 != 1)
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        UI2* x0_34
        float v0_14
        x0_34, v0_14 = XNoReturn()
        return UI2TextUpdateScrollbar(x0_34, v0_14) __tailcall
    
    int32_t x8_1 = *(arg1 + 0x1978)
    int64_t x21 = *(arg1 + 0x1530)
    
    if (x8_1 == 0)
        void* x0_1 = UI2Alloc(arg1)
        *(x0_1 + 0x198c) = 1
        x8_1 = *(x0_1 + 0x19a0)
        *(arg1 + 0x1978) = x8_1
    
    UI2* x20_1 = *gUI2 + mulu.dp.d(x8_1 & 0xffff, 0x19a8)
    *(x20_1 + 0x1688) = x21
    *(x20_1 + 0x1690) = 0
    UI2Update(x20_1, arg1, &var_180, false, v8)
    *(x20_1 + 0x175c) = *(arg1 + 0x175c)
    return 

arg4 = *(arg3 + 4)

if (arg4 == 0f)
    return 

v1.d = *(arg2 + 4)

if (not(v1.d f<= arg4))
    int32_t x9_3 = *(arg1 + 0x1978)
    *(arg1 + 0x13a8) = *V20
    
    if (x9_3 != 0)
        UI2Free(arg1 + 0x1978)
        *(arg1 + 0x1978) = 0
    
    if (*(arg1 + 0x197c) != 0)
        UI2Free(arg1 + 0x197c)
        *(arg1 + 0x197c) = 0
    
    if (*(arg1 + 0x1980) != 0)
        UI2Free(arg1 + 0x1980)
        *(arg1 + 0x1980) = 0
    
    if (*(arg1 + 0x1984) != 0)
        UI2Free(arg1 + 0x1984)
        *(arg1 + 0x1984) = 0
    
    if (*(arg1 + 0x1988) != 0)
        UI2Free(arg1 + 0x1988)
        *(arg1 + 0x1988) = 0
    
    return 

XAsset* x20_6 = *(arg1 + 0x1530)
v9.d = *(arg1 + 0x175c)
v13.d = *(arg1 + 0x1760)
float v0_1
float v2_1
v0_1, v2_1 = UI2SubBoundary(x20_6)
v0_1 = v2_1 - v0_1
v12.d = v9.d f- v0_1
int32_t var_194_1 = 0
int32_t var_190_1 = v9.d
int32_t var_18c_1 = v13.d
float var_188 = v0_1
float var_184_1 = v0_1
int32_t var_198 = v12.d
float v3_1 = *(arg2 + 4)
float v4_1 = *(arg3 + 4)
float v1_1 = 0f
v10.d = v0_1 + v1_1
v13.d = v13.d f- v0_1
v2_1 = v13.d f- v10.d
float v5_1 = v2_1 * v3_1 / v4_1
float v6_1 = fconvert.s(0.5f)
v3_1 = *(arg1 + 0x13ac) / fneg(v4_1 - v3_1)

v4_1 = v0_1 > v5_1 ? v0_1 : v5_1

v14.d = v4_1 * v6_1
v1_1 = v14.d f+ v1_1
float var_44_1 = v8

if (not(v3_1 <= 0f))
    v2_1 = v2_1 f- v14.d
    
    if (v3_1 >= fconvert.s(1f))
        v1_1 = v2_1
    else
        v1_1 = v1_1 + v3_1 * (v2_1 - v1_1)

v15.d = v0_1 * v6_1
v11.d = v15.d f+ v12.d
v8 = v10.d f+ v1_1
int32_t v0_2
int32_t v1_2
int32_t v2_2
int32_t v3_2
v0_2, v1_2, v2_2, v3_2 = RectAlignedWithinRect(&var_198, &var_188, 2)
int32_t var_1a8 = v0_2
int32_t var_1a4_1 = v1_2
int32_t var_1a0_1 = v2_2
int32_t var_19c_1 = v3_2
float v0_3
float v1_3
float v2_3
float v3_3
v0_3, v1_3, v2_3, v3_3 = RectAlignedWithinRect(&var_198, &var_188, 8)
float var_1b8 = v0_3
float var_1b4_1 = v1_3
float var_1b0_1 = v2_3
float var_1ac_1 = v3_3
v1_3 = v8 f- v14.d
v3_3 = v14.d f+ v8
float var_1c8 = v11.d f- v15.d
float var_1c4_1 = v1_3
float var_1c0_1 = v15.d f+ v11.d
float var_1bc_1 = v3_3
v12.d f- v9.d
v0_3 = (v1_3 + v3_3) * fconvert.s(0.5f)

if (v12.d f< v9.d)
    v1_3 = v9.d
else
    v1_3 = v12.d

if (v12.d f< v9.d)
    v2_3 = v12.d
else
    v2_3 = v9.d

v0_3 f- v13.d

if (v0_3 f< v13.d)
    v3_3 = v0_3
else
    v3_3 = v13.d

float v4_2

if (v0_3 f< v13.d)
    v4_2 = v13.d
else
    v4_2 = v0_3

v10.d f- v0_3
float var_1e8 = v2_3
float var_1e4_1 = v3_3

if (v10.d f< v0_3)
    v3_3 = v10.d
else
    v3_3 = v0_3

if (not(v10.d f< v0_3))
    v0_3 = v10.d

float var_1e0_1 = v1_3
float var_1dc_1 = v4_2
float var_1d8 = v2_3
float var_1d4_1 = v3_3
float var_1d0_1 = v1_3
float var_1cc_1 = v0_3
int32_t x8_8 = *(arg1 + 0x1978)

if (x8_8 == 0)
    void* x0_12 = UI2Alloc(arg1)
    *(x0_12 + 0x198c) = 1
    x8_8 = *(x0_12 + 0x19a0)
    *(arg1 + 0x1978) = x8_8

UI2* x21_2 = *gUI2 + mulu.dp.d(x8_8 & 0xffff, 0x19a8)
*(x21_2 + 0x1688) = x20_6
*(x21_2 + 0x1690) = 0
UI2Update(x21_2, arg1, &var_180, false, var_44_1)
float v0_5
float v1_4
float v2_4
float v3_4
v0_5, v1_4, v2_4, v3_4 = RectFromCroppedRect(x21_2, &var_1a8)
*(x21_2 + 0x175c) = v2_4 - v0_5
*(x21_2 + 0x1760) = v3_4 - v1_4
float v7_1 = var_180:0xc.d
float v18_1 = v4.d
v2_4 = var_180.d
float v6_2 = var_180:4.d
float v16_1 = var_180:8.d
float v5_2 = *QI
v3_4 = *(QI + 4)
float v4_3 = *(QI + 8)
float v17_1 = *(QI + 0xc)
float v20_1 = v18_1 * v18_1
float v21_1 = v6_2 * v6_2
float v22_1 = v6_2 * v16_1
float v23_1 = v18_1 * v7_1
float v24_1 = v18_1 * v16_1
float v25_1 = v6_2 * v7_1
float v26_1 = v16_1 * v7_1
float v27_1 = v18_1 * v6_2
float v31_1 = v22_1 - v23_1
v22_1 = v22_1 + v23_1
v23_1 = v20_1 + v21_1
v20_1 = v20_1 - v21_1
v21_1 = v24_1 + v25_1
v24_1 = v25_1 - v24_1
v25_1 = v26_1 - v27_1
v26_1 = v27_1 + v26_1
float v28_1 = v17_1 * v18_1 - v5_2 * v6_2
float v29_1 = v3_4 * v18_1
v27_1 = v5_2 * v18_1 + v17_1 * v6_2
float v30_1 = v17_1 * v16_1
v17_1 = v4_3 * v18_1 + v17_1 * v7_1
v18_1 = v0_5 + v0_5
v29_1 = v29_1 + v30_1
v30_1 = v1_4 + v1_4
v22_1 = v18_1 * v22_1
v18_1 = v18_1 * v24_1
v24_1 = v16_1 * v16_1
v23_1 = v23_1 - v24_1
v31_1 = v30_1 * v31_1
v26_1 = v30_1 * v26_1
v30_1 = v20_1 + v24_1
v20_1 = v20_1 - v24_1
v24_1 = v28_1 - v3_4 * v16_1
v27_1 = v27_1 + v4_3 * v16_1
v16_1 = v5_2 * v16_1
v5_2 = v5_2 * v7_1
v28_1 = v3_4 * v6_2
v6_2 = v4_3 * v6_2
v4_3 = v4_3 * v7_1
v3_4 = v3_4 * v7_1
v7_1 = v7_1 * v7_1
v9.d = 0f
*(x21_2 + 0x16b4) = v27_1 - v3_4
*(x21_2 + 0x16b0) = v2_4
*(x21_2 + 0x16b8) = v5_2 + v29_1 - v6_2
*(x21_2 + 0x16bc) = v28_1 + v17_1 - v16_1
*(x21_2 + 0x16c0) = v24_1 - v4_3
*(x21_2 + 0x16c4) = v4:4.d + v2_4 * (v21_1 f* v9.d + v0_5 * (v23_1 - v7_1) + v31_1)
*(x21_2 + 0x16c8) = v4:8.d + v2_4 * (v25_1 f* v9.d + v22_1 + v1_4 * (v30_1 - v7_1))
*(x21_2 + 0x16cc) = v4:0xc.d + v2_4 * ((v20_1 + v7_1) f* v9.d + v18_1 + v26_1)
int32_t x8_10 = *(arg1 + 0x197c)

if (x8_10 == 0)
    void* x0_16 = UI2Alloc(arg1)
    *(x0_16 + 0x198c) = 1
    x8_10 = *(x0_16 + 0x19a0)
    *(arg1 + 0x197c) = x8_10

UI2* x21_3 = *gUI2 + mulu.dp.d(x8_10 & 0xffff, 0x19a8)
*(x21_3 + 0x1688) = x20_6
*(x21_3 + 0x1690) = 1
UI2Update(x21_3, arg1, &var_180, false, var_44_1)
float v0_7
float v1_5
float v2_5
float v3_5
v0_7, v1_5, v2_5, v3_5 = RectFromCroppedRect(x21_3, &var_1b8)
*(x21_3 + 0x175c) = v2_5 - v0_7
*(x21_3 + 0x1760) = v3_5 - v1_5
float v7_2 = var_180:0xc.d
float v18_2 = v4.d
v2_5 = var_180.d
float v6_3 = var_180:4.d
float v16_2 = var_180:8.d
float v5_3 = *QI
v3_5 = *(QI + 4)
float v4_4 = *(QI + 8)
float v17_2 = *(QI + 0xc)
float v20_2 = v18_2 * v18_2
float v21_2 = v6_3 * v6_3
float v22_2 = v6_3 * v16_2
float v23_2 = v18_2 * v7_2
float v24_2 = v18_2 * v16_2
float v25_2 = v6_3 * v7_2
float v26_2 = v16_2 * v7_2
float v27_2 = v18_2 * v6_3
float v31_2 = v22_2 - v23_2
v22_2 = v22_2 + v23_2
v23_2 = v20_2 + v21_2
v20_2 = v20_2 - v21_2
v21_2 = v24_2 + v25_2
v24_2 = v25_2 - v24_2
v25_2 = v26_2 - v27_2
v26_2 = v27_2 + v26_2
float v28_2 = v17_2 * v18_2 - v5_3 * v6_3
float v29_2 = v3_5 * v18_2
v27_2 = v5_3 * v18_2 + v17_2 * v6_3
float v30_2 = v17_2 * v16_2
v17_2 = v4_4 * v18_2 + v17_2 * v7_2
v18_2 = v0_7 + v0_7
v29_2 = v29_2 + v30_2
v30_2 = v1_5 + v1_5
v22_2 = v18_2 * v22_2
v18_2 = v18_2 * v24_2
v24_2 = v16_2 * v16_2
v23_2 = v23_2 - v24_2
v31_2 = v30_2 * v31_2
v26_2 = v30_2 * v26_2
v30_2 = v20_2 + v24_2
v20_2 = v20_2 - v24_2
v24_2 = v28_2 - v3_5 * v16_2
v27_2 = v27_2 + v4_4 * v16_2
v16_2 = v5_3 * v16_2
v5_3 = v5_3 * v7_2
v28_2 = v3_5 * v6_3
v6_3 = v4_4 * v6_3
v4_4 = v4_4 * v7_2
v3_5 = v3_5 * v7_2
v7_2 = v7_2 * v7_2
*(x21_3 + 0x16b4) = v27_2 - v3_5
*(x21_3 + 0x16b0) = v2_5
*(x21_3 + 0x16b8) = v5_3 + v29_2 - v6_3
*(x21_3 + 0x16bc) = v28_2 + v17_2 - v16_2
*(x21_3 + 0x16c0) = v24_2 - v4_4
*(x21_3 + 0x16c4) = v4:4.d + v2_5 * (v21_2 f* v9.d + v0_7 * (v23_2 - v7_2) + v31_2)
*(x21_3 + 0x16c8) = v4:8.d + v2_5 * (v25_2 f* v9.d + v22_2 + v1_5 * (v30_2 - v7_2))
*(x21_3 + 0x16cc) = v4:0xc.d + v2_5 * ((v20_2 + v7_2) f* v9.d + v18_2 + v26_2)
int32_t x8_12 = *(arg1 + 0x1980)

if (x8_12 == 0)
    void* x0_20 = UI2Alloc(arg1)
    *(x0_20 + 0x198c) = 1
    x8_12 = *(x0_20 + 0x19a0)
    *(arg1 + 0x1980) = x8_12

UI2* x21_4 = *gUI2 + mulu.dp.d(x8_12 & 0xffff, 0x19a8)
*(x21_4 + 0x1688) = x20_6
*(x21_4 + 0x1690) = 2
UI2Update(x21_4, arg1, &var_180, false, var_44_1)
float v0_9
float v1_6
float v2_6
float v3_6
v0_9, v1_6, v2_6, v3_6 = RectFromCroppedRect(x21_4, &var_1d8)
*(x21_4 + 0x175c) = v2_6 - v0_9
*(x21_4 + 0x1760) = v3_6 - v1_6
float v7_3 = var_180:0xc.d
float v18_3 = v4.d
v2_6 = var_180.d
float v6_4 = var_180:4.d
float v16_3 = var_180:8.d
float v5_4 = *QI
v3_6 = *(QI + 4)
float v4_5 = *(QI + 8)
float v17_3 = *(QI + 0xc)
float v20_3 = v18_3 * v18_3
float v21_3 = v6_4 * v6_4
float v22_3 = v6_4 * v16_3
float v23_3 = v18_3 * v7_3
float v24_3 = v18_3 * v16_3
float v25_3 = v6_4 * v7_3
float v26_3 = v16_3 * v7_3
float v27_3 = v18_3 * v6_4
float v31_3 = v22_3 - v23_3
v22_3 = v22_3 + v23_3
v23_3 = v20_3 + v21_3
v20_3 = v20_3 - v21_3
v21_3 = v24_3 + v25_3
v24_3 = v25_3 - v24_3
v25_3 = v26_3 - v27_3
v26_3 = v27_3 + v26_3
float v28_3 = v17_3 * v18_3 - v5_4 * v6_4
float v29_3 = v3_6 * v18_3
v27_3 = v5_4 * v18_3 + v17_3 * v6_4
float v30_3 = v17_3 * v16_3
v17_3 = v4_5 * v18_3 + v17_3 * v7_3
v18_3 = v0_9 + v0_9
v29_3 = v29_3 + v30_3
v30_3 = v1_6 + v1_6
v22_3 = v18_3 * v22_3
v18_3 = v18_3 * v24_3
v24_3 = v16_3 * v16_3
v23_3 = v23_3 - v24_3
v31_3 = v30_3 * v31_3
v26_3 = v30_3 * v26_3
v30_3 = v20_3 + v24_3
v20_3 = v20_3 - v24_3
v24_3 = v28_3 - v3_6 * v16_3
v27_3 = v27_3 + v4_5 * v16_3
v16_3 = v5_4 * v16_3
v5_4 = v5_4 * v7_3
v28_3 = v3_6 * v6_4
v6_4 = v4_5 * v6_4
v4_5 = v4_5 * v7_3
v3_6 = v3_6 * v7_3
v7_3 = v7_3 * v7_3
v9.d = 0f
*(x21_4 + 0x16b4) = v27_3 - v3_6
*(x21_4 + 0x16b0) = v2_6
*(x21_4 + 0x16b8) = v5_4 + v29_3 - v6_4
*(x21_4 + 0x16bc) = v28_3 + v17_3 - v16_3
*(x21_4 + 0x16c0) = v24_3 - v4_5
*(x21_4 + 0x16c4) = v4:4.d + v2_6 * (v21_3 f* v9.d + v0_9 * (v23_3 - v7_3) + v31_3)
*(x21_4 + 0x16c8) = v4:8.d + v2_6 * (v25_3 f* v9.d + v22_3 + v1_6 * (v30_3 - v7_3))
*(x21_4 + 0x16cc) = v4:0xc.d + v2_6 * ((v20_3 + v7_3) f* v9.d + v18_3 + v26_3)
int32_t x8_14 = *(arg1 + 0x1984)

if (x8_14 == 0)
    void* x0_24 = UI2Alloc(arg1)
    *(x0_24 + 0x198c) = 1
    x8_14 = *(x0_24 + 0x19a0)
    *(arg1 + 0x1984) = x8_14

UI2* x21_5 = *gUI2 + mulu.dp.d(x8_14 & 0xffff, 0x19a8)
*(x21_5 + 0x1688) = x20_6
*(x21_5 + 0x1690) = 3
UI2Update(x21_5, arg1, &var_180, false, var_44_1)
float v0_11
float v1_7
float v2_7
float v3_7
v0_11, v1_7, v2_7, v3_7 = RectFromCroppedRect(x21_5, &var_1e8)
*(x21_5 + 0x175c) = v2_7 - v0_11
*(x21_5 + 0x1760) = v3_7 - v1_7
float v7_4 = var_180:0xc.d
float v18_4 = v4.d
v2_7 = var_180.d
float v6_5 = var_180:4.d
float v16_4 = var_180:8.d
float v5_5 = *QI
v3_7 = *(QI + 4)
float v4_6 = *(QI + 8)
float v17_4 = *(QI + 0xc)
float v20_4 = v18_4 * v18_4
float v21_4 = v6_5 * v6_5
float v22_4 = v6_5 * v16_4
float v23_4 = v18_4 * v7_4
float v24_4 = v18_4 * v16_4
float v25_4 = v6_5 * v7_4
float v26_4 = v16_4 * v7_4
float v27_4 = v18_4 * v6_5
float v31_4 = v22_4 - v23_4
v22_4 = v22_4 + v23_4
v23_4 = v20_4 + v21_4
v20_4 = v20_4 - v21_4
v21_4 = v24_4 + v25_4
v24_4 = v25_4 - v24_4
v25_4 = v26_4 - v27_4
v26_4 = v27_4 + v26_4
float v28_4 = v17_4 * v18_4 - v5_5 * v6_5
float v29_4 = v3_7 * v18_4
v27_4 = v5_5 * v18_4 + v17_4 * v6_5
float v30_4 = v17_4 * v16_4
v17_4 = v4_6 * v18_4 + v17_4 * v7_4
v18_4 = v0_11 + v0_11
v29_4 = v29_4 + v30_4
v30_4 = v1_7 + v1_7
v22_4 = v18_4 * v22_4
v18_4 = v18_4 * v24_4
v24_4 = v16_4 * v16_4
v23_4 = v23_4 - v24_4
v31_4 = v30_4 * v31_4
v26_4 = v30_4 * v26_4
v30_4 = v20_4 + v24_4
v20_4 = v20_4 - v24_4
v24_4 = v28_4 - v3_7 * v16_4
v27_4 = v27_4 + v4_6 * v16_4
v16_4 = v5_5 * v16_4
v5_5 = v5_5 * v7_4
v28_4 = v3_7 * v6_5
v6_5 = v4_6 * v6_5
v4_6 = v4_6 * v7_4
v3_7 = v3_7 * v7_4
v7_4 = v7_4 * v7_4
*(x21_5 + 0x16b4) = v27_4 - v3_7
*(x21_5 + 0x16b0) = v2_7
*(x21_5 + 0x16b8) = v5_5 + v29_4 - v6_5
*(x21_5 + 0x16bc) = v28_4 + v17_4 - v16_4
*(x21_5 + 0x16c0) = v24_4 - v4_6
*(x21_5 + 0x16c4) = v4:4.d + v2_7 * (v21_4 f* v9.d + v0_11 * (v23_4 - v7_4) + v31_4)
*(x21_5 + 0x16c8) = v4:8.d + v2_7 * (v25_4 f* v9.d + v22_4 + v1_7 * (v30_4 - v7_4))
*(x21_5 + 0x16cc) = v4:0xc.d + v2_7 * ((v20_4 + v7_4) f* v9.d + v18_4 + v26_4)
var_b0.d = memcrc32(&var_1c8, 0x10, 0)
int32_t x8_16 = *(arg1 + 0x1988)

if (x8_16 == 0)
    void* x0_30 = UI2Alloc(arg1)
    *(x0_30 + 0x198c) = 1
    x8_16 = *(x0_30 + 0x19a0)
    *(arg1 + 0x1988) = x8_16

UI2* x21_6 = *gUI2 + mulu.dp.d(x8_16 & 0xffff, 0x19a8)
*(x21_6 + 0x1688) = x20_6
*(x21_6 + 0x1690) = 4
UI2Update(x21_6, arg1, &var_180, false, var_44_1)
float v0_13
float v1_8
float v2_8
float v3_8
arg1, v0_13, v1_8, v2_8, v3_8 = RectFromCroppedRect(x21_6, &var_1c8)
*(x21_6 + 0x175c) = v2_8 - v0_13
*(x21_6 + 0x1760) = v3_8 - v1_8
float v7_5 = var_180:0xc.d
float v18_5 = v4.d
v2_8 = var_180.d
float v6_6 = var_180:4.d
float v16_5 = var_180:8.d
float v5_6 = *QI
v3_8 = *(QI + 4)
float v4_7 = *(QI + 8)
float v17_5 = *(QI + 0xc)
float v20_5 = v18_5 * v18_5
float v21_5 = v6_6 * v6_6
float v22_5 = v6_6 * v16_5
float v23_5 = v18_5 * v7_5
float v24_5 = v18_5 * v16_5
float v25_5 = v6_6 * v7_5
float v26_5 = v16_5 * v7_5
float v27_5 = v18_5 * v6_6
float v31_5 = v22_5 - v23_5
v22_5 = v22_5 + v23_5
v23_5 = v20_5 + v21_5
v20_5 = v20_5 - v21_5
v21_5 = v24_5 + v25_5
v24_5 = v25_5 - v24_5
v25_5 = v26_5 - v27_5
v26_5 = v27_5 + v26_5
float v28_5 = v17_5 * v18_5 - v5_6 * v6_6
float v29_5 = v3_8 * v18_5
v27_5 = v5_6 * v18_5 + v17_5 * v6_6
float v30_5 = v17_5 * v16_5
v17_5 = v4_7 * v18_5 + v17_5 * v7_5
v18_5 = v0_13 + v0_13
v29_5 = v29_5 + v30_5
v30_5 = v1_8 + v1_8
v22_5 = v18_5 * v22_5
v18_5 = v18_5 * v24_5
v24_5 = v16_5 * v16_5
v23_5 = v23_5 - v24_5
v31_5 = v30_5 * v31_5
v26_5 = v30_5 * v26_5
v30_5 = v20_5 + v24_5
v20_5 = v20_5 - v24_5
v24_5 = v28_5 - v3_8 * v16_5
v27_5 = v27_5 + v4_7 * v16_5
v16_5 = v5_6 * v16_5
v5_6 = v5_6 * v7_5
v28_5 = v3_8 * v6_6
v6_6 = v4_7 * v6_6
v4_7 = v4_7 * v7_5
v3_8 = v3_8 * v7_5
v7_5 = v7_5 * v7_5
v17_5 = v28_5 + v17_5
v28_5 = 0f
*(x21_6 + 0x16b4) = v27_5 - v3_8
*(x21_6 + 0x16b0) = v2_8
*(x21_6 + 0x16b8) = v5_6 + v29_5 - v6_6
*(x21_6 + 0x16bc) = v17_5 - v16_5
*(x21_6 + 0x16c0) = v24_5 - v4_7
*(x21_6 + 0x16c4) = v4:4.d + v2_8 * (v21_5 * v28_5 + v0_13 * (v23_5 - v7_5) + v31_5)
*(x21_6 + 0x16c8) = v4:8.d + v2_8 * (v25_5 * v28_5 + v22_5 + v1_8 * (v30_5 - v7_5))
*(x21_6 + 0x16cc) = v4:0xc.d + v2_8 * ((v20_5 + v7_5) * v28_5 + v18_5 + v26_5)
