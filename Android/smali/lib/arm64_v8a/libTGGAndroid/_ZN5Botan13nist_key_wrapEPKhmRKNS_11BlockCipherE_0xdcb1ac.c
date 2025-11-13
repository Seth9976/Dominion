// 函数: _ZN5Botan13nist_key_wrapEPKhmRKNS_11BlockCipherE
// 地址: 0xdcb1ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((*(*arg3 + 0x30))(arg3) != 0x10)
    void** x0_4 = __cxa_allocate_exception(0x20)
    int64_t x0_5
    int128_t v0_1
    x0_5, v0_1 = operator new(0x40)
    v0_1 = data_71d0c0
    int64_t var_40 = x0_5
    __builtin_strncpy(x0_5, "NIST key wrap algorithm requires a 128-bit cipher", 0x32)
    int128_t var_50 = v0_1
    *x0_4 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_4[1])
    *x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if ((arg2 & 7) == 0)
    int64_t* entry_x8
    return sub_dcb38c(entry_x8, arg1, arg2, arg3, -0x595959595959595a) __tailcall

void** x0_9 = __cxa_allocate_exception(0x20)
int64_t x0_10
int128_t v0_2
x0_10, v0_2 = operator new(0x30)
int64_t var_40_1 = x0_10
v0_2 = data_71bb40
__builtin_strncpy(x0_10, "Bad input size for NIST key wrap", 0x21)
int128_t var_50_1 = v0_2
*x0_9 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_9[1])
*x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
