// 函数: _Z14FabUICursorPosRK5FabElRK8FabStateRK3Ray
// 地址: 0xf5d450
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ElBox(arg1, arg2)
OBBox var_88
CalcTransform(arg2 + 0xc, &var_88)
int32_t var_a4
int64_t v9
v9.d = var_a4
int32_t var_a0
int64_t v8
v8.d = var_a0
int32_t var_9c
int64_t v12
v12.d = var_9c
int32_t var_98
int64_t v13
v13.d = var_98
float v1 = v8.d f* v9.d
float v2 = v12.d f* v13.d
int64_t v15
v15.d = v8.d f* v8.d
int64_t v11
v11.d = v12.d f* v12.d
int64_t v10
v10.d = v13.d f* v13.d
float var_c8 = v2
float var_c4 = v1
float v0 = fconvert.s(-2f)
int64_t v14
v14.d = v9.d f* v9.d
float v3 = v8.d f* v12.d
float var_cc = v3
v1 = (v1 - v2) * v0
v2 = v15.d f- v11.d f+ v10.d f- v14.d
v0 = (v3 + v9.d f* v13.d) * v0
float var_b8 = v1
float var_b4 = fneg(v2)
float var_b0 = v0
float var_94
float var_90
float var_8c
float var_ac = fneg(var_94 * v1 - v2 * var_90 + v0 * var_8c)
float var_14
int64_t result = IntersectRayPlane(arg3, &var_b8, &var_14)

if ((result.d & 1) == 0)
    pthread_kill(pthread_self(), 6)
    FabEl* x0_3
    FabState* x1_2
    x0_3, x1_2 = XNoReturn()
    return FabElUI(x0_3, x1_2) __tailcall

float v0_1 = var_14
v0_1 * *(arg3 + 0xc) + *arg3
v0_1 * *(arg3 + 0x10) + *(arg3 + 4)
v0_1 * *(arg3 + 0x14) + *(arg3 + 8)
return result
