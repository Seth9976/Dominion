// 函数: _ZNK5Botan4DESX9encrypt_nEPKhPhm
// 地址: 0xd0e9f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *(arg1 + 8)

if (x8 == *(arg1 + 0x10))
    uint8_t* x0_2
    uint8_t* x1_1
    uint64_t x2_1
    x0_2, x1_1, x2_1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::DESX::decrypt_n(x0_2, x1_1, x2_1) __tailcall

int64_t entry_x3

if (entry_x3 == 0)
    return 

uint64_t x20_1 = arg3
uint8_t* x21_1 = arg2
int64_t x23_1 = entry_x3 - 1

while (true)
    *x20_1 = *x8 ^ *x21_1
    *(x20_1 + 1) = x8[1] ^ x21_1[1]
    *(x20_1 + 2) = x8[2] ^ x21_1[2]
    *(x20_1 + 3) = x8[3] ^ x21_1[3]
    *(x20_1 + 4) = x8[4] ^ x21_1[4]
    *(x20_1 + 5) = x8[5] ^ x21_1[5]
    *(x20_1 + 6) = x8[6] ^ x21_1[6]
    *(x20_1 + 7) = x8[7] ^ x21_1[7]
    (*(*(arg1 + 0x38) + 0x48))(&arg1[0x38], x20_1, x20_1, 1)
    char* x8_5 = *(arg1 + 0x20)
    *x20_1 ^= *x8_5
    *(x20_1 + 1) ^= x8_5[1]
    *(x20_1 + 2) ^= x8_5[2]
    *(x20_1 + 3) ^= x8_5[3]
    *(x20_1 + 4) ^= x8_5[4]
    *(x20_1 + 5) ^= x8_5[5]
    *(x20_1 + 6) ^= x8_5[6]
    *(x20_1 + 7) ^= x8_5[7]
    
    if (x23_1 == 0)
        break
    
    x8 = *(arg1 + 8)
    x23_1 -= 1
    x21_1 = &x21_1[8]
    x20_1 += 8
