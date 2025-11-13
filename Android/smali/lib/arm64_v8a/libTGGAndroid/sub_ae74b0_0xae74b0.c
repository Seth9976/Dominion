// 函数: sub_ae74b0
// 地址: 0xae74b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(**(arg1 + 0x10))

if (x21.d s< 1)
    return 0

int32_t* x23_1 = *(arg1 + 8)
int32_t x19_1 = *arg2

if ((CardIs(*(DomGetContext() + 8), zx.q(x19_1), zx.q(*x23_1)) & 1) != 0)
    return 1

uint64_t x22_1 = 0
int32_t x0_6

do
    if (x21 - 1 == x22_1)
        x22_1 = x21
        break
    
    x0_6 = CardIs(*(DomGetContext() + 8), zx.q(x19_1), zx.q(x23_1[1 + x22_1]))
    x22_1 += 1
while ((x0_6 & 1) == 0)
return zx.q(x22_1 u< x21 ? 1 : 0)
