// 函数: _ZNK9UITextBox12CaretExtentsEv
// 地址: 0x105c508
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
XAsset* x0 = *(entry_x0 + 0x48)
int64_t v8
v8.d = *(entry_x0 + 0x58)
int64_t v9
int64_t v10

if (x0 == 0)
    float* x0_3 = FontGetDef(*(entry_x0 + 0x40))
    int32_t v2_1 = *(entry_x0 + 0x58)
    v9.d = v2_1 f* float.s(*x0_3)
    v10.d = v2_1 f* float.s(x0_3[1])
else
    v9.d = TTFontAscent(x0, *(entry_x0 + 0x50)) f* *(entry_x0 + 0x58)
    v10.d = TTFontGetHeight(*(entry_x0 + 0x48), *(entry_x0 + 0x50)) f* *(entry_x0 + 0x58)
*(entry_x0 + 8)
v8.d = v8.d f* fconvert.s(3f)
int64_t result
float v0_4
result, v0_4 = UITextBox::GetCharacterX(entry_x0.d)
*(entry_x0 + 0x18)
(*(entry_x0 + 0x30) + *(entry_x0 + 0x28)) * *(entry_x0 + 0x58)
return result
