// 函数: _ZN9UITextBox15DeleteSelectionEv
// 地址: 0x105c168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* entry_x0
int32_t x8 = *(entry_x0 + 8)
int32_t x9 = *(entry_x0 + 0x10)
int32_t x10 = x8 - x9
int32_t x22

if (x8 - x9 s< 0)
    x22 = neg.d(x10)
else
    x22 = x10

if (x10 == 0)
    return 

int32_t x20_1

x20_1 = x8 s< x9 ? x8 : x9

XString::XString()
char var_28
XString::AppendLength(&var_28, XString::operator char const*())
int32_t x0_4 = XString::operator char const*()
XString::Length()
XString::AppendLength(&var_28, x0_4 + x20_1 + x22)
XString::operator=(entry_x0)
*(entry_x0 + 8) = x20_1
*(entry_x0 + 0x10) = x20_1
XString::~XString()
