// 函数: _ZN9UITextBox24ProcessKeyboardSelectionEii
// 地址: 0x105c884
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1
int32_t entry_x2

if (((entry_x2 | arg2) & 0x80000000) != 0)
    *(x19 + 0x10) = *(x19 + 8)
    return 1

int32_t x20 = entry_x2
int32_t x21 = arg2

if (XString::Length() s<= x21)
    x21 = XString::Length()

*(x19 + 0x10) = x21

if (XString::Length() s<= x20)
    x20 = XString::Length()

*(x19 + 8) = x20
return 1
