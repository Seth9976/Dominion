// 函数: sub_dbd71c
// 地址: 0xdbd71c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t lr
int64_t var_50 = lr
int64_t x26
int64_t var_40 = x26

if (arg3 u< 0x20 || (arg3.d & 1) != 0)
    if (arg3 - 6 u<= 0x12)
        switch (&jump_table_828748[0xd + arg3])
            case &jump_table_82875b
                return Botan::bigint_comba_sqr6(arg1, arg2) __tailcall
            case "7?------G-------O"
                return Botan::bigint_comba_sqr8(arg1, arg2) __tailcall
            case "?------G-------O"
                return Botan::bigint_comba_sqr9(arg1, arg2) __tailcall
            case "G-------O"
                return Botan::bigint_comba_sqr16(arg1, arg2) __tailcall
            case &jump_table_82875b[0x12]
                return Botan::bigint_comba_sqr24(arg1, arg2) __tailcall
    
    uint64_t x1_9 = arg3 << 1
    uint32_t* result = arg1
    int64_t x21
    int64_t var_18_1 = x21
    int64_t x20
    int64_t var_10_1 = x20
    int64_t x19
    int64_t var_8_1 = x19
    
    if (x1_9 u< arg3 << 1)
        void** x0_21 = __cxa_allocate_exception(0x20)
        int64_t __saved_x24_1
        int128_t v0_7
        __saved_x24_1, v0_7 = operator new(0x20)
        int64_t __saved_x24 = __saved_x24_1
        var_40.o = data_71cd20
        __builtin_strncpy(__saved_x24_1, "basecase_sqr z_size too small", 0x1e)
        *x0_21 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_21[1])
        *x0_21 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_21, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    uint32_t* result_1 = result
    size_t x2_15 = x1_9 << 2
    
    if (x2_15 != 0)
        result = memset(result_1, 0, x2_15)
    
    if (arg3 != 0)
        int64_t x9_16 = 0
        int64_t i_14 = arg3 & 0xfffffffffffffff8
        
        if (i_14 == 0)
            uint32_t* result_2 = result_1
            
            do
                uint64_t x11_16
                
                if (i_14 == arg3)
                    x11_16 = 0
                else
                    uint64_t x12_23 = zx.q(arg2[x9_16])
                    x11_16 = 0
                    uint32_t* x13_35 = arg2
                    uint32_t* result_3 = result_2
                    uint64_t i_12 = arg3
                    uint64_t i
                    
                    do
                        uint64_t x16_16 = zx.q(*x13_35)
                        x13_35 = &x13_35[1]
                        i = i_12
                        i_12 -= 1
                        int64_t x16_17 = x11_16 + zx.q(*result_3) + x16_16 * x12_23
                        x11_16 = x16_17 u>> 0x20
                        *result_3 = x16_17.d
                        result_3 = &result_3[1]
                    while (i != 1)
                
                int64_t x12_22 = x9_16 + arg3
                x9_16 += 1
                result_2 = &result_2[1]
                result_1[x12_22] = x11_16.d
            while (x9_16 != arg3)
        else
            void* x10_15 = &result_1[4]
            void* x13_34 = &result_1[i_14]
            
            do
                uint64_t x15_19 = zx.q(arg2[x9_16])
                uint64_t x1_19 = 0
                void* x16_14 = &arg2[4]
                void* x17_8 = x10_15
                int64_t i_7 = i_14
                int64_t i_1
                
                do
                    uint64_t x4_9 = zx.q(*(x17_8 - 0xc))
                    i_1 = i_7
                    i_7 -= 8
                    int64_t x1_21 = x1_19 + zx.q(*(x17_8 - 0x10)) + zx.q(*(x16_14 - 0x10)) * x15_19
                    *(x17_8 - 0x10) = x1_21.d
                    int64_t x1_22 = x4_9 + zx.q(*(x16_14 - 0xc)) * x15_19 + (x1_21 u>> 0x20)
                    *(x17_8 - 0xc) = x1_22.d
                    uint64_t x4_10 = zx.q(*(x17_8 - 4))
                    int64_t x1_23 =
                        zx.q(*(x17_8 - 8)) + zx.q(*(x16_14 - 8)) * x15_19 + (x1_22 u>> 0x20)
                    *(x17_8 - 8) = x1_23.d
                    int64_t x1_24 = x4_10 + zx.q(*(x16_14 - 4)) * x15_19 + (x1_23 u>> 0x20)
                    *(x17_8 - 4) = x1_24.d
                    uint64_t x4_11 = zx.q(*(x17_8 + 4))
                    int64_t x1_25 = zx.q(*x17_8) + zx.q(*x16_14) * x15_19 + (x1_24 u>> 0x20)
                    *x17_8 = x1_25.d
                    int64_t x1_26 = x4_11 + zx.q(*(x16_14 + 4)) * x15_19 + (x1_25 u>> 0x20)
                    *(x17_8 + 4) = x1_26.d
                    uint64_t x4_12 = zx.q(*(x17_8 + 0xc))
                    int64_t x1_27 =
                        zx.q(*(x17_8 + 8)) + zx.q(*(x16_14 + 8)) * x15_19 + (x1_26 u>> 0x20)
                    *(x17_8 + 8) = x1_27.d
                    uint64_t x2_29 = zx.q(*(x16_14 + 0xc))
                    x16_14 += 0x20
                    int64_t x2_31 = x4_12 + x2_29 * x15_19 + (x1_27 u>> 0x20)
                    x1_19 = x2_31 u>> 0x20
                    *(x17_8 + 0xc) = x2_31.d
                    x17_8 += 0x20
                while (i_1 != 8)
                void* x16_15 = &arg2[i_14]
                void* x17_9 = x13_34
                result = arg3 - i_14
                
                if (i_14 != arg3)
                    uint32_t* i_2
                    
                    do
                        uint64_t x2_32 = zx.q(*x16_15)
                        x16_15 += 4
                        i_2 = result
                        result -= 1
                        int64_t x2_33 = x1_19 + zx.q(*x17_9) + x2_32 * x15_19
                        x1_19 = x2_33 u>> 0x20
                        *x17_9 = x2_33.d
                        x17_9 += 4
                    while (i_2 != 1)
                
                int64_t x15_18 = x9_16 + arg3
                x9_16 += 1
                x10_15 += 4
                x13_34 += 4
                result_1[x15_18] = x1_19.d
            while (x9_16 != arg3)
    
    return result

uint64_t x21_1 = arg3 u>> 1
int64_t x27 = arg3 << 2
int64_t x2 = arg3 << 3
uint32_t* x26_1 = &arg2[x21_1]
void* x23 = &arg1[arg3]
uint32_t* x24 = &arg4[arg3]

if (x2 != 0)
    memset(arg4, 0, x2)

Botan::bigint_sub_abs(arg1, arg2, x26_1, x21_1, arg4)
sub_dbd71c(arg4, arg1, x21_1, x24)
sub_dbd71c(arg1, arg2, x21_1, x24)
sub_dbd71c(x23, x26_1, x21_1, x24)
int32_t x26_2 = 0
int64_t i_13 = arg3 & 0xfffffffffffffff8

if (i_13 != 0)
    void* x9_2 = &arg4[arg3 + 4]
    void* x10_1 = &arg1[4]
    int64_t i_10 = i_13
    int64_t i_3
    
    do
        int32_t* x12_1 = x10_1 + x27
        int32_t x13_1 = *(x10_1 - 0x10)
        int32_t x14_1 = x12_1[-4]
        int32_t x13_2 = x14_1 + x13_1
        *(x9_2 - 0x10) = x13_2 + x26_2
        int32_t x13_4 = *(x10_1 - 0xc)
        int32_t x15_1 = x12_1[-3]
        int32_t x14_3 = (x14_1 + x13_1 u< x14_1 ? 1 : 0) | (x13_2 + x26_2 u< x13_2 ? 1 : 0)
        int32_t x13_5 = x15_1 + x13_4
        *(x9_2 - 0xc) = x13_5 + x14_3
        int32_t x13_7 = *(x10_1 - 8)
        int32_t x14_4 = x12_1[-2]
        int32_t x15_3 = (x15_1 + x13_4 u< x15_1 ? 1 : 0) | (x13_5 + x14_3 u< x13_5 ? 1 : 0)
        int32_t x13_8 = x14_4 + x13_7
        *(x9_2 - 8) = x13_8 + x15_3
        int32_t x13_10 = *(x10_1 - 4)
        int32_t x15_4 = x12_1[-1]
        int32_t x14_6 = (x14_4 + x13_7 u< x14_4 ? 1 : 0) | (x13_8 + x15_3 u< x13_8 ? 1 : 0)
        int32_t x13_11 = x15_4 + x13_10
        *(x9_2 - 4) = x13_11 + x14_6
        int32_t x13_13 = *x10_1
        int32_t x14_7 = *x12_1
        int32_t x15_6 = (x15_4 + x13_10 u< x15_4 ? 1 : 0) | (x13_11 + x14_6 u< x13_11 ? 1 : 0)
        int32_t x13_14 = x14_7 + x13_13
        *x9_2 = x13_14 + x15_6
        int32_t x13_16 = *(x10_1 + 4)
        int32_t x15_7 = x12_1[1]
        int32_t x14_9 = (x14_7 + x13_13 u< x14_7 ? 1 : 0) | (x13_14 + x15_6 u< x13_14 ? 1 : 0)
        int32_t x13_17 = x15_7 + x13_16
        *(x9_2 + 4) = x13_17 + x14_9
        int32_t x13_19 = *(x10_1 + 8)
        int32_t x14_10 = x12_1[2]
        int32_t x15_9 = (x15_7 + x13_16 u< x15_7 ? 1 : 0) | (x13_17 + x14_9 u< x13_17 ? 1 : 0)
        int32_t x13_20 = x14_10 + x13_19
        *(x9_2 + 8) = x13_20 + x15_9
        int32_t x13_22 = *(x10_1 + 0xc)
        int32_t x12_2 = x12_1[3]
        int32_t x14_12 = (x14_10 + x13_19 u< x14_10 ? 1 : 0) | (x13_20 + x15_9 u< x13_20 ? 1 : 0)
        x10_1 += 0x20
        int32_t x12_3 = x12_2 + x13_22
        *(x9_2 + 0xc) = x12_3 + x14_12
        i_3 = i_10
        i_10 -= 8
        x9_2 += 0x20
        x26_2 = (x12_2 + x13_22 u< x12_2 ? 1 : 0) | (x12_3 + x14_12 u< x12_3 ? 1 : 0)
    while (i_3 != 8)

if (i_13 != arg3)
    int64_t i_8 = arg3 - i_13
    int32_t* x8 = &arg4[i_13]
    void* x10_3 = &arg1[i_13]
    int64_t i_4
    
    do
        int32_t x11_1 = *x10_3
        int32_t x12_5 = *(x10_3 + x27)
        x10_3 += 4
        int32_t x11_2 = x12_5 + x11_1
        x8[arg3] = x11_2 + x26_2
        i_4 = i_8
        i_8 -= 1
        x8 = &x8[1]
        x26_2 = (x12_5 + x11_1 u< x12_5 ? 1 : 0) | (x11_2 + x26_2 u< x11_2 ? 1 : 0)
    while (i_4 != 1)

uint32_t* x25_1 = &arg1[x21_1]
int32_t x0_6 = Botan::bigint_add2_nc(x25_1, arg3, x24, arg3)

if (x21_1 == 0)
    uint32_t* x0_19
    uint32_t* x1_18
    uint64_t x2_14
    uint32_t x3_13
    uint32_t* x4_8
    uint64_t x5_6
    x0_19, x1_18, x2_14, x3_13, x4_8, x5_6 = Botan::assertion_failure("x_size >= y_size", 
        "Expected sizes", "bigint_add2_nc", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xaed)
    return Botan::bigint_monty_redc(x0_19, x1_18, x2_14, x3_13, x4_8, x5_6) __tailcall

uint64_t x9_3 = x21_1 << 2
int32_t x10_4 = *(x23 + x9_3)
int32_t x12_7 = x26_2 + x10_4
int32_t x10_5 = x26_2 + x10_4 u< x26_2 ? 1 : 0
int64_t i_11 = x21_1 - 1
*(x23 + x9_3) = x12_7

if (x21_1 != 1)
    void* x12_11 = &arg1[arg3 + x21_1 + 1]
    int64_t i_5
    
    do
        int32_t x13_26 = *x12_11
        int32_t x13_27 = x13_26 + x10_5
        x10_5 = x13_26 + x10_5 u< x13_26 ? 1 : 0
        i_5 = i_11
        i_11 -= 1
        *x12_11 = x13_27
        x12_11 += 4
    while (i_5 != 1)
    int32_t x11_6 = *(x23 + x9_3)
    int32_t x12_12 = x0_6 + x10_5 + x11_6
    int64_t i_9 = x21_1 - 1
    *(x23 + x9_3) = x12_12
    
    if (x21_1 != 1)
        int32_t x11_7 = x12_12 u< x11_6 ? 1 : 0
        void* x9_9 = &arg1[arg3 + x21_1 + 1]
        int64_t i_6
        
        do
            int32_t x12_13 = *x9_9
            int32_t x11_8 = x11_7 & 1
            x11_7 = x12_13 + x11_8 u< x12_13 ? 1 : 0
            i_6 = i_9
            i_9 -= 1
            *x9_9 = x12_13 + x11_8
            x9_9 += 4
        while (i_6 != 1)
else
    *(x23 + (x21_1 << 2)) = x0_6 + x10_5 + x12_7

return Botan::bigint_sub2(x25_1, (arg3 << 1) - x21_1, arg4, arg3) __tailcall
