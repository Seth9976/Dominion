// 函数: _Z12HuntingPartyv
// 地址: 0xa5c710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
RevealHandTemp()
CardsHand()
int32_t var_1938[0xde]
void var_cb8
int32_t x0_1 = ToUniqueWhats(&var_cb8, &var_1938)
void var_25c0
memset(&var_25c0, 0, 0xc84)
int32_t x0_3 = RevealDeckOne(0x3ee, 0x7e1bb8)

if (x0_3 != 0)
    int32_t x19_1 = x0_3
    
    if (x0_1 s< 1)
        CardWhat(zx.q(x19_1))
    else
        uint64_t x21_1 = zx.q(x0_1)
        
        while (true)
            int32_t i = CardWhat(zx.q(x19_1))
            
            if (var_1938[0] != i)
                int64_t x9_1 = 1
                int64_t x8_2
                
                do
                    x8_2 = x9_1
                    
                    if (x21_1 == x9_1)
                        break
                    
                    x9_1 = x8_2 + 1
                while (var_1938[x8_2] != i)
                
                if (x8_2 u>= x21_1)
                    break
            
            operator+=(&var_25c0, zx.q(x19_1))
            int32_t x0_5 = RevealDeckOne(0x3ee, 0x7e1bb8)
            x19_1 = x0_5
            
            if (x0_5 == 0)
                return DiscardCards(&var_25c0, 0x3ee, 0xb, 7, 0)
    
    MoveToHand(zx.q(x19_1), 0x3ee)

return DiscardCards(&var_25c0, 0x3ee, 0xb, 7, 0)
