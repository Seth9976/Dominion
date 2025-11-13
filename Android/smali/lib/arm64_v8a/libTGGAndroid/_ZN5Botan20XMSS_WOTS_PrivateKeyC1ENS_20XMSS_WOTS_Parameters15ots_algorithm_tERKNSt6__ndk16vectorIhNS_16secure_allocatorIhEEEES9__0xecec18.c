// 函数: _ZN5Botan20XMSS_WOTS_PrivateKeyC1ENS_20XMSS_WOTS_Parameters15ots_algorithm_tERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES9_
// 地址: 0xecec18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x19 = arg1
*(arg1 + 0x20) = _vtable_for_Botan::Public_Key + 0x10
void* var_48
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_48)
Botan::XMSS_WOTS_PublicKey::XMSS_WOTS_PublicKey(arg1 + 0x20, 
    _VTT_for_Botan::XMSS_WOTS_PrivateKey + 0x20)
void* x0_2 = var_48

if (x0_2 != 0)
    void* var_40_1 = x0_2
    int64_t var_38
    Botan::deallocate_memory(x0_2, var_38 - x0_2, 1)

x19[4] = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
*x19 = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&x19[1])
int64_t result
Botan::XMSS_Hash* entry_x3
int128_t v0
result, v0 = Botan::XMSS_WOTS_PrivateKey::generate(x19, entry_x3)
void* x21_1 = x19[0x1c]

if (x21_1 != 0)
    int64_t* x8_3 = x19[0x1d]
    void* x0_6
    
    if (x8_3 == x21_1)
        x0_6 = x21_1
    else
        int64_t* x22_2 = x8_3
        
        do
            x22_2 = &x22_2[-3]
            void* x0_5 = *x22_2
            
            if (x0_5 != 0)
                int64_t x9_1 = x8_3[-1]
                x8_3[-2] = x0_5
                Botan::deallocate_memory(x0_5, x9_1 - x0_5, 1)
            
            x8_3 = x22_2
        while (x21_1 != x22_2)
        
        x0_6 = x19[0x1c]
    
    x19[0x1d] = x21_1
    result, v0 = operator delete(x0_6)
    __builtin_memset(&x19[0x1c], 0, 0x18)

int128_t var_60
*(x19 + 0xe0) = var_60
int64_t var_50
x19[0x1e] = var_50
return result
