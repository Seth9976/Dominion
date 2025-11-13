// 函数: _Z19Sewers_OnTrash_Test6CardID
// 地址: 0xabb0a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = CountHand()

if (result.d == 0)
    return result

int64_t x0 = ParentContextActiveCard()

if (x0.d == 0)
    return 1

return zx.q(CardWhat(x0) != 0xe21 ? 1 : 0)
