// 函数: _ZN5Botan24XMSS_Signature_Operation15build_auth_pathERNS_15XMSS_PrivateKeyERNS_12XMSS_AddressE
// 地址: 0xed2c20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x2e8)
uint64_t entry_x8
std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector(
    entry_x8)
int64_t* entry_x2
*(*entry_x2 + 0xf) = 2
void* result = *entry_x2 + 0x10
size_t x2 = entry_x2[1] - result

if (x2 s>= 1)
    result = memset(result, 0, x2)

if (*(arg1 + 0x2e8) != 0)
    int64_t x24_1 = 0
    Botan::XMSS_Address* i = nullptr
    
    do
        Botan::XMSS_PrivateKey::tree_hash(arg2, (zx.q(*(arg1 + 0x368)) u>> i ^ 1) << i, i)
        int64_t* x25_1 = *entry_x8
        result = *(x25_1 + x24_1)
        
        if (result != 0)
            void* x26_1 = x25_1 + x24_1
            int64_t x8_10 = *(x26_1 + 0x10)
            *(x26_1 + 8) = result
            result = Botan::deallocate_memory(result, x8_10 - result, 1)
            __builtin_memset(x26_1, 0, 0x18)
        
        void* x9_1 = x25_1 + x24_1
        i += 1
        x24_1 += 0x18
        int64_t var_68
        *x9_1 = var_68
        int64_t var_60
        *(x9_1 + 8) = var_60
        int64_t var_58
        *(x9_1 + 0x10) = var_58
    while (i u< *(arg1 + 0x2e8))

return result
