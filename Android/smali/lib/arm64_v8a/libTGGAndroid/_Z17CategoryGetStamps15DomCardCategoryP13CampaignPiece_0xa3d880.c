// 函数: _Z17CategoryGetStamps15DomCardCategoryP13CampaignPiece
// 地址: 0xa3d880
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 = *(gCampaignData + 0x10)
    + ((zx.q(*(gCampaignData + 0x18)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3)
int32_t* x9_2

do
    x9_2 = *x8_1
    x8_1 = &x9_2[4]
while (*x9_2 != arg1)

void* x8_3 = *(x9_2 + 8)
int32_t x9_3 = *(x8_3 + 0x1c)

if (x9_3 == 0)
    return 0

*arg2 = x9_3
int32_t x8_4 = *(x8_3 + 0x20)

if (x8_4 == 0)
    return 1

*(arg2 + 4) = x8_4
return 2
