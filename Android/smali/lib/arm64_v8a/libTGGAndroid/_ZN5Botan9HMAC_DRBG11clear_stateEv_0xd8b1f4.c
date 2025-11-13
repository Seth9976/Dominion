// 函数: _ZN5Botan9HMAC_DRBG11clear_stateEv
// 地址: 0xd8b1f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
char* x8 = *(entry_x0 + 0x60)
void* x9 = *(entry_x0 + 0x68)

if (x9 == x8)
    int64_t x0_1 = (***(entry_x0 + 0x58))()
    x8 = *(entry_x0 + 0x60)
    x9 = *(entry_x0 + 0x68)
    int64_t x10_1 = x9 - x8
    
    if (x0_1 u> x10_1)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(entry_x0 + 0x60)
        x8 = *(entry_x0 + 0x60)
        x9 = *(entry_x0 + 0x68)
    else if (x0_1 u< x10_1)
        x9 = &x8[x0_1]
        *(entry_x0 + 0x68) = x9

void* result_1
uint64_t result_3
void* x21

if (x9 == x8)
    x21 = *(entry_x0 + 0x58)
    __builtin_memset(&result_1, 0, 0x18)
    result_3 = 0
else
    uint64_t i = 0
    
    do
        x8[i] = 1
        x8 = *(entry_x0 + 0x60)
        i += 1
    while (i != *(entry_x0 + 0x68) - x8)
    
    x21 = *(entry_x0 + 0x58)
    __builtin_memset(&result_1, 0, 0x18)
    
    if (i == 0)
        result_3 = 0
    else
        if ((i & 0xffffffff80000000) != 0)
            sub_1101e04(std::__ndk1::__vector_base_common<true>::__throw_length_error())
            noreturn
        
        void* result_2 = operator new(i)
        void* x22 = result_2 + i
        result_3 = result_2
        result_1 = result_2
        void* var_38_1 = x22
        memset(result_2, 0, i)
        void* var_40_1 = x22

Botan::SymmetricAlgorithm::set_key(x21 + 8, result_3)
void* result = result_1

if (result == 0)
    return result

return operator delete(result)
