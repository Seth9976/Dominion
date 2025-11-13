// 函数: _Z12NumCardTypes6CardID
// 地址: 0xad5b48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = 0
int64_t x21 = 1
uint64_t i

do
    int32_t x8_1 = CardIs(*(DomGetContext() + 8), zx.q(arg1), x21) & 1
    i = x21 u>> 0x2e
    x21 <<= 1
    x19 += x8_1
while (i == 0)
return zx.q(x19)
