// 函数: _Z16UI2DrawImageSlowRK3UI2b
// 地址: 0x1029f58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8

if (not(*(arg1 + 0x1710) f!= 0f))
    return 

XAsset* x19_1 = *(arg1 + 0x1460)
UI2 const& x21_1 = arg1

if (x19_1 == 0)
    return 

XAsset* x20_1 = *(x21_1 + 0x14b0)
v8 = GameGetTimeSimulation()
int64_t v0_1
v0_1.d = *(x21_1 + 0x704)
float v1_1 = v8.d f- v0_1.d
v0_1.d = *(x21_1 + 0x6f4) f+ *(x21_1 + 0x6f0)
float x0_1

if (v1_1 f< v0_1.d || *(x21_1 + 0x6e4) s> 1)
    v0_1.d = *(x21_1 + 0x700)
    v0_1.d = v8.d f- v0_1.d
    x0_1 = PropEval<ColorRgbaI>(x21_1 + 0x678, x21_1 + 0x6b4, x21_1 + 0x6f0, v0_1.d, v1_1, v1_1)
else
    x0_1 = *(x21_1 + 0x6b4)

float var_f0 = x0_1
float128 v0_2
float128 v1_2
int128_t v17_1
arg1, v0_2, v1_2, v17_1 = ColorMult(&var_f0, x21_1 + 0x1704)
int32_t x23_2 = arg1.d
int32_t x24_1 = (arg1 u>> 0x18).d & 0xff
int32_t var_68 = x23_2

if (x24_1 == 0)
    return 

v0_2.d = *(x21_1 + 0x9d4)
v1_2.d = v8.d f- v0_2.d
v0_2.d = *(x21_1 + 0x9c4) f+ *(x21_1 + 0x9c0)
int32_t x0_4

if (v1_2.d f< v0_2.d || *(x21_1 + 0x9b4) s> 1)
    v0_2.d = *(x21_1 + 0x9d0)
    v0_2.d = v8.d f- v0_2.d
    x0_4, v0_2, v1_2, v17_1 =
        PropEval<ColorRgbaI>(x21_1 + 0x948, x21_1 + 0x984, x21_1 + 0x9c0, v0_2.d, v1_2.d, v1_2.d)
else
    x0_4 = *(x21_1 + 0x984)

v1_2.d = *(x21_1 + 0x1714)
v0_2.d = *(x21_1 + 0x1718)
uint32_t x8_3

if (not(v1_2.d f<= float.s(0x3f7fbe77)))
    x8_3 = 0xff
else if (v1_2.d f>= float.s(0x3a83126f))
    v1_2.d = v1_2.d f* float.s(0x437f0000)
    v1_2.d = v1_2.d f+ fconvert.s(0.5f)
    x8_3 = vcvts_s32_f32(v1_2.d)
else
    x8_3 = 0

v1_2.d = *(x21_1 + 0x171c)
uint32_t x9_1

if (not(v0_2.d f<= float.s(0x3f7fbe77)))
    x9_1 = 0xff00
else if (v0_2.d f>= float.s(0x3a83126f))
    v0_2.d = v0_2.d f* float.s(0x437f0000)
    v0_2.d = v0_2.d f+ fconvert.s(0.5f)
    x9_1 = vcvts_s32_f32(v0_2.d) << 8
else
    x9_1 = 0

v0_2.d = *(x21_1 + 0x1720)
uint32_t x12_1

if (not(v1_2.d f<= float.s(0x3f7fbe77)))
    x12_1 = 0xff0000
else if (v1_2.d f>= float.s(0x3a83126f))
    v1_2.d = v1_2.d f* float.s(0x437f0000)
    v1_2.d = v1_2.d f+ fconvert.s(0.5f)
    x12_1 = vcvts_s32_f32(v1_2.d) << 0x10
else
    x12_1 = 0

v1_2.d = float.s(0x3f7fbe77)
uint32_t x13_1 = -0x1000000

if (not(v0_2.d f> v1_2.d))
    v1_2.d = float.s(0x3a83126f)
    
    if (v0_2.d f>= v1_2.d)
        v1_2.d = float.s(0x437f0000)
        v0_2.d = v0_2.d f* v1_2.d
        v1_2.d = fconvert.s(0.5f)
        v0_2.d = v0_2.d f+ v1_2.d
        x13_1 = vcvts_s32_f32(v0_2.d) << 0x18
    else
        x13_1 = 0

uint32_t x8_4 = x8_3 + zx.d(x0_4.b)
uint32_t x9_4 = (x9_1 u>> 8) + zx.d((x0_4 u>> 8).b)
uint32_t x11_2 = (x0_4 u>> 0x18) + (x13_1 u>> 0x18)
uint32_t x12_3 = (x12_1 u>> 0x10) + zx.d((x0_4 u>> 0x10).b)
int32_t x8_6

if (x8_4 u> 0xff)
    x8_6 = 0xff
else
    x8_6 = x8_4 & 0xff

int32_t x13_3

if (x9_4 u> 0xff)
    x13_3 = 0xff00
else
    x13_3 = (x9_4 & 0xff) << 8

int32_t x9_6

if (x12_3 u> 0xff)
    x9_6 = 0xff0000
else
    x9_6 = (x12_3 & 0xff) << 0x10

uint32_t x10_2

if (x11_2 u> 0xff)
    x10_2 = -0x1000000
else
    x10_2 = x11_2 << 0x18

int32_t x8_9 = x13_3 | x8_6 | x9_6 | x10_2
int32_t var_64_1 = x8_9
uint32_t x26_1 = zx.d(*(x21_1 + 0x1480))
int32_t* x27_1

if (x26_1 == 0)
    x27_1 = &var_68
else
    int32_t var_8c_1 = x8_9
    int32_t var_84_1 = x8_9
    int32_t var_7c_1 = x8_9
    int32_t var_74_1 = x8_9
    v0_2.d = *(x21_1 + 0x794)
    v1_2.d = v8.d f- v0_2.d
    v0_2.d = *(x21_1 + 0x784) f+ *(x21_1 + 0x780)
    int32_t x0_6
    
    if (v1_2.d f< v0_2.d || *(x21_1 + 0x774) s> 1)
        v0_2.d = *(x21_1 + 0x790)
        v0_2.d = v8.d f- v0_2.d
        x0_6, v0_2, v1_2, v17_1 = PropEval<ColorRgbaI>(x21_1 + 0x708, x21_1 + 0x744, x21_1 + 0x780, 
            v0_2.d, v1_2.d, v1_2.d)
    else
        x0_6 = *(x21_1 + 0x744)
    
    int16_t x28_1 = (x23_2 u>> 8).w & 0xff
    int16_t fp_1 = x23_2.w & 0xff
    int16_t x23_3 = (x23_2 u>> 0x10).w & 0xff
    int32_t x8_16 = (0xfe00ffff & ((
        (mulu.dp.d(zx.d(0x80 + ((x0_6 u>> 8).w & 0xff) * x28_1), 0x80808081) u>> 0x20).d << 1
        & 0xff00) | (zx.d(0x80 + (x0_6.w & 0xff) * fp_1) u/ 0xff)))
        | (0x1ff & (zx.d(0x80 + ((x0_6 u>> 0x10).w & 0xff) * x23_3) u/ 0xff)) << 0x10
        | (zx.d(0x80 + x24_1.w * (x0_6 u>> 0x18).w) u/ 0xff) << 0x18
    int32_t var_90 = x8_16
    v0_2.d = *(x21_1 + 0x824)
    v1_2.d = v8.d f- v0_2.d
    v0_2.d = *(x21_1 + 0x814) f+ *(x21_1 + 0x810)
    int32_t x0_8
    
    if (v1_2.d f< v0_2.d || *(x21_1 + 0x804) s> 1)
        v0_2.d = *(x21_1 + 0x820)
        v0_2.d = v8.d f- v0_2.d
        x0_8, v0_2, v1_2, v17_1 = PropEval<ColorRgbaI>(x21_1 + 0x798, x21_1 + 0x7d4, x21_1 + 0x810, 
            v0_2.d, v1_2.d, v1_2.d)
    else
        x0_8 = *(x21_1 + 0x7d4)
    
    int32_t x8_23 = (0xfe00ffff & ((
        (mulu.dp.d(zx.d(0x80 + ((x0_8 u>> 8).w & 0xff) * x28_1), 0x80808081) u>> 0x20).d << 1
        & 0xff00) | (zx.d(0x80 + (x0_8.w & 0xff) * fp_1) u/ 0xff)))
        | (0x1ff & (zx.d(0x80 + ((x0_8 u>> 0x10).w & 0xff) * x23_3) u/ 0xff)) << 0x10
        | (zx.d(0x80 + x24_1.w * (x0_8 u>> 0x18).w) u/ 0xff) << 0x18
    int32_t var_88_1 = x8_23
    v0_2.d = *(x21_1 + 0x8b4)
    v1_2.d = v8.d f- v0_2.d
    v0_2.d = *(x21_1 + 0x8a4) f+ *(x21_1 + 0x8a0)
    int32_t x0_10
    
    if (v1_2.d f< v0_2.d || *(x21_1 + 0x894) s> 1)
        v0_2.d = *(x21_1 + 0x8b0)
        v0_2.d = v8.d f- v0_2.d
        x0_10, v0_2, v1_2, v17_1 = PropEval<ColorRgbaI>(x21_1 + 0x828, x21_1 + 0x864, 
            x21_1 + 0x8a0, v0_2.d, v1_2.d, v1_2.d)
    else
        x0_10 = *(x21_1 + 0x864)
    
    int32_t x8_30 = (0xfe00ffff & ((
        (mulu.dp.d(zx.d(0x80 + ((x0_10 u>> 8).w & 0xff) * x28_1), 0x80808081) u>> 0x20).d << 1
        & 0xff00) | (zx.d(0x80 + (x0_10.w & 0xff) * fp_1) u/ 0xff)))
        | (0x1ff & (zx.d(0x80 + ((x0_10 u>> 0x10).w & 0xff) * x23_3) u/ 0xff)) << 0x10
        | (zx.d(0x80 + x24_1.w * (x0_10 u>> 0x18).w) u/ 0xff) << 0x18
    int32_t var_80_1 = x8_30
    v0_2.d = *(x21_1 + 0x944)
    v1_2.d = v8.d f- v0_2.d
    v0_2.d = *(x21_1 + 0x934) f+ *(x21_1 + 0x930)
    int32_t x0_12
    
    if (v1_2.d f< v0_2.d || *(x21_1 + 0x924) s> 1)
        v0_2.d = *(x21_1 + 0x940)
        v0_2.d = v8.d f- v0_2.d
        x0_12, v0_2, v1_2, v17_1 = PropEval<ColorRgbaI>(x21_1 + 0x8b8, x21_1 + 0x8f4, 
            x21_1 + 0x930, v0_2.d, v1_2.d, v1_2.d)
    else
        x0_12 = *(x21_1 + 0x8f4)
    
    x27_1 = &var_90
    int32_t x8_37 = (0xfe00ffff & ((
        (mulu.dp.d(zx.d(0x80 + ((x0_12 u>> 8).w & 0xff) * x28_1), 0x80808081) u>> 0x20).d << 1
        & 0xff00) | (zx.d(0x80 + (x0_12.w & 0xff) * fp_1) u/ 0xff)))
        | (0x1ff & (zx.d(0x80 + ((x0_12 u>> 0x10).w & 0xff) * x23_3) u/ 0xff)) << 0x10
        | (zx.d(0x80 + x24_1.w * (x0_12 u>> 0x18).w) u/ 0xff) << 0x18
    int32_t var_78_1 = x8_37

v0_2.q = *(x21_1 + 0x175c)
int64_t var_98 = v0_2.q
float128 var_b0 = *RECT1
int32_t x23_4 = *(x21_1 + 0x1470)
int32_t x24_2 = *(x21_1 + 0x1474)
int32_t x28_2 = x24_2 * x23_4
float v2_3
int32_t v3_2

if (x28_2 s>= 2)
    v1_2.d = *(x21_1 + 0x1478)
    v0_2.d = 0f
    
    if (not(v1_2.d f== 0f))
        v0_2, v1_2 = CalcFlipAnimT(zx.q(*(x21_1 + 0x147c)), v8.d, v1_2.d)
    
    v1_2.d = float.s(x28_2)
    v0_2.d = v0_2.d f* v1_2.d
    v0_2.d = vrndm_f32(v0_2.d)
    v1_2.d = fconvert.s(-0.5f)
    
    if (v0_2.d f< 0f)
        v1_2.d = v1_2.d
    else
        v1_2.d = fconvert.s(0.5f)
    
    v0_2.d = v0_2.d f+ v1_2.d
    uint32_t temp0_6 = vcvts_s32_f32(v0_2.d)
    v0_2, v1_2, v2_3, v3_2, v17_1 =
        SpriteUVFromStrip(temp0_6 - (x28_2 == temp0_6 ? 1 : 0), x23_4, x24_2)
    var_b0.d = v0_2.d
    var_b0:4.d = v1_2.d
    var_b0:8.d = v2_3
    var_b0:0xc.d = v3_2

XAsset* x23_5 = *(x21_1 + 0x14f0)

if (x23_5 != 0 && *(x23_5 + 8) == 0x1d)
    XAsset* x0_16
    x0_16, v0_2, v1_2, v17_1 = MaterialFn_EmitMaterial(x23_5)
    x23_5 = x0_16

int32_t x8_41 = *(x21_1 + 0x143c) - 1
int32_t x24_3

if (x8_41 u> 7)
    x24_3 = 0
else
    x24_3 = *(&data_7afd80 + (sx.q(x8_41) << 2))

float v4_1 = *(x21_1 + 0x16b4)
float v5_1 = *(x21_1 + 0x16b8)
float v6_1 = *(x21_1 + 0x16bc)
float v7_1 = *(x21_1 + 0x16c0)
v0_2.d = *(x21_1 + 0x16b0)
float v18_1 = v5_1 + v5_1
float v20_1 = v4_1 + v4_1
v2_3 = *(x21_1 + 0x16c4)
v3_2 = *(x21_1 + 0x16c8)
v1_2.d = *(x21_1 + 0x16cc)
float v16_1 = fconvert.s(1f)
v7_1 = v7_1 + v7_1
float v21_1 = v5_1 * v18_1
float v22_1 = v5_1 * v20_1
float v24_1 = v20_1 * v6_1
v20_1 = v4_1 * v20_1
float v19_1 = v6_1 * (v6_1 + v6_1)
float v23_1 = v6_1 * v7_1
v5_1 = v5_1 * v7_1
v6_1 = v18_1 * v6_1
v4_1 = v4_1 * v7_1
v7_1 = v16_1 - v21_1
v16_1 = v16_1 - v20_1
int128_t var_c0_1 = data_71cfa0
v17_1.d = v22_1 - v23_1
v20_1 = v6_1 - v4_1
v4_1 = v6_1 + v4_1
v6_1 = v7_1 - v19_1
v7_1 = v0_2.d f* v17_1.d
v17_1.d = v0_2.d f* (v24_1 + v5_1)
v18_1 = v0_2.d f* (v22_1 + v23_1)
v20_1 = v0_2.d f* v20_1
v5_1 = v0_2.d f* (v24_1 - v5_1)
v4_1 = v0_2.d f* v4_1
v6_1 = v0_2.d f* v6_1
v19_1 = v0_2.d f* (v16_1 - v19_1)
v0_2.d = v0_2.d f* (v16_1 - v21_1)
int64_t var_110
__builtin_memset(&var_110, 0, 0x14)
int32_t var_e8_1 = v17_1.d
float var_e4_1 = v2_3
float var_d8_1 = v20_1
int32_t var_d4_1 = v3_2
float var_d0_1 = v5_1
float var_cc_1 = v4_1
var_f0 = v6_1
float var_ec_1 = v7_1
float var_e0_1 = v18_1
float var_dc_1 = v19_1
int32_t var_c8_1 = v0_2.d
int32_t var_c4_1 = v1_2.d

if (*(x21_1 + 0x173c) == 0)
    float128 v0_4
    int128_t v1_3
    float128 v2_9
    v0_4, v1_3, v2_9 = GameGetTimeSimulation()
    v1_3.d = *(x21_1 + 0x674)
    v2_9.d = *(x21_1 + 0x664)
    v1_3.d = v0_4.d f- v1_3.d
    v2_9.d = v2_9.d f+ *(x21_1 + 0x660)
    uint64_t x8_44
    
    if (not(v1_3.d f< v2_9.d) && *(x21_1 + 0x654) s<= 1)
        v0_4 = *(x21_1 + 0x5dc)
        x8_44 = zx.q(*(x21_1 + 0x1450))
        
        if (x8_44.d u<= 5)
            goto label_102a7b0
        
        goto label_102a808
    
    v2_9.d = *(x21_1 + 0x670)
    v0_4.d = v0_4.d f- v2_9.d
    int32_t v3_4
    v0_4, v1_3, v2_9, v3_4 =
        PropEval<RectF>(x21_1 + 0x558, x21_1 + 0x5dc, x21_1 + 0x660, v0_4.d, v1_3.d, v1_3.d)
    v0_4:4.d = v1_3.d
    v0_4:8.d = v2_9.d
    v0_4:0xc.d = v3_4
    x8_44 = zx.q(*(x21_1 + 0x1450))
    int32_t var_100_2
    
    if (x8_44.d u> 5)
    label_102a808:
        pthread_kill(pthread_self(), 6)
        v0_2, v1_2 = XNoReturn()
    label_102a810:
        var_110.o = v0_2
        var_100_2 = 0xc
    else
    label_102a7b0:
        v1_3.q = *(x21_1 + 0x175c)
        v2_9.q = *V20
        void* x10_23 = &data_102a7e4 + (zx.q(jump_table_868f6e[x8_44]) << 2)
        v1_2:8.q = vsub_f32(v1_3, v2_9).q
        v2_9:8.q = v2_9.q
        v0_2 = vaddq_f32(v2_9, vmulq_f32(v0_4, v1_2, 0))
        
        switch (x10_23)
            case &data_102a7e4
                var_110.o = v0_2
                var_100_2 = -1
            case 0x102a810
                goto label_102a810
            case 0x102a81c
                var_110.o = v0_2
                var_100_2 = 3
else
    int32_t var_100_1 = *(x21_1 + 0x173c)
    var_110.o = *(x21_1 + 0x172c)

if ((arg2.d & 1) != 0)
    int32_t var_100_3 = 0

v0_2.d = *(x21_1 + 0x1468)
v1_2.q = *V21
v0_2.d = v1_2.d f* v0_2.d
v0_2:4.d = v1_2:4.d f* v0_2.d
int64_t var_118 = v0_2.q
char var_140_1 = (x26_1 != 0 ? 1 : 0).b
int128_t* var_138_1 = &var_b0
XAsset* var_130_1 = x23_5
float* var_150_1 = &var_f0
int32_t* var_148_1 = x27_1
DrawImageNew(x19_1, x20_1, &var_118, &var_98, zx.q(x24_3), RECT0, zx.q(*(x21_1 + 0x146c)), &var_110)
