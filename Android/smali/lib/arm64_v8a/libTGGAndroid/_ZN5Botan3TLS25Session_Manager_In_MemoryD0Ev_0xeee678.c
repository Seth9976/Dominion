// 函数: _ZN5Botan3TLS25Session_Manager_In_MemoryD0Ev
// 地址: 0xeee678
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
entry_x0[0x10]
*entry_x0 = _vtable_for_Botan::TLS::Session_Manager_In_Memory + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<Botan::TLS::Server_Information, std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<Botan::TLS::Server_Information>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &entry_x0[0xf])
entry_x0[0xd]
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::destroy(
    &entry_x0[0xc])
void* x0_2 = entry_x0[9]

if (x0_2 != 0)
    int64_t x8_1 = entry_x0[0xb]
    entry_x0[0xa] = x0_2
    Botan::deallocate_memory(x0_2, x8_1 - x0_2, 1)

std::__ndk1::mutex::~mutex()
return operator delete(entry_x0) __tailcall
