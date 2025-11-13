// 函数: _ZN5Botan17Ed25519_PublicKeyC1ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xd45ba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::Ed25519_PublicKey + 0x88
*(arg1 + 8) = 0
int64_t* entry_x2

if (arg1 + 8 != entry_x2)
    entry_x2[1]
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(arg1 + 8, 
        *entry_x2)
    
    if (*(arg1 + 0x10) - *(arg1 + 8) == 0x20)
        return 

void** x0_1 = __cxa_allocate_exception(0x20)
int64_t x0_2
int128_t v2
x0_2, v2 = operator new(0x30)
v2 = data_71b820
int64_t var_40 = x0_2
__builtin_strncpy(x0_2, "Invalid size for Ed25519 public key", 0x24)
int128_t var_50 = v2
*x0_1 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_1[1])
*x0_1 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_1, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
