// 函数: _Z8RollList13CampaignPiece
// 地址: 0xa2fb04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x19
void* var_8 = entry_x19
int64_t* x8_1 =
    *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3)
int32_t* x9_2

do
    x9_2 = *x8_1
    x8_1 = &x9_2[4]
while (*x9_2 != arg1)

void* x8_3 = *(x9_2 + 8)
int32_t x1
int64_t x9_4

if (*(x8_3 + 0x18) != 3)
    if (*(x8_3 + 0x288) == 3)
        x9_4 = 1
        goto label_a2fb8c
    
    if (*(x8_3 + 0x4f8) == 3)
        x9_4 = 2
        goto label_a2fb8c
    
    if (*(x8_3 + 0x768) == 3)
        x9_4 = 3
        goto label_a2fb8c
    
    x1 = 0
else
    x9_4 = 0
label_a2fb8c:
    void* x8_4 = x8_3 + x9_4 * 0x270
    x1 = *(x8_4 + 0x280)
    entry_x19 = x8_4 + 0x20
return zx.q(*(entry_x19 + (sx.q(RandomInt(gCampaignSetup, x1)) << 2)))
