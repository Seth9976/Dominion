// 函数: _ZNK5Botan3TLS7Channel42secure_renegotiation_data_for_server_helloEv
// 地址: 0xe5f66c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x24 = *(entry_x0 + 0x40)
int64_t* entry_x8

if (x24 == 0)
    __builtin_memset(entry_x8, 0, 0x18)
    return 

void* x8 = *(x24 + 0x160)
__builtin_memset(entry_x8, 0, 0x18)
int64_t x22_1 = *(x8 + 8)
int64_t x9_1 = *(x8 + 0x10)
uint64_t x23_1 = x9_1 - x22_1
void* var_68
void* x20_1
void* x21_1

if (x9_1 != x22_1)
    if ((x23_1 & 0xffffffff80000000) == 0)
        void* x0_1 = operator new(x23_1)
        x21_1 = x0_1 + x23_1
        x20_1 = x0_1
        *entry_x8 = x0_1
        entry_x8[1] = x0_1
        entry_x8[2] = x21_1
        memcpy(x0_1, x22_1, x23_1)
        entry_x8[1] = x21_1
        goto label_e5f6ec
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_e5f7dc:
    int64_t* x0_10 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x8_3 = var_68
    
    if (x8_3 != 0)
        void* var_60_2 = x8_3
        operator delete(x8_3)
    
    void* x0_12 = *entry_x8
    
    if (x0_12 != 0)
        entry_x8[1] = x0_12
        operator delete(x0_12)
    
    sub_1101e04(x0_10)
    noreturn

x20_1 = nullptr
x21_1 = nullptr
label_e5f6ec:
void* x8_1 = *(x24 + 0x158)
__builtin_memset(&var_68, 0, 0x18)
int64_t x24_1 = *(x8_1 + 8)
int64_t x9_2 = *(x8_1 + 0x10)
size_t x25_1 = x9_2 - x24_1
void* x22_2
void* x23_2

if (x9_2 != x24_1)
    if ((x25_1 & 0xffffffff80000000) != 0)
        goto label_e5f7dc
    
    void* x0_3 = operator new(x25_1)
    x23_2 = x0_3 + x25_1
    x22_2 = x0_3
    var_68 = x0_3
    void* var_58_1 = x23_2
    memcpy(x0_3, x24_1, x25_1)
    void* var_60_1 = x23_2
    goto label_e5f73c

x22_2 = nullptr
x23_2 = nullptr
label_e5f73c:
size_t x24_2 = x21_1 - x20_1
uint64_t x25_2 = x23_2 - x22_2 + x24_2

if (x24_2 u< x25_2)
    int64_t x0_5 = operator new(x25_2)
    x21_1 = x0_5 + x24_2
    
    if (x24_2 s>= 1)
        memcpy(x0_5, x20_1, x24_2)
    
    *entry_x8 = x0_5
    entry_x8[1] = x21_1
    entry_x8[2] = x0_5 + x25_2
    
    if (x20_1 != 0)
        operator delete(x20_1)
        x21_1 = entry_x8[1]

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    entry_x8, x21_1, x22_2)
entry_x0 = var_68

if (entry_x0 != 0)
    operator delete(entry_x0)
