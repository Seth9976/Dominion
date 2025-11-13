// 函数: _Z18Theme_PileChangesCv
// 地址: 0xa44b3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_2 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x991) << 3)
int32_t* x9_1

do
    x9_1 = *x8_2
    x8_2 = &x9_1[4]
while (*x9_1 != 0x910)

void* x8_4 = *(x9_1 + 8)
int64_t x9_3

if (*(x8_4 + 0x18) != 5)
    if (*(x8_4 + 0x288) == 5)
        x9_3 = 1
        goto label_a44bc4
    
    if (*(x8_4 + 0x4f8) == 5)
        x9_3 = 2
        goto label_a44bc4
    
    if (*(x8_4 + 0x768) == 5)
        x9_3 = 3
        goto label_a44bc4
else
    x9_3 = 0
label_a44bc4:
    void* x8_5 = x8_4 + x9_3 * 0x270
    int32_t i = RollTable(gCampaignSetup, x8_5 + 0x20, *(x8_5 + 0x280))
    int64_t* x8_8 = *gCampaignData + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
    int32_t* x9_8
    
    do
        x9_8 = *x8_8
        x8_8 = &x9_8[4]
    while (*x9_8 != i)
    
    void* x8_10 = *(x9_8 + 8)
    int64_t x9_10
    
    if (*(x8_10 + 0x18) != 1)
        if (*(x8_10 + 0x288) == 1)
            x9_10 = 1
            goto label_a44c60
        
        if (*(x8_10 + 0x4f8) == 1)
            x9_10 = 2
            goto label_a44c60
        
        if (*(x8_10 + 0x768) == 1)
            x9_10 = 3
            goto label_a44c60
    else
        x9_10 = 0
    label_a44c60:
        (*(x8_10 + x9_10 * 0x270 + 0x20))()
        int64_t* x8_15 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x991) << 3)
        int32_t* x9_15
        
        do
            x9_15 = *x8_15
            x8_15 = &x9_15[4]
        while (*x9_15 != 0x910)
        
        void* x8_17 = *(x9_15 + 8)
        int64_t x9_17
        
        if (*(x8_17 + 0x18) != 5)
            if (*(x8_17 + 0x288) == 5)
                x9_17 = 1
                goto label_a44ce0
            
            if (*(x8_17 + 0x4f8) == 5)
                x9_17 = 2
                goto label_a44ce0
            
            if (*(x8_17 + 0x768) == 5)
                x9_17 = 3
                goto label_a44ce0
        else
            x9_17 = 0
        label_a44ce0:
            void* x8_18 = x8_17 + x9_17 * 0x270
            int32_t i_1 = RollTable(gCampaignSetup, x8_18 + 0x20, *(x8_18 + 0x280))
            int64_t* x8_21 =
                *gCampaignData + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
            int32_t* x9_22
            
            do
                x9_22 = *x8_21
                x8_21 = &x9_22[4]
            while (*x9_22 != i_1)
            
            void* x8_23 = *(x9_22 + 8)
            
            if (*(x8_23 + 0x18) == 1)
                jump(*(x8_23 + 0x20))
            
            if (*(x8_23 + 0x288) == 1)
                jump(*(x8_23 + 0x290))
            
            if (*(x8_23 + 0x4f8) == 1)
                jump(*(x8_23 + 2 * 0x270 + 0x20))
            
            if (*(x8_23 + 0x768) == 1)
                jump(*(x8_23 + 3 * 0x270 + 0x20))
pthread_kill(pthread_self(), 6)
XNoReturn()
return Theme_RandomBellsA() __tailcall
