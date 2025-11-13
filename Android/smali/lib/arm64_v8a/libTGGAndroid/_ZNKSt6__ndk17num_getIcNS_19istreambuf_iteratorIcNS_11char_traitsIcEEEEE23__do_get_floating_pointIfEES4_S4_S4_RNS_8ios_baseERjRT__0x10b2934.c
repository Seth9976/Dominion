// 函数: _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_
// 地址: 0x10b2934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
std::__ndk1::ios_base& x21 = arg3
int64_t* result = arg2
char var_138
char var_134
char var_90[0x20]
std::__ndk1::__num_get<char>::__stage2_float_prep(arg4, &var_90, &var_134, &var_138)
int64_t var_168
__builtin_memset(&var_168, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
    &var_168, 0x16)
char* x26 = &var_168 | 1
char* var_158
char* x23

if ((zx.d(var_168.b) & 1) == 0)
    x23 = x26
else
    x23 = var_158

int32_t var_17c = 0
bool var_180 = true
char var_184 = 0x45
uint32_t var_130[0x28]
uint32_t (* var_178)[0x28] = &var_130
char* var_170 = x23
char var_150

while (true)
    if (result != 0 && result[3] == result[4])
        if ((*(*result + 0x48))(result) == 0xffffffff)
            result = nullptr
        
        if (x21 != 0)
            goto label_10b2a10
        
        goto label_10b2a50
    
    if (x21 == 0)
    label_10b2a50:
        x21 = nullptr
        
        if (result == 0)
            break
    else
    label_10b2a10:
        int32_t x0_3
        
        if (*(x21 + 0x18) == *(x21 + 0x20))
            x0_3 = (*(*x21 + 0x48))(x21)
        
        if (*(x21 + 0x18) == *(x21 + 0x20) && x0_3 == 0xffffffff)
            goto label_10b2a50
        
        if (result != 0)
            break
    
    uint64_t x9_3 = zx.q(var_168.b)
    uint64_t x20_1
    uint64_t var_160
    
    if ((x9_3.d & 1) != 0)
        x20_1 = var_160
    else
        x20_1 = x9_3 u>> 1
    
    if (var_170 == &x23[x20_1])
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_168, (x20_1 << 1).b)
        char x1_2
        
        if ((zx.d(var_168.b) & 1) == 0)
            x1_2 = 0x16
        else
            x1_2 = (var_168.b & 0xfe) - 1
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_168, x1_2)
        
        if ((zx.d(var_168.b) & 1) == 0)
            x23 = x26
        else
            x23 = var_158
        
        var_170 = &x23[x20_1]
    
    char* x8_16 = result[3]
    uint64_t x0_8
    
    if (x8_16 == result[4])
        x0_8 = (*(*result + 0x48))(result)
    else
        x0_8 = zx.q(*x8_16)
    
    int32_t* var_1b0_1 = &var_17c
    char (* var_1a8_1)[0x20] = &var_90
    uint32_t (* var_1c0_1)[0x28] = &var_130
    uint32_t (** var_1b8_1)[0x28] = &var_178
    
    if (std::__ndk1::__num_get<char>::__stage2_float_loop(x0_8, &var_180, &var_184, x23, &var_170, 
            zx.q(var_134), zx.q(var_138), &var_150) != 0)
        break
    
    int64_t x8_19 = result[3]
    
    if (x8_19 != result[4])
        result[3] = x8_19 + 1
    else
        (*(*result + 0x50))(result)

uint64_t x8_22 = zx.q(var_150)
uint64_t x8_23
uint64_t var_148

if ((x8_22.d & 1) == 0)
    x8_23 = x8_22 u>> 1
else
    x8_23 = var_148

if (zx.d(var_180) != 0 && x8_23 != 0)
    uint32_t (* x8_24)[0x28] = var_178
    
    if (x8_24 - &var_130 s<= 0x9f)
        int32_t x9_11 = var_17c
        var_178 = &(*x8_24)[1]
        *x8_24 = x9_11

int32_t* entry_x5
*entry_x5 = sub_10dde44(x23, var_170, arg5)
std::__ndk1::__check_grouping(&var_150, &var_130, var_178, arg5)

if (result != 0 && result[3] == result[4])
    if ((*(*result + 0x48))(result) == 0xffffffff)
        result = nullptr
    
    if (x21 != 0)
        goto label_10b2bc8
    
    goto label_10b2c6c

if (x21 == 0)
label_10b2c6c:
    
    if (result == 0)
        *arg5 |= 2
else
label_10b2bc8:
    int32_t x0_15
    
    if (*(x21 + 0x18) == *(x21 + 0x20))
        x0_15 = (*(*x21 + 0x48))(x21)
    
    if (*(x21 + 0x18) == *(x21 + 0x20) && x0_15 == 0xffffffff)
        goto label_10b2c6c
    
    if (result != 0)
        *arg5 |= 2

if ((zx.d(var_168.b) & 1) != 0)
    operator delete(var_158)

void* var_140

if ((zx.d(var_150) & 1) != 0)
    operator delete(var_140)

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
