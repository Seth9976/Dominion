// 函数: _Z12CardsetAllocv
// 地址: 0x9a9850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(*(gCardset + 0x10))
int64_t x8_1
int32_t x9

if (x21.d != *(gCardset + 8))
    x8_1 = *gCardset
    x9 = *(x8_1 + x21 * 0x1570 + 0x1568)
else
    x8_1 = *gCardset
    x9 = x21.d + 1
    *(gCardset + 8) = x9

*(gCardset + 0x10) = x9
void* result = x8_1 + x21 * 0x1570
memset(result, 0, 0x1568)
*(result + 0x1568) = x21.d | *(gCardset + 0x18) << 0x10
int32_t x8_4 = *(gCardset + 0x18)
int32_t x8_5

if (x8_4 == 0xffff)
    x8_5 = 1
else
    x8_5 = x8_4 + 1

*(gCardset + 0x14) += 1
*(gCardset + 0x18) = x8_5
*(result + 0x258) = 0
*(result + 0x1538) = 0xffffffff
*(result + 0x1548) = 0xffffffff
return result
