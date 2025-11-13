// 函数: _Z14ScreenPickRectRK4Vec2RK9TransformRK5RectFPS_
// 地址: 0x101bc74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_60 = v12
int64_t v11
int64_t var_58 = v11
int64_t v10
int64_t var_50 = v10
int64_t v9
int64_t var_48 = v9
int64_t v8
int64_t var_40 = v8
uint64_t x8 = *gAppInterface
int64_t var_90 = 0
float v2 = float.s(*(x8 + 0x28))
float v1 = float.s(*(x8 + 0x2c))
float var_88 = v2
float var_84 = v1
int32_t v0_1
int32_t v1_1
int32_t v2_1
int32_t v3
v0_1, v1_1, v2_1, v3 = ViewRectFromFovAspect(*gDraw3DData, v2 / v1)
int32_t var_a0 = v0_1
int32_t var_9c = v1_1
int32_t var_98 = v2_1
int32_t var_94 = v3
int128_t v0_2
int128_t v1_2
v0_2, v1_2 = PoseSet(gDraw3DData + 0x24, gDraw3DData + 0x14)
int128_t var_c0
int128_t var_80 = var_c0
var_80 = var_c0
PickRay(&var_a0, arg1)
float v1_3 = *arg2
float v2_2 = *(arg2 + 4)
float v3_1 = *(arg2 + 8)
float v0_3 = *(arg2 + 0xc)
float v4 = *(arg2 + 0x10)
float v20 = v4 * v4
float v21 = v2_2 * v2_2
float v22 = v3_1 * v3_1
float v17 = *VZ
float v18 = *(VZ + 4)
float v19 = *(VZ + 8)
float v23 = v2_2 * v3_1
float v24 = v4 * v0_3
float v25 = v4 * v3_1
float v26 = v2_2 * v0_3
v3_1 = v3_1 * v0_3
v2_2 = v4 * v2_2
v4 = v1_3 * *V0
float v6 = v1_3 * *(V0 + 4)
v1_3 = v1_3 * *(V0 + 8)
float v7 = v20 + v21
float v16 = v23 - v24
float v27 = v25 + v26
v23 = v23 + v24
v20 = v20 - v21
v21 = v3_1 - v2_2
v24 = v26 - v25
v2_2 = v2_2 + v3_1
v3_1 = v18 + v18
v25 = v19 + v19
v26 = v17 + v17
float v28 = v6 + v6
float v29 = v1_3 + v1_3
float v30 = v4 + v4
v7 = v7 - v22
float v31 = v20 + v22
v20 = v20 - v22
v22 = v27 * v25
v25 = v21 * v25
v27 = v29 * v27
v21 = v29 * v21
v29 = v23 * v26
v26 = v24 * v26
v23 = v30 * v23
v24 = v30 * v24
v30 = v16 * v3_1
v3_1 = v2_2 * v3_1
v2_2 = v28 * v2_2
v0_3 = v0_3 * v0_3
v16 = v28 * v16
v7 = v7 - v0_3
v28 = v31 - v0_3
v0_3 = v20 + v0_3
v1_3 = v1_3 * v0_3 + v24 + v2_2
v0_3 = v0_3 * v19 + v26 + v3_1
v3_1 = v27 + v4 * v7 + v16
v4 = v21 + v23 + v6 * v28
v2_2 = v7 * v17 + v30 + v22
v6 = v29 + v28 * v18 + v25
v3_1 = *(arg2 + 0x14) + v3_1
v4 = *(arg2 + 0x18) + v4
v1_3 = *(arg2 + 0x1c) + v1_3
float var_d0 = v2_2
float var_cc = v6
float var_c8 = v0_3
float var_c4 = fneg(v1_3 * v0_3 + v3_1 * v2_2 + v4 * v6)
float var_d4
int32_t x0_3
int128_t v0_4
int128_t v1_4
x0_3, v0_4, v1_4 = IntersectRayPlane(&var_c0, &var_d0, &var_d4)
int64_t result = 0

if ((x0_3 & 1) != 0)
    float v2_3 = var_d4
    v0_4.d = *V20
    v1_4.d = *(V20 + 4)
    v11.d = v2_3 * var_c0:0xc.d f+ var_c0.d
    float var_b0
    v12.d = v2_3 * var_b0 f+ var_c0:4.d
    float v0_5
    int64_t v1_5
    v0_5, v1_5 = ScreenCoordToCameraCoord(0)
    int64_t x0_4
    float v0_6
    float v1_6
    float v2_4
    float v3_3
    x0_4, v0_6, v1_6, v2_4, v3_3 = RectScreen()
    float v0_7
    int64_t v1_7
    v0_7, v1_7 = ScreenCoordToCameraCoord(x0_4)
    v10 = v1_7
    v1_7.d = v11.d f- v0_5
    v11.d = v1_7.d f/ (v0_7 - v0_5)
    float v0_8 = RectScreen()
    v9.d = v0_8 + v11.d f* (RectScreen() - v0_8)
    v10.d = (v12.d f- v1_5.d) / (v10.d f- v1_5.d)
    int64_t v1_9 = RectScreen()
    float v4_2 = RectScreen() f- v1_9.d
    float v0_10 = *(arg2 + 0x10)
    float v1_10 = *(arg2 + 8)
    float v3_4 = *(arg2 + 0xc)
    float v2_6 = *(arg2 + 4)
    float v18_1 = v9.d f- *(arg2 + 0x14)
    v4_2 = v1_9.d f+ v10.d f* v4_2 - *(arg2 + 0x18)
    float v21_1 = v2_6 * v1_10
    float v22_1 = v0_10 * v3_4
    float v19_1 = v0_10 * v0_10
    float v20_1 = v2_6 * v2_6
    float v7_1 = 0f - *(arg2 + 0x1c)
    float v6_2 = v1_10 * v1_10
    float v5_2 = v3_4 * v3_4
    float v16_1 = v7_1 + v7_1
    float v17_1 = fconvert.s(1f) / *arg2
    v7_1 = v17_1 * (v16_1 * (v2_6 * v3_4 - v0_10 * v1_10) + v18_1 * (v19_1 + v20_1 - v6_2 - v5_2)
        + (v4_2 + v4_2) * (v21_1 + v22_1))
    
    if (not(*arg3 f<= v7_1))
        return 0
    
    result = 0
    
    if (not(*(arg3 + 8) < v7_1))
        v0_10 = v17_1 * (v16_1 * (v0_10 * v2_6 + v1_10 * v3_4) + (v18_1 + v18_1) * (v21_1 - v22_1)
            + v4_2 * (v19_1 - v20_1 + v6_2 - v5_2))
        
        if (not(*(arg3 + 4) > v0_10))
            if (*(arg3 + 0xc) < v0_10)
                return 0
            
            if (arg4 != 0)
                *arg4 = v7_1
                *(arg4 + 4) = v0_10
            
            return 1

return result
