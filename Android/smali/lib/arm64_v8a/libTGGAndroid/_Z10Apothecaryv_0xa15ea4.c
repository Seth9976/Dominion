// 函数: _Z10Apothecaryv
// 地址: 0xa15ea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
RevealDeck(4, 0x3ee, 0x7ad73c)
void var_1940
memset(&var_1940, 0, 0xc84)
int32_t var_38
int64_t x8 = sx.q(var_38)

if (x8.d != 0)
    void var_cb8
    void* x20_1 = &var_cb8
    int64_t x21_1 = x8 << 2
    
    while (true)
        int32_t x19_1 = *x20_1
        
        if ((CardIs(zx.q(x19_1), 0x104) & 1) == 0 && (CardIs(zx.q(x19_1), 0x500) & 1) == 0)
            operator+=(&var_1940, zx.q(x19_1))
            int64_t temp1_1 = x21_1
            x21_1 -= 4
            x20_1 += 4
            
            if (temp1_1 == 4)
                break
            
            continue
        
        MoveToHand(zx.q(x19_1), 0x3ee)
        int64_t temp0_1 = x21_1
        x21_1 -= 4
        x20_1 += 4
        
        if (temp0_1 == 4)
            break

return ReturnToDeckAnyOrder(&var_1940, 0x3ee, 0x18)
