// 函数: _ZNK5Botan3TLS11Text_Policy19key_exchange_groupsEv
// 地址: 0xe838e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x22 + 0x28)
char var_a0
__builtin_strncpy(&var_a0, "&key_exchange_groups", 0x15)
int16_t var_e0 = 0
char var_c0
void* entry_x0

if (entry_x0 + 0x10 == std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        entry_x0 + 8))
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_c0)
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_c0)

void* var_d0

if ((zx.d(var_e0.b) & 1) != 0)
    operator delete(var_d0)

int32_t var_90

if ((zx.d(var_a0) & 1) != 0)
    operator delete(var_90.q)

uint64_t x9_1 = zx.q(var_c0)
int32_t x22_1 = x9_1.d & 1
uint64_t x9_2 = x9_1 u>> 1
uint64_t var_b8
uint64_t x10

x10 = x22_1 == 0 ? x9_2 : var_b8

int16_t var_f8
void* var_b0

if (x10 == 0)
    var_e0.b = 0xc
    __builtin_strncpy(&var_e0:1, "groups", 7)
    var_f8 = 0
    
    if (entry_x0 + 0x10 == std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            entry_x0 + 8))
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_a0)
    else
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_a0)
    
    if ((zx.d(var_c0) & 1) != 0)
        operator delete(var_b0)
    
    var_a0.w = 0
    var_c0.o = var_a0.o
    var_b0 = var_90.q
    void* var_e8
    
    if ((zx.d(var_f8.b) & 1) != 0)
        operator delete(var_e8)
    
    if ((zx.d(var_e0.b) & 1) != 0)
        operator delete(var_d0)
    
    uint64_t x9_10 = zx.q(var_c0)
    x22_1 = x9_10.d & 1
    uint64_t x8_23
    
    if ((x22_1 & 0xff) == 0)
        x8_23 = x9_10 u>> 1
    else
        x8_23 = var_b8
    
    if (x8_23 != 0)
        goto label_e839d4
    
    goto label_e83cd4

uint64_t x8_3

if ((x22_1 & 0xff) == 0)
    x8_3 = x9_2
else
    x8_3 = var_b8

char* result
int128_t* entry_x8

if (x8_3 == 0)
label_e83cd4:
    __builtin_memset(entry_x8, 0, 0x18)
    result = operator new(0x18)
    *(entry_x8 + 8) = &result[0x18]
    entry_x8[1].q = &result[0x18]
    __builtin_memcpy(result, 
        "\x1d\x00\x17\x00\x1a\x00\x18\x00\x1b\x00\x19\x00\x1c\x00\x00\x01\x01\x01\x02\x01\x03\x01\x04\x01", 
        0x18)
    *entry_x8 = result
    
    if ((x22_1 & 0xff) != 0)
        result = operator delete(var_b0)
else
label_e839d4:
    __builtin_memset(&var_e0, 0, 0x18)
    var_a0.q = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
    int120_t var_9f
    var_9f:7.b = 0x20
    char* result_1 = &var_a0
    Botan::split_on_pred(&var_c0, &var_a0)
    result = result_1
    int128_t v0_1
    
    if (&var_a0 == result)
        result, v0_1 = (*(*result + 0x20))()
    else if (result != 0)
        result, v0_1 = (*(*result + 0x28))()
    
    void* x20_1 = var_f8.q
    char* var_f0
    void* var_d0_1
    
    if (x20_1 != var_f0)
        do
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_a0)
            result, v0_1 = Botan::TLS::group_param_from_string(&var_a0)
            int16_t x21_2 = result.w
            
            if ((result.d & 0xffff) == 0)
                uint64_t var_100 = 0
                result, v0_1 = std::__ndk1::stoul(&var_a0, &var_100, 0)
                uint64_t x8_9 = zx.q(var_a0)
                x21_2 = result.w
                uint64_t x8_10
                
                if ((x8_9.d & 1) == 0)
                    x8_10 = x8_9 u>> 1
                else
                    x8_10 = var_9f:7.q
                
                if (result u>> 0x10 == 0 && var_100 == x8_10 && zx.d(x21_2) != 0)
                    goto label_e83ab0
            else
            label_e83ab0:
                void* var_d8_1
                
                if (var_d8_1 == var_d0_1)
                    void* x22_2 = var_e0.q
                    void* x23_1 = var_d8_1 - x22_2
                    
                    if (x23_1 s<= -3)
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        sub_ef2a0c()
                        noreturn
                    
                    int64_t x25_1 = x23_1 s>> 1
                    void* x8_12
                    
                    if (x23_1 u< x25_1 + 1)
                        x8_12 = x25_1 + 1
                    else
                        x8_12 = x23_1
                    
                    void* fp_1
                    
                    fp_1 = x25_1 u< 0x3fffffffffffffff ? x8_12 : 0x7fffffffffffffff
                    
                    char* result_2
                    void* x25_3
                    
                    if (fp_1 == 0)
                        result_2 = nullptr
                        *(x25_1 << 1) = x21_2
                        x25_3 = (x25_1 << 1) + 2
                        
                        if (x23_1 s>= 1)
                            result, v0_1 = memcpy(result_2, x22_2, x23_1)
                    else
                        if ((fp_1 & 0xffffffff80000000) != 0)
                            sub_ef2a0c()
                            noreturn
                        
                        result, v0_1 = operator new(fp_1 << 1)
                        result_2 = result
                        void* x25_2 = &result_2[x25_1 << 1]
                        *x25_2 = x21_2
                        x25_3 = x25_2 + 2
                        
                        if (x23_1 s>= 1)
                            result, v0_1 = memcpy(result_2, x22_2, x23_1)
                    
                    var_e0.q = result_2
                    var_d8_1 = x25_3
                    var_d0_1 = &result_2[fp_1 << 1]
                    
                    if (x22_2 != 0)
                        result, v0_1 = operator delete(x22_2)
                else
                    *var_d8_1 = x21_2
                    var_d8_1 += 2
            
            if ((zx.d(var_a0) & 1) != 0)
                result, v0_1 = operator delete(var_90.q)
            
            x20_1 += 0x18
        while (var_f0 != x20_1)
        
        x20_1 = var_f8.q
    
    if (x20_1 != 0)
        char* x8_15 = var_f0
        void* x0_18
        
        if (x8_15 == x20_1)
            x0_18 = x20_1
        else
            char* x21_3 = x8_15
            
            do
                x21_3 = &x21_3[-0x18]
                
                if ((zx.d(*x21_3) & 1) != 0)
                    operator delete(*(x8_15 - 8))
                
                x8_15 = x21_3
            while (x20_1 != x21_3)
            
            x0_18 = var_f8.q
        
        void* var_f0_1 = x20_1
        result, v0_1 = operator delete(x0_18)
    
    char x22_3 = var_c0 & 1
    *entry_x8 = var_e0.o
    entry_x8[1].q = var_d0_1
    
    if (zx.d(x22_3) != 0)
        result = operator delete(var_b0)

if (*(x22 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
