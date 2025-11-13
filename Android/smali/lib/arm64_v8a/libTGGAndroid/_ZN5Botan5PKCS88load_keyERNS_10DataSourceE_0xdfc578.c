// 函数: _ZN5Botan5PKCS88load_keyERNS_10DataSourceE
// 地址: 0xdfc578
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>{for `std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>'}
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    * const* result_1 = &var_60
int64_t entry_x8
sub_dfb2d0(entry_x8, arg1, &var_60, 0)
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    * const* result = result_1

if (&var_60 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

if (*(x19 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
