// 函数: _ZN5Botan5PKCS88load_keyERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS_21RandomNumberGeneratorE
// 地址: 0xdfce98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
void* __offset(vtable_for_Botan::DataSource_Stream, 0x10) var_98
Botan::DataSource_Stream::DataSource_Stream(&var_98, arg1.b)
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>{for `std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>'}
struct std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>::VTable
    * const* var_40 = &var_60
int64_t result_1
sub_dfb2d0(&result_1, &var_98, &var_60, 0)

if (&var_60 == var_40)
    (*var_40)->vFunc_4()
else if (var_40 != 0)
    (*var_40)->j_operator delete()

int64_t result = result_1
int64_t var_78_1 = 0
var_98 = _vtable_for_Botan::DataSource_Stream + 0x10
int64_t* var_78

if (var_78 != 0)
    (*(*var_78 + 8))()

char var_90
void* var_80

if ((zx.d(var_90) & 1) != 0)
    operator delete(var_80)

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
