// 函数: _ZN5Botan5PKCS88load_keyERNS_10DataSourceERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
// 地址: 0xdfc434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int128_t var_88
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_88)
int64_t var_50 = 0
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<std::__ndk1::__bind<Botan::PKCS8::load_key(Botan::DataSource&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_197, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::allocator<std::__ndk1::__bind<Botan::PKCS8::load_key(Botan::DataSource&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_197, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    ** result_1
int128_t v0
result_1, v0 = operator new(0x28)
v0 = var_88
__builtin_memset(&var_88, 0, 0x18)
*result_1 = &_vtable_for_std::__ndk1::__function::__func<std::__ndk1::__bind<Botan::PKCS8::load_key(Botan::DataSource&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_197, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::allocator<std::__ndk1::__bind<Botan::PKCS8::load_key(Botan::DataSource&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_197, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>{for `std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>'}
int64_t var_78
result_1[4] = var_78
*(result_1 + 0x10) = v0
void var_70
int64_t entry_x8
sub_dfb2d0(entry_x8, arg1, &var_70, 1)
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<std::__ndk1::__bind<Botan::PKCS8::load_key(Botan::DataSource&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_197, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::allocator<std::__ndk1::__bind<Botan::PKCS8::load_key(Botan::DataSource&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_197, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    ** result = result_1

if (&var_70 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->vFunc_5()

void* var_78_1

if ((zx.d(var_88.b) & 1) != 0)
    result = operator delete(var_78_1)

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
