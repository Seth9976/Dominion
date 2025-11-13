// 函数: _ZN5Botan21ChaCha20Poly1305_ModeC2Ev
// 地址: 0xd012dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::ChaCha20Poly1305_Mode + 0x10
char var_58 = 0xc
int32_t var_57
__builtin_strncpy(&var_57, "ChaCha", 7)
int16_t var_70 = 0
Botan::StreamCipher::create(&var_58, &var_70)
void* var_60

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)

void* var_48

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)

var_58 = 0x10
__builtin_strncpy(&var_57, "Poly1305", 9)
var_70 = 0
int64_t result
int128_t v0
result, v0 = Botan::MessageAuthenticationCode::create(&var_58, &var_70)

if ((zx.d(var_70.b) & 1) != 0)
    result, v0 = operator delete(var_60)

if ((zx.d(var_58) & 1) != 0)
    result, v0 = operator delete(var_48)

v0.q = 0
v0:8.q = 0
__builtin_memset(&entry_x0[3], 0, 0x28)

if (entry_x0[1] != 0 && entry_x0[2] != 0)
    return result

void* var_38 = &entry_x0[3]
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_6 = __cxa_allocate_exception(0x20, v0)
__builtin_strncpy(&var_58, " ChaCha20Poly1305", 0x12)
Botan::Algorithm_Not_Found::Algorithm_Not_Found(x0_6)
__cxa_throw(x0_6, _typeinfo_for_Botan::Algorithm_Not_Found, Botan::Exception::~Exception)
noreturn
