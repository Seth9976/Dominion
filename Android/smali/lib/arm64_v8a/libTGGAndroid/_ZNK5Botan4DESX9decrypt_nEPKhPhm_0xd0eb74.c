// 函数: _ZNK5Botan4DESX9decrypt_nEPKhPhm
// 地址: 0xd0eb74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) == *(arg1 + 0x10))
    uint8_t* x0_2
    uint64_t x1_1
    x0_2, x1_1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::DESX::key_schedule(x0_2, x1_1) __tailcall

int64_t entry_i
int64_t i_1 = entry_i

if (entry_i == 0)
    return 

uint64_t x21_1 = arg3
uint8_t* x22_1 = arg2
int64_t i

do
    char* x8_1 = *(arg1 + 0x20)
    *x21_1 = *x8_1 ^ *x22_1
    *(x21_1 + 1) = x8_1[1] ^ x22_1[1]
    *(x21_1 + 2) = x8_1[2] ^ x22_1[2]
    *(x21_1 + 3) = x8_1[3] ^ x22_1[3]
    *(x21_1 + 4) = x8_1[4] ^ x22_1[4]
    *(x21_1 + 5) = x8_1[5] ^ x22_1[5]
    *(x21_1 + 6) = x8_1[6] ^ x22_1[6]
    *(x21_1 + 7) = x8_1[7] ^ x22_1[7]
    (*(*(arg1 + 0x38) + 0x50))(&arg1[0x38], x21_1, x21_1, 1)
    char* x8_6 = *(arg1 + 8)
    i = i_1
    i_1 -= 1
    x22_1 = &x22_1[8]
    *x21_1 ^= *x8_6
    *(x21_1 + 1) ^= x8_6[1]
    *(x21_1 + 2) ^= x8_6[2]
    *(x21_1 + 3) ^= x8_6[3]
    *(x21_1 + 4) ^= x8_6[4]
    *(x21_1 + 5) ^= x8_6[5]
    *(x21_1 + 6) ^= x8_6[6]
    *(x21_1 + 7) ^= x8_6[7]
    x21_1 += 8
while (i != 1)
