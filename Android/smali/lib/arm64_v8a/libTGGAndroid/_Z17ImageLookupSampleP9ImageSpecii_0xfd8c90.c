// 函数: _Z17ImageLookupSampleP9ImageSpecii
// 地址: 0xfd8c90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_3 = *(arg1 + 8)
int32_t x9_4 = *(arg1 + 0xc)
int32_t x10_1 = (x8_3 & arg2 s>> 0x1f) + arg2
int32_t x8

x8 = x10_1 s< x8_3 ? 0 : x8_3

int32_t x9_1

if (x9_4 s> arg3)
    x9_1 = arg3
else
    x9_1 = x9_4 - 1

int32_t x9_2

x9_2 = arg3 s< 0 ? 0 : x9_1

return zx.q(*(*arg1 + sx.q(x9_2 * *(arg1 + 0x10) + ((x10_1 - x8) << 2))))
