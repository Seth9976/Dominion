// 函数: _Z22IsCardInNeedsVillagersRK8DomYield6CardID
// 地址: 0xb21fc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x28))

if (x8.d s< 1)
    return 0

int32_t* x9 = *(arg1 + 0x18)

if (*x9 == arg2)
    return 1

int64_t x11 = 1
int64_t x10_1

do
    x10_1 = x11
    
    if (x8 == x11)
        break
    
    x11 = x10_1 + 1
while (x9[x10_1] != arg2)

return zx.q(x10_1 u< x8 ? 1 : 0)
