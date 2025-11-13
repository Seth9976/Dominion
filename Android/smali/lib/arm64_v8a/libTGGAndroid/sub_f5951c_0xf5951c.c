// 函数: sub_f5951c
// 地址: 0xf5951c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

**arg2
void* x0_1 = Botan::X509_Certificate::data()
int16_t var_98

if (*(x0_1 + 0x2b8) == *(x0_1 + 0x2b0))
    var_98 = 0
else
    *(Botan::X509_Certificate::data() + 0x2b0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_98)

Botan::HTTP::GET_sync(&var_98, 1, *arg2[1])
void* var_88

if ((zx.d(var_98.b) & 1) != 0)
    operator delete(var_88)
Botan::HTTP::Response::throw_unless_ok()
void** x0_7 = operator new(0xa0)
x0_7[2] = 0
*x0_7 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::X509_CRL const, std::__ndk1::allocator<Botan::X509_CRL const> >
    + 0x10
x0_7[1] = 0
Botan::X509_CRL::X509_CRL(&x0_7[3])
*arg1 = &x0_7[3]
arg1[1] = x0_7
void var_48
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &var_48)
void* result_1
void* result = result_1

if (result != 0)
    void* result_2 = result
    result = operator delete(result)

char var_78

if ((zx.d(var_78) & 1) == 0)
    return result

void* var_68
return operator delete(var_68)
