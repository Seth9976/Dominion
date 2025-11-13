// 函数: _Z19CountCardTypesWhereR7DomGame9PlayerWho8DomWhereP11DomCardEnumPi
// 地址: 0xbe748c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_ce8
int32_t x0 = CardsWhere(arg1, arg2, arg3, &var_ce8)
int32_t x22 = 0
int32_t var_68 = x0

if (x0 != 0)
    void* i = &var_ce8
    
    do
        uint64_t x23_1 = zx.q(*i)
        
        if (x23_1.d u>= 0x320)
            void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_6 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
            *(*(x8_6 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_7 = *(x8_6 - 0x90)
            *(x8_7 + 0x1a2c) = *(x8_7 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t j = *(arg1 + x23_1 * 0x68 + 0x1a70)
        uint64_t x8_1
        
        if (x22 s< 1)
            x8_1 = 0
        else
            x8_1 = 0
            uint64_t x10_2 = zx.q(x22)
            
            while (*(arg4 + (x8_1 << 2)) != j)
                x8_1 += 1
                
                if (x10_2 == x8_1)
                    x8_1 = zx.q(x10_2.d)
                    goto label_be74f4
        
        if (x8_1.d == x22)
        label_be74f4:
            arg5[zx.q(x22)] = 0
            *(arg4 + (sx.q(x22) << 2)) = j
            x22 += 1
        
        i += 4
        arg5[zx.q(x8_1.d)] += 1
    while (i != &var_ce8 + (sx.q(x0) << 2))

return zx.q(x22)
