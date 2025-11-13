// 函数: _ZN5Botan10ChaCha_RNGC1Ev
// 地址: 0xd029dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::Stateful_RNG + 0x10
std::__ndk1::recursive_mutex::recursive_mutex()
entry_x0[0xa] = 0
entry_x0[0xb] = 0
*entry_x0 = _vtable_for_Botan::ChaCha_RNG + 0x10
__builtin_memset(&entry_x0[6], 0, 0x1c)
entry_x0[0xc] = 0
char var_50 = 0x1a
int64_t var_4f
__builtin_strncpy(&var_4f, "HMAC(SHA-256)", 0xe)
int16_t var_68 = 0
Botan::MessageAuthenticationCode::create_or_throw(&var_50, &var_68)
int64_t* x0_2 = entry_x0[0xb]
int64_t var_38
entry_x0[0xb] = var_38

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
int64_t* x0_6 = entry_x0[0xc]
entry_x0[0xc] = var_38

if (x0_6 != 0)
    (*(*x0_6 + 8))()

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)

std::__ndk1::recursive_mutex::lock()
void* x8_12 = *entry_x0
entry_x0[0xa] = 0
entry_x0[9].d = 0
(*(x8_12 + 0x80))(entry_x0)
return std::__ndk1::recursive_mutex::unlock()
