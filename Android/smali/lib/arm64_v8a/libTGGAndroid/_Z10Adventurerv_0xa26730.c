// 函数: _Z10Adventurerv
// 地址: 0xa26730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = 0
int32_t var_cb0 = 0
int32_t i_2 = RevealDeckOne(0x3ee, 0x7af05c)
void var_1930
void var_ca8

if (i_2 != 0)
    int32_t i_1 = i_2
    int32_t i
    
    do
        if ((CardIs(zx.q(i_1), 2) & 1) == 0)
            operator+=(&var_1930, zx.q(i_1))
        else
            operator+=(&var_ca8, zx.q(i_1))
            
            if (var_28 == 2)
                break
        
        i = RevealDeckOne(0x3ee, 0x7af05c)
        i_1 = i
    while (i != 0)

MoveCardsTo(&var_ca8, 0x3ee, 0x3ea, 3, 0, 0, 0xb)
return DiscardCards(&var_1930, 0x3ee, 0xb, 7, 0)
