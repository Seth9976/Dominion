// 函数: _ZN5Botan19Credentials_Manager22cert_chain_single_typeERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_
// 地址: 0xe403bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_48
__builtin_memset(&var_48, 0, 0x18)
std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
    &var_48)
int64_t x9 = *(*arg1 + 0x18)
void* var_60
__builtin_memset(&var_60, 0, 0x18)
int64_t entry_x3
int64_t result = x9(arg1, &var_48, &var_60, arg3, entry_x3)
void* x21_1 = var_60

if (x21_1 != 0)
    void** var_58
    void** x19_1 = var_58
    void* x0_3
    
    if (x19_1 == x21_1)
        x0_3 = x21_1
    else
        do
            x19_1 -= 0x38
            int64_t var_50
            sub_f276a8(&var_50, x19_1)
        while (x21_1 != x19_1)
        
        x0_3 = var_60
    
    void* var_58_1 = x21_1
    result = operator delete(x0_3)

void* x19_2 = var_48

if (x19_2 == 0)
    return result

char* var_40
char* x8_1 = var_40
void* x0_5

if (x8_1 == x19_2)
    x0_5 = x19_2
else
    char* x20_1 = x8_1
    
    do
        x20_1 = &x20_1[-0x18]
        
        if ((zx.d(*x20_1) & 1) != 0)
            operator delete(*(x8_1 - 8))
        
        x8_1 = x20_1
    while (x19_2 != x20_1)
    
    x0_5 = var_48

void* var_40_1 = x19_2
return operator delete(x0_5)
