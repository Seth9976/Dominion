// 函数: _ZNK5Botan3TLS6Server19get_peer_cert_chainERKNS0_15Handshake_StateE
// 地址: 0xe791d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
void* result = __dynamic_cast(entry_x1, _typeinfo_for_Botan::TLS::Handshake_State, 
    _typeinfo_for_Botan::TLS::Server_Handshake_State, 0)

if (result == 0)
    __cxa_bad_cast()
    noreturn

std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >* 
    entry_x8

if (*(result + 0x180) != *(result + 0x178))
    return std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::vector(
        entry_x8) __tailcall

if (*(result + 0x138) != 0)
    return std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::vector(
        entry_x8) __tailcall

__builtin_memset(entry_x8, 0, 0x18)
return result
