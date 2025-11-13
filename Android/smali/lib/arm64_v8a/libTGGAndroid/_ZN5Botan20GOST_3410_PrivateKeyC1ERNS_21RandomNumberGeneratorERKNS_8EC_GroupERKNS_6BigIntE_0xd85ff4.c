// 函数: _ZN5Botan20GOST_3410_PrivateKeyC1ERNS_21RandomNumberGeneratorERKNS_8EC_GroupERKNS_6BigIntE
// 地址: 0xd85ff4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0xd0) = 0
*(arg1 + 0x40) = zx.o(0)
*(arg1 + 0x70) = zx.o(0)
*(arg1 + 0x80) = zx.o(0)
*(arg1 + 0x90) = zx.o(0)
*(arg1 + 0xa0) = zx.o(0)
*(arg1 + 0xb0) = zx.o(0)
*(arg1 + 0xc0) = zx.o(0)
*(arg1 + 0x78) = -1
*(arg1 + 0xa0) = -1
*(arg1 + 0xc0) = 0
*(arg1 + 0xc8) = -1
*(arg1 + 0x80) = 1
*(arg1 + 0xa8) = 1
*(arg1 + 0xd0) = 1
*(arg1 + 0x50) = zx.o(0)
*(arg1 + 0x60) = zx.o(0)
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x98) = 0
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xd8) = 0
*(arg1 + 8) = construction_vtable_for_Botan::Private_Key-in-Botan::GOST_3410_PrivateKey + 0xc0
*(arg1 + 0x38) =
    construction_vtable_for_Botan::GOST_3410_PublicKey-in-Botan::GOST_3410_PrivateKey + 0x190
*arg1 = construction_vtable_for_Botan::GOST_3410_PublicKey-in-Botan::GOST_3410_PrivateKey + 0x90
Botan::EC_PrivateKey::EC_PrivateKey(arg1 + 8, _VTT_for_Botan::GOST_3410_PrivateKey + 0x20, arg2, 
    arg3.b)
*(arg1 + 0x38) = _vtable_for_Botan::GOST_3410_PrivateKey + 0x328
*arg1 = _vtable_for_Botan::GOST_3410_PrivateKey + 0x98
*(arg1 + 8) = _vtable_for_Botan::GOST_3410_PrivateKey + 0x1f0
void* result = Botan::EC_Group::data()
uint64_t x20_2 = *(result + 0x1e0)

if (x20_2 == 0x100 || x20_2 == 0x200)
    return result

void** x0_2 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(x20_2)
void var_68
int128_t* x0_5
int128_t v0
x0_5, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_68, nullptr)
int64_t var_40 = x0_5[1].q
int128_t var_50 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
