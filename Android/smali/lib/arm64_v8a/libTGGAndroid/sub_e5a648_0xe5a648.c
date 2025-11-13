// 函数: sub_e5a648
// 地址: 0xe5a648
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_8 = *(arg2 + 0xb0)

if (x8_8 != 0)
    int64_t x9_1 = *(arg2 + 0xc0)
    *(arg2 + 0xb8) = x8_8
    Botan::deallocate_memory(x8_8, x9_1 - x8_8, 1)

void* x0_1 = *(arg2 + 0x98)

if (x0_1 != 0)
    int64_t x8 = *(arg2 + 0xa8)
    *(arg2 + 0xa0) = x0_1
    Botan::deallocate_memory(x0_1, x8 - x0_1, 1)

void* x0_2 = *arg6

if (x0_2 != 0)
    int64_t x8_1 = *(arg2 + 0x90)
    *(arg2 + 0x88) = x0_2
    Botan::deallocate_memory(x0_2, x8_1 - x0_2, 1)

*(arg2 + 0x70)
std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> > > >::destroy(
    arg4)
*(arg2 + 0x58)
std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> > > >::destroy(
    arg3)
int64_t* x0_5 = *(arg2 + 0x48)
*(arg2 + 0x48) = 0
int64_t* x0_6

if (x0_5 == 0)
    x0_6 = *(arg2 + 0x40)
    *(arg2 + 0x40) = 0
    
    if (x0_6 != 0)
        goto label_e5a714
    
    goto label_e5a6d4

(*(*x0_5 + 8))()
x0_6 = *(arg2 + 0x40)
*(arg2 + 0x40) = 0
int64_t* x0_8

if (x0_6 != 0)
label_e5a714:
    (*(*x0_6 + 8))()
    x0_8 = *arg5
    *arg5 = 0
    
    if (x0_8 == 0)
        goto label_e5a6e0
    
    goto label_e5a72c

label_e5a6d4:
x0_8 = *arg5
*arg5 = 0
void* x21

if (x0_8 != 0)
label_e5a72c:
    (*(*x0_8 + 8))()
    x21 = *(arg2 + 0x10)
    *(arg2 + 0x10) = 0
    
    if (x21 != 0)
    label_e5a740:
        Botan::TLS::Compat_Callbacks::~Compat_Callbacks()
        operator delete(x21)
        sub_1101e04(arg1)
        noreturn
else
label_e5a6e0:
    x21 = *(arg2 + 0x10)
    *(arg2 + 0x10) = 0
    
    if (x21 != 0)
        goto label_e5a740
sub_1101e04(arg1)
noreturn
