// 函数: _Z17LeaderboardUpdate9UI2Handle
// 地址: 0x9c7e94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, LeaderboardClick)
XString* x0 = GetActiveProfile()
void* x0_1 = GetClient()
int32_t x8 = *(x0_1 + 0x78e8)
int32_t x8_1

x8_1 = x8 s< 0xd ? x8 : 0xd

if (x8_1 == 0)
    return UI2SetState(zx.q(x19), &data_11d0160, 0xffffffff, 0) __tailcall

int64_t i = 0
int32_t x27 = 0
void* x20_1 = x0_1 + 0x7790
int64_t result

do
    char var_68
    
    if (i s>= sx.q(x8_1))
        UI2SetState(zx.q(x19), &data_11d0130, i.d, 0)
        XString::XString(&var_68)
        UI2SetText(zx.q(x19), &data_11d0100, &var_68, i.d)
        XString::~XString()
        XString::XString(&var_68)
    else
        if ((i.d & 1) != 0)
            UI2SetState(zx.q(x19), &data_11d0130, i.d, 0)
        
        if (*(x0 + 0x42ac) == *(x20_1 - 0x10))
            UI2SetState(zx.q(x19), &data_11d0148, i.d, 0)
            x27 = 1
        else if ((((i != 0xc ? 1 : 0) | x27) & 1) == 0 && zx.d(*(x0 + 0x7ca4)) != 0)
            float temp0_1 = vrndm_f32(DominionGamesLevel(x0 + 0x7ca8) * float.s(0x42c80000))
            float v1_2
            
            if (temp0_1 < 0f)
                v1_2 = fconvert.s(-0.5f)
            else
                v1_2 = fconvert.s(0.5f)
            
            XStringFromInt(vcvts_s32_f32(temp0_1 + v1_2))
            UI2SetText(zx.q(x19), &data_11d0100, x0, 0xc)
            UI2SetText(zx.q(x19), &data_11d0118, &var_68, 0xc)
            UI2SetState(zx.q(x19), &data_11d0148, 0xc, 0)
            return XString::~XString()
        
        UI2SetText(zx.q(x19), &data_11d0100, x20_1 - 8, i.d)
        XStringFromInt(*x20_1)
    
    UI2SetText(zx.q(x19), &data_11d0118, &var_68, i.d)
    result = XString::~XString()
    i += 1
    x20_1 += 0x18
while (i != 0xd)

return result
