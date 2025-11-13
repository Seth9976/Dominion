// 函数: _Z5Ghostv
// 地址: 0xa97480
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = 0
int32_t i_2 = RevealDeckOne(0x3ee, 0x7e71a4)
int32_t i_1 = i_2
void var_ca8

if (i_2 != 0)
    int32_t i
    
    do
        if ((CardIs(zx.q(i_1), 4) & 1) != 0)
            break
        
        operator+=(&var_ca8, zx.q(i_1))
        i = RevealDeckOne(0x3ee, 0x7e71a4)
        i_1 = i
    while (i != 0)

PauseUI(true)
int64_t result = DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)

if (i_1 == 0)
    return result

MoveCardToCard(zx.q(i_1), 0x3ee, zx.q(ThisCard(true, nullptr)), 0, 0, 0)
FromSingle(zx.q(i_1))
void var_1930
return StartOfNextTurn(sub_a9fd70, nullptr, &var_1930, 1, 2)
