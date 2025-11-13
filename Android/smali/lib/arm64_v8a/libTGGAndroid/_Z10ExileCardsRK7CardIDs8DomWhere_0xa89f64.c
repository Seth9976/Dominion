// 函数: _Z10ExileCardsRK7CardIDs8DomWhere
// 地址: 0xa89f64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg1 + 0xc80))

if (x8.d == 0)
    return 

CardIDs const& x19_1 = arg1
int64_t i_1 = x8 << 2
int64_t i

do
    int32_t x21_1 = *x19_1
    bool var_24
    MoveCardToPlayer(zx.q(x21_1), zx.q(arg2), zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, 
        &var_24, 0xc)
    
    if (zx.d(var_24) != 0)
        TriggerEvent(0x13, zx.q(x21_1), 0)
    
    i = i_1
    i_1 -= 4
    x19_1 += 4
while (i != 4)
