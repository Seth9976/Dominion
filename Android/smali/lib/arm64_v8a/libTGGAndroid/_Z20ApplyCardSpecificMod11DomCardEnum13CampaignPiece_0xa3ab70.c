// 函数: _Z20ApplyCardSpecificMod11DomCardEnum13CampaignPiece
// 地址: 0xa3ab70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = *(gCampaignSetup + 0x19ac)
uint64_t x11 = zx.q(*(gCampaignData + 8))
int64_t x9 = *gCampaignData
*(gCampaignSetup + 0x19ac) = arg1
*(gCampaignSetup + 0x19b0) = x10
int64_t* x8_2 = x9 + ((x11 & (zx.q(arg2) | zx.q(arg2 s>> 4))) << 3)
int32_t* x9_1

do
    x9_1 = *x8_2
    x8_2 = &x9_1[4]
while (*x9_1 != arg2)

void* x8_4 = *(x9_1 + 8)
int64_t x9_3

if (*(x8_4 + 0x18) == 1)
    x9_3 = 0
else if (*(x8_4 + 0x288) == 1)
    x9_3 = 1
else if (*(x8_4 + 0x4f8) != 1)
    if (*(x8_4 + 0x768) != 1)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return CardMod_CardSpecific() __tailcall
    
    x9_3 = 3
else
    x9_3 = 2

int64_t result = (*(x8_4 + x9_3 * 0x270 + 0x20))()
int32_t x8_7 = *(gCampaignSetup + 0x19b0)
*(gCampaignSetup + 0x19b0) = 0
*(gCampaignSetup + 0x19ac) = x8_7
return result
