// 函数: _Z19SortCampaignResultsRK10MedalLevelS1_
// 地址: 0xb40bf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *arg1
int32_t x11 = *arg2

if (x10 == x11)
    return zx.q(*(arg1 + 4) s< *(arg2 + 4) ? 1 : 0)

return zx.q(x10 s< x11 ? 1 : 0)
