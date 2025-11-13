// 函数: _Z13CardnameKnown8Language11DomCardEnumi11ArticleTypeb15GrammaticalCase
// 地址: 0xc0a690
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
CardnameArticleCount(arg1, arg3, zx.q(x20), arg4, zx.q(arg4.d))
char* x0_4
void* const x2_1
XString* entry_x8

if ((arg5.d & 1) == 0)
    StringReplace(XString::operator char const*(), "[color_start]", CardnameColor(zx.q(x20)))
    XString::operator=(entry_x8)
    XString::~XString()
    x0_4 = XString::operator char const*()
    x2_1 = "{log_white}"
else
    StringReplace(XString::operator char const*(), "[color_start]", &data_793a18)
    XString::operator=(entry_x8)
    XString::~XString()
    x0_4 = XString::operator char const*()
    x2_1 = &data_793a18

StringReplace(x0_4, "[color_end]", x2_1)
XString::operator=(entry_x8)
return XString::~XString()
