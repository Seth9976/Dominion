// 函数: _ZN5Botan3TLS24handshake_type_to_stringENS0_14Handshake_TypeE
// 地址: 0xe72430
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1

if (arg1 u> 0x16)
    if (x20 == 0xfe)
        return "change_cipher_spec"
    
    if (x20 == 0xff)
        return "invalid"
else
    switch (x20)
        case 0
            return "hello_request"
        case 1
            return "client_hello"
        case 2
            return "server_hello"
        case 3
            return "hello_verify_request"
        case 4
            return "new_session_ticket"
        case 0xb
            return "certificate"
        case 0xc
            return "server_key_exchange"
        case 0xd
            return "certificate_request"
        case 0xe
            return "server_hello_done"
        case 0xf
            return "certificate_verify"
        case 0x10
            return "client_key_exchange"
        case 0x14
            return "finished"
        case 0x15
            return "certificate_url"
        case 0x16
            return "certificate_status"

void** x0_15 = __cxa_allocate_exception(0x28)
std::__ndk1::to_string(x20)
void var_58
int128_t* x0_18
int128_t v0
x0_18, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_58, nullptr)
int64_t var_30 = x0_18[1].q
int128_t var_40 = *x0_18
__builtin_memset(x0_18, 0, 0x18)
*x0_15 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_15[1])
x0_15[4].d = 0xa
*x0_15 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
__cxa_throw(x0_15, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
noreturn
