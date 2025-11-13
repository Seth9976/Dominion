// 函数: _Z11TrailUpdateP15ParticleEmitterP12ParticleSpotP10DefEmitteriff
// 地址: 0xf9533c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = ParticleGetParticleToSystemTransform(arg1)
int32_t x9 = *(arg2 + 0x288)
int64_t v10
v10.d = *(*(arg1 + 0x300) + 0x84)
int32_t x8

x8 = arg4 s< 0x10 ? arg4 : 0x10

int32_t x20_1

x20_1 = x8 s> 2 ? x8 : 2

int32_t x8_1 = x9 - 1

if (x9 s<= 1 || not(*(arg2 + mulu.dp.d(x8_1, 0x24) + 0x68) >= v10.d f- arg6))
    if (x9 - x20_1 + 1 s< 1)
        x8_1 = x9
    else
        result = memmove(arg2 + 0x48, arg2 + 0x48 + mulu.dp.d(x9 - x20_1 + 1, 0x24), 
            sx.q(x20_1 * 0x24 - 0x24))
        x8_1 = *(arg2 + 0x288) - (x9 - x20_1 + 1)
    
    *(arg2 + 0x288) = x8_1 + 1
    *(arg2 + muls.dp.d(x8_1, 0x24) + 0x68) = v10.d

void* x11 = arg2 + muls.dp.d(x8_1, 0x24)
int32_t var_44
*(x11 + 0x50) = var_44
int64_t var_4c
*(x11 + 0x48) = var_4c
*(x11 + 0x64) = 0
float var_5c
float var_58
float var_54
float var_50
float v4 = var_58 * var_50 + var_54 * var_5c
float v5 = var_58 * var_54 - var_50 * var_5c
*(x11 + 0x54) = v4 + v4
*(x11 + 0x58) = v5 + v5
*(x11 + 0x5c) = var_50 * var_50 + var_54 * var_54 - var_58 * var_58 - var_5c * var_5c
*(x11 + 0x60) = arg5
int32_t x9_4 = *(arg2 + 0x288)

if (x9_4 == x20_1 - 1 && x9_4 s>= 2)
    *(arg2 + 0x64) = (v10.d f- *(arg2 + sx.q(x8_1) * 0x24 + 0x68)) / arg6

return result
