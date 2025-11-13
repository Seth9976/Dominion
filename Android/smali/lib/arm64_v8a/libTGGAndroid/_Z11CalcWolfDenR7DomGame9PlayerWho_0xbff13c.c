// 函数: _Z11CalcWolfDenR7DomGame9PlayerWho
// 地址: 0xbff13c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_1910[0x4]
void var_c90
int32_t x0
int128_t v0
uint128_t v1
int128_t v2
uint128_t v3
uint128_t v4
x0, v0, v1, v2, v3, v4 = CountCardTypes(arg1, arg2, &var_c90, &var_1910)

if (x0 s< 1)
    return 0

uint64_t x8_1 = zx.q(x0)
uint64_t result
int64_t i_4

if (x0 u>= 8)
    i_4 = x8_1 & 0xfffffff8
    v0.q = 0
    v0:8.q = 0
    v1.d = 1
    v1:4.d = 1
    v1:8.d = 1
    v1:0xc.d = 1
    void var_1900
    void* x10_1 = &var_1900
    int64_t i_3 = i_4
    v2.q = 0
    v2:8.q = 0
    int64_t i
    
    do
        v3 = *(x10_1 - 0x10)
        v4 = *x10_1
        i = i_3
        i_3 -= 8
        x10_1 += 0x20
        v0 -= vceqq_u32(v3, v1)
        v2 -= vceqq_u32(v4, v1)
    while (i != 8)
    uint128_t v0_1
    v0_1.d = vaddvq_u32(v2 + v0)
    result = zx.q(v0_1.d)
    
    if (i_4 != x8_1)
        goto label_bff1d0
else
    i_4 = 0
    result = 0
label_bff1d0:
    void* x10_2 = &var_1910[i_4]
    int64_t i_2 = x8_1 - i_4
    int64_t i_1
    
    do
        int32_t x9_1 = *x10_2
        x10_2 += 4
        
        if (x9_1 == 1)
            result = zx.q(result.d + 1)
        else
            result = zx.q(result.d)
        
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return result
