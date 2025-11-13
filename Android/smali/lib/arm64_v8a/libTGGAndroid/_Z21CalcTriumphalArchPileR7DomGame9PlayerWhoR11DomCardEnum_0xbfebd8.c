// 函数: _Z21CalcTriumphalArchPileR7DomGame9PlayerWhoR11DomCardEnum
// 地址: 0xbfebd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = 0
int32_t var_1960[0x240]
void var_ce0
int32_t i_2 = CountCardTypes(arg1, arg2, &var_ce0, &var_1960)
int32_t x21

if (i_2 s< 1)
    x21 = 0
else
    int32_t x26_1 = 0
    int32_t x27_1 = 0
    x21 = 0
    uint64_t i_1 = zx.q(i_2)
    int32_t (* x24_1)[0x240] = &var_1960
    void* x25_1 = &var_ce0
    uint64_t i
    
    do
        int32_t x22_1 = *x25_1
        int32_t x8_1
        
        if (x22_1 == 0 || x22_1 == 0x101)
            x22_1 = x27_1
            x8_1 = x26_1
        else if ((CardIsFast(arg1, zx.q(x22_1), 4) & 1) == 0)
            x22_1 = x27_1
            x8_1 = x26_1
        else
            x8_1 = *x24_1
            
            if (x8_1 s>= x26_1)
                *arg3 = x27_1
                x21 = x26_1
            else
                if (x8_1 s>= x21)
                    x21 = x8_1
                    *arg3 = x22_1
                
                x22_1 = x27_1
                x8_1 = x26_1
        
        x24_1 = &(*x24_1)[1]
        i = i_1
        i_1 -= 1
        x25_1 += 4
        x26_1 = x8_1
        x27_1 = x22_1
    while (i != 1)

return zx.q(x21)
