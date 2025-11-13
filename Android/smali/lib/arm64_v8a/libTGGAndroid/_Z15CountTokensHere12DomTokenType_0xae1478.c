// 函数: _Z15CountTokensHere12DomTokenType
// 地址: 0xae1478
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t* x0
uint64_t x1
x0, x1 = DomGetContext()
int32_t x8 = *x0
int32_t x20
int32_t x0_1

if (x8 == 3)
    x1 = zx.q(x0[7])
    int32_t x8_1 = x1.d u>> 4 & 3
    
    if (x8_1 == 0)
        x20 = *(AbilityGetRegistered(*(x0 + 8), x1) + 0x24)
    else if (x8_1 != 2)
        x0_1 = ThisCard(false, x1)
        x20 = CardWhat(*(DomGetContext() + 8), zx.q(x0_1))
    else
        x20 = (x1 u>> 0x12).d & 0x3fff
else if (x8 != 4)
    x0_1 = ThisCard(false, x1)
    x20 = CardWhat(*(DomGetContext() + 8), zx.q(x0_1))
else
    x20 = x0[7]
void* x0_7 = DomGetContext()
int32_t x0_9 = BoardPileSource(*(x0_7 + 8), zx.q(x20), false)
int32_t x20_2

if (x0_9 == 0)
    x20_2 = 0
else
    x20_2 = BoardPileWhere(*(x0_7 + 8), zx.q(x0_9))

bool x21_1 = true
void* x0_12 = DomGetContext()

if (x19 s> 0xe00)
    if (x19 != 0xe01 && x19 != 0x1200)
        x21_1 = false
else if (x19 != 0x601 && x19 != 0xc00)
    x21_1 = false

GameAssert(x21_1)
return CountTokensPile(*(x0_12 + 8), 0xffffffff, zx.q(x19), zx.q(x20_2)) __tailcall
