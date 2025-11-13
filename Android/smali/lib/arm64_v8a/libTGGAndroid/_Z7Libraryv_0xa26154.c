// 函数: _Z7Libraryv
// 地址: 0xa26154
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_ca8
memset(&var_ca8, 0, 0xc84)

if (CountHand() s<= 6)
    int32_t i
    
    do
        if ((HasToken(0xb08) & 1) != 0)
            ReturnToken(0xb08)
        
        int64_t x0_4 = TopDeckCard()
        
        if (x0_4.d == 0)
            break
        
        if ((CardIs(x0_4, 4) & 1) == 0)
            if (DrawCardTo(0x3ea, 0, 0xc) == 0)
                break
        else
            int64_t x0_6 = DrawCardTo(0x3ee, 0, 5)
            
            if (x0_6.d == 0)
                break
            
            int32_t x19_1 = x0_6.d
            int128_t var_ce0
            __builtin_memset(&var_ce0, 0, 0x30)
            var_ce0.d = 0x24
            int128_t var_cd0_1
            var_cd0_1:0xc.d = x0_6.d
            int128_t var_cc0_1
            var_cc0_1:8.q = 0
            int64_t var_cb0_1 = 0
            
            if (ChooseWhere(x0_6, 0x3ea, 0x452, &var_ce0, 0) != 0x3ea)
                MoveCardTo(zx.q(x19_1), 0x3ee, 0x452, 0, 0, 0xb, 1)
                operator+=(&var_ca8, zx.q(x19_1))
            else
                MoveCardTo(zx.q(x19_1), 0x3ee, 0x3ea, 3, 0, 0xb, 1)
        
        i = CountHand()
    while (i s< 7)

return DiscardCards(&var_ca8, 0x452, 0xb, 0, 0)
