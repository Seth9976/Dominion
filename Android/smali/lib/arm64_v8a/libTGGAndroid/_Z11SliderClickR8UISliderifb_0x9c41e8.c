// 函数: _Z11SliderClickR8UISliderifb
// 地址: 0x9c41e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float temp0 = vrndp_f32(arg3 * fconvert.s(8f))
float v1

if (temp0 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

uint32_t x22 = vcvts_s32_f32(temp0 + v1)

if ((arg4.d & 1) != 0)
    if (arg2 != 0 || x22 s< 1)
        goto label_9c4254
    
    x22 = 0
    *arg1 = 1
    *(arg1 + 4) = 1
else if (arg2 != 0 || *(arg1 + 4) != 1)
label_9c4254:
    x22 = arg2 + 1
    *(arg1 + 4) = 0
    *arg1 = 1

float* x0 = GetLocalSettings()
float v1_1 = x0[1]
float v2_1 = float.s(x22) * fconvert.s(0.125f)
float v0

v0 = arg1 == gOptionsDlg ? v1_1 : v2_1

x0[zx.q(arg1 != gOptionsDlg ? 1 : 0)] = v2_1

if (v0 != v1_1 || (arg4.d & 1) != 0)
    SoundPlay(*SOUND_SOUND_LOAD_ALWAYS_BTN_SLIDER)
    v0 = x0[1]

SoundSetGlobalVolume(v0, *x0)
return SaveLocalSettings() __tailcall
