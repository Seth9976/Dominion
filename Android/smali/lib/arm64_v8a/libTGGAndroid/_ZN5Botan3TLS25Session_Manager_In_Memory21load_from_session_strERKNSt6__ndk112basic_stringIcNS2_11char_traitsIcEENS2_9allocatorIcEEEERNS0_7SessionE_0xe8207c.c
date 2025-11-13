// 函数: _ZN5Botan3TLS25Session_Manager_In_Memory21load_from_session_strERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERNS0_7SessionE
// 地址: 0xe8207c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg1 + 0x60)

if (arg1 + 0x68 == x0_1)
    return 0

void* var_120
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_120)
uint8_t* x0_3 = *(x0_1 + 0x38)
Botan::TLS::Session::decrypt(x0_3, *(x0_1 + 0x40) - x0_3, &var_120)
Botan::TLS::Session* entry_x2
Botan::TLS::Session::operator=(entry_x2)
Botan::TLS::Session::~Session()
void* x0_5 = var_120

if (x0_5 != 0)
    void* var_118_1 = x0_5
    int64_t var_110
    Botan::deallocate_memory(x0_5, var_110 - x0_5, 1)

int64_t x0_6 = std::__ndk1::chrono::system_clock::now()
int64_t x21_1 = *entry_x2 + *(arg1 + 0x38) * 0xf4240

if (x21_1 s< x0_6)
    std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > > >::erase(
        arg1 + 0x60)

return zx.q(x21_1 s>= x0_6 ? 1 : 0)
