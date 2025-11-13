// 函数: _ZN5Botan12EC_PublicKey18set_point_encodingENS_8PointGFp16Compression_TypeE
// 地址: 0xd352a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u< 3)
    *(arg1 + 0xa4) = entry_x1
    return 

void** x0 = __cxa_allocate_exception(0x20)
int64_t x0_1
int128_t v0
x0_1, v0 = operator new(0x30)
v0 = data_71c500
int64_t var_30 = x0_1
__builtin_strncpy(x0_1, "Invalid point encoding for EC_PublicKey", 0x28)
int128_t var_40 = v0
*x0 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0[1])
*x0 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
