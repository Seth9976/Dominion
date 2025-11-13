// 函数: _ZN18XAutoWeightedArray8HasItemsEv
// 地址: 0xfa84bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint64_t x8 = zx.q(*(entry_x0 + 0x800))

if (x8.d s< 1)
    return 0

if (*(entry_x0 + 8) s> 0)
    return 1

void* x9_1 = entry_x0 + 0x18
int64_t x11 = 1
int64_t x10_1
int32_t i

do
    x10_1 = x11
    
    if (x8 == x11)
        break
    
    i = *x9_1
    x9_1 += 0x10
    x11 = x10_1 + 1
while (i s< 1)
return zx.q(x10_1 u< x8 ? 1 : 0)
