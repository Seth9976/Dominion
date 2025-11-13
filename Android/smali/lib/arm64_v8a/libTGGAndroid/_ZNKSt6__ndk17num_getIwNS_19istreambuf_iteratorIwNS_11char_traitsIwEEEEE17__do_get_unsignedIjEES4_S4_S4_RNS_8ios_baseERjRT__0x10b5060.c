// 函数: _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__do_get_unsignedIjEES4_S4_S4_RNS_8ios_baseERjRT_
// 地址: 0x10b5060
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x10 + 0x28)
std::__ndk1::ios_base& x20 = arg3
int64_t* result = arg2
int32_t x8_2 = arg4[2] & 0x4a
int32_t x23

if (x8_2 == 0)
    x23 = 0
else if (x8_2 == 0x40)
    x23 = 8
else if (x8_2 != 8)
    x23 = 0xa
else
    x23 = 0x10

wchar_t var_17c
wchar_t var_d8[0x1a]
std::__ndk1::__num_get<wchar_t>::__stage2_int_prep(arg4, &var_d8, &var_17c)
int64_t var_1b0
__builtin_memset(&var_1b0, 0, 0x18)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
    &var_1b0, 0x16)
char* x27 = &var_1b0 | 1
char* var_1a0
char* x24

if ((zx.d(var_1b0.b) & 1) == 0)
    x24 = x27
else
    x24 = var_1a0

uint32_t var_1c4 = 0
uint32_t var_178[0x28]
uint32_t (* var_1c0)[0x28] = &var_178
char* var_1b8 = x24
char var_198

while (true)
    int32_t x25_1
    
    if (result != 0)
        int32_t* x8_5 = result[3]
        int32_t x0_2
        
        if (x8_5 == result[4])
            x0_2 = (*(*result + 0x48))(result)
        else
            x0_2 = *x8_5
        
        x25_1 = x0_2 == 0xffffffff ? 1 : 0
        
        if (x0_2 == 0xffffffff)
            result = nullptr
        
        if (x20 == 0)
            goto label_10b51bc
        
        goto label_10b5188
    
    x25_1 = 1
    
    if (x20 != 0)
    label_10b5188:
        int32_t* x8_8 = *(x20 + 0x18)
        int32_t x0_4
        
        if (x8_8 == *(x20 + 0x20))
            x0_4 = (*(*x20 + 0x48))(x20)
        else
            x0_4 = *x8_8
        
        if (x0_4 == 0xffffffff)
            goto label_10b51bc
        
        if (x25_1 == 0)
            break
    else
    label_10b51bc:
        x20 = nullptr
        
        if ((x25_1 & 1) != 0)
            break
    
    uint64_t x9_3 = zx.q(var_1b0.b)
    uint64_t x25_2
    uint64_t var_1a8
    
    if ((x9_3.d & 1) != 0)
        x25_2 = var_1a8
    else
        x25_2 = x9_3 u>> 1
    
    if (var_1b8 == &x24[x25_2])
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_1b0, (x25_2 << 1).b)
        char x1_2
        
        if ((zx.d(var_1b0.b) & 1) == 0)
            x1_2 = 0x16
        else
            x1_2 = (var_1b0.b & 0xfe) - 1
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(
            &var_1b0, x1_2)
        
        if ((zx.d(var_1b0.b) & 1) == 0)
            x24 = x27
        else
            x24 = var_1a0
        
        var_1b8 = &x24[x25_2]
    
    int32_t* x8_17 = result[3]
    uint64_t x0_8
    
    if (x8_17 == result[4])
        x0_8 = (*(*result + 0x48))(result)
    else
        x0_8 = zx.q(*x8_17)
    
    uint32_t (** var_1f0_1)[0x28] = &var_1c0
    wchar_t (* var_1e8_1)[0x1a] = &var_d8
    
    if (std::__ndk1::__num_get<wchar_t>::__stage2_int_loop(x0_8, zx.q(x23), x24, &var_1b8, 
            &var_1c4, zx.q(var_17c), &var_198, &var_178) != 0)
        break
    
    int64_t x8_20 = result[3]
    
    if (x8_20 != result[4])
        result[3] = x8_20 + 4
    else
        (*(*result + 0x50))(result)

uint64_t x8_23 = zx.q(var_198)
uint64_t x8_24
uint64_t var_190

if ((x8_23.d & 1) == 0)
    x8_24 = x8_23 u>> 1
else
    x8_24 = var_190

if (x8_24 != 0)
    uint32_t (* x8_25)[0x28] = var_1c0
    
    if (x8_25 - &var_178 s<= 0x9f)
        uint32_t x9_11 = var_1c4
        var_1c0 = &(*x8_25)[1]
        *x8_25 = x9_11

int32_t* entry_x5
*entry_x5 = sub_10dd9d8(x24, var_1b8, arg5, x23)
std::__ndk1::__check_grouping(&var_198, &var_178, var_1c0, arg5)
int32_t x22

if (result != 0)
    int32_t* x8_27 = result[3]
    int32_t x0_15
    
    if (x8_27 == result[4])
        x0_15 = (*(*result + 0x48))(result)
    else
        x0_15 = *x8_27
    
    x22 = x0_15 == 0xffffffff ? 1 : 0
    
    if (x0_15 == 0xffffffff)
        result = nullptr
    
    if (x20 == 0)
        goto label_10b532c
    
    goto label_10b5354

x22 = 1

if (x20 != 0)
label_10b5354:
    int32_t* x8_30 = *(x20 + 0x18)
    int32_t x0_17
    
    if (x8_30 == *(x20 + 0x20))
        x0_17 = (*(*x20 + 0x48))(x20)
    else
        x0_17 = *x8_30
    
    if (((x22 ^ (x0_17 == 0xffffffff ? 1 : 0)) & 1) == 0)
        *arg5 |= 2
else
label_10b532c:
    
    if ((x22 & 1) != 0)
        *arg5 |= 2

if ((zx.d(var_1b0.b) & 1) != 0)
    operator delete(var_1a0)

void* var_188

if ((zx.d(var_198) & 1) != 0)
    operator delete(var_188)

if (*(x10 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
