// 函数: _ZN5Botan7get_kdfERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xd93a60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_98
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_98)
char var_80
Botan::SCAN_Name::SCAN_Name(&var_80)
void* var_88

if ((zx.d(var_98) & 1) != 0)
    operator delete(var_88)
char var_68
uint64_t x8_1 = zx.q(var_68)
uint64_t x8_2
uint64_t var_60

if ((x8_1.d & 1) == 0)
    x8_2 = x8_1 u>> 1
else
    x8_2 = var_60
int32_t x0_4

if (x8_2 == 3)
    x0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_68, 0, -ffffffffffffffff, 0x75cb1e)

int64_t result
void* var_38
void* x20_1

if (x8_2 == 3 && x0_4 == 0)
    result = 0
    x20_1 = var_38
    
    if (x20_1 != 0)
    label_d93b0c:
        char* var_30
        char* x8_4 = var_30
        void* x0_8
        
        if (x8_4 == x20_1)
            x0_8 = x20_1
        else
            char* x21_1 = x8_4
            
            do
                x21_1 = &x21_1[-0x18]
                
                if ((zx.d(*x21_1) & 1) != 0)
                    operator delete(*(x8_4 - 8))
                
                x8_4 = x21_1
            while (x20_1 != x21_1)
            
            x0_8 = var_38
        
        void* var_30_1 = x20_1
        operator delete(x0_8)
else
    int16_t var_b8 = 0
    Botan::KDF::create(arg1, &var_b8)
    void* var_a8
    
    if ((zx.d(var_b8.b) & 1) != 0)
        operator delete(var_a8)
    int64_t result_1
    result = result_1
    
    if (result == 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_14 = __cxa_allocate_exception(0x20)
        Botan::Algorithm_Not_Found::Algorithm_Not_Found(x0_14)
        __cxa_throw(x0_14, _typeinfo_for_Botan::Algorithm_Not_Found, Botan::Exception::~Exception)
        noreturn
    
    x20_1 = var_38
    
    if (x20_1 != 0)
        goto label_d93b0c
void* var_50

if (var_50 != 0)
    char* var_48
    char* x8_5 = var_48
    void* x0_10
    
    if (x8_5 == var_50)
        x0_10 = var_50
    else
        char* x21_2 = x8_5
        
        do
            x21_2 = &x21_2[-0x18]
            
            if ((zx.d(*x21_2) & 1) != 0)
                operator delete(*(x8_5 - 8))
            
            x8_5 = x21_2
        while (var_50 != x21_2)
        
        x0_10 = var_50
    
    void* var_48_1 = var_50
    operator delete(x0_10)

void* var_58

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)
void* var_70

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_70)
return result
