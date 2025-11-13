// 函数: _Z6Templev
// 地址: 0xa6c654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

VPChit(1, 0)
CardsHand()
void var_1920
ChooseCardsDistinct(&var_1920, 1, 3, 9, 0x96, 7)
void var_c98
Trash(&var_c98, 0x3ea)
int64_t result = GetBoardPile(0xc13, true)

if (result.d == 0)
    return result

return AddTokens(0x601, zx.q(result.d), 1, 0)
