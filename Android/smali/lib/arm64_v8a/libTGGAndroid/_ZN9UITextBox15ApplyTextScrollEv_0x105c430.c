// 函数: _ZN9UITextBox15ApplyTextScrollEv
// 地址: 0x105c430
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = XString::operator char const*()
void* entry_x0
XAsset* x8 = *(entry_x0 + 0x48)
int64_t x0_2
float v0_1

if (x8 == 0)
    x0_2, v0_1 = FontStringWidth(*(entry_x0 + 0x40), x0, *(entry_x0 + 0x5c), *(entry_x0 + 0x60))
else
    x0_2, v0_1 =
        TTFontStringWidth(x8, x0, *(entry_x0 + 0x50), *(entry_x0 + 0x5c), *(entry_x0 + 0x60))

if (v0_1 * *(entry_x0 + 0x58) f<= *(entry_x0 + 0x1c))
    *(entry_x0 + 0x2c) = *V20
    return x0_2

float v0_2 = UITextBox::GetCharacterX(entry_x0.d)
float v1_2 = *(entry_x0 + 0x14)

if (not(v0_2 <= v1_2))
    *(entry_x0 + 0x2c) = *(entry_x0 + 0x2c) - (v0_2 - v1_2)

int64_t x0_6
float v0_3
float v2_4
x0_6, v0_3, v2_4 = UITextBox::CaretExtents()
float v1_3 = *(entry_x0 + 0x14)

if (v0_3 >= v1_3)
    v0_3 = v1_3 + *(entry_x0 + 0x1c)
    
    if (not(v2_4 <= v0_3))
        *(entry_x0 + 0x2c) = v0_3 - v2_4 + *(entry_x0 + 0x2c)
else
    *(entry_x0 + 0x2c) = *(entry_x0 + 0x2c) - (v0_3 - v1_3)

return x0_6
