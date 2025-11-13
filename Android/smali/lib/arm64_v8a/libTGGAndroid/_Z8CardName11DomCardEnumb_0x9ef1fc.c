// 函数: _Z8CardName11DomCardEnumb
// 地址: 0x9ef1fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(DomDefGet(arg1, 0x17) + 0x58)
XFormatString("dom_card_title_%s")
char* x0_1 = XString::operator char const*()
int64_t x1_1

if ((arg2.d & 1) != 0)
    x1_1 = 3
else
    x1_1 = 1

DoTranslateArticle(x0_1, x1_1, 2)
return XString::~XString()
