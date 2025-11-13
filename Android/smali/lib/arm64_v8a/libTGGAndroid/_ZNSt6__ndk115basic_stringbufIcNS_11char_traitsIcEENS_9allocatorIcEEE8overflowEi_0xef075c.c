// 函数: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi
// 地址: 0xef075c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 == 0xffffffff)
    return 0

char* x24_1 = *(arg1 + 0x30)
void* x8_1 = *(arg1 + 0x38)
int64_t x23_1 = *(arg1 + 0x10)
int64_t x22_1 = *(arg1 + 0x18)
char x19_1 = entry_x1.b
int64_t* x20_1 = arg1
void* x10_1

if (x24_1 == x8_1)
    if ((zx.d(x20_1[0xc].b) & 0x10) == 0)
        return 0xffffffff
    
    int64_t x25_1 = x20_1[5]
    int64_t x26_1 = x20_1[0xb]
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
        (&x20_1[8]).b)
    char x1_1
    
    if ((zx.d(x20_1[8].b) & 1) != 0)
        x1_1 = ((x20_1[8]).b & 0xfe) - 1
    else
        x1_1 = 0x16
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
        &x20_1[8], x1_1)
    uint64_t x8_6 = zx.q(x20_1[8].b)
    uint64_t x8_7
    void* x11_1
    
    if ((x8_6.d & 1) != 0)
        x8_7 = x20_1[9]
        x11_1 = x20_1[0xa]
    else
        x11_1 = x20_1 + 0x41
        x8_7 = x8_6 u>> 1
    
    x8_1 = x11_1 + x8_7
    x24_1 = x11_1 + x24_1 - x25_1
    x10_1 = x11_1 + x26_1 - x25_1
    x20_1[6] = x24_1
    x20_1[7] = x8_1
    x20_1[5] = x11_1
else
    x10_1 = x20_1[0xb]

uint32_t x11_2 = zx.d(x20_1[0xc].b)
void* x10_3

if (&x24_1[1] u< x10_1)
    x10_3 = x10_1
else
    x10_3 = &x24_1[1]

x20_1[0xb] = x10_3

if ((x11_2 & 8) != 0)
    void* x12_3
    
    if ((zx.d(x20_1[8].b) & 1) != 0)
        x12_3 = x20_1[0xa]
    else
        x12_3 = x20_1 + 0x41
    
    x20_1[2] = x12_3
    x20_1[3] = x12_3 + x22_1 - x23_1
    x20_1[4] = x10_3

if (x24_1 == x8_1)
    jump(*(*x20_1 + 0x68))

x20_1[6] = &x24_1[1]
*x24_1 = x19_1
return zx.q(x19_1)
