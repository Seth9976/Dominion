// 函数: _Z20CampaignHasCardThemeR12DomExpansion
// 地址: 0xa3888c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(gCampaignSetup + 0x19a0)
int64_t x9_1

if (*(x8 + 0x5010) != 0x3e8)
    if (*(x8 + 0x5018) != 0x3e8)
        return 0
    
    x9_1 = 1
else
    x9_1 = 0

int32_t var_14
int32_t x0_1 = DomCardExp(zx.q(*(x8 + (x9_1 << 3) + 0x5014)), &var_14)
*arg1 = x0_1
return 1 & zx.q(x0_1 != 2 ? 1 : 0)
