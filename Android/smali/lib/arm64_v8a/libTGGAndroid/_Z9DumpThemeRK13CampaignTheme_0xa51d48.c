// 函数: _Z9DumpThemeRK13CampaignTheme
// 地址: 0xa51d48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x8
void* x8_36
int32_t* x9_15
int32_t* x9_21
int32_t* x9_25

switch (*arg1)
    case 0
        return XString::XString(entry_x8) __tailcall
    case 0x384
        int64_t* x9_8 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x3bc) << 3)
        int32_t* x10_4
        
        do
            x10_4 = *x9_8
            x9_8 = &x10_4[4]
        while (*x10_4 != 0x384)
        
        int32_t i = *(arg1 + 4)
        int32_t* x8_8 = *(*(gCampaignData + 0x10)
            + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 0x18))) << 3))
        *(*(x10_4 + 8) + 8)
        
        if (x8_8 == 0)
        label_a520cc_2:
            return XFormatString("%s:%s") __tailcall
        
        while (*x8_8 != i)
            x8_8 = *(x8_8 + 0x10)
            
            if (x8_8 == 0)
                goto label_a520cc_2
        
        x8_36 = *(x8_8 + 8)
        goto label_a520b4
    case 0x3e8
        void* x8_14 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x3fe) << 3)
        
        do
            x9_15 = *x8_14
            x8_14 = &x9_15[4]
        while (*x9_15 != 0x3e8)
        
    label_a51f74:
        *(*(x9_15 + 8) + 8)
        CardKey(zx.q(*(arg1 + 4)))
        return XFormatString("%s:%s") __tailcall
    case 0x5dc
        int64_t* x8_17 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x5dd) << 3)
        
        do
            x9_15 = *x8_17
            x8_17 = &x9_15[4]
        while (*x9_15 != 0x5dc)
        
        goto label_a51f74
    case 0x834
        int64_t* x8_1 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x8b7) << 3)
        int32_t* x9_3
        
        do
            x9_3 = *x8_1
            x8_1 = &x9_3[4]
        while (*x9_3 != 0x834)
        
        *(*(x9_3 + 8) + 8)
        ExpKey(zx.q(*(arg1 + 4)))
        return XFormatString("%s:%s") __tailcall
    case 0x866
        uint64_t x8_32 = zx.q(*(gCampaignData + 8))
        int64_t x9_24 = *gCampaignData
        int64_t* x10_18 = x9_24 + ((x8_32 & 0x8e6) << 3)
        int32_t* x11_11
        
        do
            x11_11 = *x10_18
            x10_18 = &x11_11[4]
        while (*x11_11 != 0x866)
        
        int32_t i_1 = *(arg1 + 4)
        *(*(x11_11 + 8) + 8)
        
        if (i_1 == 0)
        labelid_13:
            return XFormatString("%s:%s") __tailcall
        
        void* x8_34 = x9_24 + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & x8_32) << 3)
        
        do
            x9_25 = *x8_34
            x8_34 = &x9_25[4]
        while (*x9_25 != i_1)
        
    label_a5209c:
        x8_36 = *(x9_25 + 8)
    label_a520b4:
        *(x8_36 + 8)
    label_a520cc:
        return XFormatString("%s:%s") __tailcall
    case 0x898
        uint64_t x8_9 = zx.q(*(gCampaignData + 8))
        int64_t x9_10 = *gCampaignData
        int64_t* x10_8 = x9_10 + ((x8_9 & 0x899) << 3)
        int32_t* x11_4
        
        do
            x11_4 = *x10_8
            x10_8 = &x11_4[4]
        while (*x11_4 != 0x898)
        
        int32_t i_2 = *(arg1 + 4)
        *(*(x11_4 + 8) + 8)
        
        if (i_2 == 0)
        label_a520cc_1:
            return XFormatString("%s:%s") __tailcall
        
        void* x8_11 = x9_10 + (((zx.q(i_2) | zx.q(i_2 s>> 4)) & x8_9) << 3)
        
        do
            x9_25 = *x8_11
            x8_11 = &x9_25[4]
        while (*x9_25 != i_2)
        
        goto label_a5209c
    case 0x8ca
        void* x8_23 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x8ce) << 3)
        
        do
            x9_21 = *x8_23
            x8_23 = &x9_21[4]
        while (*x9_21 != 0x8ca)
        
        *(*(x9_21 + 8) + 8)
        return XFormatString("%s") __tailcall
    case 0x8fc
        void* x8_26 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x8ff) << 3)
        
        do
            x9_21 = *x8_26
            x8_26 = &x9_21[4]
        while (*x9_21 != 0x8fc)
        
        *(*(x9_21 + 8) + 8)
        return XFormatString("%s") __tailcall
    case 0x92e
        int64_t* x8_5 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x9be) << 3)
        
        do
            x9_21 = *x8_5
            x8_5 = &x9_21[4]
        while (*x9_21 != 0x92e)
        
        *(*(x9_21 + 8) + 8)
        return XFormatString("%s") __tailcall

pthread_kill(pthread_self(), 6)
return DumpCampaignDesc(XNoReturn()) __tailcall
