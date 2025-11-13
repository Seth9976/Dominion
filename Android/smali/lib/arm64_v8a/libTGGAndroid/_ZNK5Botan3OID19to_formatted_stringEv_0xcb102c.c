// 函数: _ZNK5Botan3OID19to_formatted_stringEv
// 地址: 0xcb102c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::OID* entry_x0
Botan::OIDS::oid2str_or_empty(entry_x0)
char var_38
uint64_t x8 = zx.q(var_38)
uint64_t x8_1
uint64_t var_30

if ((x8.d & 1) == 0)
    x8_1 = x8 u>> 1
else
    x8_1 = var_30
int64_t result
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8

if (x8_1 == 0)
    result = Botan::OID::to_string()
else
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        entry_x8)

if ((zx.d(var_38) & 1) == 0)
    return result

void* var_28
return operator delete(var_28)
