// 函数: _ZN5Botan8Streebog11compress_64EPKmb
// 地址: 0xe3ba58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* x19 = arg2
int32_t entry_x2
int64_t x8

if ((entry_x2 & 1) == 0)
    x8 = arg1[2]
else
    x8 = 0

int128_t* x9 = arg1[7]

if (x9 == 0)
    return sub_e3bda0(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)) __tailcall

int128_t v1 = x9[1]
int128_t v3 = x9[2]
int128_t v2 = x9[3]
int128_t var_70 = *x9
int128_t var_60 = v1
int128_t var_40 = v2
var_70.q ^= x8
sub_e3bda0(&var_70)
v2 = var_70
int128_t var_b0 = var_70
int64_t i = 0
int128_t v7 = v2 ^ *x19
v1 = var_b0
v2 = var_60
int128_t v0_1 = var_60 ^ x19[1]
var_70 = v7
int128_t var_60_1 = v0_1
int128_t v4 = v3
int128_t v5 = var_40
int128_t var_50_1 = v3 ^ x19[2]
int128_t var_40_1 = var_40 ^ x19[3]
int128_t* result
int128_t v0_2
int128_t v6
int128_t v7_1

do
    void* x8_2 = Botan::STREEBOG_C + i
    int128_t v0_3 = v1 ^ *x8_2
    v1 = v2 ^ *(x8_2 + 0x10)
    v2 = v4 ^ *(x8_2 + 0x20)
    int128_t v3_1 = v5 ^ *(x8_2 + 0x30)
    var_b0 = v0_3
    int128_t var_a0_1 = v1
    int128_t var_90_1 = v2
    sub_e3bda0(&var_b0)
    result = &var_70
    sub_e3bda0(result)
    v1 = var_b0
    v2 = var_a0_1
    v4 = var_90_1
    v5 = v3_1
    i += 0x40
    v7_1 = var_70 ^ v1
    v6 = var_60_1 ^ v2
    v3 = var_50_1 ^ v4
    v0_2 = var_40_1 ^ v5
    var_70 = v7_1
    var_60_1 = v6
    var_50_1 = v3
    var_40_1 = v0_2
while (i != 0x300)

int64_t* x8_3 = arg1[7]
*x8_3 ^= *x19 ^ v7_1.q
void* x8_4 = arg1[7]
*(x8_4 + 8) ^= *(x19 + 8) ^ v7_1:8.q
void* x8_5 = arg1[7]
*(x8_5 + 0x10) ^= x19[1].q ^ v6.q
void* x8_6 = arg1[7]
*(x8_6 + 0x18) ^= *(x19 + 0x18) ^ v6:8.q
void* x8_7 = arg1[7]
*(x8_7 + 0x20) ^= x19[2].q ^ v3.q
void* x8_8 = arg1[7]
*(x8_8 + 0x28) ^= *(x19 + 0x28) ^ v3:8.q
void* x8_9 = arg1[7]
*(x8_9 + 0x30) ^= x19[3].q ^ v0_2.q
void* x8_10 = arg1[7]
*(x8_10 + 0x38) ^= *(x19 + 0x38) ^ v0_2:8.q

if ((entry_x2 & 1) == 0)
    int64_t* x8_11 = arg1[0xa]
    int64_t x9_26 = *x19
    int64_t x10_8 = *x8_11
    *x8_11 = x9_26 + x10_8
    void* x8_12 = arg1[0xa]
    int64_t x10_9 = *(x19 + 8)
    uint64_t x9_29 = zx.q(x10_8 != 0 ? 1 : 0) & zx.q(x9_26 + x10_8 u< x9_26 ? 1 : 0)
    int64_t x11_9 = x10_9 + x9_29 + *(x8_12 + 8)
    *(x8_12 + 8) = x11_9
    void* x8_13 = arg1[0xa]
    int64_t x10_10 = x19[1].q
    uint64_t x9_30
    
    if (x11_9 == x10_9)
        x9_30 = x9_29
    else
        x9_30 = zx.q(x11_9 u< x10_9 ? 1 : 0)
    
    int64_t x11_11 = x10_10 + x9_30 + *(x8_13 + 0x10)
    *(x8_13 + 0x10) = x11_11
    void* x8_14 = arg1[0xa]
    int64_t x10_11 = *(x19 + 0x18)
    uint64_t x9_31
    
    if (x11_11 == x10_10)
        x9_31 = x9_30
    else
        x9_31 = zx.q(x11_11 u< x10_10 ? 1 : 0)
    
    int64_t x11_13 = x10_11 + x9_31 + *(x8_14 + 0x18)
    *(x8_14 + 0x18) = x11_13
    void* x8_15 = arg1[0xa]
    int64_t x10_12 = x19[2].q
    uint64_t x9_32
    
    if (x11_13 == x10_11)
        x9_32 = x9_31
    else
        x9_32 = zx.q(x11_13 u< x10_11 ? 1 : 0)
    
    int64_t x11_15 = x10_12 + x9_32 + *(x8_15 + 0x20)
    *(x8_15 + 0x20) = x11_15
    void* x8_16 = arg1[0xa]
    int64_t x10_13 = *(x19 + 0x28)
    uint64_t x9_33
    
    if (x11_15 == x10_12)
        x9_33 = x9_32
    else
        x9_33 = zx.q(x11_15 u< x10_12 ? 1 : 0)
    
    int64_t x11_17 = x10_13 + x9_33 + *(x8_16 + 0x28)
    *(x8_16 + 0x28) = x11_17
    void* x8_17 = arg1[0xa]
    int64_t x10_14 = x19[3].q
    uint64_t x9_34
    
    if (x11_17 == x10_13)
        x9_34 = x9_33
    else
        x9_34 = zx.q(x11_17 u< x10_13 ? 1 : 0)
    
    int64_t x11_19 = x10_14 + x9_34 + *(x8_17 + 0x30)
    *(x8_17 + 0x30) = x11_19
    void* x8_18 = arg1[0xa]
    uint64_t x9_35
    
    if (x11_19 == x10_14)
        x9_35 = x9_34
    else
        x9_35 = zx.q(x11_19 u< x10_14 ? 1 : 0)
    
    *(x8_18 + 0x38) += *(x19 + 0x38) + x9_35

return result
