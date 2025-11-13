// 函数: _ZNK9UITextBox17TextExceedsBoundsEv
// 地址: 0x105c3dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = XString::operator char const*()
void* entry_x0
XAsset* x8 = *(entry_x0 + 0x48)
float v0_1

if (x8 == 0)
    v0_1 = FontStringWidth(*(entry_x0 + 0x40), x0, *(entry_x0 + 0x5c), *(entry_x0 + 0x60))
else
    v0_1 = TTFontStringWidth(x8, x0, *(entry_x0 + 0x50), *(entry_x0 + 0x5c), *(entry_x0 + 0x60))

return zx.q(v0_1 * *(entry_x0 + 0x58) f> *(entry_x0 + 0x1c) ? 1 : 0)
