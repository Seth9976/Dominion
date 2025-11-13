// 函数: _Z34DomMatchmakingAsynchSettingsUpdate9UI2Handle
// 地址: 0xb2c288
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, DomAsyncMatchmakingSettingsClick)
void* x0 = GetActiveProfile()
int32_t var_28
int32_t x0_2 = AsyncMatchmakingGetState(&var_28)
int64_t* x1_1

if (x0_2 == 0)
    x1_1 = &data_182e470
else
    if (x0_2 != 1)
        pthread_kill(pthread_self(), 6)
        int64_t x0_11
        GameSetup* x1_4
        DomSetupConfig* x2_2
        x0_11, x1_4, x2_2 = XNoReturn()
        return DomCreateUpdateRules(x0_11, x1_4, x2_2) __tailcall
    
    x1_1 = &data_182e488

UI2SetState(zx.q(x19), x1_1, 0xffffffff, 0)
int32_t x8 = *(x0 + 0x7578)
int32_t x20_1

x20_1 = x8 s> 1 ? x8 : 1

XStringFromInt(x20_1)
int32_t var_30
UI2SetText(zx.q(x19), &data_182e428, &var_30, 0xffffffff)
XString::~XString()
int32_t var_24
CountAsyncMatchmakingGames(&var_30, &var_24)
XStringFromInt(var_24 + var_30)
UI2SetText(zx.q(x19), &data_182e410, &var_30, 0xffffffff)
int64_t result = XString::~XString()
int64_t* x1_3

if (x20_1 s>= 2)
    if (x20_1 != 0x20)
        return result
    
    x1_3 = &data_182e458
else
    x1_3 = &data_182e440

return UI2SetState(zx.q(x19), x1_3, 0xffffffff, 0)
