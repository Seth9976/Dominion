// 函数: _Z18NumberPickerUpdate9UI2Handle
// 地址: 0xba12e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, NumberPickerClick)
XStringFromInt(*(gDomClient + 0x20578))
int64_t var_28
UI2SetText(zx.q(x19), &data_1832bf8, &var_28, 0xffffffff)
XString::~XString()

if (*(GetClient() + 0x5068) == 1)
    int32_t x0_5 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_28)
    int64_t x8_1 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_1.d s< x0_5)
        int64_t x9_1 = var_28
        
        if (x9_1 != 0)
            UI2StateDecl* x20_1 = x9_1 + x8_1 * 0xb0
            UI2SetState(zx.q(x19), x20_1, 0xffffffff, 0)
            
            if (*(x20_1 + 0x1c) - 0x13 u>= 2)
                UI2SetState(zx.q(x19), &data_182f550, 0xffffffff, 0)

uint64_t x8_4 = zx.q(*(gDomClient + 0x20574))

if (x8_4.d u> 5)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return LogData::LogData() __tailcall

int64_t* x20_2 = &data_1832ca0

switch (x8_4)
    case 1
        UI2SetState(zx.q(x19), &data_1832ca0, 0xffffffff, 0)
        
        if (zx.d(*(gDomClient + 0x20584)) == 0)
            x20_2 = &data_1832cd0
        else
            x20_2 = &data_1832cb8
    case 2
        x20_2 = &data_1832c40
    case 3
        x20_2 = &data_1832c88
    case 4
        x20_2 = &data_1832c58
    case 5
        x20_2 = &data_1832c70

int64_t result = UI2SetState(zx.q(x19), x20_2, 0xffffffff, 0)
int32_t x8_6 = *(gDomClient + 0x20578)

if (x8_6 == *(gDomClient + 0x2057c))
    result = UI2SetState(zx.q(x19), &data_1832c10, 0xffffffff, 0)
    x8_6 = *(gDomClient + 0x20578)

if (x8_6 != *(gDomClient + 0x20580))
    return result

return UI2SetState(zx.q(x19), &data_1832c28, 0xffffffff, 0)
