// 函数: sub_a5a074
// 地址: 0xa5a074
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2
CampaignMissionSetup* x20 =
    *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0xc
int32_t x8_2 = *(DomDefGet(zx.q(x19), 0x17) + 0xc8)
int32_t x0_3

if ((x8_2 & 0x80000000) != 0)
    x0_3 = MissionHasLandscape(x20, 0x4000000000)

if ((x8_2 & 0x80000000) == 0 || (x0_3 & 1) != 0)
    if ((zx.d(*(DomDefGet(zx.q(x19), 0x17) + 0xcd)) & 4) != 0)
        if (x19 != 0x707 && (MissionHasLandscape(x20, 0x80000000000) & 1) != 0)
            return (zx.q(IsLandscape(zx.q(x19))) ^ 1) & 1
    else if (x19 != 0x707)
        return (zx.q(IsLandscape(zx.q(x19))) ^ 1) & 1

return 0
