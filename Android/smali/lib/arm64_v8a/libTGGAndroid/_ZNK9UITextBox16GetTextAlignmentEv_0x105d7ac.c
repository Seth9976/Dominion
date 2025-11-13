// 函数: _ZNK9UITextBox16GetTextAlignmentEv
// 地址: 0x105d7ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = XString::operator char const*()
void* entry_x0
XAsset* x8 = *(entry_x0 + 0x48)
float v0_1

if (x8 == 0)
    v0_1 = FontStringWidth(*(entry_x0 + 0x40), x0, *(entry_x0 + 0x5c), *(entry_x0 + 0x60))
else
    v0_1 = TTFontStringWidth(x8, x0, *(entry_x0 + 0x50), *(entry_x0 + 0x5c), *(entry_x0 + 0x60))

uint64_t result = zx.q(*(entry_x0 + 0x7c))

if (not(v0_1 * *(entry_x0 + 0x58) f<= *(entry_x0 + 0x1c)))
    if (result.d == 2)
        return 1
    
    if (result.d == 8)
        return 7
    
    if (result.d == 5)
        return 4

return result
