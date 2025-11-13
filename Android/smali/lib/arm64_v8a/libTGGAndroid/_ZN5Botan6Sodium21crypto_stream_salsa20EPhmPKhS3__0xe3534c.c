// 函数: _ZN5Botan6Sodium21crypto_stream_salsa20EPhmPKhS3_
// 地址: 0xe3534c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_80
__builtin_memset(&var_80, 0, 0x38)
void* __offset(vtable_for_Botan::Salsa20, 0x10) var_88 = _vtable_for_Botan::Salsa20 + 0x10
int64_t var_40 = (zx.o(0)).q
Botan::SymmetricAlgorithm::set_key(&var_88, arg4)
int128_t var_70
void* x8 = var_70:8.q
int128_t var_60

if (x8 == var_60.q)
    sub_c776cc(Botan::SymmetricAlgorithm::throw_key_not_set_error())
    noreturn

*(x8 + 4) = *var_80.q
*(var_70:8.q + 8) = *(var_80.q + 4)
*(var_70:8.q + 0xc) = *(var_80.q + 8)
void* x10 = var_80.q
*(var_70:8.q + 0x10) = *(x10 + 0xc)
int64_t x11 = var_80:8.q
__builtin_strncpy(var_70:8.q, "expa", 4)
int64_t x8_7 = var_70:8.q
void* x8_8
void* x9_7
int32_t x10_4

if (x11 - x10 != 0x10)
    __builtin_strncpy(x8_7 + 0x14, "nd 3", 4)
    x8_8 = var_70:8.q
    __builtin_strncpy(x8_8 + 0x28, "2-by", 4)
    __builtin_strncpy(x8_8 + 0x3c, "te k", 4)
    void* x9_8 = var_80.q
    *(x8_8 + 0x2c) = *(x9_8 + 0x10)
    *(x8_8 + 0x30) = *(x9_8 + 0x14)
    x10_4 = *(x9_8 + 0x18)
    x9_7 = x9_8 + 0x1c
else
    __builtin_strncpy(x8_7 + 0x14, "nd 1", 4)
    x8_8 = var_70:8.q
    __builtin_strncpy(x8_8 + 0x28, "6-by", 4)
    __builtin_strncpy(x8_8 + 0x3c, "te k", 4)
    int32_t* x9_6 = var_80.q
    *(x8_8 + 0x2c) = *x9_6
    *(x8_8 + 0x30) = x9_6[1]
    x10_4 = x9_6[2]
    x9_7 = &x9_6[3]

*(x8_8 + 0x34) = x10_4
int32_t x9_9 = *x9_7
*(x8_8 + 0x18) = 0
*(x8_8 + 0x38) = x9_9
*(var_70:8.q + 0x1c) = 0
*(var_70:8.q + 0x20) = 0
*(var_70:8.q + 0x24) = 0
var_40 = 0
*(var_70:8.q + 0x18) = *arg3
*(var_70:8.q + 0x1c) = *(arg3 + 4)
*(var_70:8.q + 0x20) = 0
*(var_70:8.q + 0x24) = 0
uint8_t* var_50
Botan::Salsa20::salsa_core(var_50, var_70:8.q, 0x14)
void* x8_16 = var_70:8.q
*(x8_16 + 0x20) += 1
void* x8_17 = var_70:8.q
int32_t x10_7 = *(x8_17 + 0x24)
int32_t x9_15

if (*(x8_17 + 0x20) == 0)
    x9_15 = x10_7 + 1
else
    x9_15 = x10_7

*(x8_17 + 0x24) = x9_15
var_40 = 0

if (arg2 != 0)
    memset(arg1, 0, arg2)

(*(var_88 + 0x30))(&var_88, arg1, arg1, arg2)
uint8_t* x0_4 = var_50
var_88 = _vtable_for_Botan::Salsa20 + 0x10

if (x0_4 != 0)
    var_50 = x0_4
    Botan::deallocate_memory(x0_4, var_40 - x0_4, 1)

void* x0_5 = var_70:8.q

if (x0_5 != 0)
    int64_t x8_22 = var_60:8.q
    var_60.q = x0_5
    Botan::deallocate_memory(x0_5, (x8_22 - x0_5) s>> 2, 4)

void* x0_6 = var_80.q

if (x0_6 != 0)
    var_80:8.q = x0_6
    Botan::deallocate_memory(x0_6, (var_70.q - x0_6) s>> 2, 4)

return 0
