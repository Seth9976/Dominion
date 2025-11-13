// 函数: _ZN5Botan10ChaCha_RNGC1ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd02ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Stateful_RNG + 0x10
std::__ndk1::recursive_mutex::recursive_mutex()
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
*arg1 = _vtable_for_Botan::ChaCha_RNG + 0x10
__builtin_memset(arg1 + 0x30, 0, 0x1c)
*(arg1 + 0x60) = 0
char var_58 = 0x1a
int64_t var_57
__builtin_strncpy(&var_57, "HMAC(SHA-256)", 0xe)
int16_t var_70 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_58, &var_70)
int64_t* x0_2 = *(arg1 + 0x58)
int64_t var_38
*(arg1 + 0x58) = var_38

if (x0_2 != 0)
    (*(*x0_2 + 0x10))()

void* var_60

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)

void* var_48

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

var_58 = 0x14
int64_t var_57_1
__builtin_strncpy(&var_57_1, "ChaCha(20)", 0xb)
var_70 = 0
Botan::StreamCipher::create_or_throw(&var_58, &var_70)
int64_t* x0_6 = *(arg1 + 0x60)
*(arg1 + 0x60) = var_38

if (x0_6 != 0)
    (*(*x0_6 + 8))()

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

std::__ndk1::recursive_mutex::lock()
void* x8_12 = *arg1
*(arg1 + 0x50) = 0
*(arg1 + 0x48) = 0
(*(x8_12 + 0x80))(arg1)
std::__ndk1::recursive_mutex::unlock()
int64_t* entry_x1
int64_t x22 = *entry_x1
int64_t x21_1 = entry_x1[1]
std::__ndk1::recursive_mutex::lock()
int64_t x21_2 = x21_1 - x22
(*(*arg1 + 0x78))(arg1, x22, x21_2)

if ((*(*arg1 + 0x60))(arg1) u<= x21_2 << 3)
    *(arg1 + 0x50) = 1

return std::__ndk1::recursive_mutex::unlock()
