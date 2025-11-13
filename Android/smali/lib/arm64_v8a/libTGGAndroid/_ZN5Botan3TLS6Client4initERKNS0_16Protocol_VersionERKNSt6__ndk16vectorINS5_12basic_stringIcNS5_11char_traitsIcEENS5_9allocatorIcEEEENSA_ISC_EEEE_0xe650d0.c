// 函数: _ZN5Botan3TLS6Client4initERKNS0_16Protocol_VersionERKNSt6__ndk16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE
// 地址: 0xe650d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 0xd0)
char var_60 = 0x14
int64_t var_5f
__builtin_strncpy(&var_5f, "tls-client", 0xb)
char var_78
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_78)
(*(*x22 + 0x38))(x22, &var_60, &var_78)
void* var_68

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)
void* var_50

if ((zx.d(var_60) & 1) != 0)
    operator delete(var_50)
*arg2
char var_48
int64_t result = Botan::TLS::Client::send_client_hello(arg1, 
    Botan::TLS::Channel::create_handshake_state(arg1), 0, zx.q(*arg2), &var_48)

if ((zx.d(var_48) & 1) == 0)
    return result

void* var_38
return operator delete(var_38)
