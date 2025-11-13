// 函数: _Z20SpotParamTumbleSpeedP12ParticleSpotP18AttribTagValuePair
// 地址: 0xf94be0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg2 + 8)
void* x21 = *(arg1 + 0x30)
int32_t* x8_1
float v0

if (x20[1].d == 1)
    x8_1 = *x20
    v0 = *x8_1

if (x20[1].d != 1 || not(v0 f== x8_1[1]))
    int32_t x8_2 = *arg2
    float v0_1 = MakeUnitFloat(WhiteNoise((*(x21 + 0x2c) + x8_2) * x8_2))
    v0 = TrackScalarGetValue(x20, *(x21 + 0x314), *(x21 + 0x308), v0_1)

if ((zx.d(*guard_variable_for_DegToRad(float)::CONVERSION) & 1) == 0)
    float var_2c_1 = v0
    v0 = var_2c_1
    
    if (__cxa_guard_acquire(guard_variable_for_DegToRad(float)::CONVERSION) != 0)
        *DegToRad(float)::CONVERSION = *TWO_PI / float.s(0x43b40000)
        __cxa_guard_release(guard_variable_for_DegToRad(float)::CONVERSION)
        v0 = var_2c_1

void* x21_1 = *(arg1 + 0x30)
float cosp
float sinp
int64_t result = sincosf(&sinp, &cosp, 
    v0 * *DegToRad(float)::CONVERSION * *(*(x21_1 + 0x300) + 0x80) * fconvert.s(0.5f))
float cosp_1 = cosp
float sinp_1 = sinp
float v5 = *(x21_1 + 0x2a0)
float v6 = *(x21_1 + 0x294)
float v7 = *(x21_1 + 0x298)
float v16 = *(x21_1 + 0x29c)
float v2_2 = *(arg1 + 0x18) * sinp_1
float v3 = *(arg1 + 0x1c) * sinp_1
sinp_1 = sinp_1 * *(arg1 + 0x20)
*(x21_1 + 0x294) = v5 * v2_2 + cosp_1 * v6 + v3 * v16 - sinp_1 * v7
*(x21_1 + 0x298) = sinp_1 * v6 + v5 * v3 + cosp_1 * v7 - v2_2 * v16
*(x21_1 + 0x29c) = v2_2 * v7 + v5 * sinp_1 + cosp_1 * v16 - v3 * v6
*(x21_1 + 0x2a0) = cosp_1 * v5 - v2_2 * v6 - v3 * v7 - sinp_1 * v16
return result
