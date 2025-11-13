// 函数: _ZN5Botan3TLS7Channel24process_application_dataEmRKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xe5de08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x40) != 0)
    int64_t* entry_x2
    *entry_x2
    entry_x2[1]
    jump(*(**(arg1 + 0x18) + 0x18))

void** x0_1 = __cxa_allocate_exception(0x28)
int64_t x0_2
int128_t v0
x0_2, v0 = operator new(0x30)
v0 = data_71b5b0
int64_t var_30 = x0_2
__builtin_strncpy(x0_2, "Application data before handshake done", 0x27)
int128_t var_40 = v0
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
x0_1[4].d = 0xa
*x0_1 = _vtable_for_Botan::TLS::Unexpected_Message + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::TLS::Unexpected_Message, Botan::Exception::~Exception)
noreturn
