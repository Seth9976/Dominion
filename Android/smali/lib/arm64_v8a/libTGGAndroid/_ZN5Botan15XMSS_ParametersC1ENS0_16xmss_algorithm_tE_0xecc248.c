// 函数: _ZN5Botan15XMSS_ParametersC1ENS0_16xmss_algorithm_tE
// 地址: 0xecc248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
int32_t entry_x1
uint64_t x8 = zx.q(entry_x1 - 1)
void* x19 = arg1
*arg1 = entry_x1
*(arg1 + 8) = zx.o(0)
__builtin_memset(arg1 + 0x18, 0, 0x20)

if (x8.d u> 0xb)
    void** x0_24 = __cxa_allocate_exception(0x20, v0)
    std::__ndk1::to_string(entry_x1)
    void var_78
    int128_t* x0_27
    int128_t v0_1
    x0_27, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_78, nullptr)
    int64_t var_50 = x0_27[1].q
    int128_t var_60 = *x0_27
    __builtin_memset(x0_27, 0, 0x18)
    Botan::Exception::Exception(x0_24, "Not implemented")
    *x0_24 = _vtable_for_Botan::Not_Implemented + 0x10
    __cxa_throw(x0_24, _typeinfo_for_Botan::Not_Implemented, Botan::Exception::~Exception)
    noreturn

int64_t result
int32_t x8_1
int64_t x9

switch (x8)
    case 0
        __builtin_memcpy(x19 + 0x38, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x43\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 1
        x9 = 0x100
    case 1
        __builtin_memcpy(x19 + 0x38, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x43\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 1
        x9 = 0x100
    case 2
        __builtin_memcpy(x19 + 0x38, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x43\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 1
        x9 = 0x100
    case 3
        __builtin_memcpy(x19 + 0x38, 
            "\x40\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x83\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 2
        x9 = 0x200
    case 4
        __builtin_memcpy(x19 + 0x38, 
            "\x40\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x83\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 2
        x9 = 0x200
    case 5
        *(x19 + 0x48) = data_71b860
        __builtin_memcpy(x19 + 0x38, 
            "\x40\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x43\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 2
        x9 = 0x200
    case 6
        __builtin_memcpy(x19 + 0x38, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x43\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 3
        x9 = 0x100
    case 7
        __builtin_memcpy(x19 + 0x38, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x43\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 3
        x9 = 0x100
    case 8
        *(x19 + 0x38) = data_71d2a0
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 3
        x9 = 0x100
    case 9
        __builtin_memcpy(x19 + 0x38, 
            "\x40\x00\x00\x00\x00\x00\x00\x00\x0a\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x83\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 4
        x9 = 0x200
    case 0xa
        __builtin_memcpy(x19 + 0x38, 
            "\x40\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x83\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 4
        x9 = 0x200
    case 0xb
        __builtin_memcpy(x19 + 0x38, 
            "\x40\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x10\x00\x00\x00\x00\x00\x"
        "00\x00\x83\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 8)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
            arg1 + 0x20)
        x8_1 = 4
        x9 = 0x200

*(x19 + 0x58) = x9
*(x19 + 4) = x8_1
return result
