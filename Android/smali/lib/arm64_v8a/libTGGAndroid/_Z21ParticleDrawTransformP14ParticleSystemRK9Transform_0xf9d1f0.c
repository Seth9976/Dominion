// 函数: _Z21ParticleDrawTransformP14ParticleSystemRK9Transform
// 地址: 0xf9d1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
void* x8_1 = *(*gpGameData + 0x20)
*(x8_1 + 0x2c) += 1
int128_t v1 = data_71ae80
int128_t var_6c
__builtin_memset(&var_6c, 0, 0x2c)
int128_t var_9c
__builtin_memset(&var_9c, 0, 0x30)
int32_t x10 = *(V1 + 8)
v0 = *gRgbaWhite
int128_t var_7c = v1
int64_t var_a8 = *V1
int32_t var_a0 = x10
int128_t var_8c = v0
int128_t var_40 = *(arg1 + 0x54)
int128_t var_30 = *(arg1 + 0x64)

if (zx.d(*(arg1 + 0x9d)) != 0 && zx.d(*(arg1 + 0x9c)) != 0)
    Draw3DQuadGroupStart(&var_30:4)

for (ParticleEmitter* i = *(arg1 + 0x10); i != 0; i = *(i + 0x320))
    ParticleEmitterDraw(i, &var_a8, arg2)

if (zx.d(*(arg1 + 0x9d)) != 0 && zx.d(*(arg1 + 0x9c)) != 0)
    Draw3DQuadGroupEnd()
