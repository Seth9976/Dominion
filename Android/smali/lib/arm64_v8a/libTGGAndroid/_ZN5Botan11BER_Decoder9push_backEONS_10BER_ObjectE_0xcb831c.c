// 函数: _ZN5Botan11BER_Decoder9push_backEONS_10BER_ObjectE
// 地址: 0xcb831c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) != 0xff00)
    void** x0 = __cxa_allocate_exception(0x20)
    int64_t x0_1
    int128_t v0
    x0_1, v0 = operator new(0x30)
    (*" back is allowed")[0].o
    int64_t var_40 = x0_1
    v0 = data_71c1e0
    __builtin_strncpy(x0_1, "BER_Decoder: Only one push back is allowed", 0x2b)
    int128_t var_50 = v0
    *x0 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0[1])
    *x0 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

void* result = *(arg1 + 0x10)
int64_t* entry_x1
*(arg1 + 8) = *entry_x1

if (result != 0)
    int64_t x8_2 = *(arg1 + 0x20)
    *(arg1 + 0x18) = result
    result = Botan::deallocate_memory(result, x8_2 - result, 1)
    __builtin_memset(arg1 + 0x10, 0, 0x18)

*(arg1 + 0x10) = entry_x1[1]
*(arg1 + 0x18) = entry_x1[2]
*(arg1 + 0x20) = entry_x1[3]
__builtin_memset(&entry_x1[1], 0, 0x18)
return result
