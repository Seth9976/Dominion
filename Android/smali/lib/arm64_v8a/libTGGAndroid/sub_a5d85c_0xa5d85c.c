// 函数: sub_a5d85c
// 地址: 0xa5d85c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_ca8
memset(&var_ca8, 0, 0xc84)
int32_t x0_1 = RevealDeckOne(0x3ee, 0x7e1bb8)

if (x0_1 != 0)
    int32_t x19_1 = x0_1
    
    while (true)
        if ((CardIs(zx.q(x19_1), 0x10) & 1) == 0 && (CardIs(zx.q(x19_1), 8) & 1) == 0)
            operator+=(&var_ca8, zx.q(x19_1))
            int32_t x0_7 = RevealDeckOne(0x3ee, 0x7e1bb8)
            x19_1 = x0_7
            
            if (x0_7 == 0)
                break
            
            continue
        
        PauseUI(true)
        MoveToTopDeck(zx.q(x19_1), 0x3ee, 0xb)
        break

int32_t var_28

if (var_28 != 0)
    PauseUI(true)

return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)
