// 函数: _ZNK9UITextBox11StringWidthEPKc
// 地址: 0x105c37c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x0 = *(arg1 + 0x48)
char* entry_x1

if (x0 == 0)
    int64_t x0_3
    float v0_2
    x0_3, v0_2 = FontStringWidth(*(arg1 + 0x40), entry_x1, *(arg1 + 0x5c), *(arg1 + 0x60))
    *(arg1 + 0x58)
    return x0_3

int64_t x0_1
float v0_1
x0_1, v0_1 = TTFontStringWidth(x0, entry_x1, *(arg1 + 0x50), *(arg1 + 0x5c), *(arg1 + 0x60))
*(arg1 + 0x58)
return x0_1
