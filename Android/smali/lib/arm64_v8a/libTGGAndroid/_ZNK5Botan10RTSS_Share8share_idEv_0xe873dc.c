// 函数: _ZNK5Botan10RTSS_Share8share_idEv
// 地址: 0xe873dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x8 = *entry_x0
int64_t x9 = entry_x0[1]

if (x9 == x8)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x30)
    v0 = data_71b7f0
    int64_t var_30 = x0_2
    __builtin_strncpy(x0_2, "RTSS_Share::share_id not initialized", 0x25)
    int128_t var_40 = v0
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

if (x9 - x8 u> 0x14)
    return zx.q(*(x8 + 0x14))

void** x0_6 = __cxa_allocate_exception(0x20)
int64_t x0_7
int128_t v0_1
x0_7, v0_1 = operator new(0x30)
v0_1 = data_71c500
int64_t var_30_1 = x0_7
__builtin_strncpy(x0_7, "RTSS_Share::share_id invalid share data", 0x28)
int128_t var_40_1 = v0_1
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
*x0_6 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
