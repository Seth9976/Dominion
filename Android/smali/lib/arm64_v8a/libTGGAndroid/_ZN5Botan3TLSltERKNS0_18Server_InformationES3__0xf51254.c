// 函数: _ZN5Botan3TLSltERKNS0_18Server_InformationES3_
// 地址: 0xf51254
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_58
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_58)
char var_70
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_70)
uint64_t x8 = zx.q(var_58)
uint64_t x22 = zx.q(var_70)
int32_t x21 = x8.d & 1
uint64_t i_2 = x8 u>> 1
uint64_t i_6
uint64_t i_4

i_4 = x21 == 0 ? i_2 : i_6

uint64_t i_13
uint64_t i_14

if ((x22.d & 1) == 0)
    i_14 = x22 u>> 1
else
    i_14 = i_13

char* var_60
int32_t x23

if (i_4 != i_14)
    x23 = 1
    
    if ((x22.d & 1) != 0)
        operator delete(var_60)
        x21 = zx.d(var_58) & 1
else
    char* x9_1 = &var_58 | 1
    char* x1_2
    
    if ((x22.d & 1) == 0)
        x1_2 = &var_70 | 1
    else
        x1_2 = var_60
    
    if ((x21 & 0xff) == 0)
        if (i_4 == 0)
            goto label_f515a0
        
        uint32_t x10_1
        uint32_t x11_2
        uint64_t i
        
        do
            x10_1 = zx.d(*x9_1)
            x11_2 = zx.d(*x1_2)
            
            if (x10_1 != x11_2)
                break
            
            i = i_2
            i_2 -= 1
            x9_1 = &x9_1[1]
            x1_2 = &x1_2[1]
        while (i != 1)
        x23 = x10_1 != x11_2 ? 1 : 0
        
        if ((x22.d & 1) != 0)
            operator delete(var_60)
            x21 = zx.d(var_58) & 1
    else if (i_4 == 0)
    label_f515a0:
        x23 = 0
        
        if ((x22.d & 1) != 0)
            operator delete(var_60)
            x21 = zx.d(var_58) & 1
    else
        x23 = memcmp() != 0 ? 1 : 0
        
        if ((x22.d & 1) != 0)
            operator delete(var_60)
            x21 = zx.d(var_58) & 1

void* var_48

if ((x21 & 0xff) != 0)
    operator delete(var_48)

int32_t x19_1
uint64_t x20_1
int32_t x21_1

if (x23 != 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_58)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_70)
    x20_1 = zx.q(var_70)
    uint64_t x9_2 = zx.q(var_58)
    uint64_t i_11
    
    if ((x20_1.d & 1) == 0)
        i_11 = x20_1 u>> 1
    else
        i_11 = i_13
    
    x21_1 = x9_2.d & 1
    uint64_t i_7
    
    if (x21_1 == 0)
        i_7 = x9_2 u>> 1
    else
        i_7 = i_6
    
    uint64_t i_9
    
    i_9 = i_11 u< i_7 ? i_11 : i_7
    
    int32_t x0_7
    
    if (i_9 != 0)
        void* x0_6
        
        if ((x21_1 & 0xff) == 0)
            x0_6 = &var_58 | 1
        else
            x0_6 = var_48
        
        char* x1_5
        
        if ((x20_1.d & 1) == 0)
            x1_5 = &var_70 | 1
        else
            x1_5 = var_60
        
        x0_7 = memcmp(x0_6, x1_5, i_9)
        x19_1 = x0_7
    
    if (i_9 == 0 || x0_7 == 0)
        if (i_7 u>= i_11)
            x19_1 = i_11 u< i_7 ? 1 : 0
        else
            x19_1 = -1
    
    goto label_f5154c

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_58)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_70)
uint64_t x8_6 = zx.q(var_58)
uint64_t x24_1 = zx.q(var_70)
int32_t x23_1 = x8_6.d & 1
uint64_t i_3 = x8_6 u>> 1
uint64_t i_5

i_5 = x23_1 == 0 ? i_3 : i_6

uint64_t i_15

if ((x24_1.d & 1) == 0)
    i_15 = x24_1 u>> 1
else
    i_15 = i_13

int32_t x25_1

if (i_5 != i_15)
    x25_1 = 1
    
    if ((x24_1.d & 1) != 0)
        operator delete(var_60)
        x23_1 = zx.d(var_58) & 1
else
    void* x9_5 = &var_58 | 1
    char* x1_8
    
    if ((x24_1.d & 1) == 0)
        x1_8 = &var_70 | 1
    else
        x1_8 = var_60
    
    if ((x23_1 & 0xff) == 0)
        if (i_5 == 0)
            goto label_f515dc
        
        uint32_t x10_5
        uint32_t x11_7
        uint64_t i_1
        
        do
            x10_5 = zx.d(*x9_5)
            x11_7 = zx.d(*x1_8)
            
            if (x10_5 != x11_7)
                break
            
            i_1 = i_3
            i_3 -= 1
            x9_5 += 1
            x1_8 = &x1_8[1]
        while (i_1 != 1)
        x25_1 = x10_5 != x11_7 ? 1 : 0
        
        if ((x24_1.d & 1) != 0)
            operator delete(var_60)
            x23_1 = zx.d(var_58) & 1
    else if (i_5 == 0)
    label_f515dc:
        x25_1 = 0
        
        if ((x24_1.d & 1) != 0)
            operator delete(var_60)
            x23_1 = zx.d(var_58) & 1
    else
        x25_1 = memcmp() != 0 ? 1 : 0
        
        if ((x24_1.d & 1) != 0)
            operator delete(var_60)
            x23_1 = zx.d(var_58) & 1

if ((x23_1 & 0xff) != 0)
    operator delete(var_48)

if (x25_1 == 0)
    return zx.q(zx.d(*(arg1 + 0x30)) u< zx.d(*(arg2 + 0x30)) ? 1 : 0)

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_58)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_70)
x20_1 = zx.q(var_70)
uint64_t x9_6 = zx.q(var_58)
uint64_t i_12

if ((x20_1.d & 1) == 0)
    i_12 = x20_1 u>> 1
else
    i_12 = i_13

x21_1 = x9_6.d & 1
uint64_t i_8

if (x21_1 == 0)
    i_8 = x9_6 u>> 1
else
    i_8 = i_6

uint64_t i_10

i_10 = i_12 u< i_8 ? i_12 : i_8

int32_t x0_16

if (i_10 != 0)
    void* x0_15
    
    if ((x21_1 & 0xff) == 0)
        x0_15 = &var_58 | 1
    else
        x0_15 = var_48
    
    char* x1_11
    
    if ((x20_1.d & 1) == 0)
        x1_11 = &var_70 | 1
    else
        x1_11 = var_60
    
    x0_16 = memcmp(x0_15, x1_11, i_10)
    x19_1 = x0_16

if (i_10 == 0 || x0_16 == 0)
    if (i_8 u>= i_12)
        x19_1 = i_12 u< i_8 ? 1 : 0
    else
        x19_1 = -1
    
    if ((x20_1.d & 1) != 0)
        operator delete(var_60)
        x21_1 = zx.d(var_58) & 1
else
label_f5154c:
    
    if ((x20_1.d & 1) != 0)
        operator delete(var_60)
        x21_1 = zx.d(var_58) & 1

if ((x21_1 & 0xff) != 0)
    operator delete(var_48)

return zx.q(x19_1 u>> 0x1f)
