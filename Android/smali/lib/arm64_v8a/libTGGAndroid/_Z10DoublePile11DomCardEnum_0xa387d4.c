// 函数: _Z10DoublePile11DomCardEnum
// 地址: 0xa387d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int64_t x0_2 = BoardPileWhere(*(DomGetContext() + 8), zx.q(x19))
int64_t result = CountWhere(x0_2)

if (result.d s>= 1)
    int32_t i_1 = result.d
    int32_t i
    
    do
        result = CreateCard(zx.q(x19), zx.q(x0_2.d))
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
