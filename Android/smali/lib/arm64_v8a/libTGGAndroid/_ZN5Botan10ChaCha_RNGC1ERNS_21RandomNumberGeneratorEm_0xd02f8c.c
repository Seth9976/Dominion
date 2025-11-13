// 函数: _ZN5Botan10ChaCha_RNGC1ERNS_21RandomNumberGeneratorEm
// 地址: 0xd02f8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Stateful_RNG + 0x10
std::__ndk1::recursive_mutex::recursive_mutex()
*(arg1 + 0x30) = arg2
*(arg1 + 0x38) = 0
int64_t entry_x2
*(arg1 + 0x40) = entry_x2
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
*arg1 = _vtable_for_Botan::ChaCha_RNG + 0x10
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
char var_50 = 0x1a
int64_t var_4f
__builtin_strncpy(&var_4f, "HMAC(SHA-256)", 0xe)
int16_t var_68 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_50, &var_68)
int64_t* x0_2 = *(arg1 + 0x58)
int64_t var_38
*(arg1 + 0x58) = var_38

if (x0_2 != 0)
    (*(*x0_2 + 0x10))()

void* var_58

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)

void* var_40

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)

var_50 = 0x14
int64_t var_4f_1
__builtin_strncpy(&var_4f_1, "ChaCha(20)", 0xb)
var_68 = 0
Botan::StreamCipher::create_or_throw(&var_50, &var_68)
int64_t* x0_6 = *(arg1 + 0x60)
*(arg1 + 0x60) = var_38

if (x0_6 != 0)
    (*(*x0_6 + 8))()

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)

std::__ndk1::recursive_mutex::lock()
void* x8_12 = *arg1
*(arg1 + 0x50) = 0
*(arg1 + 0x48) = 0
(*(x8_12 + 0x80))(arg1)
return std::__ndk1::recursive_mutex::unlock()
