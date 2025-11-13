// 函数: _Z19QuatFromBasisChangeRK4Vec3S1_S1_S1_
// 地址: 0x9a9540
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg1 + 4)
float v0 = *(arg1 + 8)
float v4 = *(arg2 + 4)
float v1 = *(arg2 + 8)
float v3 = *arg1
float v5 = *arg2
float v16 = *(arg3 + 4)
float v6 = *(arg3 + 8)
float v18 = *(arg4 + 4)
float v7 = *(arg4 + 8)
float v17 = *arg3
float v19 = *arg4
float v20 = v4 * v0
float v21 = v1 * v2
float v22 = v1 * v3
float v23 = v0 * v5
float v29 = v6 * v19
int64_t v8
v8.d = v3 * v17
int64_t v9
v9.d = v5 * v19
int64_t v10
v10.d = v2 * v17
int64_t v11
v11.d = v4 * v19
int64_t v12
v12.d = v3 * v16
int64_t v13
v13.d = v5 * v18
int64_t v14
v14.d = v2 * v16
v0 = v0 * v6
v1 = v1 * v7
v6 = (v20 - v21) * (v18 * v6 - v7 * v16) + v8.d f+ v9.d
v7 = v4 * v18 f+ v14.d + (v22 - v23) * (v7 * v17 - v29)
v16 = v0 + v1 + (v2 * v5 - v4 * v3) * (v16 * v19 - v18 * v17)

if (not(v16 + v6 + v7 <= 0f))
    return 

if (not(v7 <= v6))
    if (v16 > v7)
        goto label_9a9724
else if (not(v16 <= v6))
label_9a9724:
