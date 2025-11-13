// 函数: _ZN5Botan5CPUID9to_stringEv
// 地址: 0xd061a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_48
__builtin_memset(&var_48, 0, 0x18)
char* x0
int128_t v0
x0, v0 = Botan::CPUID::state()
int32_t var_5f
void* var_50
void* var_40
int64_t var_38

if ((zx.d(*x0) & 1) != 0)
    int128_t* x8_1 = var_40
    __builtin_strncpy(&var_5f, "neon", 5)
    
    if (x8_1 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
    else
        x8_1[1].q = var_50
        *x8_1 = 8.o
        var_40 = x8_1 + 0x18

char* x0_3
int128_t v0_1
x0_3, v0_1 = Botan::CPUID::state()

if ((zx.d(*x0_3) & 2) != 0)
    __builtin_strncpy(&var_5f, "arm_sve", 8)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
    else
        *(var_40 + 0x10) = var_50
        *var_40 = 0xe.o
        var_40 += 0x18

void* x0_6
int128_t v0_2
x0_6, v0_2 = Botan::CPUID::state()

if ((zx.d(*(x0_6 + 2)) & 4) != 0)
    __builtin_strncpy(&var_5f, "arm_sha1", 9)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
    else
        *(var_40 + 0x10) = var_50
        *var_40 = 0x10.o
        var_40 += 0x18

void* x0_9
int128_t v0_3
x0_9, v0_3 = Botan::CPUID::state()

if ((zx.d(*(x0_9 + 2)) & 8) != 0)
    __builtin_strncpy(&var_5f, "arm_sha2", 9)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
    else
        *(var_40 + 0x10) = var_50
        *var_40 = 0x10.o
        var_40 += 0x18

void* x0_12
int128_t v0_4
x0_12, v0_4 = Botan::CPUID::state()

if ((zx.d(*(x0_12 + 2)) & 1) != 0)
    __builtin_strncpy(&var_5f, "arm_aes", 8)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
    else
        *(var_40 + 0x10) = var_50
        *var_40 = 0xe.o
        var_40 += 0x18

void* x0_15
int128_t v0_5
x0_15, v0_5 = Botan::CPUID::state()

if ((zx.d(*(x0_15 + 2)) & 2) != 0)
    __builtin_strcpy(&var_5f, "arm_pmull")
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
    else
        *(var_40 + 0x10) = var_50
        *var_40 = 0x12.o
        var_40 += 0x18

void* x0_18
int128_t v0_6
x0_18, v0_6 = Botan::CPUID::state()

if ((zx.d(*(x0_18 + 2)) & 0x20) != 0)
    __builtin_strncpy(&var_5f, "arm_sha2_512", 0xd)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
    else
        *(var_40 + 0x10) = var_50
        *var_40 = 0x18.o
        var_40 += 0x18

void* x0_21
int128_t v0_7
x0_21, v0_7 = Botan::CPUID::state()

if ((zx.d(*(x0_21 + 2)) & 0x10) != 0)
    __builtin_strncpy(&var_5f, "arm_sha3", 9)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
    else
        *(var_40 + 0x10) = var_50
        *var_40 = 0x10.o
        var_40 += 0x18

void* x0_24
int128_t v0_8
x0_24, v0_8 = Botan::CPUID::state()

if ((zx.d(*(x0_24 + 2)) & 0x40) != 0)
    int32_t var_5f_1
    __builtin_strncpy(&var_5f_1, "arm_sm3", 8)
    
    if (var_40 u>= var_38)
        std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
    else
        *(var_40 + 0x10) = var_50
        *var_40 = 0xe.o
        var_40 += 0x18

void* result
int128_t v0_9
result, v0_9 = Botan::CPUID::state()

if ((zx.d(*(result + 2)) & 0x80) != 0)
    int32_t var_5f_2
    __builtin_strncpy(&var_5f_2, "arm_sm4", 8)
    
    if (var_40 u>= var_38)
        result = std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            &var_48)
    else
        *(var_40 + 0x10) = var_50
        *var_40 = 0xe.o
        var_40 += 0x18

void* x20 = var_48
void* x8_22 = var_40
char* entry_x8
*entry_x8 = 0

if (x8_22 == x20)
    x20 = x8_22
    
    if (x20 == 0)
        return result
else
    int64_t x21_1 = 0
    int64_t i = 0
    
    do
        if (i != 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                entry_x8.b)
            x20 = var_48 + x21_1
        
        *(x20 + 8)
        void* x1_2
        
        if ((zx.d(*x20) & 1) != 0)
            x1_2 = *(x20 + 0x10)
        else
            x1_2 = x20 + 1
        
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            entry_x8, x1_2)
        x20 = var_48
        x8_22 = var_40
        i += 1
        x21_1 += 0x18
    while (i != ((x8_22 - x20) s>> 3) * -0x5555555555555555)
    
    if (x20 == 0)
        return result

void* x0_32

if (x8_22 == x20)
    x0_32 = x20
else
    void* x19_1 = x8_22
    
    do
        x19_1 -= 0x18
        
        if ((zx.d(*x19_1) & 1) != 0)
            operator delete(*(x8_22 - 8))
        
        x8_22 = x19_1
    while (x20 != x19_1)
    
    x0_32 = var_48

void* var_40_1 = x20
return operator delete(x0_32)
