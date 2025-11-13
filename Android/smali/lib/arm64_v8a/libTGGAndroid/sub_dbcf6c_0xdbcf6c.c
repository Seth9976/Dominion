// 函数: sub_dbcf6c
// 地址: 0xdbcf6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 u< 0x20 || (arg4.d & 1) != 0)
    if (arg4 - 6 u<= 0x12)
        switch (arg4)
            case 6
                return Botan::bigint_comba_mul6(arg1, arg2, arg3) __tailcall
            case 8
                return Botan::bigint_comba_mul8(arg1, arg2, arg3) __tailcall
            case 9
                return Botan::bigint_comba_mul9(arg1, arg2, arg3) __tailcall
            case 0x10
                return Botan::bigint_comba_mul16(arg1, arg2, arg3) __tailcall
            case 0x18
                return Botan::bigint_comba_mul24(arg1, arg2, arg3) __tailcall
    
    return sub_dbcc88(arg1, arg4 << 1, arg2, arg4, arg3, arg4) __tailcall

uint64_t x20 = arg4 u>> 1
int64_t x21 = arg4 << 2
uint64_t x8 = x20 << 2
int64_t x2 = arg4 << 3
void* x25 = &arg1[arg4]
uint32_t* x27 = &arg2[x20]
void* x26 = &arg3[x20]
uint32_t* fp = &arg5[arg4]

if (x2 != 0)
    memset(arg5, 0, x2)

int32_t x0_2 = Botan::bigint_sub_abs(arg1, arg2, x27, x20, arg5)
int32_t x0_4 = Botan::bigint_sub_abs(x25, x26, arg3, x20, arg5)
sub_dbcf6c(arg5, arg1, x25, x20, fp)
sub_dbcf6c(arg1, arg2, arg3, x20, fp)
sub_dbcf6c(x25, x27, x26, x20, fp)
int32_t x27_1 = 0
int64_t i_14 = arg4 & 0xfffffffffffffff8

if (i_14 != 0)
    void* x9_2 = &arg5[arg4 + 4]
    void* x10_1 = &arg1[4]
    int64_t i_11 = i_14
    int64_t i
    
    do
        int32_t* x12_1 = x10_1 + x21
        int32_t x13_1 = *(x10_1 - 0x10)
        int32_t x14_1 = x12_1[-4]
        int32_t x13_2 = x14_1 + x13_1
        *(x9_2 - 0x10) = x13_2 + x27_1
        int32_t x13_4 = *(x10_1 - 0xc)
        int32_t x15_1 = x12_1[-3]
        int32_t x14_3 = (x14_1 + x13_1 u< x14_1 ? 1 : 0) | (x13_2 + x27_1 u< x13_2 ? 1 : 0)
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
        i = i_11
        i_11 -= 8
        x9_2 += 0x20
        x27_1 = (x12_2 + x13_22 u< x12_2 ? 1 : 0) | (x12_3 + x14_12 u< x12_3 ? 1 : 0)
    while (i != 8)

uint32_t* x19_1

if (i_14 != arg4)
    int64_t i_9 = arg4 - i_14
    x19_1 = arg5
    int32_t* x8_3 = &arg5[i_14]
    void* x10_5 = &arg1[i_14]
    int64_t i_1
    
    do
        int32_t x11_3 = *x10_5
        int32_t x12_6 = *(x10_5 + x21)
        x10_5 += 4
        int32_t x11_4 = x12_6 + x11_3
        x8_3[arg4] = x11_4 + x27_1
        i_1 = i_9
        i_9 -= 1
        x8_3 = &x8_3[1]
        x27_1 = (x12_6 + x11_3 u< x12_6 ? 1 : 0) | (x11_4 + x27_1 u< x11_4 ? 1 : 0)
    while (i_1 != 1)
else
    x19_1 = arg5

void* x28_1 = &arg1[x20]
int32_t x0_11 = Botan::bigint_add2_nc(x28_1, arg4, fp, arg4)

if (x20 != 0)
    int32_t x8_4 = *(x25 + x8)
    int32_t x10_7 = x27_1 + x8_4
    int32_t x8_5 = x27_1 + x8_4 u< x27_1 ? 1 : 0
    int64_t i_10 = x20 - 1
    *(x25 + x8) = x10_7
    
    if (x20 != 1)
        void* x10_10 = &arg1[arg4 + x20 + 1]
        int64_t i_2
        
        do
            int32_t x11_6 = *x10_10
            int32_t x11_7 = x11_6 + x8_5
            x8_5 = x11_6 + x8_5 u< x11_6 ? 1 : 0
            i_2 = i_10
            i_10 -= 1
            *x10_10 = x11_7
            x10_10 += 4
        while (i_2 != 1)
        int32_t x9_5 = *(x25 + x8)
        int32_t x10_11 = x0_11 + x8_5 + x9_5
        int64_t i_8 = x20 - 1
        *(x25 + x8) = x10_11
        
        if (x20 != 1)
            int32_t x10_12 = x10_11 u< x9_5 ? 1 : 0
            void* x9_8 = &arg1[arg4 + x20 + 1]
            int64_t i_3
            
            do
                int32_t x11_8 = *x9_8
                int32_t x10_13 = x10_12 & 1
                x10_12 = x11_8 + x10_13 u< x11_8 ? 1 : 0
                i_3 = i_8
                i_8 -= 1
                *x9_8 = x11_8 + x10_13
                x9_8 += 4
            while (i_3 != 1)
            
            if (x8 != 0)
                memset(fp, 0, x8)
        else
            memset(fp, 0, 4)
    else
        *(x25 + (x20 << 2)) = x0_11 + x8_5 + x10_7
        memset(fp, 0, 4)
    
    return Botan::bigint_cnd_add_or_sub(zx.q(x0_4) ^ zx.q(not.d(x0_2)), x28_1, x19_1, 
        (arg4 << 1) - x20) __tailcall

void* result
int64_t x1_20
int32_t* x2_22
int64_t i_13
int64_t lr_7
result, x1_20, x2_22, i_13, lr_7 = Botan::assertion_failure("x_size >= y_size", "Expected sizes", 
    "bigint_add2_nc", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xaed)
int64_t var_a0 = lr_7
int64_t var_98 = x21
uint64_t var_90 = x20
uint32_t* var_88 = x19_1

if (x1_20 u< i_13 << 1)
    void** x0_26 = __cxa_allocate_exception(0x20)
    int64_t x0_27
    int128_t v0_7
    x0_27, v0_7 = operator new(0x20)
    int64_t var_b0 = x0_27
    int128_t var_c0 = data_71cd20
    __builtin_strncpy(x0_27, "basecase_sqr z_size too small", 0x1e)
    *x0_26 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_26[1])
    *x0_26 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_26, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

void* result_1 = result
int64_t x2_23 = x1_20 << 2

if (x2_23 != 0)
    result = memset(result_1, 0, x2_23)

if (i_13 != 0)
    int64_t x9_15 = 0
    int64_t i_15 = i_13 & 0xfffffffffffffff8
    
    if (i_15 == 0)
        void* result_2 = result_1
        
        do
            uint64_t x11_17
            
            if (i_15 == i_13)
                x11_17 = 0
            else
                uint64_t x12_16 = zx.q(x2_22[x9_15])
                x11_17 = 0
                int32_t* x13_33 = x2_22
                void* result_3 = result_2
                int64_t i_12 = i_13
                int64_t i_4
                
                do
                    uint64_t x16_16 = zx.q(*x13_33)
                    x13_33 = &x13_33[1]
                    i_4 = i_12
                    i_12 -= 1
                    int64_t x16_17 = x11_17 + zx.q(*result_3) + x16_16 * x12_16
                    x11_17 = x16_17 u>> 0x20
                    *result_3 = x16_17.d
                    result_3 += 4
                while (i_4 != 1)
            
            int64_t x12_15 = x9_15 + i_13
            x9_15 += 1
            result_2 += 4
            *(result_1 + (x12_15 << 2)) = x11_17.d
        while (x9_15 != i_13)
    else
        void* x10_20 = result_1 + 0x10
        int32_t* x13_32 = result_1 + (i_15 << 2)
        
        do
            uint64_t x15_19 = zx.q(x2_22[x9_15])
            uint64_t x1_21 = 0
            void* x16_14 = &x2_22[4]
            void* x17_8 = x10_20
            int64_t i_7 = i_15
            int64_t i_5
            
            do
                uint64_t x4_13 = zx.q(*(x17_8 - 0xc))
                i_5 = i_7
                i_7 -= 8
                int64_t x1_23 = x1_21 + zx.q(*(x17_8 - 0x10)) + zx.q(*(x16_14 - 0x10)) * x15_19
                *(x17_8 - 0x10) = x1_23.d
                int64_t x1_24 = x4_13 + zx.q(*(x16_14 - 0xc)) * x15_19 + (x1_23 u>> 0x20)
                *(x17_8 - 0xc) = x1_24.d
                uint64_t x4_14 = zx.q(*(x17_8 - 4))
                int64_t x1_25 = zx.q(*(x17_8 - 8)) + zx.q(*(x16_14 - 8)) * x15_19 + (x1_24 u>> 0x20)
                *(x17_8 - 8) = x1_25.d
                int64_t x1_26 = x4_14 + zx.q(*(x16_14 - 4)) * x15_19 + (x1_25 u>> 0x20)
                *(x17_8 - 4) = x1_26.d
                uint64_t x4_15 = zx.q(*(x17_8 + 4))
                int64_t x1_27 = zx.q(*x17_8) + zx.q(*x16_14) * x15_19 + (x1_26 u>> 0x20)
                *x17_8 = x1_27.d
                int64_t x1_28 = x4_15 + zx.q(*(x16_14 + 4)) * x15_19 + (x1_27 u>> 0x20)
                *(x17_8 + 4) = x1_28.d
                uint64_t x4_16 = zx.q(*(x17_8 + 0xc))
                int64_t x1_29 = zx.q(*(x17_8 + 8)) + zx.q(*(x16_14 + 8)) * x15_19 + (x1_28 u>> 0x20)
                *(x17_8 + 8) = x1_29.d
                uint64_t x2_37 = zx.q(*(x16_14 + 0xc))
                x16_14 += 0x20
                int64_t x2_39 = x4_16 + x2_37 * x15_19 + (x1_29 u>> 0x20)
                x1_21 = x2_39 u>> 0x20
                *(x17_8 + 0xc) = x2_39.d
                x17_8 += 0x20
            while (i_5 != 8)
            int32_t* x16_15 = &x2_22[i_15]
            int32_t* x17_9 = x13_32
            result = i_13 - i_15
            
            if (i_15 != i_13)
                void* i_6
                
                do
                    uint64_t x2_40 = zx.q(*x16_15)
                    x16_15 = &x16_15[1]
                    i_6 = result
                    result -= 1
                    int64_t x2_41 = x1_21 + zx.q(*x17_9) + x2_40 * x15_19
                    x1_21 = x2_41 u>> 0x20
                    *x17_9 = x2_41.d
                    x17_9 = &x17_9[1]
                while (i_6 != 1)
            
            int64_t x15_18 = x9_15 + i_13
            x9_15 += 1
            x10_20 += 4
            x13_32 = &x13_32[1]
            *(result_1 + (x15_18 << 2)) = x1_21.d
        while (x9_15 != i_13)

return result
