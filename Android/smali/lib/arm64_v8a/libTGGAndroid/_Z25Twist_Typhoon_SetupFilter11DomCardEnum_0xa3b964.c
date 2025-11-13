// 函数: _Z25Twist_Typhoon_SetupFilter11DomCardEnum
// 地址: 0xa3b964
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
CampaignMissionSetup* x20 =
    *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0xc
int32_t x8_2 = *(DomDefGet(arg1, 0x17) + 0xc8)
int32_t x0_2

if ((x8_2 & 0x80000000) != 0)
    x0_2 = MissionHasLandscape(x20, 0x4000000000)

if ((x8_2 & 0x80000000) == 0 || (x0_2 & 1) != 0)
    uint32_t x8_3 = zx.d(*(DomDefGet(zx.q(x19), 0x17) + 0xcd))
    int32_t x0_6
    
    if ((x8_3 & 4) != 0)
        x0_6 = MissionHasLandscape(x20, 0x80000000000)
    
    if ((x8_3 & 4) == 0 || (x0_6 & 1) != 0)
        return zx.q(x19 != 0x707 ? 1 : 0)

return 0
