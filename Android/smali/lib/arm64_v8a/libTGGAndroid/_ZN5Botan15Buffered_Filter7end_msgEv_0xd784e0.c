// 函数: _ZN5Botan15Buffered_Filter7end_msgEv
// 地址: 0xd784e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x2 = entry_x0[6]
int64_t x8 = entry_x0[2]
int64_t x8_1 = x2 - x8

if (x2 u< x8)
    void** x0_2 = __cxa_allocate_exception(0x20)
    int64_t x0_3
    int128_t v0
    x0_3, v0 = operator new(0x30)
    (*"out enough input")[0].o
    int64_t var_30 = x0_3
    v0 = data_71abd0
    __builtin_strncpy(x0_3, "Buffered filter end_msg without enough input", 0x2d)
    int128_t var_40 = v0
    *x0_2 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_2[1])
    *x0_2 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int64_t x9 = entry_x0[1]
int64_t x1
int64_t x8_3

if (x9 u<= x8_1)
    int64_t x20_1 = x8_1 u/ x9 * x9
    (*(*entry_x0 + 0x10))(entry_x0, entry_x0[3], x20_1)
    x8_3 = *(*entry_x0 + 0x18)
    x1 = entry_x0[3] + x20_1
    x2 = entry_x0[6] - x20_1
else
    x1 = entry_x0[3]
    x8_3 = *(*entry_x0 + 0x18)

int64_t result = x8_3(entry_x0, x1, x2)
entry_x0[6] = 0
return result
