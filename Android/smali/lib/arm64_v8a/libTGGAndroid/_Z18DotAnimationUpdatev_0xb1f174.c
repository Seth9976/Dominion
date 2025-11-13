// 函数: _Z18DotAnimationUpdatev
// 地址: 0xb1f174
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_20 = v9
int64_t v8
int64_t var_18 = v8

if (*(gCampaignDlg + 0x506c) == 0)
    return 

v8.d = *(gCampaignDlg + 0x5070)
v9.d = v8.d f+ *gSecondsPerUpdate * fconvert.s(0.25f)
*(gCampaignDlg + 0x5070) = v9.d
int64_t x0
int128_t v0_1
int128_t v1_1
x0, v0_1, v1_1 = DomMapTryGet(zx.q(*(gCampaignDlg + 8)))

if (x0 != 0)
    float v3_1 = fconvert.s(0.5f)
    void* x8_2 = x0 + (sx.q(*gCampaignDlg) << 3)
    v0_1.q = *(x8_2 + 0x5078)
    v1_1.q = *(x8_2 + 0x5080)
    int128_t v0_2 = vsub_f32(v0_1, v1_1)
    v0_1 = vmul_f32(v0_2, v0_2, 0)
    v0_1.d = v0_1.d f+ v0_1:4.d
    v0_1.d = sqrt(v0_1.d)
    v0_1.d = v0_1.d f/ fconvert.s(26f)
    v0_1.d = v0_1.d f+ v3_1
    uint32_t temp0_1 = vcvts_s32_f32(v0_1.d)
    v0_1.d = float.s(temp0_1)
    float v2_1 = v8.d f* v0_1.d
    v0_1.d = v9.d f* v0_1.d
    float temp0_2 = vrndm_f32(v2_1)
    v1_1.d = fconvert.s(-0.5f)
    v0_1.d = vrndm_f32(v0_1.d)
    float v4_1
    
    v4_1 = temp0_2 < 0f ? v1_1.d : v3_1
    
    if (v0_1.d f< 0f)
        v1_1.d = v1_1.d
    else
        v1_1.d = v3_1
    
    v0_1.d = v0_1.d f+ v1_1.d
    uint32_t temp0_4 = vcvts_s32_f32(temp0_2 + v4_1)
    
    if (temp0_4 != vcvts_s32_f32(v0_1.d) && temp0_4 s>= 3 && temp0_1 - 5 s>= temp0_4)
        x0, v0_1, v1_1 = SoundPlay(*SOUND_SOUND_LOAD_ALWAYS_FX_CAMPAIGN_DOT_APPEAR)

v0_1.d = *(gCampaignDlg + 0x5070)
v1_1.d = fconvert.s(1f)

if (not(v0_1.d f<= v1_1.d))
    SoundPlay(*SOUND_SOUND_LOAD_ALWAYS_FX_CAMPAIGN_MISSION_APPEAR)
    *(gCampaignDlg + 0x506c) = 0
