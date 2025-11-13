// 函数: _Z17GameProfileUpdate9UI2Handle
// 地址: 0x9c3680
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, GameProfileClick)
UI2SetHandler(zx.q(x19), GameProfileCommit)
GameProfile* x0_1 = GetActiveProfile()
UI2SetState(zx.q(x19), GameAvatarGet(zx.q(*(x0_1 + 0x10))), 0xffffffff, 0)
XString::XString()
void var_28

if ((UI2TextboxActive(zx.q(x19), &var_28) & 1) == 0)
    UI2SetText(zx.q(x19), &data_11ce690, x0_1, 0xffffffff)
else if (zx.d(*XString::operator char const*()) == 0)
    UI2SetState(zx.q(x19), &data_11ce960, 0xffffffff, 0)

XString::XString()
XString var_30
int32_t x0_11 = CalcEmailState(x0_1, &var_30)
int32_t x8_3

if (x0_11 != 0)
    if (x0_11 == 1)
        UI2SetState(zx.q(x19), &data_11cf008, 0xffffffff, 0)
        goto label_9c3850
    
    if (x0_11 != 2)
    label_9c390c:
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return GetCurrentLanguage() __tailcall
    
    UI2SetState(zx.q(x19), &data_11cf038, 0xffffffff, 0)
    UI2SetText(zx.q(x19), &data_11cf050, &var_30, 0xffffffff)
    
    if ((zx.d(*(x0_1 + 0x42c0)) & 1) != 0)
        UI2SetState(zx.q(x19), &data_11cf0c8, 0xffffffff, 0)
    
    x8_3 = *(GetActiveProfile() + 0x4324)
    
    if (x8_3 == 0)
        goto label_9c3868
    
    goto label_9c37b8

UI2SetState(zx.q(x19), &data_11cefd8, 0xffffffff, 0)
label_9c3850:
UI2SetText(zx.q(x19), &data_11cf050, &var_30, 0xffffffff)
x8_3 = *(GetActiveProfile() + 0x4324)
int64_t* x1_5

if (x8_3 != 0)
label_9c37b8:
    
    if (x8_3 == 1)
        UI2SetState(zx.q(x19), &data_11ce930, 0xffffffff, 0)
        UI2SetState(zx.q(x19), &data_11ce8e8, 0xffffffff, 0)
        x1_5 = &data_11ce918
    else
        if (x8_3 != 2)
            goto label_9c390c
        
        UI2SetState(zx.q(x19), &data_11ce930, 0xffffffff, 0)
        UI2SetState(zx.q(x19), &data_11ce8e8, 0xffffffff, 0)
        x1_5 = &data_11ce900
else
label_9c3868:
    
    if (*(GetClient() + 0x1c) != 6)
        if (*(GetClient() + 0x1c) == 8)
            x1_5 = &data_11ce948
        else
            x1_5 = &data_11ce930
    else
        x1_5 = &data_11ce948

UI2SetState(zx.q(x19), x1_5, 0xffffffff, 0)
XString::~XString()
return XString::~XString()
