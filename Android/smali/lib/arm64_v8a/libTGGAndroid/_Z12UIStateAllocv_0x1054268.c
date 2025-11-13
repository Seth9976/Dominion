// 函数: _Z12UIStateAllocv
// 地址: 0x1054268
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(*(gUISystem + 0x38))
int64_t x8_1
int32_t x9

if (x21.d != *(gUISystem + 0x30))
    x8_1 = *(gUISystem + 0x28)
    x9 = *(x8_1 + x21 * 0x458 + 0x450)
else
    x8_1 = *(gUISystem + 0x28)
    x9 = x21.d + 1
    *(gUISystem + 0x30) = x9

*(gUISystem + 0x38) = x9
void* result = x8_1 + x21 * 0x458
memset(result, 0, 0x450)
*(result + 0x450) = x21.d | *(gUISystem + 0x40) << 0x10
int32_t x8_4 = *(gUISystem + 0x40)
int32_t x8_5

if (x8_4 == 0xffff)
    x8_5 = 1
else
    x8_5 = x8_4 + 1

*(gUISystem + 0x3c) += 1
*(gUISystem + 0x40) = x8_5
return result
