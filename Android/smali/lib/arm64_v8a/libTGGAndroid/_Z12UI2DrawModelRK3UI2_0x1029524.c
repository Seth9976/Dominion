// 函数: _Z12UI2DrawModelRK3UI2
// 地址: 0x1029524
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
int64_t v8
int64_t var_58 = v8
XAsset* x19 = *(arg1 + 0x14a0)

if (x19 == 0)
    return 

int64_t* x0_1
int128_t v1_1
int128_t v3_1
x0_1, v1_1, v3_1 = StructureGetDef(x19)
void* x8_1 = *x0_1
float v0_1 = *(x8_1 + 0x40)
v1_1.q = *(x8_1 + 0x44)
float v2_1 = *(x8_1 + 0x4c)
v3_1.q = *(x8_1 + 0x50)
int32_t v4_1 = *(arg1 + 0x175c)
int32_t v5_1 = *(arg1 + 0x1760)
double v1_2 = vsub_f32(v3_1, v1_1)
float v7_1 = *(TI + 0x14)
v8.d = *TI
v10.d = *(TI + 4)
v12.d = *(TI + 8)
v11.d = *(TI + 0xc)
float var_48_1 = *(TI + 0x10)
float v6_1 = *(TI + 0x18)
v14.d = *(TI + 0x1c)
v13.d = v1_2:4.d
float var_200_1 = v1_2.d

if (v13.d f> v1_2.d)
    v1_2.d = v13.d
else
    v1_2.d = v1_2.d

v9.d = v4_1 f/ (v2_1 - v0_1)
v15.d = v5_1 f/ v1_2.d
float v0_2
int128_t v20_1
int128_t v27_1
v0_2, v20_1, v27_1 = GameGetTimeSimulation()
float var_44_1 = v0_2
float var_190
float var_188_1
float var_150
int128_t var_110
int128_t var_d0
int128_t v0_4
int128_t v1_5
int128_t v2_4
int128_t v3_4
float var_1d0
float v1_3
float v2_2
float v3_2
float v4_2
float v5_2
float v6_2
float v7_2
float v16_1
float v17_1
float v18_1
float v19_1
float v21_1
float v22_1
float v23_1
float v24_1
float v25_1
float v26_1
float v28_1

if (*(arg1 + 0x143c) != 9)
    v18_1 = v10.d f+ v10.d
    v22_1 = v12.d f* v18_1
    v24_1 = v18_1 f* v11.d
    v19_1 = var_48_1 + var_48_1
    v23_1 = v11.d f* v19_1
    v25_1 = v12.d f* v19_1
    v27_1.d = v22_1 - v23_1
    v22_1 = v22_1 + v23_1
    v1_3 = *(arg1 + 0x16b8)
    v2_2 = *(arg1 + 0x16bc)
    v4_2 = *(arg1 + 0x16b4)
    v7_2 = *(arg1 + 0x16c0)
    v13.d f- var_200_1
    bool cond:2_1 = v13.d f> var_200_1
    v0_2 = *(arg1 + 0x16b0)
    v3_2 = *(arg1 + 0x16c4)
    v5_2 = *(arg1 + 0x16c8)
    v6_2 = *(arg1 + 0x16cc)
    v16_1 = v12.d f+ v12.d
    var_188_1 = v8.d f* (v24_1 + v25_1)
    float var_184_2 = v7_1
    int32_t v29_2 = v14.d
    v14.d = fconvert.s(1f)
    v21_1 = v12.d f* v16_1
    v16_1 = v16_1 f* v11.d
    v19_1 = v10.d f* v19_1
    v17_1 = v11.d f* (v11.d f+ v11.d)
    v18_1 = v14.d f- v10.d f* v18_1
    v24_1 = v24_1 - v25_1
    v25_1 = v16_1 - v19_1
    v16_1 = v16_1 + v19_1
    v20_1.d = fconvert.s(1f)
    v19_1 = v14.d f- v21_1 - v17_1
    v26_1 = v8.d f* v27_1.d
    v17_1 = v18_1 - v17_1
    v18_1 = v18_1 - v21_1
    v21_1 = v1_3 + v1_3
    v27_1.d = v2_2 + v2_2
    v28_1 = v4_2 + v4_2
    v7_2 = v7_2 + v7_2
    
    if (v13.d f> var_200_1)
        v13.d = v15.d
    else
        v13.d = v20_1.d
    
    if (cond:2_1)
        v15.d = v20_1.d
    else
        v15.d = v15.d
    
    v20_1 = data_71cfa0
    float var_178_2 = v8.d f* v25_1
    float var_174_2 = v6_1
    float var_170_2 = v8.d f* v24_1
    float var_16c_2 = v8.d f* v16_1
    v16_1 = v1_3 * v21_1
    v23_1 = v2_2 f* v27_1.d
    v24_1 = v1_3 * v28_1
    v25_1 = v2_2 * v7_2
    v27_1.d = v2_2 * v28_1
    v1_3 = v1_3 * v7_2
    v28_1 = v4_2 * v28_1
    v2_2 = v21_1 * v2_2
    v4_2 = v4_2 * v7_2
    var_190 = v8.d f* v19_1
    float var_18c_2 = v26_1
    float var_180_2 = v8.d f* v22_1
    float var_17c_2 = v8.d f* v17_1
    float var_168_2 = v8.d f* v18_1
    int32_t var_164_2 = v29_2
    v21_1 = v14.d f- v28_1
    float var_148_1 = v0_2 * (v27_1.d f+ v1_3)
    float var_144_1 = v3_2
    float var_138_1 = v0_2 * (v2_2 - v4_2)
    float var_134_1 = v5_2
    float var_12c_1 = v0_2 * (v2_2 + v4_2)
    var_150 = v0_2 * (v14.d f- v16_1 - v23_1)
    float var_14c_1 = v0_2 * (v24_1 - v25_1)
    float var_13c_1 = v0_2 * (v21_1 - v23_1)
    float var_128_1 = v0_2 * (v21_1 - v16_1)
    float var_124_1 = v6_2
    int128_t var_160_2 = v20_1
    Mat4Multiply(&var_150, &var_190)
    float v1_6 = fconvert.s(0.5f)
    float v4_5 = *QI
    float v3_5 = *(QI + 4)
    float v5_4 = *(QI + 8)
    float v6_4 = *(QI + 0xc)
    int128_t var_1a0
    var_1a0:0xc.d = 0x3f800000
    float v2_5 = v3_5 + v3_5
    float v16_3 = v4_5 + v4_5
    v6_4 = v6_4 + v6_4
    float v17_3 = v3_5 * v2_5
    float v18_3 = v3_5 * v16_3
    float v20_2 = v5_4 * v16_3
    v16_3 = v4_5 * v16_3
    float v7_4 = v5_4 * (v5_4 + v5_4)
    float v19_3 = v5_4 * v6_4
    v3_5 = v3_5 * v6_4
    v2_5 = v2_5 * v5_4
    v4_5 = v4_5 * v6_4
    v16_3 = v14.d f- v16_3
    var_1a0:4.q = 0
    int32_t var_1a4
    var_1a4.q = 0
    float var_1c8_2 = v13.d f* (v20_2 + v3_5)
    float var_1c4_2 = *(arg1 + 0x175c) * v1_6
    float var_1b8_2 = v13.d f* (v2_5 - v4_5)
    float var_1b4_2 = *(arg1 + 0x1760) * v1_6
    float var_1b0_2 = v9.d f* (v20_2 - v3_5)
    float var_1ac_2 = v15.d f* (v2_5 + v4_5)
    var_1d0 = v9.d f* (v14.d f- v17_3 - v7_4)
    float var_1cc_2 = v15.d f* (v18_3 - v19_3)
    float var_1c0_2 = v9.d f* (v18_3 + v19_3)
    float var_1bc_2 = v15.d f* (v16_3 - v7_4)
    float var_1a8_2 = v13.d f* (v16_3 - v17_3)
    Mat4Multiply(&var_d0, &var_1d0)
    v0_4, v1_5, v2_4, v3_4 = Mat4Multiply(*gpRenderAppData + 0x124, &var_110)
    v0_4 = var_150.o
    v1_5 = (v0_2 * (v24_1 + v25_1)).o
    v2_4 = (v0_2 * (v27_1.d f- v1_3)).o
    v3_4 = v20_1
else
    v0_2 = *(arg1 + 0x16b0)
    v5_2 = *(arg1 + 0x16c0)
    v2_2 = *(arg1 + 0x16b4)
    v3_2 = *(arg1 + 0x16b8)
    v1_3 = *(arg1 + 0x16bc)
    v7_2 = fconvert.s(0.5f)
    v4_2 = *(arg1 + 0x175c) * v7_2
    v6_2 = *(arg1 + 0x1760) * v7_2
    v7_2 = v0_2 * 0f
    v16_1 = v5_2 * v5_2
    v17_1 = v2_2 * v2_2
    v19_1 = v2_2 * v3_2
    v20_1.d = v5_2 * v1_3
    v21_1 = v5_2 * v3_2
    v22_1 = v2_2 * v1_3
    v23_1 = v3_2 * v1_3
    v24_1 = v5_2 * v2_2
    v25_1 = v3_2 + v3_2
    v26_1 = v2_2 + v2_2
    v5_2 = v5_2 + v5_2
    v18_1 = v3_2 * v3_2
    v4_2 = v4_2 * v0_2
    v27_1.d = v16_1 + v17_1
    v28_1 = v19_1 f- v20_1.d
    float v29_1 = v7_2 + v7_2
    float v30_1 = v21_1 + v22_1
    v19_1 = v19_1 f+ v20_1.d
    v16_1 = v16_1 - v17_1
    v17_1 = v23_1 - v24_1
    v20_1.d = v22_1 - v21_1
    v21_1 = v24_1 + v23_1
    v22_1 = v3_2 * v25_1
    v23_1 = v3_2 * v26_1
    v24_1 = v5_2 * v1_3
    v3_2 = v5_2 * v3_2
    v5_2 = v2_2 * v5_2
    v2_2 = v2_2 * v26_1
    v26_1 = v26_1 * v1_3
    v25_1 = v25_1 * v1_3
    v6_2 = v0_2 * v6_2
    v27_1.d = v27_1.d f- v18_1
    v30_1 = v29_1 * v30_1
    v17_1 = v29_1 * v17_1
    v29_1 = v16_1 + v18_1
    v16_1 = v16_1 - v18_1
    v18_1 = v23_1 - v24_1
    v23_1 = v23_1 + v24_1
    v24_1 = v3_2 + v26_1
    v3_2 = v26_1 - v3_2
    v26_1 = v25_1 - v5_2
    v5_2 = v5_2 + v25_1
    v25_1 = v4_2 + v4_2
    v19_1 = v25_1 * v19_1
    v20_1.d = v25_1 f* v20_1.d
    v25_1 = v6_2 + v6_2
    v28_1 = v25_1 * v28_1
    v21_1 = v25_1 * v21_1
    v14.d = fconvert.s(1f)
    v25_1 = v1_3 * (v1_3 + v1_3)
    v1_3 = v1_3 * v1_3
    v27_1.d = v27_1.d f- v1_3
    v29_1 = v29_1 - v1_3
    v1_3 = v16_1 + v1_3
    v2_2 = v14.d f- v2_2
    v16_1 = v14.d f- v22_1 - v25_1
    v25_1 = v2_2 - v25_1
    v2_2 = v2_2 - v22_1
    v22_1 = *(arg1 + 0x16c4)
    v20_1.d = v20_1.d f+ v21_1
    v21_1 = *(arg1 + 0x16c8)
    v1_3 = v7_2 * v1_3
    v7_2 = *(arg1 + 0x16cc)
    v4_2 = v4_2 f* v27_1.d
    v27_1 = data_71cfa0
    float var_170_1 = v0_2 * v3_2
    float var_16c_1 = v0_2 * v5_2
    Mat4* x0_2 = *gpRenderAppData + 0x124
    float var_168_1 = v0_2 * v2_2
    float var_164_1 = v7_2
    
    if (v9.d f< v15.d)
        v8.d = v9.d
    else
        v8.d = v15.d
    
    float var_1e0_1
    var_1e0_1.o = v27_1
    var_188_1 = v0_2 * v24_1
    float var_184_1 = v22_1
    float var_178_1 = v0_2 * v26_1
    float var_174_1 = v21_1
    var_190 = v0_2 * v16_1
    float var_18c_1 = v0_2 * v18_1
    float var_180_1 = v0_2 * v23_1
    float var_17c_1 = v0_2 * v25_1
    v9.d = v7_2 + v1_3 f+ v20_1.d
    v13.d = v22_1 + v30_1 + v4_2 + v28_1
    v15.d = v21_1 + v17_1 + v19_1 + v6_2 * v29_1
    int128_t var_160_1 = v27_1
    Mat4Multiply(x0_2, &var_190)
    int128_t v0_3
    v0_3.d = v12.d f+ v12.d
    float v2_3 = v10.d f+ v10.d
    float v4_3 = v12.d f* v0_3.d
    float v3_3 = var_48_1 + var_48_1
    float v5_3 = v12.d f* v2_3
    float v6_3 = v11.d f* v3_3
    float v7_3 = v2_3 f* v11.d
    float v16_2 = v12.d f* v3_3
    v0_3.d = v0_3.d f* v11.d
    v3_3 = v10.d f* v3_3
    float v18_2 = v5_3 - v6_3
    v5_3 = v5_3 + v6_3
    v6_3 = v0_3.d f- v3_3
    v0_3.d = v0_3.d f+ v3_3
    v0_3.d = v0_3.d f* v8.d
    float var_1b0_1 = (v7_3 - v16_2) f* v8.d
    int32_t var_1ac_1 = v0_3.d
    float v1_4 = v11.d f* (v11.d f+ v11.d)
    v2_3 = v14.d f- v10.d f* v2_3
    float var_1c8_1 = (v7_3 + v16_2) f* v8.d
    int32_t var_1c4_1 = v13.d
    float var_1b8_1 = v6_3 f* v8.d
    int32_t var_1b4_1 = v15.d
    var_1d0 = (v14.d f- v4_3 - v1_4) f* v8.d
    float var_1cc_1 = v18_2 f* v8.d
    float var_1c0_1 = v5_3 f* v8.d
    float var_1bc_1 = (v2_3 - v1_4) f* v8.d
    float var_1a8_1 = (v2_3 - v4_3) f* v8.d
    int32_t var_1a4_1 = v9.d
    int128_t var_1a0_1 = var_1e0_1.o
    v0_4, v1_5, v2_4, v3_4 = Mat4Multiply(&var_150, &var_1d0)
    v0_4 = var_110
    int128_t var_100
    v1_5 = var_100
    int128_t var_f0
    v2_4 = var_f0
    int128_t var_e0
    v3_4 = var_e0
var_d0 = v0_4
int128_t var_c0_1 = v1_5
int128_t var_b0_1 = v2_4
int128_t var_a0_1 = v3_4
v0_4.d = *(arg1 + 0x1348)
v1_5.d = 0f

if (zx.d(*(arg1 + 0x14f8)) == 0)
    v0_4.d = v1_5.d
else
    v0_4.d = v0_4.d

*(gDraw3DData + 0x564) = v0_4.d
v0_4.d = *(arg1 + 0x704)
v2_4.d = *(arg1 + 0x6f4)
v3_4.d = *(arg1 + 0x6f0)
v1_5.d = var_44_1 f- v0_4.d
v0_4.d = v2_4.d f+ v3_4.d
int32_t x0_8

if (v1_5.d f< v0_4.d || *(arg1 + 0x6e4) s> 1)
    v0_4.d = *(arg1 + 0x700)
    v0_4.d = var_44_1 f- v0_4.d
    x0_8, v0_4, v1_5, v2_4, v3_4 =
        PropEval<ColorRgbaI>(arg1 + 0x678, arg1 + 0x6b4, arg1 + 0x6f0, v0_4.d, v1_5.d, v1_5.d)
else
    x0_8 = *(arg1 + 0x6b4)

v0_4.d = float.s(x0_8 & 0xff)
v1_5.d = float.s(0x437f0000)
v2_4.d = float.s(x0_8 u>> 8 & 0xff)
v0_4.d = v0_4.d f/ v1_5.d
v2_4.d = v2_4.d f/ v1_5.d
var_110.d = v0_4.d
var_110:4.d = v2_4.d
v0_4.d = *(arg1 + 0x1710)
v3_4.d = float.s(x0_8 u>> 0x10 & 0xff)
v2_4.d = float.s(x0_8 u>> 0x18)
v3_4.d = v3_4.d f/ v1_5.d
v1_5.d = v2_4.d f/ v1_5.d
v0_4.d = v1_5.d f* v0_4.d
var_110:8.d = v3_4.d
var_110:0xc.d = v0_4.d
int128_t v0_6 = GameGetTimeSimulation()

if (zx.d(*(arg1 + 0x14f8)) == 0)
    v0_6.d = v0_6.d
else
    v0_6.d = v0_6.d f- *(arg1 + 0x1348)

*(gDraw3DData + 0x568) = v0_6.d
var_150.o = *(gDraw3DData + 0x4bc)
Draw3DSetMaterialColor(&var_110)
XAsset* x21_2 = *(arg1 + 0x14f0)

if (x21_2 != 0 && *(x21_2 + 8) == 0x1d)
    x21_2 = MaterialFn_EmitMaterial(x21_2)

XAsset* x23_1 = *(arg1 + 0x1460)
int64_t x25_1 = *(arg1 + 0x14a8)
var_190.q = x23_1
var_188_1.q = *(arg1 + 0x14b0)
int32_t v0_7
int32_t v1_8
int32_t v2_7
int32_t v3_6
v0_7, v1_8, v2_7, v3_6 = TextureAtlasUVs(x23_1)
int32_t x22_1 = *(gDraw3DData + 0x4b8)
*(gDraw3DData + 0x574) = v0_7
*(gDraw3DData + 0x578) = v1_8
*(gDraw3DData + 0x57c) = v2_7
*(gDraw3DData + 0x580) = v3_6
Draw3DSetSortOverride(1)

if (x25_1 == 0)
    Draw3DStructureTexturesMatrix(x19, &var_d0, x21_2, &var_190, 2, nullptr)
else
    Structure* x0_14 = StructureTryToGet(zx.q(*(arg1 + 0x13ec)))
    
    if (x0_14 != 0)
        Draw3DStructureMatrix(x19, &var_d0, x21_2, x23_1, x0_14)

Draw3DSetMaterialColor(&var_150)
Draw3DSetSortOverride(zx.q(x22_1))
*(gDraw3DData + 0x564) = 0
