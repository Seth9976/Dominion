// 函数: _Z18CalcModelTransformRK12FabTransformRK5OBBoxRK4BBox
// 地址: 0xf5c728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v6 = *arg3
float v16 = *(arg3 + 4)
float v18 = *(arg3 + 0x10)
float v19 = *(arg3 + 0x14)
float v20 = *(arg3 + 8)
float v23 = *(arg3 + 0xc)
float v0 = *(arg1 + 0x34)
float v17 = *(arg1 + 0x38)
float v25 = *(arg1 + 0x3c)
float v22 = *(arg1 + 0x40)
float v26 = *(arg1 + 0x44)
float v27 = *(arg1 + 0x48)
float v1 = *(arg2 + 8)
float v4 = *(arg2 + 0xc)
float v24 = *(arg2 + 0x18)
float v2 = *(arg2 + 0x10)
float v3 = *(arg2 + 0x14)
float v21 = fconvert.s(0.5f)
float v29 = v23 - v6
float v30 = v18 - v16
float v31 = v19 - v20
v6 = v23 + v6
v16 = v18 + v16
v18 = v19 + v20
v19 = v26 * v26
v20 = v17 * v17
v23 = v17 * v25
int64_t v8
v8.d = v26 * v22
int64_t v9
v9.d = v26 * v25
int64_t v10
v10.d = v17 * v22
int64_t v11
v11.d = v25 * v22
int64_t v12
v12.d = v26 * v17
float v28 = *(arg2 + 0x1c) / v29
float v5 = *(arg2 + 0x20) / v30
float v7 = *(arg2 + 0x24) / v31
v6 = v6 * v21
v16 = v16 * v21
v18 = v18 * v21
v21 = v23 f- v8.d
v23 = v23 f+ v8.d
v8.d = v19 + v20
v19 = v19 - v20
v20 = v9.d f+ v10.d
v9.d = v10.d f- v9.d
v10.d = v11.d f- v12.d
v11.d = v12.d f+ v11.d
v12.d = v24 * v17
v29 = v24 * v26 - v4 * v17
v31 = v4 * v26 f+ v12.d
v12.d = v24 * v25
v30 = v2 * v26 f+ v12.d
v12.d = v25 * v25
v24 = v3 * v26 + v24 * v22
v26 = v8.d f- v12.d
v8.d = v19 f+ v12.d
v19 = v19 f- v12.d
v12.d = v2 * v25
v29 = v29 f- v12.d
v12.d = v3 * v25
v25 = v4 * v25
v4 = v4 * v22 + v30
v30 = v2 * v17

if (not(v5 < v7))
    v5 = v7

v7 = v3 * v17
v3 = v3 * v22
v17 = v22 * v22
v2 = v2 * v22
v22 = v26 - v17
v26 = v8.d f- v17
v17 = v19 + v17
v3 = v29 - v3
v19 = *arg2
v29 = *(arg2 + 4)
v4 = v4 - v7
v7 = v30 + v24 - v25
v24 = *(arg1 + 0x4c)
v25 = *(arg1 + 0x50)
int32_t* entry_x8
entry_x8[2] = v4
entry_x8[3] = v7

v4 = v28 < v5 ? v28 : v5

v5 = v19 - v6 * v4
v6 = v29 - v16 * v4
v1 = v1 - v18 * v4
v7 = v5 * v22
v16 = v6 + v6
v18 = v1 + v1
v5 = v5 + v5
entry_x8[6] = v24 + v0 * (v18 f* v10.d + v5 * v23 + v6 * v26)
entry_x8[7] = v25 + v0 * (v1 * v17 + v5 f* v9.d + v16 f* v11.d)
entry_x8[4] = v3
entry_x8[5] = v27 + v0 * (v18 * v20 + v7 + v16 * v21)
*entry_x8 = v4 * v0
entry_x8[1] = v31 f+ v12.d - v2
