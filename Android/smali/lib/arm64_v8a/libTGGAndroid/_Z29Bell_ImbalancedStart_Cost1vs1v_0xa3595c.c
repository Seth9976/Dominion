// 函数: _Z29Bell_ImbalancedStart_Cost1vs1v
// 地址: 0xa3595c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_8

if ((KingdomSelectImbalancedTwoSameCost(&var_8) & 1) == 0)
    return XTrace("Bell_ImbalancedStart_Cost1vs1 failed w/ no 5cost")

CampaignAddExtra(0xdb1, zx.q(var_8), 0, 0, 0)
int32_t var_4
return CampaignAddExtra(0xdb1, zx.q(var_4), 1, 0, 0)
