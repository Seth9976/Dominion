// 函数: _Z13CreditsUpdate9UI2Handle
// 地址: 0x9c893c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, CreditsClick)
*(*gAppInterface + 0x20)
char var_18
XString::XString(&var_18)
UI2SetText(zx.q(x19), &data_11ceb40, &var_18, 0xffffffff)
XString::~XString()
return UI2SetState(zx.q(x19), sx.q(*gCredits) * 0x18 + &data_11d04c0, 0xffffffff, 0)
