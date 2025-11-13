// 函数: _Z19CardnameTranslation8Language11DomCardEnum
// 地址: 0xc0a140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0_2 = DomDefGet(zx.q(arg2), zx.q(DomCurrentGameVersion()))
int64_t x8 = *(x0_2 + 0xc8)

if (x8 == 0x20000000000000 || x8 == 0x10000000000000)
    return LookupTranslationSafe(*(x0_2 + 0x58), zx.q(x19)) __tailcall

*(x0_2 + 0x58)
XFormatString("dom_card_title_%s")
int64_t result = LookupTranslationSafe(XString::operator char const*(), zx.q(x19))
XString::~XString()
return result
