// 函数: _Z11Artist_Hintv
// 地址: 0xac27b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = CardWhere(ThisCard(false, nullptr))
int32_t x19 = 1

if ((x0_1 - 0x45c u> 0xf || (1 << (x0_1 - 0x45c) & 0xe001) == 0) && x0_1 != 0x3ea && x0_1 != 0x3ec)
    x19 = 0

int32_t var_1920[0x4]
int32_t var_ca0[0xe0]
int32_t x0_2
int128_t v0
uint128_t v1
int128_t v2
uint128_t v3
uint128_t v4
x0_2, v0, v1, v2, v3, v4 = CountCardTypesWhere(0x3e9, &var_ca0, &var_1920)
uint64_t x8_2 = zx.q(x0_2)

if ((x19 & 1) == 0)
    goto label_ac2878

int64_t x9_1
int64_t x10_1

if (x8_2.d s>= 1)
    x9_1 = 0
    x10_1 = 0
    
    while (var_ca0[x10_1] != 0x120c)
        x10_1 += 1
        x9_1 += 0x100000000
        
        if (x8_2 == x10_1)
            goto label_ac289c

int32_t x9_3

if (x8_2.d s< 1 || x10_1.d == 0xffffffff)
label_ac289c:
    x9_3 = x8_2.d + 1
    var_ca0[sx.q(x8_2.d)] = 0x120c
    var_1920[sx.q(x8_2.d)] = 1
    
    if (x9_3 s< 1)
        return 0
else
    int64_t x9_2 = x9_1 s>> 0x1e
    *(&var_1920 + x9_2) += 1
label_ac2878:
    x9_3 = x8_2.d
    
    if (x9_3 s< 1)
        return 0

uint64_t x8_3 = zx.q(x9_3)
uint64_t result
int64_t i_4

if (x9_3 u>= 8)
    i_4 = x8_3 & 0xfffffff8
    v0.q = 0
    v0:8.q = 0
    v1.d = 1
    v1:4.d = 1
    v1:8.d = 1
    v1:0xc.d = 1
    void var_1910
    void* x10_2 = &var_1910
    int64_t i_3 = i_4
    v2.q = 0
    v2:8.q = 0
    int64_t i
    
    do
        v3 = *(x10_2 - 0x10)
        v4 = *x10_2
        i = i_3
        i_3 -= 8
        x10_2 += 0x20
        v0 -= vceqq_u32(v3, v1)
        v2 -= vceqq_u32(v4, v1)
    while (i != 8)
    uint128_t v0_1
    v0_1.d = vaddvq_u32(v2 + v0)
    result = zx.q(v0_1.d)
    
    if (i_4 != x8_3)
        goto label_ac2924
else
    i_4 = 0
    result = 0
label_ac2924:
    void* x10_3 = &var_1920[i_4]
    int64_t i_2 = x8_3 - i_4
    int64_t i_1
    
    do
        int32_t x9_4 = *x10_3
        x10_3 += 4
        
        if (x9_4 == 1)
            result = zx.q(result.d + 1)
        else
            result = zx.q(result.d)
        
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return result
