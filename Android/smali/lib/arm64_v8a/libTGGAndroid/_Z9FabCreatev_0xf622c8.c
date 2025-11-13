// 函数: _Z9FabCreatev
// 地址: 0xf622c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(*(gFabs + 0x10))
int64_t x8_1
int32_t x9

if (x21.d != *(gFabs + 8))
    x8_1 = *gFabs
    x9 = *(x8_1 + x21 * 0x4e8 + 0x4e0)
else
    x8_1 = *gFabs
    x9 = x21.d + 1
    *(gFabs + 8) = x9

*(gFabs + 0x10) = x9
void* x19 = x8_1 + x21 * 0x4e8
memset(x19, 0, 0x4e0)
*(x19 + 0x4e0) = x21.d | *(gFabs + 0x18) << 0x10
int32_t x8_4 = *(gFabs + 0x18)
int32_t x8_5

if (x8_4 == 0xffff)
    x8_5 = 1
else
    x8_5 = x8_4 + 1

*(gFabs + 0x14) += 1
*(gFabs + 0x18) = x8_5
return zx.q(*(x19 + 0x4e0))
