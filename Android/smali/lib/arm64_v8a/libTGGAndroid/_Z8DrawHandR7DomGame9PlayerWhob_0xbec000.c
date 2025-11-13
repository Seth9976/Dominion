// 函数: _Z8DrawHandR7DomGame9PlayerWhob
// 地址: 0xbec000
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + muls.dp.d(arg2.d, 0x5a30) + 0x18200)
int32_t x20 = arg2.d
int32_t var_d20
int128_t var_cf0

if (CountOngoing(arg1, arg2, 0x1b, 0, 0) s< 1)
    CollectOngoing(arg1, zx.q(x20), 0x2b, 0)
    int32_t var_d18_2 = 0xc
    var_d20 = 0
    DrawCardsTo(arg1, zx.q(x20), zx.q(x22 - SumOngoingParam(arg1, &var_cf0) + 5), 0x3ea, 0, 0, 0, 
        &var_cf0)
else
    int32_t var_d18 = 0xc
    var_d20 = 0
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    v0_1, v1_1, v2_1, v3_1 = DrawCardsTo(arg1, zx.q(x20), zx.q(x22 + 3), 0x3ea, 0, 0, 0, &var_cf0)
    int32_t x8_1 = *(arg1 + 0x19c0)
    
    if (x8_1 s>= 1)
        int32_t x22_1 = 0
        
        do
            void* fp_1 = arg1 + muls.dp.d(x22_1, 0xb8)
            
            if (*(fp_1 + 0x3c21c) == x20)
                int64_t x9_3 = sx.q(x22_1)
                
                if (*(arg1 + x9_3 * 0xb8 + 0x3c254) == 3 && *(arg1 + x9_3 * 0xb8 + 0x3c258) == 0x1b)
                    int32_t x11_2 = *(arg1 + 0x150c)
                    
                    if (x11_2 - 3 u>= 4)
                        int32_t x8_7 = *(arg1 + x9_3 * 0xb8 + 0x3c220)
                        uint64_t x2_1
                        
                        if (x8_7 == 0xffffffff)
                            x2_1 = zx.q(x20)
                        else
                            x2_1 = zx.q(x8_7)
                        
                        int64_t var_d08_1 = 0
                        int32_t var_d10_1 = 0
                        int32_t var_d18_1 = 0
                        var_d20 = 0
                        v0_1, v1_1, v2_1, v3_1 = DomNotifyEffect(zx.q(x11_2 == 2 ? 1 : 0), 0x1c, 
                            x2_1, 0x1b, zx.q(*(arg1 + x9_3 * 0xb8 + 0x3c25c)), 0, 0, 0)
                        x8_1 = *(arg1 + 0x19c0)
                    
                    *(arg1 + 0x19c0) = x8_1 - 1
                    v1_1 = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c238)
                    v2_1 = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c208)
                    v3_1 = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c218)
                    x22_1 -= 1
                    *(fp_1 + 0x3c228) = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c228)
                    *(fp_1 + 0x3c238) = v1_1
                    *(fp_1 + 0x3c208) = v2_1
                    *(fp_1 + 0x3c218) = v3_1
                    v0_1 = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c278)
                    v3_1 = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c248)
                    v2_1 = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c258)
                    *(fp_1 + 0x3c268) = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c268)
                    *(fp_1 + 0x3c278) = v0_1
                    *(fp_1 + 0x3c248) = v3_1
                    *(fp_1 + 0x3c258) = v2_1
                    v1_1 = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c298)
                    v0_1 = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c2a8)
                    v2_1 = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c288)
                    *(fp_1 + 0x3c2b8) = *(arg1 + (sx.q(x8_1) - 1) * 0xb8 + 0x3c2b8)
                    *(fp_1 + 0x3c298) = v1_1
                    *(fp_1 + 0x3c2a8) = v0_1
                    *(fp_1 + 0x3c288) = v2_1
                    x8_1 = *(arg1 + 0x19c0)
            
            x22_1 += 1
        while (x22_1 s< x8_1)

__builtin_memset(&var_cf0, 0, 0x48)
int32_t var_64 = 0xe
var_d20.q = 0
int64_t result = TriggerEvents(arg1, zx.q(x20), &var_64, 1, &var_cf0, 0, nullptr, 0)
*(arg1 + sx.q(x20) * 0x5a30 + 0x181fc) = 0
return result
