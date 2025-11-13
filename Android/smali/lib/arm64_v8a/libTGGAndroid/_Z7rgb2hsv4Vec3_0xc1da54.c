// 函数: _Z7rgb2hsv4Vec3
// 地址: 0xc1da54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v3
v3.d = fconvert.s(1f)
float v4 = 0f
double entry_v1
float entry_v2
float v6

if (entry_v1.d f< entry_v2)
    v6 = v4
else
    v6 = v3.d

double v16
v16.d = v3.d f- v6
float v18 = entry_v2 * v6
entry_v2 = entry_v1.d f* v6 + entry_v2 f* v16.d
float v7 = v6 * float.s(0xbeaaaaab)
v6 = v6 * v4
entry_v1.d = entry_v1.d f* v16.d
double entry_v0

if (not(entry_v0.d f< entry_v2))
    v4 = v3.d

entry_v1.d = v18 f+ entry_v1.d
v3.d = v3.d f- v4
float v17 = entry_v2 * v4
v18 = entry_v0.d f* v4
v6 = (v6 f- v16.d) * v4
v4 = entry_v1.d f* v4
entry_v0.d = entry_v0.d f* v3.d
entry_v1.d = entry_v1.d f* v3.d
entry_v0.d = v17 f+ entry_v0.d
entry_v1.d = v4 f+ entry_v1.d
entry_v2 = v18 + entry_v2 f* v3.d
v4 = entry_v0.d f- entry_v1.d

if (entry_v0.d f< entry_v1.d)
    entry_v0.d = entry_v0.d
else
    entry_v0.d = entry_v1.d

entry_v1 = fconvert.d(v4)
v4 = entry_v2 f- entry_v0.d
v3.d = (v16.d f* float.s(0x3f2aaaab) + v7) f* v3.d
v3.d = v6 f+ v3.d
entry_v0.d = fconvert.s(entry_v1 / (fconvert.d(v4) * fconvert.d(6.0) + 9.9999997473787516e-06)
    + fconvert.d(v3.d))
entry_v0.d = fabs(entry_v0.d)
entry_v1.d = v4 / (entry_v2 + float.s(0x3727c5ac))
