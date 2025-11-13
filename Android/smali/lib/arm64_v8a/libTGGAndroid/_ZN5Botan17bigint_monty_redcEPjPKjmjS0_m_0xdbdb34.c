// 函数: _ZN5Botan17bigint_monty_redcEPjPKjmjS0_m
// 地址: 0xdbdb34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = arg3 << 1

if (x9 + 2 u> arg6)
    uint32_t* x0_8
    uint32_t* x1_7
    uint32_t x2_14
    uint32_t* x3_14
    x0_8, x1_7, x2_14, x3_14 = Botan::throw_invalid_argument("workspace too small", 
        "bigint_monty_redc", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    return Botan::bigint_monty_redc_4(x0_8, x1_7, x2_14, x3_14) __tailcall

switch (ror.q(arg3 - 4, 1))
    case 0
        return Botan::bigint_monty_redc_4(arg1, arg2, arg4, arg5) __tailcall
    case 1
        return Botan::bigint_monty_redc_6(arg1, arg2, arg4, arg5) __tailcall
    case 2
        return Botan::bigint_monty_redc_8(arg1, arg2, arg4, arg5) __tailcall
    case 6
        return Botan::bigint_monty_redc_16(arg1, arg2, arg4, arg5) __tailcall
    case 0xa
        return Botan::bigint_monty_redc_24(arg1, arg2, arg4, arg5) __tailcall
    case 0xe
        return Botan::bigint_monty_redc_32(arg1, arg2, arg4, arg5) __tailcall

uint64_t x10_5 = zx.q(*arg1)
uint64_t x11_3 = zx.q(x10_5.d * arg4)
*arg5 = x11_3.d
uint64_t x12_6 = (x10_5 + zx.q(*arg2) * x11_3) u>> 0x20
int32_t x10_7 = 0

if (arg3 != 1)
    int64_t i_14 = 1
    
    do
        int32_t x14_4 = 0
        uint32_t* x15_4 = arg5
        int64_t i_11 = i_14
        int64_t i
        
        do
            uint64_t x17_4 = zx.q(*x15_4)
            x15_4 = &x15_4[1]
            x12_6 = zx.q(arg2[i_11]) * x17_4 + zx.q(x12_6.d)
            uint32_t x17_6 = (x12_6 u>> 0x20).d
            int32_t temp0_1 = x10_7
            x10_7 += x17_6
            
            if (temp0_1 + x17_6 u< temp0_1)
                x14_4 += 1
            
            i = i_11
            i_11 -= 1
        while (i != 1)
        int32_t x16_4 = arg1[i_14]
        i_14 += 1
        uint64_t x12_7 = zx.q(x16_4 + x12_6.d)
        uint64_t x16_5 = zx.q(x12_7.d * arg4)
        arg5[i_14] = x16_5.d
        int32_t x17_7 = x16_4 + x12_6.d u< x16_4 ? 1 : 0
        int32_t x10_8 = x10_7 + x17_7
        int32_t x14_5
        
        if (x10_7 + x17_7 u< x10_7)
            x14_5 = x14_4 + 1
        else
            x14_5 = x14_4
        
        uint32_t x12_9 = ((x12_7 + zx.q(*arg2) * x16_5) u>> 0x20).d
        x12_6 = zx.q(x10_8 + x12_9)
        
        if (x10_8 + x12_9 u< x10_8)
            x10_7 = x14_5 + 1
        else
            x10_7 = x14_5
    while (i_14 != arg3)

int32_t x13_9

if (arg3 == 0)
    x13_9 = 1
else
    int64_t x14_6 = 0
    void* x13_5 = &arg5[1]
    bool cond:1_1
    
    do
        int32_t x16_6
        
        if (x14_6 + 1 == arg3)
            x16_6 = 0
        else
            x16_6 = 0
            void* x17_11 = x13_5
            int64_t x3_6 = arg3 - 1
            
            do
                uint64_t x5_4 = zx.q(*x17_11)
                x17_11 += 4
                uint64_t x6_4 = zx.q(arg2[x3_6])
                x3_6 -= 1
                x12_6 = x6_4 * x5_4 + zx.q(x12_6.d)
                uint32_t x5_6 = (x12_6 u>> 0x20).d
                int32_t temp2_1 = x10_7
                x10_7 += x5_6
                
                if (temp2_1 + x5_6 u< temp2_1)
                    x16_6 += 1
            while (x14_6 != x3_6)
        
        int32_t x17_9 = arg1[x14_6 + arg3]
        x13_5 += 4
        int32_t x17_10 = x17_9 + x12_6.d u< x17_9 ? 1 : 0
        arg5[x14_6] = x17_9 + x12_6.d
        x12_6 = zx.q(x10_7 + x17_10)
        
        if (x10_7 + x17_10 u< x10_7)
            x10_7 = x16_6 + 1
        else
            x10_7 = x16_6
        
        cond:1_1 = x14_6 + 1 == arg3
        x14_6 += 1
    while (not(cond:1_1))
    x13_9 = 0

int64_t x11_8 = x9 | 1
int32_t x14_10 = arg1[x11_8]
int32_t x14_11 = x14_10 + x12_6.d
int32_t x12_14

if (x14_10 + x12_6.d u< x14_10)
    x12_14 = x10_7 + 1
else
    x12_14 = x10_7

void* x10_12 = &arg5[arg3 + 1]
arg5[arg3] = x14_11
*x10_12 = x12_14
int32_t x12_15 = 0

if ((x13_9 & 1) == 0)
    uint32_t* x14_12 = arg5
    uint64_t i_10 = arg3
    uint64_t i_1
    
    do
        uint32_t x16_10 = *x14_12
        uint32_t const x17_15 = *arg2
        arg2 = &arg2[1]
        uint32_t x16_11 = x16_10 - x17_15
        *(x14_12 + (arg3 << 2) + 4) = x16_11 - x12_15
        i_1 = i_10
        i_10 -= 1
        x12_15 = (x16_10 u< x17_15 ? 1 : 0) | (x16_11 u< x12_15 ? 1 : 0)
        x14_12 = &x14_12[1]
    while (i_1 != 1)
    x14_11 = arg5[arg3]

arg5[x11_8] = x14_11 - x12_15

if (arg3 != -1)
    int128_t v0
    int128_t v1
    
    if (x14_11 u>= x12_15)
        int64_t i_13
        
        if (arg3 + 1 u< 8 || (&arg5[arg3 * 2 + 2] u> arg1 && arg5 u< arg1))
            i_13 = 0
        label_dbdde0:
            void* x9_9 = &arg1[i_13]
            int64_t i_7 = arg3 - i_13 + 1
            void* x11_13 = &arg5[i_13 + arg3 + 1]
            int64_t i_2
            
            do
                int32_t x12_20 = *x11_13
                x11_13 += 4
                i_2 = i_7
                i_7 -= 1
                *x9_9 = x12_20
                x9_9 += 4
            while (i_2 != 1)
        else
            i_13 = (arg3 + 1) & 0xfffffffffffffff8
            void* x11_17 = &arg5[arg3 + 5]
            void* x12_23 = &arg1[4]
            int64_t i_9 = i_13
            int64_t i_3
            
            do
                v0 = *(x11_17 - 0x10)
                v1 = *x11_17
                x11_17 += 0x20
                i_3 = i_9
                i_9 -= 8
                *(x12_23 - 0x10) = v0
                *x12_23 = v1
                x12_23 += 0x20
            while (i_3 != 8)
            
            if (arg3 + 1 != i_13)
                goto label_dbdde0
    else
        int64_t i_12
        
        if (arg3 + 1 u< 8 || (x10_12 u> arg1 && &arg1[arg3 + 1] u> arg5))
            i_12 = 0
        label_dbdd90:
            int64_t i_6 = arg3 - i_12 + 1
            void* x10_14 = &arg1[i_12]
            void* x11_10 = &arg5[i_12]
            int64_t i_4
            
            do
                int32_t x12_18 = *x11_10
                x11_10 += 4
                i_4 = i_6
                i_6 -= 1
                *x10_14 = x12_18
                x10_14 += 4
            while (i_4 != 1)
        else
            i_12 = (arg3 + 1) & 0xfffffffffffffff8
            void* x11_15 = &arg5[4]
            void* x12_22 = &arg1[4]
            int64_t i_8 = i_12
            int64_t i_5
            
            do
                v0 = *(x11_15 - 0x10)
                v1 = *x11_15
                x11_15 += 0x20
                i_5 = i_8
                i_8 -= 8
                *(x12_22 - 0x10) = v0
                *x12_22 = v1
                x12_22 += 0x20
            while (i_5 != 8)
            
            if (arg3 + 1 != i_12)
                goto label_dbdd90

int64_t x8_8 = (x9 + 2 - arg3) << 2

if (x8_8 == 8)
    return 

return memset(&arg1[arg3], 0, x8_8 - 8) __tailcall
