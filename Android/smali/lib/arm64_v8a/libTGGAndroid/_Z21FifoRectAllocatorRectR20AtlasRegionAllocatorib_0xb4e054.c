// 函数: _Z21FifoRectAllocatorRectR20AtlasRegionAllocatorib
// 地址: 0xb4e054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t var_40
uint64_t var_38

if ((arg3.d & 1) == 0)
    int32_t x8_4 = *(arg1 + 0x1c)
    int32_t x20_1 = *(arg1 + 0x20)
    int32_t x21_1 = *(arg1 + 0x24)
    int64_t x0_3 = RectTopLeft(arg1 + 8)
    int32_t x9_4 = x0_3.d + x20_1 * arg2 s/ x8_4
    int32_t x8_6 = (x0_3 u>> 0x20).d + x21_1 * arg2 s% x8_4
    var_38 = zx.q(x9_4) | zx.q(x8_6) << 0x20
    var_40 = zx.q(*(arg1 + 0x20) + x9_4) | zx.q(*(arg1 + 0x24) + x8_6) << 0x20
else
    int32_t x8 = *(arg1 + 0x2c)
    int64_t x0_1 = RectBottomRight(arg1 + 8)
    int32_t x10 = *(arg1 + 0x30)
    int32_t x11 = *(arg1 + 0x34)
    int32_t x9_2 = x0_1.d - x10 * (*V2I1 + arg2 s/ x8)
    int32_t x8_3 = (x0_1 u>> 0x20).d - x11 * (*(V2I1 + 4) + arg2 s% x8)
    var_40 = zx.q(x9_2 + x10) | zx.q(x8_3 + x11) << 0x20
    var_38 = zx.q(x9_2) | zx.q(x8_3) << 0x20

return RectISet(&var_38, &var_40)
