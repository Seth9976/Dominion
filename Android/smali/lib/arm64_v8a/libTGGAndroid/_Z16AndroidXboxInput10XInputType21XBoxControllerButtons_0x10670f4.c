// 函数: _Z16AndroidXboxInput10XInputType21XBoxControllerButtons
// 地址: 0x10670f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x20 = arg1

if (arg1 == 0xd)
    *(gAndroidGlobals + 0x58) |= x19
else if (x20 == 0xc)
    *(gAndroidGlobals + 0x58) &= not.d(x19)

XString::XString()
int32_t var_48
InputDataClear(&var_48)
var_48 = x20
int32_t var_44 = x19
AppInput(&var_48)
return XString::~XString()
