// 函数: _Z5Golemv
// 地址: 0xa16274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_ca8
memset(&var_ca8, 0, 0xc84)
void var_1930
memset(&var_1930, 0, 0xc84)
int32_t i_3 = RevealDeckOne(0x3ee, 0x7ad73c)
int32_t i_1

if (i_3 != 0)
    int32_t i_2 = i_3
    int32_t i
    
    do
        int32_t x0_4 = CardIs(zx.q(i_2), 0x50a)
        int32_t x0_6
        
        if ((x0_4 & 1) == 0)
            x0_6 = CardIs(zx.q(i_2), 4)
        
        if ((x0_4 & 1) != 0 || (x0_6 & 1) == 0)
            operator+=(&var_1930, zx.q(i_2))
        else
            operator+=(&var_ca8, zx.q(i_2))
            
            if (i_1 == 2)
                break
        
        i = RevealDeckOne(0x3ee, 0x7ad73c)
        i_2 = i
    while (i != 0)

PauseUI(true)
int64_t result = DiscardCards(&var_1930, 0x3ee, 0xb, 7, 0)

if (i_1 s>= 1)
    do
        int128_t var_1970
        __builtin_memset(&var_1970, 0, 0x30)
        var_1970.d = 0x43
        int128_t var_1960_1
        var_1960_1:0xc.d = 0
        int128_t var_1950_1
        var_1950_1:8.q = 0
        int64_t var_1940_1 = 0
        int64_t x0_10 = ChooseCard(&var_ca8, 1, &var_1970, 0xb, 1)
        PlayCard(x0_10, 0x10)
        result = operator-=(&var_ca8, zx.q(x0_10.d))
    while (i_1 s> 0)

return result
