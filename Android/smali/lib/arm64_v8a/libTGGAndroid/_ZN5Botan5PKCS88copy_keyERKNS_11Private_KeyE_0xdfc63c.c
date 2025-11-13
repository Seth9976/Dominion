// 函数: _ZN5Botan5PKCS88copy_keyERKNS_11Private_KeyE
// 地址: 0xdfc63c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
Botan::PKCS8::PEM_encode(arg1)
void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_88
Botan::DataSource_Memory::DataSource_Memory(&var_88)
char var_60
void* var_50

if ((zx.d(var_60) & 1) != 0)
    operator delete(var_50)
var_60.q = &_vtable_for_std::__ndk1::__function::__func<Botan::PKCS8::load_key(Botan::DataSource&)::$_198, std::__ndk1::allocator<Botan::PKCS8::load_key(Botan::DataSource&)::$_198>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>{for `std::__ndk1::__function::__base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > ()>'}
char* var_40 = &var_60
int64_t entry_x8
sub_dfb2d0(entry_x8, &var_88, &var_60, 0)

if (&var_60 == var_40)
    (*(*var_40 + 0x20))()
else if (var_40 != 0)
    (*(*var_40 + 0x28))()

void* result_1
void* result = result_1
var_88 = _vtable_for_Botan::DataSource_Memory + 0x10

if (result != 0)
    void* result_2 = result
    int64_t var_70
    result = Botan::deallocate_memory(result, var_70 - result, 1)

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
