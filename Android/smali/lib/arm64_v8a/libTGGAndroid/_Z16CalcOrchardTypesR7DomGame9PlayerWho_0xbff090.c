// 函数: _Z16CalcOrchardTypesR7DomGame9PlayerWho
// 地址: 0xbff090
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_1940[0x240]
void var_cc0
int32_t i_2 = CountCardTypes(arg1, arg2, &var_cc0, &var_1940)
int32_t x20

if (i_2 s< 1)
    x20 = 0
else
    x20 = 0
    uint64_t i_1 = zx.q(i_2)
    void* x22_1 = &var_cc0
    int32_t (* x23_1)[0x240] = &var_1940
    uint64_t i
    
    do
        if (*x23_1 s>= 3)
            uint64_t x1 = zx.q(*x22_1)
            
            if (x1.d != 0 && x1.d != 0x101)
                x20 += CardIsFast(arg1, x1, 4) & 1
        
        x22_1 += 4
        i = i_1
        i_1 -= 1
        x23_1 = &(*x23_1)[1]
    while (i != 1)

return zx.q(x20)
