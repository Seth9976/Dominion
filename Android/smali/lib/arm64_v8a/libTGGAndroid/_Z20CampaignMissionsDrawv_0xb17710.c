// 函数: _Z20CampaignMissionsDrawv
// 地址: 0xb17710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_40 = v9
int128_t entry_v8
int64_t var_38 = entry_v8.q
int32_t x0 = GameDlgMangerGetUI(2, 0, true)
void* result
int32_t var_c0
int64_t var_ac
double var_a0

if ((HasActiveGame() & 1) == 0 || x0 == 0)
    result = GameDlgMangerGetUI(0x7e3, 5, true)
    
    if (result.d != 0)
        int32_t x20_3 = result.d
        result = DomMapTryGet(zx.q(*(gCampaignDlg + 8)))
        
        if (result != 0)
            uint128_t v0_31
            int128_t v1_13
            int128_t v2_13
            v0_31, v1_13, v2_13 = UI2GetTransform(UI2GetHandle(zx.q(x20_3), "img_map"))
            v0_31.d = var_c0
            v1_13.q = *(result + 0x5080)
            v2_13.q = var_ac
            entry_v8.d = 0x3f91c000
            entry_v8:4.d = 0x3f91c000
            v1_13.d = v1_13.d f* v0_31.d
            v1_13:4.d = v1_13:4.d f* v0_31.d
            v9.d = fconvert.s(8f)
            uint64_t x0_32 = zx.q(*(gCampaignDlg + 0x5040))
            v0_31.d = v0_31.d f* v9.d
            var_a0 =
                vsub_f32(vadd_f32(v2_13, vmul_f32(v1_13, entry_v8, 0)), vdup_laneq_s32(v0_31, 0))
            UI2Draw(x0_32)
            uint128_t v0_34
            int128_t v1_16
            int128_t v2_14
            v0_34, v1_16, v2_14 = UI2GetTransform(UI2GetHandle(zx.q(x20_3), "img_map"))
            v0_34.d = var_c0
            v1_16.q = *(result + 0x5088)
            v2_14.q = var_ac
            uint64_t x0_35 = zx.q(*(gCampaignDlg + 0x5044))
            v1_16.d = v1_16.d f* v0_34.d
            v1_16:4.d = v1_16:4.d f* v0_34.d
            v0_34.d = v0_34.d f* v9.d
            double var_98_2 =
                vsub_f32(vadd_f32(v2_14, vmul_f32(v1_16, entry_v8, 0)), vdup_laneq_s32(v0_34, 0))
            UI2Draw(x0_35)
            uint128_t v0_37
            int128_t v1_19
            int128_t v2_15
            v0_37, v1_19, v2_15 = UI2GetTransform(UI2GetHandle(zx.q(x20_3), "img_map"))
            v0_37.d = var_c0
            v1_19.q = *(result + 0x5090)
            v2_15.q = var_ac
            uint64_t x0_38 = zx.q(*(gCampaignDlg + 0x5048))
            v1_19.d = v1_19.d f* v0_37.d
            v1_19:4.d = v1_19:4.d f* v0_37.d
            v0_37.d = v0_37.d f* v9.d
            double var_90_2 =
                vsub_f32(vadd_f32(v2_15, vmul_f32(v1_19, entry_v8, 0)), vdup_laneq_s32(v0_37, 0))
            UI2Draw(x0_38)
            uint128_t v0_40
            int128_t v1_22
            int128_t v2_16
            v0_40, v1_22, v2_16 = UI2GetTransform(UI2GetHandle(zx.q(x20_3), "img_map"))
            v0_40.d = var_c0
            v1_22.q = *(result + 0x5098)
            v2_16.q = var_ac
            uint64_t x0_41 = zx.q(*(gCampaignDlg + 0x504c))
            v1_22.d = v1_22.d f* v0_40.d
            v1_22:4.d = v1_22:4.d f* v0_40.d
            v0_40.d = v0_40.d f* v9.d
            double var_88_2 =
                vsub_f32(vadd_f32(v2_16, vmul_f32(v1_22, entry_v8, 0)), vdup_laneq_s32(v0_40, 0))
            UI2Draw(x0_41)
            uint128_t v0_43
            int128_t v1_25
            int128_t v2_17
            v0_43, v1_25, v2_17 = UI2GetTransform(UI2GetHandle(zx.q(x20_3), "img_map"))
            v0_43.d = var_c0
            v1_25.q = *(result + 0x50a0)
            v2_17.q = var_ac
            uint64_t x0_44 = zx.q(*(gCampaignDlg + 0x5050))
            v1_25.d = v1_25.d f* v0_43.d
            v1_25:4.d = v1_25:4.d f* v0_43.d
            v0_43.d = v0_43.d f* v9.d
            double var_80_2 =
                vsub_f32(vadd_f32(v2_17, vmul_f32(v1_25, entry_v8, 0)), vdup_laneq_s32(v0_43, 0))
            UI2Draw(x0_44)
            uint128_t v0_46
            int128_t v1_28
            int128_t v2_18
            v0_46, v1_28, v2_18 = UI2GetTransform(UI2GetHandle(zx.q(x20_3), "img_map"))
            v0_46.d = var_c0
            v1_28.q = *(result + 0x50a8)
            v2_18.q = var_ac
            uint64_t x0_47 = zx.q(*(gCampaignDlg + 0x5054))
            v1_28.d = v1_28.d f* v0_46.d
            v1_28:4.d = v1_28:4.d f* v0_46.d
            v0_46.d = v0_46.d f* v9.d
            double var_78_2 =
                vsub_f32(vadd_f32(v2_18, vmul_f32(v1_28, entry_v8, 0)), vdup_laneq_s32(v0_46, 0))
            UI2Draw(x0_47)
            uint128_t v0_49
            int128_t v1_31
            int128_t v2_19
            v0_49, v1_31, v2_19 = UI2GetTransform(UI2GetHandle(zx.q(x20_3), "img_map"))
            v0_49.d = var_c0
            v1_31.q = *(result + 0x50b0)
            v2_19.q = var_ac
            uint64_t x0_50 = zx.q(*(gCampaignDlg + 0x5058))
            v1_31.d = v1_31.d f* v0_49.d
            v1_31:4.d = v1_31:4.d f* v0_49.d
            v0_49.d = v0_49.d f* v9.d
            double var_70_2 =
                vsub_f32(vadd_f32(v2_19, vmul_f32(v1_31, entry_v8, 0)), vdup_laneq_s32(v0_49, 0))
            UI2Draw(x0_50)
            uint128_t v0_52
            int128_t v1_34
            int128_t v2_20
            v0_52, v1_34, v2_20 = UI2GetTransform(UI2GetHandle(zx.q(x20_3), "img_map"))
            v0_52.d = var_c0
            v1_34.q = *(result + 0x50b8)
            v2_20.q = var_ac
            uint64_t x0_53 = zx.q(*(gCampaignDlg + 0x505c))
            v1_34.d = v1_34.d f* v0_52.d
            v1_34:4.d = v1_34:4.d f* v0_52.d
            v0_52.d = v0_52.d f* v9.d
            double var_68_2 =
                vsub_f32(vadd_f32(v2_20, vmul_f32(v1_34, entry_v8, 0)), vdup_laneq_s32(v0_52, 0))
            UI2Draw(x0_53)
            uint128_t v0_55
            int128_t v1_37
            int128_t v2_21
            v0_55, v1_37, v2_21 = UI2GetTransform(UI2GetHandle(zx.q(x20_3), "img_map"))
            v0_55.d = var_c0
            v1_37.q = *(result + 0x50c0)
            v2_21.q = var_ac
            uint64_t x0_56 = zx.q(*(gCampaignDlg + 0x5060))
            v1_37.d = v1_37.d f* v0_55.d
            v1_37:4.d = v1_37:4.d f* v0_55.d
            v0_55.d = v0_55.d f* v9.d
            double var_60_3 =
                vsub_f32(vadd_f32(v2_21, vmul_f32(v1_37, entry_v8, 0)), vdup_laneq_s32(v0_55, 0))
            UI2Draw(x0_56)
            int128_t v0_58
            int128_t v1_40
            uint128_t v2_22
            v0_58, v1_40, v2_22 = UI2GetTransform(UI2GetHandle(zx.q(x20_3), "img_map"))
            v2_22.d = var_c0
            v0_58.q = *(result + 0x50c8)
            v1_40.q = var_ac
            uint64_t x0_59 = zx.q(*(gCampaignDlg + 0x5064))
            float var_d0_1 = v2_22.d
            v0_58.d = v0_58.d f* v2_22.d
            v0_58:4.d = v0_58:4.d f* v2_22.d
            v2_22.d = v2_22.d f* v9.d
            double var_58_2 =
                vsub_f32(vadd_f32(v1_40, vmul_f32(v0_58, entry_v8, 0)), vdup_laneq_s32(v2_22, 0))
            UI2Draw(x0_59)
            uint64_t x19_3 = zx.q(*COLOR_COAST)
            int32_t x20_4
            
            if (zx.d(*(gCampaignDlg + 4)) != 0)
                x20_4 = 0xa
            else
                x20_4 = *gCampaignDlg + 1
            
            int32_t x0_60 = Draw3DLayer(0x32c90000)
            float v1_42
            
            if (*(gCampaignDlg + 0x506c) == 1)
                v1_42 = *(gCampaignDlg + 0x5070)
            else
                v1_42 = fconvert.s(1f)
            
            DrawPath(&var_a0, x20_4, 0xa, *TEXTURE_UI_ART_CAMPAIGN_MAP_DOT, x19_3, var_d0_1, v1_42)
            result = Draw3DLayer(zx.q(x0_60))
else
    int32_t var_44
    result = IsCampaignMission(zx.q(*ActiveGame()), &var_44)
    
    if ((result.d & 1) != 0)
        void* x0_5 = DomMapGet(zx.q(*(gCampaignDlg + 8)))
        int128_t v0_1
        int128_t v2_1
        v0_1, v2_1 = UI2GetTransform(UI2GetHandle(zx.q(x0), "bg_image"))
        v0_1.d = var_c0
        int64_t v1_1 = *(x0_5 + 0x5080)
        v2_1.q = var_ac
        v0_1.d = v1_1.d f* v0_1.d
        v0_1:4.d = v1_1:4.d f* v0_1.d
        var_a0 = vadd_f32(v2_1, vadd_f32(v0_1, v0_1))
        int128_t v0_4
        int128_t v2_2
        v0_4, v2_2 = UI2GetTransform(UI2GetHandle(zx.q(x0), "bg_image"))
        v0_4.d = var_c0
        int64_t v1_2 = *(x0_5 + 0x5088)
        v2_2.q = var_ac
        v0_4.d = v1_2.d f* v0_4.d
        v0_4:4.d = v1_2:4.d f* v0_4.d
        double var_98_1 = vadd_f32(v2_2, vadd_f32(v0_4, v0_4))
        int128_t v0_7
        int128_t v2_3
        v0_7, v2_3 = UI2GetTransform(UI2GetHandle(zx.q(x0), "bg_image"))
        v0_7.d = var_c0
        int64_t v1_3 = *(x0_5 + 0x5090)
        v2_3.q = var_ac
        v0_7.d = v1_3.d f* v0_7.d
        v0_7:4.d = v1_3:4.d f* v0_7.d
        double v0_9 = vadd_f32(v2_3, vadd_f32(v0_7, v0_7))
        int128_t v0_10
        int128_t v2_4
        v0_10, v2_4 = UI2GetTransform(UI2GetHandle(zx.q(x0), "bg_image"))
        v0_10.d = var_c0
        int64_t v1_4 = *(x0_5 + 0x5098)
        v2_4.q = var_ac
        v0_10.d = v1_4.d f* v0_10.d
        v0_10:4.d = v1_4:4.d f* v0_10.d
        double var_88_1 = vadd_f32(v2_4, vadd_f32(v0_10, v0_10))
        int128_t v0_13
        int128_t v2_5
        v0_13, v2_5 = UI2GetTransform(UI2GetHandle(zx.q(x0), "bg_image"))
        v0_13.d = var_c0
        int64_t v1_5 = *(x0_5 + 0x50a0)
        v2_5.q = var_ac
        v0_13.d = v1_5.d f* v0_13.d
        v0_13:4.d = v1_5:4.d f* v0_13.d
        double v0_15 = vadd_f32(v2_5, vadd_f32(v0_13, v0_13))
        int128_t v0_16
        int128_t v2_6
        v0_16, v2_6 = UI2GetTransform(UI2GetHandle(zx.q(x0), "bg_image"))
        v0_16.d = var_c0
        int64_t v1_6 = *(x0_5 + 0x50a8)
        v2_6.q = var_ac
        v0_16.d = v1_6.d f* v0_16.d
        v0_16:4.d = v1_6:4.d f* v0_16.d
        double var_78_1 = vadd_f32(v2_6, vadd_f32(v0_16, v0_16))
        int128_t v0_19
        int128_t v2_7
        v0_19, v2_7 = UI2GetTransform(UI2GetHandle(zx.q(x0), "bg_image"))
        v0_19.d = var_c0
        int64_t v1_7 = *(x0_5 + 0x50b0)
        v2_7.q = var_ac
        v0_19.d = v1_7.d f* v0_19.d
        v0_19:4.d = v1_7:4.d f* v0_19.d
        double v0_21 = vadd_f32(v2_7, vadd_f32(v0_19, v0_19))
        int128_t v0_22
        int128_t v2_8
        v0_22, v2_8 = UI2GetTransform(UI2GetHandle(zx.q(x0), "bg_image"))
        v0_22.d = var_c0
        int64_t v1_8 = *(x0_5 + 0x50b8)
        v2_8.q = var_ac
        v0_22.d = v1_8.d f* v0_22.d
        v0_22:4.d = v1_8:4.d f* v0_22.d
        double var_68_1 = vadd_f32(v2_8, vadd_f32(v0_22, v0_22))
        int128_t v0_25
        int128_t v2_9
        v0_25, v2_9 = UI2GetTransform(UI2GetHandle(zx.q(x0), "bg_image"))
        v0_25.d = var_c0
        int64_t v1_9 = *(x0_5 + 0x50c0)
        v2_9.q = var_ac
        v0_25.d = v1_9.d f* v0_25.d
        v0_25:4.d = v1_9:4.d f* v0_25.d
        double v0_27 = vadd_f32(v2_9, vadd_f32(v0_25, v0_25))
        float128 v2_10
        float128 v3_1
        float128 v4_1
        float128 v5_1
        v2_10, v3_1, v4_1, v5_1 = UI2GetTransform(UI2GetHandle(zx.q(x0), "bg_image"))
        float128 v2_11 = vaddq_f32(var_a0.o, zx.o(0))
        float128 v3_2 = vaddq_f32(v0_9.o, zx.o(0))
        float128 v4_2 = vaddq_f32(v0_15.o, zx.o(0))
        float128 v1_10 = vaddq_f32(v0_21.o, zx.o(0))
        v5_1.q = *(x0_5 + 0x50c8)
        var_a0.o = v2_11
        double var_90_1
        var_90_1.o = v3_2
        v2_11.q = var_ac
        double var_80_1
        var_80_1.o = v4_2
        double var_70_1
        var_70_1.o = v1_10
        v1_10.q = v0_27
        uint32_t x8_1 = zx.d(*(gCampaignDlg + 4))
        v3_2.d = v5_1.d f* var_c0
        v3_2:4.d = v5_1:4.d f* var_c0
        int32_t x9_1 = *gCampaignDlg
        int128_t v2_12 = vadd_f32(v2_11, vadd_f32(v3_2, v3_2))
        int128_t v3_3
        v3_3.q = 0
        entry_v8.d = var_c0 f+ var_c0
        double var_60_2 = vadd_f32(v1_10, v3_3)
        double var_58_1 = vadd_f32(v2_12, v3_3)
        int32_t x19_1
        
        if (x8_1 != 0)
            x19_1 = 0xa
        else
            x19_1 = x9_1 + 1
        
        int32_t x0_26 = Draw3DLayer(0x2af90000)
        DrawPath(&var_a0, x19_1, 0xa, *TEXTURE_UI_ART_CAMPAIGN_MAP_DOT, 0xff041323, entry_v8.d, 
            fconvert.s(1f))
        result = Draw3DLayer(zx.q(x0_26))
entry_v8.q = var_38
return result
