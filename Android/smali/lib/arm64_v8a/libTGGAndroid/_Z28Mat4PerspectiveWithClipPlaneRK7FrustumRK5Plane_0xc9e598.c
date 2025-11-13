// 函数: _Z28Mat4PerspectiveWithClipPlaneRK7FrustumRK5Plane
// 地址: 0xc9e598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v2
v2.d = *arg1
float v3 = *(arg1 + 4)
float v4 = *(arg1 + 8)
float v6 = *(arg1 + 0xc)
float v5 = *(arg1 + 0x10)
float v1 = *(arg1 + 0x14)
int128_t v0
v0.d = fconvert.s(0.5f)
float v7 = fconvert.s(1f)
float v18 = v2.d f+ v4
v2.d = v4 f- v2.d
int128_t v17 = *(M40 + 0x10)
v18 = v18 f* v0.d
v4 = (v3 + v6) f* v0.d
float v19 = v7 f/ v2.d
float v20 = v7 / (v6 - v3)
uint32_t x9 = *gGraphicsDriverType
v3 = v7 / (v1 - v5)
int128_t var_30 = *(M40 + 0x20)
int128_t var_20 = *(M40 + 0x30)
v2.d = v19 + v19
v0.d = v20 + v20
v6 = v19 * (v18 + v18)
v4 = v20 * (v4 + v4)
int128_t var_50 = *M40
int128_t var_40 = v17
var_50.d = v2.d
var_50:8.d = v6
var_40:4.d = v0.d
var_40:8.d = v4

if (x9 != 1)
    v7 = fneg(v1)
    v5 = fneg(v5)
else
    v7 = v1 + v5
    v1 = v1 * v5
    v5 = fconvert.s(-2f)
    v7 = fneg(v7)

var_20:8.d = 0xbf800000
v17.d = v1 * v5 * v3
v18 = v3 * v7
v3 = *arg2
int128_t v16
v16.d = *(arg2 + 4)
v5 = *(arg2 + 8)
v1 = *(arg2 + 0xc)
v19 = float.s(0x3727c5ac)
v20 = fabs(v3)
v7 = fconvert.s(1f)
float v21 = fabs(v5)

if (v20 < v19)
    v20 = v7
else
    v20 = v3 / v20

if (v21 < v19)
    v19 = v7
else
    v19 = v5 / v21

v2.d = (v6 + v20) f/ v2.d
v0.d = (v4 + v19) f/ v0.d
v4 = (v18 + v7) f/ v17.d

if (x9 != 1)
    v2.d = v3 f* v2.d
    v2.d = v2.d f+ v1 * v4
    v0.d = v5 f* v0.d
    v0.d = v0.d f+ v2.d
    v0.d = v16.d f+ v0.d
    v0.d = v7 f/ v0.d
    v2.d = v0.d f* fneg(v16.d)
else
    v2.d = v3 f* v2.d
    v0.d = v5 f* v0.d
    v2.d = v2.d f+ v1 * v4
    v0.d = v0.d f+ v2.d
    v0.d = v16.d f+ v0.d
    v2.d = fconvert.s(2f)
    v0.d = v2.d f/ v0.d
    v2.d = v16.d f* v0.d
    v2.d = v7 f- v2.d

v4 = v5 f* v0.d
v3 = v3 f* v0.d
v0.d = v1 f* v0.d
var_30.d = v3
var_30:4.d = v4
var_30:8.d = v2.d
var_30:0xc.d = v0.d
return Mat4Multiply(&var_50, 0x82854c)
