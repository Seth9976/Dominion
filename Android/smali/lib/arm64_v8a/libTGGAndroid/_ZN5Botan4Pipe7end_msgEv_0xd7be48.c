// 函数: _ZN5Botan4Pipe7end_msgEv
// 地址: 0xd7be48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Filter* entry_x0

if (zx.d(*(entry_x0 + 0x20)) == 0)
    void** x0_7 = __cxa_allocate_exception(0x20)
    int64_t x0_8
    int128_t v0_1
    x0_8, v0_1 = operator new(0x30)
    v0_1 = data_71aa70
    int64_t var_30 = x0_8
    __builtin_strncpy(x0_8, "Pipe::end_msg: Message was already ended", 0x29)
    int128_t var_40 = v0_1
    *x0_7 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_7[1])
    *x0_7 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

*(entry_x0 + 8)
Botan::Filter::finish_msg()
*(entry_x0 + 8)
Botan::Pipe::clear_endpoints(entry_x0)
int64_t* x20 = *(entry_x0 + 8)

if (x20 != 0 && __dynamic_cast(x20, _typeinfo_for_Botan::Filter, 
        &_typeinfo_for_Botan::(anonymous namespace)::Null_Filter, 0) != 0)
    (*(*x20 + 0x30))(x20)
    *(entry_x0 + 8) = 0

*(entry_x0 + 0x10)
*(entry_x0 + 0x20) = 0
return Botan::Output_Buffers::retire() __tailcall
