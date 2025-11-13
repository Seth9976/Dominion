// 函数: _ZN5Botan18Ed25519_PrivateKeyC2ERNS_21RandomNumberGeneratorE
// 地址: 0xd46574
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = entry_x1[1]
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = entry_x1[2]
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
void* x8_2 = *entry_x1
*arg1 = x8_2
*(arg1 + *(x8_2 - 0x88)) = entry_x1[3]
*(arg1 + *(*arg1 - 0x90)) = entry_x1[4]
__builtin_memset(arg1 + 0x20, 0, 0x18)
uint8_t* result_1
__builtin_memset(&result_1, 0, 0x18)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
uint8_t* result_3 = result_1
int64_t var_60
int64_t* entry_x2
(*(*entry_x2 + 0x10))(entry_x2, result_3, var_60 - result_3)
void* x22_1 = *(arg1 + 8)
int64_t x0_2 = *(arg1 + 0x10)
size_t x23 = x0_2 - x22_1

if (x23 u> 0x1f)
    if (x23 != 0x20)
        *(arg1 + 0x10) = x22_1 + 0x20
    
    goto label_d466d0

int64_t x8_8 = *(arg1 + 0x18)
uint8_t* x1_2
void* x8_11

if (x8_8 - x0_2 u>= 0x20 - x23)
    memset(x0_2, 0, 0x20 - x23)
    *(arg1 + 0x10) = x0_2 + 0x20 - x23
    x1_2 = *(arg1 + 0x20)
    x8_11 = *(arg1 + 0x28) - x1_2
    
    if (x8_11 u<= 0x3f)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_2 = *(arg1 + 0x20)
    else
    label_d4671c:
        
        if (x8_11 != 0x40)
            *(arg1 + 0x28) = &x1_2[0x40]
else
    void* x8_9 = x8_8 - x22_1
    int64_t x11_1 = x8_9 << 1
    int64_t x9_5
    
    x9_5 = x11_1 u> 0x20 ? x11_1 : 0x20
    
    int64_t x26_1
    
    x26_1 = x8_9 u< 0x3fffffffffffffff ? x9_5 : 0x7fffffffffffffff
    
    int64_t x0_4 = operator new(x26_1)
    memset(x0_4 + x23, 0, 0x20 - x23)
    
    if (x23 s>= 1)
        memcpy(x0_4, x22_1, x23)
    
    *(arg1 + 8) = x0_4
    *(arg1 + 0x10) = x0_4 + 0x20
    *(arg1 + 0x18) = x0_4 + x26_1
    
    if (x22_1 == 0)
    label_d466d0:
        x1_2 = *(arg1 + 0x20)
        x8_11 = *(arg1 + 0x28) - x1_2
        
        if (x8_11 u> 0x3f)
            goto label_d4671c
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_2 = *(arg1 + 0x20)
    else
        operator delete(x22_1)
        x1_2 = *(arg1 + 0x20)
        x8_11 = *(arg1 + 0x28) - x1_2
        
        if (x8_11 u> 0x3f)
            goto label_d4671c
        
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x20)
        x1_2 = *(arg1 + 0x20)
Botan::ed25519_gen_keypair(*(arg1 + 8), x1_2, result_1)
uint8_t* result = result_1

if (result == 0)
    return result

uint8_t* result_2 = result
int64_t var_58
return Botan::deallocate_memory(result, var_58 - result, 1)
