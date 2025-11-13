// 函数: sub_1101900
// 地址: 0x1101900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int64_t x9_1 = arg1:8.q & 0x7fffffffffffffff
int64_t x8_1 = arg2:8.q & 0x7fffffffffffffff
int32_t x9_3

if (x9_1 == 0x7fff000000000000)
    x9_3 = arg1.q != 0 ? 1 : 0
else
    x9_3 = x9_1 u> 0x7fff000000000000 ? 1 : 0

int32_t x8_3

if (x8_1 == 0x7fff000000000000)
    x8_3 = arg2.q != 0 ? 1 : 0
else
    x8_3 = x8_1 u> 0x7fff000000000000 ? 1 : 0

return zx.q(x9_3) | zx.q(x8_3)
