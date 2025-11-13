// 函数: _Z19CountCardTypesWhere8DomWhereP11DomCardEnumPi
// 地址: 0xae163c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(arg1, 0, 0)
int32_t var_58
int64_t x8 = sx.q(var_58)
int32_t x21

if (x8.d == 0)
    x21 = 0
else
    x21 = 0
    void var_cd8
    void* i = &var_cd8
    
    do
        int32_t j = CardWhat(*(DomGetContext() + 8), zx.q(*i))
        uint64_t x25_1
        
        if (x21 s< 1)
            x25_1 = 0
        else
            x25_1 = 0
            uint64_t x8_4 = zx.q(x21)
            
            while (*(arg2 + (x25_1 << 2)) != j)
                x25_1 += 1
                
                if (x8_4 == x25_1)
                    x25_1 = zx.q(x8_4.d)
                    goto label_ae168c
        
        if (x25_1.d == x21)
        label_ae168c:
            GameAssert(true)
            arg3[zx.q(x21)] = 0
            *(arg2 + (sx.q(x21) << 2)) = j
            x21 += 1
        
        i += 4
        arg3[zx.q(x25_1.d)] += 1
    while (i != &var_cd8 + (x8 << 2))

return zx.q(x21)
