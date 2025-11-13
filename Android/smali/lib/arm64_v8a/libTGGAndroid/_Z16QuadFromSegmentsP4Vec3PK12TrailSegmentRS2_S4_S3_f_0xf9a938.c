// 函数: _Z16QuadFromSegmentsP4Vec3PK12TrailSegmentRS2_S4_S3_f
// 地址: 0xf9a938
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_30 = v12
int64_t v11
int64_t var_20 = v11
float v22 = *arg4
float v24 = *(arg4 + 4)
float v2 = *arg3
float v1 = *(arg3 + 4)
float v20 = *(arg4 + 8)
float v21 = *(arg4 + 0xc)
float v3 = *(arg3 + 8)
float v31 = *(arg3 + 0xc)
float v18 = *(arg4 + 0x10)
float v19 = *(arg4 + 0x14)
float v27 = *(arg3 + 0x10)
float v29 = *(arg3 + 0x14)
float v6 = v22 - v2
float v5 = v24 - v1
float v4 = v20 - v3
int64_t v8
v8.d = v6 * v29
float v7 = v18 * v4 - v5 * v19
int64_t v9
v9.d = v6 * v19 - v4 * v21
int64_t v10
v10.d = v5 * v21 - v6 * v18
float v23 = v4 * v27 - v5 * v29
float v25 = v8.d f- v4 * v31
float v26 = v5 * v31 - v6 * v27
float v30 = fconvert.s(1f)
v8.d = v30 / sqrt(v10.d f* v10.d + v7 * v7 + v9.d f* v9.d)
float v17 = v7 f* v8.d
float v16 = v9.d f* v8.d
v7 = v10.d f* v8.d
float v28 = v30 / sqrt(v26 * v26 + v23 * v23 + v25 * v25)

if (arg2 != 0)
    v8.d = *arg2
    v9.d = *(arg2 + 4)
    v10.d = *(arg2 + 8)
    v11.d = fconvert.s(0.5f)
    v8.d = v2 f- v8.d
    v9.d = v1 f- v9.d
    v10.d = v3 f- v10.d
    v12.d = v27 f* v10.d
    v10.d = v31 f* v10.d
    v31 = v31 f* v9.d
    v9.d = v29 f* v9.d
    v29 = v29 f* v8.d
    v27 = v27 f* v8.d
    v8.d = v12.d f- v9.d
    v29 = v29 f- v10.d
    v27 = v31 - v27
    v9.d = v29 * v29
    v10.d = v27 * v27
    v31 = v30 / sqrt(v10.d f+ v8.d f* v8.d f+ v9.d)
    v8.d = v8.d f* v31
    v17 = v17 + (v8.d f- v17) f* v11.d
    v16 = v16 + (v29 * v31 - v16) f* v11.d
    v7 = v7 + (v27 * v31 - v7) f* v11.d
    v27 = v30 / sqrt(v7 * v7 + v17 * v17 + v16 * v16)
    v17 = v17 * v27
    v16 = v16 * v27
    v7 = v7 * v27

v23 = v23 * v28
v25 = v25 * v28
v26 = v26 * v28

if (arg5 != 0)
    v22 = *arg5 - v22
    v24 = *(arg5 + 4) - v24
    v20 = *(arg5 + 8) - v20
    v28 = v18 * v20
    v20 = v21 * v20
    v21 = v21 * v24
    v24 = v28 - v19 * v24
    v19 = v19 * v22 - v20
    v18 = v21 - v18 * v22
    v27 = fconvert.s(1f)
    v20 = v27 / sqrt(v18 * v18 + v24 * v24 + v19 * v19)
    v19 = v19 * v20
    v22 = fconvert.s(0.5f)
    v18 = v18 * v20
    v20 = v23 + (v24 * v20 - v23) * v22
    v19 = v25 + (v19 - v25) * v22
    v18 = v26 + (v18 - v26) * v22
    v21 = v27 / sqrt(v18 * v18 + v20 * v20 + v19 * v19)
    v23 = v20 * v21
    v25 = v19 * v21
    v26 = v18 * v21

v6 = v6 * arg6
v5 = v5 * arg6
arg6 = v4 * arg6
v4 = *(arg3 + 0x18)
v2 = v2 + v6
v6 = fconvert.s(0.5f)
v1 = v1 + v5
arg6 = v3 + arg6
*(arg1 + 0xc) = v2 - v17 * v4 * v6
*(arg1 + 0x10) = v1 - v16 * v4 * v6
*(arg1 + 0x14) = arg6 - v7 * v4 * v6
v3 = *(arg3 + 0x18)
*(arg1 + 0x24) = v2 + v17 * v3 * v6
*(arg1 + 0x28) = v1 + v16 * v3 * v6
*(arg1 + 0x2c) = arg6 + v7 * v3 * v6
arg6 = *(arg4 + 0x18)
v4 = v23 * arg6
v2 = *(arg4 + 4) - v25 * arg6 * v6
arg6 = *(arg4 + 8) - v26 * arg6 * v6
*arg1 = *arg4 - v4 * v6
*(arg1 + 4) = v2
*(arg1 + 8) = arg6
arg6 = *(arg4 + 0x18)
v4 = v23 * arg6
v2 = *(arg4 + 4) + v25 * arg6 * v6
arg6 = v26 * arg6 * v6 + *(arg4 + 8)
*(arg1 + 0x18) = *arg4 + v4 * v6
*(arg1 + 0x1c) = v2
*(arg1 + 0x20) = arg6
