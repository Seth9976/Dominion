// 函数: _Z18FromCampaignStringR13CampaignSetupRK7XStringPS2_
// 地址: 0x9ee980
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(arg1, 0, 0x5020)
char* x0_1 = XString::operator char const*()
int32_t x0_2 = strlen(x0_1)

if (x0_1 != 0)
    STokenize::STokenizeIter::ParseStr(x0_1)
    size_t n_5
    size_t n_4 = n_5
    uint64_t s1_1
    uint64_t s1 = s1_1
    size_t n_1
    size_t n = n_1
    char* s1_5
    char* s1_4 = s1_5
    size_t n_2
    
    n_2 = s1 == 0 ? n_4 : n
    
    char* s1_2
    
    s1_2 = s1 == 0 ? s1_4 : s1
    
    void* x11_1 = &s1_2[n_2]
    void* x10_1 = &x0_1[sx.q(x0_2)]
    int32_t x12_1 = x10_1.d - x11_1.d
    void* x21_2
    void* x24_1
    
    if (x12_1 s< 1)
    label_9eea4c:
        x21_2 = nullptr
        x24_1 = nullptr
        
        if (s1_4 != 0)
        label_9eea70:
            int32_t var_1a08_1 = 0
            
            while (true)
                uint32_t x11_2 = zx.d(*s1_4)
                size_t n_6
                
                if (x11_2 == 0x2d)
                    n_6 = n_4 - 3
                else
                    n_6 = n_4
                
                char* s1_6
                
                if (x11_2 == 0x2d)
                    s1_6 = &s1_4[3]
                else
                    s1_6 = s1_4
                
                memset(&s1_5, 0, 0x1990)
                char var_19f8
                XString::XString(&var_19f8, s1_6)
                ParseSetupExpansions(&s1_5, XString::operator char const*(), 0x18)
                XString::~XString()
                int32_t var_1028
                
                if (var_1028 == 0)
                    int32_t x0_9
                    int32_t x2_1
                    x0_9, x2_1 = LookupCampaignPiece(s1_6, n_6.d)
                    int32_t x22_3
                    void* x27_1
                    
                    if (x0_9 s<= 0x833)
                        if (x0_9 s> 0x383)
                            if (x0_9 != 0x384)
                                int32_t x8_8
                                
                                if (x0_9 == 0x3e8)
                                    x22_3 = var_1a08_1 + 1
                                    x27_1 = arg1 + (sx.q(var_1a08_1) << 3) + 0x5010
                                    x8_8 = 0x3e8
                                else
                                    if (x0_9 != 0x5dc)
                                        goto label_9eef10
                                    
                                    x22_3 = var_1a08_1 + 1
                                    x27_1 = arg1 + (sx.q(var_1a08_1) << 3) + 0x5010
                                    x8_8 = 0x5dc
                                
                                *x27_1 = x8_8
                                *(x27_1 + 4) = LookupCardByName(s1, n.d, x2_1, 3)
                                goto label_9eed44
                            
                            int64_t x27_3 = 0
                            x22_3 = var_1a08_1 + 1
                            *(arg1 + (sx.q(var_1a08_1) << 3) + 0x5010) = 0x384
                            int32_t x8_18
                            
                            while (true)
                                if (strncasecmp(s1, *(x27_3 + &data_1124b40), n) == 0)
                                    x8_18 = *(&data_1124b38 + x27_3)
                                    break
                                
                                x27_3 += 0x28
                                
                                if (x27_3 == 0xe60)
                                    x8_18 = 0
                                    break
                            
                            *(arg1 + (sx.q(var_1a08_1) << 3) + 0x5014) = x8_18
                            goto label_9eed44
                        
                        if (x0_9 != 0)
                            if (x0_9 != 0x190 && x0_9 != 0x1ae)
                                goto label_9eef10
                            
                            *(arg1 + 0x500c) = x0_9
                            *arg1 = 1
                            
                            if (n == 0)
                                goto label_9eed48
                            
                            goto label_9eef10
                        
                        XString::XString(&s1_5, s1_6)
                        
                        if ((operator==(&s1_5, "general") & 1) == 0)
                            if (s1 != 0 && (operator==(&s1_5, "expansion") & 1) != 0)
                                goto label_9eee08
                        else if (s1 != 0)
                        label_9eee08:
                            XString::XString(&var_19f8, s1)
                            *(arg1 + 8) = atoi(XString::operator char const*())
                            XString::~XString()
                        else
                            operator==(&s1_5, "expansion")
                        
                        XString::~XString()
                        
                        if (x21_2 == 0)
                            break
                    else if (x0_9 s> 0x8c9)
                        if (x0_9 != 0x8ca && x0_9 != 0x8fc && x0_9 != 0x92e)
                        label_9eef10:
                            pthread_kill(pthread_self(), 6)
                            CampaignSetup* x0_41
                            XString* x1_22
                            x0_41, x1_22 = XNoReturn()
                            return FromCampaignString(x0_41, x1_22) __tailcall
                        
                        *(arg1 + (sx.q(var_1a08_1) << 3) + 0x5010) = x0_9
                        var_1a08_1 += 1
                        
                        if (x21_2 == 0)
                            break
                    else
                        if (x0_9 != 0x834)
                            int32_t x8_5
                            
                            if (x0_9 == 0x866)
                                x22_3 = var_1a08_1 + 1
                                x27_1 = arg1 + (sx.q(var_1a08_1) << 3) + 0x5010
                                x8_5 = 0x866
                            else
                                if (x0_9 != 0x898)
                                    goto label_9eef10
                                
                                x22_3 = var_1a08_1 + 1
                                x27_1 = arg1 + (sx.q(var_1a08_1) << 3) + 0x5010
                                x8_5 = 0x898
                            
                            *x27_1 = x8_5
                            *(x27_1 + 4) = LookupCampaignPiece(s1, n.d)
                            goto label_9eed44
                        
                        x22_3 = var_1a08_1 + 1
                        *(arg1 + (sx.q(var_1a08_1) << 3) + 0x5010) = 0x834
                        memset(&s1_5, 0, 0x1990)
                        XString::XString(&var_19f8, s1)
                        ParseSetupExpansions(&s1_5, XString::operator char const*(), 0x18)
                        XString::~XString()
                        *(arg1 + (sx.q(var_1a08_1) << 3) + 0x5014) = var_1028
                    label_9eed44:
                        var_1a08_1 = x22_3
                    label_9eed48:
                        
                        if (x21_2 == 0)
                            break
                else
                    *arg1 = 0
                    *(arg1 + 4) = var_1028
                    *(arg1 + 0x500c) = 0x140
                    
                    if (x21_2 == 0)
                        break
                
                STokenize::STokenizeIter::ParseStr(x21_2)
                n_4 = n_5
                s1 = s1_1
                n = n_1
                s1_4 = s1_5
                size_t n_3
                
                n_3 = s1 == 0 ? n_4 : n
                
                char* s1_3
                
                s1_3 = s1 == 0 ? s1_4 : s1
                
                void* x11_3 = &s1_3[n_3]
                void* x10_5 = x21_2 + x24_1
                int32_t x12_4 = x10_5.d - x11_3.d
                
                if (x12_4 s< 1)
                label_9eea78:
                    x21_2 = nullptr
                    x24_1 = nullptr
                    
                    if (s1_4 == 0)
                        break
                else
                    uint64_t x12_5 = zx.q(x12_4)
                    x21_2 = x11_3
                    
                    while (true)
                        uint64_t x13_1 = zx.q(*x11_3)
                        
                        if (x13_1 u> 0x3f)
                            break
                        
                        if ((1 << x13_1 & 0x400130100002601) == 0)
                            break
                        
                        x21_2 += 1
                        uint64_t temp1_1 = x12_5
                        x12_5 -= 1
                        x11_3 += 1
                        
                        if (temp1_1 == 1)
                            goto label_9eea78
                    
                    x24_1 = x10_5 - x21_2
                    
                    if (s1_4 == 0)
                        break
    else
        uint64_t x12_2 = zx.q(x12_1)
        x21_2 = x11_1
        
        while (true)
            uint64_t x14_1 = zx.q(*x11_1)
            
            if (x14_1 u> 0x3f)
                break
            
            if ((1 << x14_1 & 0x400130100002601) == 0)
                break
            
            x21_2 += 1
            uint64_t temp0_1 = x12_2
            x12_2 -= 1
            x11_1 += 1
            
            if (temp0_1 == 1)
                goto label_9eea4c
        
        x24_1 = x10_1 - x21_2
        
        if (s1_4 != 0)
            goto label_9eea70

FromCampaignMissionString(arg1 + 0xc, arg3)
FromCampaignMissionString(arg1 + 0x80c, arg3 + 8)
FromCampaignMissionString(arg1 + 0x100c, arg3 + 0x10)
FromCampaignMissionString(arg1 + 0x180c, arg3 + 0x18)
FromCampaignMissionString(arg1 + 0x200c, arg3 + 0x20)
FromCampaignMissionString(arg1 + 0x280c, arg3 + 0x28)
FromCampaignMissionString(arg1 + 0x300c, arg3 + 0x30)
FromCampaignMissionString(arg1 + 0x380c, arg3 + 0x38)
FromCampaignMissionString(arg1 + 0x400c, arg3 + 0x40)
FromCampaignMissionString(arg1 + 0x480c, arg3 + 0x48)

if (*arg1 == 0 && *(arg1 + 4) == 0)
    return 0

return 1
