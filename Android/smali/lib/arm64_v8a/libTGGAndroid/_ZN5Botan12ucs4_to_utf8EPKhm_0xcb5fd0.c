// 函数: _ZN5Botan12ucs4_to_utf8EPKhm
// 地址: 0xcb5fd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg2 & 3) != 0)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x20)
    int64_t var_30 = x0_2
    int128_t var_40 = data_71b7d0
    __builtin_strncpy(x0_2, "Invalid length for UCS-4 string", 0x20)
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint64_t i_1 = arg2 u>> 2
int64_t entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (i_1 == 0)
    return 

uint8_t const* x20_1 = arg1
uint64_t i

do
    sub_e8ad28(entry_x8.b, _byteswap(*x20_1))
    i = i_1
    i_1 -= 1
    x20_1 = &x20_1[4]
while (i != 1)
