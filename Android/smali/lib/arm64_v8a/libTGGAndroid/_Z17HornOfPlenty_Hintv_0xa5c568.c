// 函数: _Z17HornOfPlenty_Hintv
// 地址: 0xa5c568
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhere(0x3e9)
int32_t var_38
int64_t x8 = sx.q(var_38)
int32_t x19

if (x8.d == 0)
    x19 = 0
else
    x19 = 0
    void var_cb8
    void* i = &var_cb8
    
    do
        int32_t j = CardWhat(zx.q(*i))
        int32_t var_1938[0xde]
        uint64_t x8_1
        
        if (x19 s<= 0)
            x8_1 = sx.q(x19)
        label_a5c5b8:
            x19 += 1
            var_1938[x8_1] = j
        else
            x8_1 = zx.q(x19)
            int32_t (* x9_1)[0xde] = &var_1938
            uint64_t x10_1 = x8_1
            
            while (*x9_1 != j)
                uint64_t temp0_1 = x10_1
                x10_1 -= 1
                x9_1 = &(*x9_1)[1]
                
                if (temp0_1 == 1)
                    goto label_a5c5b8
        i += 4
    while (i != &var_cb8 + (x8 << 2))

CardsWhereWhat(0x3e9, 0x709)
int32_t var_1940

if (var_1940 == 0)
    return zx.q(x19 + 1)

return zx.q(x19)
