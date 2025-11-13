// 函数: _ZNK5Botan3TLS26Certificate_Status_Request9serializeENS0_15Connection_SideE
// 地址: 0xe6ddac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int32_t entry_x1

if (entry_x1 == 2)
    return 

char* x0 = operator new(1)
*x0 = 1
*entry_x8 = x0
entry_x8[1] = &x0[1]
entry_x8[2] = &x0[1]
char* x0_1
int128_t v0_1
int128_t v1_1
x0_1, v0_1, v1_1 = operator new(2)
char x9_1 = *x0
v0_1.q = x0_1
v0_1:8.q = x0_1
v1_1.q = 2
v1_1:8.q = 2
x0_1[1] = 0
*entry_x8 = x0_1
*x0_1 = x9_1
*(entry_x8 + 8) = v0_1 + v1_1
operator delete(x0)
char* x24_1 = entry_x8[1]
int64_t x8_1 = entry_x8[2]
void* x24_2

if (x24_1 u>= x8_1)
    char* x20_2 = *entry_x8
    size_t x21_1 = x24_1 - x20_2
    
    if (x21_1 + 1 s< 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_e6e024:
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    label_e6e02c:
        int64_t* x0_16 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        char* x0_17 = *entry_x8
        
        if (x0_17 != 0)
            entry_x8[1] = x0_17
            operator delete(x0_17)
        
        sub_1101e04(x0_16)
        noreturn
    
    void* x8_2 = x8_1 - x20_2
    int64_t x11_1 = x8_2 << 1
    int64_t x9_3
    
    if (x11_1 u< x21_1 + 1)
        x9_3 = x21_1 + 1
    else
        x9_3 = x11_1
    
    int64_t x23_1
    
    x23_1 = x8_2 u< 0x3fffffffffffffff ? x9_3 : 0x7fffffffffffffff
    
    char* x22_1
    
    if (x23_1 == 0)
        x22_1 = nullptr
    else
        x22_1 = operator new(x23_1)
    
    char* x24_3 = &x22_1[x21_1]
    *x24_3 = 0
    x24_2 = &x24_3[1]
    
    if (x21_1 s>= 1)
        memcpy(x22_1, x20_2, x21_1)
    
    *entry_x8 = x22_1
    entry_x8[1] = x24_2
    entry_x8[2] = &x22_1[x23_1]
    
    if (x20_2 != 0)
        operator delete(x20_2)
        x24_2 = entry_x8[1]
    
    goto label_e6dec0

*x24_1 = 0
x24_2 = &x24_1[1]
entry_x8[1] = x24_2
label_e6dec0:
int64_t x8_3 = entry_x8[2]
void* x24_4

if (x24_2 u>= x8_3)
    char* x20_3 = *entry_x8
    size_t x21_2 = x24_2 - x20_3
    
    if (x21_2 + 1 s< 0)
        goto label_e6e024
    
    void* x8_4 = x8_3 - x20_3
    int64_t x11_2 = x8_4 << 1
    int64_t x9_5
    
    if (x11_2 u< x21_2 + 1)
        x9_5 = x21_2 + 1
    else
        x9_5 = x11_2
    
    int64_t x23_3
    
    x23_3 = x8_4 u< 0x3fffffffffffffff ? x9_5 : 0x7fffffffffffffff
    
    char* x22_2
    
    if (x23_3 == 0)
        x22_2 = nullptr
    else
        x22_2 = operator new(x23_3)
    
    char* x24_5 = &x22_2[x21_2]
    *x24_5 = 0
    x24_4 = &x24_5[1]
    
    if (x21_2 s>= 1)
        memcpy(x22_2, x20_3, x21_2)
    
    *entry_x8 = x22_2
    entry_x8[1] = x24_4
    entry_x8[2] = &x22_2[x23_3]
    
    if (x20_3 != 0)
        operator delete(x20_3)
        x24_4 = entry_x8[1]
else
    *x24_2 = 0
    x24_4 = x24_2 + 1
    entry_x8[1] = x24_4

int64_t x8_5 = entry_x8[2]

if (x24_4 u< x8_5)
    *x24_4 = 0
    entry_x8[1] = x24_4 + 1
    return 

char* x20_4 = *entry_x8
void* x21_3 = x24_4 - x20_4

if (x21_3 + 1 s< 0)
    goto label_e6e02c

void* x8_6 = x8_5 - x20_4
void* x11_3 = x8_6 << 1
void* x9_7

if (x11_3 u< x21_3 + 1)
    x9_7 = x21_3 + 1
else
    x9_7 = x11_3

void* x23_5

x23_5 = x8_6 u< 0x3fffffffffffffff ? x9_7 : 0x7fffffffffffffff

char* x22_3

if (x23_5 == 0)
    x22_3 = nullptr
else
    x22_3 = operator new(x23_5)

char* x24_7 = x22_3 + x21_3
*x24_7 = 0

if (x21_3 s>= 1)
    memcpy(x22_3, x20_4, x21_3)

*entry_x8 = x22_3
entry_x8[1] = &x24_7[1]
entry_x8[2] = x22_3 + x23_5

if (x20_4 != 0)
    return operator delete(x20_4) __tailcall
