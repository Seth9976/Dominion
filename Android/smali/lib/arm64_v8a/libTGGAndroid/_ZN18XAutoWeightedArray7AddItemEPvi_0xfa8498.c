// 函数: _ZN18XAutoWeightedArray7AddItemEPvi
// 地址: 0xfa8498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + (sx.q(*(arg1 + 0x800)) << 4)) = arg2
int64_t x8_1 = sx.q(*(arg1 + 0x800))
int32_t entry_x2
*(arg1 + (x8_1 << 4) + 8) = entry_x2
*(arg1 + 0x800) = x8_1.d + 1
