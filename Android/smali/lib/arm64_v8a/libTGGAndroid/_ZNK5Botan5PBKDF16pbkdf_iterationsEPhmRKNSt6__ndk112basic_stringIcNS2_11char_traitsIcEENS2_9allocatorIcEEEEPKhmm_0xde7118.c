// 函数: _ZNK5Botan5PBKDF16pbkdf_iterationsEPhmRKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKhmm
// 地址: 0xde7118
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_58[0x10]
int64_t entry_x6

if (entry_x6 == 0)
    void** x0_1 = __cxa_allocate_exception(0x20)
    (*(*arg1 + 8))(arg1)
    int128_t* x0_4
    int128_t v0
    x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_58)
    int64_t var_30_1 = x0_4[1].q
    int128_t var_40_1 = *x0_4
    __builtin_memset(x0_4, 0, 0x18)
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t result = (*(*arg1 + 0x20))(arg1, arg2, arg3, arg4, arg5, arg6, entry_x6, 0)

if (result == entry_x6)
    return result

int64_t* x0_7 = Botan::assertion_failure("iterations == iterations_run", 
    "Expected PBKDF iterations", "pbkdf_iterations", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf58c)
char var_40
void* var_30

if ((zx.d(var_40) & 1) != 0)
    operator delete(var_30)
void* var_48

if ((zx.d(var_58[0]) & 1) != 0)
    operator delete(var_48)
sub_1101e04(x0_7)
noreturn
