// 函数: _Z14UI2SpineUpdateR3UI2f
// 地址: 0x10238c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_50 = v12
uint64_t v11
uint64_t var_40 = v11
int64_t v10
int64_t var_38 = v10
int64_t v9
int64_t var_30 = v9
int64_t v8
int64_t var_28 = v8

if (*(arg1 + 0x1710) f== 0f)
    return 

UI2& x19_1 = arg1
XAsset* x20_1 = *(arg1 + 0x14b8)
uint32_t x0 = *(arg1 + 0x13c0)

if (x20_1 == 0)
    if (x0 != 0)
        SpineDestroy(x0)
        *(x19_1 + 0x13c0) = 0
else
    uint32_t x0_4
    char* x1_2
    
    if (x0 == 0)
        x0_4 = SpineCreate(x20_1, *(x19_1 + 0x14c8))
        x1_2 = *(x19_1 + 0x14d8)
        *(x19_1 + 0x13c0) = x0_4
        
        if (x1_2 != 0)
        label_1023960:
            
            if (zx.d(*x1_2) != 0)
                SpinePlay(x0_4, x1_2, zx.q(*(x19_1 + 0x14c0)))
                *(x19_1 + 0x14d8)
                XString::operator=(x19_1 + 0x1388)
                *(x19_1 + 0x1398) = *(x19_1 + 0x14c0)
    else if (x20_1 != SpineSource(x0))
        char* x21_1 = *(x19_1 + 0x14c8)
        SpineDestroy(*(x19_1 + 0x13c0))
        x0_4 = SpineCreate(x20_1, x21_1)
        x1_2 = *(x19_1 + 0x14d8)
        *(x19_1 + 0x13c0) = x0_4
        
        if (x1_2 != 0)
            goto label_1023960

arg1 = zx.q(*(x19_1 + 0x13c0))

if (arg1.d == 0)
    return 

int64_t v0
int64_t v1_1
uint64_t v2_1
int64_t v3_1
v0, v1_1, v2_1, v3_1 = SpineExtents(arg1.d)
v9 = v0
v10 = v1_1
v0.d = *(x19_1 + 0x175c)
v1_1.d = *(x19_1 + 0x1760)
v11 = v2_1
v12 = v3_1
v3_1.d = v11.d f- v9.d
float v4_1 = v12.d f- v10.d
float v5_1 = v0.d f/ v3_1.d
uint64_t var_60 = *V20
v2_1.d = v1_1.d f/ v4_1

if (not(v5_1 f< v2_1.d))
    v5_1 = v2_1.d

v2_1.d = v3_1.d f* v5_1
v3_1.d = v4_1 * v5_1
int32_t var_48 = v2_1.d
int32_t var_44_1 = v3_1.d
int32_t var_58_1 = v0.d
int32_t var_54_1 = v1_1.d
int64_t v0_1
float v1_2
float v2_2
float v3_2
uint64_t v6_1
v0_1, v1_2, v2_2, v3_2, v6_1 = RectAlignedWithinRect(&var_60, &var_48, 5)
v2_2 = v0_1.d f+ v2_2
v3_2 = v1_2 + v3_2
v0_1.d = *(x19_1 + 0x16b0)
float v16_1 = *(x19_1 + 0x16c0)
float v17_1 = *(x19_1 + 0x16b4)
float v18_1 = *(x19_1 + 0x16b8)
float v19_1 = *(x19_1 + 0x16bc)
v1_2 = *(x19_1 + 0x14c4)
uint32_t x0_8 = *(x19_1 + 0x13c0)
float v4_2 = fconvert.s(0.5f)
v6_1.d = v10.d f+ v12.d
v2_2 = v2_2 * v4_2 - (v9.d f+ v11.d) * v4_2 * v5_1
v3_2 = v3_2 * v4_2 - v6_1.d f* v4_2 * v5_1
v4_2 = v0_1.d f* 0f
float v5_2 = v16_1 * v16_1
float v7_1 = v17_1 * v17_1
float v22_1 = v17_1 * v18_1
float v23_1 = v16_1 * v19_1
float v24_1 = v16_1 * v18_1
v16_1 = v16_1 * v17_1
v17_1 = v24_1 + v17_1 * v19_1
v24_1 = v22_1 - v23_1
v22_1 = v22_1 + v23_1
v23_1 = v5_2 + v7_1
v5_2 = v5_2 - v7_1
v7_1 = v18_1 * v18_1
v2_2 = v0_1.d f* v2_2
v3_2 = v0_1.d f* v3_2
v18_1 = v18_1 * v19_1
v19_1 = v19_1 * v19_1
v6_1.d = (*V21).d f* v5_1
v6_1:4.d = v6_1:4.d f* v5_1
v0_1.d = v6_1.d f* v0_1.d
v0_1:4.d = v6_1:4.d f* v0_1.d
v6_1.d = v23_1 - v7_1 - v19_1
v4_2 = v4_2 + v4_2
v22_1 = (v2_2 + v2_2) * v22_1
v2_2 = *(x19_1 + 0x16c4) + v4_2 * v17_1 + v2_2 f* v6_1.d + (v3_2 + v3_2) * v24_1
v3_2 = *(x19_1 + 0x16c8) + v4_2 * (v18_1 - v16_1) + v22_1 + v3_2 * (v5_2 + v7_1 - v19_1)
int64_t var_68 = v0_1
var_60.d = v2_2
var_60:4.d = v3_2
SpineUpdate(x0_8, &var_60, &var_68, arg2.q.d, v1_2)
