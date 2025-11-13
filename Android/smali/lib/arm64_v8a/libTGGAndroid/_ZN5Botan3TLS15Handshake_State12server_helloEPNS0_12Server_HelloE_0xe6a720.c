// 函数: _ZN5Botan3TLS15Handshake_State12server_helloEPNS0_12Server_HelloE
// 地址: 0xe6a720
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
void** x20 = *(arg1 + 0x108)
void* entry_x1
*(arg1 + 0x108) = entry_x1

if (x20 != 0)
    x20[0xa]
    *x20 = _vtable_for_Botan::TLS::Server_Hello + 0x10
    std::__ndk1::__tree<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::__map_value_compare<Botan::TLS::Handshake_Extension_Type, std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::less<Botan::TLS::Handshake_Extension_Type>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > > > >::destroy(
        &x20[9])
    void* x0_1 = x20[5]
    
    if (x0_1 != 0)
        x20[6] = x0_1
        operator delete(x0_1)
    
    void* x0_2 = x20[2]
    
    if (x0_2 != 0)
        x20[3] = x0_2
        operator delete(x0_2)
    
    operator delete(x20)
    entry_x1 = *(arg1 + 0x108)

uint32_t x20_1 = zx.d(*(entry_x1 + 0x40))
int128_t v0
int128_t v1
int128_t v2
v0, v1, v2 = Botan::TLS::Ciphersuite::all_known_ciphersuites()
void* x8_2 = data_23ecc48
int64_t x9 = data_23ecc50

if (x9 != x8_2)
    uint64_t i = ((x9 - x8_2) s>> 3) * -0x71c71c71c71c71c7
    
    do
        uint64_t i_1 = i u>> 1
        int16_t* x13_1 = x8_2 + i_1 * 0x48
        uint32_t x14_1 = zx.d(*x13_1)
        
        if (x14_1 u< x20_1)
            i += not.q(i_1)
        else
            i = i_1
        
        if (x14_1 u< x20_1)
            x8_2 = &x13_1[0x24]
    while (i != 0)

int128_t var_70_1
int128_t var_60_1
int64_t var_40
int32_t x8_3

if (x8_2 == x9 || zx.d(*x8_2) != x20_1)
    v0.q = 0
    v0:8.q = 0
    x8_3 = 0x10001
    var_40 = 0
    int64_t var_38_1 = 0
    __builtin_memset(&var_70_1, 0, 0x2d)
else
    var_40.o = *x8_2
    v1 = *(x8_2 + 0x24)
    x8_3 = *(x8_2 + 0x10)
    int128_t var_60 = *(x8_2 + 0x31)
    var_70_1 = *(x8_2 + 0x14)
    var_60_1 = v1

*(arg1 + 0x38) = x8_3
int64_t* x0_4 = *(arg1 + 8)
int64_t x1_1 = *(arg1 + 0x108)
*(arg1 + 0x28) = var_40.o
v2 = var_70_1
*(arg1 + 0x59) = var_60_1
*(arg1 + 0x4c) = var_60_1
*(arg1 + 0x3c) = v2
int64_t result = (*(*x0_4 + 0x70))(x0_4, x1_1)

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
