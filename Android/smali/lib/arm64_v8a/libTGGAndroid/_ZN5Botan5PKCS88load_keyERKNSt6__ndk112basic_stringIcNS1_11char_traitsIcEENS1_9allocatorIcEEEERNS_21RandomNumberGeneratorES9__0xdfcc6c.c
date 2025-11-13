// 函数: _ZN5Botan5PKCS88load_keyERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_21RandomNumberGeneratorES9_
// 地址: 0xdfcc6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
void* __offset(vtable_for_Botan::DataSource_Stream, 0x10) var_c8
Botan::DataSource_Stream::DataSource_Stream(&var_c8, arg1.b)
int128_t var_e8
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_e8)
int64_t var_70 = 0
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<std::__ndk1::__bind<Botan::PKCS8::load_key(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_199, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::allocator<std::__ndk1::__bind<Botan::PKCS8::load_key(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_199, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    ** x0_2
int128_t v0
x0_2, v0 = operator new(0x28)
v0 = var_e8
__builtin_memset(&var_e8, 0, 0x18)
*x0_2 = &_vtable_for_std::__ndk1::__function::__func<std::__ndk1::__bind<Botan::PKCS8::load_key(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_199, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::allocator<std::__ndk1::__bind<Botan::PKCS8::load_key(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_199, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>{for `std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>'}
int64_t var_d8
x0_2[4] = var_d8
*(x0_2 + 0x10) = v0
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<std::__ndk1::__bind<Botan::PKCS8::load_key(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_199, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::allocator<std::__ndk1::__bind<Botan::PKCS8::load_key(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::RandomNumberGenerator&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)::$_199, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    ** x0_3 = sub_f48320(x0_2)
int64_t result_1
void var_60
sub_dfb2d0(&result_1, &var_c8, &var_60, 1)

if (&var_60 == x0_3)
    (*x0_3)->vFunc_4()
else if (x0_3 != 0)
    (*x0_3)->vFunc_5()

int64_t result = result_1
void var_90

if (&var_90 == x0_2)
    (*x0_2)->vFunc_4()
else if (x0_2 != 0)
    (*x0_2)->vFunc_5()

void* var_d8_1

if ((zx.d(var_e8.b) & 1) != 0)
    operator delete(var_d8_1)
int64_t var_a8_1 = 0
var_c8 = _vtable_for_Botan::DataSource_Stream + 0x10
int64_t* var_a8

if (var_a8 != 0)
    (*(*var_a8 + 8))()

char var_c0
void* var_b0

if ((zx.d(var_c0) & 1) != 0)
    operator delete(var_b0)

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
