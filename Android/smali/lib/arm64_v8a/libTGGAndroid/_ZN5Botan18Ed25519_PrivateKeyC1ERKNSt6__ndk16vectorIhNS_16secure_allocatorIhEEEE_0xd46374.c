// 函数: _ZN5Botan18Ed25519_PrivateKeyC1ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd46374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 8) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
*arg1 = _vtable_for_Botan::Ed25519_PrivateKey + 0x90
*(arg1 + 0x38) = _vtable_for_Botan::Ed25519_PrivateKey + 0x1d8
uint8_t** entry_x1
uint8_t* x1 = *entry_x1
void* x8_1 = entry_x1[1] - x1

if (x8_1 == 0x20)
    int64_t x0_1 = operator new(0x20)
    __builtin_memset(x0_1, 0, 0x20)
    *(arg1 + 8) = x0_1
    *(arg1 + 0x10) = x0_1 + 0x20
    *(arg1 + 0x18) = x0_1 + 0x20
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
    return Botan::ed25519_gen_keypair(*(arg1 + 8), *(arg1 + 0x20), *entry_x1)

if (x8_1 == 0x40)
    int64_t x8_2
    
    if (arg1 + 0x20 == entry_x1)
        x8_2 = 0
    else
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
            arg1 + 0x20, x1)
        x8_2 = *(arg1 + 0x20)
        *(arg1 + 0x28)
    
    return std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<std::__ndk1::__wrap_iter<uint8_t*> >(
        arg1 + 8, x8_2 + 0x20)

void** x0_6 = __cxa_allocate_exception(0x20)
int64_t x0_7
int128_t v0
x0_7, v0 = operator new(0x30)
v0 = data_71b7f0
int64_t var_40 = x0_7
__builtin_strncpy(x0_7, "Invalid size for Ed25519 private key", 0x25)
int128_t var_50 = v0
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
*x0_6 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
