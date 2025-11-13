// 函数: _Z22SpotGetFloatParamDeltaP12ParticleSpotP18AttribTagValuePair
// 地址: 0xf9416c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg2 + 8)
void* x22 = *(arg1 + 0x30)
ParticleSpot* x21 = arg1
int64_t v0
int64_t v8

if (x19[1].d == 1)
    int32_t* x8_1 = *x19
    v8.d = *x8_1
    v0.d = x8_1[1]

if (x19[1].d == 1 && v8.d f== v0.d)
label_f941fc:
    int32_t* x8_5 = *x19
    v0.d = *x8_5
    
    if (not(v0.d f== x8_5[1]))
        goto label_f9420c
else
    int32_t x8_2 = *arg2
    float v1_1 = MakeUnitFloat(WhiteNoise((*(x22 + 0x2c) + x8_2) * x8_2))
    float v0_1 = *(x22 + 0x310)
    arg1, v0 =
        TrackScalarGetValue(x19, *(x22 + 0x314) - (v0_1 f> *(x22 + 0x308) ? 1 : 0), v0_1, v1_1)
    x19 = *(arg2 + 8)
    x22 = *(x21 + 0x30)
    v8 = v0
    
    if (x19[1].d == 1)
        goto label_f941fc
    
label_f9420c:
    int32_t x8_6 = *arg2
    float v0_2 = MakeUnitFloat(WhiteNoise((*(x22 + 0x2c) + x8_6) * x8_6))
    arg1, v0 = TrackScalarGetValue(x19, *(x22 + 0x314), *(x22 + 0x308), v0_2)

v0.d = v0.d f- v8.d
