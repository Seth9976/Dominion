// 函数: _Z13TextboxActiveR14UIStateElementRK9UIElement
// 地址: 0x1059ef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x1d0) = *(arg2 + 0xe8)
*(arg1 + 0x1e4) = *(arg2 + 0xf0)
int32_t x8_2 = *(arg2 + 0xf4)
*(arg1 + 0x1f8) = -0x20294700878da0
*(arg1 + 0x1f4) = x8_2
*(arg1 + 0x200) = *(arg2 + 0x114)
*(arg1 + 0x20c) = *(arg2 + 0xfc)
UIStateElementText(arg1, arg2)
int64_t result = XString::operator=(arg1 + 0x190)

if (zx.d(*(arg1 + 0x188)) == 0)
    result = UITextBox::SelectAll()

*(arg1 + 0x188) = 1
return result
