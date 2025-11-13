// 函数: _Z22ParticleCountParticlesP14ParticleSystem
// 地址: 0xf9dd90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ParticleEmitter* i_1 = *(arg1 + 0x10)

if (i_1 == 0)
    return 0

int32_t x19 = 0
ParticleEmitter* i

do
    i = *(i_1 + 0x320)
    x19 += EmitterCountParticles(i_1)
    i_1 = i
while (i != 0)
return zx.q(x19)
