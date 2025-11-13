// 函数: spBone_updateAppliedTransform
// 地址: 0xfb4cb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_30 = v10
void* x8 = *(arg1 + 0x10)
*(arg1 + 0x60) = 1
float y
float entry_y
int64_t v8
int64_t v9

if (x8 == 0)
    y = *(arg1 + 0x78)
    v8.d = *(arg1 + 0x70)
    v9.d = *(arg1 + 0x64)
    *(arg1 + 0x44) = *(arg1 + 0x6c)
    *(arg1 + 0x48) = y
    float v0_4 = atan2f(v8.d, v9.d, entry_y)
    float v3_1 = *(arg1 + 0x68)
    float v4_1 = *(arg1 + 0x74)
    v10.d = float.s(0x42652ee0)
    *(arg1 + 0x4c) = v0_4 f* v10.d
    *(arg1 + 0x50) = sqrt(v8.d f* v8.d + v9.d f* v9.d)
    float y_2 = v8.d f* v3_1
    *(arg1 + 0x54) = sqrt(v3_1 * v3_1 + v4_1 * v4_1)
    *(arg1 + 0x58) = 0
    float v0_5 = atan2f(v9.d f* v3_1 + v8.d f* v4_1, v9.d f* v4_1 - y_2, y_2) f* v10.d
    *(arg1 + 0x5c) = v0_5
    return v0_5

y = *(x8 + 0x64)
float x = *(x8 + 0x68)
float v3 = *(x8 + 0x70)
float v5 = *(x8 + 0x74)
float v16 = *(arg1 + 0x70)
float v20 = *(arg1 + 0x74)
float v17 = *(arg1 + 0x64)
float v18 = *(arg1 + 0x68)
float v4 = *(arg1 + 0x6c) - *(x8 + 0x6c)
float v6 = *(arg1 + 0x78) - *(x8 + 0x78)
entry_y = fconvert.s(1f) / (y * v5 - x * v3)
float v19 = v5 * v4
float v21 = x * v6
v6 = y * v6
v4 = v3 * v4
v5 = v5 * entry_y
y = y * entry_y
x = x * entry_y
v3 = v3 * entry_y
v8.d = v5 * v17 - x * v16
v9.d = y * v16 - v3 * v17
y = y * v20 - v3 * v18
*(arg1 + 0x44) = entry_y * v19 - entry_y * v21
*(arg1 + 0x48) = entry_y * v6 - entry_y * v4
entry_y = sqrt(v8.d f* v8.d + v9.d f* v9.d)
x = v5 * v18 - x * v20
*(arg1 + 0x58) = 0
*(arg1 + 0x50) = entry_y
float v0_2

if (entry_y <= float.s(0x38d1b717))
    entry_y = sqrt(x * x + y * y)
    *(arg1 + 0x50) = 0
    *(arg1 + 0x54) = entry_y
    *(arg1 + 0x5c) = 0
    v0_2 = atan2f(y, x, entry_y) * float.s(0xc2652ee0) + float.s(0x42b40000)
else
    v5 = v8.d f* x
    x = v8.d f* y - v9.d f* x
    entry_y = x / entry_y
    *(arg1 + 0x54) = entry_y
    float v0
    float y_1
    v0, y_1 = atan2f(v5 + v9.d f* y, x, entry_y)
    v10.d = float.s(0x42652ee0)
    *(arg1 + 0x5c) = v0 f* v10.d
    v0_2 = atan2f(v9.d, v8.d, y_1) f* v10.d

*(arg1 + 0x4c) = v0_2
return v0_2
