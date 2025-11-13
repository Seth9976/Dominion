// 函数: _ZN5Botan13base32_decodeEPKcmb
// 地址: 0xcd05e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2

if ((arg2 & 7) == 0)
    x8_2 = 0
else
    x8_2 = 8 - (arg2 & 7)

uint64_t x24 = ((x8_2 + arg2) * 5) u>> 3
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* x23
void* x25

if (x24 == 0)
    x25 = nullptr
    x23 = nullptr
else
    void* x0_1 = Botan::allocate_memory(x24, 1)
    x25 = x0_1 + x24
    x23 = x0_1
    *entry_x8 = x0_1
    entry_x8[2] = x25
    memset(x0_1, 0, x24)
    entry_x8[1] = x25

int64_t var_48 = 0
int64_t result = sub_f26838(x23, arg1, arg2, &var_48, arg3.d & 1)

if (var_48 == arg2)
    void* x8_6 = x25 - x23
    
    if (result u<= x8_6)
        if (result u< x8_6)
            entry_x8[1] = x23 + result
        
        return result
    
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(entry_x8)

void** x0_4 = __cxa_allocate_exception(0x20)
char var_78 = 0xc
int32_t var_77
__builtin_strncpy(&var_77, "base32", 7)
int128_t* x0_6
int128_t v0
x0_6, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_78)
int64_t var_50 = x0_6[1].q
int128_t var_60 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
