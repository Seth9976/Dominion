// 函数: _Z20CardMod_CardSpecificv
// 地址: 0xa3ac3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CampaignPiece var_70
void var_48

if (CampaignKingdomCardmodSpecificPiles(&var_48, &var_70) s<= 0)
    return XTrace("No specific cardmods")

int64_t x8 = zx.q(RandomInt(gCampaignSetup, 1)) << 0x20 s>> 0x1e
int32_t x11 = *(&var_48 + x8)
int32_t i = *(&var_70 + x8)
uint64_t x12 = zx.q(*(gCampaignData + 8))
int64_t x10 = *gCampaignData
*(gCampaignSetup + 0x19b0) = *(gCampaignSetup + 0x19ac)
int64_t* x9_3 = x10 + ((x12 & (zx.q(i) | zx.q(i s>> 4))) << 3)
*(gCampaignSetup + 0x19ac) = x11
int32_t* x10_1

do
    x10_1 = *x9_3
    x9_3 = &x10_1[4]
while (*x10_1 != i)

void* x8_1 = *(x10_1 + 8)
int64_t x9_6

if (*(x8_1 + 0x18) == 1)
    x9_6 = 0
else if (*(x8_1 + 0x288) == 1)
    x9_6 = 1
else if (*(x8_1 + 0x4f8) != 1)
    if (*(x8_1 + 0x768) != 1)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return Surprise_CardMods() __tailcall
    
    x9_6 = 3
else
    x9_6 = 2

int64_t result = (*(x8_1 + x9_6 * 0x270 + 0x20))()
int32_t x8_4 = *(gCampaignSetup + 0x19b0)
*(gCampaignSetup + 0x19b0) = 0
*(gCampaignSetup + 0x19ac) = x8_4
return result
