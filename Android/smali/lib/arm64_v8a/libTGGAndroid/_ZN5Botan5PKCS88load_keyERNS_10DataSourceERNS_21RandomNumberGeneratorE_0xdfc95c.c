// 函数: _ZN5Botan5PKCS88load_keyERNS_10DataSourceERNS_21RandomNumberGeneratorE
// 地址: 0xdfc95c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>{for `std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>'}
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    * const* var_40 = &var_60
int64_t result
sub_dfb2d0(&result, arg1, &var_60, 0)

if (&var_60 == var_40)
    (*var_40)->vFunc_4()
else if (var_40 != 0)
    (*var_40)->j_operator delete()

if (*(x19 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
