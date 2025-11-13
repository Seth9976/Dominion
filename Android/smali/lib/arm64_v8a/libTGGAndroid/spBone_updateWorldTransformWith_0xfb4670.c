// 函数: spBone_updateWorldTransformWith
// 地址: 0xfb4670
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1[1]
void* x8 = arg1[2]
float v14 = arg2
int64_t v15
v15.d = *(x20 + 0x84)
arg2 = *(x20 + 0x88)
int32_t x9_1

if (data_2422588 != 0)
    x9_1 = -1
else
    x9_1 = 1

float sinp_16 = arg3.d
*(arg1 + 0x44) = v14
arg1[9].d = arg3.d
arg3.d = float.s(x9_1)
float sinp_15 = arg7.d
float v8 = arg4
*(arg1 + 0x54) = arg6
arg1[0xb].d = arg7.d
arg7.d = arg2 f* arg3.d
*(arg1 + 0x4c) = arg4
arg1[0xa].d = arg5
*(arg1 + 0x5c) = arg8
arg1[0xc].d = 1

if (x8 == 0)
    arg3.d = float.s(0x42b40000)
    arg2 = v8 + sinp_15
    arg3.d = v8 f+ arg3.d
    v8 = float.s(0x3c8efa35)
    float v9_1 = arg7.d
    float cosp_1
    float sinp_1
    sincosf(&sinp_1, &cosp_1, arg2 * v8)
    float sinp_13 = sinp_1
    *(arg1 + 0x64) = cosp_1 * arg5 f* v15.d
    float cosp
    float sinp
    sincosf(&sinp, &cosp, (arg3.d f+ arg8) * v8)
    arg1[0xd].d = cosp * arg6 f* v15.d
    arg1[0xe].d = sinp_13 * arg5 * v9_1
    *(arg1 + 0x74) = sinp * arg6 * v9_1
    *(arg1 + 0x6c) = v15.d f* v14 + *(x20 + 0x8c)
    arg2 = v9_1 * sinp_16 + *(x20 + 0x90)
    arg1[0xf].d = arg2
else
    float var_c0_1 = arg6
    float var_bc = v15.d
    v15.d = *(x8 + 0x64)
    arg3.d = *(x8 + 0x68)
    float y_2 = *(x8 + 0x70)
    arg6 = *(x8 + 0x74)
    *(arg1 + 0x6c) = v15.d f* v14 + arg3.d f* sinp_16 + *(x8 + 0x6c)
    arg1[0xf].d = y_2 * v14 + arg6 * sinp_16 + *(x8 + 0x78)
    uint64_t x20_1 = zx.q(*(*arg1 + 0x38))
    float var_c4_1
    float v10
    
    if (x20_1.d u> 4)
        v10 = *(arg1 + 0x64)
        arg4 = arg1[0xd].d
        arg2 = arg1[0xe].d
        arg3.d = *(arg1 + 0x74)
        arg6 = var_bc
    label_fb4bfc:
        arg2 = arg7.d f* arg2
        arg3.d = arg7.d f* arg3.d
        *(arg1 + 0x64) = arg6 * v10
        arg1[0xd].d = arg6 * arg4
        arg1[0xe].d = arg2
        *(arg1 + 0x74) = arg3.d
    else
        switch (x20_1)
            case 0
                arg2 = v8 + sinp_15
                arg4 = v8 + float.s(0x42b40000)
                v8 = float.s(0x3c8efa35)
                float v14_1 = arg3.d
                float cosp_3
                float sinp_3
                sincosf(&sinp_3, &cosp_3, arg2 * v8)
                float sinp_14 = sinp_3
                sinp_16 = cosp_3 * arg5
                float cosp_2
                float sinp_2
                sincosf(&sinp_2, &cosp_2, (arg4 + arg8) * v8)
                float v1_7 = sinp_14 * arg5
                float v3 = cosp_2 * var_c0_1
                arg2 = sinp_2 * var_c0_1
                float v5_1 = arg2 * v14_1
                arg2 = v3 * y_2 + arg2 * arg6
                *(arg1 + 0x64) = sinp_16 f* v15.d + v1_7 * v14_1
                arg1[0xd].d = v3 f* v15.d + v5_1
                arg1[0xe].d = sinp_16 * y_2 + v1_7 * arg6
                *(arg1 + 0x74) = arg2
            case 1
                arg3.d = float.s(0x42b40000)
                arg2 = v8 + sinp_15
                arg3.d = v8 f+ arg3.d
                v8 = float.s(0x3c8efa35)
                float cosp_5
                float sinp_5
                sincosf(&sinp_5, &cosp_5, arg2 * v8)
                sinp_16 = sinp_5
                v10 = cosp_5 * arg5
                float cosp_4
                float sinp_4
                sincosf(&sinp_4, &cosp_4, (arg3.d f+ arg8) * v8)
                arg3.d = cosp_4
                arg2 = sinp_16 * arg5
                arg4 = arg3.d f* var_c0_1
                arg3.d = sinp_4 * var_c0_1
                arg6 = var_bc
                goto label_fb4bfc
            case 2
                arg2 = v15.d f* v15.d + y_2 * y_2
                arg4 = float.s(0x38d1b717)
                var_c4_1 = arg7.d
                float var_c8_2
                float v0_5
                
                if (arg2 <= arg4)
                    var_c8_2 = arg3.d
                    v14 = arg6
                    y_2 = 0f
                    v0_5 = atan2f(arg6, arg3.d, arg4) * float.s(0xc2652ee0) + float.s(0x42b40000)
                    v15.d = 0f
                else
                    arg3.d = v15.d f* arg6 - arg3.d f* y_2
                    arg4 = fneg(arg3.d)
                    
                    if (arg3.d f< 0f)
                        arg3.d = arg4
                    else
                        arg3.d = arg3.d
                    
                    arg2 = arg3.d f/ arg2
                    arg3.d = y_2 * arg2
                    var_c8_2 = arg3.d
                    v14 = v15.d f* arg2
                    v0_5 = atan2f(y_2, v15.d, arg4) * float.s(0x42652ee0)
                
                float v1_6 = v8 + sinp_15 - v0_5
                v0_5 = v8 + arg8 - v0_5
                v8 = float.s(0x3c8efa35)
                float cosp_7
                float sinp_7
                sincosf(&sinp_7, &cosp_7, v1_6 * v8)
                sinp_15 = sinp_7
                sinp_16 = cosp_7 * arg5
                float cosp_6
                float sinp_6
                arg3, arg7 = sincosf(&sinp_6, &cosp_6, (v0_5 + float.s(0x42b40000)) * v8)
                arg2 = sinp_15 * arg5
                v10 = v15.d f* sinp_16 - var_c8_2 * arg2
                arg3.d = sinp_6
                arg2 = y_2 * sinp_16 + v14 * arg2
                arg4 = cosp_6 * var_c0_1
                arg3.d = arg3.d f* var_c0_1
                arg6 = var_c8_2 f* arg3.d
                arg7.d = y_2 * arg4
                arg3.d = v14 f* arg3.d
                arg4 = v15.d f* arg4 - arg6
                goto label_fb4be8
            case 3, 4
                var_c4_1 = arg7.d
                float cosp_11
                float sinp_11
                sincosf(&sinp_11, &cosp_11, v8 * float.s(0x3c8efa35))
                float y = cosp_11
                float sinp_12 = sinp_11
                float y_3 = y f* v15.d
                y = y * y_2 + sinp_12 * arg6
                sinp_12 = (y_3 + sinp_12 f* arg3.d) / var_bc
                y = y / var_c4_1
                y_3 = sqrt(sinp_12 * sinp_12 + y * y)
                float y_1
                
                if (y_3 > float.s(0x3727c5ac))
                    y_1 = fconvert.s(1f) / y_3
                else
                    y_1 = y_3
                
                float x = sinp_12 * y_1
                y = y * y_1
                y_1 = x * x
                v14 = sqrt(y_1 + y * y)
                
                if (x20_1.d == 3)
                    y_1 = v15.d f* arg6
                    
                    if (((var_bc < 0f ? 1 : 0) ^ (var_c4_1 < 0f ? 1 : 0))
                            == (y_1 - arg3.d f* y_2 >= 0f ? 1 : 0))
                        v14 = fneg(v14)
                
                float cosp_8
                float sinp_8
                sincosf(&sinp_8, &cosp_8, atan2f(y, x, y_1) + float.s(0x3fc90fdb))
                y_2 = float.s(0x3c8efa35)
                v15.d = v14 * cosp_8
                v14 = v14 * sinp_8
                float cosp_10
                float sinp_10
                sincosf(&sinp_10, &cosp_10, sinp_15 * y_2)
                sinp_15 = sinp_10
                int128_t v8_1
                v8_1.d = cosp_10 * arg5
                float cosp_9
                float sinp_9
                arg3, arg7 = sincosf(&sinp_9, &cosp_9, (arg8 + float.s(0x42b40000)) * y_2)
                arg7.d = y
                arg2 = sinp_15 * arg5
                v10 = v8_1.d f* x + arg2 f* v15.d
                arg3.d = sinp_9
                arg2 = v8_1.d f* arg7.d + arg2 * v14
                arg4 = cosp_9 * var_c0_1
                arg3.d = arg3.d f* var_c0_1
                arg6 = arg3.d f* v15.d
                arg7.d = arg4 f* arg7.d
                arg3.d = arg3.d f* v14
                arg4 = arg4 * x + arg6
            label_fb4be8:
                arg3.d = arg7.d f+ arg3.d
                arg6 = var_bc
                arg7.d = var_c4_1
                goto label_fb4bfc

return arg2
