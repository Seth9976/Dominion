// 函数: sub_e195a4
// 地址: 0xe195a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg3) & 1) != 0)
    operator delete(arg4)

if (arg2 != 1)
    sub_1101e04(arg1)
    noreturn

int64_t* x0_2 = __cxa_begin_catch(arg1)
void** x0_3 = __cxa_allocate_exception(0x20)
char* x0_5 = (*(*x0_2 + 0x10))(x0_2)
size_t x0_6 = strlen(x0_5)

if (x0_6 u>= -0x10)
    x0_6 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

int64_t arg_40
int64_t x22

if (x0_6 u>= 0x17)
    uint64_t x23_1 = (x0_6 + 0x10) & 0xfffffffffffffff0
    int64_t x0_8 = operator new(x23_1)
    x22 = x0_8
    size_t arg_48 = x0_6
    int64_t arg_50 = x0_8
    arg_40 = x23_1 | 1
    memcpy(x22, x0_5, x0_6)
else
    x22 = &arg_40 | 1
    arg_40.b = (x0_6.d << 1).b
    
    if (x0_6 != 0)
        memcpy(x22, x0_5, x0_6)

*(x22 + x0_6) = 0
int128_t* x0_11
int128_t v0
x0_11, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &arg_40, nullptr)
arg4 = x0_11[1].q
arg3.o = *x0_11
__builtin_memset(x0_11, 0, 0x18)
*x0_3 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_3[1])
*x0_3 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_3, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
