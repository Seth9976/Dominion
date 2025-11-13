// 函数: _ZN16TGGAudioInstance4seekEdPfj
// 地址: 0x106d0bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1
double v3
x0_1, v3 = SoundGetDef(*(*(arg2 + 0x1f0) + 0x98))
int32_t x22 = **(x0_1 + 0x38)
int32_t x8_5
int32_t x20_2

if (*(x0_1 + 0x18) == 0)
    int32_t x9_1 = arg2[4]
    int32_t x10_1 = *(*(x0_1 + 0x28) + 0xa8)
    x8_5 = (x9_1 & 1) << 0x1f s>> 0x1f & x10_1
    
    if ((x9_1 & 1) == 0)
        x20_2 = x10_1
    else
        x20_2 = 0
else
    void* x20_1 = *(SoundGetDef(**(x0_1 + 0x20)) + 0x28)
    void* x0_5
    x0_5, v3 = SoundGetDef(*(*(x0_1 + 0x20) + 8))
    x20_2 = *(x20_1 + 0xa8)
    x8_5 = *(*(x0_5 + 0x28) + 0xa8)

float v0 = float.s(x22)
int64_t v8
v8.d = fconvert.s(arg1)
int64_t v10
v10.d = float.s(x20_2) / v0
float temp0 = vrndm_f32(v8.d f* v0)
v3.d = fconvert.s(-0.5f)
float v2

if (temp0 < 0f)
    v2 = v3.d
else
    v2 = fconvert.s(0.5f)

uint32_t temp0_1 = vcvts_s32_f32(temp0 + v2)
*(arg2 + 0x60) = arg1
arg2[0x26c] = temp0_1
arg2[0x266] = 0
int32_t x21

if (fconvert.d(v10.d) >= arg1)
    x21 = 0
    
    if ((zx.d(*(arg2 + 0x12)) & 2) != 0)
    label_106d1dc:
        
        if (x21 == 0)
            SoundOggTimeSeek(&arg2[0x80], v8.d)
            SoundOggRawSeek(&arg2[0x172], 0)
        else
            SoundOggTimeSeek(&arg2[0x80], v10.d)
            SoundOggTimeSeek(&arg2[0x172], v8.d)
        
        *(arg2 + 0x9a0) = 0
    else
    label_106d22c:
        
        if (x21 == 0)
            arg2[0x268] = temp0_1
        else
            arg2[0x268] = temp0_1 - x20_2
    
    return 0

float y = float.s(x8_5) / v0

if (y == 0f)
    x21 = 0
    v8 = v10
    int32_t x8_10 = arg2[4] | 0x10000
    arg2[4] = x8_10
    
    if ((x8_10 u>> 0x10 & 2) == 0)
        goto label_106d22c
    
    goto label_106d1dc

if (v10.d f== 0f)
    x21 = 0
else
    x21 = 1
    arg2[0x266] = 1

v8 = fmodf(v8.d f- v10.d, y)

if ((zx.d(*(arg2 + 0x12)) & 2) != 0)
    goto label_106d1dc

goto label_106d22c
