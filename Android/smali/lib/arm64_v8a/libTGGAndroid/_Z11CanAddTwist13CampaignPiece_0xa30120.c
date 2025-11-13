// 函数: _Z11CanAddTwist13CampaignPiece
// 地址: 0xa30120
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 =
    *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3)
int32_t* x9_2

do
    x9_2 = *x8_1
    x8_1 = &x9_2[4]
while (*x9_2 != arg1)

void* x8_3 = *(x9_2 + 8)
int64_t x8_5

if (*(x8_3 + 0x18) == 2)
    x8_5 = *(x8_3 + 0x20)
    
    if (x8_5 != 0)
    label_a301e4:
        
        if ((x8_5() & 1) == 0)
            return 0
else if (*(x8_3 + 0x288) == 2)
    x8_5 = *(x8_3 + 0x290)
    
    if (x8_5 != 0)
        goto label_a301e4
else if (*(x8_3 + 0x4f8) == 2)
    x8_5 = *(x8_3 + 0x500)
    
    if (x8_5 != 0)
        goto label_a301e4
else if (*(x8_3 + 0x768) == 2)
    x8_5 = *(x8_3 + 0x770)
    
    if (x8_5 != 0)
        goto label_a301e4
return 1
