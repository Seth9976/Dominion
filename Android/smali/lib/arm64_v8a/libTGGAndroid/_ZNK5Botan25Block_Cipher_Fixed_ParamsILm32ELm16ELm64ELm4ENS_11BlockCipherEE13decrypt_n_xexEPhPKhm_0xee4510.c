// 函数: _ZNK5Botan25Block_Cipher_Fixed_ParamsILm32ELm16ELm64ELm4ENS_11BlockCipherEE13decrypt_n_xexEPhPKhm
// 地址: 0xee4510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x3
int64_t x21 = entry_x3 << 5

if (x21 == 0)
    jump(*(*arg1 + 0x50))

int64_t x8 = 0

if (x21 == 0x20 || &arg2[x21 - 8] u< &arg2[0x18] || &arg2[x21 - 0x10] u< &arg2[0x10]
        || &arg2[x21 - 0x18] u< &arg2[8] || &arg2[x21 - 0x20] u< arg2)
    goto label_ee45f8

int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t entry_v4
int128_t entry_v5
int128_t entry_v6
int128_t entry_v7

if (arg3 + x21 u<= arg2 || &arg2[x21] u<= arg3)
    int64_t i_8 = (((x21 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
    x8 = i_8 << 5
    int64_t i_6 = i_8
    uint64_t x12_2 = arg3
    uint8_t const* x13_2 = arg2
    int64_t i
    
    do
        v0.q = *x13_2
        v1.q = *(x13_2 + 8)
        v2.q = *(x13_2 + 0x10)
        v3.q = *(x13_2 + 0x18)
        v0:8.q = *(x13_2 + 0x20)
        v1:8.q = *(x13_2 + 0x28)
        v2:8.q = *(x13_2 + 0x30)
        v3:8.q = *(x13_2 + 0x38)
        entry_v4.q = *x12_2
        entry_v5.q = *(x12_2 + 8)
        entry_v6.q = *(x12_2 + 0x10)
        entry_v7.q = *(x12_2 + 0x18)
        entry_v4:8.q = *(x12_2 + 0x20)
        entry_v5:8.q = *(x12_2 + 0x28)
        entry_v6:8.q = *(x12_2 + 0x30)
        entry_v7:8.q = *(x12_2 + 0x38)
        x12_2 += 0x40
        i = i_6
        i_6 -= 2
        int128_t v16_1 = entry_v4 ^ v0
        int128_t v17_1 = entry_v5 ^ v1
        int128_t v18_1 = entry_v6 ^ v2
        int128_t v19_1 = entry_v7 ^ v3
        *x13_2 = v16_1.q
        *(x13_2 + 8) = v17_1.q
        *(x13_2 + 0x10) = v18_1.q
        *(x13_2 + 0x18) = v19_1.q
        *(x13_2 + 0x20) = v16_1:8.q
        *(x13_2 + 0x28) = v17_1:8.q
        *(x13_2 + 0x30) = v18_1:8.q
        *(x13_2 + 0x38) = v19_1:8.q
        x13_2 = &x13_2[0x40]
    while (i != 2)
    
    if (((x21 - 0x20) u>> 5) + 1 != i_8)
        goto label_ee45f8
else
    x8 = 0
label_ee45f8:
    int64_t i_4 = x8 - x21
    int128_t* x8_5 = arg3 + x8 + 0x10
    void* x10_4 = &arg2[x8 + 0x10]
    int64_t i_1
    
    do
        v2 = x8_5[-1]
        v3 = *x8_5
        i_1 = i_4
        i_4 += 0x20
        x8_5 = &x8_5[2]
        v0 = v2 ^ *(x10_4 - 0x10)
        v1 = v3 ^ *x10_4
        *(x10_4 - 0x10) = v0
        *x10_4 = v1
        x10_4 += 0x20
    while (i_1 != -0x20)

int64_t result
int64_t lr
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4
int128_t v5
int128_t v6
int128_t v7
result, v0_1, v1_1, v2_1, v3_1, v4, v5, v6, v7 =
    (*(*arg1 + 0x50))(arg1, arg2, arg2, v0, v1, v2, v3, entry_v4, entry_v5, entry_v6, entry_v7, lr)
int64_t x8_8 = 0

if (x21 == 0x20 || &arg2[x21 - 8] u< &arg2[0x18] || &arg2[x21 - 0x10] u< &arg2[0x10]
        || &arg2[x21 - 0x18] u< &arg2[8] || &arg2[x21 - 0x20] u< arg2)
    goto label_ee46f0

if (arg3 + x21 u<= arg2 || &arg2[x21] u<= arg3)
    int64_t i_9 = (((x21 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
    x8_8 = i_9 << 5
    int64_t i_7 = i_9
    uint64_t x12_4 = arg3
    uint8_t const* x13_4 = arg2
    int64_t i_2
    
    do
        v0_1.q = *x13_4
        v1_1.q = *(x13_4 + 8)
        v2_1.q = *(x13_4 + 0x10)
        v3_1.q = *(x13_4 + 0x18)
        v0_1:8.q = *(x13_4 + 0x20)
        v1_1:8.q = *(x13_4 + 0x28)
        v2_1:8.q = *(x13_4 + 0x30)
        v3_1:8.q = *(x13_4 + 0x38)
        v4.q = *x12_4
        v5.q = *(x12_4 + 8)
        v6.q = *(x12_4 + 0x10)
        v7.q = *(x12_4 + 0x18)
        v4:8.q = *(x12_4 + 0x20)
        v5:8.q = *(x12_4 + 0x28)
        v6:8.q = *(x12_4 + 0x30)
        v7:8.q = *(x12_4 + 0x38)
        x12_4 += 0x40
        i_2 = i_7
        i_7 -= 2
        int128_t v16_2 = v4 ^ v0_1
        int128_t v17_2 = v5 ^ v1_1
        int128_t v18_2 = v6 ^ v2_1
        int128_t v19_2 = v7 ^ v3_1
        *x13_4 = v16_2.q
        *(x13_4 + 8) = v17_2.q
        *(x13_4 + 0x10) = v18_2.q
        *(x13_4 + 0x18) = v19_2.q
        *(x13_4 + 0x20) = v16_2:8.q
        *(x13_4 + 0x28) = v17_2:8.q
        *(x13_4 + 0x30) = v18_2:8.q
        *(x13_4 + 0x38) = v19_2:8.q
        x13_4 = &x13_4[0x40]
    while (i_2 != 2)
    
    if (((x21 - 0x20) u>> 5) + 1 != i_9)
        goto label_ee46f0
else
    x8_8 = 0
label_ee46f0:
    int64_t i_5 = x8_8 - x21
    int128_t* x8_12 = arg3 + x8_8 + 0x10
    void* x10_8 = &arg2[x8_8 + 0x10]
    int64_t i_3
    
    do
        v2_1 = x8_12[-1]
        v3_1 = *x8_12
        i_3 = i_5
        i_5 += 0x20
        x8_12 = &x8_12[2]
        v1_1 = v3_1 ^ *x10_8
        *(x10_8 - 0x10) ^= v2_1
        *x10_8 = v1_1
        x10_8 += 0x20
    while (i_3 != -0x20)

return result
