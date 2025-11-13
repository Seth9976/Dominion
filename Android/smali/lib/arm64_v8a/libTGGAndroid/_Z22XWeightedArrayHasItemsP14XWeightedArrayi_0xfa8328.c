// 函数: _Z22XWeightedArrayHasItemsP14XWeightedArrayi
// 地址: 0xfa8328
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

if (*(arg1 + 8) s> 0)
    return 1

uint64_t x8_1 = zx.q(arg2)
void* __offset(XWeightedArray, 0x18) x9 = arg1 + 0x18
int64_t x11 = 1
int64_t x10_1
int32_t i

do
    x10_1 = x11
    
    if (x8_1 == x11)
        break
    
    i = *x9
    x9 += 0x10
    x11 = x10_1 + 1
while (i s< 1)
return zx.q(x10_1 u< x8_1 ? 1 : 0)
