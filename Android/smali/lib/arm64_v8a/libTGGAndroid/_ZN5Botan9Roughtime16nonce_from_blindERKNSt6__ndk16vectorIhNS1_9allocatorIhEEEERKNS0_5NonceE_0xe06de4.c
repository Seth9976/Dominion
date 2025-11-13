// 函数: _ZN5Botan9Roughtime16nonce_from_blindERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEERKNS0_5NonceE
// 地址: 0xe06de4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int128_t v0 = *arg2
int128_t v1 = *(arg2 + 0x10)
int128_t v2 = *(arg2 + 0x20)
int128_t v3 = *(arg2 + 0x30)
char var_d0 = 0xe
int32_t var_cf
__builtin_strncpy(&var_cf, "SHA-512", 8)
int128_t var_90 = v2
int128_t var_80 = v3
int128_t var_b0 = v0
int128_t var_a0 = v1
int16_t var_e8 = 0
Botan::HashFunction::create_or_throw(&var_d0, &var_e8)
void* var_d8

if ((zx.d(var_e8.b) & 1) != 0)
    operator delete(var_d8)
void* var_c0

if ((zx.d(var_d0) & 1) != 0)
    operator delete(var_c0)

int64_t x1_1 = *arg1
int64_t* result_1
(*(*result_1 + 0x18))(result_1, x1_1, *(arg1 + 8) - x1_1)
Botan::Buffered_Computation::final()
int64_t x1_2 = var_d0.q
char var_c8
(*(*result_1 + 0x18))(result_1, x1_2, var_c8.q - x1_2)
void* x0_6 = var_d0.q

if (x0_6 != 0)
    var_c8.q = x0_6
    Botan::deallocate_memory(x0_6, var_c0 - x0_6, 1)

(*(*result_1 + 0x18))(result_1, &var_b0, 0x40)
int128_t var_68
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
v0_1, v1_1, v2_1, v3_1 = (*(*result_1 + 0x20))(result_1, &var_68)
v2_1 = var_68
int64_t* result = result_1
int128_t var_48
int128_t* entry_x8
entry_x8[2] = var_48
int128_t var_38
entry_x8[3] = var_38
int64_t var_b8 = 0
*entry_x8 = v2_1
int128_t var_58
entry_x8[1] = var_58

if (result != 0)
    result = (*(*result + 0x10))()

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
