// 函数: _Z18Territory_VPBannerR7DomGame9PlayerWhoRiS2_S2_
// 地址: 0xc00510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_1940[0x240]
void var_cc0
int64_t result = CountCardTypes(arg1, arg2, &var_cc0, &var_1940)
int32_t x21

if (result.d s< 1)
    x21 = 0
else
    x21 = 0
    uint64_t i_1 = zx.q(result.d)
    void* x23_1 = &var_cc0
    uint64_t i
    
    do
        uint64_t x1 = zx.q(*x23_1)
        
        if (x1.d != 0)
            result = CardIsFast(arg1, x1, 8)
            x21 += result.d & 1
        
        i = i_1
        i_1 -= 1
        x23_1 += 4
    while (i != 1)

*arg3 = x21
return result
