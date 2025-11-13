// 函数: _ZN5Botan3TLS12Server_HelloD2Ev
// 地址: 0xeee178
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
entry_x0[0xa]
*entry_x0 = _vtable_for_Botan::TLS::Server_Hello + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::__map_value_compare<Botan::TLS::Handshake_Extension_Type, std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::less<Botan::TLS::Handshake_Extension_Type>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > > > >::destroy(
    &entry_x0[9])
void* x0_1 = entry_x0[5]

if (x0_1 != 0)
    entry_x0[6] = x0_1
    operator delete(x0_1)

void* result = entry_x0[2]

if (result == 0)
    return result

entry_x0[3] = result
return operator delete(result) __tailcall
