// 函数: _Z22Bell_LandscapeMod_Testv
// 地址: 0xa33714
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*(gCampaignSetup + 0x19ac))

if (x0.d == 0)
    int32_t* x19_2 = *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x34
    uint64_t result = zx.q(*x19_2)
    
    if (result.d == 0)
        return result
    
    if ((CanAddLandscapeMod(result) & 1) == 0 && (CanAddLandscapeMod(zx.q(*x19_2)) & 1) == 0
            && (CanAddLandscapeMod(zx.q(*x19_2)) & 1) == 0
            && (CanAddLandscapeMod(zx.q(*x19_2)) & 1) == 0)
        return 0
else if ((CanAddLandscapeMod(x0) & 1) == 0)
    return 0

if ((CampaignHasExpansion(0xb) & 1) == 0 && (CampaignHasExpansion(0xc) & 1) == 0
        && (CampaignHasExpansion(0xe) & 1) == 0 && (CampaignHasExpansion(0xf) & 1) == 0
        && (CampaignHasExpansion(0x11) & 1) == 0)
    return CampaignHasExpansion(0x12) __tailcall

return 1
