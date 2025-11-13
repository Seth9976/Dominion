// 函数: _ZN5Botan3TLS7ChannelD1Ev
// 地址: 0xe5b6f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[0x16]
*entry_x0 = _vtable_for_Botan::TLS::Channel + 0x10

if (x0 != 0)
    int64_t x8_1 = entry_x0[0x18]
    entry_x0[0x17] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

void* x0_1 = entry_x0[0x13]

if (x0_1 != 0)
    int64_t x8_2 = entry_x0[0x15]
    entry_x0[0x14] = x0_1
    Botan::deallocate_memory(x0_1, x8_2 - x0_1, 1)

void* x0_2 = entry_x0[0x10]

if (x0_2 != 0)
    int64_t x8_3 = entry_x0[0x12]
    entry_x0[0x11] = x0_2
    Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)

entry_x0[0xe]
std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> > > >::destroy(
    &entry_x0[0xd])
entry_x0[0xb]
std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> > > >::destroy(
    &entry_x0[0xa])
int64_t* x0_5 = entry_x0[9]
entry_x0[9] = 0

if (x0_5 != 0)
    (*(*x0_5 + 8))()

int64_t* x0_6 = entry_x0[8]
entry_x0[8] = 0

if (x0_6 != 0)
    (*(*x0_6 + 8))()

int64_t* result = entry_x0[7]
entry_x0[7] = 0

if (result != 0)
    result = (*(*result + 8))()

void* x20 = entry_x0[2]
entry_x0[2] = 0

if (x20 == 0)
    return result

Botan::TLS::Compat_Callbacks::~Compat_Callbacks()
return operator delete(x20) __tailcall
