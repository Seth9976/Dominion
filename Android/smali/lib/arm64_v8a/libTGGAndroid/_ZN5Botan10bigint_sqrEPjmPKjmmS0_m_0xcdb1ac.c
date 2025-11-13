// 函数: _ZN5Botan10bigint_sqrEPjmPKjmmS0_m
// 地址: 0xcdb1ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t lr
int64_t var_40 = lr
uint64_t x2 = arg2 << 2

if (x2 != 0)
    memset(arg1, 0, x2)

if (arg5 u> arg2 u>> 1)
    return Botan::BigInt::operator/=(Botan::assertion_failure("z_size/2 >= x_sw", 
        "Output size is sufficient", "bigint_sqr", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xd188)) __tailcall

if (arg5 == 1)
    uint64_t x8_1 = zx.q(*arg3)
    *arg1 = x8_1 * x8_1
    return 

if (arg2 u>= 8 && arg4 u>= 4 && arg5 u<= 4)
    return Botan::bigint_comba_sqr4(arg1, arg3) __tailcall

if (arg2 u>= 0xc && arg4 u>= 6 && arg5 u<= 6)
    return Botan::bigint_comba_sqr6(arg1, arg3) __tailcall

if (arg2 u>= 0x10 && arg4 u>= 8 && arg5 u<= 8)
    return Botan::bigint_comba_sqr8(arg1, arg3) __tailcall

if (arg2 u>= 0x12 && arg4 u>= 9 && arg5 u<= 9)
    return Botan::bigint_comba_sqr9(arg1, arg3) __tailcall

if (arg2 u>= 0x20 && arg4 u>= 0x10 && arg5 u<= 0x10)
    return Botan::bigint_comba_sqr16(arg1, arg3) __tailcall

if (arg2 u>= 0x30 && arg4 u>= 0x18 && arg5 u<= 0x18)
    return Botan::bigint_comba_sqr24(arg1, arg3) __tailcall

if (arg4 u>= 0x20 && arg6 != 0)
    uint64_t x2_7
    
    if (arg5 == arg4)
        x2_7 = arg5
        
        if ((arg5.d & 1) == 0)
        label_cdb370:
            
            if (x2_7 != 0)
                uint64_t x8_9 = x2_7 << 1
                
                if (x8_9 u<= arg2 && x8_9 u<= arg7)
                    return sub_dbd71c(arg1, arg3, x2_7, arg6) __tailcall
    else if (arg5 u<= arg4)
        uint64_t x8_12 = (arg5 & 1) + arg5
        uint64_t x9_8 = arg5
        
        while ((x9_8.d & 1) != 0)
            x9_8 += 1
            
            if (x9_8 u> arg4)
                goto label_dbd450
        
        if (arg2 u>= x8_12 << 1)
            if ((x8_12 & 3) == 2)
                x2_7 = x8_12 + 2
            
            if ((x8_12 & 3) != 2 || x2_7 u> arg4 || x2_7 << 1 u> arg2)
                x2_7 = x8_12
            
            goto label_cdb370

label_dbd450:
int64_t x21
int64_t var_18_1 = x21
int64_t x20
int64_t var_10_1 = x20
int64_t x19
int64_t var_8_1 = x19

if (arg2 u< arg5 << 1)
    void** x0_17 = __cxa_allocate_exception(0x20)
    int64_t __saved_x24_1 = operator new(0x20)
    int64_t __saved_x24 = __saved_x24_1
    __builtin_strncpy(__saved_x24_1, "basecase_sqr z_size too small", 0x1e)
    *x0_17 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_17[1])
    *x0_17 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_17, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t x2_11 = arg2 << 2

if (x2_11 != 0)
    memset(arg1, 0, x2_11)

if (arg5 == 0)
    return 

int64_t x9_12 = 0
int64_t i_6 = arg5 & 0xfffffffffffffff8

if (i_6 == 0)
    uint32_t* x10_10 = arg1
    
    do
        uint64_t x11_10
        
        if (i_6 == arg5)
            x11_10 = 0
        else
            uint64_t x12_11 = zx.q(arg3[x9_12])
            x11_10 = 0
            uint32_t const* x13_10 = arg3
            uint32_t* x14_11 = x10_10
            uint64_t i_5 = arg5
            uint64_t i
            
            do
                uint64_t x16_11 = zx.q(*x13_10)
                x13_10 = &x13_10[1]
                i = i_5
                i_5 -= 1
                int64_t x16_12 = x11_10 + zx.q(*x14_11) + x16_11 * x12_11
                x11_10 = x16_12 u>> 0x20
                *x14_11 = x16_12.d
                x14_11 = &x14_11[1]
            while (i != 1)
        
        int64_t x12_10 = x9_12 + arg5
        x9_12 += 1
        x10_10 = &x10_10[1]
        arg1[x12_10] = x11_10.d
    while (x9_12 != arg5)
    
    return 

void* x10_9 = &arg1[4]
void* x13_9 = &arg1[i_6]

do
    uint64_t x15_10 = zx.q(arg3[x9_12])
    uint64_t x1_16 = 0
    void* x16_9 = &arg3[4]
    void* x17_9 = x10_9
    int64_t i_4 = i_6
    int64_t i_1
    
    do
        uint64_t x4_8 = zx.q(*(x17_9 - 0xc))
        i_1 = i_4
        i_4 -= 8
        int64_t x1_18 = x1_16 + zx.q(*(x17_9 - 0x10)) + zx.q(*(x16_9 - 0x10)) * x15_10
        *(x17_9 - 0x10) = x1_18.d
        int64_t x1_19 = x4_8 + zx.q(*(x16_9 - 0xc)) * x15_10 + (x1_18 u>> 0x20)
        *(x17_9 - 0xc) = x1_19.d
        uint64_t x4_9 = zx.q(*(x17_9 - 4))
        int64_t x1_20 = zx.q(*(x17_9 - 8)) + zx.q(*(x16_9 - 8)) * x15_10 + (x1_19 u>> 0x20)
        *(x17_9 - 8) = x1_20.d
        int64_t x1_21 = x4_9 + zx.q(*(x16_9 - 4)) * x15_10 + (x1_20 u>> 0x20)
        *(x17_9 - 4) = x1_21.d
        uint64_t x4_10 = zx.q(*(x17_9 + 4))
        int64_t x1_22 = zx.q(*x17_9) + zx.q(*x16_9) * x15_10 + (x1_21 u>> 0x20)
        *x17_9 = x1_22.d
        int64_t x1_23 = x4_10 + zx.q(*(x16_9 + 4)) * x15_10 + (x1_22 u>> 0x20)
        *(x17_9 + 4) = x1_23.d
        uint64_t x4_11 = zx.q(*(x17_9 + 0xc))
        int64_t x1_24 = zx.q(*(x17_9 + 8)) + zx.q(*(x16_9 + 8)) * x15_10 + (x1_23 u>> 0x20)
        *(x17_9 + 8) = x1_24.d
        uint64_t x2_25 = zx.q(*(x16_9 + 0xc))
        x16_9 += 0x20
        int64_t x2_27 = x4_11 + x2_25 * x15_10 + (x1_24 u>> 0x20)
        x1_16 = x2_27 u>> 0x20
        *(x17_9 + 0xc) = x2_27.d
        x17_9 += 0x20
    while (i_1 != 8)
    void* x16_10 = &arg3[i_6]
    void* x17_10 = x13_9
    uint32_t* i_3 = arg5 - i_6
    
    if (i_6 != arg5)
        uint32_t* i_2
        
        do
            uint64_t x2_28 = zx.q(*x16_10)
            x16_10 += 4
            i_2 = i_3
            i_3 -= 1
            int64_t x2_29 = x1_16 + zx.q(*x17_10) + x2_28 * x15_10
            x1_16 = x2_29 u>> 0x20
            *x17_10 = x2_29.d
            x17_10 += 4
        while (i_2 != 1)
    
    int64_t x15_9 = x9_12 + arg5
    x9_12 += 1
    x10_9 += 4
    x13_9 += 4
    arg1[x15_9] = x1_16.d
while (x9_12 != arg5)
