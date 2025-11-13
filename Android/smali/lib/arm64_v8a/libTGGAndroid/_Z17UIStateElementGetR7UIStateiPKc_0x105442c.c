// 函数: _Z17UIStateElementGetR7UIStateiPKc
// 地址: 0x105442c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + (sx.q(arg2) << 2) + 0x48)

if (x8 != 0)
    return *gUISystem + zx.q(x8.w) * 0x220

uint64_t x24_1 = zx.q(*(gUISystem + 0x10))
int32_t x8_3
int64_t x25_1

if (x24_1.d != *(gUISystem + 8))
    x25_1 = *gUISystem
    x8_3 = *(x25_1 + x24_1 * 0x220 + 0x218)
else
    x25_1 = *gUISystem
    x8_3 = x24_1.d + 1
    *(gUISystem + 8) = x8_3

*(gUISystem + 0x10) = x8_3
void* result = x25_1 + x24_1 * 0x220
memset(result, 0, 0x218)
XString::XString()
UITextBox::UITextBox()
void* x9_1 = x25_1 + x24_1 * 0x220
*(x9_1 + 0x218) = x24_1.d | *(gUISystem + 0x18) << 0x10
int32_t x8_7 = *(gUISystem + 0x18)
int32_t x8_8

if (x8_7 == 0xffff)
    x8_8 = 1
else
    x8_8 = x8_7 + 1

*(gUISystem + 0x14) += 1
*(gUISystem + 0x18) = x8_8
*(x9_1 + 8) = arg3
*(arg1 + (sx.q(arg2) << 2) + 0x48) = *(result + 0x218)
return result
