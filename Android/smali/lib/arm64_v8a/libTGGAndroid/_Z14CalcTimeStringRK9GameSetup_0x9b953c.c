// 函数: _Z14CalcTimeStringRK9GameSetup
// 地址: 0x9b953c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0x24)
char* entry_x8

if (x9 != 0)
    if (x9 == 1)
        return XString::XString(entry_x8) __tailcall
    
    if (x9 != 2)
        return XString::XString(entry_x8) __tailcall
    
    return XString::XString(entry_x8) __tailcall

int32_t x20 = *(arg1 + 0x48)
int64_t x8_1 = muls.dp.d(TimerStop(arg1), 0xef9db22d)
int32_t x0_3 = (x8_1 s>> 0x26).d + (x8_1 u>> 0x3f).d + x20

if (x0_3 s<= 0)
    return XString::XString(entry_x8) __tailcall

SecondsToTimeString(x0_3)
XString::GetString()
XFormatString("Formation expires in{br}%s")
return XString::~XString()
