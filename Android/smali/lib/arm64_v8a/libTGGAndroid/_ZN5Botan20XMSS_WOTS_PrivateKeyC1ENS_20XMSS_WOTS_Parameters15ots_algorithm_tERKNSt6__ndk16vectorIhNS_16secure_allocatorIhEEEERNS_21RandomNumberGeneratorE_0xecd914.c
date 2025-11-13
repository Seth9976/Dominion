// 函数: _ZN5Botan20XMSS_WOTS_PrivateKeyC1ENS_20XMSS_WOTS_Parameters15ots_algorithm_tERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERNS_21RandomNumberGeneratorE
// 地址: 0xecd914
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

x19[2] = 0
x19[3] = 0
x19[4] = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
*x19 = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0
x19[1] = 0
int64_t x1_3 = x19[0xc]
int64_t x8_3

if (x1_3 == 0)
    x8_3 = 0
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&x19[1])
    x1_3 = x19[1]
    x8_3 = x19[2]

int64_t* entry_x3
(*(*entry_x3 + 0x10))(entry_x3, x1_3, x8_3 - x1_3)
int64_t result
int128_t v0
result, v0 = Botan::XMSS_WOTS_PrivateKey::generate(x19, &x19[1])
void* x21_1 = x19[0x1c]

if (x21_1 != 0)
    int64_t* x8_4 = x19[0x1d]
    void* x0_7
    
    if (x8_4 == x21_1)
        x0_7 = x21_1
    else
        int64_t* x22_3 = x8_4
        
        do
            x22_3 = &x22_3[-3]
            void* x0_6 = *x22_3
            
            if (x0_6 != 0)
                int64_t x9_3 = x8_4[-1]
                x8_4[-2] = x0_6
                Botan::deallocate_memory(x0_6, x9_3 - x0_6, 1)
            
            x8_4 = x22_3
        while (x21_1 != x22_3)
        
        x0_7 = x19[0x1c]
    
    x19[0x1d] = x21_1
    result, v0 = operator delete(x0_7)
    __builtin_memset(&x19[0x1c], 0, 0x18)

int128_t var_60
*(x19 + 0xe0) = var_60
int64_t var_50
x19[0x1e] = var_50
return result
