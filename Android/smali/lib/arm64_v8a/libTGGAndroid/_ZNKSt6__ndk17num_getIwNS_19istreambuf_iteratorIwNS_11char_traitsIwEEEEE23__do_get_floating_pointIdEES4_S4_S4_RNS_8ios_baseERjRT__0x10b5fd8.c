// 函数: _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE23__do_get_floating_pointIdEES4_S4_S4_RNS_8ios_baseERjRT_
// 地址: 0x10b5fd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
std::__ndk1::ios_base& x20 = arg3
int64_t* result = arg2
wchar_t var_198
wchar_t var_194
wchar_t var_f0[0x20]
std::__ndk1::__num_get<wchar_t>::__stage2_float_prep(arg4, &var_f0, &var_194, &var_198)
int64_t var_1c8
__builtin_memset(&var_1c8, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
    &var_1c8, 0x16)
char* x26 = &var_1c8 | 1
char* var_1b8
char* x23

if ((zx.d(var_1c8.b) & 1) == 0)
    x23 = x26
else
    x23 = var_1b8

int32_t var_1dc = 0
bool var_1e0 = true
char var_1e4 = 0x45
uint32_t var_190[0x28]
uint32_t (* var_1d8)[0x28] = &var_190
char* var_1d0 = x23
char var_1b0

while (true)
    int32_t x19_1
    
    if (result != 0)
        int32_t* x8_4 = result[3]
        int32_t x0_2
        
        if (x8_4 == result[4])
            x0_2 = (*(*result + 0x48))(result)
        else
            x0_2 = *x8_4
        
        x19_1 = x0_2 == 0xffffffff ? 1 : 0
        
        if (x0_2 == 0xffffffff)
            result = nullptr
        
        if (x20 == 0)
            goto label_10b6110
        
        goto label_10b60dc
    
    x19_1 = 1
    
    if (x20 != 0)
    label_10b60dc:
        int32_t* x8_7 = *(x20 + 0x18)
        int32_t x0_4
        
        if (x8_7 == *(x20 + 0x20))
            x0_4 = (*(*x20 + 0x48))(x20)
        else
            x0_4 = *x8_7
        
        if (x0_4 == 0xffffffff)
            goto label_10b6110
        
        if (x19_1 == 0)
            break
    else
    label_10b6110:
        x20 = nullptr
        
        if ((x19_1 & 1) != 0)
            break
    
    uint64_t x9_3 = zx.q(var_1c8.b)
    uint64_t x19_2
    uint64_t var_1c0
    
    if ((x9_3.d & 1) != 0)
        x19_2 = var_1c0
    else
        x19_2 = x9_3 u>> 1
    
    if (var_1d0 == &x23[x19_2])
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_1c8, (x19_2 << 1).b)
        char x1_2
        
        if ((zx.d(var_1c8.b) & 1) == 0)
            x1_2 = 0x16
        else
            x1_2 = (var_1c8.b & 0xfe) - 1
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_1c8, x1_2)
        
        if ((zx.d(var_1c8.b) & 1) == 0)
            x23 = x26
        else
            x23 = var_1b8
        
        var_1d0 = &x23[x19_2]
    
    int32_t* x8_16 = result[3]
    uint64_t x0_8
    
    if (x8_16 == result[4])
        x0_8 = (*(*result + 0x48))(result)
    else
        x0_8 = zx.q(*x8_16)
    
    int32_t* var_210_1 = &var_1dc
    wchar_t (* var_208_1)[0x20] = &var_f0
    uint32_t (* var_220_1)[0x28] = &var_190
    uint32_t (** var_218_1)[0x28] = &var_1d8
    
    if (std::__ndk1::__num_get<wchar_t>::__stage2_float_loop(x0_8, &var_1e0, &var_1e4, x23, 
            &var_1d0, zx.q(var_194), zx.q(var_198), &var_1b0) != 0)
        break
    
    int64_t x8_19 = result[3]
    
    if (x8_19 != result[4])
        result[3] = x8_19 + 4
    else
        (*(*result + 0x50))(result)

uint64_t x8_22 = zx.q(var_1b0)
uint64_t x8_23
uint64_t var_1a8

if ((x8_22.d & 1) == 0)
    x8_23 = x8_22 u>> 1
else
    x8_23 = var_1a8

if (zx.d(var_1e0) != 0 && x8_23 != 0)
    uint32_t (* x8_24)[0x28] = var_1d8
    
    if (x8_24 - &var_190 s<= 0x9f)
        int32_t x9_11 = var_1dc
        var_1d8 = &(*x8_24)[1]
        *x8_24 = x9_11

int64_t* entry_x5
*entry_x5 = sub_10ddf70(x23, var_1d0, arg5)
std::__ndk1::__check_grouping(&var_1b0, &var_190, var_1d8, arg5)
int32_t x19_3

if (result != 0)
    int32_t* x8_26 = result[3]
    int32_t x0_14
    
    if (x8_26 == result[4])
        x0_14 = (*(*result + 0x48))(result)
    else
        x0_14 = *x8_26
    
    x19_3 = x0_14 == 0xffffffff ? 1 : 0
    
    if (x0_14 == 0xffffffff)
        result = nullptr
    
    if (x20 == 0)
        goto label_10b6288
    
    goto label_10b62b4

x19_3 = 1
uint64_t x20_1

if (x20 != 0)
label_10b62b4:
    int32_t* x8_29 = *(x20 + 0x18)
    int32_t x0_16
    
    if (x8_29 == *(x20 + 0x20))
        x0_16 = (*(*x20 + 0x48))(x20)
    else
        x0_16 = *x8_29
    
    x20_1 = x8
    
    if (((x19_3 ^ (x0_16 == 0xffffffff ? 1 : 0)) & 1) == 0)
        *arg5 |= 2
else
label_10b6288:
    x20_1 = x8
    
    if ((x19_3 & 1) != 0)
        *arg5 |= 2

if ((zx.d(var_1c8.b) & 1) != 0)
    operator delete(var_1b8)

void* var_1a0

if ((zx.d(var_1b0) & 1) != 0)
    operator delete(var_1a0)

if (*(x20_1 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
