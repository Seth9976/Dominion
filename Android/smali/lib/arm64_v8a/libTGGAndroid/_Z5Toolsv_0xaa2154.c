// 函数: _Z5Toolsv
// 地址: 0xaa2154
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereAnyone(0x3e9, 0, 0)
CardsSupplyTops(4, 0xffffffff)
int32_t var_58
int64_t x8 = sx.q(var_58)
int32_t var_1968 = 0
int128_t var_2620
int32_t var_25e8[0x166]

if (x8.d != 0)
    int32_t x21_1 = 0
    void var_cd8
    void* i = &var_cd8
    
    do
        int32_t x0_2 = CardWhat(zx.q(*i))
        int32_t var_ce0
        int64_t x8_1 = sx.q(var_ce0)
        int32_t x10_1
        
        if (x8_1.d == 0)
        label_aa21c4:
            x10_1 = 1
        else
            void var_1960
            void* x25_1 = &var_1960
            int64_t x26_1 = x8_1 << 2
            
            while (true)
                int32_t j = *x25_1
                
                if (x0_2 == CardWhat(zx.q(j)))
                    int64_t x8_2 = sx.q(var_1968)
                    int64_t x9_1 = x8_2
                    
                    if (x8_2.d s<= 0)
                    label_aa2250:
                        x10_1 = 0
                        var_1968 = x8_2.d + 1
                        var_25e8[x9_1] = j
                    else
                        x9_1 = x8_2 & 0xffffffff
                        int32_t (* x10_2)[0x166] = &var_25e8
                        int64_t x11_1 = x9_1
                        
                        while (*x10_2 != j)
                            int64_t temp1_1 = x11_1
                            x11_1 -= 1
                            x10_2 = &(*x10_2)[1]
                            
                            if (temp1_1 == 1)
                                goto label_aa2250
                        
                        x10_1 = 0
                    
                    break
                
                int64_t temp0_1 = x26_1
                x26_1 -= 4
                x25_1 += 4
                
                if (temp0_1 == 4)
                    goto label_aa21c4
        
        i += 4
        x21_1 |= x10_1
    while (i != &var_cd8 + (x8 << 2))
    
    if ((x21_1 & 1) != 0)
        __builtin_memset(&var_2620, 0, 0x30)
        var_2620.d = 0x10d
        int128_t var_2610
        var_2610:0xc.d = 0
        int128_t var_2600
        var_2600:8.q = 0
        int64_t var_25f0 = 0
        return MayGainOneOf(&var_25e8, &var_2620, 0x476)

__builtin_memset(&var_2620, 0, 0x30)
var_2620.d = 0x10e
int128_t var_2610_1
var_2610_1:0xc.d = 0
int128_t var_2600_1
var_2600_1:8.q = 0
int64_t var_25f0_1 = 0
return GainOneOf(&var_25e8, &var_2620, 0x476, 0)
