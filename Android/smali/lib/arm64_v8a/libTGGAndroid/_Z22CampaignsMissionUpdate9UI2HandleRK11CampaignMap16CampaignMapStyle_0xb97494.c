// 函数: _Z22CampaignsMissionUpdate9UI2HandleRK11CampaignMap16CampaignMapStyle
// 地址: 0xb97494
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
int64_t v9
int64_t var_70 = v9
int128_t entry_v8
int64_t var_68 = entry_v8.q
int32_t x21 = arg3
void* x0 = CampaignGetStatus()
char const* const x1

if (x21 == 1)
    x1 = "bg_image"
else
    x1 = "img_map"

UI2GetTransform(UI2GetHandle(zx.q(arg1), x1))
uint128_t v0
int128_t v1
float v2
float v3
uint128_t v5
int128_t v6
uint128_t v7
int128_t v16
v0, v1, v2, v3, v5, v6, v7, v16 = UI2Boundary(*UI2_TWITTER_CARD)
int32_t var_b0 = v0.d
int32_t var_a0
v0.d = var_a0
int32_t var_ac = v1.d
int64_t var_8c
v1.q = var_8c
int32_t fp

fp = x21 == 1 ? 0x2af9 : 0x32c9

float var_a8 = v2
v5.d = float.s(0x42ae0000)
float var_a4 = v3
v3 = v0.d f* 0f
v5.d = v0.d f* v5.d
uint128_t var_200
int32_t var_1f0
float var_84
float v17_1

if (x21 != 1)
    int64_t i = 0
    int128_t v2_3 = vdup_laneq_s32(v0, 0)
    int128_t v5_1 = vdup_laneq_s32(v5, 0)
    int32_t* x10_1 = &var_1f0
    
    do
        int32_t x14_1
        
        if (x21 == 1)
            x14_1 = 0x45800000
        else if (x21 != 2)
            x14_1 = 0x4511c000
        else
            x14_1 = 0x44bb0000
        
        v6.d = float.s(x14_1)
        v16.d = float.s(0x3a000000)
        v6.d = v6.d f* v16.d
        var_200 = *QI
        
        if (x21 - 1 u> 1)
            v7.q = *(arg2 + 0x5080 + i)
            v16.d = v3 f* v6.d
            v16.d = v16.d f+ var_84
            v16.d = v16.d f- v3
            double v7_6 = vmul_f32(v2_3, v7, 0)
            v6.d = v7_6.d f* v6.d
            v6:4.d = v7_6:4.d f* v6.d
            v6 = vsub_f32(vadd_f32(v1, v6), v5_1)
            v7 = v0
        else
            v16.q = *(arg2 + 0x5080 + i)
            v7.d = v0.d f* v6.d
            v17_1 = v3 f* v6.d
            v16 = vmul_f32(v2_3, v16, 0)
            v6.d = v16.d f* v6.d
            v6:4.d = v16:4.d f* v6.d
            v6 = vadd_f32(v1, v6)
            v16.d = v17_1 + var_84
        
        *x10_1 = v7.d
        v7 = var_200
        i += 8
        *(x10_1 + 0x14) = v6.q
        x10_1[7] = v16.d
        *(x10_1 + 4) = v7
        x10_1 = &x10_1[8]
    while (i != 0x50)
else
    v6.d = float.s(x21 - 1)
    v16.d = 2f
    uint128_t v6_1 = vcgt_u32(v16, v6)
    v16 = *QI
    int128_t v2_1 = vdup_laneq_s32(v5, 0)
    v5.d = v3 + v3
    v7.d = v0.d f+ v0.d
    var_200 = v16
    v17_1 = v5.d f+ var_84
    
    if (x21 - 1 u< 2)
        v5.d = v7.d
    else
        v5.d = v0.d
    
    v7.q = *(arg2 + 0x5080)
    int128_t v4_1 = vdup_laneq_s32(v6_1, 0)
    
    if (x21 - 1 u< 2)
        v3 = v17_1
    else
        v3 = v17_1 - v3
    
    v6_1.d = v7.d f* v0.d
    v6_1:4.d = v7:4.d f* v0.d
    int128_t v6_3 = vadd_f32(v1, vadd_f32(v6_1, v6_1))
    int128_t v6_4 = vbsl_s8(v4_1, v6_3, vsub_f32(v6_3, v2_1))
    var_1f0 = v5.d
    int128_t var_1ec_1 = v16
    float var_1d4_1 = v3
    int32_t var_1d0_1 = v5.d
    var_200 = v16
    int64_t var_1dc_1 = v6_4.q
    v6_4.q = *(arg2 + 0x5088)
    int128_t v7_1 = *QI
    int128_t var_1cc_1 = v16
    float var_1b4_1 = v3
    int32_t var_1b0_1 = v5.d
    v6_4.d = v6_4.d f* v0.d
    v6_4:4.d = v6_4:4.d f* v0.d
    int128_t v6_6 = vadd_f32(v1, vadd_f32(v6_4, v6_4))
    int128_t v6_7 = vbsl_s8(v4_1, v6_6, vsub_f32(v6_6, v2_1))
    var_200 = v7_1
    int64_t var_1bc_1 = v6_7.q
    v6_7.q = *(arg2 + 0x5090)
    int128_t v16_1 = *QI
    int128_t var_1ac_1 = v7_1
    float var_194_1 = v3
    int32_t var_190_1 = v5.d
    v6_7.d = v6_7.d f* v0.d
    v6_7:4.d = v6_7:4.d f* v0.d
    int128_t v6_9 = vadd_f32(v1, vadd_f32(v6_7, v6_7))
    int128_t v6_10 = vbsl_s8(v4_1, v6_9, vsub_f32(v6_9, v2_1))
    var_200 = v16_1
    int64_t var_19c_1 = v6_10.q
    v6_10.q = *(arg2 + 0x5098)
    int128_t v7_2 = *QI
    int128_t var_18c_1 = v16_1
    v6_10.d = v6_10.d f* v0.d
    v6_10:4.d = v6_10:4.d f* v0.d
    int128_t v6_12 = vadd_f32(v1, vadd_f32(v6_10, v6_10))
    int128_t v6_13 = vbsl_s8(v4_1, v6_12, vsub_f32(v6_12, v2_1))
    var_200 = v7_2
    int64_t var_17c_1 = v6_13.q
    float var_174_1 = v3
    int32_t var_170_1 = v5.d
    v6_13.q = *(arg2 + 0x50a0)
    int128_t v16_2 = *QI
    int128_t var_16c_1 = v7_2
    v6_13.d = v6_13.d f* v0.d
    v6_13:4.d = v6_13:4.d f* v0.d
    int128_t v6_15 = vadd_f32(v1, vadd_f32(v6_13, v6_13))
    int128_t v6_16 = vbsl_s8(v4_1, v6_15, vsub_f32(v6_15, v2_1))
    var_200 = v16_2
    int64_t var_15c_1 = v6_16.q
    float var_154_1 = v3
    int32_t var_150_1 = v5.d
    v6_16.q = *(arg2 + 0x50a8)
    int128_t v7_3 = *QI
    int128_t var_14c_1 = v16_2
    v6_16.d = v6_16.d f* v0.d
    v6_16:4.d = v6_16:4.d f* v0.d
    int128_t v6_18 = vadd_f32(v1, vadd_f32(v6_16, v6_16))
    int128_t v6_19 = vbsl_s8(v4_1, v6_18, vsub_f32(v6_18, v2_1))
    var_200 = v7_3
    int64_t var_13c_1 = v6_19.q
    float var_134_1 = v3
    int32_t var_130_1 = v5.d
    v6_19.q = *(arg2 + 0x50b0)
    int128_t v16_3 = *QI
    int128_t var_12c_1 = v7_3
    v6_19.d = v6_19.d f* v0.d
    v6_19:4.d = v6_19:4.d f* v0.d
    int128_t v6_21 = vadd_f32(v1, vadd_f32(v6_19, v6_19))
    int128_t v6_22 = vbsl_s8(v4_1, v6_21, vsub_f32(v6_21, v2_1))
    var_200 = v16_3
    int64_t var_11c_1 = v6_22.q
    float var_114_1 = v3
    int32_t var_110_1 = v5.d
    v6_22.q = *(arg2 + 0x50b8)
    int128_t v7_4 = *QI
    int128_t var_10c_1 = v16_3
    v6_22.d = v6_22.d f* v0.d
    v6_22:4.d = v6_22:4.d f* v0.d
    int128_t v6_24 = vadd_f32(v1, vadd_f32(v6_22, v6_22))
    int128_t v6_25 = vbsl_s8(v4_1, v6_24, vsub_f32(v6_24, v2_1))
    var_200 = v7_4
    int64_t var_fc_1 = v6_25.q
    float var_f4_1 = v3
    v6_25.q = *(arg2 + 0x50c0)
    int128_t v16_4 = *QI
    int32_t var_f0_1 = v5.d
    int128_t var_ec_1 = v7_4
    v6_25.d = v6_25.d f* v0.d
    v6_25:4.d = v6_25:4.d f* v0.d
    int128_t v6_27 = vadd_f32(v1, vadd_f32(v6_25, v6_25))
    uint64_t v6_28 = vbsl_s8(v4_1, v6_27, vsub_f32(v6_27, v2_1))
    var_200 = v16_4
    uint64_t var_dc_1 = v6_28
    float var_d4_1 = v3
    v6_28 = *(arg2 + 0x50c8)
    int32_t var_d0_1 = v5.d
    int128_t var_cc_1 = v16_4
    v0.d = v6_28.d f* v0.d
    v0:4.d = v6_28:4.d f* v0.d
    int128_t v0_2 = vadd_f32(v1, vadd_f32(v0, v0))
    uint64_t var_bc_1 = vbsl_s8(v4_1, v0_2, vsub_f32(v0_2, v2_1))
    float var_b4_1 = v3
int32_t x0_4
int128_t v0_4
uint128_t v1_2
x0_4, v0_4, v1_2 = HasActiveGame()

if ((x0_4 & 1) != 0)
    v0_4, v1_2 = IsCampaignMission(zx.q(*ActiveGame()), &var_200)

int64_t result

if (x21 != 1)
    void* x22_2 = x0 + 8
    int64_t i_3 = -0xa
    Transform* x23_1 = &var_1f0
    UI2Handle* x26_2 = gCampaignDlg + 0x5040
    int64_t i_1
    
    do
        UI2Begin("mission_btn", x26_2, *UI2_CAMPAIGN_MISSION_BUTTON, &var_b0, &var_b0, fp, 0, true)
        UI2SetHandler(zx.q(*x26_2), CampaignsDlgClick)
        UI2SetTransform(zx.q(*x26_2), x23_1)
        DeclareMission(zx.q(*x26_2), arg2, x22_2, i_3.d + 0xa, zx.q(x21))
        uint64_t x0_14 = zx.q(*x26_2)
        x26_2 += 4
        result = UI2UpdateRoot(x0_14, false, *gSecondsPerUpdate)
        i_1 = i_3
        i_3 += 1
        x23_1 += 0x20
        x22_2 += 0xc
    while (i_1 u< -1)
else
    int64_t i_2 = 0
    int32_t x21_1 = 0
    MissionStatus* x22_1 = x0 + 8
    entry_v8.q = 0
    v9.d = 0f
    v10.d = fconvert.s(0.5f)
    int64_t (* x25_1)() = gCampaignDlg + 0x5040
    
    do
        Transform* x26_1 = &var_1f0 + i_2
        v1_2.d = *x26_1
        v0_4.q = *(x26_1 + 0x14)
        v1_2.d = v1_2.d f* float.s(0x432e0000)
        v1_2.d = v1_2.d f* v10.d
        double v0_6 = vsub_f32(vadd_f32(v0_4, entry_v8), vdup_laneq_s32(v1_2, 0))
        int32_t v3_1 = *(x26_1 + 0x1c)
        *(x26_1 + 0x14) = v0_6
        XAsset* x2 = *UI2_CAMPAIGN_MISSION_BUTTON
        v0_6.d = v3_1 f+ v9.d
        *(x26_1 + 0x1c) = v0_6.d
        UI2Begin("mission_btn", x25_1, x2, &var_b0, &var_b0, fp, 0, true)
        UI2SetHandler(zx.q(*x25_1), CampaignsDlgClick)
        UI2SetTransform(zx.q(*x25_1), x26_1)
        DeclareMission(zx.q(*x25_1), arg2, x22_1, x21_1, 1)
        uint64_t x0_10 = zx.q(*x25_1)
        x25_1 += 4
        result, v0_4, v1_2 = UI2UpdateRoot(x0_10, false, *gSecondsPerUpdate)
        i_2 += 0x20
        x21_1 += 1
        x22_1 += 0xc
    while (i_2 != 0x140)

entry_v8.q = var_68
return result
