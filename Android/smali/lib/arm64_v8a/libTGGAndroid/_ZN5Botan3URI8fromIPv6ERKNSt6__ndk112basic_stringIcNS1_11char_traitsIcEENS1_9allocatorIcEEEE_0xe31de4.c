// 函数: _ZN5Botan3URI8fromIPv6ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe31de4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t x0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
    arg1.b, 0x5d)
uint64_t x10 = zx.q(*arg1)
void* x8_1 = *(arg1 + 0x10)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x11

if ((x10.d & 1) != 0)
    x11 = x8_1
else
    x11 = arg1 + 1

char var_b8

if ((((x0 != -1 ? 1 : 0) ^ (zx.d(*x11) != 0x5b ? 1 : 0)) & 1) == 0)
    void** x0_14 = __cxa_allocate_exception(0x20)
    var_b8 = 0xe
    int32_t var_b7
    __builtin_strncpy(&var_b7, "invalid", 8)
    *x0_14 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_14[1])
    *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

char var_d0
int32_t x23

if (x0 == -1)
    x23 = 0
else
    int64_t x9_2
    
    if ((x10.d & 1) != 0)
        x9_2 = x0 + 1
        
        if (*(arg1 + 8) u> x9_2)
            goto label_e31e78
        
        x23 = 0
    else
        x9_2 = x0 + 1
        
        if (x9_2 u>= x10 u>> 1)
            x23 = 0
        else
            x8_1 = arg1 + 1
        label_e31e78:
            
            if (zx.d(*(x8_1 + x9_2)) != 0x3a)
                void** x0_20 = __cxa_allocate_exception(0x20)
                var_b8 = 0xe
                int32_t var_b7_2
                __builtin_strncpy(&var_b7_2, "invalid", 8)
                *x0_20 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_20[1])
                *x0_20 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_20, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_b8, arg1, x0 + 2, -ffffffffffffffff)
            uint64_t x8_3 = zx.q(var_b8)
            x23 = 0
            int32_t temp0_1 = x8_3.d & 1
            uint64_t i_1
            char var_b0
            
            if (temp0_1 == 0)
                i_1 = x8_3 u>> 1
            else
                i_1 = var_b0.q
            char* var_a8
            char* x10_3
            
            if (temp0_1 == 0)
                x10_3 = &var_b8 | 1
            else
                x10_3 = var_a8
            
            if (i_1 != 0)
                uint64_t i
                
                do
                    uint32_t x12_1 = zx.d(*x10_3)
                    
                    if (x12_1 - 0x30 u>= 0xa)
                        void** x0_11 = __cxa_allocate_exception(0x20)
                        var_d0 = 0xe
                        int32_t var_cf_1
                        __builtin_strncpy(&var_cf_1, "invalid", 8)
                        *x0_11 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_11[1])
                        *x0_11 = _vtable_for_Botan::Invalid_Argument + 0x10
                        __cxa_throw(x0_11, _typeinfo_for_Botan::Invalid_Argument, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    x23 = x12_1 + x23 * 0xa - 0x30
                    
                    if (x23 u>= 0x10000)
                        void** x0_8 = __cxa_allocate_exception(0x20)
                        var_d0 = 0xe
                        int32_t var_cf
                        __builtin_strncpy(&var_cf, "invalid", 8)
                        *x0_8 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_8[1])
                        *x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
                        __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    i = i_1
                    i_1 -= 1
                    x10_3 = &x10_3[1]
                while (i != 1)
            
            if ((x8_3.d & 1) != 0)
                operator delete(var_a8)

uint64_t x2_2 = zx.q(x0 != -1 ? 1 : 0)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_d0, arg1, x2_2, x0 - x2_2)
void* var_c0
char* x1_3

if ((zx.d(var_d0) & 1) == 0)
    x1_3 = &var_d0 | 1
else
    x1_3 = var_c0

if (inet_pton(0xa, x1_3, &var_b8) == 0)
    void** x0_17 = __cxa_allocate_exception(0x20)
    var_b8 = 0xe
    int32_t var_b7_1
    __builtin_strncpy(&var_b7_1, "invalid", 8)
    *x0_17 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_17[1])
    *x0_17 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_17, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

char* entry_x8
*entry_x8 = 2
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &entry_x8[8])
uint32_t x8_5 = zx.d(var_d0)
*(entry_x8 + 0x20) = x23.w

if ((x8_5 & 1) != 0)
    result = operator delete(var_c0)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
