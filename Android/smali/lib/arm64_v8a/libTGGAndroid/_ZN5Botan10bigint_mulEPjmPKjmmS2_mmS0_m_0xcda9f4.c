// 函数: _ZN5Botan10bigint_mulEPjmPKjmmS2_mmS0_m
// 地址: 0xcda9f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x2 = arg2 << 2

if (x2 != 0)
    memset(arg1, 0, x2)

if (arg5 == 1)
    uint64_t x8_1 = zx.q(*arg3)
    int64_t i_8 = arg8 & 0xfffffffffffffff8
    uint32_t x10_1
    
    if (i_8 == 0)
        x10_1 = 0
        
        if (i_8 != arg8)
        label_cdac28:
            int64_t i_4 = arg8 - i_8
            void* x9_2 = &arg1[i_8]
            void* x12_3 = &arg6[i_8]
            int64_t i
            
            do
                uint64_t x13_18 = zx.q(*x12_3)
                x12_3 += 4
                i = i_4
                i_4 -= 1
                int64_t x13_20 = x13_18 * x8_1 + zx.q(x10_1)
                x10_1 = (x13_20 u>> 0x20).d
                *x9_2 = x13_20.d
                x9_2 += 4
            while (i != 1)
    else
        uint64_t x13_1 = 0
        void* x10 = &arg1[4]
        void* x11_1 = &arg6[4]
        int64_t i_6 = i_8
        int64_t i_1
        
        do
            i_1 = i_6
            i_6 -= 8
            int64_t x13_2 = x13_1 + zx.q(*(x11_1 - 0x10)) * x8_1
            *(x10 - 0x10) = x13_2.d
            int64_t x13_3 = zx.q(*(x11_1 - 0xc)) * x8_1 + (x13_2 u>> 0x20)
            *(x10 - 0xc) = x13_3.d
            int64_t x13_4 = zx.q(*(x11_1 - 8)) * x8_1 + (x13_3 u>> 0x20)
            *(x10 - 8) = x13_4.d
            int64_t x13_5 = zx.q(*(x11_1 - 4)) * x8_1 + (x13_4 u>> 0x20)
            *(x10 - 4) = x13_5.d
            int64_t x13_6 = zx.q(*x11_1) * x8_1 + (x13_5 u>> 0x20)
            *x10 = x13_6.d
            int64_t x13_7 = zx.q(*(x11_1 + 4)) * x8_1 + (x13_6 u>> 0x20)
            *(x10 + 4) = x13_7.d
            int64_t x13_8 = zx.q(*(x11_1 + 8)) * x8_1 + (x13_7 u>> 0x20)
            *(x10 + 8) = x13_8.d
            uint64_t x14_14 = zx.q(*(x11_1 + 0xc))
            x11_1 += 0x20
            int64_t x14_16 = x14_14 * x8_1 + (x13_8 u>> 0x20)
            x13_1 = x14_16 u>> 0x20
            *(x10 + 0xc) = x14_16.d
            x10 += 0x20
        while (i_1 != 8)
        x10_1 = x13_1.d
        
        if (i_8 != arg8)
            goto label_cdac28
    
    arg1[arg8] = x10_1
    return 

if (arg8 != 1)
    if (arg2 u>= 8 && arg7 u>= 4 && arg4 u>= 4 && arg5 u<= 4 && arg8 u<= 4)
        return Botan::bigint_comba_mul4(arg1, arg3, arg6) __tailcall
    
    if (arg2 u>= 0xc && arg7 u>= 6 && arg4 u>= 6 && arg5 u<= 6 && arg8 u<= 6)
        return Botan::bigint_comba_mul6(arg1, arg3, arg6) __tailcall
    
    if (arg2 u>= 0x10 && arg7 u>= 8 && arg4 u>= 8 && arg5 u<= 8 && arg8 u<= 8)
        return Botan::bigint_comba_mul8(arg1, arg3, arg6) __tailcall
    
    if (arg2 u>= 0x12 && arg7 u>= 9 && arg4 u>= 9 && arg5 u<= 9 && arg8 u<= 9)
        return Botan::bigint_comba_mul9(arg1, arg3, arg6) __tailcall
    
    if (arg2 u>= 0x20 && arg7 u>= 0x10 && arg4 u>= 0x10 && arg5 u<= 0x10 && arg8 u<= 0x10)
        return Botan::bigint_comba_mul16(arg1, arg3, arg6) __tailcall
    
    if (arg2 u>= 0x30 && arg7 u>= 0x18 && arg4 u>= 0x18 && arg5 u<= 0x18 && arg8 u<= 0x18)
        return Botan::bigint_comba_mul24(arg1, arg3, arg6) __tailcall
    
    if (arg5 u>= 0x20 && arg8 u>= 0x20 && arg9 != 0 && arg8 u<= arg7 && arg5 u<= arg4
            && arg5 u<= arg7 && arg8 u<= arg4 && (arg4 != arg5 || (arg4.d & 1) == 0)
            && (arg7 != arg8 || (arg7.d & 1) == 0))
        uint64_t x3_6
        
        x3_6 = arg5 u> arg8 ? arg5 : arg8
        
        uint64_t x9_9
        
        x9_9 = arg4 u< arg7 ? arg4 : arg7
        
        if (x3_6 != x9_9)
            if (x3_6 u<= x9_9)
                uint64_t x8_12 = x3_6 << 1
                
                while (true)
                    if ((x3_6.d & 1) == 0)
                        if (x8_12 u> arg2)
                            goto label_cdaf20
                        
                        if (x3_6 u>= arg8 && x3_6 u>= arg5)
                            uint64_t x9_13
                            
                            if ((x3_6 & 3) == 2)
                                x9_13 = x3_6 + 2
                            
                            if ((x3_6 & 3) != 2 || x9_13 u> arg4 || x9_13 u> arg7
                                    || x8_12 + 4 u> arg2)
                                x9_13 = x3_6
                            
                            x3_6 = x9_13
                            
                            if (x9_13 != 0)
                                break
                            
                            goto label_cdaf20
                    
                    x3_6 += 1
                    x8_12 += 2
                    
                    if (x3_6 u> x9_9)
                        goto label_cdaf20
                
                goto label_cdaeac
        else if ((x3_6.d & 1) == 0)
        label_cdaeac:
            uint64_t x8_9 = x3_6 << 1
            
            if (x8_9 u<= arg2 && x8_9 u<= arg10)
                return sub_dbcf6c(arg1, arg3, arg6, x3_6, arg9) __tailcall
    
label_cdaf20:
    return sub_dbcc88(arg1, arg2, arg3, arg5, arg6, arg8) __tailcall

uint64_t x8_2 = zx.q(*arg6)
int64_t i_9 = arg5 & 0xfffffffffffffff8
uint32_t x10_3

if (i_9 == 0)
    x10_3 = 0
    
    if (i_9 != arg5)
    label_cdacb8:
        int64_t i_5 = arg5 - i_9
        void* x9_4 = &arg1[i_9]
        void* x12_6 = &arg3[i_9]
        int64_t i_2
        
        do
            uint64_t x13_22 = zx.q(*x12_6)
            x12_6 += 4
            i_2 = i_5
            i_5 -= 1
            int64_t x13_24 = x13_22 * x8_2 + zx.q(x10_3)
            x10_3 = (x13_24 u>> 0x20).d
            *x9_4 = x13_24.d
            x9_4 += 4
        while (i_2 != 1)
else
    uint64_t x13_9 = 0
    void* x10_2 = &arg1[4]
    void* x11_2 = &arg3[4]
    int64_t i_7 = i_9
    int64_t i_3
    
    do
        i_3 = i_7
        i_7 -= 8
        int64_t x13_10 = x13_9 + zx.q(*(x11_2 - 0x10)) * x8_2
        *(x10_2 - 0x10) = x13_10.d
        int64_t x13_11 = zx.q(*(x11_2 - 0xc)) * x8_2 + (x13_10 u>> 0x20)
        *(x10_2 - 0xc) = x13_11.d
        int64_t x13_12 = zx.q(*(x11_2 - 8)) * x8_2 + (x13_11 u>> 0x20)
        *(x10_2 - 8) = x13_12.d
        int64_t x13_13 = zx.q(*(x11_2 - 4)) * x8_2 + (x13_12 u>> 0x20)
        *(x10_2 - 4) = x13_13.d
        int64_t x13_14 = zx.q(*x11_2) * x8_2 + (x13_13 u>> 0x20)
        *x10_2 = x13_14.d
        int64_t x13_15 = zx.q(*(x11_2 + 4)) * x8_2 + (x13_14 u>> 0x20)
        *(x10_2 + 4) = x13_15.d
        int64_t x13_16 = zx.q(*(x11_2 + 8)) * x8_2 + (x13_15 u>> 0x20)
        *(x10_2 + 8) = x13_16.d
        uint64_t x14_30 = zx.q(*(x11_2 + 0xc))
        x11_2 += 0x20
        int64_t x14_32 = x14_30 * x8_2 + (x13_16 u>> 0x20)
        x13_9 = x14_32 u>> 0x20
        *(x10_2 + 0xc) = x14_32.d
        x10_2 += 0x20
    while (i_3 != 8)
    x10_3 = x13_9.d
    
    if (i_9 != arg5)
        goto label_cdacb8

arg1[arg5] = x10_3
