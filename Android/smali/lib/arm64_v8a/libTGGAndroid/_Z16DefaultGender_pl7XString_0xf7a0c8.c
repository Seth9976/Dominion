// 函数: _Z16DefaultGender_pl7XString
// 地址: 0xf7a0c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* x19 = arg1
XString::XString()
XString var_18
int32_t x19_1

if ((EndingIs(x19, "a", &var_18) & 1) == 0)
    if ((EndingIs(x19, "o", &var_18) & 1) != 0)
        x19_1 = 4
    else
        x19_1 = 2
else
    x19_1 = 3

XString::~XString()
return zx.q(x19_1)
