// 函数: _ZNK5Botan8Parallel4nameEv
// 地址: 0xde18b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_48
__builtin_memset(&var_48, 0, 0x18)
void* entry_x0
int64_t* x20 = *(entry_x0 + 8)
int64_t x21 = *(entry_x0 + 0x10)
int16_t var_78
int128_t var_60
char* var_40_1

if (x20 != x21)
    do
        (*(**x20 + 0x40))()
        int64_t var_38
        void* var_50
        
        if (var_40_1 u< var_38)
            int128_t v0_1 = var_60
            *(var_40_1 + 0x10) = var_50
            *var_40_1 = v0_1
            var_40_1 = &var_40_1[0x18]
        else
            std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                &var_48)
            
            if ((zx.d(var_60.b) & 1) != 0)
                operator delete(var_50)
        x20 = &x20[1]
    while (x21 != x20)
    
    void* x8 = var_48
    var_78 = 0
    
    if (var_40_1 != x8)
        int64_t x20_1 = 0
        int64_t i = 0
        
        do
            if (i != 0)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                    &var_78)
                x8 = var_48 + x20_1
            
            *(x8 + 8)
            void* x1_2
            
            if ((zx.d(*x8) & 1) != 0)
                x1_2 = *(x8 + 0x10)
            else
                x1_2 = x8 + 1
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_78, x1_2)
            x8 = var_48
            i += 1
            x20_1 += 0x18
        while (i != ((var_40_1 - x8) s>> 3) * -0x5555555555555555)
else
    var_78 = 0

int128_t* x0_6
int128_t v0_2
x0_6, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_78, nullptr)
void* x8_5 = x0_6[1].q
var_60 = *x0_6
__builtin_memset(x0_6, 0, 0x18)
int128_t* result
int128_t v0_3
result, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_60.b) & 1) == 0)
    if ((zx.d(var_78.b) & 1) != 0)
        goto label_de1a50
    
    goto label_de1a30

result = operator delete(x8_5)
void* x19_1

if ((zx.d(var_78.b) & 1) == 0)
label_de1a30:
    x19_1 = var_48
    
    if (x19_1 == 0)
        return result
else
label_de1a50:
    void* var_68
    result = operator delete(var_68)
    x19_1 = var_48
    
    if (x19_1 == 0)
        return result

char* x8_10 = var_40_1
void* x0_11

if (x8_10 == x19_1)
    x0_11 = x19_1
else
    char* x20_2 = x8_10
    
    do
        x20_2 = &x20_2[-0x18]
        
        if ((zx.d(*x20_2) & 1) != 0)
            operator delete(*(x8_10 - 8))
        
        x8_10 = x20_2
    while (x19_1 != x20_2)
    
    x0_11 = var_48

void* var_40_2 = x19_1
return operator delete(x0_11)
