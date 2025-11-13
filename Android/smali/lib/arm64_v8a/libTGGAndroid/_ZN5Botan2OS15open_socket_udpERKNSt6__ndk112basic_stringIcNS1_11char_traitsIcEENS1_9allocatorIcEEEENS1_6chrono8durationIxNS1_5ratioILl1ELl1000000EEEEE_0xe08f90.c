// 函数: _ZN5Botan2OS15open_socket_udpERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6chrono8durationIxNS1_5ratioILl1ELl1000000EEEEE
// 地址: 0xe08f90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::URI::fromAny(arg1)
int16_t var_28
uint32_t x0 = zx.d(var_28)
char var_60

if (x0 == 0)
    void** x0_5 = __cxa_allocate_exception(0x20)
    __builtin_strncpy(&var_60, ",UDP port not specified", 0x18)
    *x0_5 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_5[1])
    *x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

std::__ndk1::to_string(x0)
char var_40
int64_t result = Botan::OS::open_socket_udp(&var_40, &var_60, arg2)
void* var_30

if ((zx.d(var_60) & 1) != 0)
    int128_t var_5f
    result = operator delete(var_5f:0xf.q)
    
    if ((zx.d(var_40) & 1) != 0)
        return operator delete(var_30)
else if ((zx.d(var_40) & 1) != 0)
    return operator delete(var_30)
return result
