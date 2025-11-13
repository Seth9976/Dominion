// 函数: _Z15FlanimGetMatrixP6XAssetiif
// 地址: 0xf65178
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefFlanim* x0 = FlanimGetDef(arg1)
float v1 = 0f
void* x9 = *FlanimGetDef(arg1) + muls.dp.d(arg2, 0x18)
int32_t x10 = *(x9 + 8)
int32_t x8_1 = *(x9 + 0xc)
int32_t x9_1 = x8_1 - x10
float v2 = arg4 / (float.s(x9_1 + 1) / *(x9 + 0x10))
float temp0 = vmin_f32(v2, fconvert.s(1f))
float v0

v0 = v2 < 0f ? v1 : temp0

v0 = v0 * float.s(x9_1) + float.s(x10)
float temp0_1 = vrndm_f32(v0)
float v3

if (temp0_1 < 0f)
    v3 = fconvert.s(-0.5f)
else
    v3 = fconvert.s(0.5f)

uint32_t temp0_2 = vcvts_s32_f32(temp0_1 + v3)
float v8

if (x8_1 s> temp0_2)
    v8 = v0 - temp0_1
else
    v8 = v1

float var_e8

if (v8 != 0f)
    int32_t x22_1
    
    if (x8_1 s> temp0_2)
        x22_1 = temp0_2 + 1
    else
        x22_1 = temp0_2
    
    FlanimShapeTransform var_78
    FlanimGetShapeTransformAtFrame(x0, arg3, temp0_2, &var_78)
    FlanimShapeTransform var_b0
    FlanimGetShapeTransformAtFrame(x0, arg3, x22_1, &var_b0)
    FlanimLerpShapeTransform(&var_e8, &var_78, &var_b0, v8)
else
    FlanimGetShapeTransformAtFrame(x0, arg3, temp0_2, &var_e8)

float y
float cosp_1
float sinp_1
sincosf(&sinp_1, &cosp_1, y)
float var_e0
float v2_1 = sinp_1 * var_e0
float* entry_x8
*entry_x8 = cosp_1 * var_e0
entry_x8[3] = v2_1
float cosp
float sinp
float y_1
int64_t result = sincosf(&sinp, &cosp, y_1)
float cosp_2 = cosp
float sinp_2 = sinp
*(entry_x8 + 0x18) = 0
float v2_2 = var_e8
entry_x8[8] = 0x3f800000
float var_dc
entry_x8[4] = cosp_2 * var_dc
int32_t var_e4
entry_x8[5] = var_e4
entry_x8[1] = var_dc * fneg(sinp_2)
entry_x8[2] = v2_2
return result
