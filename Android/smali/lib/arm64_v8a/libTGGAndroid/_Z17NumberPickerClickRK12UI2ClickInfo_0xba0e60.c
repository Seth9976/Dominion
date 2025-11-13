// 函数: _Z17NumberPickerClickRK12UI2ClickInfo
// 地址: 0xba0e60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
XString::XString(&var_28)
int32_t x0_2 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_2 & 1) != 0)
    *(gDomClient + 0x20578) += 1

XString::XString(&var_28)
int32_t x0_5 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    *(gDomClient + 0x20578) -= 1

XString::XString(&var_28)
int32_t x0_8 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_8 & 1) != 0)
    *(gDomClient + 0x20584) ^= 1

return 0
