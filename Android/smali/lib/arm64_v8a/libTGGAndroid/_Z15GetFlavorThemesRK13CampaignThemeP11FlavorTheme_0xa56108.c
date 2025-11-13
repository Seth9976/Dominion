// 函数: _Z15GetFlavorThemesRK13CampaignThemeP11FlavorTheme
// 地址: 0xa56108
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*arg1)
int64_t x8_4

switch (result.d)
    case 0
        return result
    case 0x384
        int32_t i = *(arg1 + 4)
        int64_t* x9_2 = *(gCampaignData + 0x10)
            + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 0x18))) << 3)
        int32_t* x10_3
        
        do
            x10_3 = *x9_2
            x9_2 = &x10_3[4]
        while (*x10_3 != i)
        
        x8_4 = *(*(x10_3 + 8) + 0x10)
        goto label_a56210
    case 0x3e8, 0x5dc
        x8_4 = *(DomDefGet(zx.q(*(arg1 + 4)), 0x18) + 0x10)
    label_a56210:
        *arg2 = x8_4
        
        if (x8_4 u>> 0x20 != 0)
            return 2
        
        return 1
    case 0x834
        x8_4 = *(sx.q(*(arg1 + 4)) * 0xa8 + 0x1135104)
        goto label_a56210
    case 0x866, 0x898
        return GetBellsFlavorThemes(zx.q(*(arg1 + 4)), arg2) __tailcall
    case 0x8ca
        *arg2 = 7
        return 1
    case 0x8fc
        *arg2 = 0x11
        return 1
    case 0x92e
        *arg2 = 0x18
        return 1

pthread_kill(pthread_self(), 6)
RandomPCG* x0_8
CampaignSetup* x1_2
FlavorTheme* x2_1
x0_8, x1_2, x2_1 = XNoReturn()
return RollFlavorThemes(x0_8, x1_2, x2_1) __tailcall
