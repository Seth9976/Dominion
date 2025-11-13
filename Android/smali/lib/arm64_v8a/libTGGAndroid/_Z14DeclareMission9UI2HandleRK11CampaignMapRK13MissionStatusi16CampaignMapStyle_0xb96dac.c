// 函数: _Z14DeclareMission9UI2HandleRK11CampaignMapRK13MissionStatusi16CampaignMapStyle
// 地址: 0xb96dac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *(arg2 + (sx.q(arg4) << 2) + 0x50d0)
int32_t x19 = arg1

if (x8_1 != 0)
    XAsset* var_38
    XAsset* var_28
    DoodadGetGfx(zx.q(x8_1), &var_28, &var_38)
    UI2SetImage(zx.q(x19), &data_18323d0, var_28, 0xffffffff)

int64_t* x21_1

if (arg5 != 1)
    if (((*(CampaignGetStatus() + 0x78) & 0xfffffffe) != 4 || zx.d(*(gCampaignDlg + 4)) != 0)
            && *gCampaignDlg == arg4 && *(gCampaignDlg + 0x506c) != 1)
        UI2SetState(zx.q(x19), &data_1832358, 0xffffffff, 0)
    
    if (*arg3 != 0 && *(gCampaignDlg + 0x506c) != 1 && (*(arg3 + 4) & 0xfffffffe) == 2)
        UI2SetState(zx.q(x19), &data_1832238, 0xffffffff, 0)
    
    uint64_t x8_11 = zx.q(*(arg3 + 4))
    
    if (x8_11.d u> 5)
    label_b96ff8:
        pthread_kill(pthread_self(), 6)
        Vec2* x0_11
        int32_t x1_2
        int32_t x2_2
        XAsset* x3
        int64_t x4
        float v0
        float v1
        x0_11, x1_2, x2_2, x3, x4, v0, v1 = XNoReturn()
        return DrawPath(x0_11, x1_2, x2_2, x3, v0, x4, v1) __tailcall
    
    x21_1 = &data_1832220
    bool cond:0_1
    
    switch (x8_11)
        case 0, 1
            cond:0_1 = zx.d(*(gCampaignDlg + 4)) == 0
        label_b96f20:
            
            x21_1 = cond:0_1 ? &data_1832208 : &data_1832220
        case 2
            cond:0_1 = *(gCampaignDlg + 0x506c) == 1
            goto label_b96f20
        case 4
            goto label_b96f78
        case 5
            UI2SetState(zx.q(x19), &data_1832250, 0xffffffff, 0)
        label_b96f78:
            int64_t result = UI2SetState(zx.q(x19), &data_1832268, 0xffffffff, 0)
            
            if (zx.d(*(gCampaignDlg + 4)) == 0)
                result = UI2SetState(zx.q(x19), &data_1832280, 0xffffffff, 0)
            
            uint64_t x8_16 = zx.q(*(arg3 + 8) + 1)
            
            if (x8_16.d u> 4)
                goto label_b96ff8
            
            x21_1 = &data_1832298
            
            switch (x8_16)
                case 0
                    return result
                case 1
                    x21_1 = &data_18322b0
                case 2
                    x21_1 = &data_18322c8
                case 3
                    x21_1 = &data_18322e0
else
    x21_1 = &data_18321f0
    UI2SetState(zx.q(x19), &data_1832208, 0xffffffff, 0)

return UI2SetState(zx.q(x19), x21_1, 0xffffffff, 0)
