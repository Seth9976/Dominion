// 函数: sub_e19604
// 地址: 0xe19604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__cxa_free_exception()

if (arg2 != 1)
    sub_1101e04(arg1)
    noreturn

int64_t* x0_1 = __cxa_begin_catch(arg1)
void** x0_2 = __cxa_allocate_exception(0x20)
char* x0_4 = (*(*x0_1 + 0x10))(x0_1)
size_t x0_5 = strlen(x0_4)

if (x0_5 u>= -0x10)
    x0_5 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

int64_t arg_40
int64_t x22

if (x0_5 u>= 0x17)
    uint64_t x23_1 = (x0_5 + 0x10) & 0xfffffffffffffff0
    int64_t x0_7 = operator new(x23_1)
    x22 = x0_7
    size_t arg_48 = x0_5
    int64_t arg_50 = x0_7
    arg_40 = x23_1 | 1
    memcpy(x22, x0_4, x0_5)
else
    x22 = &arg_40 | 1
    arg_40.b = (x0_5.d << 1).b
    
    if (x0_5 != 0)
        memcpy(x22, x0_4, x0_5)

*(x22 + x0_5) = 0
int128_t* x0_10
int128_t v0
x0_10, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &arg_40, nullptr)
int64_t arg_70 = x0_10[1].q
int128_t arg_60 = *x0_10
__builtin_memset(x0_10, 0, 0x18)
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
