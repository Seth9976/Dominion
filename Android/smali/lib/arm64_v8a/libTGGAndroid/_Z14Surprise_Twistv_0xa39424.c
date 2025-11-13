// 函数: _Z14Surprise_Twistv
// 地址: 0xa39424
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(gCampaignSetup + 0x19a0)
int32_t i
int64_t x9_1

if (*(x8 + 0x5010) != 0x3e8)
    if (*(x8 + 0x5018) == 0x3e8)
        x9_1 = 1
        goto label_a39474
    
    i = RollTwist()
else
    x9_1 = 0
label_a39474:
    int32_t var_14
    int32_t x0_2 = DomCardExp(zx.q(*(x8 + (x9_1 << 3) + 0x5014)), &var_14)
    
    if (x0_2 == 2 || x0_2 == 0x13)
        i = RollTwist()
    else
        i = *(muls.dp.d(x0_2, 0xa8) + 0x1135084)
        int64_t* x8_5 =
            *gCampaignData + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
        int32_t* x9_5
        
        do
            x9_5 = *x8_5
            x8_5 = &x9_5[4]
        while (*x9_5 != i)
        
        void* x8_7 = *(x9_5 + 8)
        int64_t x9_7
        
        if (*(x8_7 + 0x18) != 2)
            if (*(x8_7 + 0x288) == 2)
                x9_7 = 1
                goto label_a39528
            
            if (*(x8_7 + 0x4f8) == 2)
                x9_7 = 2
                goto label_a39528
            
            if (*(x8_7 + 0x768) == 2)
                x9_7 = 3
                goto label_a39528
        else
            x9_7 = 0
        label_a39528:
            int64_t x8_9 = *(x8_7 + x9_7 * 0x270 + 0x20)
            
            if (x8_9 != 0 && (x8_9() & 1) == 0)
                i = RollTwist()
return CampaignAddTwist(zx.q(i))
