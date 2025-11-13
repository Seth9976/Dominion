// 函数: _Z14Crypt_TakeCardv
// 地址: 0xa96394
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Trigger_AssociatedCardsList()
int32_t var_28

if (var_28 != 0)
    CardIDs var_ca8
    MoveCardsTo(&var_ca8, 0x474, 0x3ee, 5, 0, 0, 0xb)
    int128_t var_1930
    __builtin_memset(&var_1930, 0, 0x30)
    var_1930.d = 0x1c
    int128_t var_1920
    var_1920:0xc.d = 1
    int128_t var_1910
    var_1910:8.q = 0
    int64_t var_1900_1 = 0
    int64_t x0_2 = ChooseCard(&var_ca8, 0x14, &var_1930, 0xa, 0)
    MoveCardTo(x0_2, 0x3ee, 0x3ea, 3, 0, 0xb, 0)
    operator-=(&var_ca8, zx.q(x0_2.d))
    result = MoveCardsToCard(&var_ca8, 0x3ee, zx.q(ThisCard(true, nullptr)), 4, 0)
    
    if (var_28 s>= 1)
        FromList(&var_ca8)
        return StartOfNextTurn(Crypt_TakeCard, nullptr, &var_1930, 1, 2)

return result
