// 函数: _Z18FromCampaignStringR13CampaignSetupRK7XString
// 地址: 0x9eef18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
char* x20_1 = XString::operator char const*()
int64_t x24 = 0
XString var_98
char* x21_1
int64_t x22_1

do
    void* x9_1 = x20_1 - 1
    void* x10_1 = &x20_1[1]
    x21_1 = x9_1
    uint32_t i
    
    do
        x21_1 = &x21_1[1]
        i = zx.d(*x21_1)
        x20_1 = x10_1
        x9_1 += 1
        x10_1 += 1
    while (i == 0x20)
    
    x22_1 = 0
    uint32_t i_1 = i & 0xff
    
    if (i_1 != 0)
        while (i_1 != 0xa)
            char i_2 = *x20_1
            x20_1 = &x20_1[1]
            x22_1 += 1
            i_1 = zx.d(i_2)
            
            if (i_1 == 0)
                break
    
    XString::AppendLength(&var_98 + (x24 << 3), x21_1.d)
    x24 += 1
    
    if (x24 == 0xb)
        break
while (zx.d(x21_1[x22_1]) != 0)
XString var_90
int32_t x0_4 = FromCampaignString(arg1, &var_98, &var_90)
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
return zx.q(x0_4) & 1
