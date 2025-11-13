// 函数: _ZNK5Botan7AES_1289encrypt_nEPKhPhm
// 地址: 0xca1b94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) == *(arg1 + 0x10))
    uint8_t* x0_5
    uint8_t* x1_3
    uint64_t x2_3
    x0_5, x1_3, x2_3 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::AES_128::vperm_encrypt_n(x0_5, x1_3, x2_3) __tailcall

char* x0
int128_t v0
int128_t v1
x0, v0, v1 = Botan::CPUID::state()
int64_t entry_x3

if ((zx.d(*x0) & 1) == 0)
    int128_t v8
    int128_t v9
    int128_t v10
    int128_t v11
    return sub_ca1cc4(arg2, arg3, entry_x3, &arg1[8], v8, v9, v10, v11) __tailcall

int128_t* x8_3 = *(arg1 + 8)
v0 = x8_3[1]
int128_t var_e0 = *x8_3
int128_t var_d0 = v0
int128_t var_c0 = x8_3[2]
int128_t var_b0 = x8_3[3]
int128_t var_a0 = x8_3[4]
int128_t var_90 = x8_3[5]
int128_t var_80 = x8_3[6]
int128_t var_70 = x8_3[7]
int128_t var_60 = x8_3[8]
int128_t var_50 = x8_3[9]
int128_t var_40 = x8_3[0xa]
sub_ca5d20(arg2, arg3, entry_x3, &var_e0, 0xa)
return arg2
