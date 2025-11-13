// 函数: _Z14Menagerie_Hintv
// 地址: 0xa5bdb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19

if (CardWhere(ThisCard(false, nullptr)) == 0x3ea)
    x19 = 2
else
    x19 = 1

if (CountWhereWhat(0x3ea, 0x702, 0xffffffff) s> x19)
    return 0

CardsHand()
int32_t var_38

if (var_38 s>= 1)
    int64_t i = 0
    int32_t x21_1 = 0
    
    do
        int32_t var_cb8[0x29a]
        int32_t j = CardWhat(zx.q(var_cb8[i]))
        
        if (j != 0x702)
            int32_t var_1938[0x1ba]
            
            if (x21_1 s>= 1)
                if (var_1938[0] == j)
                    return 0
                
                uint64_t x8_5 = zx.q(x21_1)
                int64_t x10_1 = 1
                int64_t x9_1
                
                do
                    x9_1 = x10_1
                    
                    if (x8_5 == x10_1)
                        break
                    
                    x10_1 = x9_1 + 1
                while (var_1938[x9_1] != j)
                
                if (x9_1 u< x8_5)
                    return 0
            
            var_1938[sx.q(x21_1)] = j
            x21_1 += 1
        
        i += 1
    while (i s< sx.q(var_38))

CardsWhere(0x3eb)
CardsWhere(0x3ec)
int32_t var_25c8
int32_t var_1940

if (var_1940 != 0 || var_25c8 != 0)
    return 1

return 0
