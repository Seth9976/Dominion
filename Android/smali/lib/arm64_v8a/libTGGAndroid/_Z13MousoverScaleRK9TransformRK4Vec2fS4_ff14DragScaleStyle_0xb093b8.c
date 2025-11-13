// 函数: _Z13MousoverScaleRK9TransformRK4Vec2fS4_ff14DragScaleStyle
// 地址: 0xb093b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_70 = v15
int64_t v14
int64_t var_68 = v14
int64_t v13
int64_t var_60 = v13
int64_t v12
int64_t var_58 = v12
int64_t v11
int64_t var_50 = v11
int64_t v10
int64_t var_48 = v10
int64_t v9
int64_t var_40 = v9
int64_t v8
int64_t var_38 = v8
Transform const& x20 = arg1
int128_t* entry_x8

if (not(arg3 != 0f))
    arg3 = (*(x20 + 0x10)).d
    *entry_x8 = (*x20).d.o
    entry_x8[1] = arg3.o
    return 

int32_t x23_1 = arg7
uint128_t v3
int128_t v5

if (arg5 <= 0f)
    v3.d = float.s(0x3f866666)
    
    if (arg3 > 0f)
    label_b09468:
        
        if (arg3 >= fconvert.s(1f))
            arg3 = vdup_laneq_s32(v3, 0)
        else
            v5.d = fconvert.s(3f)
            v5:4.d = fconvert.s(3f)
            int128_t v0_2 = vmul_f32(vmul_f32(arg3, arg3, 0), vsub_f32(v5, vadd_f32(arg3, arg3)), 0)
            int128_t v6
            v6.q = 0x3f800000
            arg5 = v3.d
            int128_t v0_5
            v0_5.d =
                arg5 f* vmul_f32(vmul_f32(v0_2, v0_2, 0), vsub_f32(v5, vadd_f32(v0_2, v0_2)), 0).d
            v0_5:4.d = arg5 f* v0_5.d
            arg3 = vadd_f32(v0_5, v6)
    else
        arg3 = 1f
else
    v3.d = fconvert.s(1f)
    
    if (not(arg5 f>= v3.d))
        v3.d = arg5 * arg5
        float v4 = fconvert.s(3f)
        arg5 = v3.d f* (v4 - (arg5 + arg5))
        v3.d = arg5 * arg5
        v5.d = float.s(0xbd4cccc0)
        arg5 = v3.d f* (v4 - (arg5 + arg5)) f* v5.d
        v3.d = float.s(0x3f866666)
        v3.d = arg5 f+ v3.d
    
    if (not(arg3 <= 0f))
        goto label_b09468
    
    arg3 = 1f
v12.d = 0f
v8.d = 0f
int64_t var_80_1 = arg3.q

if (not(arg6 <= 0f))
    v8.d = fconvert.s(1f)
    
    if (not(arg6 f>= v8.d))
        arg3 = arg6 * arg6
        arg5 = arg6 + arg6
        arg6 = fconvert.s(3f)
        arg3 = arg3 * (arg6 - arg5)
        v8.d = arg3 * arg3 * (arg6 - (arg3 + arg3)) + 0f

v11.d = *(arg2 + 4)
v10.d = *V20
v9.d = *(V20 + 4)
int64_t v7_1
int64_t v19_1
arg1, v7_1, v19_1 = GetLocalControlScheme()
float v1 = 0f

if (arg1.d == 1)
    if (x23_1 u>= 3)
        pthread_kill(pthread_self(), 6)
        return IsZoomed(XNoReturn()) __tailcall
    
    v1 = *(&data_801b30 + (sx.q(x23_1) << 2))

v7_1.d = float.s(0x42480000)
float v4_3 = v8.d f* v1
float v3_1 = *arg2
v1 = *(arg2 + 4)
float v23_1 = *(x20 + 4)
float v16_1 = *(x20 + 8)
float v17_1 = *(x20 + 0xc)
v19_1.d = *(x20 + 0x10)
float v0_6 = v9.d f+ v8.d f* (v11.d f* fconvert.s(-0.5f) f- v9.d)
float v2 = v10.d f+ v8.d f* (v12.d f- v10.d)
v9.d = v23_1 * v16_1
v10.d = v19_1.d f* v17_1
float v18_1 = v4_3 + fconvert.s(1f)
v4_3 = float.s(0x442f0000)
float var_c0_1 = v0_6 + *(arg4 + 4)
float var_bc_1 = v2 + *arg4
float v27_1 = *QI
float v25_1 = *(QI + 4)
float v26_1 = *(QI + 8)
float v30_1 = *(QI + 0xc)
v1 - v4_3
bool cond:5_1 = v1 > v4_3
bool cond:6_1 = v1 > v4_3
v2 = v19_1.d f* v19_1.d
v4_3 = v23_1 * v23_1
v11.d = v19_1.d f* v16_1
v12.d = v23_1 * v17_1
float var_88_1 = v9.d f- v10.d
float var_84_1 = *(x20 + 0x14)
float var_8c_1 = v9.d f+ v10.d
v0_6 = v2 + v4_3
v2 = v2 - v4_3
float v6_1 = fconvert.s(0.5f)
v13.d = v16_1 * v17_1
v14.d = v19_1.d f* v23_1
float var_98_1 = v11.d f+ v12.d
float v5_1 = v3_1 * v6_1
float v22_1 = v16_1 * v16_1
float var_94_1 = v12.d f- v11.d
v3_1 = v3_1 f+ v7_1.d
v8.d = v17_1 * v17_1

if (cond:5_1)
    v7_1.d = v1 * v6_1
else
    v7_1.d = v1

v6_1 = v30_1 * v30_1
v15.d = v27_1 * v27_1
float var_9c_1 = v13.d f- v14.d
v4_3 = v14.d f+ v13.d
v13.d = v2 + v22_1
float v21_1 = v25_1 * v25_1
float var_90_1 = v4_3
v12.d = v15.d f+ v6_1
v6_1 = v6_1 f- v15.d
float v20_1 = fconvert.s(-2f)

if (not(cond:6_1))
    v5_1 = v3_1

v1 = v25_1 * v30_1
v3_1 = v27_1 * v26_1
v14.d = v21_1 + v6_1
v15.d = v6_1 - v21_1
v6_1 = v25_1 * v26_1
float var_a4_1 = v0_6 - v22_1 f- v8.d
float var_a0_1 = v13.d f- v8.d
v0_6 = v2 - v22_1 f+ v8.d
v8.d = v27_1 * v30_1
v2 = v7_1.d f* v20_1
v20_1 = v5_1 * v20_1
v13.d = v3_1 - v1
v4_3 = v6_1 f+ v8.d
float var_a8_1 = v0_6
v11.d = v2 * v4_3
v12.d = v12.d f- v21_1
float var_c4_1 = v4_3
v4_3 = v20_1 f* v13.d f+ v11.d
v11.d = v26_1 * v26_1
float var_b0_1 = v16_1
float var_ac_1 = v17_1
v12.d = v12.d f- v11.d
v14.d = v14.d f- v11.d
v16_1 = v11.d f+ v15.d
v11.d = v15.d f- v11.d
v15.d = v6_1 f- v8.d
v8.d = v8.d f+ v8.d
v8.d = v6_1 f+ v8.d
v6_1 = v8.d f- v6_1
v8.d = v3_1 + v1
v1 = v3_1 + v1 + v1 - v3_1
v3_1 = v27_1 * v25_1
v0_6 = v26_1 * v30_1
v22_1 = v3_1 - v0_6
v21_1 = v3_1 + v0_6
int32_t var_b8_1 = v7_1.d
float var_b4_1 = v5_1
v0_6 = v3_1 + v0_6 + v0_6 - v3_1
v3_1 = v5_1 f* v12.d
v5_1 = 0f
v10.d = v16_1 * v5_1
v4_3 = v4_3 f- v10.d
v10.d = v30_1 f* v11.d
v9.d = v27_1 * v6_1
v9.d = v10.d f- v9.d
v10.d = v30_1 * v6_1
float v29_1 = v27_1 f* v11.d f+ v10.d
v10.d = v30_1 * v1
float v31_1 = v25_1 f* v11.d f+ v10.d
v10.d = v26_1 f* v11.d
v11.d = v30_1 * v0_6
v10.d = v10.d f+ v11.d
v11.d = v8.d f* v5_1
v2 = v2 * v22_1 - v3_1 f- v11.d
v11.d = v15.d f* v5_1
v3_1 = v20_1 * v21_1 - v7_1.d f* v14.d f- v11.d
v11.d = v25_1 * v1
v9.d = v9.d f- v11.d
v11.d = v25_1 * v0_6
v29_1 = v11.d f+ v29_1
v11.d = v26_1 * v6_1
v31_1 = v11.d f+ v31_1
v11.d = *(V0 + 8)
v10.d = v27_1 * v1 f+ v10.d
float v28_1 = v18_1 f* var_80_1.d
v4_3 = v11.d f+ v28_1 * v4_3
v11.d = v26_1 * v0_6
v1 = v29_1 - v26_1 * v1
v0_6 = v31_1 - v27_1 * v0_6
v9.d = v9.d f- v11.d
v6_1 = v10.d f- v25_1 * v6_1
v5_1 = *V0 + v28_1 * v2
v2 = v16_1 * v4_3
v4_3 = v4_3 + v4_3
v3_1 = *(V0 + 4) + v28_1 * v3_1
float var_c8_1 = v2
v2 = v8.d f* v4_3
v31_1 = v1 * v0_6
v8.d = v9.d f* v6_1
float var_cc_1 = v2
v10.d = v31_1 f- v8.d
v31_1 = v31_1 f+ v8.d
v8.d = v9.d f* v9.d
v11.d = v1 * v1
float var_d0_1 = v15.d f* v4_3
v15.d = v8.d f+ v11.d
v8.d = v8.d f- v11.d
v11.d = v9.d f* v0_6
v2 = v1 * v6_1
v16_1 = v11.d f+ v2
v17_1 = v2 f- v11.d
v11.d = v0_6 * v6_1
v2 = v9.d f* v1
v4_3 = v11.d f- v2
v18_1 = v2 f+ v11.d
v11.d = v30_1 f* v9.d
v20_1 = v11.d f- v27_1 * v1
v11.d = v27_1 f* v9.d
v29_1 = v30_1 * v1 f+ v11.d
v11.d = v25_1 f* v9.d
float v24_1 = v30_1 * v0_6 f+ v11.d
v11.d = v14.d f* v3_1
v3_1 = v3_1 + v3_1
v22_1 = v22_1 * v3_1
v9.d = v26_1 f* v9.d
v30_1 = v30_1 * v6_1 f+ v9.d
v9.d = v12.d f* v5_1
v12.d = var_bc_1 f* var_80_1:4.d
v5_1 = v5_1 + v5_1
v21_1 = v21_1 * v5_1
v5_1 = v13.d f* v5_1
v13.d = var_c0_1 f* var_80_1:4.d
v14.d = 0f f* var_80_1:4.d
v2 = v14.d f+ v14.d
v7_1.d = v2 * v16_1
v2 = v2 * v4_3
v4_3 = v12.d f+ v12.d
v31_1 = v4_3 * v31_1
v4_3 = v4_3 * v17_1
v17_1 = v13.d f+ v13.d
v10.d = v17_1 f* v10.d
v16_1 = v17_1 * v18_1
v17_1 = v0_6 * v0_6
var_80_1.d = v2
v15.d = v15.d f- v17_1
v2 = v17_1 f+ v8.d
v17_1 = v8.d f- v17_1
v8.d = v25_1 * v0_6
v20_1 = v20_1 f- v8.d
v8.d = v26_1 * v0_6
v0_6 = v27_1 * v0_6
v27_1 = v27_1 * v6_1
v3_1 = v5_1 + var_c4_1 * v3_1
v4_3 = v4_3 + v16_1
v5_1 = v26_1 * v6_1
v16_1 = v25_1 * v6_1
v6_1 = v6_1 * v6_1
v24_1 = v27_1 + v24_1
v27_1 = v25_1 * v1
v25_1 = v15.d f- v6_1
v2 = v2 - v6_1
v6_1 = v6_1 + v17_1
v5_1 = v20_1 - v5_1
v20_1 = var_d0_1 + v11.d f+ v21_1
v16_1 = v8.d f+ v29_1 - v16_1
v1 = v24_1 - v26_1 * v1
v0_6 = v27_1 + v30_1 - v0_6
v17_1 = var_cc_1 + v9.d f+ v22_1
v21_1 = v12.d f* v25_1
v22_1 = v19_1.d f* v5_1
v24_1 = v19_1.d f* v16_1
v25_1 = v19_1.d f* v1
v18_1 = v19_1.d f* v0_6
v19_1.d = var_b0_1
v12.d = var_ac_1
v29_1 = v23_1 * v16_1
v11 = v19_1
v27_1 = v19_1.d f* v0_6
v8.d = v19_1.d f* v1
v9.d = v19_1.d f* v5_1
v19_1.d = v12.d f* v16_1
v16_1 = v11.d f* v16_1
v11.d = var_b4_1
v17_1 = v11.d f+ v17_1
v11.d = var_b8_1
v4_3 = v4_3 + v14.d f* v6_1
v20_1 = v11.d f+ v20_1
v11.d = 0f
v6_1 = v22_1 - v29_1
v22_1 = v23_1 * v5_1 + v24_1
v7_1.d = v7_1.d f+ v10.d f+ v21_1
v21_1 = v28_1 * v28_1
v19_1.d = v19_1.d f+ v9.d f+ v25_1
v3_1 = var_c8_1 + v3_1 f+ v11.d + v21_1 * v4_3
v4_3 = v6_1 f- v8.d - v12.d f* v0_6
v5_1 = v23_1 * v1 + v12.d f* v5_1 + v18_1 - v16_1
v6_1 = *x20
v7_1.d = v21_1 f* v7_1.d
v7_1.d = v17_1 f+ v7_1.d
v16_1 = *(x20 + 0x18)
v17_1 = *(x20 + 0x1c)
*(entry_x8 + 8) = v19_1.d f- v23_1 * v0_6
*(entry_x8 + 0xc) = v5_1
*entry_x8 = v21_1 * v6_1
*(entry_x8 + 4) = v27_1 + v22_1 - v12.d f* v1
v1 = v3_1 + v3_1
v2 = v20_1 + v21_1 * (var_80_1.d + v31_1 + v13.d f* v2)
v19_1.d = var_94_1
v5_1 = var_a4_1 f* v7_1.d
v7_1.d = v7_1.d f+ v7_1.d
v18_1 = var_8c_1 f* v7_1.d
v7_1.d = v19_1.d f* v7_1.d
v19_1.d = var_a0_1
v19_1.d = v19_1.d f* v2
v2 = v2 + v2
entry_x8[1].d = v4_3
*(entry_x8 + 0x14) = var_84_1 + v6_1 * (var_98_1 * v1 + v5_1 + var_88_1 * v2)
*(entry_x8 + 0x18) = v16_1 + v6_1 * (var_9c_1 * v1 + v19_1.d f+ v18_1)
*(entry_x8 + 0x1c) = v17_1 + v6_1 * (var_a8_1 * v3_1 + v7_1.d f+ var_90_1 * v2)
