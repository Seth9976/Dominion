// 函数: _ZN5Botan7Charset10digit2charEh
// 地址: 0xcd5ff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(arg1) u> 9)
    void** x0_9 = __cxa_allocate_exception(0x20)
    int64_t x0_10
    int128_t v0
    x0_10, v0 = operator new(0x30)
    int64_t var_30 = x0_10
    v0 = data_71bb40
    __builtin_strncpy(x0_10, "digit2char: Input is not a digit", 0x21)
    int128_t var_40 = v0
    *x0_9 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_9[1])
    *x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

switch (arg1)
    case 0
        return 0x30
    case 1
        return 0x31
    case 2
        return 0x32
    case 3
        return 0x33
    case 4
        return 0x34
    case 5
        return 0x35
    case 6
        return 0x36
    case 7
        return 0x37
    case 8
        return 0x38
    case 9
        return 0x39
