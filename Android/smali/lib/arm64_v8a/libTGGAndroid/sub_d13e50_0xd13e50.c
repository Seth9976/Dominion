// 函数: sub_d13e50
// 地址: 0xd13e50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*arg1)
uint64_t x8 = *(arg1 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 == 0xd)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "DH PARAMETERS") == 0)
        return 2
    
    uint64_t x10_2 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1

uint64_t x11_1

if ((x9 & 0xff) == 0)
    x11_1 = x10_1
else
    x11_1 = x8

if (x11_1 == 0xe)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "DSA PARAMETERS") == 0)
        return 1
    
    uint64_t x10_3 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_3.d & 1
    x10_1 = x10_3 u>> 1

uint64_t x11_2

if ((x9 & 0xff) == 0)
    x11_2 = x10_1
else
    x11_2 = x8

if (x11_2 != 0x12)
    goto label_d13f30

int32_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    arg1, 0, -ffffffffffffffff, "X942 DH PARAMETERS")

if (result != 0)
    uint64_t x10_4 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_4.d & 1
    x10_1 = x10_4 u>> 1
label_d13f30:
    uint64_t x8_1
    
    if ((x9 & 0xff) == 0)
        x8_1 = x10_1
    else
        x8_1 = x8
    
    if (x8_1 == 0x13)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "X9.42 DH PARAMETERS")
    
    if (x8_1 != 0x13 || result != 0)
        void** x0_8 = __cxa_allocate_exception(0x20)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "DL_Group: Invalid PEM label ", arg1)
        *x0_8 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_8[1])
        *x0_8 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_8, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn

return result
