// 函数: _ZN5Botan3URI10fromDomainERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe3154c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
std::__ndk1::allocator<char>* x0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
    arg1.b, 0x3a)
char var_128
char var_110
char var_d0
uint64_t i_3
int32_t x23

if (x0 == -1)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_128, arg1, 0, -ffffffffffffffff)
    x23 = 0
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_d0, arg1, x0 + 1, -ffffffffffffffff)
    uint64_t x8_1 = zx.q(var_d0)
    x23 = 0
    int32_t temp0_1 = x8_1.d & 1
    uint64_t i_2
    
    if (temp0_1 == 0)
        i_2 = x8_1 u>> 1
    else
        i_2 = i_3
    
    char* var_c0
    char* x10_2
    
    if (temp0_1 == 0)
        x10_2 = &var_d0 | 1
    else
        x10_2 = var_c0
    
    if (i_2 != 0)
        uint64_t i
        
        do
            uint32_t x12_1 = zx.d(*x10_2)
            
            if (x12_1 - 0x30 u>= 0xa)
                void** x0_19 = __cxa_allocate_exception(0x20)
                var_110 = 0xe
                int32_t var_10f_1
                __builtin_strncpy(&var_10f_1, "invalid", 8)
                *x0_19 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_19[1])
                *x0_19 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_19, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            x23 = x12_1 + x23 * 0xa - 0x30
            
            if (x23 u>= 0x10000)
                void** x0_16 = __cxa_allocate_exception(0x20)
                var_110 = 0xe
                int32_t var_10f
                __builtin_strncpy(&var_10f, "invalid", 8)
                *x0_16 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_16[1])
                *x0_16 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_16, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            i = i_2
            i_2 -= 1
            x10_2 = &x10_2[1]
        while (i != 1)
    
    if ((x8_1.d & 1) != 0)
        operator delete(var_c0)
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_128, arg1, 0, x0)

char* x20_1 = &var_128 | 1
char* var_118
char* x1_3

if ((zx.d(var_128) & 1) == 0)
    x1_3 = x20_1
else
    x1_3 = var_118

if (inet_pton(2, x1_3, &var_d0) != 0)
    void** x0_22 = __cxa_allocate_exception(0x20)
    var_d0 = 0xe
    int32_t var_cf
    __builtin_strncpy(&var_cf, "invalid", 8)
    *x0_22 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_22[1])
    *x0_22 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_22, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

sub_f10488(&var_110, 
    "^(([a-zA-Z0-9]|[a-zA-Z0-9][a-zA-Z0-9\-]*[a-zA-Z0-9])\.)*([A-Za-z0-9]|[A-Za-z0-9][A-Za-z0-9\-
        ]*[A-Za-z0-9])$", 
    0)
int64_t var_a0 = 0
int64_t var_98 = 0
char* x20_2

if ((zx.d(var_128) & 1) == 0)
    x20_2 = x20_1
else
    x20_2 = var_118

char var_90 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x11)
char var_70 = 0
int64_t var_68 = 0
__builtin_memset(&var_d0, 0, 0x29)
int32_t x0_10 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__search<std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >(
    &var_110, x20_2, &x20_2[strlen(x20_2)], &var_d0)
uint64_t i_4 = var_d0.q

if (i_4 != 0)
    i_3 = i_4
    operator delete(i_4)

int64_t* var_e0

if (var_e0 != 0)
    int64_t x9_4
    int32_t i_1
    
    do
        x9_4 = __ldaxr(&var_e0[1])
        i_1 = __stlxr(x9_4 - 1, &var_e0[1])
    while (i_1 != 0)
    
    if (x9_4 == 0)
        (*(*var_e0 + 0x10))(var_e0)
        std::__ndk1::__shared_weak_count::__release_weak()

std::__ndk1::locale::~locale()
char var_78

if ((x0_10 & (zx.d(var_78) == 0 ? 1 : 0) & 1) == 0)
    void** x0_25 = __cxa_allocate_exception(0x20)
    var_d0 = 0xe
    int32_t var_cf_1
    __builtin_strncpy(&var_cf_1, "invalid", 8)
    *x0_25 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_25[1])
    *x0_25 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_25, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

char* entry_x8
*entry_x8 = 3
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &entry_x8[8])
uint32_t x8_8 = zx.d(var_128)
*(entry_x8 + 0x20) = x23.w

if ((x8_8 & 1) != 0)
    result = operator delete(var_118)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
