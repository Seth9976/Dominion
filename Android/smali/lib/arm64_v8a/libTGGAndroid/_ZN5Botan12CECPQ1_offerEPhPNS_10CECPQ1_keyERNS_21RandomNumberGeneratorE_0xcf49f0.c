// 函数: _ZN5Botan12CECPQ1_offerEPhPNS_10CECPQ1_keyERNS_21RandomNumberGeneratorE
// 地址: 0xcf49f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t var_60
__builtin_memset(&var_60, 0, 0x18)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_60)
int64_t x1_1 = var_60
int64_t var_58
int128_t v0
int128_t v1
int128_t v2
v0, v1, v2 = (*(*arg3 + 0x10))(arg3, x1_1, var_58 - x1_1)
void* x0_2 = *arg2

if (x0_2 != 0)
    int64_t x8_3 = *(arg2 + 0x10)
    *(arg2 + 8) = x0_2
    v0, v1, v2 = Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)
    __builtin_memset(arg2, 0, 0x18)

v0 = var_60.o
v1 = data_7b0120
v2 = data_7b0130
*arg2 = v0
int64_t var_50
*(arg2 + 0x10) = var_50
var_60.o = v1
var_50.o = v2
Botan::curve25519_donna(arg1, v0.q, &var_60)
int64_t result = Botan::newhope_keygen(&arg1[0x20], arg2 + 0x18, arg3, 1)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
