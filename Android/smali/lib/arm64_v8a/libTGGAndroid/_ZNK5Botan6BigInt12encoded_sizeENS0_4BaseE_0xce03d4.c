// 函数: _ZNK5Botan6BigInt12encoded_sizeENS0_4BaseE
// 地址: 0xce03d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 == 0xa)
    return vcvtd_u64_f64(float.d(zx.q(Botan::BigInt::bits())) * 0.30102999565999999
        + fconvert.d(1.0))

if (entry_x1 == 0x10)
    int64_t x0_2 = Botan::BigInt::bits()
    int64_t x8_6
    
    if ((x0_2 & 7) == 0)
        x8_6 = 0
    else
        x8_6 = 8 - (x0_2 & 7)
    
    return (x8_6 + x0_2) u>> 2 & 0x3ffffffffffffffe

if (entry_x1 == 0x100)
    int64_t x0 = Botan::BigInt::bits()
    int64_t x8_2
    
    if ((x0 & 7) == 0)
        x8_2 = 0
    else
        x8_2 = 8 - (x0 & 7)
    
    return (x8_2 + x0) u>> 3

void** x0_6 = __cxa_allocate_exception(0x20)
int64_t x0_7
int128_t v0_1
x0_7, v0_1 = operator new(0x30)
int64_t var_30 = x0_7
v0_1 = data_71bb40
__builtin_strncpy(x0_7, "Unknown base for BigInt encoding", 0x21)
int128_t var_40 = v0_1
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
*x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
