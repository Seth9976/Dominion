// 函数: _ZN5Botan3TLS25Session_Manager_In_Memory10remove_allEv
// 地址: 0xe823f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x70)
*(entry_x0 + 0x80)
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<Botan::TLS::Server_Information, std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<Botan::TLS::Server_Information>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    entry_x0 + 0x78)
*(entry_x0 + 0x78) = entry_x0 + 0x80
*(entry_x0 + 0x88) = 0
*(entry_x0 + 0x80) = 0
*(entry_x0 + 0x68)
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::destroy(
    entry_x0 + 0x60)
*(entry_x0 + 0x60) = entry_x0 + 0x68
*(entry_x0 + 0x70) = 0
*(entry_x0 + 0x68) = 0
int64_t x1_2 = *(entry_x0 + 0x48)
int64_t x8 = *(entry_x0 + 0x50)
int64_t* x21_1 = *(entry_x0 + 0x40)
int64_t x9 = x8 - x1_2

if (x9 u<= 0x1f)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(entry_x0 + 0x48)
    x1_2 = *(entry_x0 + 0x48)
    x8 = *(entry_x0 + 0x50)
else if (x9 != 0x20)
    x8 = x1_2 + 0x20
    *(entry_x0 + 0x50) = x8

(*(*x21_1 + 0x10))(x21_1, x1_2, x8 - x1_2)
return result
