// 函数: _Z29Bell_ImbalancedStart_Cost3vs3v
// 地址: 0xa359b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_18

if ((KingdomSelectImbalancedTwoSameCost(&var_18) & 1) == 0)
    return XTrace("Bell_ImbalancedStart_Cost3vs3 failed w/ no 5cost")

int32_t x19 = var_18
CampaignAddExtra(0xdb1, zx.q(x19), 0, 0, 0)
int32_t var_14
CampaignAddExtra(0xdb1, zx.q(var_14), 1, 0, 0)
CampaignAddExtra(0xdb1, zx.q(x19), 0, 0, 0)
CampaignAddExtra(0xdb1, zx.q(var_14), 1, 0, 0)
CampaignAddExtra(0xdb1, zx.q(x19), 0, 0, 0)
return CampaignAddExtra(0xdb1, zx.q(var_14), 1, 0, 0)
