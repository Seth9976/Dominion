// 函数: _Z16DumpMissionCardsRK13CampaignSetupi
// 地址: 0xa52280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::XString()
int64_t x26 = sx.q(arg2)
char var_68
char* entry_x8

for (int64_t i = 0; i != 0xa; i += 1)
    XString::XString()
    void* x19_1 = arg1 + (x26 << 0xb)
    
    for (int64_t j = 0; j != 0x4c; j += 1)
        void* x27_1 = x19_1 + j * 0x14
        
        if (*(x27_1 + 0x58c) == 0)
            break
        
        if (*(arg1 + (x26 << 0xb) + j * 0x14 + 0x590) == *(x19_1 + (i << 2) + 0xc))
            if ((XString::IsEmpty() & 1) == 0)
                XString::operator+=(&var_68)
            
            uint64_t x8_5 = zx.q(*(x27_1 + 0x58c))
            
            if (x8_5.d != 0)
                int64_t* x9_4 = *gCampaignData
                    + ((zx.q(*(gCampaignData + 8)) & (zx.q(x8_5.d s>> 4) | x8_5)) << 3)
                int32_t* x10_2
                
                do
                    x10_2 = *x9_4
                    x9_4 = &x10_2[4]
                while (*x10_2 != x8_5.d)
                
                *(*(x10_2 + 8) + 8)
            
            XString::operator+=(&var_68)
            
            if (*(x27_1 + 0x58c) == 0xdc6)
                XString::operator+=(&var_68)
                CardKey(zx.q(*(arg1 + (x26 << 0xb) + j * 0x14 + 0x59c)))
                XString::operator+=(&var_68)
    
    if ((XString::IsEmpty() & 1) == 0)
        CardKey(zx.q(*(x19_1 + (i << 2) + 0xc)))
        XString::GetString()
        XFormatString("%s (%s){br}")
    else
        CardKey(zx.q(*(x19_1 + (i << 2) + 0xc)))
        XFormatString("%s{br}")
    
    XString::operator char const*()
    XString::operator+=(entry_x8)
    XString::~XString()
    XString::~XString()

void* x25_3

for (int64_t i_1 = 0; i_1 != 4; i_1 += 1)
    x25_3 = arg1 + (x26 << 0xb)
    
    if (*(x25_3 + i_1 * 0x3c + 0x34) == 0)
        break
    
    XString::XString()
    void* x22_1
    
    for (int64_t j_1 = 0; j_1 != 0x4c; j_1 += 1)
        x22_1 = arg1 + (x26 << 0xb)
        void* x27_3 = x22_1 + j_1 * 0x14
        
        if (*(x27_3 + 0x58c) == 0)
            break
        
        if (*(x22_1 + j_1 * 0x14 + 0x590) == *(x25_3 + i_1 * 0x3c + 0x34))
            if ((XString::IsEmpty() & 1) == 0)
                XString::operator+=(&var_68)
            
            uint64_t x8_15 = zx.q(*(x27_3 + 0x58c))
            
            if (x8_15.d != 0)
                int64_t* x9_9 = *gCampaignData
                    + ((zx.q(*(gCampaignData + 8)) & (zx.q(x8_15.d s>> 4) | x8_15)) << 3)
                int32_t* x10_4
                
                do
                    x10_4 = *x9_9
                    x9_9 = &x10_4[4]
                while (*x10_4 != x8_15.d)
                
                *(*(x10_4 + 8) + 8)
            
            XString::operator+=(&var_68)
    
    if (*(x22_1 + i_1 * 0x3c + 0x38) != 0)
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_68)
        
        CardKey(zx.q(*(x22_1 + i_1 * 0x3c + 0x38)))
        XString::operator+=(&var_68)
        
        if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x3c) != 0)
            if ((XString::IsEmpty() & 1) == 0)
                XString::operator+=(&var_68)
            
            CardKey(zx.q(*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x3c)))
            XString::operator+=(&var_68)
            
            if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x40) != 0)
                if ((XString::IsEmpty() & 1) == 0)
                    XString::operator+=(&var_68)
                
                CardKey(zx.q(*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x40)))
                XString::operator+=(&var_68)
                
                if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x44) != 0)
                    if ((XString::IsEmpty() & 1) == 0)
                        XString::operator+=(&var_68)
                    
                    CardKey(zx.q(*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x44)))
                    XString::operator+=(&var_68)
                    
                    if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x48) != 0)
                        if ((XString::IsEmpty() & 1) == 0)
                            XString::operator+=(&var_68)
                        
                        CardKey(zx.q(*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x48)))
                        XString::operator+=(&var_68)
                        
                        if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x4c) != 0)
                            if ((XString::IsEmpty() & 1) == 0)
                                XString::operator+=(&var_68)
                            
                            CardKey(zx.q(*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x4c)))
                            XString::operator+=(&var_68)
                            
                            if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x50) != 0)
                                if ((XString::IsEmpty() & 1) == 0)
                                    XString::operator+=(&var_68)
                                
                                CardKey(zx.q(*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x50)))
                                XString::operator+=(&var_68)
                                
                                if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x54) != 0)
                                    if ((XString::IsEmpty() & 1) == 0)
                                        XString::operator+=(&var_68)
                                    
                                    CardKey(zx.q(*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x54)))
                                    XString::operator+=(&var_68)
                                    
                                    if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x58) != 0)
                                        if ((XString::IsEmpty() & 1) == 0)
                                            XString::operator+=(&var_68)
                                        
                                        CardKey(zx.q(*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x58)))
                                        XString::operator+=(&var_68)
                                        
                                        if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x5c) != 0)
                                            if ((XString::IsEmpty() & 1) == 0)
                                                XString::operator+=(&var_68)
                                            
                                            CardKey(zx.q(
                                                *(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x5c)))
                                            XString::operator+=(&var_68)
                                            
                                            if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x60) != 0)
                                                if ((XString::IsEmpty() & 1) == 0)
                                                    XString::operator+=(&var_68)
                                                
                                                CardKey(zx.q(
                                                    *(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x60)))
                                                XString::operator+=(&var_68)
                                                
                                                if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x64) != 0)
                                                    if ((XString::IsEmpty() & 1) == 0)
                                                        XString::operator+=(&var_68)
                                                    
                                                    CardKey(zx.q(
                                                        *(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x64)))
                                                    XString::operator+=(&var_68)
                                                    
                                                    if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c + 0x68)
                                                            != 0)
                                                        if ((XString::IsEmpty() & 1) == 0)
                                                            XString::operator+=(&var_68)
                                                        
                                                        CardKey(zx.q(*(arg1 + (x26 << 0xb)
                                                            + i_1 * 0x3c + 0x68)))
                                                        XString::operator+=(&var_68)
                                                        
                                                        if (*(arg1 + (x26 << 0xb) + i_1 * 0x3c
                                                                + 0x6c) != 0)
                                                            if ((XString::IsEmpty() & 1) == 0)
                                                                XString::operator+=(&var_68)
                                                            
                                                            CardKey(zx.q(*(arg1 + (x26 << 0xb)
                                                                + i_1 * 0x3c + 0x6c)))
                                                            XString::operator+=(&var_68)
    
    if ((XString::IsEmpty() & 1) == 0)
        CardKey(zx.q(*(x25_3 + i_1 * 0x3c + 0x34)))
        XString::GetString()
        XFormatString("%s (%s){br}")
    else
        CardKey(zx.q(*(x25_3 + i_1 * 0x3c + 0x34)))
        XFormatString("%s{br}")
    
    XString::operator char const*()
    XString::operator+=(entry_x8)
    XString::~XString()
    XString::~XString()

uint64_t result = XString::operator+=(entry_x8)
void* fp_1

for (int64_t i_2 = 0; i_2 != 0x4c; i_2 += 1)
    fp_1 = arg1 + (x26 << 0xb)
    uint64_t x8_45 = zx.q(*(fp_1 + i_2 * 0x14 + 0x58c))
    
    if (x8_45.d == 0)
        break
    
    result = zx.q(*(fp_1 + i_2 * 0x14 + 0x590))
    
    if (*(x25_3 + 0xc) != result.d && *(x25_3 + 0x10) != result.d && *(x25_3 + 0x14) != result.d
            && *(x25_3 + 0x18) != result.d && *(x25_3 + 0x1c) != result.d
            && *(x25_3 + 0x20) != result.d && *(x25_3 + 0x24) != result.d
            && *(x25_3 + 0x28) != result.d && *(x25_3 + 0x2c) != result.d
            && *(x25_3 + 0x30) != result.d)
        if (result.d == 0)
        label_a52a40:
            
            if (*(arg1 + (x26 << 0xb) + i_2 * 0x14 + 0x59c) != 0)
                pthread_kill(pthread_self(), 6)
                return CampaignApplyDeferFns(XNoReturn()) __tailcall
            
            void* x8_50
            
            if (x8_45.d != 0x17d8)
                if (result.d != 0)
                    void* x9_33 = *gCampaignData
                        + ((zx.q(*(gCampaignData + 8)) & (zx.q(x8_45.d s>> 4) | x8_45)) << 3)
                    int32_t* x10_8
                    
                    do
                        x10_8 = *x9_33
                        x9_33 = &x10_8[4]
                    while (*x10_8 != x8_45.d)
                    
                    x8_50 = *(x10_8 + 8)
                    goto label_a52ad8
                
                int64_t* x9_37 = *gCampaignData
                    + ((zx.q(*(gCampaignData + 8)) & (zx.q(x8_45.d) | zx.q(x8_45.d s>> 4))) << 3)
                int32_t* x10_10
                
                do
                    x10_10 = *x9_37
                    x9_37 = &x10_10[4]
                while (*x10_10 != x8_45.d)
                
                *(*(x10_10 + 8) + 8)
                XFormatString("%s{br}")
                XString::operator char const*()
                XString::operator+=(entry_x8)
                result = XString::~XString()
            else
                int64_t* x8_48 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x17fd) << 3)
                int32_t* x9_30
                
                do
                    x9_30 = *x8_48
                    x8_48 = &x9_30[4]
                while (*x9_30 != 0x17d8)
                
                x8_50 = *(x9_30 + 8)
                result = zx.q(*(x25_3 + 0x2cc))
            label_a52ad8:
                int64_t var_c8_1 = *(x8_50 + 8)
                CardKey(result)
                XFormatString("%s (%s){br}")
                XString::operator char const*()
                XString::operator+=(entry_x8)
                result = XString::~XString()
        else if (*(x25_3 + 0x34) != result.d && *(x25_3 + 0x70) != result.d
                && *(x25_3 + 0xac) != result.d && *(x25_3 + 0xe8) != result.d)
            goto label_a52a40

if (*(fp_1 + 0x540) == 0)
    return result

int32_t x8_55 = *(arg1 + (x26 << 0xb) + 0x544)

for (int32_t* i_3 = *(*(gCampaignData + 0x10)
        + (((zx.q(x8_55) | zx.q(x8_55 s>> 4)) & zx.q(*(gCampaignData + 0x18))) << 3)); i_3 != 0; 
        i_3 = *(i_3 + 0x10))
    if (*i_3 == x8_55)
        *(*(i_3 + 8) + 8)
        break

XFormatString("bonus_theme %s{br}")
XString::operator char const*()
XString::operator+=(entry_x8)
return XString::~XString()
