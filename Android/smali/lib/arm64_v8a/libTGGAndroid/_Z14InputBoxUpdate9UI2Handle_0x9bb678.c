// 函数: _Z14InputBoxUpdate9UI2Handle
// 地址: 0x9bb678
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, InputBoxClick)
UI2SetHandler(zx.q(x19), InputBoxCommit)
UI2SetState(zx.q(x19), *(gGameDlgManager + 0x1e8), 0xffffffff, 0)
XString::XString()
void var_18

if ((UI2TextboxActive(zx.q(x19), &var_18) & 1) == 0)
    XString::operator=(&var_18)

if ((InputBoxValidate(XString::operator char const*()) & 1) == 0)
    UI2SetState(zx.q(x19), &data_11cef48, 0xffffffff, 0)

UI2SetText(zx.q(x19), &data_11cef60, &var_18, 0xffffffff)
return XString::~XString()
