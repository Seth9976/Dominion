// 函数: _Z18EmitterGetIntParamP15ParticleEmitterP18AttribTagValuePair
// 地址: 0xf93f64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg2 + 8)
int32_t* x8_1
float v0

if (x19[1].d == 1)
    x8_1 = *x19
    v0 = *x8_1

if (x19[1].d != 1 || not(v0 f== x8_1[1]))
    int32_t x8_2 = *arg2
    float v0_1 = MakeUnitFloat(WhiteNoise((*(arg1 + 0x2c) + x8_2) * x8_2))
    v0 = TrackScalarGetValue(x19, *(arg1 + 0x314), *(arg1 + 0x308), v0_1)

float v1

if (v0 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

return zx.q(vcvts_s32_f32(v0 + v1))
