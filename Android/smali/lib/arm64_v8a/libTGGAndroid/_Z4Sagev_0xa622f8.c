// 函数: _Z4Sagev
// 地址: 0xa622f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
void var_ca8
memset(&var_ca8, 0, 0xc84)
int32_t i_2 = RevealDeckOne(0x3ee, 0x7e2790)

if (i_2 != 0)
    int32_t i_1 = i_2
    int32_t i
    
    do
        if ((CostAtLeast(zx.q(i_1), 3) & 1) != 0)
            MoveCardTo(zx.q(i_1), 0x3ee, 0x3ea, 3, 0, 0xb, 0)
            break
        
        operator+=(&var_ca8, zx.q(i_1))
        i = RevealDeckOne(0x3ee, 0x7e2790)
        i_1 = i
    while (i != 0)

return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
