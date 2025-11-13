// 函数: _ZNK5Botan25Block_Cipher_Fixed_ParamsILm64ELm64ELm0ELm1ENS_22Tweakable_Block_CipherEE13decrypt_n_xexEPhPKhm
// 地址: 0xee4d4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t const* x19 = arg2
int64_t entry_x3
int64_t i_7 = entry_x3 << 6

if (i_7 == 0)
    jump(*(*arg1 + 0x50))

void* x8 = &x19[0x10]
uint64_t x20 = arg3
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t entry_v4
int128_t entry_v5
int128_t entry_v6
int128_t entry_v7

if (&x19[i_7 - 8] u< &x19[0x18] || x8 + i_7 - 0x20 u< x8 || &x19[i_7 - 0x18] u< &x19[8]
        || &x19[i_7 - 0x20] u< x19 || (x20 + i_7 u> x19 && &x19[i_7] u> x20))
    int128_t* x9_4 = x20 + 0x10
    int64_t i_6 = i_7
    int64_t i
    
    do
        v2 = x9_4[-1]
        v3 = *x9_4
        i = i_6
        i_6 -= 0x20
        x9_4 = &x9_4[2]
        v0 = v2 ^ *(x8 - 0x10)
        v1 = v3 ^ *x8
        *(x8 - 0x10) = v0
        *x8 = v1
        x8 += 0x20
    while (i != 0x20)
else
    int64_t i_4 = ((i_7 - 0x20) u>> 5) + 1
    uint64_t x9_5 = x20
    uint8_t const* x10_2 = x19
    int64_t i_1
    
    do
        v0.q = *x10_2
        v1.q = *(x10_2 + 8)
        v2.q = *(x10_2 + 0x10)
        v3.q = *(x10_2 + 0x18)
        v0:8.q = *(x10_2 + 0x20)
        v1:8.q = *(x10_2 + 0x28)
        v2:8.q = *(x10_2 + 0x30)
        v3:8.q = *(x10_2 + 0x38)
        entry_v4.q = *x9_5
        entry_v5.q = *(x9_5 + 8)
        entry_v6.q = *(x9_5 + 0x10)
        entry_v7.q = *(x9_5 + 0x18)
        entry_v4:8.q = *(x9_5 + 0x20)
        entry_v5:8.q = *(x9_5 + 0x28)
        entry_v6:8.q = *(x9_5 + 0x30)
        entry_v7:8.q = *(x9_5 + 0x38)
        x9_5 += 0x40
        i_1 = i_4
        i_4 -= 2
        int128_t v16_1 = entry_v4 ^ v0
        int128_t v17_1 = entry_v5 ^ v1
        int128_t v18_1 = entry_v6 ^ v2
        int128_t v19_1 = entry_v7 ^ v3
        *x10_2 = v16_1.q
        *(x10_2 + 8) = v17_1.q
        *(x10_2 + 0x10) = v18_1.q
        *(x10_2 + 0x18) = v19_1.q
        *(x10_2 + 0x20) = v16_1:8.q
        *(x10_2 + 0x28) = v17_1:8.q
        *(x10_2 + 0x30) = v18_1:8.q
        *(x10_2 + 0x38) = v19_1:8.q
        x10_2 = &x10_2[0x40]
    while (i_1 != 2)

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
    (*(*arg1 + 0x50))(arg1, x19, x19, v0, v1, v2, v3, entry_v4, entry_v5, entry_v6, entry_v7, lr)
void* x8_5 = &x19[0x10]

if (&x19[i_7 - 8] u< &x19[0x18] || x8_5 + i_7 - 0x20 u< x8_5 || &x19[i_7 - 0x18] u< &x19[8]
        || &x19[i_7 - 0x20] u< x19 || (x20 + i_7 u> x19 && &x19[i_7] u> x20))
    int128_t* x9_10 = x20 + 0x10
    int64_t i_2
    
    do
        v2_1 = x9_10[-1]
        v3_1 = *x9_10
        i_2 = i_7
        i_7 -= 0x20
        x9_10 = &x9_10[2]
        v1_1 = v3_1 ^ *x8_5
        *(x8_5 - 0x10) ^= v2_1
        *x8_5 = v1_1
        x8_5 += 0x20
    while (i_2 != 0x20)
else
    int64_t i_5 = ((i_7 - 0x20) u>> 5) + 1
    int64_t i_3
    
    do
        v0_1.q = *x19
        v1_1.q = *(x19 + 8)
        v2_1.q = *(x19 + 0x10)
        v3_1.q = *(x19 + 0x18)
        v0_1:8.q = *(x19 + 0x20)
        v1_1:8.q = *(x19 + 0x28)
        v2_1:8.q = *(x19 + 0x30)
        v3_1:8.q = *(x19 + 0x38)
        v4.q = *x20
        v5.q = *(x20 + 8)
        v6.q = *(x20 + 0x10)
        v7.q = *(x20 + 0x18)
        v4:8.q = *(x20 + 0x20)
        v5:8.q = *(x20 + 0x28)
        v6:8.q = *(x20 + 0x30)
        v7:8.q = *(x20 + 0x38)
        x20 += 0x40
        i_3 = i_5
        i_5 -= 2
        int128_t v16_2 = v4 ^ v0_1
        int128_t v17_2 = v5 ^ v1_1
        int128_t v18_2 = v6 ^ v2_1
        int128_t v19_2 = v7 ^ v3_1
        *x19 = v16_2.q
        *(x19 + 8) = v17_2.q
        *(x19 + 0x10) = v18_2.q
        *(x19 + 0x18) = v19_2.q
        *(x19 + 0x20) = v16_2:8.q
        *(x19 + 0x28) = v17_2:8.q
        *(x19 + 0x30) = v18_2:8.q
        *(x19 + 0x38) = v19_2:8.q
        x19 = &x19[0x40]
    while (i_3 != 2)

return result
