// 函数: _ZN5Botan3URI8fromIPv4ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe31a70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
std::__ndk1::allocator<char>* x0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
    arg1.b, 0x3a)
char var_d0
char var_b8
int32_t x23

if (x0 == -1)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_d0, arg1, 0, -ffffffffffffffff)
    x23 = 0
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_b8, arg1, x0 + 1, -ffffffffffffffff)
    uint64_t x8_1 = zx.q(var_b8)
    x23 = 0
    int32_t temp0_1 = x8_1.d & 1
    uint64_t i_1
    uint64_t i_2
    
    if (temp0_1 == 0)
        i_1 = x8_1 u>> 1
    else
        i_1 = i_2
    char* var_a8
    char* x10_2
    
    if (temp0_1 == 0)
        x10_2 = &var_b8 | 1
    else
        x10_2 = var_a8
    
    if (i_1 != 0)
        uint64_t i
        
        do
            uint32_t x12_1 = zx.d(*x10_2)
            
            if (x12_1 - 0x30 u>= 0xa)
                void** x0_12 = __cxa_allocate_exception(0x20)
                var_d0 = 0xe
                int32_t var_cf_1
                __builtin_strncpy(&var_cf_1, "invalid", 8)
                *x0_12 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_12[1])
                *x0_12 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_12, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            x23 = x12_1 + x23 * 0xa - 0x30
            
            if (x23 u>= 0x10000)
                void** x0_9 = __cxa_allocate_exception(0x20)
                var_d0 = 0xe
                int32_t var_cf
                __builtin_strncpy(&var_cf, "invalid", 8)
                *x0_9 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_9[1])
                *x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            i = i_1
            i_1 -= 1
            x10_2 = &x10_2[1]
        while (i != 1)
    
    if ((x8_1.d & 1) != 0)
        operator delete(var_a8)
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_d0, arg1, 0, x0)

void* var_c0
char* x1_3

if ((zx.d(var_d0) & 1) == 0)
    x1_3 = &var_d0 | 1
else
    x1_3 = var_c0

if (inet_pton(2, x1_3, &var_b8) == 0)
    void** x0_15 = __cxa_allocate_exception(0x20)
    var_b8 = 0xe
    int32_t var_b7
    __builtin_strncpy(&var_b7, "invalid", 8)
    *x0_15 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_15[1])
    *x0_15 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_15, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

char* entry_x8
*entry_x8 = 1
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &entry_x8[8])
uint32_t x8_3 = zx.d(var_d0)
*(entry_x8 + 0x20) = x23.w

if ((x8_3 & 1) != 0)
    result = operator delete(var_c0)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
