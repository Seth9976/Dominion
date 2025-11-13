// 函数: _Z25GameSpecific_OptionsClickRK12UI2ClickInfo
// 地址: 0xb98cf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_18
XString::XString(&var_18)
int32_t x0_2 = operator==(&var_18, *(arg1 + 8))
int64_t result = XString::~XString()

if ((x0_2 & 1) == 0)
    return result

*gSmartplayGlobals = *(GetClient() + 0x5068) != 0 ? 1 : 0
*(gSmartplayGlobals + 4) = 0
return GameDlgManagerShow(0x7e5, 5)
