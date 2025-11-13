// 函数: _ZN5Botan12ed25519_signEPhPKhmS2_S2_m
// 地址: 0xd3ed9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
Botan::SHA_512::SHA_512()
void* __offset(vtable_for_Botan::SHA_512, 0x10) var_168
(*(var_168 + 0x18))(&var_168, arg4, 0x20)
uint8_t var_98[0x1f]
(*(var_168 + 0x20))(&var_168, &var_98)
void* __offset(vtable_for_Botan::SHA_512, 0x10) x11 = var_168
var_98[0] &= 0xf8
char var_79
char var_79_1 = 0x40 | (zx.d(var_79) & 0x3f).b
(*(x11 + 0x18))(&var_168, arg5, arg6)
void var_78
(*(var_168 + 0x18))(&var_168, &var_78, 0x20)
(*(var_168 + 0x18))(&var_168, arg2, arg3)
uint8_t var_d8[0x40]
(*(var_168 + 0x20))(&var_168, &var_d8)
Botan::sc_reduce(&var_d8)
Botan::ge_scalarmult_base(arg1, &var_d8)
(*(var_168 + 0x18))(&var_168, arg5, arg6)
(*(var_168 + 0x18))(&var_168, arg1, 0x20)
(*(var_168 + 0x18))(&var_168, &arg4[0x20], 0x20)
(*(var_168 + 0x18))(&var_168, arg2, arg3)
uint8_t var_118[0x40]
(*(var_168 + 0x20))(&var_168, &var_118)
Botan::sc_reduce(&var_118)
Botan::sc_muladd(&arg1[0x20], &var_118, &var_98, &var_d8)
var_168 = _vtable_for_Botan::SHA_512 + 0x10
void* var_130

if (var_130 != 0)
    void* var_128_1 = var_130
    int64_t var_120
    Botan::deallocate_memory(var_130, (var_120 - var_130) s>> 3, 8)

void* result_1
void* result = result_1
var_168 = _vtable_for_Botan::MDx_HashFunction + 0x10

if (result != 0)
    void* result_2 = result
    int64_t var_140
    result = Botan::deallocate_memory(result, var_140 - result, 1)

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
