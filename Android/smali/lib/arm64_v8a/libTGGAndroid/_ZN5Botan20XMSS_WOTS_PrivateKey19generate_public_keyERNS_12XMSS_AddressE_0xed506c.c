// 函数: _ZN5Botan20XMSS_WOTS_PrivateKey19generate_public_keyERNS_12XMSS_AddressE
// 地址: 0xed506c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 0x28)
void* var_48
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_48)
std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >
    * entry_x8
Botan::XMSS_WOTS_PublicKey::XMSS_WOTS_PublicKey(entry_x8, zx.q(x22))
void* x0_2 = var_48

if (x0_2 != 0)
    void* var_40_1 = x0_2
    int64_t var_38
    Botan::deallocate_memory(x0_2, var_38 - x0_2, 1)

Botan::XMSS_Hash* entry_x1
Botan::XMSS_WOTS_PrivateKey::at(arg1, entry_x1)
void* var_60
int64_t result = Botan::XMSS_WOTS_PrivateKey::generate_public_key(arg1, entry_x8, &var_60, entry_x1)
void* x19_1 = var_60

if (x19_1 == 0)
    return result

int64_t* var_58
int64_t* x8_1 = var_58
void* x0_6

if (x8_1 == x19_1)
    x0_6 = x19_1
else
    int64_t* x20_1 = x8_1
    
    do
        x20_1 = &x20_1[-3]
        void* x0_5 = *x20_1
        
        if (x0_5 != 0)
            int64_t x9_1 = x8_1[-1]
            x8_1[-2] = x0_5
            Botan::deallocate_memory(x0_5, x9_1 - x0_5, 1)
        
        x8_1 = x20_1
    while (x19_1 != x20_1)
    
    x0_6 = var_60

void* var_58_1 = x19_1
return operator delete(x0_6)
