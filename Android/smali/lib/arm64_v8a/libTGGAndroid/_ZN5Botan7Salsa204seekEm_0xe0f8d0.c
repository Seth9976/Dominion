// 函数: _ZN5Botan7Salsa204seekEm
// 地址: 0xe0f8d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x20)

if (x8 == *(arg1 + 0x28))
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::Scrypt_Family::name() __tailcall

int64_t entry_x1
*(x8 + 0x20) = (entry_x1 u>> 6).d
void* x8_1 = *(arg1 + 0x20)
*(x8_1 + 0x24) += (entry_x1 u>> 0x26).d
int64_t result = Botan::Salsa20::salsa_core(*(arg1 + 0x38), *(arg1 + 0x20), 0x14)
void* x8_2 = *(arg1 + 0x20)
*(x8_2 + 0x20) += 1
void* x8_3 = *(arg1 + 0x20)
int32_t x10_1 = *(x8_3 + 0x24)
int32_t x9_7

if (*(x8_3 + 0x20) == 0)
    x9_7 = x10_1 + 1
else
    x9_7 = x10_1

*(x8_3 + 0x24) = x9_7
*(arg1 + 0x50) = entry_x1 & 0x3f
return result
