// 函数: _Z14ToExtrasStringPK20CampaignMissionExtraPK11DomCardEnum
// 地址: 0x9eb11c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = XString::XString()
int64_t x25 = 0

while (*(arg1 + x25) != 0)
    char* entry_x8
    
    if ((XString::IsEmpty() & 1) == 0)
        XString::operator+=(entry_x8)
    
    uint64_t x0_4 = zx.q(*(arg1 + x25))
    DomCardEnum* x0_5
    int32_t x1_1
    
    if (x0_4.d == 0x17d8)
        x1_1 = 1
        x0_5 = arg2 + 0x1a8
    label_9eb1c4:
        ToCardsString(x0_5, x1_1, arg2)
        CampaignPieceKey(zx.q(*(arg1 + x25)))
        XString::GetString()
        XFormatString("%s(%s)")
        XString::operator char const*()
        XString::operator+=(entry_x8)
        XString::~XString()
    else
        if (x0_4.d == 0x17e3)
            x1_1 = 0x14
            x0_5 = arg2 + 0x154
            goto label_9eb1c4
        
        void* fp_2 = arg1 + x25
        
        if (*(fp_2 + 4) == 0)
            CampaignPieceKey(x0_4)
            XFormatString("%s")
        else if (*(fp_2 + 8) == 0xffffffff)
            void* x28_1 = arg1 + x25
            
            if (*(x28_1 + 0x10) == 0)
                CampaignPieceKey(x0_4)
                *(DomDefGet(zx.q(*(fp_2 + 4)), 0x17) + 0x58)
                XFormatString("%s(%s)")
            else
                CampaignPieceKey(x0_4)
                *(DomDefGet(zx.q(*(fp_2 + 4)), 0x17) + 0x58)
                *(DomDefGet(zx.q(*(x28_1 + 0x10)), 0x17) + 0x58)
                XFormatString("%s(%s,%s)")
            
            XString::operator char const*()
            XString::operator+=(entry_x8)
            result = XString::~XString()
            x25 += 0x14
            
            if (x25 == 0x280)
                break
            
            continue
        else
            CampaignPieceKey(x0_4)
            *(DomDefGet(zx.q(*(fp_2 + 4)), 0x17) + 0x58)
            *(fp_2 + 8)
            XFormatString("%s(%s,%d)")
        
        XString::operator char const*()
        XString::operator+=(entry_x8)
    result = XString::~XString()
    x25 += 0x14
    
    if (x25 == 0x280)
        break

return result
