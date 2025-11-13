// 函数: _Z24ThemePiece_CategoryTwistv
// 地址: 0xa40274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(gCampaignSetup + 0x19a0)
uint64_t x8 = zx.q(*(gCampaignSetup + 0x19b4))
void* x8_2

if (x8.d == 2)
    x8_2 = x9 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x8_2 = x9 + (x8 << 3) + 0x5010

int32_t i = *(x8_2 + 4)
int64_t* x10_4 =
    *(gCampaignData + 0x10) + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 0x18))) << 3)
int32_t* x11_1

do
    x11_1 = *x10_4
    x10_4 = &x11_1[4]
while (*x11_1 != i)

int32_t i_1 = *(*(x11_1 + 8) + 0x18)
int64_t* x8_4 = *gCampaignData + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
int32_t* x9_6

do
    x9_6 = *x8_4
    x8_4 = &x9_6[4]
while (*x9_6 != i_1)

void* x8_6 = *(x9_6 + 8)
int64_t x9_8

if (*(x8_6 + 0x18) == 2)
    x9_8 = 0
    
    if (i_1 != 0)
    label_a40374:
        int64_t x8_8 = *(x8_6 + x9_8 * 0x270 + 0x20)
        
        if (x8_8 != 0 && (x8_8() & 1) == 0)
            i_1 = RollTwist()
    else
        i_1 = RollTwist()
else if (*(x8_6 + 0x288) == 2)
    x9_8 = 1
    
    if (i_1 != 0)
        goto label_a40374
    
    i_1 = RollTwist()
else if (*(x8_6 + 0x4f8) == 2)
    x9_8 = 2
    
    if (i_1 != 0)
        goto label_a40374
    
    i_1 = RollTwist()
else if (*(x8_6 + 0x768) == 2)
    x9_8 = 3
    
    if (i_1 != 0)
        goto label_a40374
    
    i_1 = RollTwist()
else if (i_1 == 0)
    i_1 = RollTwist()
return CampaignAddTwist(zx.q(i_1)) __tailcall
