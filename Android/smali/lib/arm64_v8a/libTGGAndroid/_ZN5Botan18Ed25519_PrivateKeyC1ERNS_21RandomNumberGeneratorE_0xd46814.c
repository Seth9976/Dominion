// 函数: _ZN5Botan18Ed25519_PrivateKeyC1ERNS_21RandomNumberGeneratorE
// 地址: 0xd46814
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
*arg1 = _vtable_for_Botan::Ed25519_PrivateKey + 0x90
*(arg1 + 8) = 0
*(arg1 + 0x38) = _vtable_for_Botan::Ed25519_PrivateKey + 0x1d8
uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
uint8_t* result_3 = result_1
int64_t var_60
int64_t* entry_x1
(*(*entry_x1 + 0x10))(entry_x1, result_3, var_60 - result_3)
void* x21_1 = *(arg1 + 8)
int64_t x0_2 = *(arg1 + 0x10)
size_t x22 = x0_2 - x21_1

if (x22 u> 0x1f)
    if (x22 != 0x20)
        *(arg1 + 0x10) = x21_1 + 0x20
    
    goto label_d46948

int64_t x8_3 = *(arg1 + 0x18)
uint8_t* x1_2
void* x8_6

if (x8_3 - x0_2 u>= 0x20 - x22)
    memset(x0_2, 0, 0x20 - x22)
    *(arg1 + 0x10) = x0_2 + 0x20 - x22
    x1_2 = *(arg1 + 0x20)
    x8_6 = *(arg1 + 0x28) - x1_2
    
    if (x8_6 u<= 0x3f)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_2 = *(arg1 + 0x20)
    else
    label_d46994:
        
        if (x8_6 != 0x40)
            *(arg1 + 0x28) = &x1_2[0x40]
else
    void* x8_4 = x8_3 - x21_1
    int64_t x11_1 = x8_4 << 1
    int64_t x9_3
    
    x9_3 = x11_1 u> 0x20 ? x11_1 : 0x20
    
    int64_t x25_1
    
    x25_1 = x8_4 u< 0x3fffffffffffffff ? x9_3 : 0x7fffffffffffffff
    
    int64_t x0_4 = operator new(x25_1)
    memset(x0_4 + x22, 0, 0x20 - x22)
    
    if (x22 s>= 1)
        memcpy(x0_4, x21_1, x22)
    
    *(arg1 + 8) = x0_4
    *(arg1 + 0x10) = x0_4 + 0x20
    *(arg1 + 0x18) = x0_4 + x25_1
    
    if (x21_1 == 0)
    label_d46948:
        x1_2 = *(arg1 + 0x20)
        x8_6 = *(arg1 + 0x28) - x1_2
        
        if (x8_6 u> 0x3f)
            goto label_d46994
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_2 = *(arg1 + 0x20)
    else
        operator delete(x21_1)
        x1_2 = *(arg1 + 0x20)
        x8_6 = *(arg1 + 0x28) - x1_2
        
        if (x8_6 u> 0x3f)
            goto label_d46994
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_2 = *(arg1 + 0x20)
Botan::ed25519_gen_keypair(*(arg1 + 8), x1_2, result_1)
uint8_t* result = result_1

if (result == 0)
    return result

uint8_t* result_2 = result
int64_t var_58
return Botan::deallocate_memory(result, var_58 - result, 1)
