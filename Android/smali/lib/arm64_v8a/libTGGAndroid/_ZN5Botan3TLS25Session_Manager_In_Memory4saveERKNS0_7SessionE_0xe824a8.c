// 函数: _ZN5Botan3TLS25Session_Manager_In_Memory4saveERKNS0_7SessionE
// 地址: 0xe824a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::mutex::lock()
int64_t x8 = *(arg1 + 0x30)

if (x8 != 0 && *(arg1 + 0x70) u>= x8)
    do
        *(arg1 + 0x60)
        std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::erase(
            arg1 + 0x60)
    while (*(arg1 + 0x70) u>= *(arg1 + 0x30))

Botan::OctetString* entry_x1
uint8_t* x0_2 = *(entry_x1 + 8)
Botan::hex_encode(x0_2, *(entry_x1 + 0x10) - x0_2, true)
void* var_88
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_88)
*(arg1 + 0x40)
Botan::TLS::Session::encrypt(entry_x1, &var_88)
char var_58
char* var_38 = &var_58
void* x0_6
int128_t v0
x0_6, v0 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(
    arg1 + 0x60, &var_58)
void* x0_7 = *(x0_6 + 0x38)

if (x0_7 != 0)
    *(x0_6 + 0x40) = x0_7
    operator delete(x0_7)
    __builtin_memset(x0_6 + 0x38, 0, 0x18)

int128_t var_70
*(x0_6 + 0x38) = var_70
int64_t var_60
*(x0_6 + 0x48) = var_60
void* x0_8 = var_88
__builtin_memset(&var_70, 0, 0x18)

if (x0_8 != 0)
    void* var_80_1 = x0_8
    int64_t var_78
    Botan::deallocate_memory(x0_8, var_78 - x0_8, 1)

if (*(entry_x1 + 0x54) == 1)
    uint64_t x8_6 = zx.q(*(entry_x1 + 0x78))
    uint64_t x8_7
    
    if ((x8_6.d & 1) == 0)
        x8_7 = x8_6 u>> 1
    else
        x8_7 = *(entry_x1 + 0x80)
    
    if (x8_7 != 0)
        var_70.q = entry_x1 + 0x78
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(std::__ndk1::__tree<std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<Botan::TLS::Server_Information, std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<Botan::TLS::Server_Information>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::TLS::Server_Information, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__emplace_unique_key_args<Botan::TLS::Server_Information, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<Botan::TLS::Server_Information const&>, std::__ndk1::tuple<> >(
            arg1 + 0x78, entry_x1 + 0x78) + 0x58)

void* var_48

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)
return std::__ndk1::mutex::unlock()
