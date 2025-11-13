// 函数: _Z8ThisWhatv
// 地址: 0xad1b0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0
uint64_t x1
x0, x1 = DomGetContext()
int32_t x8 = *x0

if (x8 == 3)
    x1 = zx.q(x0[7])
    int32_t x8_1 = x1.d u>> 4 & 3
    
    if (x8_1 == 0)
        return zx.q(*(AbilityGetRegistered(*(x0 + 8), x1) + 0x24))
    
    if (x8_1 == 2)
        return x1 u>> 0x12 & 0x3fff
else if (x8 == 4)
    return zx.q(x0[7])

int32_t x0_3 = ThisCard(false, x1)
return CardWhat(*(DomGetContext() + 8), zx.q(x0_3)) __tailcall
