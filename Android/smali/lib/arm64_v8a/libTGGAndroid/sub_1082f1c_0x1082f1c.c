// 函数: sub_1082f1c
// 地址: 0x1082f1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
void* x21 = *(arg1 + 0x30)
int32_t* result = calloc(1, 0x460)
int32_t x0_2 = oggpack_read(arg2, 5)
*result = x0_2
int32_t x28_1

if (x0_2 s>= 1)
    int64_t i = 0
    x28_1 = -1
    
    do
        int32_t x0_4 = oggpack_read(arg2, 4)
        result[1 + i] = x0_4
        
        if ((x0_4 & 0x80000000) != 0)
            goto label_1083284
        
        i += 1
        
        if (x28_1 s< x0_4)
            x28_1 = x0_4
    while (i s< sx.q(*result))

if (x0_2 s>= 1 && (x28_1 & 0x80000000) == 0)
    int64_t x24_2 = 0
    void* x27_1 = &result[0x50]
    
    while (true)
        result[0x20 + x24_2] = oggpack_read(arg2, 3) + 1
        int32_t x0_8 = oggpack_read(arg2, 2)
        result[0x30 + x24_2] = x0_8
        
        if ((x0_8 & 0x80000000) != 0)
            break
        
        int32_t x0_10
        
        if (x0_8 == 0)
            x0_10 = result[0x40 + x24_2]
            
            if ((x0_10 & 0x80000000) != 0)
                break
        else
            x0_10 = oggpack_read(arg2, 8)
            result[0x40 + x24_2] = x0_10
            
            if ((x0_10 & 0x80000000) != 0)
                break
        
        if (x0_10 s>= *(x21 + 0x20))
            break
        
        if (result[0x30 + x24_2] != 0x1f)
            int64_t i_1 = 0
            
            do
                int32_t x8_10 = oggpack_read(arg2, 8) - 1
                *(x27_1 + (i_1 << 2)) = x8_10
                
                if (x8_10 s< 0xffffffff)
                    goto label_1083284
                
                if (x8_10 s>= *(x21 + 0x20))
                    goto label_1083284
                
                i_1 += 1
            while (i_1 s< sx.q(1 << result[0x30 + x24_2]))
        
        x27_1 += 0x20
        bool cond:7_1 = x24_2 s< sx.q(x28_1)
        x24_2 += 1
        
        if (not(cond:7_1))
            goto label_10830c0
    
    goto label_1083284

label_10830c0:
result[0xd0] = oggpack_read(arg2, 2) + 1
int32_t x0_16
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4_1
x0_16, v0_1, v1_1, v2_1, v3_1, v4_1 = oggpack_read(arg2, 4)

if ((x0_16 & 0x80000000) != 0)
label_1083284:
    free(result)
    result = nullptr
else
    int32_t x8_15 = *result
    void* x12_1
    int64_t x23_2
    int32_t x25_2
    
    if (x8_15 s<= 0)
        x23_2 = 0
        x12_1 = &result[0xd1]
        x25_2 = 1 << x0_16
    else
        int64_t i_2 = 0
        int64_t x27_2 = 0
        x23_2 = 0
        x25_2 = 1 << x0_16
        
        do
            x23_2 = sx.q(result[0x20 + sx.q(result[1 + i_2])]) + sx.q(x23_2.d)
            
            if (x23_2.d s> 0x3f)
                goto label_1083284
            
            if (x27_2.d s< x23_2.d)
                x27_2 = sx.q(x27_2.d)
                
                do
                    int32_t x0_18
                    x0_18, v0_1, v1_1, v2_1, v3_1, v4_1 = oggpack_read(arg2, zx.q(x0_16))
                    result[x27_2 + 0xd3] = x0_18
                    
                    if ((x0_18 & 0x80000000) != 0)
                        goto label_1083284
                    
                    if (x25_2 s<= x0_18)
                        goto label_1083284
                    
                    x27_2 += 1
                while (x27_2 s< x23_2)
                
                x8_15 = *result
            
            i_2 += 1
        while (i_2 s< sx.q(x8_15))
        
        x12_1 = &result[0xd1]
    
    int64_t n = sx.q(x23_2.d + 2)
    *x12_1 = 0
    result[0xd2] = x25_2
    int64_t b[0x2]
    
    if (x23_2.d s< 0xffffffff)
        qsort(&b, n, 8, sub_1083b74)
    else
        int64_t n_1
        
        n_1 = n s> 1 ? n : 1
        
        int64_t i_5 = 0
        
        if (n_1 u> 3)
            v1_1 = data_71a9c0
            i_5 = n_1 & 0x7ffffffffffffffc
            v2_1.q = 8
            v2_1:8.q = 8
            v0_1.q = x12_1
            v0_1:8.q = x12_1
            void var_268
            void* x10_1 = &var_268
            v3_1.q = 4
            v3_1:8.q = 4
            int64_t i_4 = i_5
            int64_t i_3
            
            do
                v4_1.q = v1_1.q << 2
                v4_1:8.q = v1_1:8.q << 2
                v4_1 += v0_1
                v1_1 += v3_1
                i_3 = i_4
                i_4 -= 4
                *(x10_1 - 0x10) = v4_1
                *x10_1 = v4_1 + v2_1
                x10_1 += 0x20
            while (i_3 != 4)
        
        if (n_1 u<= 3 || n_1 != i_5)
            void* x9_5 = x12_1 + (i_5 << 2)
            
            do
                b[i_5] = x9_5
                i_5 += 1
                x9_5 += 4
            while (i_5 s< n)
        
        qsort(&b, n, 8, sub_1083b74)
        
        if ((x23_2.d & 0x80000000) == 0)
            int32_t x9_6 = *b[0]
            int64_t x8_19 = 1
            
            while (true)
                int32_t x10_3 = *b[x8_19]
                
                if (x9_6 == x10_3)
                    break
                
                x8_19 += 1
                x9_6 = x10_3
                
                if (x8_19 s>= n)
                    goto label_1083298
            
            if (result != 0)
                goto label_1083284

label_1083298:

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
