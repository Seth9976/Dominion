// 函数: _ZN5Botan6Sodium22crypto_stream_xsalsa20EPhmPKhS3_
// 地址: 0xe35a8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_80 = (zx.o(0)).q
int128_t var_70
__builtin_memset(&var_70, 0, 0x28)
void* __offset(vtable_for_Botan::Salsa20, 0x10) var_88 = _vtable_for_Botan::Salsa20 + 0x10
int64_t var_40 = (zx.o(0)).q
Botan::SymmetricAlgorithm::set_key(&var_88, arg4)
Botan::Salsa20::set_iv(&var_88, arg3)

if (arg2 != 0)
    memset(arg1, 0, arg2)

(*(var_88 + 0x30))(&var_88, arg1, arg1, arg2)
void* var_50
void* x0_4 = var_50
var_88 = _vtable_for_Botan::Salsa20 + 0x10

if (x0_4 != 0)
    var_50 = x0_4
    Botan::deallocate_memory(x0_4, var_40 - x0_4, 1)

void* x0_5 = var_70:8.q

if (x0_5 != 0)
    int128_t var_60
    int64_t x8_4 = var_60:8.q
    var_60.q = x0_5
    Botan::deallocate_memory(x0_5, (x8_4 - x0_5) s>> 2, 4)

int64_t x0_6 = var_80

if (x0_6 != 0)
    var_80 = x0_6
    Botan::deallocate_memory(x0_6, (var_70.q - x0_6) s>> 2, 4)

return 0
