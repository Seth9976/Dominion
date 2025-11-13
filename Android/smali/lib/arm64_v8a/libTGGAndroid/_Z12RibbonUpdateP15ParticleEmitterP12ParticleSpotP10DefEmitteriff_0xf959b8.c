// 函数: _Z12RibbonUpdateP15ParticleEmitterP12ParticleSpotP10DefEmitteriff
// 地址: 0xf959b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = ParticleGetParticleToSystemTransform(arg1)
int32_t x8

x8 = arg4 s< 0x10 ? arg4 : 0x10

int32_t x9 = *(arg2 + 0x288)
int32_t x20_1

x20_1 = x8 s> 2 ? x8 : 2

float v9 = arg6 / float.s(x20_1 - 1)
int64_t var_4c
float var_44
int64_t x8_2
float v0
float v1
float v2_1
float v4_1
float v5_1

if (x9 == 0)
label_f95aa4:
    
    if (x9 - x20_1 + 1 s>= 1)
        result = memmove(arg2 + 0x48, arg2 + 0x48 + mulu.dp.d(x9 - x20_1 + 1, 0x24), 
            sx.q(x20_1 * 0x24 - 0x24))
        x9 = *(arg2 + 0x288) - (x9 - x20_1 + 1)
    
    *(arg2 + 0x288) = x9 + 1
    x8_2 = sx.q(x9)
else
    x8_2 = sx.q(x9) - 1
    void* x10_2 = arg2 + 0x48 + muls.dp.d(x9 - 2, 0x24)
    float* x11_1 = arg2 + 0x48 + x8_2 * 0x24
    v0 = *x11_1
    v1 = x11_1[1]
    v2_1 = x11_1[2]
    float v3_1 = v0 - *x10_2
    v4_1 = v1 - *(x10_2 + 4)
    v5_1 = v2_1 - *(x10_2 + 8)
    
    if (not(v3_1 * v3_1 + v4_1 * v4_1 + v5_1 * v5_1 <= v9 * v9))
        v0 = var_4c.d - v0
        v1 = var_4c:4.d - v1
        v2_1 = var_44 - v2_1
        
        if (not(v0 * v0 + v1 * v1 + v2_1 * v2_1 <= 0f))
            goto label_f95aa4

*(arg2 + x8_2 * 0x24 + 0x48) = var_4c
*(arg2 + x8_2 * 0x24 + 0x50) = var_44
*(arg2 + x8_2 * 0x24 + 0x64) = 0
float var_5c
float var_58
float var_54
float var_50
v4_1 = var_58 * var_50 + var_54 * var_5c
v5_1 = var_58 * var_54 - var_50 * var_5c
*(arg2 + x8_2 * 0x24 + 0x54) = v4_1 + v4_1
*(arg2 + x8_2 * 0x24 + 0x58) = v5_1 + v5_1
*(arg2 + x8_2 * 0x24 + 0x5c) = var_50 * var_50 + var_54 * var_54 - var_58 * var_58 - var_5c * var_5c
*(arg2 + x8_2 * 0x24 + 0x60) = arg5
int32_t x10_4 = *(arg2 + 0x288)

if (x10_4 == x20_1 - 1 && x10_4 s>= 2)
    void* x10_6 = arg2 + 0x48 + mulu.dp.d(x20_1 - 3, 0x24)
    void* x8_8 = arg2 + 0x48 + x8_2 * 0x24
    v0 = *(arg2 + x8_2 * 0x24 + 0x48) - *x10_6
    v1 = *(x8_8 + 4) - *(x10_6 + 4)
    v2_1 = *(x8_8 + 8) - *(x10_6 + 8)
    *(arg2 + 0x64) = sqrt(v0 * v0 + v1 * v1 + v2_1 * v2_1) / v9

return result
