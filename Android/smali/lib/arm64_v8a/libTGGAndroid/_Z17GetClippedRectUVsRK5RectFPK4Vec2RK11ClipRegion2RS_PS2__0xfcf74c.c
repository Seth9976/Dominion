// 函数: _Z17GetClippedRectUVsRK5RectFPK4Vec2RK11ClipRegion2RS_PS2_
// 地址: 0xfcf74c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg5 = *arg2
*(arg5 + 8) = *(arg2 + 8)
*(arg5 + 0x10) = *(arg2 + 0x10)
*(arg5 + 0x18) = *(arg2 + 0x18)
*arg4 = *arg1
int32_t x8_3 = *(arg3 + 0x10)

if (x8_3 == 0)
    return 1

int128_t v0
v0.d = fconvert.s(1f)
int128_t v1
int128_t v2
int128_t v3

if ((x8_3 & 1) != 0)
    v1.d = *arg1
    v2.d = *(arg3 + 8)
    
    if (not(v1.d f<= v2.d))
        return 0
    
    v3.d = *(arg1 + 8)
    
    if (not(v3.d f<= v2.d))
        *(arg4 + 8) = v2.d
        x8_3 = *(arg3 + 0x10)
        v0.d = v2.d f- v1.d
        v1.d = v3.d f- v1.d
        v0.d = v0.d f/ v1.d

v1.d = 0f
int128_t v4
int128_t v5

if ((x8_3 & 2) != 0)
    v3.d = *(arg1 + 8)
    v4.d = *arg3
    
    if (not(v3.d f>= v4.d))
        return 0
    
    v5.d = *arg1
    v2.d = 0f
    
    if (not(v5.d f>= v4.d))
        *arg4 = v4.d
        x8_3 = *(arg3 + 0x10)
        v2.d = v4.d f- v5.d
        v3.d = v3.d f- v5.d
        v2.d = v2.d f/ v3.d
else
    v2.d = 0f

if ((x8_3 & 4) != 0)
    v3.d = *(arg1 + 0xc)
    v4.d = *(arg3 + 4)
    
    if (not(v3.d f>= v4.d))
        return 0
    
    v5.d = *(arg1 + 4)
    
    if (not(v5.d f>= v4.d))
        *(arg4 + 4) = v4.d
        x8_3 = *(arg3 + 0x10)
        v1.d = v4.d f- v5.d
        v3.d = v3.d f- v5.d
        v1.d = v1.d f/ v3.d

v3.d = fconvert.s(1f)
int128_t v6

if ((x8_3 & 8) != 0)
    v5.d = *(arg1 + 4)
    v4.d = *(arg3 + 0xc)
    
    if (not(v5.d f<= v4.d))
        return 0
    
    v6.d = *(arg1 + 0xc)
    
    if (not(v6.d f<= v4.d))
        v3.d = v4.d f- v5.d
        v5.d = v6.d f- v5.d
        v3.d = v3.d f/ v5.d
        *(arg4 + 0xc) = v4.d

v5.q = *arg2
v4.q = *(arg2 + 8)
v6.q = *(arg2 + 0x10)
int128_t v4_1
v4_1.d = vsub_f32(v4, v5).d f* v2.d
v4_1:4.d = v4_1:4.d f* v2.d
int128_t v6_1
v6_1.d = vsub_f32(v6, v5).d f* v1.d
v6_1:4.d = v6_1:4.d f* v1.d
*arg5 = vsub_f32(vadd_f32(vadd_f32(v5, v4_1), vadd_f32(v5, v6_1)), v5).q
int128_t v4_4
v4_4.q = *(arg2 + 0x18)
int128_t v6_2
v6_2.q = *arg2
v5.q = *(arg2 + 8)
double v4_5 = vsub_f32(v4_4, v5)
v1.d = v4_5.d f* v1.d
v1:4.d = v4_5:4.d f* v1.d
int128_t v4_6
v4_6.d = vsub_f32(v5, v6_2).d f* v0.d
v4_6:4.d = v4_6:4.d f* v0.d
*(arg5 + 8) = vsub_f32(vadd_f32(vadd_f32(v6_2, v4_6), vadd_f32(v5, v1)), v5).q
int128_t v4_7
v4_7.q = *(arg2 + 0x10)
int128_t v1_3
v1_3.q = *(arg2 + 0x18)
v5.q = *arg2
int128_t v1_4 = vsub_f32(v1_3, v4_7)
double v6_3 = vsub_f32(v4_7, v5)
v1_4.d = v1_4.d f* v2.d
v1_4:4.d = v1_4:4.d f* v2.d
v2.d = v6_3.d f* v3.d
v2:4.d = v6_3:4.d f* v3.d
*(arg5 + 0x10) = vsub_f32(vadd_f32(vadd_f32(v4_7, v1_4), vadd_f32(v5, v2)), v4_7).q
int128_t v2_1
v2_1.q = *(arg2 + 0x10)
int128_t v1_7
v1_7.q = *(arg2 + 0x18)
v4_7.q = *(arg2 + 8)
double v5_1 = vsub_f32(v1_7, v2_1)
double v6_4 = vsub_f32(v1_7, v4_7)
v0.d = v5_1.d f* v0.d
v0:4.d = v5_1:4.d f* v0.d
v3.d = v6_4.d f* v3.d
v3:4.d = v6_4:4.d f* v3.d
*(arg5 + 0x18) = vsub_f32(vadd_f32(vadd_f32(v2_1, v0), vadd_f32(v4_7, v3)), v1_7)
double v0_3
v0_3.d = *arg4
v1_7.d = *(arg4 + 8)

if (not(v0_3.d f<= v1_7.d))
    return 0

v0_3.d = *(arg4 + 4)
v1_7.d = *(arg4 + 0xc)
return zx.q(v0_3.d f<= v1_7.d ? 1 : 0)
