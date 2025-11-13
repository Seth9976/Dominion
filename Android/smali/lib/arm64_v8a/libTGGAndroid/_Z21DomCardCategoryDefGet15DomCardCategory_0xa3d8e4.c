// 函数: _Z21DomCardCategoryDefGet15DomCardCategory
// 地址: 0xa3d8e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 = *(gCampaignData + 0x10)
    + ((zx.q(*(gCampaignData + 0x18)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3)
int32_t* x9_2

do
    x9_2 = *x8_1
    x8_1 = &x9_2[4]
while (*x9_2 != arg1)

return *(x9_2 + 8)
