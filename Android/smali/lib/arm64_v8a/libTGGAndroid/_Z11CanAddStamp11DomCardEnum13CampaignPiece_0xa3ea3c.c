// 函数: _Z11CanAddStamp11DomCardEnum13CampaignPiece
// 地址: 0xa3ea3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg2
int32_t x20 = arg1

if (arg1 != 0 && (IsLandscape(zx.q(x20)) & 1) != 0)
    return 0

int32_t x8 = *(gCampaignSetup + 0x19ac)
uint64_t x11 = zx.q(*(gCampaignData + 8))
int64_t x10 = *gCampaignData
*(gCampaignSetup + 0x19ac) = x20
*(gCampaignSetup + 0x19b0) = x8
int64_t* x9_2 = x10 + ((x11 & (zx.q(i) | zx.q(i s>> 4))) << 3)
int32_t* x10_1

do
    x10_1 = *x9_2
    x9_2 = &x10_1[4]
while (*x10_1 != i)

void* x9_4 = *(x10_1 + 8)
int32_t x0_3
int64_t x9_6

if (*(x9_4 + 0x18) == 2)
    x9_6 = *(x9_4 + 0x20)
    
    if (x9_6 != 0)
        x0_3 = x9_6()
        x8 = *(gCampaignSetup + 0x19b0)
    else
        x0_3 = 1
else if (*(x9_4 + 0x288) == 2)
    x9_6 = *(x9_4 + 0x290)
    
    if (x9_6 != 0)
        x0_3 = x9_6()
        x8 = *(gCampaignSetup + 0x19b0)
    else
        x0_3 = 1
else if (*(x9_4 + 0x4f8) == 2)
    x9_6 = *(x9_4 + 0x500)
    
    if (x9_6 != 0)
        x0_3 = x9_6()
        x8 = *(gCampaignSetup + 0x19b0)
    else
        x0_3 = 1
else if (*(x9_4 + 0x768) != 2)
    x0_3 = 1
else
    x9_6 = *(x9_4 + 0x770)
    
    if (x9_6 == 0)
        x0_3 = 1
    else
        x0_3 = x9_6()
        x8 = *(gCampaignSetup + 0x19b0)
*(gCampaignSetup + 0x19ac) = x8
*(gCampaignSetup + 0x19b0) = 0
return zx.q(x0_3) & 1
