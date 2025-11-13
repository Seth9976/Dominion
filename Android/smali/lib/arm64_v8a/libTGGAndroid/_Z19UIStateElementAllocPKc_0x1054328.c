// 函数: _Z19UIStateElementAllocPKc
// 地址: 0x1054328
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = zx.q(*(gUISystem + 0x10))
int32_t x8_1
int64_t x24

if (x23.d != *(gUISystem + 8))
    x24 = *gUISystem
    x8_1 = *(x24 + x23 * 0x220 + 0x218)
else
    x24 = *gUISystem
    x8_1 = x23.d + 1
    *(gUISystem + 8) = x8_1

*(gUISystem + 0x10) = x8_1
int64_t result = x24 + x23 * 0x220
memset(result, 0, 0x218)
XString::XString()
UITextBox::UITextBox()
void* x9 = x24 + x23 * 0x220
*(x9 + 0x218) = x23.d | *(gUISystem + 0x18) << 0x10
int32_t x8_5 = *(gUISystem + 0x18)
int32_t x8_6

if (x8_5 == 0xffff)
    x8_6 = 1
else
    x8_6 = x8_5 + 1

*(gUISystem + 0x14) += 1
*(gUISystem + 0x18) = x8_6
*(x9 + 8) = arg1
return result
