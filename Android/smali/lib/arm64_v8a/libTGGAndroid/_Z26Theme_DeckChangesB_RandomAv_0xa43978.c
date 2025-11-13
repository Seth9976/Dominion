// 函数: _Z26Theme_DeckChangesB_RandomAv
// 地址: 0xa43978
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_2 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x8cf) << 3)
int32_t* x9_1

do
    x9_1 = *x8_2
    x8_2 = &x9_1[4]
while (*x9_1 != 0x8cb)

void* x8_4 = *(x9_1 + 8)
int64_t x9_3

if (*(x8_4 + 0x18) != 5)
    if (*(x8_4 + 0x288) == 5)
        x9_3 = 1
        goto label_a43a00
    
    if (*(x8_4 + 0x4f8) == 5)
        x9_3 = 2
        goto label_a43a00
    
    if (*(x8_4 + 0x768) == 5)
        x9_3 = 3
        goto label_a43a00
else
    x9_3 = 0
label_a43a00:
    void* x8_5 = x8_4 + x9_3 * 0x270
    int32_t i = RollTable(gCampaignSetup, x8_5 + 0x20, *(x8_5 + 0x280))
    int64_t* x8_8 = *gCampaignData + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
    int32_t* x9_8
    
    do
        x9_8 = *x8_8
        x8_8 = &x9_8[4]
    while (*x9_8 != i)
    
    void* x8_10 = *(x9_8 + 8)
    
    if (*(x8_10 + 0x18) == 1)
        jump(*(x8_10 + 0x20))
    
    if (*(x8_10 + 0x288) == 1)
        jump(*(x8_10 + 0x290))
    
    if (*(x8_10 + 0x4f8) == 1)
        jump(*(x8_10 + 2 * 0x270 + 0x20))
    
    if (*(x8_10 + 0x768) == 1)
        jump(*(x8_10 + 3 * 0x270 + 0x20))
pthread_kill(pthread_self(), 6)
XNoReturn()
return Theme_DeckChangesB_Exotic() __tailcall
