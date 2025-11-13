// 函数: _Z20CampaignExtraAppliesRK20CampaignMissionExtra18CampaignSetupFlags
// 地址: 0xa539d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *arg1
int64_t* x9_1 = *gCampaignData + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
int32_t* x10_2

do
    x10_2 = *x9_1
    x9_1 = &x10_2[4]
while (*x10_2 != i)

int32_t x8_1 = *(*(x10_2 + 8) + 0x10)
uint64_t x9_3 = zx.q(x8_1 - 0xdad)

if (x9_3.d u> 3)
    if (x8_1 == 0x1770)
        return zx.q((0x10 & arg2) != 0 ? 1 : 0)
    
    if (x8_1 == 0x1b58)
        return zx.q((8 & arg2) != 0 ? 1 : 0)
    
    pthread_kill(pthread_self(), 6)
    DomGame* x0_7
    CampaignMissionExtra* x1
    int64_t x2
    x0_7, x1, x2 = XNoReturn()
    return CampaingApplyExtra(x0_7, x1, x2) __tailcall

switch (x9_3)
    case 0
        return zx.q((2 & arg2) != 0 ? 1 : 0)
    case 1
        return zx.q((1 & arg2) != 0 ? 1 : 0)
    case 2
        return zx.q((0x20 & arg2) != 0 ? 1 : 0)
    case 3
        return zx.q((4 & arg2) != 0 ? 1 : 0)
