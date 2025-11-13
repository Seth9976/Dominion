// 函数: _Z15Mat4PerspectiveRK7Frustum
// 地址: 0xc9e4b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v3 = *arg1
float v4 = *(arg1 + 4)
float v5 = *(arg1 + 8)
int128_t v6
v6.d = *(arg1 + 0xc)
float v2 = *(arg1 + 0x10)
float v0 = *(arg1 + 0x14)
float v1 = fconvert.s(0.5f)
int128_t v7
v7.d = fconvert.s(1f)
float v18 = v3 + v5
v3 = v5 - v3
v5 = v4 f+ v6.d
v4 = v6.d f- v4
v6.d = v0 - v2
int128_t v17 = *(M40 + 0x10)
v18 = v18 * v1
v5 = v5 * v1
v3 = v7.d f/ v3
v4 = v7.d f/ v4
v1 = v7.d f/ v6.d
int128_t var_30 = *(M40 + 0x20)
int128_t var_20 = *(M40 + 0x30)
v7.d = v18 + v18
v6.d = v3 + v3
v3 = v3 f* v7.d
v7.d = v4 + v4
bool cond:0 = *gGraphicsDriverType != 1
int128_t var_50 = *M40
int128_t var_40 = v17
var_50.d = v6.d
var_50:8.d = v3
var_40:4.d = v7.d
var_40:8.d = v4 * (v5 + v5)

if (cond:0)
    v3 = fneg(v0)
    v2 = fneg(v2)
else
    v3 = v0 + v2
    v0 = v0 * v2
    v2 = fconvert.s(-2f)
    v3 = fneg(v3)

var_30:8.d = v1 * v3
var_30:0xc.d = v0 * v2 * v1
var_20:8.d = 0xbf800000
return Mat4Multiply(&var_50, 0x82854c)
