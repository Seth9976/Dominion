// 函数: _Z22CampaignFeaturesUpdate9UI2Handle
// 地址: 0xb9815c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, CampaignFeaturesClick)

if (zx.d(*(GetActiveProfile() + 0x4290)) == 0)
    UI2SetState(zx.q(x19), &data_1832460, 0xffffffff, 0)

XString::XString()
void var_48
int128_t v0
int128_t v1
int128_t v2
int128_t v3
v0, v1, v2, v3 = DomLogGetCampaignEntries(&var_48)
int128_t var_80 = data_114f860.o
int128_t var_70 = data_114f870.o
int128_t var_c0 = data_114f820.o
int128_t var_b0 = data_114f830.o
v2 = data_114f7e0.o
v3 = data_114f7f0.o
int128_t var_a0 = data_114f840.o
int128_t var_90 = data_114f850.o
int64_t x24 = 8
int128_t var_e0 = data_114f800.o
int128_t var_d0 = data_114f810.o
v1 = data_114f7b0.o
int128_t var_140 = data_114f7a0.o
int128_t var_130 = v1
int128_t var_100 = v2
int128_t var_f0 = v3
char const* const var_60 = "log_stamp"
int128_t var_120 = data_114f7c0.o
int128_t var_110 = data_114f7d0.o

while (true)
    char* x0_3 = XString::operator char const*()
    XFormatString("{%s}")
    StringReplace(x0_3, XString::operator char const*(), &data_793a18)
    XString::operator=(&var_48)
    XString::~XString()
    XString::~XString()
    
    if (x24 == 0xe8)
        break
    
    *(&var_140 + x24)
    x24 += 8

UI2SetText(zx.q(x19), &data_1832478, &var_48, 0xffffffff)
return XString::~XString()
