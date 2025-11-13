// 函数: _ZN5Botan4Pipe13append_filterEPNS_6FilterE
// 地址: 0xd7c2b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x10)

if (*(x8 + 0x28) == neg.q(*(x8 + 0x30)))
    return Botan::Pipe::do_append(arg1) __tailcall

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v0_1
x0_2, v0_1 = operator new(0x30)
(*" after start_msg")[0].o
int64_t var_30 = x0_2
v0_1 = data_71c860
__builtin_strncpy(x0_2, "Cannot call Pipe::append_filter after start_msg", 0x30)
int128_t var_40 = v0_1
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
