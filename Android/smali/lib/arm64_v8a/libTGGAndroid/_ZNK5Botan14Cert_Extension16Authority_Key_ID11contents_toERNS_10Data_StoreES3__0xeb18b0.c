// 函数: _ZNK5Botan14Cert_Extension16Authority_Key_ID11contents_toERNS_10Data_StoreES3_
// 地址: 0xeb18b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x20 = *(arg1 + 8)
int64_t x8 = *(arg1 + 0x10)

if (x8 == x20)
    return 

void* x0
int128_t v0_1
x0, v0_1 = operator new(0x20)
int128_t var_50 = data_71cd20
__builtin_strncpy(x0, "X509v3.AuthorityKeyIdentifier", 0x1e)
Botan::hex_encode(x20, x8 - x20, true)
char var_38
std::__ndk1::multimap<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >
    * entry_x2
Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    entry_x2, &var_50, &var_38)
void* var_28

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(x0)
