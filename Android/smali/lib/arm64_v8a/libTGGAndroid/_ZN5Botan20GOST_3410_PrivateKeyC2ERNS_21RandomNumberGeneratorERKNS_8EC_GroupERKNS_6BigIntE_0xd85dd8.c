// 函数: _ZN5Botan20GOST_3410_PrivateKeyC2ERNS_21RandomNumberGeneratorERKNS_8EC_GroupERKNS_6BigIntE
// 地址: 0xd85dd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 8)
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x18)
bool entry_x3
Botan::EC_PrivateKey::EC_PrivateKey(arg1 + 8, arg2 + 0x20, arg3, entry_x3)
void* x8_4 = *arg2
*arg1 = x8_4
*(arg1 + *(x8_4 - 0x88)) = *(arg2 + 0x40)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x48)
void* x9_4 = *arg1
*(arg1 + 8) = *(arg2 + 0x50)
*(arg1 + *(x9_4 - 0x98)) = *(arg2 + 0x58)
void* result = Botan::EC_Group::data()
uint64_t x23 = *(result + 0x1e0)

if (x23 == 0x100 || x23 == 0x200)
    return result

void** x0_2 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(x23)
void var_78
int128_t* x0_5
int128_t v0
x0_5, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_78, nullptr)
int64_t var_50 = x0_5[1].q
int128_t var_60 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
