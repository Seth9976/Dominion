// 函数: _Z24GameProfileAccountUpdate9UI2Handle
// 地址: 0x9bce14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, GameProfileAccountClick)
UI2SetHandler(zx.q(x19), GameProfileAccountCommit)
void* x0_1 = GetActiveProfile()
int32_t x0_2 = GetAccountStatus()

if (x0_2 u> 6)
    pthread_kill(pthread_self(), 6)
    return GameProfileAvatarUpdate(XNoReturn()) __tailcall

void var_28

switch (x0_2)
    case 0
        return UI2SetState(zx.q(x19), &data_11cefd8, 0xffffffff, 0) __tailcall
    case 1
        XString::XString()
        
        if ((UI2TextboxActive(zx.q(x19), &var_28) & 1) == 0)
            XString::operator=(&var_28)
        
        UI2SetText(zx.q(x19), &data_11cf068, &var_28, 0xffffffff)
        UI2SetState(zx.q(x19), &data_11ceff0, 0xffffffff, 0)
        char* x0_10 = XString::operator char const*()
        char* x0_11 = stristr(x0_10, "@")
        
        if (x0_11 == 0 || x0_11 == x0_10)
            UI2SetState(zx.q(x19), &data_11cef48, 0xffffffff, 0)
            return XString::~XString()
        
        char* x0_12 = stristr(x0_11, ".")
        
        if (x0_12 == 0)
            UI2SetState(zx.q(x19), &data_11cef48, 0xffffffff, 0)
            return XString::~XString()
        
        if (strlen(x0_12) u> 2)
            return XString::~XString()
        
        UI2SetState(zx.q(x19), &data_11cef48, 0xffffffff, 0)
        return XString::~XString()
    case 2
        UI2SetText(zx.q(x19), &data_11cf050, x0_1 + 8, 0xffffffff)
        return UI2SetState(zx.q(x19), &data_11cf008, 0xffffffff, 0) __tailcall
    case 3
        UI2SetState(zx.q(x19), &data_11cf020, 0xffffffff, 0)
        XString::XString()
        
        if ((UI2TextboxActive(zx.q(x19), &var_28) & 1) == 0)
            XString::operator=(&var_28)
        
        UI2SetText(zx.q(x19), &data_11cf068, &var_28, 0xffffffff)
        UI2SetText(zx.q(x19), &data_11cf050, x0_1 + 8, 0xffffffff)
        
        if ((IsValidCode(XString::operator char const*()) & 1) != 0)
            return XString::~XString()
        
        UI2SetState(zx.q(x19), &data_11cef48, 0xffffffff, 0)
        return XString::~XString()
    case 4, 5
        UI2SetState(zx.q(x19), &data_11cf008, 0xffffffff, 0)
        int64_t result = UI2SetText(zx.q(x19), &data_11cf050, x0_1 + 8, 0xffffffff)
        UI2StateDecl* x1_2
        
        if (x0_2 == 4)
            x1_2 = &data_11cf098
        else
            if (x0_2 != 5)
                return result
            
            x1_2 = &data_11cf0b0
        
        return UI2SetState(zx.q(x19), x1_2, 0xffffffff, 0) __tailcall
    case 6
        UI2SetState(zx.q(x19), &data_11cf038, 0xffffffff, 0)
        return UI2SetText(zx.q(x19), &data_11cf050, x0_1 + 0x42b8, 0xffffffff) __tailcall
