// 函数: _Z22TriumphalArch_VPBannerR7DomGame9PlayerWhoRiS2_S2_
// 地址: 0xc003fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg4 = 0
int32_t var_1960[0x240]
void var_ce0
int64_t result = CountCardTypes(arg1, arg2, &var_ce0, &var_1960)
int32_t x23

if (result.d s< 1)
    x23 = 0
else
    int32_t x27_1 = 0
    int32_t x28_1 = 0
    x23 = 0
    uint64_t i_1 = zx.q(result.d)
    int32_t (* x25_1)[0x240] = &var_1960
    void* x26_1 = &var_ce0
    uint64_t i
    
    do
        int32_t x22_1 = *x26_1
        int32_t x8_1
        
        if (x22_1 == 0 || x22_1 == 0x101)
            x22_1 = x28_1
            x8_1 = x27_1
        else
            result = CardIsFast(arg1, zx.q(x22_1), 4)
            
            if ((result.d & 1) == 0)
                x22_1 = x28_1
                x8_1 = x27_1
            else
                x8_1 = *x25_1
                
                if (x8_1 s>= x27_1)
                    *arg4 = x28_1
                    x23 = x27_1
                else
                    if (x8_1 s>= x23)
                        x23 = x8_1
                        *arg4 = x22_1
                    
                    x22_1 = x28_1
                    x8_1 = x27_1
        
        x25_1 = &(*x25_1)[1]
        i = i_1
        i_1 -= 1
        x26_1 += 4
        x27_1 = x8_1
        x28_1 = x22_1
    while (i != 1)

*arg3 = x23
return result
