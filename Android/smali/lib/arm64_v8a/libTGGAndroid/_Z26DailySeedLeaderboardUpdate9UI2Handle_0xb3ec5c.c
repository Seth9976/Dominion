// 函数: _Z26DailySeedLeaderboardUpdate9UI2Handle
// 地址: 0xb3ec5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x26 = arg1
XString::XString()
void var_1a8
void* var_1e0 = &var_1a8
XString::XString()
void var_190
void* var_1e8 = &var_190
XString::XString()
void var_178
void* var_1f0 = &var_178
XString::XString()
void var_160
void* var_1f8 = &var_160
XString::XString()
void var_148
void* var_200 = &var_148
XString::XString()
void var_130
void* var_208 = &var_130
XString::XString()
void var_118
void* var_210 = &var_118
XString::XString()
void var_100
void* var_218 = &var_100
XString::XString()
void var_e8
void* var_220 = &var_e8
XString::XString()
void var_d0
void* var_228 = &var_d0
XString::XString()
void var_b8
void* var_230 = &var_b8
XString::XString()
void var_a0
void* var_238 = &var_a0
XString::XString()
void var_88
void* var_240 = &var_88
XString::XString()
void var_70
void* var_248 = &var_70
XString::XString()
void var_1c8
int32_t x0_1 = GetLeaderboardEntries(zx.q(*(gDailyDlg + 4)), &var_1c8, 0xa)
UI2SetInt(zx.q(x26), &data_1830ac8, x0_1, 0xffffffff)
uint64_t x25 = zx.q(x0_1 - 1)

if (x0_1 s>= 1)
    void var_1c0
    void* x24_1 = &var_1c0
    uint64_t fp_1 = zx.q(x0_1)
    int64_t x27_1 = 0
    
    while (true)
        UI2SetText(zx.q(x26), &data_1830ae0, x24_1, x27_1.d)
        XStringFromInt(*(x24_1 + 8))
        void var_1d0
        UI2SetText(zx.q(x26), &data_1830af8, &var_1d0, x27_1.d)
        XString::~XString()
        
        if (*(x24_1 - 8) == *(GetActiveProfile() + 0x42ac))
            UI2SetState(zx.q(x26), &data_1830b10, x27_1.d, 0)
            
            if (x25 == x27_1)
                UI2SetState(zx.q(x26), &data_1830b28, x25.d, 0)
        
        uint64_t x0_3
        int64_t* x1_1
        int32_t x2_1
        
        if (x27_1.d == 2)
            x2_1 = 2
            x0_3 = zx.q(x26)
            x1_1 = &data_1830a08
        else if (x27_1.d == 1)
            x2_1 = 1
            x0_3 = zx.q(x26)
            x1_1 = &data_18309f0
        else
            x0_3 = zx.q(x26)
            
            if (x27_1.d != 0)
                UI2SetState(x0_3, &data_1830a20, x27_1.d, 0)
                XStringFromInt(x27_1.d + 1)
                UI2SetText(zx.q(x26), &data_1830a38, &var_1d0, x27_1.d)
                XString::~XString()
                x27_1 += 1
                x24_1 += 0x18
                
                if (fp_1 == x27_1)
                    break
                
                continue
            else
                x1_1 = &data_18309d8
                x2_1 = 0
        
        UI2SetState(x0_3, x1_1, x2_1, 0)
        x27_1 += 1
        x24_1 += 0x18
        
        if (fp_1 == x27_1)
            break

UI2StateDecl* x1_2

if (*(gDailyDlg + 4) == 1)
    x1_2 = &data_1830d80
else
    x1_2 = &data_1830d98

UI2SetState(zx.q(x26), x1_2, 0xffffffff, 0)
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
XString::~XString()
XString::~XString()
XString::~XString()
return XString::~XString()
