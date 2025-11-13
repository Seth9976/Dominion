// 函数: _Z15SpotParamWobbleP12ParticleSpotP18AttribTagValuePair
// 地址: 0xf9465c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

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
ParticleEmitter* x19 = *(arg1 + 0x30)
ParticleSpot* x20 = arg1
ParticleEmitter* x23 = x19

if (zx.d(*(arg1 + 0x44)) == 0)
    goto label_f946f8

int64_t* x22_1 = **(x19 + 0x300)
int64_t* x8_2 = *x22_1
int64_t v0

if (x8_2 == 0)
    if (x22_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v0 = AssetCatalogLoadAsset(x22_1, false, true)
    x8_2 = *x22_1

if (zx.d(*(**x8_2 + sx.q(*(x19 + 0x2f0)) * 0x168 + 0xe5)) != 0)
    return 

x23 = *(x20 + 0x30)
label_f946f8:
int64_t* x22_2 = *(arg2 + 8)

if (x22_2[1].d == 1)
    int32_t* x8_9 = *x22_2
    v8.d = *x8_9
    v0.d = x8_9[1]

if (x22_2[1].d == 1 && v8.d f== v0.d)
label_f94760:
    int32_t* x8_12 = *x22_2
    v9.d = *x8_12
    v0.d = x8_12[1]
    
    if (not(v9.d f== v0.d))
        goto label_f94770
else
    int32_t x8_10 = *arg2
    float v0_1 = MakeUnitFloat(WhiteNoise((*(x23 + 0x2c) + x8_10) * x8_10))
    v0 = TrackScalarGetValue(x22_2, *(x23 + 0x314), *(x23 + 0x308), v0_1)
    x22_2 = *(arg2 + 8)
    v8 = v0
    
    if (x22_2[1].d == 1)
        goto label_f94760
    
label_f94770:
    int32_t x8_13 = *arg2
    float v1_3 = MakeUnitFloat(WhiteNoise((*(x19 + 0x2c) + x8_13) * x8_13))
    float v0_3 = *(x19 + 0x310)
    v9 = TrackScalarGetValue(x22_2, *(x19 + 0x314) - (v0_3 f> *(x19 + 0x308) ? 1 : 0), v0_3, v1_3)

float v0_6
float v1_4
float v2_3
v0_6, v1_4, v2_3 = SpotWobblePoint(x20, *(*(x19 + 0x300) + 0x7c), v8.d)
float v0_8
float v1_5
int64_t v2_4
v0_8, v1_5, v2_4 = SpotWobblePoint(x20, *(*(x19 + 0x300) + 0x7c) - 1, v9.d)
DefScalarTrack* x0_12 = EmitterGetScalarTrack_SlowLookup(x19, 0x4d)
DefScalarTrack* x0_14 = EmitterGetScalarTrack_SlowLookup(x19, 0x4e)
DefScalarTrack* x0_16 = EmitterGetScalarTrack_SlowLookup(x19, 0x4f)
int64_t v0_10 = TrackScalarGetValue(x0_12, *(x19 + 0x314), *(x19 + 0x308), v0_6)
int64_t v0_12 = TrackScalarGetValue(x0_14, *(x19 + 0x314), *(x19 + 0x308), v1_4)
v12 = TrackScalarGetValue(x0_16, *(x19 + 0x314), *(x19 + 0x308), v2_3)
int64_t v0_14
v0_14.d = *(x19 + 0x310)
v13 =
    TrackScalarGetValue(x0_12, *(x19 + 0x314) - (v0_14.d f> *(x19 + 0x308) ? 1 : 0), v0_14.d, v0_8)
int64_t v0_15
v0_15.d = *(x19 + 0x310)
v9 = TrackScalarGetValue(x0_14, *(x19 + 0x314) - (v0_15.d f> *(x19 + 0x308) ? 1 : 0), v0_15.d, v1_5)
int64_t v0_16
v0_16.d = *(x19 + 0x310)
float v0_17
arg1, v0_17 = TrackScalarGetValue(x0_16, *(x19 + 0x314) - (v0_16.d f> *(x19 + 0x308) ? 1 : 0), 
    v0_16.d, v2_4.d)
float v2_5 = v0_12.d f- v9.d + *(x19 + 0x2a8)
v0_17 = v12.d f- v0_17 + *(x19 + 0x2ac)
*(x19 + 0x2a4) = v0_10.d f- v13.d + *(x19 + 0x2a4)
*(x19 + 0x2a8) = v2_5
*(x19 + 0x2ac) = v0_17
