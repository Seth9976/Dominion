// 函数: _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__do_get_unsignedIyEES4_S4_S4_RNS_8ios_baseERjRT_
// 地址: 0x10b2584
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
std::__ndk1::ios_base& x21 = arg3
int64_t* result = arg2
int32_t x8_3 = arg4[2] & 0x4a
int32_t x23

if (x8_3 == 0)
    x23 = 0
else if (x8_3 == 0x40)
    x23 = 8
else if (x8_3 != 8)
    x23 = 0xa
else
    x23 = 0x10

char var_130
char var_8c[0x1c]
std::__ndk1::__num_get<char>::__stage2_int_prep(arg4, &var_8c, &var_130)
int64_t var_160
__builtin_memset(&var_160, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
    &var_160, 0x16)
char* x27 = &var_160 | 1
char* var_150
char* x24

if ((zx.d(var_160.b) & 1) == 0)
    x24 = x27
else
    x24 = var_150

uint32_t var_174 = 0
uint32_t var_12c[0x28]
uint32_t (* var_170)[0x28] = &var_12c
char* var_168 = x24
char var_148

while (true)
    if (result != 0 && result[3] == result[4])
        if ((*(*result + 0x48))(result) == 0xffffffff)
            result = nullptr
        
        if (x21 != 0)
            goto label_10b2688
        
        goto label_10b26c8
    
    if (x21 == 0)
    label_10b26c8:
        x21 = nullptr
        
        if (result == 0)
            break
    else
    label_10b2688:
        int32_t x0_3
        
        if (*(x21 + 0x18) == *(x21 + 0x20))
            x0_3 = (*(*x21 + 0x48))(x21)
        
        if (*(x21 + 0x18) == *(x21 + 0x20) && x0_3 == 0xffffffff)
            goto label_10b26c8
        
        if (result != 0)
            break
    
    uint64_t x9_3 = zx.q(var_160.b)
    uint64_t x25_1
    uint64_t var_158
    
    if ((x9_3.d & 1) != 0)
        x25_1 = var_158
    else
        x25_1 = x9_3 u>> 1
    
    if (var_168 == &x24[x25_1])
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_160, (x25_1 << 1).b)
        char x1_2
        
        if ((zx.d(var_160.b) & 1) == 0)
            x1_2 = 0x16
        else
            x1_2 = (var_160.b & 0xfe) - 1
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_160, x1_2)
        
        if ((zx.d(var_160.b) & 1) == 0)
            x24 = x27
        else
            x24 = var_150
        
        var_168 = &x24[x25_1]
    
    char* x8_18 = result[3]
    uint64_t x0_8
    
    if (x8_18 == result[4])
        x0_8 = (*(*result + 0x48))(result)
    else
        x0_8 = zx.q(*x8_18)
    
    uint32_t (** var_1a0_1)[0x28] = &var_170
    char (* var_198_1)[0x1c] = &var_8c
    
    if (std::__ndk1::__num_get<char>::__stage2_int_loop(x0_8, zx.q(x23), x24, &var_168, &var_174, 
            zx.q(var_130), &var_148, &var_12c) != 0)
        break
    
    int64_t x8_21 = result[3]
    
    if (x8_21 != result[4])
        result[3] = x8_21 + 1
    else
        (*(*result + 0x50))(result)

uint64_t x8_24 = zx.q(var_148)
uint64_t x8_25
uint64_t var_140

if ((x8_24.d & 1) == 0)
    x8_25 = x8_24 u>> 1
else
    x8_25 = var_140

if (x8_25 != 0)
    uint32_t (* x8_26)[0x28] = var_170
    
    if (x8_26 - &var_12c s<= 0x9f)
        uint32_t x9_11 = var_174
        var_170 = &(*x8_26)[1]
        *x8_26 = x9_11

uint64_t* entry_x5
*entry_x5 = sub_10ddcd0(x24, var_168, arg5, x23)
std::__ndk1::__check_grouping(&var_148, &var_12c, var_170, arg5)

if (result != 0 && result[3] == result[4])
    if ((*(*result + 0x48))(result) == 0xffffffff)
        result = nullptr
    
    if (x21 != 0)
        goto label_10b2834
    
    goto label_10b28d8

if (x21 == 0)
label_10b28d8:
    
    if (result == 0)
        *arg5 |= 2
else
label_10b2834:
    int32_t x0_16
    
    if (*(x21 + 0x18) == *(x21 + 0x20))
        x0_16 = (*(*x21 + 0x48))(x21)
    
    if (*(x21 + 0x18) == *(x21 + 0x20) && x0_16 == 0xffffffff)
        goto label_10b28d8
    
    if (result != 0)
        *arg5 |= 2

if ((zx.d(var_160.b) & 1) != 0)
    operator delete(var_150)

void* var_138

if ((zx.d(var_148) & 1) != 0)
    operator delete(var_138)

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
