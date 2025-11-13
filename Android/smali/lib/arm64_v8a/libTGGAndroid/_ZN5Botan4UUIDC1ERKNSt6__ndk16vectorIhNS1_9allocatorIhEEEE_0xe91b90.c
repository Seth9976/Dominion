// 函数: _ZN5Botan4UUIDC1ERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEE
// 地址: 0xe91b90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
uint8_t* x1 = *entry_x1

if (entry_x1[1] - x1 == 0x10)
    if (arg1 != entry_x1)
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(arg1, x1)
    
    return 

void** x0_1 = __cxa_allocate_exception(0x20)
uint8_t* x0_2 = *entry_x1
Botan::hex_encode(x0_2, entry_x1[1] - x0_2, true)
void var_68
int128_t* x0_4
int128_t v0
x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_68, nullptr)
int64_t var_40 = x0_4[1].q
int128_t var_50 = *x0_4
__builtin_memset(x0_4, 0, 0x18)
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
