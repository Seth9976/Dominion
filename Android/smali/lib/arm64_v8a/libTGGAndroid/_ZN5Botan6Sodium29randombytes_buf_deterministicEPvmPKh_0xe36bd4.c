// 函数: _ZN5Botan6Sodium29randombytes_buf_deterministicEPvmPKh
// 地址: 0xe36bd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_80
__builtin_memset(&var_80, 0, 0x38)
void* __offset(vtable_for_Botan::ChaCha, 0x10) var_90 = _vtable_for_Botan::ChaCha + 0x10
int64_t var_88 = 0x14
int64_t var_40 = (zx.o(0)).q
Botan::SymmetricAlgorithm::set_key(&var_90, arg3)
int128_t var_70
void* x8_1 = var_70:8.q
int128_t var_60

if (x8_1 == var_60.q)
    sub_c776cc(Botan::SymmetricAlgorithm::throw_key_not_set_error())
    noreturn

*(x8_1 + 0x10) = *var_80.q
*(var_70:8.q + 0x14) = *(var_80.q + 4)
void* x9_4 = var_80.q
*(var_70:8.q + 0x18) = *(x9_4 + 8)
*(var_70:8.q + 0x1c) = *(x9_4 + 0xc)
int64_t x11 = var_80:8.q
__builtin_strncpy(var_70:8.q, "expa", 4)
int64_t x10_3 = var_70:8.q
void* x8_8
int32_t x9_8
void* x10_7

if (x11 - x9_4 != 0x10)
    __builtin_strncpy(x10_3 + 4, "nd 3", 4)
    __builtin_strncpy(var_70:8.q + 8, "2-by", 4)
    __builtin_strncpy(var_70:8.q + 0xc, "te k", 4)
    void* x8_10 = var_80.q
    *(var_70:8.q + 0x20) = *(x8_10 + 0x10)
    *(var_70:8.q + 0x24) = *(x8_10 + 0x14)
    x9_8 = *(x8_10 + 0x18)
    x10_7 = var_70:8.q
    x8_8 = x8_10 + 0x1c
else
    __builtin_strncpy(x10_3 + 4, "nd 1", 4)
    __builtin_strncpy(var_70:8.q + 8, "6-by", 4)
    __builtin_strncpy(var_70:8.q + 0xc, "te k", 4)
    int32_t* x8_7 = var_80.q
    *(var_70:8.q + 0x20) = *x8_7
    *(var_70:8.q + 0x24) = x8_7[1]
    x9_8 = x8_7[2]
    x10_7 = var_70:8.q
    x8_8 = &x8_7[3]

*(x10_7 + 0x28) = x9_8
*(var_70:8.q + 0x2c) = *x8_8
uint64_t x2_1 = var_70:8.q
*(x2_1 + 0x30) = 0
var_40 = 0
__builtin_strncpy(x2_1 + 0x34, "LibsodiumDRG", 0xc)
uint32_t* var_50
Botan::ChaCha::chacha_x8(&var_90, var_50, x2_1)
var_40 = 0
Botan::ChaCha::write_keystream(&var_90, arg1)
uint32_t* x0_3 = var_50
var_90 = _vtable_for_Botan::ChaCha + 0x10

if (x0_3 != 0)
    var_50 = x0_3
    Botan::deallocate_memory(x0_3, var_40 - x0_3, 1)

void* x0_4 = var_70:8.q

if (x0_4 != 0)
    int64_t x8_14 = var_60:8.q
    var_60.q = x0_4
    Botan::deallocate_memory(x0_4, (x8_14 - x0_4) s>> 2, 4)

void* result = var_80.q

if (result == 0)
    return result

var_80:8.q = result
return Botan::deallocate_memory(result, (var_70.q - result) s>> 2, 4)
