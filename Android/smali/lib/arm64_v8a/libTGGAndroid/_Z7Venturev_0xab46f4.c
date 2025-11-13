// 函数: _Z7Venturev
// 地址: 0xab46f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MoneyPlus(1, 0, false)
void var_ca8
memset(&var_ca8, 0, 0xc84)
int32_t i_2 = RevealDeckOne(0x3ee, 0x7e996c)

if (i_2 != 0)
    int32_t i_1 = i_2
    int32_t i
    
    do
        if ((CardIs(zx.q(i_1), 2) & 1) != 0)
            PauseUI(true)
            DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
            return PlayCard(zx.q(i_1), 0x10)
        
        operator+=(&var_ca8, zx.q(i_1))
        i = RevealDeckOne(0x3ee, 0x7e996c)
        i_1 = i
    while (i != 0)

return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
