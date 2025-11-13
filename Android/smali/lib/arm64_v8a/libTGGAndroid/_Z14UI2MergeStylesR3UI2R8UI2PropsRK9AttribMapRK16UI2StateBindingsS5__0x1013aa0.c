// 函数: _Z14UI2MergeStylesR3UI2R8UI2PropsRK9AttribMapRK16UI2StateBindingsS5_
// 地址: 0x1013aa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char x0_1 = AttribMapGetBool(*gUI2AttribTable, arg3, 0x68)
*(arg1 + 0x167c) = AttribMapGetInt(*gUI2AttribTable, arg3, 0x66)

if (*(gUI2 + 0x60) == 0)
    return 0

char* x0_5 = AttribMapGetString(*gUI2AttribTable, arg3, 0x67)
XString::operator=(arg1 + 0x1680)
char* x2

if (zx.d(*x0_5) == 0)
    x2 = nullptr
else
    x2 = x0_5

return UI2MergeStyle(arg1, arg2, x2, arg4, arg5, x0_1 & 1, false) __tailcall
