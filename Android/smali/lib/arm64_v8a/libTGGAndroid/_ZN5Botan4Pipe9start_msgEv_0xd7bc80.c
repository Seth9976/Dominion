// 函数: _ZN5Botan4Pipe9start_msgEv
// 地址: 0xd7bc80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Filter* entry_x0

if (zx.d(*(entry_x0 + 0x20)) != 0)
    void** x0_4 = __cxa_allocate_exception(0x20)
    int64_t x0_5
    int128_t v0
    x0_5, v0 = operator new(0x30)
    (*" already started")[0].o
    int64_t var_40 = x0_5
    v0 = data_71abd0
    __builtin_strncpy(x0_5, "Pipe::start_msg: Message was already started", 0x2d)
    int128_t var_50 = v0
    *x0_4 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_4[1])
    *x0_4 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

if (*(entry_x0 + 8) == 0)
    void** x0 = operator new(0x50)
    struct Botan::Filter::Botan::(anonymous namespace)::Null_Filter::VTable** x19 = x0
    *x0 = _vtable_for_Botan::Filter + 0x10
    *(x0 + 8) = zx.o(0)
    __builtin_memset(&x0[3], 0, 0x20)
    std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(&x0[4])
    __builtin_memset(&x19[7], 0, 0x11)
    *x19 = &_vtable_for_Botan::(anonymous namespace)::Null_Filter{for `Botan::Filter'}
    *(entry_x0 + 8) = x19

Botan::Pipe::find_endpoints(entry_x0)
*(entry_x0 + 8)
int64_t result = Botan::Filter::new_msg()
*(entry_x0 + 0x20) = 1
return result
