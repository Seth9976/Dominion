// 函数: _Z13QuadTransformRK9TransformP4Vec3
// 地址: 0xc9a610
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v1 = *(arg1 + 8)
float v2 = *(arg1 + 0xc)
float v7 = *arg1
float v3 = *(arg1 + 4)
float v20 = *(arg1 + 0x10)
float v6 = *arg2
float v5 = *(arg2 + 4)
float v21 = *(arg2 + 8)
float v19 = *(arg2 + 0xc)
float v18 = *(arg2 + 0x10)
float v17 = *(arg2 + 0x14)
float v27 = v1 + v1
float v29 = v3 + v3
v20 = v20 + v20
float v0 = fconvert.s(1f)
float v22 = *(arg2 + 0x18)
float v23 = *(arg2 + 0x1c)
int64_t v12
v12.d = *(arg2 + 0x20)
float v24 = *(arg2 + 0x24)
float v25 = *(arg2 + 0x28)
float v26 = *(arg2 + 0x2c)
float v30 = v1 * v27
float v28 = v2 * (v2 + v2)
float v31 = v1 * v29
int64_t v8
v8.d = v2 * v20
int64_t v9
v9.d = v2 * v29
v1 = v1 * v20
v29 = v3 * v29
v2 = v27 * v2
v3 = v3 * v20
v20 = v0 - v30
int64_t v10
v10.d = v9.d f+ v1
v0 = v0 - v29
v29 = v2 - v3
v1 = v7 * (v9.d f- v1)
v2 = v7 * (v2 + v3)
v3 = v20 - v28
v20 = v0 - v28
v0 = v0 - v30
v28 = v7 f* v10.d
v29 = v7 * v29
v10.d = v1 * v6
int64_t v11
v11.d = v2 * v5
int64_t v14
v14.d = v1 * v19
int64_t v15
v15.d = v2 * v18
v27 = v7 * (v31 f- v8.d)
v30 = v7 * (v31 f+ v8.d)
v3 = v3 * v7
v20 = v7 * v20
v0 = v7 * v0
float v4 = v28 * v21
v10.d = v10.d f+ v11.d
v11.d = v1 * v22
v14.d = v14.d f+ v15.d
v15.d = v2 * v23
v8.d = v30 * v6
float var_4c = v29 * v21
int64_t v13
v13.d = v30 * v19
v11.d = v11.d f+ v15.d
v15.d = v30 * v22
v6 = v3 * v6
v19 = v3 * v19
v22 = v3 * v22
v7 = v3 * v24
v3 = v1 * v24 + v2 * v25
v1 = v0 * v21
float v2_1 = v0 * v17
v21 = v0 f* v12.d
v0 = v3 + v0 * v26
v9.d = v27 * v5
v1 = v10.d f+ v1 + *(arg1 + 0x1c)
v3 = *(arg1 + 0x14) + v6 f+ v9.d + v4
*(arg2 + 4) = v8.d f+ v20 * v5 + var_4c + *(arg1 + 0x18)
*(arg2 + 8) = v1
*arg2 = v3
v3 = v13.d f+ v20 * v18 + v29 * v17 + *(arg1 + 0x18)
v2_1 = v14.d f+ v2_1 + *(arg1 + 0x1c)
*(arg2 + 0xc) = *(arg1 + 0x14) + v19 + v27 * v18 + v28 * v17
*(arg2 + 0x10) = v3
*(arg2 + 0x14) = v2_1
v2_1 = v15.d f+ v20 * v23 + v29 f* v12.d + *(arg1 + 0x18)
v3 = v11.d f+ v21 + *(arg1 + 0x1c)
*(arg2 + 0x18) = *(arg1 + 0x14) + v22 + v27 * v23 + v28 f* v12.d
*(arg2 + 0x1c) = v2_1
*(arg2 + 0x20) = v3
v2_1 = v30 * v24 + v20 * v25 + v29 * v26 + *(arg1 + 0x18)
v0 = v0 + *(arg1 + 0x1c)
*(arg2 + 0x24) = *(arg1 + 0x14) + v7 + v27 * v25 + v28 * v26
*(arg2 + 0x28) = v2_1
*(arg2 + 0x2c) = v0
