// 函数: _Z18UIStateElementTextRK14UIStateElementRK9UIElement
// 地址: 0x1056fe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *(arg2 + 0x108)
char* x19

if (zx.d(*x8) == 0)
    x19 = nullptr
else
    x19 = x8

if (*(arg1 + 0x78) s<= *arg1)
    if (*(arg2 + 4) != 5)
        return L(*(arg2 + 0xe0), x19) __tailcall
    
    return L(*(arg2 + 0x120), x19) __tailcall

XString::operator char const*()
uint32_t x20_1 = zx.d(*(arg1 + 0x17d))
char* result = XString::operator char const*()

if (x20_1 == 0)
    return result

return L(result, x19) __tailcall
