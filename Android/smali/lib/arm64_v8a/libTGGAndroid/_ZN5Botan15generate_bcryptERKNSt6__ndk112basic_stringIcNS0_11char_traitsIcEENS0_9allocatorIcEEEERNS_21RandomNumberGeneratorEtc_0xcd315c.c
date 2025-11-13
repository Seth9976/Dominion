// 函数: _ZN5Botan15generate_bcryptERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERNS_21RandomNumberGeneratorEtc
// 地址: 0xcd315c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x9 = zx.d(arg4)
uint64_t x19 = zx.q(arg3.d)
uint64_t var_60

if (x9 - 0x61 u< 2 || x9 == 0x79)
    int64_t* x0 = operator new(0x10)
    *x0 = 0
    x0[1] = 0
    var_60 = x0
    void* var_58 = &x0[2]
    void* var_50 = &x0[2]
    (*(*arg2 + 0x10))(arg2, x0, 0x10)
    int128_t* entry_x8
    sub_cd34a0(entry_x8, arg1, &var_60, x19.w, x19, arg2)
    return operator delete(x0) __tailcall

void** x0_5 = __cxa_allocate_exception(0x20)
char var_97 = (arg4.d).b
char var_98 = 2
char var_96 = 0
int128_t* x0_7
int128_t v0_1
x0_7, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_98, nullptr)
int64_t var_70 = x0_7[1].q
int128_t var_80 = *x0_7
__builtin_memset(x0_7, 0, 0x18)
int128_t* x0_9
int128_t v0_2
x0_9, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_80)
int64_t var_50_1 = x0_9[1].q
var_60.o = *x0_9
__builtin_memset(x0_9, 0, 0x18)
*x0_5 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_5[1])
*x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
