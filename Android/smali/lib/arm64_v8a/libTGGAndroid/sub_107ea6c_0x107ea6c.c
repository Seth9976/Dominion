// 函数: sub_107ea6c
// 地址: 0x107ea6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = _ReadMSR(tpidr_el0)
int64_t x8_2 = *(x8_1 + 0x28)
int64_t var_78 = arg5
int32_t var_7c = arg6.d
int64_t var_88 = -1
int32_t x20 = arg1[0x44].d
int64_t result_6 = arg3
int32_t x21 = (arg7 == 0 ? 1 : 0) | (arg8 == 0 ? 1 : 0)
int64_t result
uint64_t x25_1

if ((x21 & 1) != 0)
label_107eb1c:
    int64_t result_2 = arg4
    int64_t result_1 = 0
    int32_t var_b4 = 0
    int32_t var_114 = x20 + 1
    
    if (result_2 s<= result_6)
    label_107ec1c:
        int64_t result_3 = result_2
        
        do
            var_114 = x20
            result_3 = sub_107e870(arg1, result_3, arg7, arg8, &var_114, &var_88)
        while (var_114 != x20)
        
        int64_t x0_8 = *arg1
        
        if (x0_8 == 0)
            x25_1 = x8_1
            result = 0xffffff7f
        else
            x25_1 = x8_1
            
            if (arg1[2] == result_2)
                goto label_107eca8
            
            int64_t x8_15 = arg1[0x73]
            
            if (x8_15 == 0)
                result = 0xffffff80
                
                if (x8_15.d != 0)
                    result = 0
            else if (x8_15(x0_8, result_2, 0) == 0xffffffff)
                result = 0xffffff80
            else
                arg1[2] = result_2
                ogg_sync_reset(&arg1[4])
            label_107eca8:
                int128_t var_110
                int128_t var_f0
                result = sub_107e3e8(arg1, &var_f0, &var_110, &result_1, &var_b4, nullptr)
                
                if (result.d == 0)
                    int32_t x22_2 = (arg1[0x44]).d
                    int64_t x21_1 = arg1[2]
                    int64_t x0_13 = sub_107e724(arg1, &var_f0)
                    int128_t v0_1
                    result, v0_1 = sub_107ea6c(arg1, result_2, arg1[2], arg4, arg5, arg6, result_1, 
                        zx.q(var_b4), arg9 + 1)
                    
                    if (result.d == 0)
                        result = result_1
                        
                        if (result != 0)
                            result, v0_1 = free(result)
                        
                        arg1[9][arg9 + 1] = result_2
                        arg1[0xb][arg9 + 1] = sx.q(x22_2)
                        arg1[0xa][arg9 + 1] = x21_1
                        int128_t* x8_28 = arg1[0xd] + (arg9 + 1) * 0x38
                        int64_t var_c0
                        x8_28[3].q = var_c0
                        int128_t var_d0
                        x8_28[2] = var_d0
                        int128_t var_e0
                        x8_28[1] = var_e0
                        *x8_28 = var_f0
                        int128_t* x8_30 = arg1[0xe] + ((arg9 + 1) << 5)
                        int128_t var_100
                        x8_30[1] = var_100
                        *x8_30 = var_110
                        int64_t* x8_31 = arg1[0xc]
                        void* x9_10 = &x8_31[arg9 * 2]
                        *(x8_31 + (8 | (0xfffffffffffffff & arg9) << 4)) = var_88
                        int64_t x8_33 = *(x9_10 + 0x18) - x0_13
                        *(x9_10 + 0x10) = x0_13
                        *(x9_10 + 0x18) = x8_33 & not.q(x8_33 s>> 0x3f)
                        result = 0
    else
        int64_t result_4 = arg4
        result_2 = result_4
        int64_t x8_11
        
        while (true)
        label_107eb50:
            int64_t result_5 = result_6
            
            if (result_4 - result_6 s>= 0x10000)
                int64_t x8_8 = result_4 + result_6
                int64_t x8_9
                
                if (x8_8 s< 0)
                    x8_9 = x8_8 + 1
                else
                    x8_9 = x8_8
                
                result_5 = x8_9 s>> 1
            
            int64_t x0 = *arg1
            
            if (x0 == 0)
                x8_11 = 0
                result = 0xffffff7f
                break
            
            if (arg1[2] != result_5)
                x8_11 = arg1[0x73]
                
                if (x8_11 == 0)
                    result = 0xffffff80
                    break
                
                if (x8_11(x0, result_5, 0) == 0xffffffff)
                    x8_11 = 0
                    result = 0xffffff80
                    break
                
                arg1[2] = result_5
                ogg_sync_reset(&arg1[4])
            
            void var_a8
            result = sub_107bd58(arg1, &var_a8, -1)
            
            if (result == -0x80)
                x8_11 = 0
                break
            
            if ((result & 0xffffffff80000000) == 0)
                int32_t x0_5 = ogg_page_serialno(&var_a8)
                
                if ((x21 & 1) == 0)
                    int32_t i = arg8
                    int64_t* x10_2 = arg7
                    
                    do
                        if (*x10_2 == sx.q(x0_5))
                            result_6 = arg1[2]
                            
                            if (result_4 s> result_6)
                                goto label_107eb50
                            
                            goto label_107ec1c
                        
                        i -= 1
                        x10_2 = &x10_2[1]
                    while (i != 0)
            
            if (result s>= 0)
                result_2 = result
            
            result_4 = result_5
            
            if (result_5 s<= result_6)
                goto label_107ec1c
        
        x25_1 = x8_1
        
        if (x8_11.d != 0)
            result = 0
else
    int64_t x8_4 = 0
    
    while (arg7[x8_4] != sx.q(arg6.d))
        x8_4 += 1
        
        if (arg8 == x8_4.d)
            goto label_107eb1c
    
    if (x20 != arg6.d)
        int64_t x1_6 = arg4
        
        do
            var_7c = x20
            x1_6 = sub_107e870(arg1, x1_6, arg7, arg8, &var_7c, &var_78)
        while (var_7c != x20)
    
    int64_t x0_17 = arg1[9]
    x25_1 = x8_1
    arg1[8].d = (arg9 + 1).d
    
    if (x0_17 != 0)
        free(x0_17)
    
    int64_t x0_18 = arg1[0xb]
    
    if (x0_18 != 0)
        free(x0_18)
    
    int64_t x0_19 = arg1[0xa]
    
    if (x0_19 != 0)
        free(x0_19)
    
    int64_t x21_2 = sx.q(arg1[8].d)
    int64_t x0_21 = malloc((x21_2 << 3) + 8)
    int64_t oldmem = arg1[0xd]
    arg1[9] = x0_21
    int64_t x0_23 = realloc(oldmem, x21_2 * 0x38)
    int64_t x9_3 = sx.q(arg1[8].d)
    int64_t oldmem_1 = arg1[0xe]
    arg1[0xd] = x0_23
    int64_t x0_25 = realloc(oldmem_1, x9_3 << 5)
    int64_t x22_3 = sx.q(arg1[8].d)
    arg1[0xe] = x0_25
    int64_t bytes = x22_3 << 3
    arg1[0xb] = malloc(bytes)
    arg1[0xa] = malloc(bytes)
    int64_t* x0_31 = malloc(x22_3 << 4)
    int64_t x8_20 = arg1[9]
    arg1[0xc] = x0_31
    *(x8_20 + ((arg9 + 1) << 3)) = arg4
    *(x8_20 + (arg9 << 3)) = arg2
    int64_t x8_21 = var_78
    *(x0_31 + (8 | (0xfffffffffffffff & arg9) << 4)) = x8_21 & not.q(x8_21 s>> 0x3f)
    result = 0

if (*(x25_1 + 0x28) == x8_2)
    return result

__stack_chk_fail()
noreturn
