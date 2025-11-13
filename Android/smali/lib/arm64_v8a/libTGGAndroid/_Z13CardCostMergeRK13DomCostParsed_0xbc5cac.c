// 函数: _Z13CardCostMergeRK13DomCostParsed
// 地址: 0xbc5cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *arg1
int32_t x8

if (*(arg1 + 4) == 0)
    x8 = x8_2
else
    x8 = x8_2 | 0x10000

int32_t x8_1 = x8 | *(arg1 + 8) << 0x18

if (zx.d(*(arg1 + 0x10)) == 0)
    return zx.q(x8_1)

return zx.q(x8_1) | 0x40000
